// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 75

// ByteCopy<oo2::lazy_merge_candidate,oo2::lazy_merge_candidate> @ 14f3d6a70

void __cdecl
oo2::ByteCopy<oo2::lazy_merge_candidate,oo2::lazy_merge_candidate>
          (lazy_merge_candidate *param_1,lazy_merge_candidate *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = param_2->merged_complen_bits;
  iVar2 = param_2->src1;
  iVar3 = param_2->src2;
  param_1->gain_J = param_2->gain_J;
  param_1->merged_complen_bits = uVar1;
  param_1->src1 = iVar2;
  param_1->src2 = iVar3;
  uVar1 = param_2->src2len;
  param_1->src1len = param_2->src1len;
  param_1->src2len = uVar1;
  return;
}

// ByteCopy<oo2::Bytes<24>,oo2::Bytes<24>_> @ 14f3d6a90

void __cdecl oo2::ByteCopy<oo2::Bytes<24>,oo2::Bytes<24>_>(Bytes<24> *param_1,Bytes<24> *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2->bytes + 8);
  *(undefined8 *)param_1->bytes = *(undefined8 *)param_2->bytes;
  *(undefined8 *)(param_1->bytes + 8) = uVar1;
  *(undefined8 *)(param_1->bytes + 0x10) = *(undefined8 *)(param_2->bytes + 0x10);
  return;
}

// ByteSwap<oo2::lazy_merge_candidate> @ 14f3d6ab0

void __cdecl
oo2::ByteSwap<oo2::lazy_merge_candidate>
          (lazy_merge_candidate *param_1,lazy_merge_candidate *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = param_2->merged_complen_bits;
  iVar2 = param_2->src1;
  iVar3 = param_2->src2;
  fVar4 = param_1->gain_J;
  uVar5 = param_1->merged_complen_bits;
  iVar6 = param_1->src1;
  iVar7 = param_1->src2;
  uVar8 = param_1->src1len;
  uVar9 = param_1->src2len;
  param_1->gain_J = param_2->gain_J;
  param_1->merged_complen_bits = uVar1;
  param_1->src1 = iVar2;
  param_1->src2 = iVar3;
  uVar1 = param_2->src2len;
  param_1->src1len = param_2->src1len;
  param_1->src2len = uVar1;
  param_2->gain_J = fVar4;
  param_2->merged_complen_bits = uVar5;
  param_2->src1 = iVar6;
  param_2->src2 = iVar7;
  param_2->src1len = uVar8;
  param_2->src2len = uVar9;
  return;
}

// adjust_heap<oo2::lazy_merge_candidate,oo2::stdless<oo2::lazy_merge_candidate>_> @ 14f3d6ae0

void __cdecl
oo2::adjust_heap<oo2::lazy_merge_candidate,oo2::stdless<oo2::lazy_merge_candidate>_>
          (lazy_merge_candidate *param_1,long64 param_2,long64 param_3,
          stdless<oo2::lazy_merge_candidate> param_4)

{
  lazy_merge_candidate *plVar1;
  lazy_merge_candidate *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  
  while( true ) {
    lVar3 = param_2 * 2;
    lVar13 = lVar3 + 1;
    if (param_3 <= lVar13) {
      return;
    }
    if (lVar3 + 2 < param_3) {
      lVar13 = lVar13 + (ulonglong)
                        (param_1[lVar13].gain_J <= param_1[lVar3 + 2].gain_J &&
                        param_1[lVar3 + 2].gain_J != param_1[lVar13].gain_J);
    }
    if (param_1[lVar13].gain_J <= param_1[param_2].gain_J &&
        param_1[param_2].gain_J != param_1[lVar13].gain_J) break;
    plVar1 = param_1 + lVar13;
    uVar4 = plVar1->merged_complen_bits;
    iVar5 = plVar1->src1;
    iVar6 = plVar1->src2;
    uVar11 = param_1[param_2].src1len;
    uVar12 = param_1[param_2].src2len;
    plVar2 = param_1 + param_2;
    fVar7 = plVar2->gain_J;
    uVar8 = plVar2->merged_complen_bits;
    iVar9 = plVar2->src1;
    iVar10 = plVar2->src2;
    plVar2 = param_1 + param_2;
    plVar2->gain_J = plVar1->gain_J;
    plVar2->merged_complen_bits = uVar4;
    plVar2->src1 = iVar5;
    plVar2->src2 = iVar6;
    uVar4 = param_1[lVar13].src2len;
    param_1[param_2].src1len = param_1[lVar13].src1len;
    param_1[param_2].src2len = uVar4;
    plVar1 = param_1 + lVar13;
    plVar1->gain_J = fVar7;
    plVar1->merged_complen_bits = uVar8;
    plVar1->src1 = iVar9;
    plVar1->src2 = iVar10;
    param_1[lVar13].src1len = uVar11;
    param_1[lVar13].src2len = uVar12;
    param_2 = lVar13;
  }
  return;
}

// default_construct<oo2::entropyset> @ 14f3d6b70

entropyset * __cdecl oo2::default_construct<oo2::entropyset>(entropyset *param_1,ulong64 param_2)

{
  return param_1;
}

// default_construct<oo2::lazy_merge_candidate> @ 14f3d6b80

