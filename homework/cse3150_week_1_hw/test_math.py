import subprocess

def run_program(args=None):
    if args is None:
        args = []
    result = subprocess.run(
        ["./src/main"] + args,
        capture_output=True,
        text=True
    )
    return result.stdout.strip()

def test_square():
    output = run_program()
    first_line = output.splitlines()[0]
    assert first_line == "25"

def test_multiply_and_add():
    output = run_program()
    lines = output.splitlines()
    assert lines[1] == "30"   # 3 * 10
    assert lines[2] == "8"    # 3 + 5
