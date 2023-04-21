# ThreadLearning
创建线程只需把函数添加到线程当中
  形式1：
  std::thread myThread ( thread_fun);
  //函数形式为void thread_fun()
  myThread.join();
  //同一个函数可以代码复用，创建多个线程

  形式2：
  std::thread myThread ( thread_fun(100));
  myThread.join();
  //函数形式为void thread_fun(int x)
  //同一个函数可以代码复用，创建多个线程

# ThreadGet.cpp
使用步骤
使用async函数启动一个异步任务(创建线程，并且执行线程处理函数),返回future对象
通过future对象中get()方法获取线程处理函数的返回值
