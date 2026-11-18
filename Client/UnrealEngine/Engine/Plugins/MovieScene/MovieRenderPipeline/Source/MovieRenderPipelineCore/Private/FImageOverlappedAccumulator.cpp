// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 14

// operator() @ 14dd6de30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`FImageOverlappedAccumulator::FetchFinalPixelDataHalfFloat'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  bool bVar38;
  longlong lVar39;
  ulonglong uVar40;
  uint uVar41;
  ulonglong uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  float local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  iVar37 = _UNK_1508be50c;
  iVar36 = _UNK_1508be508;
  iVar35 = _UNK_1508be504;
  iVar34 = ___xmm_c8000fffc8000fffc8000fffc8000fff;
  iVar33 = _UNK_1508be4ec;
  iVar32 = _UNK_1508be4e8;
  iVar31 = _UNK_1508be4e4;
  iVar30 = ___xmm_47800000478000004780000047800000;
  iVar29 = _UNK_1508be4bc;
  iVar28 = _UNK_1508be4b8;
  iVar27 = _UNK_1508be4b4;
  iVar26 = ___xmm_38800000388000003880000038800000;
  uVar25 = _UNK_1508be48c;
  uVar24 = _UNK_1508be488;
  uVar23 = _UNK_1508be484;
  uVar22 = ___xmm_00000200000002000000020000000200;
  uVar21 = _UNK_1508be47c;
  uVar20 = _UNK_1508be478;
  uVar19 = _UNK_1508be474;
  uVar18 = ___xmm_000001ff000001ff000001ff000001ff;
  uVar17 = _UNK_150689648;
  uVar16 = ___xmm_3f800000000000000000000000000000;
  fVar15 = _UNK_15068962c;
  fVar14 = _UNK_150689628;
  fVar13 = _UNK_150689624;
  fVar12 = ___xmm_3f0000003f0000003f0000003f000000;
  uVar11 = _UNK_15068959c;
  uVar10 = _UNK_150689598;
  uVar9 = _UNK_150689594;
  uVar8 = ___xmm_00007c0000007c0000007c0000007c00;
  uVar7 = _UNK_15065157c;
  uVar6 = _UNK_150651578;
  uVar5 = _UNK_150651574;
  uVar4 = __xmm_80000000800000008000000080000000;
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_148;
  uVar40 = 0;
  uVar42 = uVar40;
  if (0 < **(longlong **)this) {
    do {
      local_f8 = uVar16;
      uStack_f0 = uVar17;
      FImageOverlappedAccumulator::FetchFullImageValue
                (*(FImageOverlappedAccumulator **)((longlong)this + 8),(float *)&local_f8,
                 (int)uVar42,param_1);
      plVar1 = *(longlong **)((longlong)this + 0x10);
      fVar45 = (float)(~uVar4 & (uint)(float)local_f8);
      fVar46 = (float)(~uVar5 & local_f8._4_4_);
      fVar47 = (float)(~uVar6 & (uint)uStack_f0);
      fVar48 = (float)(~uVar7 & uStack_f0._4_4_);
      local_108 = (float)local_f8;
      uStack_104 = local_f8._4_4_;
      uStack_100 = (uint)uStack_f0;
      uStack_fc = uStack_f0._4_4_;
      lVar2 = plVar1[1];
      lVar39 = (longlong)param_1 * **(longlong **)this + uVar40;
      auVar44._0_4_ =
           (~-(uint)((int)fVar45 < iVar26) &
            (uint)((iVar34 + (int)fVar45) - (((int)fVar45 << 0x12) >> 0x1f)) >> 0xd |
           (int)(fVar45 + fVar12) - (int)fVar12 & -(uint)((int)fVar45 < iVar26)) &
           -(uint)((int)fVar45 < iVar30);
      auVar44._4_4_ =
           (~-(uint)((int)fVar46 < iVar27) &
            (uint)((iVar35 + (int)fVar46) - (((int)fVar46 << 0x12) >> 0x1f)) >> 0xd |
           (int)(fVar46 + fVar13) - (int)fVar13 & -(uint)((int)fVar46 < iVar27)) &
           -(uint)((int)fVar46 < iVar31);
      auVar44._8_4_ =
           (~-(uint)((int)fVar47 < iVar28) &
            (uint)((iVar36 + (int)fVar47) - (((int)fVar47 << 0x12) >> 0x1f)) >> 0xd |
           (int)(fVar47 + fVar14) - (int)fVar14 & -(uint)((int)fVar47 < iVar28)) &
           -(uint)((int)fVar47 < iVar32);
      auVar44._12_4_ =
           (~-(uint)((int)fVar48 < iVar29) &
            (uint)((iVar37 + (int)fVar48) - (((int)fVar48 << 0x12) >> 0x1f)) >> 0xd |
           (int)(fVar48 + fVar15) - (int)fVar15 & -(uint)((int)fVar48 < iVar29)) &
           -(uint)((int)fVar48 < iVar33);
      uVar41 = 0;
      if (lVar39 < lVar2) {
        uVar41 = (uint)((ulonglong)lVar39 >> 0x3f) ^ 1;
      }
      auVar49._0_4_ =
           ~-(uint)((int)fVar45 < iVar30) &
           (((uint)fVar45 >> 0xd & uVar18 | uVar22) & -(uint)NAN(fVar45) | uVar8);
      auVar49._4_4_ =
           ~-(uint)((int)fVar46 < iVar31) &
           (((uint)fVar46 >> 0xd & uVar19 | uVar23) & -(uint)NAN(fVar46) | uVar9);
      auVar49._8_4_ =
           ~-(uint)((int)fVar47 < iVar32) &
           (((uint)fVar47 >> 0xd & uVar20 | uVar24) & -(uint)NAN(fVar47) | uVar10);
      auVar49._12_4_ =
           ~-(uint)((int)fVar48 < iVar33) &
           (((uint)fVar48 >> 0xd & uVar21 | uVar25) & -(uint)NAN(fVar48) | uVar11);
      auVar43._0_4_ = (int)(uVar4 & (uint)(float)local_f8) >> 0x10;
      auVar43._4_4_ = (int)(uVar5 & local_f8._4_4_) >> 0x10;
      auVar43._8_4_ = (int)(uVar6 & (uint)uStack_f0) >> 0x10;
      auVar43._12_4_ = (int)(uVar7 & uStack_f0._4_4_) >> 0x10;
      auVar43 = auVar44 | auVar49 | auVar43;
      auVar44 = packssdw(auVar43,auVar43);
      local_118 = auVar44._0_8_;
      if ((uVar41 == 0) &&
         (local_128 = lVar39, local_120 = lVar2,
         bVar38 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar38)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *plVar1;
      uVar41 = (int)uVar42 + 1;
      uVar40 = uVar40 + 1;
      *(undefined2 *)(lVar2 + lVar39 * 8) = (undefined2)local_118;
      *(undefined2 *)(lVar2 + 2 + lVar39 * 8) = local_118._2_2_;
      *(undefined2 *)(lVar2 + 4 + lVar39 * 8) = local_118._4_2_;
      *(undefined2 *)(lVar2 + 6 + lVar39 * 8) = local_118._6_2_;
      uVar42 = (ulonglong)uVar41;
    } while ((longlong)(int)uVar41 < **(longlong **)this);
  }
  return;
}

// operator() @ 14dd6e5d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FImageOverlappedAccumulator::InitMemory'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TArray<float,TSizedDefaultAllocator<64>_> *this_00;
  
  lVar1 = *(longlong *)this;
  if (param_1 < *(int *)(lVar1 + 0x20)) {
    uVar6 = 0;
    if ((longlong)param_1 < *(longlong *)(lVar1 + 0xa8)) {
      uVar6 = (uint)(param_1 >> 0x1f) >> 0x1f ^ 1;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    this_00 = (TArray<float,TSizedDefaultAllocator<64>_> *)
              (*(longlong *)(lVar1 + 0xa0) + (longlong)param_1 * 0x20);
    pFVar2 = *(FScriptContainerElement **)(*(longlong *)this + 0x18);
    iVar7 = (int)((ulonglong)pFVar2 >> 0x20);
    iVar8 = (int)pFVar2;
    this_00[1].AllocatorInstance.Data = pFVar2;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    this_00 = (TArray<float,TSizedDefaultAllocator<64>_> *)(lVar1 + 0xb8);
    *(undefined8 *)(lVar1 + 0xd0) = uVar3;
    iVar7 = (int)((ulonglong)uVar3 >> 0x20);
    iVar8 = (int)uVar3;
  }
  TArray<float,TSizedDefaultAllocator<64>_>::SetNumUninitialized
            (this_00,(longlong)iVar7 * (longlong)iVar8,Default);
  return;
}

