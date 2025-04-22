// #include <stdio.h>
// #include <stdbool.h>
// #define P 5 // number of processes
// #define R 3 // number of resources
// .
//                  {2, 2, 2},
//                  {4, 3, 3}};
// int Allocation[P][R] = {{0, 1, 0},
//                         {2, 0, 0},
//                         {3, 0, 2},
//                         {2, 1, 1},
//                         {0, 0, 2}};
// int Need[P][R];
// void calculateNeed()
// {
//     for (int i = 0; i < P; i++)
//     {
//         for (int j = 0; j < R; j++)
//         {
//             Need[i][j] = Max[i][j] - Allocation[i][j];
//         }
//     }
// }
// bool isSafe()
// {
//     int work[R];
//     bool finish[P] = {0};
//     int safeSeq[P];
//     int count = 0;

//     for (int i = 0; i < R; i++)
//     {
//         work[i] = Available[i];
//     }

//     while (count < P)
//     {
//         bool found = false;
//         for (int p = 0; p < P; p++)
//         {
//             if (!finish[p])
//             {
//                 bool canExecute = true;
//                 for (int r = 0; r < R; r++)
//                 {
//                     if (Need[p][r] > work[r])
//                     {
//                         canExecute = false;
//                         break;
//                     }
//                 }

//                 if (canExecute)
//                 {
//                     for (int r = 0; r < R; r++)
//                     {
//                         work[r] += Allocation[p][r];
//                     }
//                     safeSeq[count++] = p;
//                     finish[p] = true;
//                     found = true;
//                 }
//             }
//         }

//         if (!found)
//         {
//             return false; // System is not in a safe state
//         }
//     }

//     printf("Safe sequence is: ");
//     for (int i = 0; i < P; i++)
//     {
//         printf("P%d ", safeSeq[i]);
//     }
//     printf("\n");
//     return true;
// }
// int main()
// {
//     calculateNeed();

//     if (isSafe())
//     {
//         printf("System is in a safe state.\n");
//     }
//     else
//     {
//         printf("System is in an unsafe state.\n");
//     }

//     return 0;
// }


// FCFS Scheduling Algorithm
#include <stdio.h>

struct Process {
    int pid;
    int at;  // Arrival Time
    int bt;  // Burst Time
    int ct;  // Completion Time
    int tat; // Turnaround Time
    int wt;  // Waiting Time
};

void sortByArrival(struct Process p[], int n) {
    struct Process temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (p[j].at > p[j + 1].at) {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    float totalTAT = 0, totalWT = 0;
    
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    struct Process p[n];

    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;
        printf("Enter Arrival Time and Burst Time for Process P%d: ", p[i].pid);
        scanf("%d %d", &p[i].at, &p[i].bt);
    }

    // Sort processes by arrival time
    sortByArrival(p, n);

    int time = 0;
    for (int i = 0; i < n; i++) {
        if (time < p[i].at) {
            time = p[i].at;
        }
        time += p[i].bt;
        p[i].ct = time;
        p[i].tat = p[i].ct - p[i].at;
        p[i].wt = p[i].tat - p[i].bt;

        totalTAT += p[i].tat;
        totalWT += p[i].wt;
    }

    printf("\nGantt Chart:\n| ");
    for (int i = 0; i < n; i++) {
        printf("P%d | ", p[i].pid);
    }

    printf("\n\nProcess\tAT\tBT\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n",
            p[i].pid, p[i].at, p[i].bt, p[i].ct, p[i].tat, p[i].wt);
    }

    printf("\nAverage Turnaround Time: %.2f", totalTAT / n);
    printf("\nAverage Waiting Time: %.2f\n", totalWT / n);

    return 0;
}



// SJF Scheduling Algorithm (Non - preemptive)
// #include <stdio.h>
// int main() {
//     int n, bt[20], p[20], wt[20], tat[20], i, j, temp;
//     float avg_wt = 0, avg_tat = 0;

//     printf("Enter number of processes: ");
//     scanf("%d", &n);

