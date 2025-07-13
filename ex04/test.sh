#!/bin/bash

pass=0
fail=0

run_test() {
    name="$1"
    input="$2"
    from="$3"
    to="$4"
    expected="$5"

    echo "$input" > "${name}.txt"
    echo "$expected" > "${name}_expected.txt"

    ./sed_is_for_losers "${name}.txt" "$from" "$to"

    if diff "${name}.txt.replace" "${name}_expected.txt" > /dev/null; then
        echo "[PASS] $name"
        pass=$((pass + 1))
    else
        echo "[FAIL] $name"
        fail=$((fail + 1))
    fi

    rm -f "${name}.txt" "${name}.txt.replace" "${name}_expected.txt"
}

# --- テストケース一覧 ---
run_test "test1" "hoge" "hoge" "fuga" "fuga"
run_test "test2" "hoge hoge" "hoge" "fuga" "fuga fuga"
run_test "test3" "foo bar baz" "bar" "BAR" "foo BAR baz"
run_test "test4" "abcabc" "abc" "XYZ" "XYZXYZ"
run_test "test5" "nothing changes" "zzz" "yyy" "nothing changes"

# --- 結果表示 ---
echo
echo "Test Summary: ${pass} passed, ${fail} failed"

if [ "$fail" -eq 0 ]; then
    exit 0
else
    exit 1
fi

