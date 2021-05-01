<!--
  Copyright (c) 2019 Eliah Kagan

  Permission to use, copy, modify, and/or distribute this software for any
  purpose with or without fee is hereby granted.

  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH
  REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
  AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT,
  INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
  LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR
  OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
  PERFORMANCE OF THIS SOFTWARE.
-->

# VariableTemplates - variable template linkage test

**VariableTemplates** showcases how linkage of variable templates has differed
across C++ implementations. This is related to CWG defect [**#2387. Linkage of
const-qualified variable
template**](http://www.open-std.org/jtc1/sc22/wg21/docs/cwg_defects.html#2387).
(Eventually, all major C++ implementations will probably behave the same.)

This program was written in 2019 by Eliah Kagan. It is offered under
[**0BSD**](https://spdx.org/licenses/0BSD.html), a [&ldquo;public-domain
equivalent&rdquo;](https://en.wikipedia.org/wiki/Public-domain-equivalent_license)
license. See [`LICENSE`](LICENSE).