// operator() @ 14dd6e890

void __thiscall
`FImageOverlappedAccumulator::ZeroPlanes'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)this;
  if (*(int *)(lVar1 + 0x20) <= param_1) {
    memset(*(void **)(lVar1 + 0xb8),0,*(longlong *)(lVar1 + 0xc0) << 2);
    return;
  }
  uVar4 = 0;
  if ((longlong)param_1 < *(longlong *)(lVar1 + 0xa8)) {
    uVar4 = (uint)(param_1 >> 0x1f) >> 0x1f ^ 1;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar5 = (longlong)param_1 * 0x20;
  memset(*(void **)(lVar5 + *(longlong *)(lVar1 + 0xa0)),0,
         *(longlong *)(lVar5 + 8 + *(longlong *)(lVar1 + 0xa0)) << 2);
  return;
}

// operator() @ 14dd6f640

void __thiscall
`FImageOverlappedAccumulator::AccumulatePixelData'::__l33::<lambda_2>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  iVar5 = 0;
  iVar8 = **(int **)this;
  if (0 < iVar8) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)((longlong)this + 8);
      lVar7 = (longlong)iVar8 * (longlong)param_1 + lVar6;
      uVar4 = 0;
      if (lVar7 < *(longlong *)(lVar1 + 0x90)) {
        uVar4 = (uint)((ulonglong)lVar7 >> 0x3f) ^ 1;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 1;
      *(undefined4 *)(*(longlong *)(lVar1 + 0x88) + lVar7 * 4) = 0x3f800000;
      iVar8 = **(int **)this;
    } while (iVar5 < iVar8);
  }
  return;
}

