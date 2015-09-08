CUDA Introduction
=================

**University of Pennsylvania, CIS 565: GPU Programming and Architecture, Project 1**

* Ziye Zhou
* Tested on: Windows 8.1, i7-4910 @ 2.90GHz 32GB, GTX 880M 8192MB (Alienware)

### (TODO: Your README)

Include screenshots, analysis, etc. (Remember, this is public, so don't put
anything here that you don't want to share with the world.)

### Questions

For Part 1, there are two ways to measure performance:
* Disable visualization so that the framerate reported will be for the the
  simulation only, and not be limited to 60 fps. This way, the framerate
  reported in the window title will be useful.
  * Change `#define VISUALIZE` to `0`.
* For tighter timing measurement, you can use CUDA events to measure just the
  simulation CUDA kernel. Info on this can be found online easily. You will
  probably have to average over several simulation steps, similar to the way
  FPS is currently calculated.

**Answer these:**

* Parts 1 & 2: How does changing the tile and block sizes affect performance?
  Why?
Ans: Increase the tile and block sizes will increase the performance to a certain amount but will stay the same after a certain threshold. When the computation unit is not enough for the task, increasing the number will increase the performace, but when computation units are more than enough, increasing the number will not affect the performance.


* Part 1: How does changing the number of planets affect performance? Why?
Ans: The more the planets, the worse the performance. Because when adding more planets into the scene, we need more computation.

* Part 2: Without running comparisons of CPU code vs. GPU code, how would you
  expect the performance to compare? Why? What might be the trade-offs?
Ans: If the number of the parallel computation number is small, I think CPU will win in the comparison; while if the parallel computation number is large, I think GPU will win the comparison. The tradeoff lies between the computation and the context switch. When number of computation is small, the bottleneck will be the context switch. If the number of computation is large, the bottleneck will be the computation itself.

### ScreenShot


## Submit

If you have modified any of the `CMakeLists.txt` files at all (aside from the
list of `SOURCE_FILES`), you must test that your project can build in Moore
100B/C. Beware of any build issues discussed on the Google Group.

1. Open a GitHub pull request so that we can see that you have finished.
   The title should be "Submission: YOUR NAME".
2. Send an email to the TA (gmail: kainino1+cis565@) with:
   * **Subject**: in the form of `[CIS565] Project 0: PENNKEY`
   * Direct link to your pull request on GitHub
   * In the form of a grade (0-100+), evaluate your own performance on the
     project.
   * Feedback on the project itself, if any.

And you're done!
