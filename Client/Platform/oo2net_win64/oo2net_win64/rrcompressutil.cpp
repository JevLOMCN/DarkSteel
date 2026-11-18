// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2net_win64
// Functions: 88

// ByteCopy<oo2net::sort_sym,oo2net::sort_sym> @ 14ff4dec0

void __cdecl
oo2net::ByteCopy<oo2net::sort_sym,oo2net::sort_sym>(sort_sym *param_1,sort_sym *param_2)

{
  *param_1 = *param_2;
  return;
}

// ByteCopy<oo2net::sort_value,oo2net::sort_value> @ 14ff4ded0

void __cdecl
oo2net::ByteCopy<oo2net::sort_value,oo2net::sort_value>(sort_value *param_1,sort_value *param_2)

{
  *param_1 = *param_2;
  return;
}

// ByteCopy<oo2net::Bytes<8>,oo2net::Bytes<8>_> @ 14ff4dee0

void __cdecl
oo2net::ByteCopy<oo2net::Bytes<8>,oo2net::Bytes<8>_>(Bytes<8> *param_1,Bytes<8> *param_2)

{
  *(undefined8 *)param_1->bytes = *(undefined8 *)param_2->bytes;
  return;
}

// ByteSwap<oo2net::sort_sym> @ 14ff4def0

void __cdecl oo2net::ByteSwap<oo2net::sort_sym>(sort_sym *param_1,sort_sym *param_2)

{
  sort_sym sVar1;
  
  sVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = sVar1;
  return;
}

// ByteSwap<oo2net::sort_value> @ 14ff4df10

void __cdecl oo2net::ByteSwap<oo2net::sort_value>(sort_value *param_1,sort_value *param_2)

{
  sort_value sVar1;
  
  sVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = sVar1;
  return;
}

// adjust_heap<oo2net::sort_sym> @ 14ff4df40

void __cdecl
oo2net::netv5heap::adjust_heap<oo2net::sort_sym>(sort_sym *param_1,long64 param_2,long64 param_3)

{
  sort_sym sVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  sVar1 = param_1[param_2];
  lVar3 = param_2;
  while( true ) {
    lVar2 = lVar3 * 2;
    lVar4 = lVar2 + 2;
    if (param_3 <= lVar4) break;
    if (param_1[lVar4].rank <= param_1[lVar2 + 1].rank &&
        param_1[lVar2 + 1].rank != param_1[lVar4].rank) {
      lVar4 = lVar2 + 1;
    }
    param_1[lVar3] = param_1[lVar4];
    lVar3 = lVar4;
  }
  if (lVar4 == param_3) {
    param_1[lVar3] = param_1[lVar2 + 1];
    lVar3 = lVar2 + 1;
  }
  param_1[lVar3] = sVar1;
  while ((param_2 < lVar3 &&
         (lVar2 = lVar3 + -1 >> 1,
         param_1[lVar2].rank <= param_1[lVar3].rank && param_1[lVar3].rank != param_1[lVar2].rank)))
  {
    sVar1 = param_1[lVar2];
    param_1[lVar2] = param_1[lVar3];
    param_1[lVar3] = sVar1;
    lVar3 = lVar2;
  }
  return;
}

// adjust_heap<oo2net::sort_sym,oo2net::stdless<oo2net::sort_sym>_> @ 14ff4e000

void __cdecl
oo2net::adjust_heap<oo2net::sort_sym,oo2net::stdless<oo2net::sort_sym>_>
          (sort_sym *param_1,long64 param_2,long64 param_3,stdless<oo2net::sort_sym> param_4)

{
  longlong lVar1;
  sort_sym sVar2;
  longlong lVar3;
  
  while( true ) {
    lVar1 = param_2 * 2;
    lVar3 = lVar1 + 1;
    if (param_3 <= lVar3) {
      return;
    }
    if (lVar1 + 2 < param_3) {
      lVar3 = lVar3 + (ulonglong)
                      (param_1[lVar3].rank <= param_1[lVar1 + 2].rank &&
                      param_1[lVar1 + 2].rank != param_1[lVar3].rank);
    }
    if (param_1[lVar3].rank <= param_1[param_2].rank && param_1[param_2].rank != param_1[lVar3].rank
       ) break;
    sVar2 = param_1[param_2];
    param_1[param_2] = param_1[lVar3];
    param_1[lVar3] = sVar2;
    param_2 = lVar3;
  }
  return;
}

// default_construct<oo2net::sort_value> @ 14ff4e070