// operator() @ 14dd6f720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`FImageOverlappedAccumulator::AccumulatePixelData'::__l55::<lambda_3>::operator()
          (void *this,int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  uint uVar6;
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  bool bVar33;
  uint uVar34;
  int iVar35;
  longlong lVar36;
  longlong lVar37;
  int iVar38;
  longlong lVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  
  uVar32 = _UNK_1506896ec;
  uVar31 = _UNK_1506896e8;
  uVar30 = _UNK_1506896e4;
  uVar29 = __xmm_7f8000007f8000007f8000007f800000;
  fVar28 = _UNK_1506896dc;
  fVar27 = _UNK_1506896d8;
  fVar26 = _UNK_1506896d4;
  fVar25 = ___xmm_77800000778000007780000077800000;
  uVar24 = _UNK_1506895bc;
  uVar23 = _UNK_1506895b8;
  uVar22 = _UNK_1506895b4;
  uVar21 = ___xmm_00400000004000000040000000400000;
  uVar20 = _UNK_1506895ac;
  uVar19 = _UNK_1506895a8;
  uVar18 = _UNK_1506895a4;
  uVar17 = ___xmm_00007fff00007fff00007fff00007fff;
  iVar16 = _UNK_15068959c;
  iVar15 = _UNK_150689598;
  iVar14 = _UNK_150689594;
  iVar13 = ___xmm_00007c0000007c0000007c0000007c00;
  iVar12 = _UNK_15068958c;
  iVar11 = _UNK_150689588;
  iVar10 = _UNK_150689584;
  iVar9 = ___xmm_00007bff00007bff00007bff00007bff;
  iVar38 = 0;
  iVar35 = **(int **)this;
  if (0 < iVar35) {
    lVar36 = 0;
    lVar39 = (longlong)param_1;
    do {
      lVar2 = *(longlong *)((longlong)this + 0x18);
      lVar37 = iVar35 * lVar39 + lVar36;
      uVar1 = *(ulonglong *)
               (**(longlong **)((longlong)this + 8) + **(int **)((longlong)this + 0x10) * lVar37 * 2
               );
      auVar4._8_4_ = 0;
      auVar4._0_8_ = uVar1;
      auVar4._12_2_ = (short)(uVar1 >> 0x30);
      auVar5._8_2_ = (short)(uVar1 >> 0x20);
      auVar5._0_8_ = uVar1;
      auVar5._10_4_ = auVar4._10_4_;
      auVar8._6_8_ = 0;
      auVar8._0_6_ = auVar5._8_6_;
      auVar7._4_2_ = (short)(uVar1 >> 0x10);
      auVar7._0_4_ = (uint)uVar1;
      auVar7._6_8_ = SUB148(auVar8 << 0x40,6);
      uVar40 = (uint)uVar1 & 0xffff;
      uVar41 = uVar40 & uVar17;
      uVar42 = auVar7._4_4_ & uVar18;
      uVar6 = auVar4._10_4_ >> 0x10;
      uVar43 = auVar5._8_4_ & uVar19;
      uVar44 = uVar6 & uVar20;
      uVar34 = 0;
      if (lVar37 < *(longlong *)(lVar2 + 0x30)) {
        uVar34 = (uint)((ulonglong)lVar37 >> 0x3f) ^ 1;
      }
      if ((uVar34 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)(*(longlong *)(lVar2 + 0x28) + lVar37 * 4) =
           -(uint)(iVar9 < (int)uVar41) & uVar29 | -(uint)(iVar13 < (int)uVar41) & uVar21 |
           (uVar40 ^ uVar41) << 0x10 | (uint)((float)(uVar41 << 0xd) * fVar25);
      lVar2 = *(longlong *)((longlong)this + 0x18);
      lVar37 = **(int **)this * lVar39 + lVar36;
      uVar34 = 0;
      if (lVar37 < *(longlong *)(lVar2 + 0x48)) {
        uVar34 = (uint)((ulonglong)lVar37 >> 0x3f) ^ 1;
      }
      if ((uVar34 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)(*(longlong *)(lVar2 + 0x40) + lVar37 * 4) =
           -(uint)(iVar10 < (int)uVar42) & uVar30 | -(uint)(iVar14 < (int)uVar42) & uVar22 |
           (auVar7._4_4_ ^ uVar42) << 0x10 | (uint)((float)(uVar42 << 0xd) * fVar26);
      lVar2 = *(longlong *)((longlong)this + 0x18);
      lVar37 = **(int **)this * lVar39 + lVar36;
      uVar34 = 0;
      if (lVar37 < *(longlong *)(lVar2 + 0x60)) {
        uVar34 = (uint)((ulonglong)lVar37 >> 0x3f) ^ 1;
      }
      if ((uVar34 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)(*(longlong *)(lVar2 + 0x58) + lVar37 * 4) =
           -(uint)(iVar11 < (int)uVar43) & uVar31 | -(uint)(iVar15 < (int)uVar43) & uVar23 |
           (auVar5._8_4_ ^ uVar43) << 0x10 | (uint)((float)(uVar43 << 0xd) * fVar27);
      lVar2 = *(longlong *)((longlong)this + 0x18);
      lVar37 = **(int **)this * lVar39 + lVar36;
      uVar34 = 0;
      if (lVar37 < *(longlong *)(lVar2 + 0x78)) {
        uVar34 = (uint)((ulonglong)lVar37 >> 0x3f) ^ 1;
      }
      if ((uVar34 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar38 = iVar38 + 1;
      lVar36 = lVar36 + 1;
      *(uint *)(*(longlong *)(lVar2 + 0x70) + lVar37 * 4) =
           -(uint)(iVar12 < (int)uVar44) & uVar32 | -(uint)(iVar16 < (int)uVar44) & uVar24 |
           (uVar6 ^ uVar44) << 0x10 | (uint)((float)(uVar44 << 0xd) * fVar28);
      iVar35 = **(int **)this;
    } while (iVar38 < iVar35);
  }
  return;
}

// operator() @ 14dd6fa40

void __thiscall
`FImageOverlappedAccumulator::AccumulatePixelData'::__l163::<lambda_4>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)this;
  if (*(int *)(lVar1 + 0x20) <= param_1) {
    FImageOverlappedPlane::AccumulateSinglePlane
              ((FImageOverlappedPlane *)(lVar1 + 0xb8),
               (TArray<float,TSizedDefaultAllocator<64>_> *)(lVar1 + 0x88),
               (TIntPoint<int>)(*(TIntPoint<int>_u_0 **)((longlong)this + 8))->_s_0,
               (TIntPoint<int>)(*(TIntPoint<int>_u_0 **)((longlong)this + 0x10))->_s_0,
               (float)**(double **)((longlong)this + 0x18),
               (float)(*(double **)((longlong)this + 0x18))[1],
               (TIntPoint<int>)(*(TIntPoint<int>_u_0 **)((longlong)this + 0x20))->_s_0,
               (TIntPoint<int>)(*(TIntPoint<int>_u_0 **)((longlong)this + 0x28))->_s_0,
               *(TArray<float,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x30),
               *(TArray<float,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x38));
    return;
  }
  lVar5 = (longlong)param_1;
  uVar4 = 0;
  if (lVar5 < *(longlong *)(lVar1 + 0xa8)) {
    uVar4 = (uint)(param_1 >> 0x1f) >> 0x1f ^ 1;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FImageOverlappedPlane::AccumulateSinglePlane
            ((FImageOverlappedPlane *)(lVar5 * 0x20 + *(longlong *)(lVar1 + 0xa0)),
             (TArray<float,TSizedDefaultAllocator<64>_> *)(*(longlong *)this + (lVar5 * 3 + 5) * 8),
             (TIntPoint<int>)(*(TIntPoint<int>_u_0 **)((longlong)this + 8))->_s_0,
             (TIntPoint<int>)(*(TIntPoint<int>_u_0 **)((longlong)this + 0x10))->_s_0,
             (float)**(double **)((longlong)this + 0x18),
             (float)(*(double **)((longlong)this + 0x18))[1],
             (TIntPoint<int>)(*(TIntPoint<int>_u_0 **)((longlong)this + 0x20))->_s_0,
             (TIntPoint<int>)(*(TIntPoint<int>_u_0 **)((longlong)this + 0x28))->_s_0,
             *(TArray<float,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x30),
             *(TArray<float,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x38));
  return;
}

// AccumulatePixelData @ 14dd710b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FImageOverlappedAccumulator::AccumulatePixelData
          (FImageOverlappedAccumulator *this,FImagePixelData *param_1,TIntPoint<int> param_2,
          TVector2<double> *param_3,FTileWeight1D *param_4,FTileWeight1D *param_5)

{
  FScriptContainerElement *pFVar1;
  undefined4 *puVar2;
  float fVar3;
  uchar uVar4;
  FScriptContainerElement FVar5;
  EImagePixelType EVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  FTileWeight1D *pFVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_AccumulatePixelData> FVar14;
  TIntPoint<int>_u_0 TVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 (*pauVar24) [16];
  FName FVar25;
  int iVar26;
  undefined1 (*pauVar27) [16];
  byte bVar28;
  int iVar29;
  uint uVar30;
  longlong lVar31;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar32;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined1 in_XMM1 [16];
  undefined1 auVar33 [16];
  double dVar34;
  undefined4 uVar35;
  double dVar36;
  undefined1 auVar37 [16];
  TIntPoint<int>_u_0 local_res18;
  <lambda_1> local_298;
  TIntPoint<int>_u_0 local_290;
  uint local_288 [2];
  FName local_280;
  undefined8 local_278;
  FScriptContainerElement *local_270;
  FColor_u_0 local_268 [2];
  FName local_260;
  FScriptContainerElement *local_258;
  longlong local_250;
  int local_248;
  int local_244;
  int local_240;
  int local_23c;
  TArray<float,TSizedDefaultAllocator<32>_> local_238;
  TArray<float,TSizedDefaultAllocator<32>_> local_228;
  FName local_218;
  FImageOverlappedAccumulator *local_208;
  LARGE_INTEGER local_200;
  LARGE_INTEGER local_1f8;
  TVector2<double> *local_1f0;
  LARGE_INTEGER local_1e8;
  LARGE_INTEGER local_1e0;
  FScriptContainerElement *local_1d8;
  LARGE_INTEGER local_1d0;
  FImageOverlappedAccumulator *local_1c8;
  TIntPoint<int>_u_0 *local_1c0;
  TArrayView<std::nullptr_t,int> local_1b8;
  code *local_1a8;
  FImageOverlappedAccumulator **local_1a0;
  TIntPoint<int>_u_0 *local_198;
  FImageOverlappedAccumulator *local_190;
  TArrayView<std::nullptr_t,int> local_188;
  code *local_178;
  TIntPoint<int>_u_0 **local_170;
  code *local_168;
  TIntPoint<int>_u_0 **local_160;
  TArrayView<std::nullptr_t,int> local_158;
  code *local_148;
  FImageOverlappedAccumulator **local_140;
  TIntPoint<int>_u_0 *local_138;
  FScriptContainerElement **local_130;
  uint *local_128;
  FImageOverlappedAccumulator *local_120;
  FImageOverlappedAccumulator *local_118;
  TIntPoint<int>_u_0 *local_110;
  TIntPoint<int>_u_0 *local_108;
  TVector2<double> *local_100;
  int *local_f8;
  int *local_f0;
  TArray<float,TSizedDefaultAllocator<32>_> *local_e8;
  TArray<float,TSizedDefaultAllocator<32>_> *local_e0;
  FName local_d8 [18];
  
  local_278 = param_5;
  FVar14 = StatPtr_STAT_AccumulatePixelData;
  local_res18 = param_2.field0_0x0;
  local_208 = this;
  local_1f0 = param_3;
  if (StatPtr_STAT_AccumulatePixelData == (FThreadSafeStaticStat<FStat_STAT_AccumulatePixelData>)0x0
     ) {
    pFVar13 = ::FName::FName(local_d8,"STAT_AccumulatePixelData");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_AccumulatePixelData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AccumulatePixelData,*pFVar13,
                        L"OverlapAccumulator_AccumulatePixelData","STATGROUP_MoviePipeline",
                        "STATCAT_Advanced",L"MovieRenderPipeline",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar25 = *(FName *)FVar14;
  bVar28 = 0;
  local_218.ComparisonIndex.Value = 0;
  local_218.Number = 0;
  local_298 = (<lambda_1>)0x0;
  if ((FVar25.ComparisonIndex.Value.Value == 0) && (FVar25.Number == 0)) {
LAB_14dd71235:
    local_280 = local_218;
    FVar25 = local_218;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_268[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_268[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar28 = 1;
      local_298 = (<lambda_1>)0x1;
      if (-1 < CpuChannel->Enabled) {
        local_260.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_260.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_260,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                   ,0x1f9);
        bVar28 = 3;
        local_298 = (<lambda_1>)0x3;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dd71235;
    local_280 = FVar25;
    FThreadStats::AddMessage(FVar25,CycleScopeStart);
    local_298 = (<lambda_1>)(bVar28 | 4);
  }
  EVar6 = param_1->Type;
  uVar4 = param_1->BitDepth;
  local_288[0] = (uint)param_1->NumChannels;
  local_290 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&(param_1->Size).field0_0x0._s_0;
  local_258 = (FScriptContainerElement *)0x0;
  local_250 = 0;
  (**(code **)(param_1->_padding_ + 8))(param_1,&local_258,&local_250);
  local_270 = local_258;
  if ((local_258 == (FScriptContainerElement *)0x0) ||
     (local_250 !=
      (ulonglong)(param_1->BitDepth >> 3) * (longlong)(param_1->Size).field0_0x0._s_0.Y *
      (longlong)(param_1->Size).field0_0x0._s_0.X * (ulonglong)param_1->NumChannels)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsFetchOk",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                        ,0x204,L"");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    goto LAB_14dd72463;
  }
  local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.ArrayNum = 0;
  local_228.ArrayMax = 0;
  local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.ArrayNum = 0;
  local_238.ArrayMax = 0;
  MoviePipeline::FTileWeight1D::CalculateArrayWeight(param_4,&local_228,local_290._s_0.X);
  pFVar10 = local_278;
  MoviePipeline::FTileWeight1D::CalculateArrayWeight(local_278,&local_238,local_290._s_0.Y);
  local_248 = param_4->X0;
  local_244 = pFVar10->X0;
  local_240 = param_4->X3 - local_248;
  local_23c = pFVar10->X3 - local_244;
  if ((this->NumChannels < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumChannels >= 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                          ,0x212,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((4 < this->NumChannels) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumChannels <= 4",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                          ,0x213,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (this->UnpackedDataStorage[0].ArrayNum !=
      (longlong)local_290._s_0.Y * (longlong)local_290._s_0.X) {
    bVar12 = -1 < CpuChannel->Enabled;
    if (bVar12) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId537,"AllocDataStorage",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                 ,0x219);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId537);
    }
    local_1c0 = &local_290;
    local_1b8.DataPtr = (void **)0x0;
    local_1a8 = UE::Core::Private::Function::
                TFunctionRefCaller<`FImageOverlappedAccumulator::AccumulatePixelData'::__l30::<lambda_1>,void,int>
                ::Call;
    local_1a0 = &local_1c8;
    local_1b8.ArrayNum = 0;
    local_1c8 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",4,1,(TFunctionRef<void___cdecl(int)> *)&local_1a8,local_298,None,
               &local_1b8);
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if ((this->WeightChannelStorage).ArrayNum !=
      (longlong)local_290._s_0.Y * (longlong)local_290._s_0.X) {
    bVar12 = -1 < CpuChannel->Enabled;
    if (bVar12) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId547,"AllocWeightChannelStorage",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                 ,0x223);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId547);
    }
    TArray<float,TSizedDefaultAllocator<64>_>::SetNumUninitialized
              (&this->WeightChannelStorage,(longlong)local_290._s_0.Y * (longlong)local_290._s_0.X,
               Default);
    local_198 = &local_290;
    local_178 = UE::Core::Private::Function::
                TFunctionRefCaller<`FImageOverlappedAccumulator::AccumulatePixelData'::__l33::<lambda_2>,void,int>
                ::Call;
    local_170 = &local_198;
    local_188.DataPtr = (void **)0x0;
    local_188.ArrayNum = 0;
    local_190 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_290._s_0.Y,1,(TFunctionRef<void___cdecl(int)> *)&local_178,
               local_298,None,&local_188);
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  QueryPerformanceCounter(&local_1e0);
  pFVar11 = local_270;
  auVar37 = ___xmm_3f701010200000003f70101020000000;
  fVar3 = __real_3b808081;
  if (EVar6 == Color) {
    if ((local_288[0] != 4) || (uVar4 != '\b')) goto LAB_14dd71f0c;
    if (bIsReferenceUnpack == false) {
      local_278 = (FTileWeight1D *)((ulonglong)local_278._4_4_ << 0x20);
      if (0 < local_290._s_0.Y) {
        lVar31 = 0;
        do {
          lVar18 = (longlong)(int)local_288[0];
          lVar22 = local_290._s_0.X * lVar31;
          uVar30 = 0;
          if (lVar22 < this->UnpackedDataStorage[0].ArrayNum) {
            uVar30 = (uint)((ulonglong)lVar22 >> 0x3f) ^ 1;
          }
          if ((uVar30 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_270 = this->UnpackedDataStorage[0].AllocatorInstance.Data + lVar22 * 4;
          lVar19 = local_290._s_0.X * lVar31;
          uVar30 = 0;
          if (lVar19 < this->UnpackedDataStorage[1].ArrayNum) {
            uVar30 = (uint)((ulonglong)lVar19 >> 0x3f) ^ 1;
          }
          if ((uVar30 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar23 = local_290._s_0.X * lVar31;
          pFVar1 = this->UnpackedDataStorage[1].AllocatorInstance.Data + lVar19 * 4;
          uVar30 = 0;
          if (lVar23 < this->UnpackedDataStorage[2].ArrayNum) {
            uVar30 = (uint)((ulonglong)lVar23 >> 0x3f) ^ 1;
          }
          if ((uVar30 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar7 = this->UnpackedDataStorage[2].AllocatorInstance.Data;
          lVar19 = local_290._s_0.X * lVar31;
          uVar30 = 0;
          if (lVar19 < this->UnpackedDataStorage[3].ArrayNum) {
            uVar30 = (uint)((ulonglong)lVar19 >> 0x3f) ^ 1;
          }
          if ((uVar30 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar8 = this->UnpackedDataStorage[3].AllocatorInstance.Data;
          iVar26 = 0;
          if (0 < local_290._s_0.X) {
            pFVar20 = pFVar1;
            do {
              pFVar17 = pFVar20 + 4;
              iVar29 = iVar26 * local_288[0];
              iVar26 = iVar26 + 1;
              auVar33 = pmovzxbd(in_XMM1,*(undefined4 *)
                                          (pFVar11 + (longlong)iVar29 + lVar18 * lVar22));
              dVar34 = (double)auVar33._0_4_ * auVar37._0_8_;
              dVar36 = (double)auVar33._4_4_ * auVar37._8_8_;
              uVar35 = (undefined4)((ulonglong)dVar34 >> 0x20);
              *(int *)(pFVar17 + (longlong)(local_270 + (-4 - (longlong)pFVar1))) = SUB84(dVar36,0);
              in_XMM1._4_4_ = uVar35;
              in_XMM1._0_4_ = uVar35;
              in_XMM1._8_4_ = uVar35;
              in_XMM1._12_4_ = uVar35;
              *(undefined4 *)pFVar20 = uVar35;
              *(int *)(pFVar17 + (longlong)(pFVar7 + (lVar23 * 4 - (longlong)pFVar1) + -4)) =
                   SUB84(dVar34,0);
              *(int *)(pFVar20 + (longlong)(pFVar8 + (lVar19 * 4 - (longlong)pFVar1))) =
                   (int)((ulonglong)dVar36 >> 0x20);
              pFVar20 = pFVar17;
            } while (iVar26 < local_290._s_0.X);
          }
          lVar31 = lVar31 + 1;
          iVar26 = (int)local_278 + 1;
          local_278 = (FTileWeight1D *)CONCAT44(local_278._4_4_,iVar26);
          FVar25 = local_280;
        } while (iVar26 < local_290._s_0.Y);
      }
    }
    else {
      iVar26 = 0;
      if (0 < local_290._s_0.Y) {
        lVar31 = 0;
        TVar15 = local_290;
        uVar35 = local_290._s_0.Y;
        do {
          iVar29 = 0;
          lVar22 = 0;
          if (0 < TVar15._s_0.X) {
            do {
              lVar18 = TVar15._s_0.X * lVar31 + lVar22;
              FVar5 = pFVar11[(int)local_288[0] * lVar18];
              uVar30 = 0;
              if (lVar18 < this->UnpackedDataStorage[2].ArrayNum) {
                uVar30 = (uint)((ulonglong)lVar18 >> 0x3f) ^ 1;
              }
              if ((uVar30 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              *(float *)(this->UnpackedDataStorage[2].AllocatorInstance.Data + lVar18 * 4) =
                   (float)(byte)FVar5 * fVar3;
              lVar18 = local_290._s_0.X * lVar31 + lVar22;
              FVar5 = pFVar11[(int)local_288[0] * lVar18 + 1];
              uVar30 = 0;
              if (lVar18 < this->UnpackedDataStorage[1].ArrayNum) {
                uVar30 = (uint)((ulonglong)lVar18 >> 0x3f) ^ 1;
              }
              if ((uVar30 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              *(float *)(this->UnpackedDataStorage[1].AllocatorInstance.Data + lVar18 * 4) =
                   (float)(byte)FVar5 * fVar3;
              lVar18 = local_290._s_0.X * lVar31 + lVar22;
              FVar5 = pFVar11[(int)local_288[0] * lVar18 + 2];
              uVar30 = 0;
              if (lVar18 < this->UnpackedDataStorage[0].ArrayNum) {
                uVar30 = (uint)((ulonglong)lVar18 >> 0x3f) ^ 1;
              }
              if ((uVar30 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              *(float *)(this->UnpackedDataStorage[0].AllocatorInstance.Data + lVar18 * 4) =
                   (float)(byte)FVar5 * fVar3;
              lVar18 = local_290._s_0.X * lVar31 + lVar22;
              FVar5 = pFVar11[(int)local_288[0] * lVar18 + 3];
              uVar30 = 0;
              if (lVar18 < this->UnpackedDataStorage[3].ArrayNum) {
                uVar30 = (uint)((ulonglong)lVar18 >> 0x3f) ^ 1;
              }
              if ((uVar30 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar29 = iVar29 + 1;
              lVar22 = lVar22 + 1;
              *(float *)(this->UnpackedDataStorage[3].AllocatorInstance.Data + lVar18 * 4) =
                   (float)(byte)FVar5 * fVar3;
              TVar15 = local_290;
            } while (iVar29 < local_290._s_0.X);
            uVar35 = local_290._s_0.Y;
          }
          iVar26 = iVar26 + 1;
          lVar31 = lVar31 + 1;
          FVar25 = local_280;
        } while (iVar26 < (int)uVar35);
      }
    }
  }
  else if (EVar6 == Float16) {
    if ((local_288[0] == 4) && (uVar4 == '\x10')) {
      bVar12 = -1 < CpuChannel->Enabled;
      if (bVar12) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId616,"MoviePipeline::Float16Unpack",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                   ,0x268);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId616);
      }
      local_1d8 = local_270;
      local_138 = &local_290;
      local_130 = &local_1d8;
      local_128 = local_288;
      local_160 = &local_138;
      local_168 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FImageOverlappedAccumulator::AccumulatePixelData'::__l55::<lambda_3>,void,int>
                  ::Call;
      local_120 = this;
      ParallelFor(local_290._s_0.Y,(TFunctionRef<void___cdecl(int)> *)&local_168,None);
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    else {
LAB_14dd71f0c:
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                          ,0x2aa,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
  }
  else {
    if (((EVar6 != Float32) || (local_288[0] != 4)) || (uVar4 != ' ')) goto LAB_14dd71f0c;
    if (IsReferenceUnpack == false) {
      local_278 = (FTileWeight1D *)((ulonglong)local_278._4_4_ << 0x20);
      if (0 < local_290._s_0.Y) {
        lVar31 = 0;
        do {
          lVar22 = local_290._s_0.X * lVar31;
          local_270 = (FScriptContainerElement *)((int)local_288[0] * lVar22);
          uVar30 = 0;
          if (lVar22 < this->UnpackedDataStorage[0].ArrayNum) {
            uVar30 = (uint)((ulonglong)lVar22 >> 0x3f) ^ 1;
          }
          if ((uVar30 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar1 = this->UnpackedDataStorage[0].AllocatorInstance.Data;
          lVar18 = local_290._s_0.X * lVar31;
          uVar30 = 0;
          if (lVar18 < this->UnpackedDataStorage[1].ArrayNum) {
            uVar30 = (uint)((ulonglong)lVar18 >> 0x3f) ^ 1;
          }
          if ((uVar30 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar19 = local_290._s_0.X * lVar31;
          pFVar7 = this->UnpackedDataStorage[1].AllocatorInstance.Data + lVar18 * 4;
          uVar30 = 0;
          if (lVar19 < this->UnpackedDataStorage[2].ArrayNum) {
            uVar30 = (uint)((ulonglong)lVar19 >> 0x3f) ^ 1;
          }
          if ((uVar30 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar8 = this->UnpackedDataStorage[2].AllocatorInstance.Data;
          lVar18 = local_290._s_0.X * lVar31;
          uVar30 = 0;
          if (lVar18 < this->UnpackedDataStorage[3].ArrayNum) {
            uVar30 = (uint)((ulonglong)lVar18 >> 0x3f) ^ 1;
          }
          if ((uVar30 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar20 = this->UnpackedDataStorage[3].AllocatorInstance.Data;
          iVar26 = 0;
          if (0 < local_290._s_0.X) {
            pFVar17 = pFVar11 + (longlong)(local_270 + 2) * 4;
            pFVar21 = pFVar7;
            do {
              *(undefined4 *)(pFVar21 + (longlong)(pFVar1 + (lVar22 * 4 - (longlong)pFVar7))) =
                   *(undefined4 *)(pFVar17 + -8);
              iVar26 = iVar26 + 1;
              *(undefined4 *)pFVar21 = *(undefined4 *)(pFVar17 + -4);
              *(undefined4 *)
               (pFVar21 + 4 + (longlong)(pFVar8 + (lVar19 * 4 - (longlong)pFVar7) + -4)) =
                   *(undefined4 *)pFVar17;
              *(undefined4 *)(pFVar21 + (longlong)(pFVar20 + (lVar18 * 4 - (longlong)pFVar7))) =
                   *(undefined4 *)(pFVar17 + 4);
              pFVar17 = pFVar17 + 0x10;
              pFVar21 = pFVar21 + 4;
            } while (iVar26 < local_290._s_0.X);
          }
          lVar31 = lVar31 + 1;
          iVar26 = (int)local_278 + 1;
          local_278 = (FTileWeight1D *)CONCAT44(local_278._4_4_,iVar26);
          FVar25 = local_280;
        } while (iVar26 < local_290._s_0.Y);
      }
    }
    else {
      iVar26 = 0;
      if (0 < local_290._s_0.Y) {
        lVar31 = 0;
        TVar15 = local_290;
        uVar35 = local_290._s_0.Y;
        do {
          iVar29 = 0;
          lVar22 = 0;
          if (0 < TVar15._s_0.X) {
            do {
              lVar18 = TVar15._s_0.X * lVar31 + lVar22;
              uVar35 = *(undefined4 *)(pFVar11 + (int)local_288[0] * lVar18 * 4);
              uVar30 = 0;
              if (lVar18 < this->UnpackedDataStorage[0].ArrayNum) {
                uVar30 = (uint)((ulonglong)lVar18 >> 0x3f) ^ 1;
              }
              if ((uVar30 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              *(undefined4 *)(this->UnpackedDataStorage[0].AllocatorInstance.Data + lVar18 * 4) =
                   uVar35;
              lVar18 = local_290._s_0.X * lVar31 + lVar22;
              uVar35 = *(undefined4 *)(pFVar11 + (int)local_288[0] * lVar18 * 4 + 4);
              uVar30 = 0;
              if (lVar18 < this->UnpackedDataStorage[1].ArrayNum) {
                uVar30 = (uint)((ulonglong)lVar18 >> 0x3f) ^ 1;
              }
              if ((uVar30 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              *(undefined4 *)(this->UnpackedDataStorage[1].AllocatorInstance.Data + lVar18 * 4) =
                   uVar35;
              lVar18 = local_290._s_0.X * lVar31 + lVar22;
              uVar35 = *(undefined4 *)(pFVar11 + (int)local_288[0] * lVar18 * 4 + 8);
              uVar30 = 0;
              if (lVar18 < this->UnpackedDataStorage[2].ArrayNum) {
                uVar30 = (uint)((ulonglong)lVar18 >> 0x3f) ^ 1;
              }
              if ((uVar30 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              *(undefined4 *)(this->UnpackedDataStorage[2].AllocatorInstance.Data + lVar18 * 4) =
                   uVar35;
              lVar18 = local_290._s_0.X * lVar31 + lVar22;
              uVar35 = *(undefined4 *)(pFVar11 + (int)local_288[0] * lVar18 * 4 + 0xc);
              uVar30 = 0;
              if (lVar18 < this->UnpackedDataStorage[3].ArrayNum) {
                uVar30 = (uint)((ulonglong)lVar18 >> 0x3f) ^ 1;
              }
              if ((uVar30 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar29 = iVar29 + 1;
              lVar22 = lVar22 + 1;
              *(undefined4 *)(this->UnpackedDataStorage[3].AllocatorInstance.Data + lVar18 * 4) =
                   uVar35;
              TVar15 = local_290;
            } while (iVar29 < local_290._s_0.X);
            uVar35 = local_290._s_0.Y;
          }
          iVar26 = iVar26 + 1;
          lVar31 = lVar31 + 1;
          FVar25 = local_280;
        } while (iVar26 < (int)uVar35);
      }
    }
  }
  QueryPerformanceCounter(&local_1d0);
  if ((bLogTiming != false) && (4 < (byte)LogTemp._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  if (__real_3f800000 != this->AccumulationGamma) {
    bVar12 = -1 < CpuChannel->Enabled;
    if (bVar12) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId696,"MoviePipeline::ApplyAccumulationGamma",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                 ,0x2b8);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId696);
    }
    fVar3 = this->AccumulationGamma;
    iVar26 = 0;
    local_278 = (FTileWeight1D *)((ulonglong)local_278 & 0xffffffff00000000);
    if (0 < this->NumChannels) {
      local_280 = (FName)this->UnpackedDataStorage;
      do {
        uVar30 = local_290._s_0.Y * local_290._s_0.X;
        pauVar24 = *(undefined1 (**) [16])local_280;
        if (EnableVectorizedPow == false) {
          lVar31 = 0;
          if ((0 < (int)uVar30) && (3 < uVar30)) {
            uVar16 = uVar30 & 0x80000003;
            if ((int)uVar16 < 0) {
              uVar16 = (uVar16 - 1 | 0xfffffffc) + 1;
            }
            do {
              __vdecl_powf4();
              puVar2 = (undefined4 *)(*pauVar24 + lVar31 * 4);
              *puVar2 = extraout_XMM0_Da_01;
              puVar2[1] = extraout_XMM0_Db_01;
              puVar2[2] = extraout_XMM0_Dc_01;
              puVar2[3] = extraout_XMM0_Dd_01;
              lVar31 = lVar31 + 4;
            } while (lVar31 < (int)(uVar30 - uVar16));
            iVar26 = (int)local_278;
          }
          for (; lVar31 < (int)uVar30; lVar31 = lVar31 + 1) {
            fVar32 = powf(*(float *)(*pauVar24 + lVar31 * 4),fVar3);
            *(float *)(*pauVar24 + lVar31 * 4) = fVar32;
          }
        }
        else {
          uVar16 = uVar30;
          if ((int)uVar30 < 0) {
            uVar16 = uVar30 + 3;
          }
          iVar29 = (int)uVar16 >> 2;
          pauVar27 = pauVar24;
          lVar31 = (longlong)iVar29;
          if (0 < iVar29) {
            do {
              __vdecl_pow2();
              auVar37._0_4_ = (float)(double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
              auVar37._4_4_ = (float)(double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
              __vdecl_pow2();
              auVar37._12_4_ = (float)(double)CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
              auVar37._8_4_ = (float)(double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
              *pauVar27 = auVar37;
              lVar31 = lVar31 + -1;
              pauVar27 = pauVar27 + 1;
            } while (lVar31 != 0);
            this = local_208;
            iVar26 = (int)local_278;
          }
          lVar31 = (longlong)(int)(uVar30 + iVar29 * -4);
          if (0 < lVar31) {
            pauVar24 = pauVar24 + iVar29;
            do {
              fVar32 = powf(*(float *)*pauVar24,fVar3);
              *(float *)*pauVar24 = fVar32;
              pauVar24 = (undefined1 (*) [16])(*pauVar24 + 4);
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
          }
        }
        iVar26 = iVar26 + 1;
        local_280 = (FName)((longlong)local_280 + 0x18);
        local_278 = (FTileWeight1D *)CONCAT44(local_278._4_4_,iVar26);
      } while (iVar26 < this->NumChannels);
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  QueryPerformanceCounter(&local_200);
  if ((bLogTiming != false) && (4 < (byte)LogTemp._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  QueryPerformanceCounter(&local_1f8);
  if ((bLogTiming != false) && (4 < (byte)LogTemp._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId752,"MoviePipeline::PlaneAccumulation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
               ,0x2f0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId752);
  }
  local_110 = &local_290;
  local_108 = &local_res18;
  local_158.DataPtr = (void **)0x0;
  local_100 = local_1f0;
  local_f8 = &local_248;
  local_f0 = &local_240;
  local_e8 = &local_228;
  local_e0 = &local_238;
  local_148 = UE::Core::Private::Function::
              TFunctionRefCaller<`FImageOverlappedAccumulator::AccumulatePixelData'::__l163::<lambda_4>,void,int>
              ::Call;
  local_140 = &local_118;
  local_158.ArrayNum = 0;
  local_118 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",this->NumChannels + 1,1,
             (TFunctionRef<void___cdecl(int)> *)&local_148,local_298,None,&local_158);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  QueryPerformanceCounter(&local_1e8);
  if ((bLogTiming != false) && (4 < (byte)LogTemp._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.AllocatorInstance.Data);
  }
  if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.AllocatorInstance.Data);
  }
