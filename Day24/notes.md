# Day 24 11/20/2024

Threads: Synchronization

Quick Note:

- basically you can use a thread to call a function asynchronously
- you can just spawn a thread to run a function and then just keep doing your main function

Race Conditions
- If 2 threads are changing the same value, they might not be synced properly
- you could start performing a write while another is writing and then the former will overwrite it since it finishes last

Barrier
- Syncing mechanism to block threads until they have reached specific execution point
- like wait for 3 threads to finish task 1 before moving them all to task 2
- pthread_barrier_init(&barrier, NULL, 3);
- then
- pthread_barrier_wait(&barrier);
- use a barrier to init multiple threads to init and start @ the same time

Mutexes
- atomic lock/key mechanism to enforce synchronization between threads
- mutual exclusion mechanism
- pthread_mutex_t lock;
- pthread_mutex_init(&lock, NULL);
- pthread_mutex_lock(&lock);
- pthread_mutex_unlock(&lock);
- pthread_mutex_destroy(&lock);