sort_value * __cdecl
oo2net::default_construct<oo2net::sort_value>(sort_value *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<oo2net::sort_value> @ 14ff4e080

sort_value * __cdecl oo2net::destruct<oo2net::sort_value>(sort_value *param_1)

{
  return param_1;
}

// destruct<oo2net::sort_value> @ 14ff4e090

sort_value * __cdecl oo2net::destruct<oo2net::sort_value>(sort_value *param_1,ulong64 param_2)

{
  return param_1;
}

// make_heap<oo2net::sort_sym> @ 14ff4e0a0

void __cdecl oo2net::netv5heap::make_heap<oo2net::sort_sym>(sort_sym *param_1,sort_sym *param_2)

{
  sort_sym sVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = (longlong)param_2 - (longlong)param_1 >> 3;
  lVar6 = (longlong)param_2 - (longlong)param_1 >> 4;
  if (0 < lVar6) {
    lVar4 = lVar6 * 2 + 2;
    do {
      sVar1 = param_1[lVar6 + -1];
      lVar6 = lVar6 + -1;
      lVar4 = lVar4 + -2;
      lVar5 = lVar6;
      lVar3 = lVar4;
      while (lVar3 < lVar7) {
        lVar2 = lVar3;
        if (param_1[lVar3].rank <= param_1[lVar3 + -1].rank &&
            param_1[lVar3 + -1].rank != param_1[lVar3].rank) {
          lVar2 = lVar3 + -1;
        }
        param_1[lVar5] = param_1[lVar2];
        lVar5 = lVar2;
        lVar3 = lVar2 * 2 + 2;
      }
      if (lVar3 == lVar7) {
        param_1[lVar5] = param_1[lVar3 + -1];
        lVar5 = lVar3 + -1;
      }
      param_1[lVar5] = sVar1;
      while ((lVar6 < lVar5 &&
             (lVar3 = lVar5 + -1 >> 1,
             param_1[lVar3].rank <= param_1[lVar5].rank &&
             param_1[lVar5].rank != param_1[lVar3].rank))) {
        sVar1 = param_1[lVar3];
        param_1[lVar3] = param_1[lVar5];
        param_1[lVar5] = sVar1;
        lVar5 = lVar3;
      }
    } while (0 < lVar6);
  }
  return;
}

// make_heap<oo2net::sort_sym> @ 14ff4e1a0

void __cdecl oo2net::make_heap<oo2net::sort_sym>(sort_sym *param_1,sort_sym *param_2)

{
  sort_sym sVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = (longlong)param_2 - (longlong)param_1 >> 3;
  lVar6 = (longlong)param_2 - (longlong)param_1 >> 4;
  if (0 < lVar6) {
    lVar4 = lVar6 * 2 + 1;
    do {
      lVar6 = lVar6 + -1;
      lVar4 = lVar4 + -2;
      lVar2 = lVar6;
      for (lVar3 = lVar4; lVar3 < lVar5; lVar3 = lVar3 * 2 + 1) {
        if (lVar3 + 1 < lVar5) {
          lVar3 = lVar3 + (ulonglong)
                          (param_1[lVar3].rank <= param_1[lVar3 + 1].rank &&
                          param_1[lVar3 + 1].rank != param_1[lVar3].rank);
        }
        if (param_1[lVar3].rank <= param_1[lVar2].rank && param_1[lVar2].rank != param_1[lVar3].rank
           ) break;
        sVar1 = param_1[lVar2];
        param_1[lVar2] = param_1[lVar3];
        param_1[lVar3] = sVar1;
        lVar2 = lVar3;
      }
    } while (0 < lVar6);
  }
  return;
}

// make_heap<oo2net::sort_sym,oo2net::stdless<oo2net::sort_sym>_> @ 14ff4e260

void __cdecl
oo2net::make_heap<oo2net::sort_sym,oo2net::stdless<oo2net::sort_sym>_>
          (sort_sym *param_1,sort_sym *param_2,stdless<oo2net::sort_sym> param_3)

{
  sort_sym sVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = (longlong)param_2 - (longlong)param_1 >> 3;
  lVar6 = (longlong)param_2 - (longlong)param_1 >> 4;
  if (0 < lVar6) {
    lVar4 = lVar6 * 2 + 1;
    do {
      lVar6 = lVar6 + -1;
      lVar4 = lVar4 + -2;
      lVar2 = lVar6;
      for (lVar3 = lVar4; lVar3 < lVar5; lVar3 = lVar3 * 2 + 1) {
        if (lVar3 + 1 < lVar5) {
          lVar3 = lVar3 + (ulonglong)
                          (param_1[lVar3].rank <= param_1[lVar3 + 1].rank &&
                          param_1[lVar3 + 1].rank != param_1[lVar3].rank);
        }
        if (param_1[lVar3].rank <= param_1[lVar2].rank && param_1[lVar2].rank != param_1[lVar3].rank
           ) break;
        sVar1 = param_1[lVar2];
        param_1[lVar2] = param_1[lVar3];
        param_1[lVar3] = sVar1;
        lVar2 = lVar3;
      }
    } while (0 < lVar6);
  }
  return;
}

// move<oo2net::sort_value_&> @ 14ff4e310

sort_value * __cdecl oo2net::move<oo2net::sort_value_&>(sort_value *param_1)

{
  return param_1;
}

// move_construct<oo2net::sort_value> @ 14ff4e320

void __cdecl oo2net::move_construct<oo2net::sort_value>(sort_value *param_1,sort_value *param_2)

{
  if (param_1 != (sort_value *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// move_construct<oo2net::sort_value> @ 14ff4e340

void __cdecl
oo2net::move_construct<oo2net::sort_value>(sort_value *param_1,sort_value *param_2,ulong64 param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      if (param_1 != (sort_value *)0x0) {
        *param_1 = *(sort_value *)(lVar1 + (longlong)param_1);
      }
      param_1 = param_1 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// pop_heap<oo2net::sort_sym> @ 14ff4e380

void __cdecl oo2net::netv5heap::pop_heap<oo2net::sort_sym>(sort_sym *param_1,sort_sym *param_2)

{
  sort_sym sVar1;
  
  sVar1 = *param_1;
  *param_1 = param_2[-1];
  param_2[-1] = sVar1;
  adjust_heap<oo2net::sort_sym>(param_1,0,((longlong)param_2 - (longlong)param_1 >> 3) + -1);
  return;
}

// popped_heap<oo2net::sort_sym> @ 14ff4e3c0

void __cdecl oo2net::popped_heap<oo2net::sort_sym>(sort_sym *param_1,sort_sym *param_2)

{
  sort_sym sVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (longlong)param_2 - (longlong)param_1 >> 3;
  lVar3 = 0;
  lVar2 = 1;
  lVar5 = lVar3;
  if (1 < lVar4) {
    do {
      lVar3 = lVar2;
      if ((lVar2 + 1 < lVar4) &&
         (param_1[lVar2].rank <= param_1[lVar2 + 1].rank &&
          param_1[lVar2 + 1].rank != param_1[lVar2].rank)) {
        lVar3 = lVar2 + 1;
      }
      param_1[lVar5] = param_1[lVar3];
      lVar2 = lVar3 * 2 + 1;
      lVar5 = lVar3;
    } while (lVar2 < lVar4);
  }
  if (lVar3 < lVar4 + -1) {
    param_1[lVar3] = param_1[lVar4 + -1];
    while ((0 < lVar3 &&
           (lVar2 = lVar3 + -1 >> 1,
           param_1[lVar2].rank <= param_1[lVar3].rank && param_1[lVar3].rank != param_1[lVar2].rank)
           )) {
      sVar1 = param_1[lVar2];
      param_1[lVar2] = param_1[lVar3];
      param_1[lVar3] = sVar1;
      lVar3 = lVar2;
    }
  }
  return;
}

// popped_heap<oo2net::sort_sym,oo2net::stdless<oo2net::sort_sym>_> @ 14ff4e480

void __cdecl
oo2net::popped_heap<oo2net::sort_sym,oo2net::stdless<oo2net::sort_sym>_>
          (sort_sym *param_1,sort_sym *param_2,stdless<oo2net::sort_sym> param_3)

{
  sort_sym sVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (longlong)param_2 - (longlong)param_1 >> 3;
  lVar3 = 0;
  lVar2 = 1;
  lVar5 = lVar3;
  if (1 < lVar4) {
    do {
      lVar3 = lVar2;
      if ((lVar2 + 1 < lVar4) &&
         (param_1[lVar2].rank <= param_1[lVar2 + 1].rank &&
          param_1[lVar2 + 1].rank != param_1[lVar2].rank)) {
        lVar3 = lVar2 + 1;
      }
      param_1[lVar5] = param_1[lVar3];
      lVar2 = lVar3 * 2 + 1;
      lVar5 = lVar3;
    } while (lVar2 < lVar4);
  }
  if (lVar3 < lVar4 + -1) {
    param_1[lVar3] = param_1[lVar4 + -1];
    while ((0 < lVar3 &&
           (lVar2 = lVar3 + -1 >> 1,
           param_1[lVar2].rank <= param_1[lVar3].rank && param_1[lVar3].rank != param_1[lVar2].rank)
           )) {
      sVar1 = param_1[lVar2];
      param_1[lVar2] = param_1[lVar3];
      param_1[lVar3] = sVar1;
      lVar3 = lVar2;
    }
  }
  return;
}

// promote_heap<oo2net::sort_sym> @ 14ff4e530

void __cdecl
oo2net::netv5heap::promote_heap<oo2net::sort_sym>(sort_sym *param_1,long64 param_2,long64 param_3)

{
  sort_sym sVar1;
  longlong lVar2;
  
  while ((param_2 < param_3 &&
         (lVar2 = param_3 + -1 >> 1,
         param_1[lVar2].rank <= param_1[param_3].rank &&
         param_1[param_3].rank != param_1[lVar2].rank))) {
    sVar1 = param_1[lVar2];
    param_1[lVar2] = param_1[param_3];
    param_1[param_3] = sVar1;
    param_3 = lVar2;
  }
  return;
}

// promote_heap<oo2net::sort_sym,oo2net::stdless<oo2net::sort_sym>_> @ 14ff4e580

void __cdecl
oo2net::promote_heap<oo2net::sort_sym,oo2net::stdless<oo2net::sort_sym>_>
          (sort_sym *param_1,sort_sym *param_2,sort_sym *param_3,stdless<oo2net::sort_sym> param_4)

{
  sort_sym sVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (longlong)param_3 - (longlong)param_1 >> 3;
  while ((0 < lVar2 &&
         (lVar3 = lVar2 + -1 >> 1,
         param_1[lVar3].rank <= param_1[lVar2].rank && param_1[lVar2].rank != param_1[lVar3].rank)))
  {
    sVar1 = param_1[lVar3];
    param_1[lVar3] = param_1[lVar2];
    param_1[lVar2] = sVar1;
    lVar2 = lVar3;
  }
  return;
}

// push_heap<oo2net::sort_sym> @ 14ff4e5d0

void __cdecl oo2net::netv5heap::push_heap<oo2net::sort_sym>(sort_sym *param_1,sort_sym *param_2)

{
  sort_sym sVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = ((longlong)param_2 - (longlong)param_1 >> 3) + -1;
  while ((0 < lVar2 &&
         (lVar3 = lVar2 + -1 >> 1,
         param_1[lVar3].rank <= param_1[lVar2].rank && param_1[lVar2].rank != param_1[lVar3].rank)))
  {
    sVar1 = param_1[lVar3];
    param_1[lVar3] = param_1[lVar2];
    param_1[lVar2] = sVar1;
    lVar2 = lVar3;
  }
  return;
}

// push_heap<oo2net::sort_sym> @ 14ff4e630

void __cdecl oo2net::push_heap<oo2net::sort_sym>(sort_sym *param_1,sort_sym *param_2)

{
  sort_sym sVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (longlong)param_2 + (-8 - (longlong)param_1) >> 3;
  while ((0 < lVar2 &&
         (lVar3 = lVar2 + -1 >> 1,
         param_1[lVar3].rank <= param_1[lVar2].rank && param_1[lVar2].rank != param_1[lVar3].rank)))
  {
    sVar1 = param_1[lVar3];
    param_1[lVar3] = param_1[lVar2];
    param_1[lVar2] = sVar1;
    lVar2 = lVar3;
  }
  return;
}

// push_heap<oo2net::sort_sym,oo2net::stdless<oo2net::sort_sym>_> @ 14ff4e690

void __cdecl
oo2net::push_heap<oo2net::sort_sym,oo2net::stdless<oo2net::sort_sym>_>
          (sort_sym *param_1,sort_sym *param_2,stdless<oo2net::sort_sym> param_3)

{
  sort_sym sVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (longlong)param_2 + (-8 - (longlong)param_1) >> 3;
  while ((0 < lVar2 &&
         (lVar3 = lVar2 + -1 >> 1,
         param_1[lVar3].rank <= param_1[lVar2].rank && param_1[lVar2].rank != param_1[lVar3].rank)))
  {
    sVar1 = param_1[lVar3];
    param_1[lVar3] = param_1[lVar2];
    param_1[lVar2] = sVar1;
    lVar2 = lVar3;
  }
  return;
}

// stdsort<oo2net::sort_value_*,oo2net::stdless<oo2net::sort_value>_> @ 14ff4e700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
oo2net::stdsort<oo2net::sort_value_*,oo2net::stdless<oo2net::sort_value>_>
          (sort_value *param_1,sort_value *param_2,stdless<oo2net::sort_value> param_3)

{
  uint uVar1;
  uint uVar2;
  sort_value sVar3;
  longlong lVar4;
  sort_value *psVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  sort_value *psVar9;
  sort_value *psVar10;
  sort_value *psVar11;
  ulonglong uVar12;
  sort_value *psVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  undefined1 auStack_648 [1536];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_648;
  uVar14 = (ulonglong)(int)((longlong)param_2 - (longlong)param_1 >> 3);
  psVar13 = param_1 + (uVar14 - 1);
  uVar7 = uVar14;
  puVar17 = local_48;
  if (1 < uVar14) {
    do {
      puVar16 = puVar17;
      puVar17 = puVar16 + -3;
      uVar7 = (uVar7 >> 2) + (uVar7 >> 1);
    } while (uVar7 != 0);
    puVar16[-4] = 0;
LAB_14ff4e7b0:
    do {
      if (1 < uVar14) {
        if (uVar14 == 2) {
          if (param_1->value < psVar13->value) {
            sVar3 = *param_1;
            *param_1 = *psVar13;
LAB_14ff4ea2e:
            *psVar13 = sVar3;
          }
        }
        else {
          uVar6 = param_1->value;
          uVar1 = psVar13->value;
          uVar7 = uVar14 >> 1;
          uVar2 = param_1[uVar7].value;
          psVar5 = param_1 + uVar7;
          if (uVar6 < uVar2) {
            if (uVar1 < uVar2) {
              if (uVar1 < uVar6) {
                sVar3 = *param_1;
                *param_1 = *psVar5;
                *psVar5 = sVar3;
                goto code_r0x00014ff4e840;
              }
              sVar3 = *psVar5;
              *psVar5 = *param_1;
              *param_1 = sVar3;
              sVar3 = *psVar5;
              *psVar5 = *psVar13;
            }
            else {
LAB_14ff4e831:
              sVar3 = *param_1;
              *param_1 = *psVar13;
            }
LAB_14ff4e83a:
            *psVar13 = sVar3;
          }
          else if (uVar2 < uVar1) {
            if (uVar1 < uVar6) {
              sVar3 = *psVar5;
              *psVar5 = *psVar13;
              goto LAB_14ff4e83a;
            }
            sVar3 = *param_1;
            *param_1 = *psVar5;
            *psVar5 = sVar3;
            goto LAB_14ff4e831;
          }
code_r0x00014ff4e840:
          if (4 < uVar14) {
            if (puVar17 == local_48) {
LAB_14ff4e945:
              uVar7 = uVar7 - 1;
              psVar5 = psVar5 + -1;
              uVar12 = uVar7 * 2 + 1;
              psVar10 = psVar5;
LAB_14ff4e960:
              psVar9 = param_1 + uVar12;
              psVar11 = psVar9 + 1;
              if ((psVar11 <= psVar13) && (psVar11->value < psVar9->value)) {
                uVar12 = uVar12 + 1;
                psVar9 = psVar11;
              }
              if (psVar9->value < psVar10->value) goto code_r0x00014ff4e97f;
              goto LAB_14ff4e99b;
            }
            sVar3 = *psVar5;
            *psVar5 = *param_1;
            *param_1 = sVar3;
            psVar5 = param_1;
            psVar10 = psVar13;
            while( true ) {
              do {
                psVar10 = psVar10 + -1;
              } while (psVar10->value < param_1->value);
              psVar11 = psVar5;
              if (psVar10 <= psVar5) break;
              do {
                psVar5 = psVar11;
                psVar11 = psVar5 + 1;
              } while (param_1->value < psVar11->value);
              if (psVar10 <= psVar11) break;
              sVar3 = *psVar11;
              *psVar11 = *psVar10;
              *psVar10 = sVar3;
              psVar5 = psVar11;
            }
            sVar3 = *param_1;
            *param_1 = *psVar5;
            *psVar5 = sVar3;
            psVar10 = psVar5;
            do {
              psVar10 = psVar10 + 1;
              uVar6 = sVar3.value;
              if (psVar13 <= psVar10) break;
              uVar6 = psVar5->value;
              sVar3.index = 0;
              sVar3.value = uVar6;
            } while (uVar6 <= psVar10->value);
            do {
              psVar5 = psVar5 + -1;
              if (psVar5 <= param_1) break;
            } while (psVar5->value <= uVar6);
            lVar8 = (longlong)psVar13 - (longlong)psVar10 >> 3;
            lVar15 = (longlong)psVar5 - (longlong)param_1 >> 3;
            uVar14 = lVar8 + 1;
            uVar7 = lVar15 + 1;
            psVar11 = psVar5;
            psVar9 = param_1;
            if (uVar7 > uVar14) {
              psVar11 = psVar13;
              psVar9 = psVar10;
              psVar10 = param_1;
              psVar13 = psVar5;
            }
            *puVar17 = (ulonglong)psVar9;
            lVar4 = lVar8;
            if (uVar7 <= uVar14) {
              lVar4 = lVar15;
            }
            puVar17[1] = (ulonglong)psVar11;
            puVar17[2] = lVar4 + 1;
            if (uVar7 <= uVar14) {
              lVar15 = lVar8;
            }
            uVar14 = lVar15 + 1;
            param_1 = psVar10;
            puVar17 = puVar17 + 3;
            goto LAB_14ff4e7b0;
          }
          if (uVar14 != 3) {
            uVar6 = param_1[1].value;
            if (uVar6 < psVar5->value) {
              if (uVar6 <= psVar13->value) {
                sVar3 = *psVar5;
                *psVar5 = param_1[1];
                param_1[1] = sVar3;
                sVar3 = *psVar5;
                *psVar5 = *psVar13;
                goto LAB_14ff4ea2e;
              }
              sVar3 = param_1[1];
              param_1[1] = *psVar5;
              *psVar5 = sVar3;
            }
            else if (param_1->value < uVar6) {
              sVar3 = *param_1;
              *param_1 = param_1[1];
              param_1[1] = sVar3;
            }
          }
        }
      }
LAB_14ff4ea31:
      uVar14 = puVar17[-1];
      param_1 = (sort_value *)puVar17[-3];
      psVar13 = (sort_value *)puVar17[-2];
      puVar17 = puVar17 + -3;
    } while (uVar14 != 0);
  }
  return;
code_r0x00014ff4e97f:
  sVar3 = *psVar10;
  uVar12 = uVar12 * 2 + 1;
  *psVar10 = *psVar9;
  *psVar9 = sVar3;
  psVar10 = psVar9;
  if (uVar14 <= uVar12) {
LAB_14ff4e99b:
    if (uVar7 == 0) {
      uVar14 = uVar14 - 1;
      sVar3 = *param_1;
      uVar12 = 1;
      *param_1 = *psVar13;
      *psVar13 = sVar3;
      psVar13 = psVar13 + -1;
      psVar10 = param_1;
      if (uVar14 < 2) goto LAB_14ff4ea31;
      goto LAB_14ff4e960;
    }
    goto LAB_14ff4e945;
  }
  goto LAB_14ff4e960;
}

// stdsort<oo2net::sort_value> @ 14ff4eab0

void __cdecl oo2net::stdsort<oo2net::sort_value>(sort_value *param_1,sort_value *param_2)

{
  undefined1 local_res18;
  
  stdsort<oo2net::sort_value_*,oo2net::stdless<oo2net::sort_value>_>(param_1,param_2,local_res18);
  return;
}

// swap3<oo2net::sort_value> @ 14ff4ead0

void __cdecl
oo2net::swap3<oo2net::sort_value>(sort_value *param_1,sort_value *param_2,sort_value *param_3)

{
  sort_value sVar1;
  
  sVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = sVar1;
  sVar1 = *param_1;
  *param_1 = *param_3;
  *param_3 = sVar1;
  return;
}

// swap<oo2net::sort_sym> @ 14ff4eaf0

void __cdecl oo2net::swap<oo2net::sort_sym>(sort_sym *param_1,sort_sym *param_2)

{
  sort_sym sVar1;
  
  sVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = sVar1;
  return;
}

// swap<oo2net::sort_value> @ 14ff4eb10

void __cdecl oo2net::swap<oo2net::sort_value>(sort_value *param_1,sort_value *param_2)

{
  sort_value sVar1;
  
  sVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = sVar1;
  return;
}

// vector<oo2net::sort_value> @ 14ff4eb30

vector<oo2net::sort_value> * __thiscall
oo2net::vector<oo2net::sort_value>::vector<oo2net::sort_value>(vector<oo2net::sort_value> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_> @ 14ff4eb50

vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_> * __thiscall
oo2net::vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_>::
vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_>
          (vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_> *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  return this;
}

// vector_flex<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_> @ 14ff4eb70

vector_flex<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_> * __thiscall
oo2net::vector_flex<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_>::
vector_flex<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_>
          (vector_flex<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_storage<oo2net::sort_value> @ 14ff4eb90

vector_storage<oo2net::sort_value> * __thiscall
oo2net::vector_storage<oo2net::sort_value>::vector_storage<oo2net::sort_value>
          (vector_storage<oo2net::sort_value> *this)

{
  this->m_begin = (sort_value *)0x0;
  this->m_capacity = 0;
  return this;
}

// ~vector<oo2net::sort_value> @ 14ff4ebc0

void __thiscall
oo2net::vector<oo2net::sort_value>::~vector<oo2net::sort_value>(vector<oo2net::sort_value> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_> @ 14ff4ec20

void __thiscall
oo2net::vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_>::
~vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_>
          (vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_> *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// ~vector_flex<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_> @ 14ff4ec80

void __thiscall
oo2net::vector_flex<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_>::
~vector_flex<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_>
          (vector_flex<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_storage<oo2net::sort_value> @ 14ff4ece0

void __thiscall
oo2net::vector_storage<oo2net::sort_value>::~vector_storage<oo2net::sort_value>
          (vector_storage<oo2net::sort_value> *this)

{
  if (this->m_begin != (sort_value *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (sort_value *)0x0;
  return;
}

// operator[] @ 14ff4ed20

sort_value * __thiscall
oo2net::vector_flex<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_>::operator[]
          (vector_flex<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_> *this,
          ulong64 param_1)

{
  return (sort_value *)(*(longlong *)this + param_1 * 8);
}

// operator< @ 14ff4ed30

bool __cdecl oo2net::operator<(sort_sym *param_1,sort_sym *param_2)

{
  return param_1->rank <= param_2->rank && param_2->rank != param_1->rank;
}

// operator< @ 14ff4ed50

bool __cdecl oo2net::operator<(sort_value *param_1,sort_value *param_2)

{
  return param_2->value < param_1->value;
}

// operator() @ 14ff4ed60

bool __thiscall
oo2net::stdless<oo2net::sort_sym>::operator()
          (stdless<oo2net::sort_sym> *this,sort_sym *param_1,sort_sym *param_2)

{
  return param_1->rank <= param_2->rank && param_2->rank != param_1->rank;
}

// operator() @ 14ff4ed80

bool __thiscall
oo2net::stdless<oo2net::sort_value>::operator()
          (stdless<oo2net::sort_value> *this,sort_value *param_1,sort_value *param_2)

{
  return param_2->value < param_1->value;
}

// operator() @ 14ff4ed90

void __thiscall
oo2net::swap_functor<oo2net::sort_sym>::operator()
          (swap_functor<oo2net::sort_sym> *this,sort_sym *param_1,sort_sym *param_2)

{
  sort_sym sVar1;
  
  sVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = sVar1;
  return;
}

// operator() @ 14ff4edb0

void __thiscall
oo2net::swap_functor<oo2net::sort_value>::operator()
          (swap_functor<oo2net::sort_value> *this,sort_value *param_1,sort_value *param_2)

{
  sort_value sVar1;
  
  sVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = sVar1;
  return;
}

// EntropyOfCountsExpGolomb @ 14ff4ede0

int __cdecl oo2net::EntropyOfCountsExpGolomb(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = 0;
  uVar4 = 0;
  if (0 < param_2) {
    do {
      if (*param_1 != 0) {
        uVar3 = (uVar4 >> ((byte)param_3 & 0x1f)) + 1;
        iVar1 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
          }
        }
        iVar2 = iVar2 + (param_3 + 1 + iVar1 * 2) * *param_1;
      }
      uVar4 = uVar4 + 1;
      param_1 = param_1 + 1;
    } while ((int)uVar4 < param_2);
  }
  return iVar2;
}

// EntropyOfCountsRice @ 14ff4ee40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl oo2net::EntropyOfCountsRice(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 (*pauVar3) [16];
  int iVar4;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  
  iVar1 = 0;
  if (0 < param_2) {
    iVar16 = 0;
    if ((7 < (uint)param_2) && (iVar16 = 0, 1 < __isa_available)) {
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      uVar23 = 0;
      uVar15 = 0;
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      pauVar3 = (undefined1 (*) [16])param_1;
      do {
        auVar14 = *pauVar3;
        iVar16 = iVar1 + 4;
        iVar4 = iVar1 + (int)__xmm_00000003000000020000000100000000;
        iVar7 = iVar1 + __xmm_00000003000000020000000100000000._4_4_;
        iVar8 = iVar1 + _UNK_150631e08;
        iVar9 = iVar1 + _UNK_150631e0c;
        uVar10 = -(uint)(0 < auVar14._0_4_);
        uVar11 = -(uint)(0 < auVar14._4_4_);
        uVar12 = -(uint)(0 < auVar14._8_4_);
        uVar13 = -(uint)(0 < auVar14._12_4_);
        iVar1 = iVar1 + 8;
        auVar5._0_4_ = (iVar4 >> param_3) + param_3 + ___xmm_00000001000000010000000100000001;
        auVar5._4_4_ = (iVar7 >> param_3) + param_3 + _UNK_150631da4;
        auVar5._8_4_ = (iVar8 >> param_3) + param_3 + _UNK_150631da8;
        auVar5._12_4_ = (iVar9 >> param_3) + param_3 + _UNK_150631dac;
        auVar14 = pmulld(auVar14,auVar5);
        uVar20 = auVar14._0_4_ + uVar20 & uVar10 | ~uVar10 & uVar20;
        uVar21 = auVar14._4_4_ + uVar21 & uVar11 | ~uVar11 & uVar21;
        uVar22 = auVar14._8_4_ + uVar22 & uVar12 | ~uVar12 & uVar22;
        uVar23 = auVar14._12_4_ + uVar23 & uVar13 | ~uVar13 & uVar23;
        auVar14 = pauVar3[1];
        uVar10 = -(uint)(0 < auVar14._0_4_);
        uVar11 = -(uint)(0 < auVar14._4_4_);
        uVar12 = -(uint)(0 < auVar14._8_4_);
        uVar13 = -(uint)(0 < auVar14._12_4_);
        auVar6._0_4_ = (iVar16 + (int)__xmm_00000003000000020000000100000000 >> param_3) + param_3 +
                       ___xmm_00000001000000010000000100000001;
        auVar6._4_4_ = (iVar16 + __xmm_00000003000000020000000100000000._4_4_ >> param_3) + param_3
                       + _UNK_150631da4;
        auVar6._8_4_ = (iVar16 + _UNK_150631e08 >> param_3) + param_3 + _UNK_150631da8;
        auVar6._12_4_ = (iVar16 + _UNK_150631e0c >> param_3) + param_3 + _UNK_150631dac;
        auVar14 = pmulld(auVar14,auVar6);
        uVar15 = auVar14._0_4_ + uVar15 & uVar10 | ~uVar10 & uVar15;
        uVar17 = auVar14._4_4_ + uVar17 & uVar11 | ~uVar11 & uVar17;
        uVar18 = auVar14._8_4_ + uVar18 & uVar12 | ~uVar12 & uVar18;
        uVar19 = auVar14._12_4_ + uVar19 & uVar13 | ~uVar13 & uVar19;
        pauVar3 = pauVar3 + 2;
      } while (iVar1 < (int)(param_2 & 0xfffffff8U));
      iVar16 = uVar15 + uVar20 + uVar18 + uVar22 + uVar17 + uVar21 + uVar19 + uVar23;
      if (param_2 <= iVar1) {
        return iVar16;
      }
    }
    piVar2 = param_1 + iVar1;
    iVar4 = iVar1;
    iVar1 = iVar16;
    do {
      if (0 < *piVar2) {
        iVar1 = iVar1 + (param_3 + 1 + (iVar4 >> ((byte)param_3 & 0x1f))) * *piVar2;
      }
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar4 < param_2);
  }
  return iVar1;
}

// EntropyOfDeltaRice @ 14ff4efe0

int __cdecl oo2net::EntropyOfDeltaRice(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar1 = 0;
  if (0 < param_2) {
    iVar2 = -param_3;
    uVar3 = (ulonglong)(uint)param_2;
    do {
      if (0 < *param_1) {
        iVar1 = iVar1 + (param_4 + 1 + ((iVar2 * 2 ^ iVar2 >> 0x1f) >> ((byte)param_4 & 0x1f))) *
                        *param_1;
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return iVar1;
}

// GetRiceCodeLen @ 14ff4f050

int __cdecl oo2net::GetRiceCodeLen(int param_1,int param_2)

{
  return (param_1 >> ((byte)param_2 & 0x1f)) + 1 + param_2;
}

// OodleFree @ 14ff4f070

void __cdecl oo2net::OodleFree(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014ff4f070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleNet_Plugin_Free)(param_1);
  return;
}

// OodleMallocAligned @ 14ff4f080

void * __cdecl oo2net::OodleMallocAligned(long64 param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = (*g_fp_OodleNet_Plugin_MallocAligned)(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1);
  }
  return pvVar1;
}

// WeissmanScore @ 14ff4f0c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl oo2net::WeissmanScore(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  
  dVar1 = 0.0;
  if (0.0 < param_4) {
    dVar1 = rrlog2_F64(param_2 / (param_1 * param_4) + __real_3ff0000000000000);
    dVar1 = dVar1 * ___real_3fd3441355475a32 * param_1;
  }
  dVar2 = rrlog2_F64(param_2 / (param_1 * param_3) + __real_3ff0000000000000);
  return dVar2 * ___real_3fd3441355475a32 * param_1 - dVar1;
}

// at @ 14ff4f170

sort_value * __thiscall
oo2net::vector_flex<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_>::at
          (vector_flex<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_> *this,
          ulong64 param_1)

{
  return (sort_value *)(*(longlong *)this + param_1 * 8);
}

// begin @ 14ff4f180

sort_value * __thiscall
oo2net::vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_>::begin
          (vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_> *this)

{
  return (sort_value *)this->_padding_;
}

// begin @ 14ff4f190

sort_value * __thiscall
oo2net::vector_flex<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_>::begin
          (vector_flex<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_> *this)

{
  return *(sort_value **)this;
}

// begin @ 14ff4f1a0

sort_value * __thiscall
oo2net::vector_storage<oo2net::sort_value>::begin(vector_storage<oo2net::sort_value> *this)

{
  return this->m_begin;
}

// capacity @ 14ff4f1b0

ulong64 __thiscall
oo2net::vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_>::capacity
          (vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_> *this)

{
  return this->_padding_;
}

// capacity @ 14ff4f1c0

ulong64 __thiscall
oo2net::vector_storage<oo2net::sort_value>::capacity(vector_storage<oo2net::sort_value> *this)

{
  return this->m_capacity;
}

// counts_to_cumfreqs @ 14ff4f1d0

void __cdecl oo2net::counts_to_cumfreqs(uint *param_1,uint *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = 0;
  *param_1 = 0;
  if (0 < param_3) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      uVar3 = uVar3 + *(int *)(lVar2 + (longlong)param_2);
      lVar1 = lVar1 + 1;
      lVar2 = lVar1 * 4;
      param_1[lVar1] = uVar3;
    } while (lVar1 < param_3);
  }
  return;
}

// end @ 14ff4f210

sort_value * __thiscall
oo2net::vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_>::end
          (vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_> *this)

{
  return (sort_value *)(this->_padding_ + this->m_size * 8);
}

// end @ 14ff4f230

sort_value * __thiscall
oo2net::vector_flex<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_>::end
          (vector_flex<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_> *this)

{
  return (sort_value *)(*(longlong *)this + *(longlong *)&this->field_0x10 * 8);
}

// extend_default @ 14ff4f260

void __thiscall
oo2net::vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_>::extend_default
          (vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_> *this,
          ulong64 param_1)

{
  sort_value *psVar1;
  ulong64 uVar2;
  
  uVar2 = param_1 + this->m_size;
  if ((ulonglong)this->_padding_ < uVar2) {
    psVar1 = vector_storage<oo2net::sort_value>::makefit1
                       ((vector_storage<oo2net::sort_value> *)this,uVar2,this->m_size);
    if (psVar1 != (sort_value *)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(psVar1);
    }
    this->m_size = this->m_size + param_1;
    return;
  }
  this->m_size = this->m_size + param_1;
  return;
}

// init @ 14ff4f2c0

void __thiscall
oo2net::vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_>::init
          (vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_> *this)

{
  this->m_size = 0;
  return;
}

// init @ 14ff4f2d0

void __thiscall
oo2net::vector_storage<oo2net::sort_value>::init(vector_storage<oo2net::sort_value> *this)

{
  this->m_begin = (sort_value *)0x0;
  this->m_capacity = 0;
  return;
}

// logoneminusinv @ 14ff4f2e0

float __cdecl oo2net::logoneminusinv(int param_1)

{
  float fVar1;
  
  if (param_1 < 0x20) {
    return c_logoneminusinv[param_1];
  }
  fVar1 = __real_3f800000 / (float)param_1;
  return (float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000) -
         fVar1 * fVar1 * __real_3f000000;
}

// logoneplusinv @ 14ff4f330

float __cdecl oo2net::logoneplusinv(int param_1)

{
  float fVar1;
  
  if (param_1 < 0x20) {
    return c_logoneplusinv[param_1];
  }
  fVar1 = __real_3f800000 / (float)param_1;
  return fVar1 - fVar1 * fVar1 * __real_3f000000;
}

// makefit1 @ 14ff4f380

sort_value * __thiscall
oo2net::vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_>::makefit1
          (vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_> *this,
          ulong64 param_1)

{
  sort_value *psVar1;
  
  psVar1 = vector_storage<oo2net::sort_value>::makefit1
                     ((vector_storage<oo2net::sort_value> *)this,param_1,this->m_size);
  return psVar1;
}

// makefit1 @ 14ff4f3a0

sort_value * __thiscall
oo2net::vector_storage<oo2net::sort_value>::makefit1
          (vector_storage<oo2net::sort_value> *this,ulong64 param_1,ulong64 param_2)

{
  sort_value *psVar1;
  ulonglong uVar2;
  sort_value *psVar3;
  sort_value *psVar4;
  ulonglong uVar5;
  
  psVar1 = this->m_begin;
  uVar5 = this->m_capacity + 0x400000;
  uVar2 = this->m_capacity * 2;
  if (uVar5 <= uVar2) {
    uVar2 = uVar5;
  }
  if (param_1 < uVar2) {
    param_1 = uVar2;
  }
  uVar5 = param_1 * 8;
  if (uVar5 < 0x10001) {
    if (uVar5 < 0x200) goto LAB_14ff4f423;
    uVar5 = uVar5 + 0xfff;
    uVar2 = 0x1ffffffffffffe00;
  }
  else {
    uVar5 = uVar5 + 0xffff;
    uVar2 = 0x1fffffffffffe000;
  }
  param_1 = uVar5 >> 3 & uVar2;
LAB_14ff4f423:
  psVar3 = (*g_fp_OodleNet_Plugin_MallocAligned)(param_1 * 8,0x10);
  if (psVar3 == (sort_value *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1 * 8);
  }
  if (param_2 != 0) {
    psVar4 = psVar3;
    do {
      if (psVar4 != (sort_value *)0x0) {
        *psVar4 = *(sort_value *)(((longlong)psVar1 - (longlong)psVar3) + (longlong)psVar4);
      }
      psVar4 = psVar4 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  this->m_begin = psVar3;
  this->m_capacity = param_1;
  return psVar1;
}

// makefit2 @ 14ff4f4c0

void __thiscall
oo2net::vector_storage<oo2net::sort_value>::makefit2
          (vector_storage<oo2net::sort_value> *this,sort_value *param_1,ulong64 param_2,
          ulong64 param_3)

{
  if (param_1 != (sort_value *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff4f4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_fp_OodleNet_Plugin_Free)(param_1);
    return;
  }
  return;
}

// needmakefit @ 14ff4f4e0

bool __thiscall
oo2net::vector_storage<oo2net::sort_value>::needmakefit
          (vector_storage<oo2net::sort_value> *this,ulong64 param_1)

{
  return this->m_capacity < param_1;
}

// normalize_counts_v5 @ 14ff4f500

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
oo2net::normalize_counts_v5(uint *param_1,int param_2,uint *param_3,int param_4,int param_5)

{
  sort_sym *psVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  sort_sym sVar5;
  code *pcVar6;
  ulonglong uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  ulonglong uVar22;
  double dVar23;
  float fVar24;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  sort_sym sStack_70;
  sort_sym local_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)&local_68;
  if (param_4 < 1) {
    uStack_90 = 0x14ff4f56d;
    iVar11 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrcompressutil.cpp",0x17b,
                                "oo2net::normalize_counts_v5","from_sum > 0");
    if (iVar11 != 0) {
      pcVar6 = (code *)swi(3);
      iVar11 = (*pcVar6)();
      return iVar11;
    }
  }
  uVar22 = 0;
  iVar11 = 0;
  local_68.sym = 0;
  if (0 < param_5) {
    puVar13 = param_1;
    uVar12 = uVar22;
    lVar18 = (longlong)param_5;
    uVar17 = uVar22;
    do {
      uVar3 = *(uint *)(((longlong)param_3 - (longlong)param_1) + (longlong)puVar13);
      uVar14 = 0;
      if (uVar3 != 0) {
        dVar23 = (double)uVar3 * ((double)param_2 / (double)param_4);
        iVar11 = (int)(longlong)dVar23;
        uVar14 = (uint)((double)(uint)((iVar11 + 1) * iVar11) < dVar23 * dVar23) + iVar11;
        uVar17 = (ulonglong)((int)uVar17 + uVar14);
        uVar12 = (ulonglong)((int)uVar12 + 1);
      }
      iVar11 = (int)uVar17;
      *puVar13 = uVar14;
      puVar13 = puVar13 + 1;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    local_68.sym = (int)uVar12;
  }
  uVar3 = __xmm_80000000800000008000000080000000;
  fVar10 = __real_3f000000;
  fVar9 = __real_3f800000;
  fVar21 = (float)(param_2 - iVar11);
  local_68.rank = fVar21;
  puVar16 = auStack_88;
  if (fVar21 == 0.0) goto LAB_14ff4fd3d;
  uVar17 = (longlong)param_5 * 8;
  uVar12 = uVar17 + 0xf;
  if (uVar12 <= uVar17) {
    uVar12 = 0xffffffffffffff0;
  }
  uStack_90 = 0x14ff4f632;
  lVar18 = -(uVar12 & 0xfffffffffffffff0);
  puVar16 = auStack_88 + lVar18;
  psVar1 = (sort_sym *)((longlong)&local_68 + lVar18);
  uVar12 = uVar22;
  if ((int)fVar21 < 1) {
    if (param_5 < 4) {
      uVar17 = uVar22;
      if (0 < param_5) goto LAB_14ff4fa7d;
    }
    else {
      lVar20 = (longlong)param_3 - (longlong)param_1;
      puVar13 = param_1 + 1;
      uVar17 = (ulonglong)((param_5 - 4U >> 2) + 1) << 2;
      iVar11 = 2;
      do {
        uVar14 = *(uint *)(lVar20 + -4 + (longlong)puVar13);
        if (uVar14 != 0) {
          uVar4 = puVar13[-1];
          if (1 < uVar4) {
            if ((int)uVar4 < 0x20) {
              fVar21 = c_logoneminusinv[(int)uVar4];
            }
            else {
              fVar21 = __real_3f800000 / (float)(int)uVar4;
              fVar21 = (float)((uint)fVar21 ^ __xmm_80000000800000008000000080000000) -
                       fVar21 * fVar21 * __real_3f000000;
            }
            psVar1[uVar12].sym = (int)uVar22;
            *(float *)((longlong)&local_68 + uVar12 * 8 + lVar18 + 4) = (float)uVar14 * fVar21;
            uVar12 = uVar12 + 1;
          }
        }
        uVar14 = *(uint *)(lVar20 + (longlong)puVar13);
        if (uVar14 != 0) {
          uVar4 = *puVar13;
          if (1 < uVar4) {
            if ((int)uVar4 < 0x20) {
              fVar21 = c_logoneminusinv[(int)uVar4];
            }
            else {
              fVar21 = __real_3f800000 / (float)(int)uVar4;
              fVar21 = (float)((uint)fVar21 ^ __xmm_80000000800000008000000080000000) -
                       fVar21 * fVar21 * __real_3f000000;
            }
            psVar1[uVar12].sym = iVar11 + -1;
            *(float *)((longlong)&local_68 + uVar12 * 8 + lVar18 + 4) = (float)uVar14 * fVar21;
            uVar12 = uVar12 + 1;
          }
        }
        uVar14 = *(uint *)(lVar20 + 4 + (longlong)puVar13);
        if (uVar14 != 0) {
          uVar4 = puVar13[1];
          if (1 < uVar4) {
            if ((int)uVar4 < 0x20) {
              fVar21 = c_logoneminusinv[(int)uVar4];
            }
            else {
              fVar21 = __real_3f800000 / (float)(int)uVar4;
              fVar21 = (float)((uint)fVar21 ^ __xmm_80000000800000008000000080000000) -
                       fVar21 * fVar21 * __real_3f000000;
            }
            psVar1[uVar12].sym = iVar11;
            *(float *)((longlong)&local_68 + uVar12 * 8 + lVar18 + 4) = (float)uVar14 * fVar21;
            uVar12 = uVar12 + 1;
          }
        }
        uVar14 = *(uint *)(lVar20 + 8 + (longlong)puVar13);
        if (uVar14 != 0) {
          uVar4 = puVar13[2];
          if (1 < uVar4) {
            if ((int)uVar4 < 0x20) {
              fVar21 = c_logoneminusinv[(int)uVar4];
            }
            else {
              fVar21 = __real_3f800000 / (float)(int)uVar4;
              fVar21 = (float)((uint)fVar21 ^ __xmm_80000000800000008000000080000000) -
                       fVar21 * fVar21 * __real_3f000000;
            }
            psVar1[uVar12].sym = iVar11 + 1;
            *(float *)((longlong)&local_68 + uVar12 * 8 + lVar18 + 4) = (float)uVar14 * fVar21;
            uVar12 = uVar12 + 1;
          }
        }
        puVar13 = puVar13 + 4;
        uVar14 = (int)uVar22 + 4;
        uVar22 = (ulonglong)uVar14;
        iVar11 = iVar11 + 4;
      } while ((int)uVar14 < param_5 + -3);
      fVar21 = local_68.rank;
      if ((int)uVar14 < param_5) {
LAB_14ff4fa7d:
        fVar21 = local_68.rank;
        puVar13 = param_1 + uVar17;
        do {
          uVar14 = *(uint *)(((longlong)param_3 - (longlong)param_1) + (longlong)puVar13);
          if (uVar14 != 0) {
            uVar4 = *puVar13;
            if (1 < uVar4) {
              if ((int)uVar4 < 0x20) {
                fVar24 = c_logoneminusinv[(int)uVar4];
              }
              else {
                fVar24 = __real_3f800000 / (float)(int)uVar4;
                fVar24 = (float)((uint)fVar24 ^ __xmm_80000000800000008000000080000000) -
                         fVar24 * fVar24 * __real_3f000000;
              }
              psVar1[uVar12].sym = (int)uVar22;
              *(float *)((longlong)&local_68 + uVar12 * 8 + lVar18 + 4) = (float)uVar14 * fVar24;
              uVar12 = uVar12 + 1;
            }
          }
          puVar13 = puVar13 + 1;
          uVar14 = (int)uVar22 + 1;
          uVar22 = (ulonglong)uVar14;
        } while ((int)uVar14 < param_5);
      }
    }
  }
  else if (param_5 < 4) {
    uVar17 = uVar22;
    if (0 < param_5) goto LAB_14ff4f81f;
  }
  else {
    lVar20 = (longlong)param_3 - (longlong)param_1;
    puVar13 = param_1 + 1;
    uVar17 = (ulonglong)((param_5 - 4U >> 2) + 1) << 2;
    iVar11 = 2;
    do {
      uVar14 = *(uint *)(lVar20 + -4 + (longlong)puVar13);
      if (uVar14 != 0) {
        uVar4 = puVar13[-1];
        if ((int)uVar4 < 0x20) {
          fVar21 = c_logoneplusinv[(int)uVar4];
        }
        else {
          fVar21 = __real_3f800000 / (float)(int)uVar4;
          fVar21 = fVar21 - fVar21 * fVar21 * __real_3f000000;
        }
        psVar1[uVar12].sym = (int)uVar22;
        *(float *)((longlong)&local_68 + uVar12 * 8 + lVar18 + 4) = (float)uVar14 * fVar21;
        uVar12 = uVar12 + 1;
      }
      uVar14 = *(uint *)((longlong)puVar13 + lVar20);
      if (uVar14 != 0) {
        uVar4 = *puVar13;
        if ((int)uVar4 < 0x20) {
          fVar21 = c_logoneplusinv[(int)uVar4];
        }
        else {
          fVar21 = __real_3f800000 / (float)(int)uVar4;
          fVar21 = fVar21 - fVar21 * fVar21 * __real_3f000000;
        }
        psVar1[uVar12].sym = iVar11 + -1;
        *(float *)((longlong)&local_68 + uVar12 * 8 + lVar18 + 4) = (float)uVar14 * fVar21;
        uVar12 = uVar12 + 1;
      }
      uVar14 = *(uint *)(lVar20 + 4 + (longlong)puVar13);
      if (uVar14 != 0) {
        uVar4 = puVar13[1];
        if ((int)uVar4 < 0x20) {
          fVar21 = c_logoneplusinv[(int)uVar4];
        }
        else {
          fVar21 = __real_3f800000 / (float)(int)uVar4;
          fVar21 = fVar21 - fVar21 * fVar21 * __real_3f000000;
        }
        psVar1[uVar12].sym = iVar11;
        *(float *)((longlong)&local_68 + uVar12 * 8 + lVar18 + 4) = (float)uVar14 * fVar21;
        uVar12 = uVar12 + 1;
      }
      uVar14 = *(uint *)(lVar20 + 8 + (longlong)puVar13);
      if (uVar14 != 0) {
        uVar4 = puVar13[2];
        if ((int)uVar4 < 0x20) {
          fVar21 = c_logoneplusinv[(int)uVar4];
        }
        else {
          fVar21 = __real_3f800000 / (float)(int)uVar4;
          fVar21 = fVar21 - fVar21 * fVar21 * __real_3f000000;
        }
        psVar1[uVar12].sym = iVar11 + 1;
        *(float *)((longlong)&local_68 + uVar12 * 8 + lVar18 + 4) = (float)uVar14 * fVar21;
        uVar12 = uVar12 + 1;
      }
      puVar13 = puVar13 + 4;
      uVar14 = (int)uVar22 + 4;
      uVar22 = (ulonglong)uVar14;
      iVar11 = iVar11 + 4;
    } while ((int)uVar14 < param_5 + -3);
    fVar21 = local_68.rank;
    if ((int)uVar14 < param_5) {
LAB_14ff4f81f:
      fVar21 = local_68.rank;
      puVar13 = param_1 + uVar17;
      do {
        uVar14 = *(uint *)((longlong)puVar13 + ((longlong)param_3 - (longlong)param_1));
        if (uVar14 != 0) {
          uVar4 = *puVar13;
          if ((int)uVar4 < 0x20) {
            fVar24 = c_logoneplusinv[(int)uVar4];
          }
          else {
            fVar24 = __real_3f800000 / (float)(int)uVar4;
            fVar24 = fVar24 - fVar24 * fVar24 * __real_3f000000;
          }
          psVar1[uVar12].sym = (int)uVar22;
          *(float *)((longlong)&local_68 + uVar12 * 8 + lVar18 + 4) = (float)uVar14 * fVar24;
          uVar12 = uVar12 + 1;
        }
        puVar13 = puVar13 + 1;
        uVar14 = (int)uVar22 + 1;
        uVar22 = (ulonglong)uVar14;
      } while ((int)uVar14 < param_5);
    }
  }
  lVar20 = (longlong)uVar12 >> 1;
  while (0 < lVar20) {
    lVar20 = lVar20 + -1;
    *(undefined8 *)(auStack_88 + lVar18 + -8) = 0x14ff4fb25;
    netv5heap::adjust_heap<oo2net::sort_sym>(psVar1,lVar20,uVar12);
  }
  if ((int)fVar21 < 1) {
    uVar22 = (ulonglong)(uint)-(int)fVar21;
    do {
      if ((longlong)uVar12 < 1) {
        *(undefined8 *)(auStack_88 + lVar18 + -8) = 0x14ff4fc5b;
        iVar11 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrcompressutil.cpp",0x1db,
                                    "oo2net::normalize_counts_v5","heap_size > 0");
        if (iVar11 != 0) {
          pcVar6 = (code *)swi(3);
          iVar11 = (*pcVar6)();
          return iVar11;
        }
      }
      sVar5 = *psVar1;
      *psVar1 = *(sort_sym *)((longlong)&sStack_70 + uVar12 * 8 + lVar18);
      *(sort_sym *)((longlong)&sStack_70 + uVar12 * 8 + lVar18) = sVar5;
      uVar17 = uVar12 - 1;
      *(undefined8 *)(auStack_88 + lVar18 + -8) = 0x14ff4fc85;
      netv5heap::adjust_heap<oo2net::sort_sym>(psVar1,0,uVar17);
      iVar11 = psVar1[uVar17].sym;
      uVar14 = param_1[iVar11] - 1;
      param_1[iVar11] = uVar14;
      if (1 < uVar14) {
        if ((int)uVar14 < 0x20) {
          fVar21 = c_logoneminusinv[(int)uVar14];
        }
        else {
          fVar21 = fVar9 / (float)(int)uVar14;
          fVar21 = (float)((uint)fVar21 ^ uVar3) - fVar21 * fVar21 * fVar10;
        }
        uVar14 = param_3[iVar11];
        psVar1[uVar17].sym = iVar11;
        *(float *)((longlong)&local_68 + uVar17 * 8 + lVar18 + 4) = (float)uVar14 * fVar21;
        uVar7 = uVar17;
        while ((uVar17 = uVar12, 0 < (longlong)uVar7 &&
               (fVar21 = *(float *)((longlong)&local_68 + uVar7 * 8 + lVar18 + 4),
               uVar15 = (longlong)(uVar7 - 1) >> 1,
               pfVar2 = (float *)((longlong)&local_68 + uVar15 * 8 + lVar18 + 4),
               *pfVar2 <= fVar21 && fVar21 != *pfVar2))) {
          sVar5 = psVar1[uVar15];
          psVar1[uVar15] = psVar1[uVar7];
          psVar1[uVar7] = sVar5;
          uVar7 = uVar15;
        }
      }
      uVar22 = uVar22 - 1;
      puVar16 = auStack_88 + lVar18;
      uVar12 = uVar17;
    } while (uVar22 != 0);
  }
  else {
    lVar20 = uVar12 - 1;
    do {
      if ((longlong)uVar12 < 1) {
        *(undefined8 *)(auStack_88 + lVar18 + -8) = 0x14ff4fb5b;
        iVar11 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrcompressutil.cpp",0x1c4,
                                    "oo2net::normalize_counts_v5","heap_size > 0");
        if (iVar11 != 0) {
          pcVar6 = (code *)swi(3);
          iVar11 = (*pcVar6)();
          return iVar11;
        }
      }
      sVar5 = *psVar1;
      *psVar1 = *(sort_sym *)((longlong)&sStack_70 + uVar12 * 8 + lVar18);
      *(sort_sym *)((longlong)&sStack_70 + uVar12 * 8 + lVar18) = sVar5;
      *(undefined8 *)(auStack_88 + lVar18 + -8) = 0x14ff4fb7d;
      netv5heap::adjust_heap<oo2net::sort_sym>(psVar1,0,lVar20);
      iVar11 = psVar1[lVar20].sym;
      fVar21 = (float)((int)fVar21 + -1);
      param_1[iVar11] = param_1[iVar11] + 1;
      uVar3 = param_1[iVar11];
      if ((int)uVar3 < 0x20) {
        fVar24 = c_logoneplusinv[(int)uVar3];
      }
      else {
        fVar24 = fVar9 / (float)(int)uVar3;
        fVar24 = fVar24 - fVar24 * fVar24 * fVar10;
      }
      uVar3 = param_3[iVar11];
      psVar1[lVar20].sym = iVar11;
      *(float *)((longlong)&local_68 + lVar20 * 8 + lVar18 + 4) = (float)uVar3 * fVar24;
      lVar8 = lVar20;
      while ((0 < lVar8 &&
             (fVar24 = *(float *)((longlong)&local_68 + lVar8 * 8 + lVar18 + 4),
             lVar19 = lVar8 + -1 >> 1,
             pfVar2 = (float *)((longlong)&local_68 + lVar19 * 8 + lVar18 + 4),
             *pfVar2 <= fVar24 && fVar24 != *pfVar2))) {
        sVar5 = psVar1[lVar19];
        psVar1[lVar19] = psVar1[lVar8];
        psVar1[lVar8] = sVar5;
        lVar8 = lVar19;
      }
    } while (fVar21 != 0.0);
  }
LAB_14ff4fd3d:
  *(undefined8 *)(puVar16 + -8) = 0x14ff4fd49;
  return local_68.sym;
}

// normalize_counts_v6 @ 14ff4fd80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
oo2net::normalize_counts_v6(uint *param_1,int param_2,uint *param_3,int param_4,int param_5)

{
  ulonglong uVar1;
  sort_sym *psVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  sort_sym sVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 *puVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  double dVar23;
  float fVar24;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  int iStack_80;
  float fStack_7c;
  sort_sym local_78;
  undefined8 local_70;
  uint *local_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)&local_78;
  local_70 = param_3;
  local_68 = param_1;
  if (param_4 < 1) {
    uStack_a0 = 0x14ff4fdfb;
    iVar10 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrcompressutil.cpp",0xbd,
                                "oo2net::normalize_counts_v6","from_sum > 0");
    if (iVar10 != 0) {
      pcVar7 = (code *)swi(3);
      iVar10 = (*pcVar7)();
      return iVar10;
    }
  }
  iVar10 = 0;
  iVar21 = 0;
  local_78.sym = 0;
  if (0 < param_5) {
    puVar13 = param_1;
    lVar19 = (longlong)param_5;
    do {
      uVar4 = *(uint *)(((longlong)param_3 - (longlong)param_1) + (longlong)puVar13);
      uVar11 = 0;
      if (uVar4 != 0) {
        dVar23 = (double)uVar4 * ((double)param_2 / (double)param_4);
        iVar22 = (int)(longlong)dVar23;
        uVar11 = (uint)((double)(uint)((iVar22 + 1) * iVar22) < dVar23 * dVar23) + iVar22;
        iVar21 = iVar21 + uVar11;
        iVar10 = iVar10 + 1;
      }
      *puVar13 = uVar11;
      puVar13 = puVar13 + 1;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    local_78.sym = iVar10;
  }
  uVar4 = __xmm_80000000800000008000000080000000;
  fVar9 = __real_3f000000;
  fVar8 = __real_3f800000;
  iVar21 = param_2 - iVar21;
  puVar16 = auStack_98;
  if (iVar21 == 0) goto LAB_14ff5061e;
  uVar1 = (longlong)param_5 * 8;
  uVar12 = uVar1 + 0xf;
  if (uVar12 <= uVar1) {
    uVar12 = 0xffffffffffffff0;
  }
  uStack_a0 = 0x14ff4feb0;
  lVar19 = -(uVar12 & 0xfffffffffffffff0);
  puVar16 = auStack_98 + lVar19;
  lVar18 = 0;
  psVar2 = (sort_sym *)((longlong)&local_78 + lVar19);
  if (iVar21 < 1) {
    iVar10 = 0;
    if (param_5 < 4) {
      if (0 < param_5) {
        lVar17 = 0;
        goto LAB_14ff502fd;
      }
    }
    else {
      lVar20 = (longlong)param_3 - (longlong)param_1;
      iVar22 = 2;
      puVar13 = param_1 + 1;
      lVar17 = (ulonglong)((param_5 - 4U >> 2) + 1) << 2;
      iVar10 = 0;
      do {
        uVar11 = *(uint *)(lVar20 + -4 + (longlong)puVar13);
        if (uVar11 != 0) {
          uVar5 = puVar13[-1];
          if (1 < uVar5) {
            if ((int)uVar5 < 0x20) {
              fVar24 = c_logoneminusinv[(int)uVar5];
            }
            else {
              fVar24 = __real_3f800000 / (float)(int)uVar5;
              fVar24 = (float)((uint)fVar24 ^ __xmm_80000000800000008000000080000000) -
                       fVar24 * fVar24 * __real_3f000000;
            }
            psVar2[lVar18].sym = iVar10;
            *(float *)((longlong)&local_78 + lVar18 * 8 + lVar19 + 4) = (float)uVar11 * fVar24;
            lVar18 = lVar18 + 1;
          }
        }
        uVar11 = *(uint *)(lVar20 + (longlong)puVar13);
        if (uVar11 != 0) {
          uVar5 = *puVar13;
          if (1 < uVar5) {
            if ((int)uVar5 < 0x20) {
              fVar24 = c_logoneminusinv[(int)uVar5];
            }
            else {
              fVar24 = __real_3f800000 / (float)(int)uVar5;
              fVar24 = (float)((uint)fVar24 ^ __xmm_80000000800000008000000080000000) -
                       fVar24 * fVar24 * __real_3f000000;
            }
            psVar2[lVar18].sym = iVar22 + -1;
            *(float *)((longlong)&local_78 + lVar18 * 8 + lVar19 + 4) = (float)uVar11 * fVar24;
            lVar18 = lVar18 + 1;
          }
        }
        uVar11 = *(uint *)(lVar20 + 4 + (longlong)puVar13);
        if (uVar11 != 0) {
          uVar5 = puVar13[1];
          if (1 < uVar5) {
            if ((int)uVar5 < 0x20) {
              fVar24 = c_logoneminusinv[(int)uVar5];
            }
            else {
              fVar24 = __real_3f800000 / (float)(int)uVar5;
              fVar24 = (float)((uint)fVar24 ^ __xmm_80000000800000008000000080000000) -
                       fVar24 * fVar24 * __real_3f000000;
            }
            psVar2[lVar18].sym = iVar22;
            *(float *)((longlong)&local_78 + lVar18 * 8 + lVar19 + 4) = (float)uVar11 * fVar24;
            lVar18 = lVar18 + 1;
          }
        }
        uVar11 = *(uint *)(lVar20 + 8 + (longlong)puVar13);
        if (uVar11 != 0) {
          uVar5 = puVar13[2];
          if (1 < uVar5) {
            if ((int)uVar5 < 0x20) {
              fVar24 = c_logoneminusinv[(int)uVar5];
            }
            else {
              fVar24 = __real_3f800000 / (float)(int)uVar5;
              fVar24 = (float)((uint)fVar24 ^ __xmm_80000000800000008000000080000000) -
                       fVar24 * fVar24 * __real_3f000000;
            }
            psVar2[lVar18].sym = iVar22 + 1;
            *(float *)((longlong)&local_78 + lVar18 * 8 + lVar19 + 4) = (float)uVar11 * fVar24;
            lVar18 = lVar18 + 1;
          }
        }
        puVar13 = puVar13 + 4;
        iVar10 = iVar10 + 4;
        iVar22 = iVar22 + 4;
      } while (iVar10 < param_5 + -3);
      param_3 = local_70;
      if (iVar10 < param_5) {
LAB_14ff502fd:
        puVar13 = param_1 + lVar17;
        do {
          uVar11 = *(uint *)(((longlong)param_3 - (longlong)param_1) + (longlong)puVar13);
          if (uVar11 != 0) {
            uVar5 = *puVar13;
            if (1 < uVar5) {
              if ((int)uVar5 < 0x20) {
                fVar24 = c_logoneminusinv[(int)uVar5];
              }
              else {
                fVar24 = __real_3f800000 / (float)(int)uVar5;
                fVar24 = (float)((uint)fVar24 ^ __xmm_80000000800000008000000080000000) -
                         fVar24 * fVar24 * __real_3f000000;
              }
              psVar2[lVar18].sym = iVar10;
              *(float *)((longlong)&local_78 + lVar18 * 8 + lVar19 + 4) = (float)uVar11 * fVar24;
              lVar18 = lVar18 + 1;
            }
          }
          puVar13 = puVar13 + 1;
          iVar10 = iVar10 + 1;
        } while (iVar10 < param_5);
      }
    }
  }
  else {
    iVar10 = 0;
    if (param_5 < 4) {
      if (0 < param_5) {
        lVar17 = 0;
        iVar10 = 0;
        goto LAB_14ff5009f;
      }
    }
    else {
      lVar20 = (longlong)param_3 - (longlong)param_1;
      iVar22 = 2;
      puVar13 = param_1 + 1;
      lVar17 = (ulonglong)((param_5 - 4U >> 2) + 1) << 2;
      do {
        uVar11 = *(uint *)(lVar20 + -4 + (longlong)puVar13);
        if (uVar11 != 0) {
          uVar5 = puVar13[-1];
          if ((int)uVar5 < 0x20) {
            fVar24 = c_logoneplusinv[(int)uVar5];
          }
          else {
            fVar24 = __real_3f800000 / (float)(int)uVar5;
            fVar24 = fVar24 - fVar24 * fVar24 * __real_3f000000;
          }
          psVar2[lVar18].sym = iVar10;
          *(float *)((longlong)&local_78 + lVar18 * 8 + lVar19 + 4) = (float)uVar11 * fVar24;
          lVar18 = lVar18 + 1;
        }
        uVar11 = *(uint *)((longlong)puVar13 + lVar20);
        if (uVar11 != 0) {
          uVar5 = *puVar13;
          if ((int)uVar5 < 0x20) {
            fVar24 = c_logoneplusinv[(int)uVar5];
          }
          else {
            fVar24 = __real_3f800000 / (float)(int)uVar5;
            fVar24 = fVar24 - fVar24 * fVar24 * __real_3f000000;
          }
          psVar2[lVar18].sym = iVar22 + -1;
          *(float *)((longlong)&local_78 + lVar18 * 8 + lVar19 + 4) = (float)uVar11 * fVar24;
          lVar18 = lVar18 + 1;
        }
        uVar11 = *(uint *)(lVar20 + 4 + (longlong)puVar13);
        if (uVar11 != 0) {
          uVar5 = puVar13[1];
          if ((int)uVar5 < 0x20) {
            fVar24 = c_logoneplusinv[(int)uVar5];
          }
          else {
            fVar24 = __real_3f800000 / (float)(int)uVar5;
            fVar24 = fVar24 - fVar24 * fVar24 * __real_3f000000;
          }
          psVar2[lVar18].sym = iVar22;
          *(float *)((longlong)&local_78 + lVar18 * 8 + lVar19 + 4) = (float)uVar11 * fVar24;
          lVar18 = lVar18 + 1;
        }
        uVar11 = *(uint *)(lVar20 + 8 + (longlong)puVar13);
        if (uVar11 != 0) {
          uVar5 = puVar13[2];
          if ((int)uVar5 < 0x20) {
            fVar24 = c_logoneplusinv[(int)uVar5];
          }
          else {
            fVar24 = __real_3f800000 / (float)(int)uVar5;
            fVar24 = fVar24 - fVar24 * fVar24 * __real_3f000000;
          }
          psVar2[lVar18].sym = iVar22 + 1;
          *(float *)((longlong)&local_78 + lVar18 * 8 + lVar19 + 4) = (float)uVar11 * fVar24;
          lVar18 = lVar18 + 1;
        }
        puVar13 = puVar13 + 4;
        iVar10 = iVar10 + 4;
        iVar22 = iVar22 + 4;
      } while (iVar10 < param_5 + -3);
      param_3 = local_70;
      if (iVar10 < param_5) {
LAB_14ff5009f:
        puVar13 = param_1 + lVar17;
        do {
          uVar11 = *(uint *)(((longlong)param_3 - (longlong)param_1) + (longlong)puVar13);
          if (uVar11 != 0) {
            uVar5 = *puVar13;
            if ((int)uVar5 < 0x20) {
              fVar24 = c_logoneplusinv[(int)uVar5];
            }
            else {
              fVar24 = __real_3f800000 / (float)(int)uVar5;
              fVar24 = fVar24 - fVar24 * fVar24 * __real_3f000000;
            }
            psVar2[lVar18].sym = iVar10;
            *(float *)((longlong)&local_78 + lVar18 * 8 + lVar19 + 4) = (float)uVar11 * fVar24;
            lVar18 = lVar18 + 1;
          }
          puVar13 = puVar13 + 1;
          iVar10 = iVar10 + 1;
        } while (iVar10 < param_5);
      }
    }
  }
  lVar17 = lVar18 >> 1;
  if (0 < lVar17) {
    lVar20 = lVar17 * 2 + 1;
    do {
      lVar17 = lVar17 + -1;
      lVar20 = lVar20 + -2;
      lVar15 = lVar17;
      for (lVar14 = lVar20; lVar14 < lVar18; lVar14 = lVar14 * 2 + 1) {
        if (lVar14 + 1 < lVar18) {
          fVar24 = *(float *)((longlong)&local_70 + lVar14 * 8 + lVar19 + 4);
          pfVar3 = (float *)((longlong)&local_78 + lVar14 * 8 + lVar19 + 4);
          lVar14 = lVar14 + (ulonglong)(*pfVar3 <= fVar24 && fVar24 != *pfVar3);
        }
        fVar24 = *(float *)((longlong)&local_78 + lVar15 * 8 + lVar19 + 4);
        pfVar3 = (float *)((longlong)&local_78 + lVar14 * 8 + lVar19 + 4);
        if (*pfVar3 <= fVar24 && fVar24 != *pfVar3) break;
        sVar6 = psVar2[lVar15];
        psVar2[lVar15] = psVar2[lVar14];
        psVar2[lVar14] = sVar6;
        lVar15 = lVar14;
      }
    } while (0 < lVar17);
  }
  puVar13 = local_68;
  if (iVar21 < 1) {
    uVar12 = (ulonglong)(uint)-iVar21;
    do {
      if (lVar18 < 1) {
        *(undefined8 *)(auStack_98 + lVar19 + -8) = 0x14ff50547;
        iVar10 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrcompressutil.cpp",0x157,
                                    "oo2net::normalize_counts_v6","heap_size > 0");
        if (iVar10 != 0) {
          pcVar7 = (code *)swi(3);
          iVar10 = (*pcVar7)();
          return iVar10;
        }
      }
      iVar10 = psVar2->sym;
      *(undefined8 *)(auStack_98 + lVar19 + -8) = 0x14ff5055b;
      popped_heap<oo2net::sort_sym>(psVar2,psVar2 + lVar18);
      lVar17 = lVar18 + -1;
      uVar11 = puVar13[iVar10] - 1;
      puVar13[iVar10] = uVar11;
      if (1 < uVar11) {
        if ((int)uVar11 < 0x20) {
          fVar24 = c_logoneminusinv[(int)uVar11];
        }
        else {
          fVar24 = fVar8 / (float)(int)uVar11;
          fVar24 = (float)((uint)fVar24 ^ uVar4) - fVar24 * fVar24 * fVar9;
        }
        uVar11 = local_70[iVar10];
        psVar2[lVar17].sym = iVar10;
        *(float *)((longlong)&local_78 + lVar17 * 8 + lVar19 + 4) = (float)uVar11 * fVar24;
        lVar20 = lVar18 * 8 + -8 >> 3;
        while ((lVar17 = lVar18, 0 < lVar20 &&
               (fVar24 = *(float *)((longlong)&local_78 + lVar20 * 8 + lVar19 + 4),
               lVar15 = lVar20 + -1 >> 1,
               pfVar3 = (float *)((longlong)&local_78 + lVar15 * 8 + lVar19 + 4),
               *pfVar3 <= fVar24 && fVar24 != *pfVar3))) {
          sVar6 = psVar2[lVar15];
          psVar2[lVar15] = psVar2[lVar20];
          psVar2[lVar20] = sVar6;
          lVar20 = lVar15;
        }
      }
      uVar12 = uVar12 - 1;
      puVar16 = auStack_98 + lVar19;
      lVar18 = lVar17;
    } while (uVar12 != 0);
  }
  else {
    do {
      if (lVar18 < 1) {
        *(undefined8 *)(auStack_98 + lVar19 + -8) = 0x14ff50446;
        iVar10 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrcompressutil.cpp",0x13e,
                                    "oo2net::normalize_counts_v6","heap_size > 0");
        if (iVar10 != 0) {
          pcVar7 = (code *)swi(3);
          iVar10 = (*pcVar7)();
          return iVar10;
        }
      }
      iVar10 = psVar2->sym;
      *(undefined8 *)(auStack_98 + lVar19 + -8) = 0x14ff50459;
      popped_heap<oo2net::sort_sym>(psVar2,psVar2 + lVar18);
      iVar21 = iVar21 + -1;
      local_68[iVar10] = local_68[iVar10] + 1;
      uVar4 = local_68[iVar10];
      if ((int)uVar4 < 0x20) {
        fVar24 = c_logoneplusinv[(int)uVar4];
      }
      else {
        fVar24 = fVar8 / (float)(int)uVar4;
        fVar24 = fVar24 - fVar24 * fVar24 * fVar9;
      }
      uVar4 = local_70[iVar10];
      *(int *)((longlong)&iStack_80 + lVar18 * 8 + lVar19) = iVar10;
      *(float *)((longlong)&fStack_7c + lVar18 * 8 + lVar19) = (float)uVar4 * fVar24;
      lVar17 = lVar18 * 8 + -8 >> 3;
      while ((0 < lVar17 &&
             (fVar24 = *(float *)((longlong)&local_78 + lVar17 * 8 + lVar19 + 4),
             lVar20 = lVar17 + -1 >> 1,
             pfVar3 = (float *)((longlong)&local_78 + lVar20 * 8 + lVar19 + 4),
             *pfVar3 <= fVar24 && fVar24 != *pfVar3))) {
        sVar6 = psVar2[lVar20];
        psVar2[lVar20] = psVar2[lVar17];
        psVar2[lVar17] = sVar6;
        lVar17 = lVar20;
      }
    } while (iVar21 != 0);
  }
LAB_14ff5061e:
  *(undefined8 *)(puVar16 + -8) = 0x14ff5062a;
  return local_78.sym;
}

// release @ 14ff50660

void __thiscall
oo2net::vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_>::release
          (vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_> *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// release @ 14ff506a0

void __thiscall
oo2net::vector_storage<oo2net::sort_value>::release(vector_storage<oo2net::sort_value> *this)

{
  if (this->m_begin != (sort_value *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (sort_value *)0x0;
  return;
}

// resize @ 14ff506e0

void __thiscall
oo2net::vector_flex<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_>::resize
          (vector_flex<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_> *this,
          ulong64 param_1)

{
  ulonglong uVar1;
  sort_value *psVar2;
  
  uVar1 = *(ulonglong *)&this->field_0x10;
  if (param_1 < uVar1) {
    *(ulong64 *)&this->field_0x10 = param_1;
    return;
  }
  if (*(ulonglong *)&this->field_0x8 < param_1) {
    psVar2 = vector_storage<oo2net::sort_value>::makefit1
                       ((vector_storage<oo2net::sort_value> *)this,param_1,uVar1);
    if (psVar2 != (sort_value *)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(psVar2);
    }
  }
  *(ulong64 *)&this->field_0x10 = *(longlong *)&this->field_0x10 + (param_1 - uVar1);
  return;
}

// rrClz32 @ 14ff50740

uint __cdecl oo2net::rrClz32(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return 0x1f - iVar1;
}

// rrFoldUpNegatives @ 14ff50760

uint __cdecl oo2net::rrFoldUpNegatives(int param_1)

{
  return param_1 >> 0x1f ^ param_1 * 2;
}

// rrGetBitLevel_V_NonZero @ 14ff50770

uint __cdecl oo2net::rrGetBitLevel_V_NonZero(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return iVar1 + 1;
}

// rrLogCompression @ 14ff50780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl oo2net::rrLogCompression(long64 param_1,long64 param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_f8 [32];
  char *local_d8;
  char *local_d0;
  uint local_c8;
  uint local_c0;
  uint local_b8;
  uint local_b0;
  char local_a8 [64];
  char local_68 [64];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((param_1 < 1) || (param_2 < 1)) {
    if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
      local_d8 = (char *)param_1;
      local_d0 = (char *)param_2;
      (*g_fp_OodleNet_Plugin_Printf)
                (1,"v:\\devel\\projects\\oodle2\\core\\rrcompressutil.cpp",0x23,
                 "%10%lld -> %10%lld (abnormal)");
    }
  }
  else {
    fVar2 = (float)(((double)param_2 * __real_4020000000000000) / (double)param_1) * __real_447a0000
    ;
    if (fVar2 < 0.0) {
      fVar2 = fVar2 - __real_3f000000;
    }
    else {
      fVar2 = fVar2 + __real_3f000000;
    }
    fVar1 = (float)(((double)param_1 * __real_408f400000000000) / (double)param_2);
    if (fVar1 < 0.0) {
      fVar1 = fVar1 - __real_3f000000;
    }
    else {
      fVar1 = fVar1 + __real_3f000000;
    }
    rrsprintfcommas(local_68,param_1);
    rrsprintfcommas(local_a8,param_2);
    if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
      local_b8 = (uint)(int)fVar1 / 1000;
      local_b0 = (uint)(int)fVar1 % 1000;
      local_d0 = local_a8;
      local_d8 = local_68;
      local_c8 = (uint)(int)fVar2 / 1000;
      local_c0 = (uint)(int)fVar2 % 1000;
      (*g_fp_OodleNet_Plugin_Printf)
                (1,"v:\\devel\\projects\\oodle2\\core\\rrcompressutil.cpp",0x3d,
                 "%10s ->%10s = %2u.%03u bpb = %2u.%03u to 1 ");
    }
  }
  return;
}

// rrLogHighestValues @ 14ff50940

void __cdecl oo2net::rrLogHighestValues(uint *param_1,int param_2,int param_3)

{
  sort_value *psVar1;
  sort_value *psVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  _func___cdecl_void_int_char_ptr_int_char_ptr *p_Var6;
  stdless<oo2net::sort_value> local_res10;
  vector_storage<oo2net::sort_value> local_30;
  ulonglong local_20;
  
  uVar5 = 0;
  local_30.m_begin = (sort_value *)0x0;
  local_30.m_capacity = 0;
  local_20 = 0;
  uVar4 = uVar5;
  if ((param_2 != 0) &&
     (psVar1 = vector_storage<oo2net::sort_value>::makefit1(&local_30,(longlong)param_2,0),
     uVar4 = local_20, psVar1 != (sort_value *)0x0)) {
    (*g_fp_OodleNet_Plugin_Free)(psVar1);
    uVar4 = local_20;
  }
  psVar1 = local_30.m_begin;
  local_20 = uVar4 + (longlong)param_2;
  psVar2 = local_30.m_begin;
  uVar4 = uVar5;
  if (0 < param_2) {
    do {
      psVar2->value = *param_1;
      psVar2->index = (int)uVar4;
      uVar3 = (int)uVar4 + 1;
      param_1 = param_1 + 1;
      psVar2 = psVar2 + 1;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < param_2);
  }
  stdsort<oo2net::sort_value_*,oo2net::stdless<oo2net::sort_value>_>
            (local_30.m_begin,local_30.m_begin + local_20,local_res10);
  p_Var6 = g_fp_OodleNet_Plugin_Printf;
  if (0 < param_3) {
    do {
      if (p_Var6 != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
        (*p_Var6)(1,"v:\\devel\\projects\\oodle2\\core\\rrcompressutil.cpp",0x5b,"%2d: %4d: %d\n");
        p_Var6 = g_fp_OodleNet_Plugin_Printf;
      }
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)param_3);
  }
  if (psVar1 != (sort_value *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(psVar1);
  }
  return;
}

// rrPtrDiff32 @ 14ff50a70

int __cdecl oo2net::rrPtrDiff32(long64 param_1)

{
  return (int)param_1;
}

// rrVarBits_CountBits_EliasGamma @ 14ff50a80

int __cdecl oo2net::rrVarBits_CountBits_EliasGamma(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 + 1 != 0) {
    for (; param_1 + 1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return iVar1 * 2 + 1;
}

// rrVarBits_CountBits_ExpGolomb @ 14ff50aa0

int __cdecl oo2net::rrVarBits_CountBits_ExpGolomb(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (param_1 >> ((byte)param_2 & 0x1f)) + 1;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return iVar1 * 2 + 1 + param_2;
}

// rr_ftoi_round @ 14ff50ac0

int __cdecl oo2net::rr_ftoi_round(float param_1)

{
  if (0.0 <= param_1) {
    return (int)(param_1 + __real_3f000000);
  }
  return (int)(param_1 - __real_3f000000);
}

// rr_ftoi_trunc @ 14ff50af0

int __cdecl oo2net::rr_ftoi_trunc(float param_1)

{
  return (int)param_1;
}

// rrlog10 @ 14ff50b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl oo2net::rrlog10(double param_1)

{
  double dVar1;
  
  dVar1 = rrlog2_F64(param_1);
  return dVar1 * ___real_3fd3441355475a32;
}

// shrink @ 14ff50b20

void __thiscall
oo2net::vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_>::shrink
          (vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_> *this,
          ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// size @ 14ff50b30

ulong64 __thiscall
oo2net::vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_>::size
          (vector_base<oo2net::sort_value,oo2net::vector_storage<oo2net::sort_value>_> *this)

{
  return this->m_size;
}

// dtor$0 @ 150325de0

void `oo2net::rrLogHighestValues'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2net::vector<oo2net::sort_value>::~vector<oo2net::sort_value>
            ((vector<oo2net::sort_value> *)(param_2 + 0x48));
  return;
}