LAB_14dd72463:
  if (((byte)local_298 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (((byte)local_298 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((byte)local_298 & 4) != 0) {
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
  return;
}

// FetchFinalPixelDataByte @ 14dd80ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FImageOverlappedAccumulator::FetchFinalPixelDataByte
          (FImageOverlappedAccumulator *this,TArray<FColor,TSizedDefaultAllocator<64>_> *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_FetchFinalPixelData8bit> FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong lVar14;
  int iVar15;
  FName FVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStackY_128 [32];
  FColor_u_0 local_c4;
  FName local_c0;
  LARGE_INTEGER local_b8;
  FName local_b0;
  longlong local_a8;
  FName local_a0;
  FName local_98;
  FStatMessage local_88;
  FName local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_128;
  FVar13 = StatPtr_STAT_FetchFinalPixelData8bit;
  if (StatPtr_STAT_FetchFinalPixelData8bit ==
      (FThreadSafeStaticStat<FStat_STAT_FetchFinalPixelData8bit>)0x0) {
    pFVar12 = ::FName::FName(&local_78,"STAT_FetchFinalPixelData8bit");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_FetchFinalPixelData8bit>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FetchFinalPixelData8bit,*pFVar12,
                        L"OverlapAccumulator_FetchPixelData8","STATGROUP_MoviePipeline",
                        "STATCAT_Advanced",L"MovieRenderPipeline",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar16 = *(FName *)FVar13;
  bVar4 = false;
  bVar5 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  bVar9 = false;
  bVar10 = false;
  if ((FVar16.ComparisonIndex.Value.Value != 0) || (FVar16.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c4._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar4 = false;
      bVar5 = true;
      bVar9 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b0.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
        local_b0.Number = FVar16.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                   ,0x32f);
        bVar4 = true;
        bVar5 = true;
        bVar9 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c0 = FVar16;
      local_a0 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar9 = true;
      goto LAB_14dd80e2a;
    }
  }
  bVar5 = bVar10;
  bVar4 = bVar9;
  bVar9 = false;
  local_a0 = local_98;
  FVar16 = local_98;
LAB_14dd80e2a:
  iVar15 = (this->PlaneSize).field0_0x0._s_0.Y;
  iVar2 = (this->PlaneSize).field0_0x0._s_0.X;
  TArray<FColor,TSizedDefaultAllocator<64>_>::SetNumUninitialized
            (param_1,(longlong)(iVar15 * iVar2),Default);
  uVar8 = _UNK_150689648;
  uVar7 = ___xmm_3f800000000000000000000000000000;
  fVar6 = __real_437f0000;
  iVar17 = 0;
  local_a8 = (longlong)iVar15;
  if (0 < iVar15) {
    local_c0.ComparisonIndex.Value = 0;
    local_c0.Number = 0;
    do {
      iVar15 = 0;
      if (0 < iVar2) {
        lVar14 = (longlong)iVar17 * (longlong)iVar2;
        FVar16 = local_c0;
        do {
          local_70 = uVar7;
          uStack_68 = uVar8;
          FetchFullImageValue(this,(float *)&local_70,iVar15,iVar17);
          fVar18 = uStack_68._4_4_ * fVar6;
          fVar19 = (float)local_70 * fVar6;
          fVar20 = local_70._4_4_ * fVar6;
          fVar21 = (float)uStack_68 * fVar6;
          uVar11 = 0;
          if (lVar14 < param_1->ArrayNum) {
            uVar11 = (uint)((ulonglong)lVar14 >> 0x3f) ^ 1;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar15 = iVar15 + 1;
          lVar14 = lVar14 + 1;
          *(uint *)((param_1->AllocatorInstance).Data + (longlong)FVar16 * 4) =
               ((((int)fVar18 & 0xffU) << 8 | (int)fVar19 & 0xffU) << 8 | (int)fVar20 & 0xffU) << 8
               | (int)fVar21 & 0xffU;
          FVar16 = (FName)((longlong)FVar16 + 1);
        } while (iVar15 < iVar2);
      }
      local_c0 = (FName)((longlong)local_c0 + (longlong)iVar2);
      iVar17 = iVar17 + 1;
      local_a8 = local_a8 + -1;
    } while (local_a8 != 0);
    local_a8 = 0;
    FVar16 = local_a0;
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_88.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_88.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_b8);
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
      local_88.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
      local_88.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
      local_88.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_88);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// FetchFinalPixelDataHalfFloat @ 14dd81380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FImageOverlappedAccumulator::FetchFinalPixelDataHalfFloat
          (FImageOverlappedAccumulator *this,
          TArray<FFloat16Color,TSizedDefaultAllocator<64>_> *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_FetchFinalPixelData16bit> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  FName local_res18 [2];
  TArrayView<std::nullptr_t,int> local_78;
  code *local_68;
  longlong **local_60;
  longlong *local_58;
  FImageOverlappedAccumulator *local_50;
  TArray<FFloat16Color,TSizedDefaultAllocator<64>_> *local_48;
  
  FVar7 = StatPtr_STAT_FetchFinalPixelData16bit;
  if (StatPtr_STAT_FetchFinalPixelData16bit ==
      (FThreadSafeStaticStat<FStat_STAT_FetchFinalPixelData16bit>)0x0) {
    pFVar6 = ::FName::FName(local_res18,"STAT_FetchFinalPixelData16bit");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_FetchFinalPixelData16bit>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FetchFinalPixelData16bit,*pFVar6,
                       L"OverlapAccumulator_FetchPixelData16","STATGROUP_MoviePipeline",
                       "STATCAT_Advanced",L"MovieRenderPipeline",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                   ,0x346);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar4 = true;
      goto LAB_14dd814b8;
    }
  }
  bVar4 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_14dd814b8:
  local_res10 = (longlong)(this->PlaneSize).field0_0x0._s_0.X;
  iVar2 = (this->PlaneSize).field0_0x0._s_0.Y;
  TArray<FFloat16Color,TSizedDefaultAllocator<64>_>::SetNumUninitialized
            (param_1,iVar2 * local_res10,Default);
  local_58 = &local_res10;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`FImageOverlappedAccumulator::FetchFinalPixelDataHalfFloat'::__l2::<lambda_1>,void,int>
             ::Call;
  local_60 = &local_58;
  local_78.DataPtr = (void **)0x0;
  local_78.ArrayNum = 0;
  local_50 = this;
  local_48 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar2,1,(TFunctionRef<void___cdecl(int)> *)&local_68,
             (<lambda_1>)local_res8.s.LowPart._0_1_,None,&local_78);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_78.ArrayNum = (int)FVar10.ComparisonIndex.Value;
      local_78._12_4_ = FVar10.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_78.DataPtr = (void **)(ulonglong)local_res8.s.LowPart;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_78);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// FetchFinalPixelDataLinearColor @ 14dd816b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FImageOverlappedAccumulator::FetchFinalPixelDataLinearColor
          (FImageOverlappedAccumulator *this,
          TArray<FLinearColor,TSizedDefaultAllocator<64>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FImageOverlappedAccumulator *this_00;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_FetchFinalPixelData32bit> FVar14;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName FVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  FName FVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  undefined1 auStackY_148 [32];
  FColor_u_0 local_e4;
  FName local_e0;
  FName local_d8;
  longlong local_d0;
  longlong local_c8;
  FName local_c0;
  FImageOverlappedAccumulator *local_b0;
  longlong local_a8;
  longlong local_a0;
  LARGE_INTEGER local_98;
  FStatMessage local_90;
  FName local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_148;
  FVar14 = StatPtr_STAT_FetchFinalPixelData32bit;
  local_b0 = this;
  if (StatPtr_STAT_FetchFinalPixelData32bit ==
      (FThreadSafeStaticStat<FStat_STAT_FetchFinalPixelData32bit>)0x0) {
    pFVar13 = ::FName::FName(&local_80,"STAT_FetchFinalPixelData32bit");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_FetchFinalPixelData32bit>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FetchFinalPixelData32bit,*pFVar13
                        ,L"OverlapAccumulator_FetchPixelData32","STATGROUP_MoviePipeline",
                        "STATCAT_Advanced",L"MovieRenderPipeline",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar15 = *(FName *)FVar14;
  bVar4 = false;
  bVar5 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  bVar10 = false;
  bVar11 = false;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e4._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar4 = false;
      bVar5 = true;
      bVar10 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.ComparisonIndex.Value = FVar15.ComparisonIndex.Value.Value;
        local_d8.Number = FVar15.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d8,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                   ,0x35d);
        bVar4 = true;
        bVar5 = true;
        bVar10 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_e0 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar10 = true;
      goto LAB_14dd81832;
    }
  }
  bVar5 = bVar11;
  bVar4 = bVar10;
  bVar10 = false;
  FVar15 = local_c0;
LAB_14dd81832:
  iVar16 = (this->PlaneSize).field0_0x0._s_0.Y;
  iVar21 = (this->PlaneSize).field0_0x0._s_0.X;
  lVar18 = (longlong)iVar21;
  TArray<FLinearColor,TSizedDefaultAllocator<64>_>::SetNumUninitialized
            (param_1,(longlong)(iVar16 * iVar21),Default);
  uVar7 = _UNK_150689648;
  uVar6 = ___xmm_3f800000000000000000000000000000;
  iVar21 = 0;
  local_c8 = (longlong)iVar16;
  local_a8 = lVar18;
  if (0 < iVar16) {
    lVar20 = lVar18 << 4;
    local_e0.ComparisonIndex.Value = 0;
    local_e0.Number = 0;
    local_d0 = 0;
    local_a0 = lVar20;
    do {
      this_00 = local_b0;
      iVar16 = 0;
      lVar17 = local_d0;
      FVar19 = local_e0;
      lVar22 = lVar18;
      if (0 < lVar18) {
        do {
          local_78 = uVar6;
          uStack_70 = uVar7;
          FetchFullImageValue(this_00,(float *)&local_78,iVar16,iVar21);
          uVar9 = uStack_70;
          uVar8 = local_78;
          uVar12 = 0;
          if ((longlong)FVar19 < param_1->ArrayNum) {
            uVar12 = FVar19.Number >> 0x1f ^ 1;
          }
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar16 = iVar16 + 1;
          pFVar2 = (param_1->AllocatorInstance).Data + lVar17;
          *(undefined8 *)pFVar2 = uVar8;
          *(undefined8 *)(pFVar2 + 8) = uVar9;
          lVar22 = lVar22 + -1;
          lVar17 = lVar17 + 0x10;
          FVar19 = (FName)((longlong)FVar19 + 1);
          lVar20 = local_a0;
          lVar18 = local_a8;
        } while (lVar22 != 0);
      }
      local_e0 = (FName)((longlong)local_e0 + lVar18);
      local_d0 = local_d0 + lVar20;
      iVar21 = iVar21 + 1;
      local_c8 = local_c8 + -1;
    } while (local_c8 != 0);
    local_c8 = 0;
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar10) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_90.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_90.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_98);
      local_90.StatData.Pad[4] = '\0';
      local_90.StatData.Pad[5] = '\0';
      local_90.StatData.Pad[6] = '\0';
      local_90.StatData.Pad[7] = '\0';
      local_90.StatData.Pad[0] = local_98.s.LowPart._0_1_;
      local_90.StatData.Pad[1] = local_98.s.LowPart._1_1_;
      local_90.StatData.Pad[2] = local_98.s.LowPart._2_1_;
      local_90.StatData.Pad[3] = local_98.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_90);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// FetchFullImageValue @ 14dd81f20

void __thiscall
FImageOverlappedAccumulator::FetchFullImageValue
          (FImageOverlappedAccumulator *this,float *param_1,int param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar9;
  
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 1.0;
  lVar6 = (longlong)(this->PlaneSize).field0_0x0._s_0.X * (longlong)param_3 + (longlong)param_2;
  uVar5 = 0;
  if (lVar6 < (this->WeightPlane).ChannelData.ArrayNum) {
    uVar5 = (uint)((ulonglong)lVar6 >> 0x3f) ^ 1;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar3 = __real_3f800000;
  fVar9 = *(float *)((this->WeightPlane).ChannelData.AllocatorInstance.Data + lVar6 * 4);
  lVar6 = 0;
  if (fVar9 <= __real_38d1b717) {
    fVar9 = __real_38d1b717;
  }
  fVar9 = __real_3f800000 / fVar9;
  if (0 < this->NumChannels) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if (lVar6 < (this->ChannelPlanes).ArrayNum) {
        uVar5 = (uint)((ulonglong)lVar6 >> 0x3f) ^ 1;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->ChannelPlanes).AllocatorInstance.Data;
      lVar8 = (longlong)(this->PlaneSize).field0_0x0._s_0.X * (longlong)param_3 + (longlong)param_2;
      uVar5 = 0;
      if (lVar8 < *(longlong *)(pFVar1 + lVar7 + 8)) {
        uVar5 = (uint)((ulonglong)lVar8 >> 0x3f) ^ 1;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = pFVar1 + lVar7;
      lVar7 = lVar7 + 0x20;
      param_1[lVar6] = fVar9 * *(float *)(*(longlong *)pFVar1 + lVar8 * 4);
      lVar6 = lVar6 + 1;
    } while (lVar6 < this->NumChannels);
  }
  if (this->AccumulationGamma != fVar3) {
    __vdecl_powf4();
    *param_1 = extraout_XMM0_Da;
    param_1[1] = extraout_XMM0_Db;
    param_1[2] = extraout_XMM0_Dc;
    param_1[3] = extraout_XMM0_Dd;
  }
  return;
}

// InitMemory @ 14dd8ee90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FImageOverlappedAccumulator::InitMemory
          (FImageOverlappedAccumulator *this,TIntPoint<int> param_1,int param_2)

{
  long64 *plVar1;
  int *piVar2;
  TArray<FImageOverlappedPlane,TSizedDefaultAllocator<64>_> *this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_InitMemory> FVar9;
  long64 lVar10;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  ulong64 uVar14;
  longlong lVar15;
  FName local_res8;
  TIntPoint<int>_u_0 local_res10;
  FColor_u_0 local_res18 [2];
  LARGE_INTEGER local_res20;
  FName local_98;
  FName local_90;
  FStatMessage local_80;
  TArrayView<std::nullptr_t,int> local_70;
  code *local_60;
  TIntPoint<int>_u_0 *local_58;
  
  uVar14 = (ulong64)param_2;
  FVar9 = StatPtr_STAT_InitMemory;
  local_res10 = param_1.field0_0x0;
  if (StatPtr_STAT_InitMemory == (FThreadSafeStaticStat<FStat_STAT_InitMemory>)0x0) {
    pFVar8 = ::FName::FName(&local_98,"STAT_InitMemory");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_InitMemory>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitMemory,*pFVar8,
                       L"OverlapAccumulator_InitMemory","STATGROUP_MoviePipeline","STATCAT_Advanced"
                       ,L"MovieRenderPipeline",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar12.Value;
        local_res8.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                   ,0x160);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar12.Value;
      local_res20.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      goto LAB_14dd8efef;
    }
  }
  bVar5 = false;
  FVar13 = local_90;
LAB_14dd8efef:
  this_00 = &this->ChannelPlanes;
  (this->PlaneSize).field0_0x0._s_0.X = param_1.field0_0x0._0_4_;
  plVar1 = &(this->ChannelPlanes).ArrayNum;
  (this->PlaneSize).field0_0x0._s_0.Y = local_res10._s_0.Y;
  this->NumChannels = param_2;
  lVar15 = *plVar1;
  if (lVar15 < (longlong)uVar14) {
    lVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                       (0x20,8,uVar14 - lVar15,&this_00->AllocatorInstance,plVar1,
                        &(this->ChannelPlanes).ArrayMax);
    DefaultConstructItems<FImageOverlappedPlane,__int64>
              ((this_00->AllocatorInstance).Data + lVar10 * 0x20,uVar14 - lVar15);
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar14);
    }
    if ((longlong)uVar14 < lVar15) {
      lVar15 = lVar15 - uVar14;
      if ((((uint)(param_2 >> 0x1f) >> 0x1f ^ 1) & ((uint)((ulonglong)lVar15 >> 0x3f) ^ 1)) == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (lVar15 != 0) {
        TArray<FImageOverlappedPlane,TSizedDefaultAllocator<64>_>::RemoveAtImpl
                  (this_00,uVar14,lVar15);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (0x20,8,&this_00->AllocatorInstance,*plVar1,&(this->ChannelPlanes).ArrayMax);
      }
    }
  }
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`FImageOverlappedAccumulator::InitMemory'::__l2::<lambda_1>,void,int>
             ::Call;
  local_58 = &local_res10;
  local_70.DataPtr = (void **)0x0;
  local_70.ArrayNum = 0;
  local_res10 = (TIntPoint<int>_u_0)this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",this->NumChannels + 1,1,
             (TFunctionRef<void___cdecl(int)> *)&local_60,(<lambda_1>)local_res18[0]._0_1_,None,
             &local_70);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_80.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_80.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_80);
      piVar2 = &this_01->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// Reset @ 14dd9b690

void __thiscall FImageOverlappedAccumulator::Reset(FImageOverlappedAccumulator *this)

{
  if (CpuChannel->Enabled < 0) {
    (this->PlaneSize).field0_0x0 = (TIntPoint<int>_u_0)0x0;
    this->NumChannels = 0;
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId395,"MoviePipeline::ResetAccumulator",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
             ,0x18b);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId395);
  (this->PlaneSize).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->NumChannels = 0;
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// ZeroPlanes @ 14dda9ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FImageOverlappedAccumulator::ZeroPlanes(FImageOverlappedAccumulator *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_ZeroPlanes> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar9;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_78;
  FName local_70;
  FStatMessage local_60;
  TArrayView<std::nullptr_t,int> local_50;
  code *local_40;
  FName *local_38;
  
  FVar8 = StatPtr_STAT_ZeroPlanes;
  if (StatPtr_STAT_ZeroPlanes == (FThreadSafeStaticStat<FStat_STAT_ZeroPlanes>)0x0) {
    pFVar7 = ::FName::FName(&local_78,"STAT_ZeroPlanes");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_ZeroPlanes>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ZeroPlanes,*pFVar7,
                       L"OverlapAccumulator_ZeroPlanes","STATGROUP_MoviePipeline","STATCAT_Advanced"
                       ,L"MovieRenderPipeline",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  if ((FVar9.ComparisonIndex.Value.Value != 0) || (FVar9.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar9.ComparisonIndex.Value.Value;
        local_res10.Number = FVar9.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                   ,0x177);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar9;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar4 = true;
      goto LAB_14ddaa01f;
    }
  }
  bVar4 = false;
  FVar9 = local_70;
LAB_14ddaa01f:
  if ((this->ChannelPlanes).ArrayNum != (longlong)this->NumChannels) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelPlanes.Num() == NumChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                       ,0x178,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`FImageOverlappedAccumulator::ZeroPlanes'::__l2::<lambda_1>,void,int>
             ::Call;
  local_38 = &local_res18;
  local_50.DataPtr = (void **)0x0;
  local_50.ArrayNum = 0;
  local_res18 = (FName)this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",this->NumChannels + 1,1,
             (TFunctionRef<void___cdecl(int)> *)&local_40,(<lambda_1>)local_res8[0]._0_1_,None,
             &local_50);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60.NameAndInfo.Index = FVar9.ComparisonIndex.Value;
      local_60.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_60.StatData.Pad[4] = '\0';
      local_60.StatData.Pad[5] = '\0';
      local_60.StatData.Pad[6] = '\0';
      local_60.StatData.Pad[7] = '\0';
      local_60.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_60.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_60.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_60.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_60);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