//     for(i = 0; i < n; i++) {
//         printf("Enter Burst Time for P[%d]: ", i + 1);
//         scanf("%d", &bt[i]);
//         p[i] = i + 1;
//     }
//     // Sort by burst time
//     for(i = 0; i < n - 1; i++) {
//         for(j = i + 1; j < n; j++) {
//             if(bt[i] > bt[j]) {
//                 temp = bt[i]; bt[i] = bt[j]; bt[j] = temp;
//                 temp = p[i]; p[i] = p[j]; p[j] = temp;
//             }
//         }
//     }
//     wt[0] = 0;
//     for(i = 1; i < n; i++)
//         wt[i] = wt[i - 1] + bt[i - 1];

//     for(i = 0; i < n; i++) {
//         tat[i] = wt[i] + bt[i];
//         avg_wt += wt[i];
//         avg_tat += tat[i];
//     }
//     // Gantt Chart
//     printf("\nGantt Chart:\n|");
//     for(i = 0; i < n; i++)
//         printf(" P%d |", p[i]);

//     printf("\n0");
//     for(i = 0; i < n; i++)
//         printf("   %d", wt[i] + bt[i]);

//     printf("\n\nProcess\tBT\tWT\tTAT\n");
//     for(i = 0; i < n; i++)
//         printf("P[%d]\t%d\t%d\t%d\n", p[i], bt[i], wt[i], tat[i]);

//     printf("\nAverage Waiting Time: %.2f", avg_wt / n);
//     printf("\nAverage Turnaround Time: %.2f\n", avg_tat / n);

//     return 0;
// }



// SJF Scheduling Algorithm (Preemptive)
// #include <stdio.h>

// int main() {
//     int n, at[10], bt[10], rt[10], wt[10], tat[10];
//     int complete = 0, time = 0, minm = 9999, shortest = 0, finish_time;
//     float avg_wt = 0, avg_tat = 0;
//     int check = 0;
//     char gantt[1000] = "";
    
//     printf("Enter number of processes: ");
//     scanf("%d", &n);

//     for(int i = 0; i < n; i++) {
//         printf("Enter Arrival Time and Burst Time for P[%d]: ", i + 1);
//         scanf("%d %d", &at[i], &bt[i]);
//         rt[i] = bt[i];
//     }

//     printf("\nGantt Chart:\n|");
//     int prev = -1;

//     while (complete != n) {
//         minm = 9999;
//         check = 0;

//         for (int j = 0; j < n; j++) {
//             if ((at[j] <= time) && (rt[j] < minm) && rt[j] > 0) {
//                 minm = rt[j];
//                 shortest = j;
//                 check = 1;
//             }
//         }

//         if (check == 0) {
//             time++;
//             continue;
//         }

//         if (shortest != prev) {
//             printf(" P%d |", shortest + 1);
//             prev = shortest;
//         }

//         rt[shortest]--;
//         if (rt[shortest] == 0) {
//             complete++;
//             finish_time = time + 1;
//             wt[shortest] = finish_time - bt[shortest] - at[shortest];
//             tat[shortest] = finish_time - at[shortest];
//             avg_wt += wt[shortest];
//             avg_tat += tat[shortest];
//         }
//         time++;
//     }

//     printf("\n0");
//     time = 0;
//     prev = -1;
//     while (complete > 0) {
//         minm = 9999;
//         check = 0;
//         for (int j = 0; j < n; j++) {
//             if ((at[j] <= time) && (rt[j] > 0) && (rt[j] < minm)) {
//                 minm = rt[j];
//                 shortest = j;
//                 check = 1;
//             }
//         }

//         if (check == 0) {
//             time++;
//             continue;
//         }

//         if (prev != shortest) {
//             printf("   %d", time);
//             prev = shortest;
//         }
//         rt[shortest]--;
//         if (rt[shortest] == 0)
//             complete--;
//         time++;
//     }
//     printf("   %d", time);

