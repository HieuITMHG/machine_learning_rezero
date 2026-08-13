Giai đoạn 2: Machine Learning từ gốc
Pattern Recognition and Machine Learning (Bishop)

Đây gần như là "kinh thánh".

Bạn sẽ học:

Linear Regression
Logistic Regression
EM
Bayesian
Gaussian
Mixture Model

Không có nhiều code.

Hoặc

The Elements of Statistical Learning

Đây là sách rất nổi tiếng.

Giai đoạn 3: Deep Learning

Cuốn gần như bắt buộc

Deep Learning
Ian Goodfellow

Đây là cuốn giải thích:

Feed Forward
Backpropagation
CNN
RNN
Optimization
Regularization

Quan trọng là:

Nó giải thích tại sao backprop hoạt động.

Giai đoạn 4: Code Deep Learning từ đầu

Đây là phần bạn đang cần.

Deep Learning from Scratch

Tác giả:

Yusuke Saito

Có hai tập.

Đây là một trong số ít sách:

tự viết Dense layer
tự viết Softmax
tự viết Cross Entropy
tự viết SGD
tự viết Adam
tự viết Backprop

Không dùng framework.

Mặc dù viết bằng Python nhưng thuật toán hoàn toàn giống C++.

Giai đoạn 5: Autograd

Đây là bước mà rất nhiều người bỏ qua.

Nếu muốn tự làm framework giống PyTorch thì phải hiểu

x
 \
  *
 / \
a   b

là một graph.

Bạn phải xây

Node
Edge
Topological Sort
Reverse Mode AD

Nguồn cực hay:

micrograd

Andrej Karpathy

Toàn bộ framework chỉ khoảng

100 dòng Python

nhưng dạy:

Computational Graph
Backprop
Reverse Mode

Sau khi hiểu micrograd, bạn hoàn toàn có thể viết lại bằng C++.

Giai đoạn 6: Tensor

Sau autograd

bạn phải xây

Tensor

thay vì

Scalar

Lúc này học

tinygrad

cũng của Karpathy.

Framework khoảng vài nghìn dòng.

Giai đoạn 7: Framework thật

Lúc này mới nên đọc source

PyTorch

hoặc

TensorFlow.

Nếu muốn code bằng C++

Mình sẽ chia project như thế này.

Project 1

Ma trận

Matrix

Tự code

transpose
multiply
broadcast
inverse
Project 2

Linear Regression

Không dùng thư viện.

Project 3

Logistic Regression

Gradient Descent

Project 4

Neural Network

Input

↓

Dense

↓

ReLU

↓

Dense

↓

Softmax

Backprop bằng tay.

Project 5

Autograd

Tạo

class Value

Giống micrograd.

Ví dụ

Value a(2);
Value b(3);

auto c = a * b;
auto d = c + a;

d.backward();
Project 6

Tensor

Tensor

N chiều.

Project 7

CNN

Tự code

Conv
Padding
Stride

Backprop.

Project 8

GPU

CUDA

Project 9

Transformer

Nếu mục tiêu là "viết PyTorch"

Bạn còn phải học:

Expression Template
Template Metaprogramming
Memory Pool
SIMD
AVX
BLAS
OpenMP
CUDA
Computational Graph
Reverse AD
JIT
Tensor Layout
Cache Optimization

Đây đều là những thứ PyTorch dùng.