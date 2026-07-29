<h2><a href="https://www.geeksforgeeks.org/problems/minimum-days-to-make-m-bouquets/1">Minimum Days to Make m Bouquets</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18.6667px;">In a row of flowers, each flower blooms on a specific day. Given an integer array <strong>arr[]</strong>, where <strong>arr[i]</strong> denotes the day on which the flower at position<strong> i</strong> blooms.</span></p>
<p><span style="font-size: 18.6667px;">To make a bouquet, you need to collect <strong>k</strong> adjacent flowers that have already bloomed. Each flower can be used in at most one bouquet.</span></p>
<p><span style="font-size: 18.6667px;">Find the <strong>minimum</strong> number of days required to make <strong>m</strong> bouquets. If it is impossible to do so, return <strong>-1</strong>.</span></p>
<h4><span style="font-size: 18px;"><strong>Examples</strong>:</span></h4>
<pre><span style="font-size: 18px;"><strong>Input</strong>: arr[] = [3, 4, 2, 7, 13, 8, 5], m = 3, k = 2
<strong>Output</strong>: 8
<strong>Explanation</strong>: </span><span style="font-size: 18px;">We need to make 3 bouquets, each consisting of 2 adjacent flowers.
-&gt; By day 8, all flowers have bloomed except the flower at position 5 (1-indexed).
-&gt; Form the 1st bouquet using the first 2 flowers.
-&gt; Form the 2nd bouquet using the next 2 flowers.
-&gt; Form the 3rd bouquet using the last 2 flowers.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input</strong>: </span><span style="font-size: 18px;">arr[] = [5, 5, 5, 5, 10, 5, 5], m = 2, k = 3,</span>
<span style="font-size: 18px;"><strong>Output</strong>: 10</span>
<span style="font-size: 18px;"><strong>Explanation</strong>: We need to make 2 bouquets, each consisting of 3 adjacent flowers.
-&gt; By day 5, all flowers have bloomed except the flower at position 5 (1-indexed).
-&gt; We can form the 1st bouquet using the first 3 bloomed flowers.
-&gt; It is not possible to form the 2nd bouquet now.
-&gt; By day 10, all the flowers have bloomed.
-&gt; We can then form 2 bouquets, each consisting of 3 adjacent flowers.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>m = 3, k = 2, arr[] = [1, 10, 3, 10, 2]<br><strong>Output: </strong></span><span style="font-size: 18px;">-1</span><br><span style="font-size: 18px;"><strong>Explanation:</strong> We need to make 3 bouquets, each consisting of 2 flowers.
-&gt; This requires a total of 6 flowers.
-&gt; There are only 5 flowers available.
-&gt; Therefore, it is impossible to make the required bouquets.<br></span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:<br></strong>1 ≤ k ≤ arr.size() ≤ 10<sup>5</sup><strong><br></strong></span><span style="font-size: 18px;">1 ≤ m ≤ 10<sup>5</sup><br>1 ≤ arr[i] ≤ 10<sup>9</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Bloomberg</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Google</code>&nbsp;<code>Flipkart</code>&nbsp;<code>NPCI</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search</code>&nbsp;<code>Arrays</code>&nbsp;