//     // Result
//     printf("\n\nProcess\tAT\tBT\tWT\tTAT\n");
//     for(int i = 0; i < n; i++)
//         printf("P[%d]\t%d\t%d\t%d\t%d\n", i + 1, at[i], bt[i], wt[i], tat[i]);

//     printf("\nAverage Waiting Time: %.2f", avg_wt / n);
//     printf("\nAverage Turnaround Time: %.2f\n", avg_tat / n);

//     return 0;
// }



// Priority Scheduling Algorithm (Non - preemptive)
// #include <stdio.h>

// int main() {
//     int n, i, j, temp;
//     int bt[20], p[20], wt[20], tat[20], prio[20];
//     float avg_wt = 0, avg_tat = 0;

//     printf("Enter number of processes: ");
//     scanf("%d", &n);

//     for(i = 0; i < n; i++) {
//         printf("Enter burst time and priority for P[%d]: ", i + 1);
//         scanf("%d %d", &bt[i], &prio[i]);
//         p[i] = i + 1;
//     }

//     // Sort by priority
//     for(i = 0; i < n - 1; i++) {
//         for(j = i + 1; j < n; j++) {
//             if(prio[i] > prio[j]) {
//                 temp = prio[i]; prio[i] = prio[j]; prio[j] = temp;
//                 temp = bt[i]; bt[i] = bt[j]; bt[j] = temp;
//                 temp = p[i]; p[i] = p[j]; p[j] = temp;
//             }
//         }
//     }

//     wt[0] = 0;
//     for(i = 1; i < n; i++) {
//         wt[i] = wt[i - 1] + bt[i - 1];
//     }

//     for(i = 0; i < n; i++) {
//         tat[i] = wt[i] + bt[i];
//         avg_wt += wt[i];
//         avg_tat += tat[i];
//     }

//     printf("\nGantt Chart:\n|");
//     for(i = 0; i < n; i++) {
//         printf(" P%d |", p[i]);
//     }

//     printf("\n0");
//     for(i = 0; i < n; i++) {
//         printf("   %d", wt[i] + bt[i]);
//     }

//     printf("\n\nProcess\tBT\tPriority\tWT\tTAT\n");
//     for(i = 0; i < n; i++) {
//         printf("P[%d]\t%d\t%d\t\t%d\t%d\n", p[i], bt[i], prio[i], wt[i], tat[i]);
//     }

//     printf("\nAverage Waiting Time: %.2f", avg_wt / n);
//     printf("\nAverage Turnaround Time: %.2f\n", avg_tat / n);

//     return 0;
// }


// Round Robin Scheduling Algorithm
// #include <stdio.h>

// typedef struct {
//     int pid, at, bt, rt;
// } Process;

// int main() {
//     int n, tq, time = 0, remain;
//     Process p[10];
//     int wt[10], tat[10];
//     float total_wt = 0, total_tat = 0;
//     int i, done = 0;

//     printf("Enter number of processes: ");
//     scanf("%d", &n);
//     remain = n;

//     for(i = 0; i < n; i++) {
//         p[i].pid = i + 1;
//         printf("Enter Arrival Time and Burst Time for P[%d]: ", p[i].pid);
//         scanf("%d %d", &p[i].at, &p[i].bt);
//         p[i].rt = p[i].bt;
//     }

//     printf("Enter Time Quantum: ");
//     scanf("%d", &tq);

//     printf("\nGantt Chart:\n|");
//     int start = 0;
//     while(remain != 0) {
//         done = 1;
//         for(i = 0; i < n; i++) {
//             if(p[i].rt > 0 && p[i].at <= time) {
//                 done = 0;
//                 printf(" P%d |", p[i].pid);
//                 if(p[i].rt <= tq) {
//                     time += p[i].rt;
//                     p[i].rt = 0;
//                     tat[i] = time - p[i].at;
//                     wt[i] = tat[i] - p[i].bt;
//                     total_wt += wt[i];
//                     total_tat += tat[i];
//                     remain--;
//                 } else {
//                     p[i].rt -= tq;
//                     time += tq;
//                 }
//             }
//         }
//         if(done) time++; // idle time
//     }

