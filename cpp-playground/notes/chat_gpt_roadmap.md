Mục tiêu cuối cùng (12 tuần)

Sau 12 tuần, project của bạn nên chạy được:

Tensor
        ↓
Linear
        ↓
ReLU
        ↓
Linear
        ↓
Softmax
        ↓
CrossEntropy
        ↓
Backward
        ↓
SGD

Train được MNIST.

Sau đó chuyển sang GPU.

Đừng nghĩ đến Transformer hay CNN ngay.

Nếu MLP chạy tốt thì 80% kiến trúc framework đã có.

Tuần 1 (Deadline: 7 ngày)
Mục tiêu

Viết micrograd bằng C++

Không đọc source trước.

Tự viết.

Class đầu tiên:

class Value
{
    double data;
    double grad;

    ...
};

Operator overload:

+
-
*
/
pow

Sau đó

backward()

Có graph.

Có topo sort.

Có chain rule.

Đây là lúc bạn sẽ gặp những câu hỏi như:

Node lưu gì?
Parent hay Child?
Làm sao tránh tính gradient hai lần?
DFS hay BFS?
Lambda lưu ở đâu?

Đó là những câu hỏi đáng để dành thời gian.

Tuần 2

Viết MLP.

Neuron

↓

Layer

↓

MLP

Forward.

Backward.

Train XOR.

Không dùng matrix.

Vẫn scalar.

Nếu XOR không học được thì không được chuyển sang tuần sau.

Tuần 3

Bắt đầu Tensor.

Tensor

Ít nhất hỗ trợ:

shape
stride
data

Operator:

+
-
*
matmul
reshape
transpose

Đừng động tới GPU.

Tuần 4

Biến autograd từ scalar sang tensor.

Đây là phần khó nhất.

Lúc này mới mở tinygrad.

Không copy.

Chỉ xem ý tưởng.

Tuần 5

Viết:

Linear
ReLU
Sigmoid
Softmax
CrossEntropy

Toàn bộ bằng Tensor.

Tuần 6

Viết Optimizer.

SGD

Momentum

Adam

Train MNIST.

CPU.

Nếu train được trên CPU thì framework của bạn đã khá ổn.

Tuần 7-8

Refactor.

Lúc này đọc PyTorch.

Đừng đọc hết.

Chỉ đọc:

Tensor

Autograd

Engine

Bạn sẽ hiểu hơn rất nhiều so với việc đọc ngay từ đầu.

Tuần 9

CUDA.

Đừng port cả framework.

Chỉ port:

Vector Add

Matrix Multiply

Sau đó

Tensor Add

Tensor Mul
Tuần 10

CUDA cho:

Linear
ReLU
SGD
Tuần 11

Backprop trên GPU.

Tuần 12

Train MNIST bằng GPU.

Mỗi ngày nên làm gì?

Nếu bạn có khoảng 4 giờ/ngày, mình sẽ chia như sau:

2,5 giờ: Viết code mới.
1 giờ: Đọc đúng phần liên quan (ví dụ khi đang làm autograd thì đọc micrograd hoặc tài liệu về reverse-mode AD).
30 phút: Refactor, viết test hoặc ghi chú những gì đã học.

Tỷ lệ này rất quan trọng. Nhiều người dành phần lớn thời gian để đọc, nhưng kỹ năng xây dựng hệ thống lại đến từ việc giải quyết các vấn đề phát sinh trong lúc viết mã.

Một thay đổi mình đề xuất so với lộ trình trước

Lúc đầu mình khuyên:

Deep Learning from Scratch

↓

micrograd

↓

tinygrad

Bây giờ mình sẽ đảo lại:

micrograd

↓

Tự viết C++

↓

Deep Learning from Scratch

↓

tinygrad

Lý do:

Khi bạn đã tự vật lộn với autograd, đọc Deep Learning from Scratch sẽ giống như đang xem lời giải của chính bài toán mình vừa làm, thay vì đọc lý thuyết suông.

Mục tiêu trong 7 ngày tới

Nếu chỉ được giao một deadline duy nhất, thì mình sẽ giao như sau:

Trong 7 ngày, hãy hoàn thành một Value class với computational graph và reverse-mode automatic differentiation.

Ví dụ, chương trình sau phải chạy đúng:

Value a(2.0);
Value b(-3.0);
Value c(10.0);

Value d = a * b;
Value e = d + c;
Value f = e.relu();

f.backward();

std::cout << a.grad << '\n';
std::cout << b.grad << '\n';
std::cout << c.grad << '\n';

Nếu bạn làm được điều này mà không nhìn lời giải, thì bạn đã hiểu nền tảng quan trọng nhất của một framework deep learning.

Mình có một đề xuất nữa

Theo mình, đừng đặt mục tiêu là "code một model DL bằng C++".

Hãy đặt mục tiêu lớn hơn một chút:

"Trong 90 ngày, xây dựng một mini-PyTorch bằng C++."

Mục tiêu cụ thể có thể là:

Tensor
Autograd
Module
Linear
Activation
Loss
Optimizer
DataLoader
CPU backend
CUDA backend



==============================================================================================
