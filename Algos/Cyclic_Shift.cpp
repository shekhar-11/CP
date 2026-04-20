 temp[i] = v[(i + k) % n];  --- for left shift




reverse(v.begin(), v.begin() + k);
reverse(v.begin() + k, v.end());
reverse(v.begin(), v.end());





rotate(v.begin(), v.begin() + k, v.end());