lazy_merge_candidate * __cdecl
oo2::default_construct<oo2::lazy_merge_candidate>(lazy_merge_candidate *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<oo2::entropyset> @ 14f3d6b90

entropyset * __cdecl oo2::destruct<oo2::entropyset>(entropyset *param_1)

{
  return param_1;
}

// destruct<oo2::entropyset> @ 14f3d6ba0

entropyset * __cdecl oo2::destruct<oo2::entropyset>(entropyset *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<oo2::lazy_merge_candidate> @ 14f3d6bb0

lazy_merge_candidate * __cdecl
oo2::destruct<oo2::lazy_merge_candidate>(lazy_merge_candidate *param_1)

{
  return param_1;
}

// destruct<oo2::lazy_merge_candidate> @ 14f3d6bc0

lazy_merge_candidate * __cdecl
oo2::destruct<oo2::lazy_merge_candidate>(lazy_merge_candidate *param_1,ulong64 param_2)

{
  return param_1;
}

// make_heap<oo2::lazy_merge_candidate> @ 14f3d6be0

void __cdecl
oo2::make_heap<oo2::lazy_merge_candidate>
          (lazy_merge_candidate *param_1,lazy_merge_candidate *param_2)

{
  lazy_merge_candidate *plVar1;
  lazy_merge_candidate *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  
  lVar13 = ((longlong)param_2 - (longlong)param_1) / 6 +
           ((longlong)param_2 - (longlong)param_1 >> 0x3f);
  lVar13 = (lVar13 >> 2) - (lVar13 >> 0x3f);
  lVar16 = lVar13 >> 1;
  if (0 < lVar16) {
    lVar15 = lVar16 * 2 + 1;
    do {
      lVar16 = lVar16 + -1;
      lVar15 = lVar15 + -2;
      lVar3 = lVar16;
      for (lVar14 = lVar15; lVar14 < lVar13; lVar14 = lVar14 * 2 + 1) {
        if (lVar14 + 1 < lVar13) {
          lVar14 = lVar14 + (ulonglong)
                            (param_1[lVar14].gain_J <= param_1[lVar14 + 1].gain_J &&
                            param_1[lVar14 + 1].gain_J != param_1[lVar14].gain_J);
        }
        if (param_1[lVar14].gain_J <= param_1[lVar3].gain_J &&
            param_1[lVar3].gain_J != param_1[lVar14].gain_J) break;
        plVar1 = param_1 + lVar14;
        uVar4 = plVar1->merged_complen_bits;
        iVar5 = plVar1->src1;
        iVar6 = plVar1->src2;
        uVar11 = param_1[lVar3].src1len;
        uVar12 = param_1[lVar3].src2len;
        plVar2 = param_1 + lVar3;
        fVar7 = plVar2->gain_J;
        uVar8 = plVar2->merged_complen_bits;
        iVar9 = plVar2->src1;
        iVar10 = plVar2->src2;
        plVar2 = param_1 + lVar3;
        plVar2->gain_J = plVar1->gain_J;
        plVar2->merged_complen_bits = uVar4;
        plVar2->src1 = iVar5;
        plVar2->src2 = iVar6;
        uVar4 = param_1[lVar14].src2len;
        param_1[lVar3].src1len = param_1[lVar14].src1len;
        param_1[lVar3].src2len = uVar4;
        plVar1 = param_1 + lVar14;
        plVar1->gain_J = fVar7;
        plVar1->merged_complen_bits = uVar8;
        plVar1->src1 = iVar9;
        plVar1->src2 = iVar10;
        param_1[lVar14].src1len = uVar11;
        param_1[lVar14].src2len = uVar12;
        lVar3 = lVar14;
      }
    } while (0 < lVar16);
  }
  return;
}

// make_heap<oo2::lazy_merge_candidate,oo2::stdless<oo2::lazy_merge_candidate>_> @ 14f3d6ce0

void __cdecl
oo2::make_heap<oo2::lazy_merge_candidate,oo2::stdless<oo2::lazy_merge_candidate>_>
          (lazy_merge_candidate *param_1,lazy_merge_candidate *param_2,
          stdless<oo2::lazy_merge_candidate> param_3)

{
  lazy_merge_candidate *plVar1;
  lazy_merge_candidate *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  
  lVar13 = ((longlong)param_2 - (longlong)param_1) / 6 +
           ((longlong)param_2 - (longlong)param_1 >> 0x3f);
  lVar13 = (lVar13 >> 2) - (lVar13 >> 0x3f);
  lVar16 = lVar13 >> 1;
  if (0 < lVar16) {
    lVar15 = lVar16 * 2 + 1;
    do {
      lVar16 = lVar16 + -1;
      lVar15 = lVar15 + -2;
      lVar3 = lVar16;
      for (lVar14 = lVar15; lVar14 < lVar13; lVar14 = lVar14 * 2 + 1) {
        if (lVar14 + 1 < lVar13) {
          lVar14 = lVar14 + (ulonglong)
                            (param_1[lVar14].gain_J <= param_1[lVar14 + 1].gain_J &&
                            param_1[lVar14 + 1].gain_J != param_1[lVar14].gain_J);
        }
        if (param_1[lVar14].gain_J <= param_1[lVar3].gain_J &&
            param_1[lVar3].gain_J != param_1[lVar14].gain_J) break;
        plVar1 = param_1 + lVar14;
        uVar4 = plVar1->merged_complen_bits;
        iVar5 = plVar1->src1;
        iVar6 = plVar1->src2;
        uVar11 = param_1[lVar3].src1len;
        uVar12 = param_1[lVar3].src2len;
        plVar2 = param_1 + lVar3;
        fVar7 = plVar2->gain_J;
        uVar8 = plVar2->merged_complen_bits;
        iVar9 = plVar2->src1;
        iVar10 = plVar2->src2;
        plVar2 = param_1 + lVar3;
        plVar2->gain_J = plVar1->gain_J;
        plVar2->merged_complen_bits = uVar4;
        plVar2->src1 = iVar5;
        plVar2->src2 = iVar6;
        uVar4 = param_1[lVar14].src2len;
        param_1[lVar3].src1len = param_1[lVar14].src1len;
        param_1[lVar3].src2len = uVar4;
        plVar1 = param_1 + lVar14;
        plVar1->gain_J = fVar7;
        plVar1->merged_complen_bits = uVar8;
        plVar1->src1 = iVar9;
        plVar1->src2 = iVar10;
        param_1[lVar14].src1len = uVar11;
        param_1[lVar14].src2len = uVar12;
        lVar3 = lVar14;
      }
    } while (0 < lVar16);
  }
  return;
}

// popped_heap<oo2::lazy_merge_candidate> @ 14f3d6de0

void __cdecl
oo2::popped_heap<oo2::lazy_merge_candidate>
          (lazy_merge_candidate *param_1,lazy_merge_candidate *param_2)

{
  lazy_merge_candidate *plVar1;
  lazy_merge_candidate *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  lVar14 = 1;
  lVar12 = ((longlong)param_2 - (longlong)param_1) / 6 +
           ((longlong)param_2 - (longlong)param_1 >> 0x3f);
  lVar13 = 0;
  lVar15 = (lVar12 >> 2) - (lVar12 >> 0x3f);
  lVar12 = lVar13;
  if (1 < lVar15) {
    do {
      lVar13 = lVar14;
      if ((lVar14 + 1 < lVar15) &&
         (param_1[lVar14].gain_J <= param_1[lVar14 + 1].gain_J &&
          param_1[lVar14 + 1].gain_J != param_1[lVar14].gain_J)) {
        lVar13 = lVar14 + 1;
      }
      plVar1 = param_1 + lVar13;
      uVar3 = plVar1->merged_complen_bits;
      iVar4 = plVar1->src1;
      iVar5 = plVar1->src2;
      lVar14 = lVar13 * 2 + 1;
      plVar2 = param_1 + lVar12;
      plVar2->gain_J = plVar1->gain_J;
      plVar2->merged_complen_bits = uVar3;
      plVar2->src1 = iVar4;
      plVar2->src2 = iVar5;
      uVar3 = param_1[lVar13].src2len;
      param_1[lVar12].src1len = param_1[lVar13].src1len;
      param_1[lVar12].src2len = uVar3;
      lVar12 = lVar13;
    } while (lVar14 < lVar15);
  }
  lVar15 = lVar15 + -1;
  if (lVar13 < lVar15) {
    plVar1 = param_1 + lVar15;
    uVar3 = plVar1->merged_complen_bits;
    iVar4 = plVar1->src1;
    iVar5 = plVar1->src2;
    plVar2 = param_1 + lVar13;
    plVar2->gain_J = plVar1->gain_J;
    plVar2->merged_complen_bits = uVar3;
    plVar2->src1 = iVar4;
    plVar2->src2 = iVar5;
    uVar3 = param_1[lVar15].src2len;
    param_1[lVar13].src1len = param_1[lVar15].src1len;
    param_1[lVar13].src2len = uVar3;
    lVar14 = (lVar13 * 0x18) / 0x18;
    while ((0 < lVar14 &&
           (lVar12 = lVar14 + -1 >> 1,
           param_1[lVar12].gain_J <= param_1[lVar14].gain_J &&
           param_1[lVar14].gain_J != param_1[lVar12].gain_J))) {
      uVar10 = param_1[lVar12].src1len;
      uVar11 = param_1[lVar12].src2len;
      plVar1 = param_1 + lVar14;
      uVar3 = plVar1->merged_complen_bits;
      iVar4 = plVar1->src1;
      iVar5 = plVar1->src2;
      plVar2 = param_1 + lVar12;
      fVar6 = plVar2->gain_J;
      uVar7 = plVar2->merged_complen_bits;
      iVar8 = plVar2->src1;
      iVar9 = plVar2->src2;
      plVar2 = param_1 + lVar12;
      plVar2->gain_J = plVar1->gain_J;
      plVar2->merged_complen_bits = uVar3;
      plVar2->src1 = iVar4;
      plVar2->src2 = iVar5;
      uVar3 = param_1[lVar14].src2len;
      param_1[lVar12].src1len = param_1[lVar14].src1len;
      param_1[lVar12].src2len = uVar3;
      plVar1 = param_1 + lVar14;
      plVar1->gain_J = fVar6;
      plVar1->merged_complen_bits = uVar7;
      plVar1->src1 = iVar8;
      plVar1->src2 = iVar9;
      param_1[lVar14].src1len = uVar10;
      param_1[lVar14].src2len = uVar11;
      lVar14 = lVar12;
    }
  }
  return;
}

// popped_heap<oo2::lazy_merge_candidate,oo2::stdless<oo2::lazy_merge_candidate>_> @ 14f3d6f20

void __cdecl
oo2::popped_heap<oo2::lazy_merge_candidate,oo2::stdless<oo2::lazy_merge_candidate>_>
          (lazy_merge_candidate *param_1,lazy_merge_candidate *param_2,
          stdless<oo2::lazy_merge_candidate> param_3)

{
  lazy_merge_candidate *plVar1;
  lazy_merge_candidate *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  lVar14 = 1;
  lVar12 = ((longlong)param_2 - (longlong)param_1) / 6 +
           ((longlong)param_2 - (longlong)param_1 >> 0x3f);
  lVar13 = 0;
  lVar15 = (lVar12 >> 2) - (lVar12 >> 0x3f);
  lVar12 = lVar13;
  if (1 < lVar15) {
    do {
      lVar13 = lVar14;
      if ((lVar14 + 1 < lVar15) &&
         (param_1[lVar14].gain_J <= param_1[lVar14 + 1].gain_J &&
          param_1[lVar14 + 1].gain_J != param_1[lVar14].gain_J)) {
        lVar13 = lVar14 + 1;
      }
      plVar1 = param_1 + lVar13;
      uVar3 = plVar1->merged_complen_bits;
      iVar4 = plVar1->src1;
      iVar5 = plVar1->src2;
      lVar14 = lVar13 * 2 + 1;
      plVar2 = param_1 + lVar12;
      plVar2->gain_J = plVar1->gain_J;
      plVar2->merged_complen_bits = uVar3;
      plVar2->src1 = iVar4;
      plVar2->src2 = iVar5;
      uVar3 = param_1[lVar13].src2len;
      param_1[lVar12].src1len = param_1[lVar13].src1len;
      param_1[lVar12].src2len = uVar3;
      lVar12 = lVar13;
    } while (lVar14 < lVar15);
  }
  lVar15 = lVar15 + -1;
  if (lVar13 < lVar15) {
    plVar1 = param_1 + lVar15;
    uVar3 = plVar1->merged_complen_bits;
    iVar4 = plVar1->src1;
    iVar5 = plVar1->src2;
    plVar2 = param_1 + lVar13;
    plVar2->gain_J = plVar1->gain_J;
    plVar2->merged_complen_bits = uVar3;
    plVar2->src1 = iVar4;
    plVar2->src2 = iVar5;
    uVar3 = param_1[lVar15].src2len;
    param_1[lVar13].src1len = param_1[lVar15].src1len;
    param_1[lVar13].src2len = uVar3;
    lVar14 = (lVar13 * 0x18) / 0x18;
    while ((0 < lVar14 &&
           (lVar12 = lVar14 + -1 >> 1,
           param_1[lVar12].gain_J <= param_1[lVar14].gain_J &&
           param_1[lVar14].gain_J != param_1[lVar12].gain_J))) {
      uVar10 = param_1[lVar12].src1len;
      uVar11 = param_1[lVar12].src2len;
      plVar1 = param_1 + lVar14;
      uVar3 = plVar1->merged_complen_bits;
      iVar4 = plVar1->src1;
      iVar5 = plVar1->src2;
      plVar2 = param_1 + lVar12;
      fVar6 = plVar2->gain_J;
      uVar7 = plVar2->merged_complen_bits;
      iVar8 = plVar2->src1;
      iVar9 = plVar2->src2;
      plVar2 = param_1 + lVar12;
      plVar2->gain_J = plVar1->gain_J;
      plVar2->merged_complen_bits = uVar3;
      plVar2->src1 = iVar4;
      plVar2->src2 = iVar5;
      uVar3 = param_1[lVar14].src2len;
      param_1[lVar12].src1len = param_1[lVar14].src1len;
      param_1[lVar12].src2len = uVar3;
      plVar1 = param_1 + lVar14;
      plVar1->gain_J = fVar6;
      plVar1->merged_complen_bits = uVar7;
      plVar1->src1 = iVar8;
      plVar1->src2 = iVar9;
      param_1[lVar14].src1len = uVar10;
      param_1[lVar14].src2len = uVar11;
      lVar14 = lVar12;
    }
  }
  return;
}

// promote_heap<oo2::lazy_merge_candidate,oo2::stdless<oo2::lazy_merge_candidate>_> @ 14f3d7060

void __cdecl
oo2::promote_heap<oo2::lazy_merge_candidate,oo2::stdless<oo2::lazy_merge_candidate>_>
          (lazy_merge_candidate *param_1,lazy_merge_candidate *param_2,lazy_merge_candidate *param_3
          ,stdless<oo2::lazy_merge_candidate> param_4)

{
  lazy_merge_candidate *plVar1;
  lazy_merge_candidate *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  
  lVar3 = ((longlong)param_3 - (longlong)param_1) / 0x18;
  while ((0 < lVar3 &&
         (lVar13 = lVar3 + -1 >> 1,
         param_1[lVar13].gain_J <= param_1[lVar3].gain_J &&
         param_1[lVar3].gain_J != param_1[lVar13].gain_J))) {
    uVar11 = param_1[lVar13].src1len;
    uVar12 = param_1[lVar13].src2len;
    plVar1 = param_1 + lVar3;
    uVar4 = plVar1->merged_complen_bits;
    iVar5 = plVar1->src1;
    iVar6 = plVar1->src2;
    plVar2 = param_1 + lVar13;
    fVar7 = plVar2->gain_J;
    uVar8 = plVar2->merged_complen_bits;
    iVar9 = plVar2->src1;
    iVar10 = plVar2->src2;
    plVar2 = param_1 + lVar13;
    plVar2->gain_J = plVar1->gain_J;
    plVar2->merged_complen_bits = uVar4;
    plVar2->src1 = iVar5;
    plVar2->src2 = iVar6;
    uVar4 = param_1[lVar3].src2len;
    param_1[lVar13].src1len = param_1[lVar3].src1len;
    param_1[lVar13].src2len = uVar4;
    plVar1 = param_1 + lVar3;
    plVar1->gain_J = fVar7;
    plVar1->merged_complen_bits = uVar8;
    plVar1->src1 = iVar9;
    plVar1->src2 = iVar10;
    param_1[lVar3].src1len = uVar11;
    param_1[lVar3].src2len = uVar12;
    lVar3 = lVar13;
  }
  return;
}

// push_heap<oo2::lazy_merge_candidate> @ 14f3d70f0

void __cdecl
oo2::push_heap<oo2::lazy_merge_candidate>
          (lazy_merge_candidate *param_1,lazy_merge_candidate *param_2)

{
  stdless<oo2::lazy_merge_candidate> local_res10;
  
  promote_heap<oo2::lazy_merge_candidate,oo2::stdless<oo2::lazy_merge_candidate>_>
            (param_1,param_2,param_2 + -1,local_res10);
  return;
}

// push_heap<oo2::lazy_merge_candidate,oo2::stdless<oo2::lazy_merge_candidate>_> @ 14f3d7110

void __cdecl
oo2::push_heap<oo2::lazy_merge_candidate,oo2::stdless<oo2::lazy_merge_candidate>_>
          (lazy_merge_candidate *param_1,lazy_merge_candidate *param_2,
          stdless<oo2::lazy_merge_candidate> param_3)

{
  promote_heap<oo2::lazy_merge_candidate,oo2::stdless<oo2::lazy_merge_candidate>_>
            (param_1,param_2,param_2 + -1,param_3);
  return;
}

// swap<oo2::lazy_merge_candidate> @ 14f3d7130

void __cdecl
oo2::swap<oo2::lazy_merge_candidate>(lazy_merge_candidate *param_1,lazy_merge_candidate *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = param_2->merged_complen_bits;
  iVar2 = param_2->src1;
  iVar3 = param_2->src2;
  fVar4 = param_1->gain_J;
  uVar5 = param_1->merged_complen_bits;
  iVar6 = param_1->src1;
  iVar7 = param_1->src2;
  uVar8 = param_1->src1len;
  uVar9 = param_1->src2len;
  param_1->gain_J = param_2->gain_J;
  param_1->merged_complen_bits = uVar1;
  param_1->src1 = iVar2;
  param_1->src2 = iVar3;
  uVar1 = param_2->src2len;
  param_1->src1len = param_2->src1len;
  param_1->src2len = uVar1;
  param_2->gain_J = fVar4;
  param_2->merged_complen_bits = uVar5;
  param_2->src1 = iVar6;
  param_2->src2 = iVar7;
  param_2->src1len = uVar8;
  param_2->src2len = uVar9;
  return;
}

// vector_a<oo2::lazy_merge_candidate> @ 14f3d7160

vector_a<oo2::lazy_merge_candidate> * __thiscall
oo2::vector_a<oo2::lazy_merge_candidate>::vector_a<oo2::lazy_merge_candidate>
          (vector_a<oo2::lazy_merge_candidate> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_base<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_> @ 14f3d7180

vector_base<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_> *
__thiscall
oo2::vector_base<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>::
vector_base<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>
          (vector_base<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>
           *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  return this;
}

// vector_flex<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_> @ 14f3d71a0

vector_flex<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_> *
__thiscall
oo2::vector_flex<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>::
vector_flex<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>
          (vector_flex<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_storage_a<oo2::lazy_merge_candidate> @ 14f3d71c0

vector_storage_a<oo2::lazy_merge_candidate> * __thiscall
oo2::vector_storage_a<oo2::lazy_merge_candidate>::vector_storage_a<oo2::lazy_merge_candidate>
          (vector_storage_a<oo2::lazy_merge_candidate> *this)

{
  this->m_data = (void *)0x0;
  this->m_capacity = 0;
  return this;
}

// ~vector_a<oo2::lazy_merge_candidate> @ 14f3d71e0

void __thiscall
oo2::vector_a<oo2::lazy_merge_candidate>::~vector_a<oo2::lazy_merge_candidate>
          (vector_a<oo2::lazy_merge_candidate> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_base<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_> @ 14f3d7200

void __thiscall
oo2::vector_base<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>::
~vector_base<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>
          (vector_base<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>
           *this)

{
  this->m_size = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// ~vector_flex<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_> @ 14f3d7220

void __thiscall
oo2::vector_flex<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>::
~vector_flex<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>
          (vector_flex<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>
           *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_storage_a<oo2::lazy_merge_candidate> @ 14f3d7240

void __thiscall
oo2::vector_storage_a<oo2::lazy_merge_candidate>::~vector_storage_a<oo2::lazy_merge_candidate>
          (vector_storage_a<oo2::lazy_merge_candidate> *this)

{
  return;
}

// operator< @ 14f3d7250

bool __cdecl oo2::operator<(lazy_merge_candidate *param_1,lazy_merge_candidate *param_2)

{
  return param_1->gain_J <= param_2->gain_J && param_2->gain_J != param_1->gain_J;
}

// operator() @ 14f3d7270

bool __thiscall
oo2::stdless<oo2::lazy_merge_candidate>::operator()
          (stdless<oo2::lazy_merge_candidate> *this,lazy_merge_candidate *param_1,
          lazy_merge_candidate *param_2)

{
  return param_1->gain_J <= param_2->gain_J && param_2->gain_J != param_1->gain_J;
}

// operator() @ 14f3d7290

void __thiscall
oo2::swap_functor<oo2::lazy_merge_candidate>::operator()
          (swap_functor<oo2::lazy_merge_candidate> *this,lazy_merge_candidate *param_1,
          lazy_merge_candidate *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = param_2->merged_complen_bits;
  iVar2 = param_2->src1;
  iVar3 = param_2->src2;
  fVar4 = param_1->gain_J;
  uVar5 = param_1->merged_complen_bits;
  iVar6 = param_1->src1;
  iVar7 = param_1->src2;
  uVar8 = param_1->src1len;
  uVar9 = param_1->src2len;
  param_1->gain_J = param_2->gain_J;
  param_1->merged_complen_bits = uVar1;
  param_1->src1 = iVar2;
  param_1->src2 = iVar3;
  uVar1 = param_2->src2len;
  param_1->src1len = param_2->src1len;
  param_1->src2len = uVar1;
  param_2->gain_J = fVar4;
  param_2->merged_complen_bits = uVar5;
  param_2->src1 = iVar6;
  param_2->src2 = iVar7;
  param_2->src1len = uVar8;
  param_2->src2len = uVar9;
  return;
}

// OodleFree @ 14f3d72c0

void __cdecl oo2::OodleFree(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f3d72c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleMallocAligned @ 14f3d72d0

void * __cdecl oo2::OodleMallocAligned(long64 param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = (*g_fp_OodleCore_Plugin_MallocAligned)(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1);
  }
  return pvVar1;
}

// U16_check @ 14f3d7310

ushort __cdecl oo2::U16_check(int param_1)

{
  return (ushort)param_1;
}

// add_S32_check_overflow @ 14f3d7320

int __cdecl oo2::add_S32_check_overflow(int param_1,int param_2)

{
  return param_1 + param_2;
}

// at @ 14f3d7330

lazy_merge_candidate * __thiscall
oo2::vector_flex<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>::at
          (vector_flex<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>
           *this,ulong64 param_1)

{
  return (lazy_merge_candidate *)(*(longlong *)this + param_1 * 0x18);
}

// begin @ 14f3d7350

lazy_merge_candidate * __thiscall
oo2::vector_base<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>::begin
          (vector_base<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>
           *this)

{
  return (lazy_merge_candidate *)this->_padding_;
}

// begin @ 14f3d7360

lazy_merge_candidate * __thiscall
oo2::vector_storage_a<oo2::lazy_merge_candidate>::begin
          (vector_storage_a<oo2::lazy_merge_candidate> *this)

{
  return this->m_data;
}

// capacity @ 14f3d7370

ulong64 __thiscall
oo2::vector_base<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>::
capacity(vector_base<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>
         *this)

{
  return this->_padding_;
}

// capacity @ 14f3d7380

ulong64 __thiscall
oo2::vector_storage_a<oo2::lazy_merge_candidate>::capacity
          (vector_storage_a<oo2::lazy_merge_candidate> *this)

{
  return this->m_capacity;
}

// data @ 14f3d7390

lazy_merge_candidate * __thiscall
oo2::vector_flex<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>::data
          (vector_flex<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>
           *this)

{
  if (*(longlong *)&this->field_0x10 == 0) {
    return (lazy_merge_candidate *)0x0;
  }
  return *(lazy_merge_candidate **)this;
}

// empty @ 14f3d73b0

bool __thiscall
oo2::vector_flex<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>::empty
          (vector_flex<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>
           *this)

{
  return *(longlong *)&this->field_0x10 == 0;
}

// entropysets_codelen_delta @ 14f3d73c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
oo2::entropysets_codelen_delta
          (uchar *param_1,long64 param_2,Histo256 *param_3,long64 param_4,Histo256 *param_5,
          long64 param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_468 [32];
  uint local_438 [256];
  ulonglong local_38;
  int iVar3;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_468;
  uVar7 = 0;
  uVar6 = 0;
  lVar5 = 0x100;
  iVar2 = (int)(0x40000000 / (param_4 & 0xffffffffU));
  iVar3 = (int)(0x40000000 / (param_6 & 0xffffffffU));
  if (param_2 < 0x101) {
    uVar10 = uVar7;
    if (0 < param_2) {
      do {
        iVar1 = c_rr_log2_table[iVar3 * param_5->counts[param_1[uVar10]] >> 0x11] >> 5;
        if (0xb00 < c_rr_log2_table[iVar3 * param_5->counts[param_1[uVar10]] >> 0x11] >> 5) {
          iVar1 = 0xb00;
        }
        iVar8 = c_rr_log2_table[iVar2 * param_3->counts[param_1[uVar10]] >> 0x11] >> 5;
        if (0xb00 < c_rr_log2_table[iVar2 * param_3->counts[param_1[uVar10]] >> 0x11] >> 5) {
          iVar8 = 0xb00;
        }
        uVar10 = uVar10 + 1;
        uVar6 = (int)uVar7 + (iVar8 - iVar1);
        uVar7 = (ulonglong)uVar6;
      } while ((longlong)uVar10 < param_2);
    }
  }
  else {
    CountHistoArrayU8(param_1,param_2,local_438,0x100,false);
    lVar9 = (longlong)local_438 - (longlong)param_3;
    lVar4 = (longlong)param_5 - (longlong)param_3;
    do {
      if (*(int *)(lVar9 + (longlong)param_3) != 0) {
        iVar8 = c_rr_log2_table[(uint)(iVar2 * *(int *)param_3) >> 0x11] >> 5;
        iVar1 = c_rr_log2_table[(uint)(iVar3 * *(int *)((longlong)param_3 + lVar4)) >> 0x11] >> 5;
        if (0xb00 < c_rr_log2_table[(uint)(iVar3 * *(int *)((longlong)param_3 + lVar4)) >> 0x11] >>
                    5) {
          iVar1 = 0xb00;
        }
        if (0xb00 < iVar8) {
          iVar8 = 0xb00;
        }
        uVar7 = (ulonglong)(uint)((int)uVar7 + (iVar8 - iVar1));
      }
      uVar6 = (uint)uVar7;
      param_3 = (Histo256 *)((longlong)param_3 + 4);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return uVar6;
}

// entropysets_codelen_of_array @ 14f3d7560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
oo2::entropysets_codelen_of_array(uchar *param_1,long64 param_2,Histo256 *param_3,long64 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_458 [32];
  uint local_428 [256];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_458;
  iVar5 = 0;
  lVar4 = 0x100;
  iVar3 = (int)(0x40000000 / (param_4 & 0xffffffffU));
  if (param_2 < 0x100) {
    lVar4 = 0;
    if (0 < param_2) {
      do {
        iVar1 = c_rr_log2_table[iVar3 * param_3->counts[param_1[lVar4]] >> 0x11] >> 5;
        if (0xb00 < c_rr_log2_table[iVar3 * param_3->counts[param_1[lVar4]] >> 0x11] >> 5) {
          iVar1 = 0xb00;
        }
        lVar4 = lVar4 + 1;
        iVar5 = iVar5 + iVar1;
      } while (lVar4 < param_2);
    }
  }
  else {
    CountHistoArrayU8(param_1,param_2,local_428,0x100,false);
    lVar6 = (longlong)local_428 - (longlong)param_3;
    do {
      iVar1 = *(int *)(lVar6 + (longlong)param_3);
      if (iVar1 != 0) {
        iVar2 = c_rr_log2_table[(uint)(iVar3 * *(int *)param_3) >> 0x11] >> 5;
        if (0xb00 < iVar2) {
          iVar2 = 0xb00;
        }
        iVar5 = iVar5 + iVar2 * iVar1;
      }
      param_3 = (Histo256 *)((longlong)param_3 + 4);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return iVar5;
}

// entropysets_codelen_of_small_array @ 14f3d7680

uint __cdecl
oo2::entropysets_codelen_of_small_array
          (uchar *param_1,long64 param_2,entropyset_codelens_U16_256 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  uVar3 = 0;
  lVar2 = 0;
  if (1 < param_2) {
    do {
      iVar4 = iVar4 + (uint)param_3->codelen[param_1[lVar2]];
      lVar1 = lVar2 + 1;
      lVar2 = lVar2 + 2;
      iVar5 = iVar5 + (uint)param_3->codelen[param_1[lVar1]];
    } while (lVar2 < param_2 + -1);
  }
  if (lVar2 < param_2) {
    uVar3 = (uint)param_3->codelen[param_1[lVar2]];
  }
  return iVar5 + iVar4 + uVar3;
}

// entropysets_cross_codelen @ 14f3d7700

int __cdecl
oo2::entropysets_cross_codelen(Histo256 *param_1,uint param_2,entropyset_codelens_U16_256 *param_3)

{
  int iVar1;
  
  iVar1 = simd_dotproduct_s32_s16_256((int *)param_1,param_2 < 0x8000,(short *)param_3);
  return iVar1;
}

// entropysets_histo_to_codelens @ 14f3d7720

void __cdecl
oo2::entropysets_histo_to_codelens
          (Histo256 *param_1,long64 param_2,entropyset_codelens_U16_256 *param_3)

{
  int iVar1;
  ushort *puVar2;
  uint *puVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = 0x40;
  puVar2 = param_3->codelen + 2;
  puVar3 = param_1->counts + 2;
  do {
    iVar4 = (int)(0x40000000 / (param_2 & 0xffffffffU));
    iVar1 = c_rr_log2_table[iVar4 * ((Histo256 *)(puVar3 + -2))->counts[0] >> 0x11] >> 5;
    if (0xb00 < iVar1) {
      iVar1 = 0xb00;
    }
    ((entropyset_codelens_U16_256 *)(puVar2 + -2))->codelen[0] = (ushort)iVar1;
    iVar1 = c_rr_log2_table[iVar4 * puVar3[-1] >> 0x11] >> 5;
    if (0xb00 < iVar1) {
      iVar1 = 0xb00;
    }
    puVar2[-1] = (ushort)iVar1;
    iVar1 = c_rr_log2_table[iVar4 * *puVar3 >> 0x11] >> 5;
    if (0xb00 < iVar1) {
      iVar1 = 0xb00;
    }
    *puVar2 = (ushort)iVar1;
    iVar1 = c_rr_log2_table[iVar4 * puVar3[1] >> 0x11] >> 5;
    if (0xb00 < iVar1) {
      iVar1 = 0xb00;
    }
    puVar2[1] = (ushort)iVar1;
    lVar5 = lVar5 + -1;
    puVar2 = puVar2 + 4;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 0);
  return;
}

// entropysets_order0_codelen_bits @ 14f3d7800

uint __cdecl oo2::entropysets_order0_codelen_bits(Histo256 *param_1,long64 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = (int)(0x40000000 / (param_2 & 0xffffffffU));
  iVar2 = 0;
  iVar8 = 0;
  lVar5 = 0x40;
  puVar6 = param_1->counts + 2;
  iVar7 = iVar2;
  iVar4 = iVar2;
  do {
    iVar3 = c_rr_log2_table[((Histo256 *)(puVar6 + -2))->counts[0] * iVar1 >> 0x11] >> 5;
    if (0xb00 < c_rr_log2_table[((Histo256 *)(puVar6 + -2))->counts[0] * iVar1 >> 0x11] >> 5) {
      iVar3 = 0xb00;
    }
    iVar2 = iVar2 + iVar3 * ((Histo256 *)(puVar6 + -2))->counts[0];
    iVar3 = c_rr_log2_table[puVar6[-1] * iVar1 >> 0x11] >> 5;
    if (0xb00 < c_rr_log2_table[puVar6[-1] * iVar1 >> 0x11] >> 5) {
      iVar3 = 0xb00;
    }
    iVar4 = iVar4 + iVar3 * puVar6[-1];
    iVar3 = c_rr_log2_table[*puVar6 * iVar1 >> 0x11] >> 5;
    if (0xb00 < c_rr_log2_table[*puVar6 * iVar1 >> 0x11] >> 5) {
      iVar3 = 0xb00;
    }
    iVar8 = iVar8 + iVar3 * *puVar6;
    iVar3 = c_rr_log2_table[puVar6[1] * iVar1 >> 0x11] >> 5;
    if (0xb00 < iVar3) {
      iVar3 = 0xb00;
    }
    iVar7 = iVar7 + iVar3 * puVar6[1];
    lVar5 = lVar5 + -1;
    puVar6 = puVar6 + 4;
  } while (lVar5 != 0);
  return (uint)(iVar2 + iVar7 + iVar8 + iVar4) >> 8;
}

// entropysets_order0_codelen_bits_cpudetect @ 14f3d7900

_func___cdecl_uint_Histo256_ptr_long64 * __cdecl
oo2::entropysets_order0_codelen_bits_cpudetect(void)

{
  code *pcVar1;
  
  pcVar1 = entropysets_order0_codelen_bits;
  if (((byte)g_rrCPUx86_feature_flags & 8) != 0) {
    pcVar1 = entropysets_order0_codelen_bits_sse4;
  }
  return pcVar1;
}

// entropysets_self_codelen @ 14f3d7920

int __cdecl oo2::entropysets_self_codelen(Histo256 *param_1,long64 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = (int)(0x40000000 / (param_2 & 0xffffffffU));
  iVar2 = 0;
  iVar8 = 0;
  lVar5 = 0x40;
  puVar6 = param_1->counts + 2;
  iVar7 = iVar2;
  iVar4 = iVar2;
  do {
    iVar3 = c_rr_log2_table[((Histo256 *)(puVar6 + -2))->counts[0] * iVar1 >> 0x11] >> 5;
    if (0xb00 < c_rr_log2_table[((Histo256 *)(puVar6 + -2))->counts[0] * iVar1 >> 0x11] >> 5) {
      iVar3 = 0xb00;
    }
    iVar2 = iVar2 + iVar3 * ((Histo256 *)(puVar6 + -2))->counts[0];
    iVar3 = c_rr_log2_table[puVar6[-1] * iVar1 >> 0x11] >> 5;
    if (0xb00 < c_rr_log2_table[puVar6[-1] * iVar1 >> 0x11] >> 5) {
      iVar3 = 0xb00;
    }
    iVar4 = iVar4 + iVar3 * puVar6[-1];
    iVar3 = c_rr_log2_table[*puVar6 * iVar1 >> 0x11] >> 5;
    if (0xb00 < c_rr_log2_table[*puVar6 * iVar1 >> 0x11] >> 5) {
      iVar3 = 0xb00;
    }
    iVar8 = iVar8 + iVar3 * *puVar6;
    iVar3 = c_rr_log2_table[puVar6[1] * iVar1 >> 0x11] >> 5;
    if (0xb00 < iVar3) {
      iVar3 = 0xb00;
    }
    iVar7 = iVar7 + iVar3 * puVar6[1];
    lVar5 = lVar5 + -1;
    puVar6 = puVar6 + 4;
  } while (lVar5 != 0);
  return iVar2 + iVar7 + iVar8 + iVar4;
}

// extend_default @ 14f3d7a20

void __thiscall
oo2::vector_base<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>::
extend_default(vector_base<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>
               *this,ulong64 param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (this->m_size + param_1 <= (ulonglong)this->_padding_) {
    this->m_size = this->m_size + param_1;
    return;
  }
  iVar2 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                             "oo2::vector_storage_a<struct oo2::lazy_merge_candidate>::needmakefit",
                             "newsize <= m_capacity");
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->m_size = this->m_size + param_1;
  return;
}

// histo_to_codelens_simple @ 14f3d7aa0

void __cdecl
oo2::histo_to_codelens_simple(Histo256 *param_1,long64 param_2,entropyset_codelens_U16_256 *param_3)

{
  int iVar1;
  ushort *puVar2;
  uint *puVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = 0x40;
  puVar2 = param_3->codelen + 2;
  puVar3 = param_1->counts + 2;
  do {
    iVar4 = (int)(0x40000000 / (param_2 & 0xffffffffU));
    iVar1 = c_rr_log2_table[iVar4 * ((Histo256 *)(puVar3 + -2))->counts[0] >> 0x11] >> 5;
    if (0xb00 < iVar1) {
      iVar1 = 0xb00;
    }
    ((entropyset_codelens_U16_256 *)(puVar2 + -2))->codelen[0] = (ushort)iVar1;
    iVar1 = c_rr_log2_table[iVar4 * puVar3[-1] >> 0x11] >> 5;
    if (0xb00 < iVar1) {
      iVar1 = 0xb00;
    }
    puVar2[-1] = (ushort)iVar1;
    iVar1 = c_rr_log2_table[iVar4 * *puVar3 >> 0x11] >> 5;
    if (0xb00 < iVar1) {
      iVar1 = 0xb00;
    }
    *puVar2 = (ushort)iVar1;
    iVar1 = c_rr_log2_table[iVar4 * puVar3[1] >> 0x11] >> 5;
    if (0xb00 < iVar1) {
      iVar1 = 0xb00;
    }
    puVar2[1] = (ushort)iVar1;
    lVar5 = lVar5 + -1;
    puVar2 = puVar2 + 4;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 0);
  return;
}

// init @ 14f3d7b80

void __thiscall
oo2::vector_base<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>::init
          (vector_base<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>
           *this)

{
  this->m_size = 0;
  return;
}

// make_lazy_merge_candidate @ 14f3d7ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
oo2::make_lazy_merge_candidate
          (lazy_merge_candidate *param_1,entropyset *param_2,int param_3,entropyset *param_4,
          int param_5,float param_6,_func___cdecl_uint_Histo256_ptr_long64 *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_458 [32];
  Histo256 local_438;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_458;
  histo_add(&local_438,&param_2->histo,&param_4->histo);
  uVar3 = (*param_7)(&local_438,(ulonglong)param_4->total + (ulonglong)param_2->total);
  uVar1 = param_4->complen;
  uVar2 = param_2->complen;
  param_1->merged_complen_bits = uVar3;
  param_1->src1 = param_3;
  param_1->src2 = param_5;
  param_1->gain_J = (float)(int)((uVar1 + uVar2) - uVar3) * __real_3e000000 + param_6;
  param_1->src1len = param_2->total;
  param_1->src2len = param_4->total;
  return;
}

// makefit1 @ 14f3d7c70

lazy_merge_candidate * __thiscall
oo2::vector_base<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>::
makefit1(vector_base<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>
         *this,ulong64 param_1)

{
  return (lazy_merge_candidate *)0x0;
}

// makefit1 @ 14f3d7c80

lazy_merge_candidate * __thiscall
oo2::vector_storage_a<oo2::lazy_merge_candidate>::makefit1
          (vector_storage_a<oo2::lazy_merge_candidate> *this,ulong64 param_1,ulong64 param_2)

{
  return (lazy_merge_candidate *)0x0;
}

// makefit2 @ 14f3d7c90

void __thiscall
oo2::vector_storage_a<oo2::lazy_merge_candidate>::makefit2
          (vector_storage_a<oo2::lazy_merge_candidate> *this,lazy_merge_candidate *param_1,
          ulong64 param_2,ulong64 param_3)

{
  return;
}

// merge_entropysets @ 14f3d7ca0

/* WARNING: Removing unreachable block (ram,0x00014f3d7eb0) */

void __cdecl
oo2::merge_entropysets
          (vector_a<oo2::entropyset> *param_1,float param_2,float param_3,int param_4,
          _func___cdecl_uint_Histo256_ptr_long64 *param_5,rrArenaAllocator *param_6)

{
  entropyset *peVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong lVar19;
  ulonglong uVar20;
  Histo256 *pHVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  longlong lVar30;
  entropyset *peVar31;
  longlong lVar32;
  undefined8 *puVar33;
  lazy_merge_candidate *plVar34;
  longlong lVar35;
  undefined8 *puVar36;
  ulonglong uVar37;
  void *local_4e0;
  float local_4c8;
  undefined4 uStack_4c4;
  int iStack_4c0;
  int iStack_4bc;
  uint local_4b8;
  uint uStack_4b4;
  undefined8 local_468 [134];
  
  uVar17 = *(ulonglong *)&param_1->field_0x10;
  uVar24 = (uint)uVar17;
  lVar26 = (longlong)(int)uVar24;
  puVar28 = (undefined8 *)0x0;
  puVar23 = puVar28;
  if (0 < (int)uVar24) {
    do {
      pHVar21 = (Histo256 *)(*(longlong *)param_1 + (longlong)puVar23);
      uVar13 = (*param_5)(pHVar21,(long64)pHVar21[1].counts[0]);
      pHVar21[1].counts[1] = uVar13;
      lVar26 = lVar26 + -1;
      puVar23 = puVar23 + 0x81;
    } while (lVar26 != 0);
  }
  uVar27 = (ulonglong)((int)((uVar24 - 1) * uVar24) / 2);
  lVar26 = uVar27 * 0x18;
  if (param_6 == (rrArenaAllocator *)0x0) {
    local_4e0 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar26,0x10);
    if (local_4e0 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(lVar26);
    }
  }
  else {
    uVar22 = lVar26 + 0xfU & 0xfffffffffffffff0;
    uVar20 = (ulonglong)(-(uint)(param_6->m_unorderedStart != 0) & 0x10);
    local_4e0 = (void *)param_6->m_cur;
    if (param_6->m_size + param_6->m_base < (longlong)local_4e0 + uVar22 + uVar20) {
      if (param_6->m_allowFallback == 0) {
        local_4e0 = (void *)0x0;
      }
      else {
        local_4e0 = (*g_fp_OodleCore_Plugin_MallocAligned)(uVar22,0x10);
        if (local_4e0 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          Oodle_Core_Malloc_Failed(uVar22);
        }
      }
    }
    else {
      puVar16 = (ulonglong *)((longlong)local_4e0 + uVar22);
      param_6->m_cur = (ulong64)puVar16;
      if (param_6->m_unorderedStart != 0) {
        *puVar16 = uVar22;
        puVar16[1] = 0;
        param_6->m_cur = param_6->m_cur + uVar20;
        puVar16 = (ulonglong *)param_6->m_cur;
      }
      puVar15 = (ulonglong *)param_6->m_cur_max;
      if ((ulonglong *)param_6->m_cur_max <= puVar16) {
        puVar15 = puVar16;
      }
      param_6->m_cur_max = (ulong64)puVar15;
    }
  }
  if ((local_4e0 == (void *)0x0) &&
     (iVar14 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x19a,
                                  "oo2::rrScopeArenaAlloc::rrScopeArenaAlloc","m_ptr != NULL"),
     iVar14 != 0)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  puVar23 = (undefined8 *)((longlong)local_4e0 + 0xfU & 0xfffffffffffffff0);
  if (((ulonglong)((longlong)local_4e0 + (lVar26 - (longlong)puVar23)) / 0x18 < uVar27) &&
     (iVar14 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                                  "oo2::vector_storage_a<struct oo2::lazy_merge_candidate>::needmakefit"
                                  ,"newsize <= m_capacity"), iVar14 != 0)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (uVar27 == 0) {
    puVar23 = puVar28;
  }
  if (0 < (int)uVar24) {
    puVar33 = puVar28;
    iVar14 = 1;
    do {
      if (iVar14 < (int)uVar24) {
        plVar34 = (lazy_merge_candidate *)(puVar23 + (longlong)puVar28 * 3);
        puVar28 = (undefined8 *)((longlong)puVar28 + (ulonglong)(uVar24 - iVar14));
        iVar25 = iVar14;
        puVar36 = puVar33;
        do {
          puVar36 = puVar36 + 0x81;
          make_lazy_merge_candidate
                    (plVar34,(entropyset *)(*(longlong *)param_1 + (longlong)puVar33),iVar14 + -1,
                     (entropyset *)(*(longlong *)param_1 + (longlong)puVar36),iVar25,param_2,param_5
                    );
          plVar34 = plVar34 + 1;
          iVar25 = iVar25 + 1;
        } while (iVar25 < (int)uVar24);
      }
      puVar33 = puVar33 + 0x81;
      bVar6 = iVar14 < (int)uVar24;
      iVar14 = iVar14 + 1;
    } while (bVar6);
  }
  uVar27 = 0;
  lVar30 = (longlong)puVar28 >> 1;
  if (0 < lVar30) {
    lVar32 = lVar30 * 2 + 1;
    do {
      lVar30 = lVar30 + -1;
      lVar32 = lVar32 + -2;
      lVar35 = lVar30;
      for (lVar19 = lVar32; lVar19 < (longlong)puVar28; lVar19 = lVar19 * 2 + 1) {
        if (lVar19 + 1 < (longlong)puVar28) {
          lVar19 = lVar19 + (ulonglong)
                            (*(float *)(puVar23 + lVar19 * 3) <=
                             *(float *)(puVar23 + lVar19 * 3 + 3) &&
                            *(float *)(puVar23 + lVar19 * 3 + 3) != *(float *)(puVar23 + lVar19 * 3)
                            );
        }
        if (*(float *)(puVar23 + lVar19 * 3) <= *(float *)(puVar23 + lVar35 * 3) &&
            *(float *)(puVar23 + lVar35 * 3) != *(float *)(puVar23 + lVar19 * 3)) break;
        uVar8 = puVar23[lVar35 * 3];
        uVar9 = (puVar23 + lVar35 * 3)[1];
        uVar3 = puVar23[lVar35 * 3 + 2];
        uVar4 = (puVar23 + lVar19 * 3)[1];
        puVar23[lVar35 * 3] = puVar23[lVar19 * 3];
        (puVar23 + lVar35 * 3)[1] = uVar4;
        puVar23[lVar35 * 3 + 2] = puVar23[lVar19 * 3 + 2];
        puVar23[lVar19 * 3] = uVar8;
        (puVar23 + lVar19 * 3)[1] = uVar9;
        puVar23[lVar19 * 3 + 2] = uVar3;
        lVar35 = lVar19;
      }
    } while (0 < lVar30);
  }
  while (puVar33 = puVar28, 0 < (longlong)puVar33) {
    uVar8 = *puVar23;
    uVar9 = puVar23[1];
    uVar3 = puVar23[2];
    uVar20 = 1;
    uVar22 = uVar27;
    uVar29 = uVar27;
    if (&DAT_00000001 < puVar33) {
      do {
        uVar22 = uVar20;
        if (((longlong)(uVar20 + 1) < (longlong)puVar33) &&
           (*(float *)(puVar23 + uVar20 * 3) <= *(float *)(puVar23 + uVar20 * 3 + 3) &&
            *(float *)(puVar23 + uVar20 * 3 + 3) != *(float *)(puVar23 + uVar20 * 3))) {
          uVar22 = uVar20 + 1;
        }
        uVar4 = (puVar23 + uVar22 * 3)[1];
        puVar23[uVar29 * 3] = puVar23[uVar22 * 3];
        (puVar23 + uVar29 * 3)[1] = uVar4;
        puVar23[uVar29 * 3 + 2] = puVar23[uVar22 * 3 + 2];
        uVar20 = uVar22 * 2 + 1;
        uVar29 = uVar22;
      } while ((longlong)uVar20 < (longlong)puVar33);
    }
    puVar28 = (undefined8 *)((longlong)puVar33 + -1);
    if ((longlong)uVar22 < (longlong)puVar28) {
      uVar4 = (puVar23 + (longlong)puVar28 * 3)[1];
      puVar23[uVar22 * 3] = puVar23[(longlong)puVar28 * 3];
      (puVar23 + uVar22 * 3)[1] = uVar4;
      puVar23[uVar22 * 3 + 2] = puVar23[(longlong)puVar28 * 3 + 2];
      lVar30 = (longlong)(uVar22 * 0x18) / 0x18;
      while ((0 < lVar30 &&
             (lVar32 = lVar30 + -1 >> 1,
             *(float *)(puVar23 + lVar32 * 3) <= *(float *)(puVar23 + lVar30 * 3) &&
             *(float *)(puVar23 + lVar30 * 3) != *(float *)(puVar23 + lVar32 * 3)))) {
        uVar10 = puVar23[lVar32 * 3];
        uVar11 = (puVar23 + lVar32 * 3)[1];
        uVar4 = puVar23[lVar32 * 3 + 2];
        uVar12 = (puVar23 + lVar30 * 3)[1];
        puVar23[lVar32 * 3] = puVar23[lVar30 * 3];
        (puVar23 + lVar32 * 3)[1] = uVar12;
        puVar23[lVar32 * 3 + 2] = puVar23[lVar30 * 3 + 2];
        puVar23[lVar30 * 3] = uVar10;
        (puVar23 + lVar30 * 3)[1] = uVar11;
        puVar23[lVar30 * 3 + 2] = uVar4;
        lVar30 = lVar32;
      }
    }
    iStack_4c0 = (int)uVar9;
    lVar32 = (longlong)iStack_4c0 * 0x408;
    lVar30 = *(longlong *)param_1;
    peVar1 = (entropyset *)(lVar32 + lVar30);
    iStack_4bc = (int)((ulonglong)uVar9 >> 0x20);
    local_4b8 = (uint)uVar3;
    uVar24 = (uint)uVar17;
    if (peVar1->total == local_4b8) {
      lVar35 = (longlong)iStack_4bc * 0x408;
      uStack_4b4 = (uint)((ulonglong)uVar3 >> 0x20);
      if (((Histo256 *)(lVar35 + lVar30))[1].counts[0] != uStack_4b4) goto LAB_14f3d8293;
      local_4c8 = (float)uVar8;
      if ((local_4c8 < param_3) && ((int)uVar24 <= param_4)) break;
      histo_add((Histo256 *)peVar1,(Histo256 *)peVar1,(Histo256 *)(lVar35 + lVar30));
      piVar2 = (int *)(lVar32 + 0x400 + *(longlong *)param_1);
      *piVar2 = *piVar2 + *(int *)(lVar35 + 0x400 + *(longlong *)param_1);
      *(undefined4 *)(lVar35 + 0x400 + *(longlong *)param_1) = 0;
      uStack_4c4 = (undefined4)((ulonglong)uVar8 >> 0x20);
      *(undefined4 *)(lVar32 + 0x404 + *(longlong *)param_1) = uStack_4c4;
      *(undefined4 *)(lVar35 + 0x404 + *(longlong *)param_1) = 0;
      uVar24 = uVar24 - 1;
      uVar17 = (ulonglong)uVar24;
    }
    else {
LAB_14f3d8293:
      if ((peVar1->total != 0) &&
         (peVar31 = (entropyset *)(lVar30 + (longlong)iStack_4bc * 0x408), peVar31->total != 0)) {
        make_lazy_merge_candidate
                  ((lazy_merge_candidate *)(puVar23 + (longlong)puVar28 * 3),peVar1,iStack_4c0,
                   peVar31,iStack_4bc,param_2,param_5);
        lVar30 = ((longlong)puVar33 * 0x18 + -0x18) / 0x18;
        while ((puVar28 = puVar33, 0 < lVar30 &&
               (lVar32 = lVar30 + -1 >> 1,
               *(float *)(puVar23 + lVar32 * 3) <= *(float *)(puVar23 + lVar30 * 3) &&
               *(float *)(puVar23 + lVar30 * 3) != *(float *)(puVar23 + lVar32 * 3)))) {
          uVar8 = puVar23[lVar32 * 3];
          uVar9 = (puVar23 + lVar32 * 3)[1];
          uVar3 = puVar23[lVar32 * 3 + 2];
          uVar4 = (puVar23 + lVar30 * 3)[1];
          puVar23[lVar32 * 3] = puVar23[lVar30 * 3];
          (puVar23 + lVar32 * 3)[1] = uVar4;
          puVar23[lVar32 * 3 + 2] = puVar23[lVar30 * 3 + 2];
          puVar23[lVar30 * 3] = uVar8;
          (puVar23 + lVar30 * 3)[1] = uVar9;
          puVar23[lVar30 * 3 + 2] = uVar3;
          lVar30 = lVar32;
        }
      }
    }
  }
  uVar17 = *(ulonglong *)&param_1->field_0x10;
  uVar20 = uVar27;
  uVar22 = uVar27;
  uVar29 = uVar27;
  uVar37 = uVar27;
  if (0 < (int)uVar17) {
    do {
      lVar30 = *(longlong *)param_1;
      puVar23 = (undefined8 *)(lVar30 + uVar29);
      if (*(int *)(puVar23 + 0x80) != 0) {
        if (uVar22 != uVar20) {
          lVar32 = 8;
          puVar28 = local_468;
          do {
            uVar3 = puVar23[1];
            *puVar28 = *puVar23;
            puVar28[1] = uVar3;
            uVar3 = puVar23[3];
            puVar28[2] = puVar23[2];
            puVar28[3] = uVar3;
            uVar3 = puVar23[5];
            puVar28[4] = puVar23[4];
            puVar28[5] = uVar3;
            uVar3 = puVar23[7];
            puVar28[6] = puVar23[6];
            puVar28[7] = uVar3;
            uVar3 = puVar23[9];
            puVar28[8] = puVar23[8];
            puVar28[9] = uVar3;
            uVar3 = puVar23[0xb];
            puVar28[10] = puVar23[10];
            puVar28[0xb] = uVar3;
            uVar3 = puVar23[0xd];
            puVar28[0xc] = puVar23[0xc];
            puVar28[0xd] = uVar3;
            puVar33 = puVar28 + 0x10;
            uVar3 = puVar23[0xf];
            puVar28[0xe] = puVar23[0xe];
            puVar28[0xf] = uVar3;
            puVar23 = puVar23 + 0x10;
            lVar32 = lVar32 + -1;
            puVar28 = puVar33;
          } while (lVar32 != 0);
          *puVar33 = *puVar23;
          puVar23 = local_468;
          lVar32 = 8;
          puVar28 = (undefined8 *)(lVar30 + uVar27);
          do {
            uVar3 = puVar23[1];
            *puVar28 = *puVar23;
            puVar28[1] = uVar3;
            uVar3 = puVar23[3];
            puVar28[2] = puVar23[2];
            puVar28[3] = uVar3;
            uVar3 = puVar23[5];
            puVar28[4] = puVar23[4];
            puVar28[5] = uVar3;
            uVar3 = puVar23[7];
            puVar28[6] = puVar23[6];
            puVar28[7] = uVar3;
            uVar3 = puVar23[9];
            puVar28[8] = puVar23[8];
            puVar28[9] = uVar3;
            uVar3 = puVar23[0xb];
            puVar28[10] = puVar23[10];
            puVar28[0xb] = uVar3;
            uVar3 = puVar23[0xd];
            puVar28[0xc] = puVar23[0xc];
            puVar28[0xd] = uVar3;
            puVar33 = puVar28 + 0x10;
            uVar3 = puVar23[0xf];
            puVar28[0xe] = puVar23[0xe];
            puVar28[0xf] = uVar3;
            puVar23 = puVar23 + 0x10;
            lVar32 = lVar32 + -1;
            puVar28 = puVar33;
          } while (lVar32 != 0);
          *puVar33 = *puVar23;
        }
        uVar20 = uVar20 + 1;
        uVar27 = uVar27 + 0x408;
      }
      uVar13 = (int)uVar37 + 1;
      uVar17 = *(ulonglong *)&param_1->field_0x10;
      uVar22 = uVar22 + 1;
      uVar29 = uVar29 + 0x408;
      uVar37 = (ulonglong)uVar13;
    } while ((int)uVar13 < (int)uVar17);
  }
  uVar27 = (ulonglong)(int)uVar24;
  if (uVar27 < uVar17) {
    *(ulonglong *)&param_1->field_0x10 = uVar27;
  }
  else {
    if ((*(ulonglong *)&param_1->field_0x8 < uVar27) &&
       (iVar14 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f
                                    ,"oo2::vector_storage_a<struct oo2::entropyset>::needmakefit",
                                    "newsize <= m_capacity"), iVar14 != 0)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(ulonglong *)&param_1->field_0x10 = *(longlong *)&param_1->field_0x10 + (uVar27 - uVar17);
  }
  if (local_4e0 == (void *)0x0) {
    return;
  }
  if (param_6 != (rrArenaAllocator *)0x0) {
    uVar17 = lVar26 + 0xfU & 0xfffffffffffffff0;
    if ((void *)param_6->m_unorderedStart == (void *)0x0) {
      if (uVar17 + (longlong)local_4e0 == param_6->m_cur) {
        param_6->m_cur = param_6->m_cur - uVar17;
        return;
      }
    }
    else if (((void *)param_6->m_unorderedStart <= local_4e0) &&
            (local_4e0 < (void *)(param_6->m_size + param_6->m_base))) {
      plVar18 = (longlong *)(uVar17 + (longlong)local_4e0);
      plVar18[1] = 1;
      plVar5 = (longlong *)param_6->m_cur;
      if (plVar18 + 2 != plVar5) {
        return;
      }
      while( true ) {
        if (plVar5 == (longlong *)param_6->m_unorderedStart) {
          return;
        }
        if (plVar18[1] != 1) break;
        param_6->m_cur = param_6->m_cur + (-0x10 - *plVar18);
        plVar5 = (longlong *)param_6->m_cur;
        plVar18 = plVar5 + -2;
      }
      return;
    }
  }
  (*g_fp_OodleCore_Plugin_Free)(local_4e0);
  return;
}

// merge_entropysets_for_entropy_arrays @ 14f3d85e0

void __cdecl
oo2::merge_entropysets_for_entropy_arrays
          (vector_a<oo2::entropyset> *param_1,float param_2,OodleSpeedFit *param_3,int param_4,
          rrArenaAllocator *param_5)

{
  float fVar1;
  
  fVar1 = (*param_3->huff3)(0,0x80,0x14,__real_40c00000);
  merge_entropysets(param_1,fVar1 * param_2,0.0,param_4,histo_estimate_complen_bits,param_5);
  return;
}

// needmakefit @ 14f3d8660

bool __thiscall
oo2::vector_storage_a<oo2::lazy_merge_candidate>::needmakefit
          (vector_storage_a<oo2::lazy_merge_candidate> *this,ulong64 param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (this->m_capacity < param_1) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<struct oo2::lazy_merge_candidate>::needmakefit"
                               ,"newsize <= m_capacity");
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return (bool)uVar2;
    }
  }
  return false;
}

// provide_arena @ 14f3d86a0

void __thiscall
oo2::vector_a<oo2::lazy_merge_candidate>::provide_arena
          (vector_a<oo2::lazy_merge_candidate> *this,void *param_1,ulong64 param_2)

{
  ulonglong uVar1;
  
  uVar1 = (longlong)param_1 + 0xfU & 0xfffffffffffffff0;
  *(ulonglong *)this = uVar1;
  *(ulonglong *)&this->field_0x8 = ((longlong)param_1 + (param_2 - uVar1)) / 0x18;
  return;
}

// provide_arena @ 14f3d86d0

void __thiscall
oo2::vector_storage_a<oo2::lazy_merge_candidate>::provide_arena
          (vector_storage_a<oo2::lazy_merge_candidate> *this,void *param_1,ulong64 param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)((longlong)param_1 + 0xfU & 0xfffffffffffffff0);
  this->m_data = pvVar1;
  this->m_capacity = ((longlong)param_1 + (param_2 - (longlong)pvVar1)) / 0x18;
  return;
}

// release @ 14f3d8700

void __thiscall
oo2::vector_base<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>::
release(vector_base<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>
        *this)

{
  this->m_size = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// release @ 14f3d8720

void __thiscall
oo2::vector_storage_a<oo2::lazy_merge_candidate>::release
          (vector_storage_a<oo2::lazy_merge_candidate> *this)

{
  this->m_data = (void *)0x0;
  this->m_capacity = 0;
  return;
}

// remove_unused_entropysets @ 14f3d8740

uint __cdecl oo2::remove_unused_entropysets(vector_a<oo2::entropyset> *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 local_418 [130];
  
  uVar11 = 0;
  lVar13 = *(longlong *)&param_1->field_0x10 + -1;
  if (-1 < lVar13) {
    lVar14 = lVar13 * 0x408;
    do {
      puVar9 = (undefined8 *)(lVar14 + *(longlong *)param_1);
      iVar3 = *(int *)(puVar9 + 0x80);
      uVar11 = uVar11 + iVar3;
      if (iVar3 == 0) {
        lVar12 = 8;
        puVar8 = (undefined8 *)
                 (*(longlong *)&param_1->field_0x10 * 0x408 + *(longlong *)param_1 + -0x408);
        puVar10 = local_418;
        do {
          puVar1 = puVar10 + 0x10;
          uVar4 = puVar8[1];
          uVar5 = puVar8[2];
          uVar6 = puVar8[3];
          puVar2 = puVar8 + 0x10;
          *puVar10 = *puVar8;
          puVar10[1] = uVar4;
          uVar4 = puVar8[4];
          uVar7 = puVar8[5];
          puVar10[2] = uVar5;
          puVar10[3] = uVar6;
          uVar5 = puVar8[6];
          uVar6 = puVar8[7];
          puVar10[4] = uVar4;
          puVar10[5] = uVar7;
          uVar4 = puVar8[8];
          uVar7 = puVar8[9];
          puVar10[6] = uVar5;
          puVar10[7] = uVar6;
          uVar5 = puVar8[10];
          uVar6 = puVar8[0xb];
          puVar10[8] = uVar4;
          puVar10[9] = uVar7;
          uVar4 = puVar8[0xc];
          uVar7 = puVar8[0xd];
          puVar10[10] = uVar5;
          puVar10[0xb] = uVar6;
          uVar5 = puVar8[0xe];
          uVar6 = puVar8[0xf];
          puVar10[0xc] = uVar4;
          puVar10[0xd] = uVar7;
          puVar10[0xe] = uVar5;
          puVar10[0xf] = uVar6;
          lVar12 = lVar12 + -1;
          puVar8 = puVar2;
          puVar10 = puVar1;
        } while (lVar12 != 0);
        lVar12 = 8;
        *puVar1 = *puVar2;
        puVar8 = local_418;
        do {
          puVar10 = puVar9 + 0x10;
          uVar4 = puVar8[1];
          uVar5 = puVar8[2];
          uVar6 = puVar8[3];
          puVar1 = puVar8 + 0x10;
          *puVar9 = *puVar8;
          puVar9[1] = uVar4;
          uVar4 = puVar8[4];
          uVar7 = puVar8[5];
          puVar9[2] = uVar5;
          puVar9[3] = uVar6;
          uVar5 = puVar8[6];
          uVar6 = puVar8[7];
          puVar9[4] = uVar4;
          puVar9[5] = uVar7;
          uVar4 = puVar8[8];
          uVar7 = puVar8[9];
          puVar9[6] = uVar5;
          puVar9[7] = uVar6;
          uVar5 = puVar8[10];
          uVar6 = puVar8[0xb];
          puVar9[8] = uVar4;
          puVar9[9] = uVar7;
          uVar4 = puVar8[0xc];
          uVar7 = puVar8[0xd];
          puVar9[10] = uVar5;
          puVar9[0xb] = uVar6;
          uVar5 = puVar8[0xe];
          uVar6 = puVar8[0xf];
          puVar9[0xc] = uVar4;
          puVar9[0xd] = uVar7;
          puVar9[0xe] = uVar5;
          puVar9[0xf] = uVar6;
          lVar12 = lVar12 + -1;
          puVar9 = puVar10;
          puVar8 = puVar1;
        } while (lVar12 != 0);
        *puVar10 = *puVar1;
        *(longlong *)&param_1->field_0x10 = *(longlong *)&param_1->field_0x10 + -1;
      }
      lVar14 = lVar14 + -0x408;
      lVar13 = lVar13 + -1;
    } while (-1 < lVar13);
  }
  return uVar11;
}

// resize @ 14f3d88a0

void __thiscall
oo2::vector_flex<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>::
resize(vector_flex<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>
       *this,ulong64 param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  
  uVar1 = *(ulonglong *)&this->field_0x10;
  if (param_1 < uVar1) {
    *(ulong64 *)&this->field_0x10 = param_1;
    return;
  }
  if (*(ulonglong *)&this->field_0x8 < param_1) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<struct oo2::lazy_merge_candidate>::needmakefit"
                               ,"newsize <= m_capacity");
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(ulong64 *)&this->field_0x10 = *(longlong *)&this->field_0x10 + (param_1 - uVar1);
  return;
}

// rrAlignUp64 @ 14f3d8910

ulong64 __cdecl oo2::rrAlignUp64(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f3d8930

long64 __cdecl oo2::rrAlignUpA(long64 param_1,long64 param_2)

{
  return param_1 + -1 + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f3d8950

ulong64 __cdecl oo2::rrAlignUpA(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrCPUx86_feature_present @ 14f3d8970

int __cdecl oo2::rrCPUx86_feature_present(uint param_1)

{
  return g_rrCPUx86_feature_flags & param_1;
}

// rrsimd_has_sse4 @ 14f3d8980

int __cdecl oo2::rrsimd_has_sse4(void)

{
  return g_rrCPUx86_feature_flags & 8;
}

// shrink @ 14f3d8990

void __thiscall
oo2::vector_base<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>::
shrink(vector_base<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>
       *this,ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// simple_codelen_30 @ 14f3d89a0

int __cdecl oo2::simple_codelen_30(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = c_rr_log2_table[param_1 * param_2 >> 0x11] >> 5;
  if (0xb00 < iVar1) {
    iVar1 = 0xb00;
  }
  return iVar1;
}

// size @ 14f3d89d0

ulong64 __thiscall
oo2::vector_base<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>::size
          (vector_base<oo2::lazy_merge_candidate,oo2::vector_storage_a<oo2::lazy_merge_candidate>_>
           *this)

{
  return this->m_size;
}

// speedfit_estimate_entropy_array_time @ 14f3d89e0

float __cdecl oo2::speedfit_estimate_entropy_array_time(OodleSpeedFit *param_1,long64 param_2)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014f3d89fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (*param_1->huff3)(param_2,0x80,0x14,__real_40c00000);
  return fVar1;
}

// dtor$0 @ 150285560

void `oo2::merge_entropysets'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::vector_a<oo2::lazy_merge_candidate>::~vector_a<oo2::lazy_merge_candidate>
            ((vector_a<oo2::lazy_merge_candidate> *)(param_2 + 0x78));
  return;
}

// dtor$1 @ 150285580

void `oo2::merge_entropysets'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc((rrScopeArenaAlloc *)(param_2 + 0xa0));
  return;
}