//     // Time line
//     printf("\n0");
//     time = 0;
//     int again = 1;
//     remain = n;
//     while(remain > 0) {
//         again = 0;
//         for(i = 0; i < n; i++) {
//             if(p[i].bt > 0 && p[i].rt < p[i].bt) {
//                 int exec_time = p[i].bt - p[i].rt;
//                 p[i].bt = p[i].rt;
//                 printf("   %d", time += exec_time > tq ? tq : exec_time);
//                 if(p[i].bt == 0) remain--;
//             }
//         }
//     }

//     printf("\n\nProcess\tAT\tBT\tWT\tTAT\n");
//     for(i = 0; i < n; i++) {
//         printf("P[%d]\t%d\t%d\t%d\t%d\n", p[i].pid, p[i].at, p[i].bt + wt[i], wt[i], tat[i]);
//     }

//     printf("\nAverage Waiting Time: %.2f", total_wt / n);
//     printf("\nAverage Turnaround Time: %.2f\n", total_tat / n);

//     return 0;
// }



// Banker's Algorithm
// #include <stdio.h>
// #include <stdbool.h>

// #define MAX_PROCESSES 10
// #define MAX_RESOURCES 10

// int main() {
//     int n, m; // n = number of processes, m = number of resources
//     int Allocation[MAX_PROCESSES][MAX_RESOURCES];
//     int Max[MAX_PROCESSES][MAX_RESOURCES];
//     int Available[MAX_RESOURCES];
//     int Need[MAX_PROCESSES][MAX_RESOURCES];
//     int Finish[MAX_PROCESSES] = {0};
//     int SafeSequence[MAX_PROCESSES];
//     int i, j, k;

//     printf("Enter number of processes: ");
//     scanf("%d", &n);

//     printf("Enter number of resources: ");
//     scanf("%d", &m);

//     // Allocation matrix
//     printf("Enter Allocation matrix:\n");
//     for(i = 0; i < n; i++) {
//         printf("P[%d]: ", i);
//         for(j = 0; j < m; j++) {
//             scanf("%d", &Allocation[i][j]);
//         }
//     }

//     // Max matrix
//     printf("Enter Max matrix:\n");
//     for(i = 0; i < n; i++) {
//         printf("P[%d]: ", i);
//         for(j = 0; j < m; j++) {
//             scanf("%d", &Max[i][j]);
//         }
//     }

//     // Available resources
//     printf("Enter Available resources: ");
//     for(j = 0; j < m; j++) {
//         scanf("%d", &Available[j]);
//     }

//     // Calculate Need matrix
//     for(i = 0; i < n; i++) {
//         for(j = 0; j < m; j++) {
//             Need[i][j] = Max[i][j] - Allocation[i][j];
//         }
//     }

//     int count = 0;
//     while(count < n) {
//         bool found = false;
//         for(i = 0; i < n; i++) {
//             if(!Finish[i]) {
//                 bool canAllocate = true;
//                 for(j = 0; j < m; j++) {
//                     if(Need[i][j] > Available[j]) {
//                         canAllocate = false;
//                         break;
//                     }
//                 }
//                 if(canAllocate) {
//                     for(k = 0; k < m; k++) {
//                         Available[k] += Allocation[i][k];
//                     }
//                     SafeSequence[count++] = i;
//                     Finish[i] = 1;
//                     found = true;
//                 }
//             }
//         }
//         if(!found) {
//             break; // Deadlock detected
//         }
//     }

//     if(count == n) {
//         printf("\nSystem is in a SAFE state.\nSafe Sequence: ");
//         for(i = 0; i < n; i++) {
//             printf("P[%d] ", SafeSequence[i]);
//         }
//         printf("\n");
//     } else {
//         printf("\nSystem is in a DEADLOCK state!\n");
//         printf("Processes not in safe sequence: ");
//         for(i = 0; i < n; i++) {
//             if(!Finish[i]) {
//                 printf("P[%d] ", i);
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }
