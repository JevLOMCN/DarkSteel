// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 5

// operator() @ 1435e9d10

void __thiscall
`UE::Geometry::FUVPacker::StandardPack'::__l9::<lambda_1>::operator()
          (void *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  double *pdVar5;
  code *pcVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  float *pfVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res10 [8];
  int local_res18;
  float local_res20;
  float fStackX_24;
  undefined1 local_118 [8];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_110;
  int iStack_108;
  uint uStack_104;
  undefined1 *local_100;
  undefined4 uStack_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_108 = 0;
  uStack_104 = 1;
  local_f0 = 0;
  iStack_f4 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar10 = (longlong)iStack_108;
      local_f0 = local_f0 + 0x20;
      iStack_108 = iStack_108 + 1;
      iStack_f4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_108) goto LAB_1435e9dbd;
      uVar12 = puVar14[lVar10 + 1];
    }
    uStack_104 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_104 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iStack_f4 = local_res18 + -1 + local_f0;
    if (iVar3 < iStack_f4) {
      iStack_f4 = iVar3;
    }
  }
LAB_1435e9dbd:
  uVar12 = *(uint *)&(param_1->Elements).field_0x28;
  uVar15 = uVar12 & 0xffffffe0;
  iStack_e8 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_f8 = 0xffffffff;
  TStack_d8._padding_ = CONCAT44(uStack_104,iStack_108);
  TStack_d8.CurrentBitIndex = iStack_f4;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar12 >> 5;
  TStack_d8._28_4_ = iStack_f4;
  TStack_d8.BaseBitIndex = local_f0;
  uStack_b8 = CONCAT44(uStack_e4,iStack_e8);
  local_110 = param_1;
  local_100 = puVar1;
  iStack_ec = iStack_f4;
  local_e0 = param_1;
  TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1435e9f20;
      uVar12 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_1435e9f20:
  while( true ) {
    pTVar7 = local_e0;
    if (*(int *)&(local_e0->Elements).field_0x8 - *(int *)&(local_e0->Elements).field_0x34 !=
        (int)uStack_b8) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_d8.CurrentBitIndex == uVar12) &&
        (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    iVar3 = *(int *)(*(longlong *)&pTVar7->Elements + (longlong)TStack_d8.CurrentBitIndex * 0xc);
    if (-1 < iVar3) {
      pfVar9 = (float *)(**(code **)(*(longlong *)**(undefined8 **)this + 0x20))
                                  ((longlong *)**(undefined8 **)this,local_118,iVar3);
      lVar10 = *(longlong *)((longlong)this + 8);
      pdVar5 = *(double **)((longlong)this + 0x10);
      local_res20 = (float)((pdVar5[3] * *(double *)(lVar10 + 0x60) +
                            pdVar5[1] * *(double *)(lVar10 + 0x58)) * (double)pfVar9[1] +
                            (pdVar5[2] * *(double *)(lVar10 + 0x60) +
                            *pdVar5 * *(double *)(lVar10 + 0x58)) * (double)*pfVar9 +
                           **(double **)((longlong)this + 0x18));
      fStackX_24 = (float)((*(double *)(lVar10 + 0x70) * pdVar5[3] +
                           *(double *)(lVar10 + 0x68) * pdVar5[1]) * (double)pfVar9[1] +
                           (*(double *)(lVar10 + 0x70) * pdVar5[2] +
                           *(double *)(lVar10 + 0x68) * *pdVar5) * (double)*pfVar9 +
                          (*(double **)((longlong)this + 0x18))[1]);
      (**(code **)(*(longlong *)**(undefined8 **)this + 0x28))
                ((longlong *)**(undefined8 **)this,iVar3,CONCAT44(fStackX_24,local_res20));
    }
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
  }
  return;
}

// operator() @ 1435eb9e0

void __thiscall
`UE::Geometry::FUVPacker::StandardPack'::__l9::<lambda_2>::operator()
          (void *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  double *pdVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  float *pfVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  double dVar22;
  undefined1 local_res8 [8];
  int local_res10;
  float local_res18;
  float fStackX_1c;
  double local_res20;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  undefined1 local_118 [36];
  undefined4 local_f4;
  
  pdVar7 = *(double **)((longlong)this + 0x10);
  dVar9 = pdVar7[3] * *pdVar7 - pdVar7[1] * pdVar7[2];
  if (((double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
       __real_3cb0000000000000) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_8115802994596904539>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MatrixTypes.h"
                          ,0x1a5,"TMathUtil<RealType>::Abs(Det) >= TMathUtil<RealType>::Epsilon"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  puVar1 = &(param_1->Elements).field_0x10;
  iVar6 = *(int *)&(param_1->Elements).field_0x28;
  iVar17 = 0;
  uVar12 = 1;
  iVar19 = 0;
  dVar9 = __real_3ff0000000000000 / dVar9;
  local_res20 = dVar9 * pdVar7[2];
  dVar3 = pdVar7[3];
  dVar4 = pdVar7[1];
  dVar5 = *pdVar7;
  iVar13 = 0;
  if (iVar6 != 0) {
    puVar20 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    while (uVar16 == 0) {
      lVar15 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      iVar13 = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1435ebb40;
      uVar16 = puVar20[lVar15 + 1];
    }
    uVar12 = -uVar16 & uVar16;
    uVar2 = (ulonglong)uVar12 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res10 = (int)lVar15;
    iVar13 = local_res10 + -1 + iVar19;
    if (iVar6 < iVar13) {
      iVar13 = iVar6;
    }
  }
LAB_1435ebb40:
  uVar16 = *(uint *)&(param_1->Elements).field_0x28;
  uVar21 = uVar16 & 0xffffffe0;
  TStack_140._padding_ = CONCAT44(uVar12,iVar17);
  TStack_140.CurrentBitIndex = iVar13;
  TStack_140.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_140._28_4_ = local_f4;
  TStack_140.BaseBitIndex = iVar19;
  uStack_120 = CONCAT44(uStack_14c,
                        *(int *)&(param_1->Elements).field_0x8 -
                        *(int *)&(param_1->Elements).field_0x34);
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar6 < (int)uVar16)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar12 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar16 != uVar12) {
    puVar18 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      lVar15 = (longlong)iVar17;
      uVar21 = uVar21 + 0x20;
      iVar17 = iVar17 + 1;
      uVar16 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_1435ebc90;
      uVar16 = *(uint *)(puVar18 + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar16 = (int)lVar15 + -1 + uVar21;
    if ((int)uVar12 < (int)uVar16) {
      uVar16 = uVar12;
    }
  }
LAB_1435ebc90:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_120) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_140.CurrentBitIndex == uVar16) &&
       (TStack_140.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    iVar6 = *(int *)(*(longlong *)&param_1->Elements + (longlong)TStack_140.CurrentBitIndex * 0xc);
    if (-1 < iVar6) {
      pfVar14 = (float *)(**(code **)(*(longlong *)**(undefined8 **)this + 0x20))
                                   ((longlong *)**(undefined8 **)this,local_118,iVar6);
      lVar15 = *(longlong *)((longlong)this + 8);
      pdVar7 = *(double **)((longlong)this + 0x10);
      dVar10 = (pdVar7[3] * *(double *)(lVar15 + 0x60) + pdVar7[1] * *(double *)(lVar15 + 0x58)) *
               (double)pfVar14[1] +
               (pdVar7[2] * *(double *)(lVar15 + 0x60) + *pdVar7 * *(double *)(lVar15 + 0x58)) *
               (double)*pfVar14 + **(double **)((longlong)this + 0x18);
      dVar22 = (*(double *)(lVar15 + 0x70) * pdVar7[3] + *(double *)(lVar15 + 0x68) * pdVar7[1]) *
               (double)pfVar14[1] +
               (*(double *)(lVar15 + 0x70) * pdVar7[2] + *(double *)(lVar15 + 0x68) * *pdVar7) *
               (double)*pfVar14 + (*(double **)((longlong)this + 0x18))[1];
      local_res18 = (float)(dVar10 * dVar9 * dVar3 - dVar22 * dVar9 * dVar4);
      fStackX_1c = (float)(dVar22 * dVar9 * dVar5 - dVar10 * local_res20);
      (**(code **)(*(longlong *)**(undefined8 **)this + 0x28))
                ((longlong *)**(undefined8 **)this,iVar6,CONCAT44(fStackX_1c,local_res18));
    }
    TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
  }
  return;
}

// GetIslandStats @ 143606b20

void __thiscall
UE::Geometry::FUVPacker::GetIslandStats
          (FUVPacker *this,IUVMeshView *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TAxisAlignedBox2<double> *param_3,double *param_4,double *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [12];
  double *pdVar14;
  float *pfVar15;
  undefined4 *puVar16;
  FScriptContainerElement *pFVar17;
  bool bVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 in_XMM3 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 local_1b7 [7];
  double local_1b0;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  undefined1 local_198 [8];
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  double *local_180;
  double local_178;
  FUVPacker *local_170;
  double *local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  double local_150;
  double dStack_148;
  undefined1 local_140 [40];
  double local_118;
  double local_100;
  double local_e8;
  
  local_168 = param_4;
  local_180 = param_5;
  bVar18 = -1 < CpuChannel->Enabled;
  local_170 = this;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1009,"UVPacker_GetIslandStats",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Parameterization\\UVPacking.cpp"
               ,0x3f1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1009);
  }
  (param_3->Min).field0_0x0._s_0.X = 1.7976931348623157e+308;
  (param_3->Min).field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (param_3->Max).field0_0x0._s_0.X = -1.7976931348623157e+308;
  (param_3->Max).field0_0x0._s_0.Y = -1.7976931348623157e+308;
  *param_5 = 0.0;
  pFVar17 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  local_1b0 = 0.0;
  pFVar1 = pFVar17 + (longlong)iVar2 * 4;
  dVar6 = 0.0;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1b7);
    }
    if (pFVar17 == pFVar1) break;
    uVar3 = *(undefined4 *)pFVar17;
    (**(code **)((longlong)*param_1 + 8))(param_1,&local_190,uVar3);
    (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_1a8,uVar3);
    if (((local_1a8 < 0) || (local_1a4 < 0)) || (local_1a0 < 0)) {
      pFVar17 = pFVar17 + 4;
    }
    else {
      pdVar14 = (double *)(**(code **)((longlong)*param_1 + 0x18))(param_1,local_140,local_190);
      local_150 = *pdVar14;
      dStack_148 = pdVar14[1];
      local_118 = pdVar14[2];
      pfVar15 = (float *)(**(code **)((longlong)*param_1 + 0x20))(param_1,local_198,local_1a8);
      dVar8 = (double)*pfVar15;
      dVar19 = (double)pfVar15[1];
      if (dVar8 < (param_3->Min).field0_0x0._s_0.X) {
        (param_3->Min).field0_0x0._s_0.X = dVar8;
      }
      if ((param_3->Max).field0_0x0._s_0.X <= dVar8 && dVar8 != (param_3->Max).field0_0x0._s_0.X) {
        (param_3->Max).field0_0x0._s_0.X = dVar8;
      }
      if (dVar19 < (param_3->Min).field0_0x0._s_0.Y) {
        (param_3->Min).field0_0x0._s_0.Y = dVar19;
      }
      pdVar14 = &(param_3->Max).field0_0x0._s_0.Y;
      if (*pdVar14 <= dVar19 && dVar19 != *pdVar14) {
        (param_3->Max).field0_0x0._s_0.Y = dVar19;
      }
      puVar16 = (undefined4 *)(**(code **)((longlong)*param_1 + 0x18))(param_1,local_140,local_18c);
      local_160 = *puVar16;
      uStack_15c = puVar16[1];
      uStack_158 = puVar16[2];
      uStack_154 = puVar16[3];
      local_100 = *(double *)(puVar16 + 4);
      pfVar15 = (float *)(**(code **)((longlong)*param_1 + 0x20))(param_1,local_198,local_1a4);
      dVar7 = (double)*pfVar15;
      dVar5 = (double)pfVar15[1];
      if (dVar7 < (param_3->Min).field0_0x0._s_0.X) {
        (param_3->Min).field0_0x0._s_0.X = dVar7;
      }
      if ((param_3->Max).field0_0x0._s_0.X <= dVar7 && dVar7 != (param_3->Max).field0_0x0._s_0.X) {
        (param_3->Max).field0_0x0._s_0.X = dVar7;
      }
      if (dVar5 < (param_3->Min).field0_0x0._s_0.Y) {
        (param_3->Min).field0_0x0._s_0.Y = dVar5;
      }
      pdVar14 = &(param_3->Max).field0_0x0._s_0.Y;
      if (*pdVar14 <= dVar5 && dVar5 != *pdVar14) {
        (param_3->Max).field0_0x0._s_0.Y = dVar5;
      }
      pdVar14 = (double *)(**(code **)((longlong)*param_1 + 0x18))(param_1,local_140,local_188);
      local_e8 = pdVar14[2];
      dVar12 = *pdVar14;
      dVar9 = pdVar14[1];
      pfVar15 = (float *)(**(code **)((longlong)*param_1 + 0x20))(param_1,local_198,local_1a0);
      dVar27 = (double)*pfVar15;
      dVar24 = (double)pfVar15[1];
      if (dVar27 < (param_3->Min).field0_0x0._s_0.X) {
        (param_3->Min).field0_0x0._s_0.X = dVar27;
      }
      if ((param_3->Max).field0_0x0._s_0.X <= dVar27 && dVar27 != (param_3->Max).field0_0x0._s_0.X)
      {
        (param_3->Max).field0_0x0._s_0.X = dVar27;
      }
      if (dVar24 < (param_3->Min).field0_0x0._s_0.Y) {
        (param_3->Min).field0_0x0._s_0.Y = dVar24;
      }
      pdVar14 = &(param_3->Max).field0_0x0._s_0.Y;
      if (*pdVar14 <= dVar24 && dVar24 != *pdVar14) {
        (param_3->Max).field0_0x0._s_0.Y = dVar24;
      }
      dVar11 = dVar24 - dVar19;
      dVar19 = dVar5 - dVar19;
      dVar10 = dVar27 - dVar8;
      dVar8 = dVar7 - dVar8;
      auVar20._0_8_ = dVar8 * dVar8;
      auVar20._8_8_ = 0;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = dVar11 * dVar11 + dVar10 * dVar10;
      auVar25 = sqrtpd(in_XMM3,auVar21);
      auVar22._8_8_ = 0;
      auVar22._0_8_ = dVar19 * dVar19 + auVar20._0_8_;
      auVar21 = sqrtpd(auVar20,auVar22);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (dVar24 - dVar5) * (dVar24 - dVar5) + (dVar27 - dVar7) * (dVar27 - dVar7);
      auVar22 = sqrtpd(auVar21,auVar4);
      dVar7 = dVar12 - local_150;
      auVar13._4_8_ = auVar22._8_8_;
      auVar13._0_4_ = (int)((ulonglong)local_150 >> 0x20);
      auVar23._0_8_ = auVar13._0_8_ << 0x20;
      auVar23._8_4_ = SUB84(dStack_148,0);
      auVar23._12_4_ = (int)((ulonglong)dStack_148 >> 0x20);
      local_178 = dVar6 + auVar25._0_8_ + auVar21._0_8_ + auVar22._0_8_;
      auVar25._8_4_ = uStack_158;
      auVar25._0_8_ = CONCAT44(uStack_15c,local_160);
      auVar25._12_4_ = uStack_154;
      dVar6 = (double)CONCAT44(uStack_15c,local_160) - local_150;
      dVar12 = dVar12 - (double)CONCAT44(uStack_15c,local_160);
      auVar26._0_8_ = auVar25._8_8_;
      auVar26._8_4_ = uStack_158;
      auVar26._12_4_ = uStack_154;
      dVar5 = dVar9 - auVar23._8_8_;
      in_XMM3._8_8_ = auVar26._8_8_;
      dVar24 = auVar26._0_8_ - auVar23._8_8_;
      dVar9 = dVar9 - auVar26._0_8_;
      in_XMM3._0_8_ = dVar24 * dVar24;
      local_1b0 = local_1b0 +
                  SQRT(dVar5 * dVar5 + dVar7 * dVar7 +
                       (local_e8 - local_118) * (local_e8 - local_118)) +
                  SQRT(dVar6 * dVar6 + in_XMM3._0_8_ +
                       (local_100 - local_118) * (local_100 - local_118)) +
                  SQRT(dVar9 * dVar9 + dVar12 * dVar12 +
                       (local_e8 - local_100) * (local_e8 - local_100));
      pFVar17 = pFVar17 + 4;
      dVar6 = dVar11 * dVar8 - dVar10 * dVar19;
      *local_180 = (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                   __real_3fe0000000000000 + *local_180;
      dVar6 = local_178;
    }
  }
  dVar19 = __real_3ff0000000000000;
  if ((local_170->bScaleIslandsByWorldSpaceTexelRatio != false) &&
     (__real_3e45798ee2308c3a <= dVar6)) {
    dVar19 = local_1b0 / dVar6;
  }
  *local_168 = dVar19;
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// StackPack @ 14361b590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FUVPacker::StackPack
          (FUVPacker *this,IUVMeshView *param_1,int param_2,
          TFunctionRef<void___cdecl(int,TArray<int,TSizedDefaultAllocator<32>_>_&)> *param_3)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 uVar16;
  int iVar17;
  float *pfVar18;
  byte bVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  void *pvVar25;
  uint *puVar26;
  ulonglong uVar27;
  uint uVar28;
  bool bVar29;
  double dVar30;
  double dVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auStackY_2e8 [32];
  undefined1 local_2b7;
  undefined1 local_2b6 [6];
  ForAnyElementType local_2b0;
  int local_2a8 [4];
  double local_298;
  ForAnyElementType local_290;
  int local_288 [2];
  int local_280;
  int local_27c;
  int local_278 [2];
  uint local_270 [2];
  uint local_268 [2];
  longlong local_260;
  TFunctionRef<void___cdecl(int,TArray<int,TSizedDefaultAllocator<32>_>_&)> *local_258;
  void *local_250;
  ulonglong local_248;
  double local_240;
  float local_238;
  float fStack_234;
  TArray<int,TSizedDefaultAllocator<32>_> local_230;
  TVector2<double>_u_0 local_220;
  double local_210;
  double dStack_208;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  longlong *local_1e8;
  int iStack_1e0;
  uint uStack_1dc;
  TBitArray<FDefaultBitArrayAllocator> *local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  int local_1c8;
  undefined4 uStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  longlong *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b0;
  undefined8 uStack_190;
  double local_188;
  undefined1 local_180 [8];
  double local_178;
  double dStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_13c;
  undefined1 local_138 [32];
  uint *local_118;
  uint local_110;
  undefined4 local_10c;
  undefined4 local_108;
  uint local_104;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  lVar23 = (longlong)param_2;
  bVar29 = -1 < CpuChannel->Enabled;
  local_258 = param_3;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId939,"UVPacker_StackPack",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Parameterization\\UVPacking.cpp"
               ,0x3ab);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId939);
  }
  uVar24 = 0;
  fVar3 = this->GutterSize;
  local_290.Data = (FScriptContainerElement *)0x0;
  local_288[0] = 0;
  local_288[1] = 0;
  local_298 = (double)this->TextureResolution;
  if (param_2 < 1) {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
    }
    local_2b0.Data = (FScriptContainerElement *)0x0;
    local_2a8[0] = 0;
    local_2a8[1] = 0;
  }
  else {
    iVar17 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x20,8,param_2,&local_290,local_288,local_288 + 1);
    DefaultConstructItems<UE::Geometry::TAxisAlignedBox2<double>,int>
              (local_290.Data + (longlong)iVar17 * 0x20,param_2);
    local_2b0.Data = (FScriptContainerElement *)0x0;
    local_2a8[0] = 0;
    local_2a8[1] = 0;
    iVar17 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,param_2,&local_2b0,local_2a8,local_2a8 + 1);
    memset(local_2b0.Data + (longlong)iVar17 * 8,0,lVar23 << 3);
  }
  dVar10 = _UNK_150a9e648;
  dVar9 = ___xmm_7fefffffffffffff7fefffffffffffff;
  dVar8 = _UNK_1508ffb58;
  dVar7 = ___xmm_ffefffffffffffffffefffffffffffff;
  uVar32 = 0;
  uVar33 = 0;
  dVar6 = 0.0;
  dVar31 = 0.0;
  uVar20 = uVar24;
  uVar21 = uVar24;
  local_260 = lVar23;
  if (0 < param_2) {
    do {
      uVar28 = (uint)uVar20;
      local_230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_230.ArrayNum = 0;
      local_230.ArrayMax = 0;
      local_270[0] = uVar28;
      (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_270,&local_230);
      local_220._s_0.X = dVar9;
      local_220._s_0.Y = dVar10;
      local_210 = dVar7;
      dStack_208 = dVar8;
      GetIslandStats(this,param_1,&local_230,(TAxisAlignedBox2<double> *)&local_220._s_0,&local_240,
                     &local_188);
      dVar5 = dStack_208;
      dVar30 = local_210;
      uVar13 = local_220._s_0.Y;
      uVar12 = local_220._s_0.X;
      uVar22 = 0;
      if ((int)uVar28 < local_288[0]) {
        uVar22 = ~uVar28 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
      dVar11 = local_240;
      *(undefined8 *)(local_290.Data + uVar21) = uVar12;
      *(undefined8 *)(local_290.Data + uVar21 + 8) = uVar13;
      *(double *)(local_290.Data + uVar21 + 0x10) = dVar30;
      *(double *)(local_290.Data + uVar21 + 0x10 + 8) = dVar5;
      uVar22 = 0;
      if ((int)uVar28 < local_2a8[0]) {
        uVar22 = ~uVar28 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
      dVar30 = dVar30 - (double)uVar12;
      dVar5 = dVar5 - (double)uVar13;
      *(double *)(local_2b0.Data + uVar24 * 8) = dVar11;
      if (dVar30 <= 0.0) {
        dVar30 = 0.0;
      }
      if (dVar5 <= 0.0) {
        dVar5 = 0.0;
      }
      dVar30 = dVar30 * dVar11;
      if (dVar30 <= (double)CONCAT44(uVar33,uVar32)) {
        dVar30 = (double)CONCAT44(uVar33,uVar32);
      }
      dVar6 = dVar5 * dVar11;
      if (dVar5 * dVar11 <= dVar31) {
        dVar6 = dVar31;
      }
      uVar32 = SUB84(dVar30,0);
      uVar33 = (undefined4)((ulonglong)dVar30 >> 0x20);
      if (local_230.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_230.AllocatorInstance.Data);
      }
      uVar24 = uVar24 + 1;
      uVar20 = (ulonglong)(uVar28 + 1);
      uVar21 = uVar21 + 0x20;
      param_3 = local_258;
      dVar31 = dVar6;
    } while ((longlong)uVar24 < lVar23);
  }
  uVar24 = 0;
  local_138._0_8_ = (FScriptContainerElement *)0x0;
  local_138._8_4_ = 0;
  local_138._12_4_ = 0;
  local_118 = (uint *)0x0;
  local_110 = 0;
  local_10c = 0x80;
  local_108 = 0xffffffff;
  local_104 = 0;
  local_f8 = (ForElementType<FSetElementId>)0x0;
  local_f0 = 0;
  local_2a8[2] = 0;
  dVar31 = __real_3ff0000000000000 - ((double)fVar3 + (double)fVar3) / local_298;
  dVar6 = dVar31 / dVar6;
  dVar31 = dVar31 / (double)CONCAT44(uVar33,uVar32);
  if (dVar31 <= dVar6) {
    dVar6 = dVar31;
  }
  if (0 < local_260) {
    local_298 = 0.0;
    uVar20 = uVar24;
    uVar21 = uVar24;
    uVar27 = uVar24;
    do {
      if ((int)uVar24 != (int)uVar20) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_138);
        local_138._8_4_ = 0;
        if ((int)local_138._12_4_ < 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
        }
        local_108 = 0xffffffff;
        local_104 = 0;
        local_110 = 0;
      }
      uVar28 = (uint)uVar27;
      uVar22 = 0;
      if ((int)uVar28 < local_288[0]) {
        uVar22 = ~uVar28 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
      local_178 = *(double *)(local_290.Data + uVar21);
      dStack_170 = *(double *)(local_290.Data + uVar21 + 8);
      pFVar2 = local_290.Data + uVar21 + 0x10;
      local_168 = *(undefined4 *)pFVar2;
      uStack_164 = *(undefined4 *)(pFVar2 + 4);
      uStack_160 = *(undefined4 *)(pFVar2 + 8);
      uStack_15c = *(undefined4 *)(pFVar2 + 0xc);
      local_250 = (void *)0x0;
      local_248 = 0;
      local_268[0] = uVar28;
      (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_268);
      iVar17 = (int)local_248;
      uVar24 = (ulonglong)(int)local_248;
      pvVar1 = (void *)((longlong)local_250 + uVar24 * 4);
      pvVar25 = local_250;
      while( true ) {
        if ((int)uVar24 != iVar17) {
          local_2b7 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_2b7)
          ;
        }
        if (pvVar25 == pvVar1) break;
        (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_280);
        if (((-1 < local_280) && (-1 < local_27c)) && (-1 < local_278[0])) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_138,&local_200,
                     (bool *)&local_280);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_138,&local_1fc,
                     (bool *)&local_27c);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_138,&local_1f8,
                     (bool *)local_278);
        }
        uVar24 = local_248 & 0xffffffff;
        pvVar25 = (void *)((longlong)pvVar25 + 4);
      }
      uVar22 = 0;
      if ((int)uVar28 < local_2a8[0]) {
        uVar22 = ~uVar28 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
      uVar22 = local_110;
      iStack_1e0 = 0;
      local_1c8 = 0;
      uStack_1dc = 1;
      dVar31 = *(double *)(local_2b0.Data + (longlong)local_298 * 8);
      uStack_1cc = 0;
      if (local_110 != 0) {
        puVar26 = (uint *)(local_138 + 0x10);
        if (local_118 != (uint *)0x0) {
          puVar26 = local_118;
        }
        uVar28 = *puVar26;
        while (uVar28 == 0) {
          lVar23 = (longlong)iStack_1e0;
          local_1c8 = local_1c8 + 0x20;
          iStack_1e0 = iStack_1e0 + 1;
          uStack_1cc = local_110;
          if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1e0)
          goto LAB_14361bc51;
          uVar28 = puVar26[lVar23 + 1];
        }
        uStack_1dc = -uVar28 & uVar28;
        uVar24 = (ulonglong)uStack_1dc * 2 + 1;
        lVar23 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        local_1f4 = (int)lVar23;
        uStack_1cc = local_1c8 + -1 + local_1f4;
        if ((int)local_110 < (int)uStack_1cc) {
          uStack_1cc = local_110;
        }
      }
LAB_14361bc51:
      local_1e8 = (longlong *)local_138;
      uStack_1c4 = local_13c;
      local_1d8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
      uVar28 = local_110 & 0xffffffe0;
      iStack_1c0 = local_138._8_4_ - local_104;
      TStack_1b0._padding_ = CONCAT44(uStack_1dc,iStack_1e0);
      uStack_1d0 = 0xffffffff;
      TStack_1b0.CurrentBitIndex = uStack_1cc;
      TStack_1b0.UnvisitedBitMask = 0xffffffff;
      iVar17 = (int)local_110 >> 5;
      TStack_1b0._28_4_ = local_13c;
      TStack_1b0.BaseBitIndex = local_1c8;
      uStack_190 = CONCAT44(uStack_1bc,iStack_1c0);
      bVar19 = (byte)local_110;
      local_1b8 = local_1e8;
      TStack_1b0.Array = local_1d8;
      if (((int)local_110 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar15)) {
        pcVar4 = (code *)swi(3);
        uVar16 = (*pcVar4)();
        return (bool)uVar16;
      }
      dVar8 = dStack_170;
      dVar7 = local_178;
      if (uVar22 != local_110) {
        puVar26 = (uint *)(local_138 + 0x10);
        if (local_118 != (uint *)0x0) {
          puVar26 = local_118;
        }
        uVar22 = -1 << (bVar19 & 0x1f) & puVar26[iVar17];
        while (uVar22 == 0) {
          lVar23 = (longlong)iVar17;
          uVar28 = uVar28 + 0x20;
          iVar17 = iVar17 + 1;
          uVar22 = local_110;
          if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_14361bd80;
          uVar22 = puVar26[lVar23 + 1];
        }
        uVar24 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
        lVar23 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        local_1f0 = (int)lVar23;
        uVar22 = local_1f0 + -1 + uVar28;
        if ((int)local_110 < (int)uVar22) {
          uVar22 = local_110;
        }
      }
LAB_14361bd80:
      while( true ) {
        plVar14 = local_1b8;
        if ((int)local_1b8[1] - *(int *)((longlong)local_1b8 + 0x34) != (int)uStack_190) {
          local_2b6[0] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2b6);
        }
        if (((TStack_1b0.CurrentBitIndex == uVar22) &&
            (TStack_1b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10))) &&
           (plVar14 == (longlong *)local_138)) break;
        iVar17 = *(int *)(*plVar14 + (longlong)TStack_1b0.CurrentBitIndex * 0xc);
        if (-1 < iVar17) {
          pfVar18 = (float *)(**(code **)((longlong)*param_1 + 0x20))(param_1,local_180,iVar17);
          local_238 = (float)(((double)*pfVar18 - dVar7) * dVar6 * dVar31);
          fStack_234 = (float)(((double)pfVar18[1] - dVar8) * dVar6 * dVar31);
          (**(code **)((longlong)*param_1 + 0x28))(param_1,iVar17);
        }
        TStack_1b0.UnvisitedBitMask = TStack_1b0.UnvisitedBitMask & ~TStack_1b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b0);
      }
      if (local_250 != (void *)0x0) {
        FMemory::Free(local_250);
      }
      uVar21 = uVar21 + 0x20;
      local_2a8[2] = local_2a8[2] + 1;
      uVar27 = (ulonglong)(uint)local_2a8[2];
      local_298 = (double)((longlong)local_298 + 1);
      if (local_260 <= (longlong)local_298) break;
      uVar20 = (ulonglong)local_104;
      uVar24 = (ulonglong)(uint)local_138._8_4_;
      param_3 = local_258;
    } while( true );
  }
  local_f0 = 0;
  if (local_f8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f8);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_138);
  if (local_2b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data);
  }
  if (local_290.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data);
  }
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// StandardPack @ 14361bf50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FUVPacker::StandardPack
          (FUVPacker *this,IUVMeshView *param_1,int param_2,
          TFunctionRef<void___cdecl(int,TArray<int,TSizedDefaultAllocator<32>_>_&)> *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ForAnyElementType FVar8;
  FUVPacker *pFVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  bool bVar21;
  double dVar22;
  double dVar23;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1c7;
  undefined1 local_1c6;
  TArray<UE::InternalUVPacking::FUVIsland,TSizedDefaultAllocator<32>_> local_1c0;
  IUVMeshView *local_1b0;
  uint local_1a8 [2];
  FUVPacker *local_1a0;
  bool local_198 [4];
  bool local_194 [4];
  bool local_190 [8];
  FStandardChartPacker local_188;
  int local_170;
  int local_16c;
  int local_168 [2];
  double local_160;
  double local_158;
  TVector2<double>_u_0 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130 [16];
  double local_120;
  double local_118;
  IUVMeshView **local_110;
  FScriptContainerElement *local_108;
  undefined1 *local_100;
  double *local_f8;
  IUVMeshView **local_f0;
  FScriptContainerElement *local_e8;
  undefined1 *local_e0;
  double *local_d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_c8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  lVar16 = (longlong)param_2;
  bVar21 = -1 < CpuChannel->Enabled;
  local_1b0 = param_1;
  local_1a0 = this;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId837,"UVPacker_StandardPack",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Parameterization\\UVPacking.cpp"
               ,0x345);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId837);
  }
  uVar17 = 0;
  local_188.Mesh = local_1b0;
  local_188.TextureResolution = this->TextureResolution;
  local_188.bPreserveRotation = this->bPreserveRotation;
  local_188.bAllowFlips = this->bAllowFlips;
  local_188.TotalUVArea = 0.0;
  local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c0.ArrayNum = 0;
  local_1c0.ArrayMax = 0;
  if (param_2 < 1) {
    uVar14 = uVar17;
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
    }
  }
  else {
    iVar12 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0xb8,8,param_2,&local_1c0.AllocatorInstance,&local_1c0.ArrayNum,
                        &local_1c0.ArrayMax);
    DefaultConstructItems<UE::InternalUVPacking::FUVIsland,int>
              (local_1c0.AllocatorInstance.Data + (longlong)iVar12 * 0xb8,param_2);
    uVar14 = (ulonglong)(uint)local_1c0.ArrayNum;
  }
  pFVar9 = local_1a0;
  dVar5 = _UNK_150a9e648;
  dVar4 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uVar7 = _UNK_1508ffb58;
  uVar6 = ___xmm_ffefffffffffffffffefffffffffffff;
  uVar20 = uVar17;
  if (0 < param_2) {
    while( true ) {
      uVar15 = (uint)uVar17;
      uVar13 = 0;
      if ((int)uVar15 < (int)uVar14) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        uVar11 = (*pcVar2)();
        return (bool)uVar11;
      }
      FVar8.Data = local_1c0.AllocatorInstance.Data;
      *(uint *)(local_1c0.AllocatorInstance.Data + uVar20) = uVar15 + 1;
      local_1a8[0] = uVar15;
      (**(code **)param_3)
                (*(undefined8 *)&param_3->field_0x8,local_1a8,
                 local_1c0.AllocatorInstance.Data + uVar20 + 8);
      *(undefined8 *)(FVar8.Data + uVar20 + 0x18) = 0x47efffffe0000000;
      *(undefined8 *)(FVar8.Data + uVar20 + 0x20) = 0x47efffffe0000000;
      *(undefined8 *)(FVar8.Data + uVar20 + 0x28) = 0xc7efffffe0000000;
      *(undefined8 *)(FVar8.Data + uVar20 + 0x30) = 0xc7efffffe0000000;
      *(double *)(FVar8.Data + uVar20 + 0x38) = 0.0;
      local_150._s_0.X = dVar4;
      local_150._s_0.Y = dVar5;
      local_140 = uVar6;
      uStack_138 = uVar7;
      GetIslandStats(pFVar9,local_1b0,
                     (TArray<int,TSizedDefaultAllocator<32>_> *)(FVar8.Data + uVar20 + 8),
                     (TAxisAlignedBox2<double> *)&local_150._s_0,
                     (double *)(FVar8.Data + uVar20 + 0x40),(double *)(FVar8.Data + uVar20 + 0x38));
      uVar17 = (ulonglong)(uVar15 + 1);
      *(double *)(FVar8.Data + uVar20 + 0x18) = local_150._s_0.X;
      *(double *)(FVar8.Data + uVar20 + 0x18 + 8) = local_150._s_0.Y;
      *(undefined8 *)(FVar8.Data + uVar20 + 0x28) = local_140;
      *(undefined8 *)(FVar8.Data + uVar20 + 0x28 + 8) = uStack_138;
      lVar16 = lVar16 + -1;
      if (lVar16 == 0) break;
      uVar14 = (ulonglong)(uint)local_1c0.ArrayNum;
      uVar20 = uVar20 + 0xb8;
    }
  }
  uVar17 = 0;
  local_1c6 = InternalUVPacking::FStandardChartPacker::FindBestPacking(&local_188,&local_1c0);
  pFVar9 = local_1a0;
  dVar5 = __real_3fe0000000000000;
  dVar4 = __real_3ff0000000000000;
  if ((bool)local_1c6) {
    local_1c6 = 1;
    uVar14 = uVar17;
    if (0 < local_1c0.ArrayNum) {
      do {
        uVar15 = (uint)uVar17;
        uVar13 = 0;
        if ((int)uVar15 < local_1c0.ArrayNum) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar2 = (code *)swi(3);
          uVar11 = (*pcVar2)();
          return (bool)uVar11;
        }
        pFVar19 = local_1c0.AllocatorInstance.Data + uVar14;
        dVar23 = *(double *)(pFVar19 + 0xa0) * *(double *)(pFVar19 + 0x90) +
                 *(double *)(pFVar19 + 0x98) * *(double *)(pFVar19 + 0x88);
        dVar22 = *(double *)(pFVar19 + 0xa0) * *(double *)(pFVar19 + 0x80) +
                 *(double *)(pFVar19 + 0x98) * *(double *)(pFVar19 + 0x78);
        local_f0 = &local_1b0;
        local_e0 = local_130;
        local_d8 = &local_160;
        local_110 = &local_1b0;
        dVar3 = dVar4 / (double)local_188.TextureResolution;
        local_100 = local_130;
        local_f8 = &local_160;
        local_158 = dVar3 * (dVar23 * *(double *)(pFVar19 + 0x70) +
                             dVar22 * *(double *)(pFVar19 + 0x68) +
                            *(double *)(pFVar19 + 0xb0) + dVar5);
        local_160 = (dVar23 * *(double *)(pFVar19 + 0x60) + dVar22 * *(double *)(pFVar19 + 0x58) +
                    *(double *)(pFVar19 + 0xa8) + dVar5) * dVar3;
        local_118 = dVar3 * *(double *)(pFVar19 + 0x90);
        local_120 = dVar3 * *(double *)(pFVar19 + 0x88);
        local_c8.Elements._0_8_ = 0;
        local_c8.Elements._8_8_ = 0;
        local_c8.Elements._32_8_ = 0;
        local_c8.Elements._40_4_ = 0;
        local_c8.Elements._44_4_ = 0x80;
        local_c8.Elements._48_4_ = 0xffffffff;
        local_c8.Elements._52_4_ = 0;
        local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_c8.HashSize = 0;
        local_130._8_4_ = SUB84(dVar3 * *(double *)(pFVar19 + 0x80),0);
        local_130._0_8_ = dVar3 * *(double *)(pFVar19 + 0x78);
        local_130._12_4_ = (int)((ulonglong)(dVar3 * *(double *)(pFVar19 + 0x80)) >> 0x20);
        puVar18 = *(undefined4 **)(pFVar19 + 8);
        iVar12 = *(int *)(pFVar19 + 0x10);
        puVar1 = puVar18 + iVar12;
        local_108 = pFVar19;
        local_e8 = pFVar19;
        while( true ) {
          if (*(int *)(pFVar19 + 0x10) != iVar12) {
            local_1c7 = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_1c7);
          }
          if (puVar18 == puVar1) break;
          (**(code **)((longlong)*local_1b0 + 0x10))(local_1b0,local_198,*puVar18);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_c8,&local_170,local_198);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_c8,&local_16c,local_194);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_c8,local_168,local_190);
          puVar18 = puVar18 + 1;
        }
        if (pFVar9->bPreserveScale == false) {
          `UE::Geometry::FUVPacker::StandardPack'::__l9::<lambda_1>::operator()(&local_f0,&local_c8)
          ;
        }
        else {
          `UE::Geometry::FUVPacker::StandardPack'::__l9::<lambda_2>::operator()
                    (&local_110,&local_c8);
        }
        local_c8.HashSize = 0;
        if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_c8.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_c8.Elements);
        uVar17 = (ulonglong)(uVar15 + 1);
        uVar14 = uVar14 + 0xb8;
      } while ((int)(uVar15 + 1) < local_1c0.ArrayNum);
    }
    uVar11 = local_1c6;
    DestructItems<UE::InternalUVPacking::FUVIsland,int>
              ((FUVIsland *)local_1c0.AllocatorInstance.Data,local_1c0.ArrayNum);
    if ((FUVIsland *)local_1c0.AllocatorInstance.Data != (FUVIsland *)0x0) {
      FMemory::Free(local_1c0.AllocatorInstance.Data);
    }
    if (bVar21) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    DestructItems<UE::InternalUVPacking::FUVIsland,int>
              ((FUVIsland *)local_1c0.AllocatorInstance.Data,local_1c0.ArrayNum);
    if ((FUVIsland *)local_1c0.AllocatorInstance.Data != (FUVIsland *)0x0) {
      FMemory::Free(local_1c0.AllocatorInstance.Data);
    }
    if (bVar21) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    uVar11 = 0;
  }
  return (bool)uVar11;
}

