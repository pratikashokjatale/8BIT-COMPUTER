<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
   
   
</head>
<body>

 <h1>🖥️ 8-Bit Computer </h1>
<p>A simple <strong>8-bit CPU</strong> implemented in <strong>Verilog</strong>, featuring a <strong>basic instruction set, ALU, and 256 bytes of RAM</strong>. This project allows for <strong>assembly programming, memory operations, and CPU simulation</strong>.</p>

<h2>📂 Project Structure</h2>
   <pre>
     SimpleLang-Compiler/
│── src/
│   ├── lexer.c
│   ├── parser.c
│   ├── ast.c
│   ├── codegen.c
│   ├── main.c
│── include/
│   ├── lexer.h
│   ├── parser.h
│   ├── ast.h
│   ├── codegen.h
│── build/
│── Makefile
│── input.txt

   </pre>

<h2>🚀 Getting Started</h2>
    <h3>1️⃣ Clone the Repository</h3>
    <pre><code>git clone https://github.com/yourusername/8bit-computer.git
cd 8bit-computer</code></pre>

  <h3>2️⃣ Assemble an Example Program</h3>
   <pre><code>./asm/assembler.py tests/multiplication_test.asm > build/memory.list</code></pre>

   <h3>3️⃣ Run the CPU Simulation</h3>
    <pre><code>make clean && make run</code></pre>

  <h3>4️⃣ Run Tests</h3>
    <pre><code>make test</code></pre>
    <h2>🔧 Instruction Set</h2>
    <h3>Data Transfer</h3>
    <table>
        <tr>
            <th>Instruction</th>
            <th>Description</th>
        </tr>
        <tr><td><code>lda</code></td><td>Load memory content into register A</td></tr>
        <tr><td><code>sta</code></td><td>Store register A into memory</td></tr>
        <tr><td><code>ldi r D</code></td><td>Load immediate data D into register r</td></tr>
        <tr><td><code>mov r M D</code></td><td>Move memory data at address D into register r</td></tr>
        <tr><td><code>mov r2 r1</code></td><td>Copy data from register r1 to r2</td></tr>
        <tr><td><code>mov M r D</code></td><td>Store register r into memory at address D</td></tr>
    </table>
    <h3>Arithmetic Operations</h3>
    <table>
        <tr>
            <th>Instruction</th>
            <th>Description</th>
        </tr>
        <tr><td><code>add</code></td><td>A = A + B</td></tr>
        <tr><td><code>adc</code></td><td>A = A + B + carry</td></tr>
        <tr><td><code>sub</code></td><td>A = A - B</td></tr>
        <tr><td><code>inc</code></td><td>A = A + 1</td></tr>
        <tr><td><code>dec</code></td><td>A = A - 1</td></tr>
        <tr><td><code>cmp</code></td><td>Compare A and B (affects flags)</td></tr>
    </table>
    <h3>Logical Operations</h3>
    <table>
        <tr>
            <th>Instruction</th>
            <th>Description</th>
        </tr>
        <tr><td><code>and</code></td><td>A = A AND B</td></tr>
        <tr><td><code>or</code></td><td>A = A OR B</td></tr>
        <tr><td><code>xor</code></td><td>A = A XOR B</td></tr>
    </table>

   <h2>📜 License</h2>
    <p>This project is open-source and free to use for educational purposes.</p>



  <h2>📞 Contact</h2>
    <p>If you have any questions or suggestions, feel free to reach out!</p>
    <p>🔗 website: <a href="https://pratikjatale.in" target="_blank">Pratik jatale</a></p>

</body>
</html>
