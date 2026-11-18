// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 29

// operator() @ 14db3bc90

void __thiscall
`UE::Chaos::ClothAsset::FClothGeometryTools::ConvertSelectionToNewGroupType'::__l2::<lambda_1>::
operator()(void *this,TArrayView<UE::Math::TIntVector3<int>_const_,int> *param_1)

{
  ulonglong uVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  TIntVector3<int> *pTVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  uint local_res8 [4];
  undefined4 local_res18;
  int local_res20 [2];
  
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8));
  this_00 = *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8);
  uVar12 = *(int *)(*(longlong *)this + 8) - *(int *)(*(longlong *)this + 0x34);
  if ((uint)(*(int *)&(this_00->Elements).field_0x8 - *(int *)&(this_00->Elements).field_0x34) <
      uVar12) {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_00,uVar12);
    if (uVar12 < 4) {
      iVar7 = 1;
    }
    else {
      uVar1 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res18 = (undefined4)lVar9;
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if ((this_00->HashSize == 0) || (this_00->HashSize < iVar7)) {
      this_00->HashSize = iVar7;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
    }
  }
  iVar7 = param_1->ArrayNum;
  local_res8[0] = 0;
  if (0 < iVar7) {
    do {
      uVar12 = local_res8[0];
      uVar8 = 0;
      if ((int)local_res8[0] < iVar7) {
        uVar8 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar11 = *(longlong **)this;
      lVar9 = (longlong)(int)uVar12;
      pTVar2 = param_1->DataPtr;
      uVar8 = pTVar2[lVar9].field0_0x0._s_0.X;
      if ((int)plVar11[1] != *(int *)((longlong)plVar11 + 0x34)) {
        plVar3 = (longlong *)plVar11[8];
        plVar14 = plVar11 + 7;
        plVar10 = plVar14;
        if (plVar3 != (longlong *)0x0) {
          plVar10 = plVar3;
        }
        uVar13 = (int)plVar11[9] - 1;
        iVar7 = *(int *)((longlong)plVar10 + (ulonglong)(uVar13 & uVar8) * 4);
        if (iVar7 != -1) {
          lVar4 = *plVar11;
          do {
            if (*(uint *)(lVar4 + (longlong)iVar7 * 0xc) == uVar8) {
              uVar8 = pTVar2[lVar9].field0_0x0._s_0.Y;
              plVar11 = plVar14;
              if (plVar3 != (longlong *)0x0) {
                plVar11 = plVar3;
              }
              iVar7 = *(int *)((longlong)plVar11 + (ulonglong)(uVar8 & uVar13) * 4);
              goto joined_r0x00014db3be07;
            }
            iVar7 = *(int *)(lVar4 + 4 + (longlong)iVar7 * 0xc);
          } while (iVar7 != -1);
        }
      }
LAB_14db3be71:
      iVar7 = param_1->ArrayNum;
      local_res8[0] = uVar12 + 1;
    } while ((int)local_res8[0] < iVar7);
  }
  return;
joined_r0x00014db3be07:
  if (iVar7 == -1) goto LAB_14db3be71;
  if (*(uint *)(lVar4 + (longlong)iVar7 * 0xc) == uVar8) {
    uVar8 = pTVar2[lVar9].field0_0x0._s_0.Z;
    if (plVar3 != (longlong *)0x0) {
      plVar14 = plVar3;
    }
    iVar7 = *(int *)((longlong)plVar14 + (ulonglong)(uVar8 & uVar13) * 4);
    goto joined_r0x00014db3be40;
  }
  iVar7 = *(int *)(lVar4 + 4 + (longlong)iVar7 * 0xc);
  goto joined_r0x00014db3be07;
joined_r0x00014db3be40:
  if (iVar7 == -1) goto LAB_14db3be71;
  if (*(uint *)(lVar4 + (longlong)iVar7 * 0xc) == uVar8) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8),
               local_res20,(bool *)local_res8);
    goto LAB_14db3be71;
  }
  iVar7 = *(int *)(lVar4 + 4 + (longlong)iVar7 * 0xc);
  goto joined_r0x00014db3be40;
}

// operator() @ 14db3bfb0

void __thiscall
`UE::Chaos::ClothAsset::FClothGeometryTools::RecalculateRenderMeshNormals'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong *plVar6;
  code *pcVar7;
  float fVar8;
  bool bVar9;
  undefined4 uVar10;
  uint uVar11;
  TVector<float> *pTVar12;
  TVector<float> *pTVar13;
  TVector<float> *pTVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  pTVar12 = TArrayView<UE::Math::TVector<float>,int>::operator[]
                      (*(TArrayView<UE::Math::TVector<float>,int> **)this,param_1);
  pTVar13 = TArrayView<UE::Math::TVector<float>,int>::operator[]
                      (*(TArrayView<UE::Math::TVector<float>,int> **)((longlong)this + 8),param_1);
  pTVar14 = TArrayView<UE::Math::TVector<float>,int>::operator[]
                      (*(TArrayView<UE::Math::TVector<float>,int> **)((longlong)this + 0x10),param_1
                      );
  fVar17 = __real_3f800000;
  fVar8 = __real_322bcc77;
  fVar20 = (pTVar12->field0_0x0)._s_0.X;
  fVar21 = (pTVar12->field0_0x0)._s_0.Y;
  fVar19 = (pTVar12->field0_0x0)._s_0.Z;
  fVar16 = fVar21 * fVar21 + fVar20 * fVar20 + fVar19 * fVar19;
  if (fVar16 == __real_3f800000) {
    uVar15 = *(undefined8 *)&pTVar12->field0_0x0;
    uVar10 = (pTVar12->field0_0x0)._s_0.Z;
  }
  else {
    uVar15 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_322bcc77 <= fVar16) {
      fVar16 = __real_3f800000 / SQRT(fVar16);
      uVar15 = CONCAT44(fVar16 * fVar21,fVar16 * fVar20);
      uVar10 = fVar16 * fVar19;
    }
  }
  *(undefined8 *)&pTVar12->field0_0x0 = uVar15;
  (pTVar12->field0_0x0)._s_0.Z = (float)uVar10;
  fVar20 = (pTVar13->field0_0x0)._s_0.X;
  fVar21 = (pTVar13->field0_0x0)._s_0.Y;
  fVar19 = (pTVar13->field0_0x0)._s_0.Z;
  fVar16 = fVar21 * fVar21 + fVar20 * fVar20 + fVar19 * fVar19;
  if (fVar16 == fVar17) {
    uVar15 = *(undefined8 *)&pTVar13->field0_0x0;
    uVar10 = (pTVar13->field0_0x0)._s_0.Z;
  }
  else {
    uVar15 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    if (fVar8 <= fVar16) {
      fVar16 = fVar17 / SQRT(fVar16);
      uVar15 = CONCAT44(fVar16 * fVar21,fVar16 * fVar20);
      uVar10 = fVar16 * fVar19;
    }
  }
  *(undefined8 *)&pTVar13->field0_0x0 = uVar15;
  (pTVar13->field0_0x0)._s_0.Z = (float)uVar10;
  fVar20 = (pTVar13->field0_0x0)._s_0.X;
  fVar21 = (pTVar13->field0_0x0)._s_0.Y;
  fVar19 = (pTVar13->field0_0x0)._s_0.Z;
  fVar16 = fVar21 * (pTVar12->field0_0x0)._s_0.Y + fVar20 * (pTVar12->field0_0x0)._s_0.X +
           fVar19 * (pTVar12->field0_0x0)._s_0.Z;
  fVar20 = fVar20 - fVar16 * (pTVar12->field0_0x0)._s_0.X;
  fVar21 = fVar21 - fVar16 * (pTVar12->field0_0x0)._s_0.Y;
  fVar19 = fVar19 - fVar16 * (pTVar12->field0_0x0)._s_0.Z;
  (pTVar13->field0_0x0)._s_0.X = fVar20;
  (pTVar13->field0_0x0)._s_0.Y = fVar21;
  (pTVar13->field0_0x0)._s_0.Z = fVar19;
  fVar16 = (pTVar12->field0_0x0)._s_0.Z;
  fVar1 = (pTVar12->field0_0x0)._s_0.Z;
  fVar2 = (pTVar12->field0_0x0)._s_0.Y;
  fVar3 = (pTVar12->field0_0x0)._s_0.X;
  fVar4 = (pTVar12->field0_0x0)._s_0.X;
  fVar5 = (pTVar12->field0_0x0)._s_0.Y;
  plVar6 = *(longlong **)((longlong)this + 0x18);
  uVar11 = 0;
  if (param_1 < (int)plVar6[1]) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  fVar18 = *(float *)(*plVar6 + (longlong)param_1 * 4);
  fVar16 = fVar18 * (fVar19 * fVar2 - fVar21 * fVar16);
  fVar19 = fVar18 * (fVar20 * fVar1 - fVar19 * fVar3);
  fVar18 = fVar18 * (fVar21 * fVar4 - fVar20 * fVar5);
  (pTVar14->field0_0x0)._s_0.X = fVar16;
  (pTVar14->field0_0x0)._s_0.Y = fVar19;
  (pTVar14->field0_0x0)._s_0.Z = fVar18;
  fVar20 = fVar19 * fVar19 + fVar16 * fVar16 + fVar18 * fVar18;
  if (fVar20 == fVar17) {
    uVar15 = *(undefined8 *)&pTVar14->field0_0x0;
    uVar10 = (pTVar14->field0_0x0)._s_0.Z;
  }
  else {
    uVar15 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    if (fVar8 <= fVar20) {
      fVar17 = fVar17 / SQRT(fVar20);
      uVar15 = CONCAT44(fVar17 * fVar19,fVar17 * fVar16);
      uVar10 = fVar17 * fVar18;
    }
  }
  *(undefined8 *)&pTVar14->field0_0x0 = uVar15;
  (pTVar14->field0_0x0)._s_0.Z = (float)uVar10;
  return;
}

// operator() @ 14db3ca20

void __thiscall
`UE::Chaos::ClothAsset::FClothGeometryTools::ConvertSelectionToNewGroupType'::__l2::<lambda_2>::
operator()(void *this,TArrayView<UE::Math::TIntVector3<int>_const_,int> *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  int iVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  undefined1 local_res8 [8];
  uint local_res18;
  undefined4 uStack_9c;
  int local_90;
  int local_8c;
  int local_88 [2];
  longlong *local_80;
  TBitArray<FDefaultBitArrayAllocator> *local_78;
  longlong *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8));
  uVar8 = 1;
  pTVar3 = *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8);
  uVar11 = *(int *)(*(longlong *)this + 8) - *(int *)(*(longlong *)this + 0x34);
  if ((uint)(*(int *)&(pTVar3->Elements).field_0x8 - *(int *)&(pTVar3->Elements).field_0x34) <
      uVar11) {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)pTVar3,uVar11);
    if (uVar11 < 4) {
      iVar7 = 1;
    }
    else {
      uVar1 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar10 & 0x1f);
    }
    if ((pTVar3->HashSize == 0) || (pTVar3->HashSize < iVar7)) {
      pTVar3->HashSize = iVar7;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(pTVar3);
    }
  }
  iVar12 = 0;
  plVar4 = *(longlong **)this;
  iVar14 = 0;
  iVar7 = (int)plVar4[5];
  pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar4 + 2);
  iVar9 = 0;
  if (iVar7 != 0) {
    pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)plVar4[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar4[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = pTVar15;
    }
    uVar11 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar9 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14db3cb3d;
      uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar10 * 4 + 4);
    }
    uVar8 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = iVar14 + -1 + (int)lVar10;
    if (iVar7 < iVar9) {
      iVar9 = iVar7;
    }
  }
LAB_14db3cb3d:
  uVar11 = *(uint *)(plVar4 + 5);
  TStack_68._padding_ = CONCAT44(uVar8,iVar12);
  uVar8 = uVar11 & 0xffffffe0;
  TStack_68.CurrentBitIndex = iVar9;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_68._28_4_ = iVar9;
  TStack_68.BaseBitIndex = iVar14;
  uStack_48 = CONCAT44(uStack_9c,(int)plVar4[1] - *(int *)((longlong)plVar4 + 0x34));
  local_80 = plVar4;
  local_78 = pTVar15;
  local_70 = plVar4;
  TStack_68.Array = pTVar15;
  if ((((int)uVar11 < 0) || (iVar7 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar2 = *(uint *)(plVar4 + 5);
  local_res18 = uVar11;
  if (uVar11 != uVar2) {
    pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)plVar4[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar4[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = pTVar15;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) &
             *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar8 = uVar8 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar2;
      local_res18 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14db3cc40;
      uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar8;
    local_res18 = uVar11;
    if ((int)uVar2 < (int)uVar11) {
      uVar11 = uVar2;
      local_res18 = uVar2;
    }
  }
LAB_14db3cc40:
  do {
    plVar4 = local_70;
    if ((int)local_70[1] - *(int *)((longlong)local_70 + 0x34) != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar11) && (TStack_68.Array == pTVar15)) &&
       (plVar4 == local_80)) {
      return;
    }
    uVar8 = *(uint *)(*plVar4 + (longlong)TStack_68.CurrentBitIndex * 0xc);
    if ((-1 < (int)uVar8) && ((int)uVar8 < param_1->ArrayNum)) {
      pTVar3 = *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8);
      if (((int)uVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (pTVar3,&local_90,(bool *)(param_1->DataPtr + (int)uVar8));
      pTVar3 = *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8);
      uVar11 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar11 = ~uVar8 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (pTVar3,&local_8c,(bool *)((longlong)&param_1->DataPtr[(int)uVar8].field0_0x0 + 4));
      pTVar3 = *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8);
      uVar11 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar11 = ~uVar8 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (pTVar3,local_88,(bool *)((longlong)&param_1->DataPtr[(int)uVar8].field0_0x0 + 8));
      pTVar15 = local_78;
      uVar11 = local_res18;
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// operator() @ 14db3ce00

void __thiscall
`UE::Chaos::ClothAsset::FClothGeometryTools::ReverseMesh'::__l2::<lambda_2>::operator()
          (void *this,TArrayView<UE::Math::TVector<float>,int> *param_1,
          TArrayView<UE::Math::TVector<float>,int> *param_2)

{
  uint uVar1;
  uint uVar2;
  TVector<float> *pTVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RenderNormal.Num() == RenderTangentU.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothGeometryTools.cpp"
                         ,0x287,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar5 = __xmm_80000000800000008000000080000000;
  iVar9 = param_1->ArrayNum;
  uVar12 = 0;
  if (0 < iVar9) {
    lVar10 = 0;
    do {
      uVar11 = ~uVar12 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar12 < iVar9) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar3 = param_1->DataPtr;
      uVar7 = *(uint *)((longlong)&pTVar3->field0_0x0 + lVar10);
      uVar1 = *(uint *)((longlong)&pTVar3->field0_0x0 + lVar10 + 4);
      uVar2 = *(uint *)((longlong)&pTVar3->field0_0x0 + lVar10 + 8);
      uVar8 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar3 = param_1->DataPtr;
      *(uint *)((longlong)&pTVar3->field0_0x0 + lVar10) = uVar7 ^ uVar5;
      *(uint *)((longlong)&pTVar3->field0_0x0 + lVar10 + 4) = uVar1 ^ uVar5;
      *(uint *)((longlong)&pTVar3->field0_0x0 + lVar10 + 8) = uVar2 ^ uVar5;
      uVar7 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar3 = param_2->DataPtr;
      uVar7 = *(uint *)((longlong)&pTVar3->field0_0x0 + lVar10);
      uVar1 = *(uint *)((longlong)&pTVar3->field0_0x0 + lVar10 + 4);
      uVar2 = *(uint *)((longlong)&pTVar3->field0_0x0 + lVar10 + 8);
      uVar8 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar3 = param_2->DataPtr;
      uVar12 = uVar12 + 1;
      *(uint *)((longlong)&pTVar3->field0_0x0 + lVar10) = uVar7 ^ uVar5;
      *(uint *)((longlong)&pTVar3->field0_0x0 + lVar10 + 4) = uVar1 ^ uVar5;
      *(uint *)((longlong)&pTVar3->field0_0x0 + lVar10 + 8) = uVar2 ^ uVar5;
      lVar10 = lVar10 + 0xc;
      iVar9 = param_1->ArrayNum;
    } while ((int)uVar12 < iVar9);
  }
  return;
}

// operator() @ 14db3d060

void __thiscall
`UE::Chaos::ClothAsset::FClothGeometryTools::ConvertSelectionToNewGroupType'::__l2::<lambda_3>::
operator()(void *this,int param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int local_res8 [2];
  int local_res18 [2];
  
  this_00 = *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)this;
  uVar4 = *(int *)&(this_00->Elements).field_0x8 - *(int *)&(this_00->Elements).field_0x34;
  uVar1 = uVar4 + param_2;
  if (uVar4 < uVar1) {
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar1);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_00,uVar1);
    if (uVar1 < 4) {
      iVar5 = 1;
    }
    else {
      uVar2 = (ulonglong)((uVar1 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar3 & 0x1f);
    }
    if ((this_00->HashSize == 0) || (this_00->HashSize < iVar5)) {
      this_00->HashSize = iVar5;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
    }
  }
  iVar5 = param_1 + param_2;
  for (; param_1 < iVar5; param_1 = param_1 + 1) {
    local_res18[0] = param_1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)this,local_res8,
               (bool *)local_res18);
  }
  return;
}

// operator() @ 14db3d140

void __thiscall
`UE::Chaos::ClothAsset::FClothGeometryTools::ReverseMesh'::__l2::<lambda_3>::operator()
          (void *this,TArrayView<UE::Math::TIntVector3<int>,int> *param_1)

{
  undefined4 uVar1;
  TIntVector3<int> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  
  iVar6 = param_1->ArrayNum;
  uVar8 = 0;
  if (0 < iVar6) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar6) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = param_1->DataPtr;
      uVar5 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar8 = uVar8 + 1;
      uVar1 = *(undefined4 *)((longlong)&param_1->DataPtr->field0_0x0 + lVar7 + 4);
      *(undefined4 *)((longlong)&param_1->DataPtr->field0_0x0 + lVar7 + 4) =
           *(undefined4 *)((longlong)&pTVar2->field0_0x0 + lVar7 + 8);
      *(undefined4 *)((longlong)&pTVar2->field0_0x0 + lVar7 + 8) = uVar1;
      lVar7 = lVar7 + 0xc;
      iVar6 = param_1->ArrayNum;
    } while ((int)uVar8 < iVar6);
  }
  return;
}

// ApplyProxyDeformer @ 14db417b0

void __cdecl
UE::Chaos::ClothAsset::FClothGeometryTools::ApplyProxyDeformer
          (FCollectionClothFacade *param_1,bool param_2,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_3,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  TManagedArray<int> *pTVar7;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar8;
  TVector<float> *pTVar9;
  TVector<float> *pTVar10;
  TVector<float> *pTVar11;
  TVector<float> *pTVar12;
  FScriptContainerElement *pFVar13;
  code *pcVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> *pTVar26;
  TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,int> *pTVar27;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *pTVar28;
  TArrayView<float,int> *pTVar29;
  uint uVar30;
  FConstClothCollection *pFVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  double dVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  double dVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float local_2d8;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  undefined **local_280;
  FConstClothCollection *local_278;
  TReferenceControllerBase<1> *local_270;
  uint local_268;
  int local_260;
  int local_25c;
  int local_258;
  uint local_254;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  double local_230;
  TVector<float> *local_228;
  TVector<float> *local_220;
  double local_218;
  int local_210;
  int local_20c;
  uint local_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  longlong local_1f8;
  float local_1f0;
  TArrayView<UE::Math::TVector<float>,int> local_1e8;
  TArrayView<UE::Math::TVector<float>,int> local_1d8;
  TArrayView<UE::Math::TVector<float>,int> local_1c8;
  TArray<float,TSizedDefaultAllocator<32>_> *local_1b8;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *local_1b0;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *local_1a8;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *local_1a0;
  TArrayView<UE::Math::TVector<float>,int> local_198;
  float *local_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 local_160;
  TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> local_150;
  TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> local_140;
  TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,int> local_130;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_120;
  TArrayView<float,int> local_110;
  TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> local_100 [12];
  
  pFVar31 = *(FConstClothCollection **)&param_1->field_0x8;
  bVar18 = FConstClothCollection::IsValid(pFVar31,RenderDeformer);
  if ((bVar18) &&
     (iVar19 = FManagedArrayCollection::NumElements
                         ((pFVar31->ManagedArrayCollection).Object,ClothCollectionGroup::Lods),
     iVar19 == 1)) {
    uVar32 = 0;
    local_254 = 0;
    iVar19 = FManagedArrayCollection::NumElements
                       ((FManagedArrayCollection *)**(undefined8 **)&param_1->field_0x8,
                        ClothCollectionGroup::RenderPatterns);
    fVar38 = __real_3f800000;
    if (0 < iVar19) {
      do {
        pTVar6 = *(TReferenceControllerBase<1> **)&param_1->field_0x10;
        pFVar31 = *(FConstClothCollection **)&param_1->field_0x8;
        if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
        else {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_278 = pFVar31;
        local_270 = pTVar6;
        local_268 = uVar32;
        bVar18 = FConstClothCollection::IsValid(pFVar31,None);
        if ((!bVar18) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("ClothCollection->IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothRenderPatternFacade.cpp"
                                ,0xd1,L""), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        if ((((int)uVar32 < 0) ||
            (iVar19 = FManagedArrayCollection::NumElements
                                ((pFVar31->ManagedArrayCollection).Object,
                                 ClothCollectionGroup::RenderPatterns), iVar19 <= (int)uVar32)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("PatternIndex >= 0 && PatternIndex < ClothCollection->GetNumElements(ClothCollectionGroup::RenderPatterns)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothRenderPatternFacade.cpp"
                                ,0xd2,L""), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        local_280 = &___7FCollectionClothRenderPatternFacade_ClothAsset_Chaos_UE__6B_;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        if ((pFVar31->RenderDeformerNumInfluences != (TManagedArray<int> *)0x0) &&
           (iVar19 = FManagedArrayCollection::NumElements
                               ((pFVar31->ManagedArrayCollection).Object,
                                ClothCollectionGroup::RenderPatterns), (int)uVar32 < iVar19)) {
          pTVar7 = pFVar31->RenderDeformerNumInfluences;
          uVar20 = 0;
          if ((int)uVar32 < *(int *)&pTVar7->field_0x18) {
            uVar20 = ~uVar32 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          iVar19 = *(int *)(*(longlong *)&pTVar7->field_0x10 + (longlong)(int)uVar32 * 4);
          if (0 < iVar19) {
            FCollectionClothRenderPatternFacade::GetRenderPosition
                      ((FCollectionClothRenderPatternFacade *)&local_280,&local_198);
            FCollectionClothRenderPatternFacade::GetRenderNormal
                      ((FCollectionClothRenderPatternFacade *)&local_280,&local_1e8);
            FCollectionClothRenderPatternFacade::GetRenderTangentU
                      ((FCollectionClothRenderPatternFacade *)&local_280,&local_1d8);
            FCollectionClothRenderPatternFacade::GetRenderTangentV
                      ((FCollectionClothRenderPatternFacade *)&local_280,&local_1c8);
            pTVar26 = FCollectionClothRenderPatternFacade::
                      GetRenderDeformerPositionBaryCoordsAndDist
                                ((FCollectionClothRenderPatternFacade *)&local_280,local_100);
            local_1b0 = pTVar26->DataPtr;
            local_260 = pTVar26->ArrayNum;
            pTVar26 = FCollectionClothRenderPatternFacade::GetRenderDeformerNormalBaryCoordsAndDist
                                ((FCollectionClothRenderPatternFacade *)&local_280,&local_150);
            local_1a8 = pTVar26->DataPtr;
            local_25c = pTVar26->ArrayNum;
            pTVar26 = FCollectionClothRenderPatternFacade::GetRenderDeformerTangentBaryCoordsAndDist
                                ((FCollectionClothRenderPatternFacade *)&local_280,&local_140);
            local_1a0 = pTVar26->DataPtr;
            local_258 = pTVar26->ArrayNum;
            pTVar27 = FCollectionClothRenderPatternFacade::GetRenderDeformerSimIndices3D
                                ((FCollectionClothRenderPatternFacade *)&local_280,&local_130);
            iVar5 = pTVar27->ArrayNum;
            pTVar8 = pTVar27->DataPtr;
            pTVar28 = FCollectionClothRenderPatternFacade::GetRenderDeformerWeight
                                ((FCollectionClothRenderPatternFacade *)&local_280,&local_120);
            local_1b8 = pTVar28->DataPtr;
            local_20c = pTVar28->ArrayNum;
            pTVar29 = FCollectionClothRenderPatternFacade::GetRenderDeformerSkinningBlend
                                ((FCollectionClothRenderPatternFacade *)&local_280,&local_110);
            pFVar31 = local_278;
            lVar36 = 0;
            uVar32 = 0;
            local_240 = 0;
            local_188 = pTVar29->DataPtr;
            local_210 = pTVar29->ArrayNum;
            iVar21 = FConstClothCollection::GetNumElements
                               (local_278,local_278->RenderVerticesStart,
                                local_278->RenderVerticesEnd,local_268);
            if (0 < iVar21) {
              lVar33 = 0;
              local_1f8 = 0;
              do {
                fVar43 = 0.0;
                if (param_2) {
                  fVar44 = 0.0;
LAB_14db41c6e:
                  local_2ac = 0.0;
                  local_2b0 = 0.0;
                  local_2d0 = 0.0;
                  local_2c4 = 0.0;
                  uVar30 = 0;
                  local_2d8 = 0.0;
                  local_208 = ~uVar32 >> 0x1f;
                  local_1f0 = fVar38 - fVar44;
                  uVar20 = 0;
                  if ((int)uVar32 < iVar5) {
                    uVar20 = local_208;
                  }
                  local_1fc = 0;
                  if ((int)uVar32 < local_260) {
                    local_1fc = local_208;
                  }
                  local_204 = 0;
                  if ((int)uVar32 < local_25c) {
                    local_204 = local_208;
                  }
                  local_200 = 0;
                  if ((int)uVar32 < local_258) {
                    local_200 = local_208;
                  }
                  lVar34 = 0;
                  local_248 = 0;
                  local_218 = 0.0;
                  local_2a8 = fVar43;
                  local_2c8 = fVar43;
                  fVar46 = fVar43;
                  fVar47 = fVar43;
                  fVar48 = fVar43;
                  do {
                    fVar44 = local_1f0;
                    dVar16 = local_218;
                    if ((uVar20 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    uVar22 = 0;
                    if ((int)uVar30 < *(int *)((longlong)&pTVar8->ArrayNum + lVar33)) {
                      uVar22 = ~uVar30 >> 0x1f;
                    }
                    if ((uVar22 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    uVar22 = *(uint *)((longlong)dVar16 +
                                      *(longlong *)
                                       ((longlong)&(pTVar8->AllocatorInstance).Data + lVar33));
                    uVar23 = 0;
                    if ((int)uVar22 < param_3->ArrayNum) {
                      uVar23 = ~uVar22 >> 0x1f;
                    }
                    if ((uVar23 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    pTVar9 = param_3->DataPtr;
                    if ((uVar20 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    uVar23 = 0;
                    if ((int)uVar30 < *(int *)((longlong)&pTVar8->ArrayNum + lVar33)) {
                      uVar23 = ~uVar30 >> 0x1f;
                    }
                    if ((uVar23 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    uVar23 = *(uint *)((longlong)dVar16 + 4 +
                                      *(longlong *)
                                       ((longlong)&(pTVar8->AllocatorInstance).Data + lVar33));
                    uVar24 = 0;
                    if ((int)uVar23 < param_3->ArrayNum) {
                      uVar24 = ~uVar23 >> 0x1f;
                    }
                    if ((uVar24 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    local_250 = (longlong)(int)uVar23 * 3;
                    pTVar10 = param_3->DataPtr;
                    if ((uVar20 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    uVar23 = 0;
                    if ((int)uVar30 < *(int *)((longlong)&pTVar8->ArrayNum + lVar33)) {
                      uVar23 = ~uVar30 >> 0x1f;
                    }
                    if ((uVar23 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    uVar23 = *(uint *)((longlong)dVar16 + 8 +
                                      *(longlong *)
                                       ((longlong)&(pTVar8->AllocatorInstance).Data + lVar33));
                    uVar24 = 0;
                    if ((int)uVar23 < param_3->ArrayNum) {
                      uVar24 = ~uVar23 >> 0x1f;
                    }
                    if ((uVar24 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    local_238 = (longlong)(int)uVar23 * 3;
                    local_220 = param_3->DataPtr;
                    if ((uVar20 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    uVar23 = 0;
                    if ((int)uVar30 < *(int *)((longlong)&pTVar8->ArrayNum + lVar33)) {
                      uVar23 = ~uVar30 >> 0x1f;
                    }
                    if ((uVar23 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    uVar23 = *(uint *)((longlong)dVar16 +
                                      *(longlong *)
                                       ((longlong)&(pTVar8->AllocatorInstance).Data + lVar33));
                    uVar24 = 0;
                    if ((int)uVar23 < param_4->ArrayNum) {
                      uVar24 = ~uVar23 >> 0x1f;
                    }
                    if ((uVar24 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    pTVar11 = param_4->DataPtr;
                    if ((uVar20 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    uVar24 = 0;
                    if ((int)uVar30 < *(int *)((longlong)&pTVar8->ArrayNum + lVar33)) {
                      uVar24 = ~uVar30 >> 0x1f;
                    }
                    if ((uVar24 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    uVar24 = *(uint *)((longlong)dVar16 + 4 +
                                      *(longlong *)
                                       ((longlong)&(pTVar8->AllocatorInstance).Data + lVar33));
                    uVar25 = 0;
                    if ((int)uVar24 < param_4->ArrayNum) {
                      uVar25 = ~uVar24 >> 0x1f;
                    }
                    if ((uVar25 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    local_230 = (double)((longlong)(int)uVar24 * 3);
                    local_228 = param_4->DataPtr;
                    if ((uVar20 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    uVar24 = 0;
                    if ((int)uVar30 < *(int *)((longlong)&pTVar8->ArrayNum + lVar33)) {
                      uVar24 = ~uVar30 >> 0x1f;
                    }
                    if ((uVar24 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    uVar24 = *(uint *)((longlong)dVar16 + 8 +
                                      *(longlong *)
                                       ((longlong)&(pTVar8->AllocatorInstance).Data + lVar33));
                    uVar25 = 0;
                    if ((int)uVar24 < param_4->ArrayNum) {
                      uVar25 = ~uVar24 >> 0x1f;
                    }
                    if ((uVar25 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    pTVar12 = param_4->DataPtr;
                    local_2d8 = local_2d8 + fVar44;
                    fVar44 = fVar38;
                    fVar39 = fVar38;
                    if (1 < iVar19) {
                      uVar25 = 0;
                      if ((int)uVar32 < local_20c) {
                        uVar25 = local_208;
                      }
                      if ((uVar25 == 0) &&
                         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0x14f,
                                              L"Array index out of bounds: %lld from an array of size %lld"
                                             ), bVar18)) {
                        pcVar14 = (code *)swi(3);
                        (*pcVar14)();
                        return;
                      }
                      uVar25 = 0;
                      if ((int)uVar30 < local_1b8[lVar36].ArrayNum) {
                        uVar25 = ~uVar30 >> 0x1f;
                      }
                      if ((uVar25 == 0) &&
                         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar18)) {
                        pcVar14 = (code *)swi(3);
                        (*pcVar14)();
                        return;
                      }
                      fVar44 = *(float *)(local_1b8[lVar36].AllocatorInstance.Data + lVar34 * 4);
                      fVar39 = local_2a8 + fVar44;
                    }
                    local_2a8 = fVar39;
                    if ((local_1fc == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    uVar25 = 0;
                    if ((int)uVar30 < local_1b0[lVar36].ArrayNum) {
                      uVar25 = ~uVar30 >> 0x1f;
                    }
                    if ((uVar25 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    pFVar13 = local_1b0[lVar36].AllocatorInstance.Data;
                    fVar39 = *(float *)(pFVar13 + local_248 + 0xc);
                    fVar49 = *(float *)(pFVar13 + local_248);
                    fVar40 = *(float *)(pFVar13 + local_248 + 4);
                    fVar1 = *(float *)(pFVar13 + local_248 + 8);
                    fVar43 = fVar43 + ((pTVar9[(int)uVar22].field0_0x0._s_0.X -
                                       fVar39 * pTVar11[(int)uVar23].field0_0x0._s_0.X) * fVar49 +
                                       ((pTVar10->field0_0x0).XYZ[local_250] -
                                       fVar39 * (local_228->field0_0x0).XYZ[(longlong)local_230]) *
                                       fVar40 + ((local_220->field0_0x0).XYZ[local_238] -
                                                fVar39 * pTVar12[(int)uVar24].field0_0x0._s_0.X) *
                                                fVar1) * fVar44;
                    local_2c8 = local_2c8 +
                                ((pTVar9[(int)uVar22].field0_0x0._s_0.Y -
                                 fVar39 * pTVar11[(int)uVar23].field0_0x0._s_0.Y) * fVar49 +
                                 (*(float *)((longlong)&pTVar10->field0_0x0 + local_250 * 4 + 4) -
                                 fVar39 * *(float *)((longlong)&local_228->field0_0x0 +
                                                    (longlong)local_230 * 4 + 4)) * fVar40 +
                                (*(float *)((longlong)&local_220->field0_0x0 + local_238 * 4 + 4) -
                                fVar39 * pTVar12[(int)uVar24].field0_0x0._s_0.Y) * fVar1) * fVar44;
                    local_2c4 = local_2c4 +
                                ((pTVar9[(int)uVar22].field0_0x0._s_0.Z -
                                 fVar39 * pTVar11[(int)uVar23].field0_0x0._s_0.Z) * fVar49 +
                                 (*(float *)((longlong)&pTVar10->field0_0x0 + local_250 * 4 + 8) -
                                 fVar39 * *(float *)((longlong)&local_228->field0_0x0 +
                                                    (longlong)local_230 * 4 + 8)) * fVar40 +
                                (*(float *)((longlong)&local_220->field0_0x0 + local_238 * 4 + 8) -
                                fVar39 * pTVar12[(int)uVar24].field0_0x0._s_0.Z) * fVar1) * fVar44;
                    if ((local_204 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    uVar25 = 0;
                    if ((int)uVar30 < local_1a8[lVar36].ArrayNum) {
                      uVar25 = ~uVar30 >> 0x1f;
                    }
                    if ((uVar25 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    pFVar13 = local_1a8[lVar36].AllocatorInstance.Data;
                    fVar39 = *(float *)(pFVar13 + local_248 + 0xc);
                    fVar49 = *(float *)(pFVar13 + local_248);
                    fVar40 = *(float *)(pFVar13 + local_248 + 4);
                    fVar1 = *(float *)(pFVar13 + local_248 + 8);
                    local_2b0 = local_2b0 +
                                ((pTVar9[(int)uVar22].field0_0x0._s_0.X -
                                 fVar39 * pTVar11[(int)uVar23].field0_0x0._s_0.X) * fVar49 +
                                 ((pTVar10->field0_0x0).XYZ[local_250] -
                                 fVar39 * (local_228->field0_0x0).XYZ[(longlong)local_230]) * fVar40
                                + ((local_220->field0_0x0).XYZ[local_238] -
                                  fVar39 * pTVar12[(int)uVar24].field0_0x0._s_0.X) * fVar1) * fVar44
                    ;
                    local_2ac = local_2ac +
                                ((pTVar9[(int)uVar22].field0_0x0._s_0.Y -
                                 fVar39 * pTVar11[(int)uVar23].field0_0x0._s_0.Y) * fVar49 +
                                 (*(float *)((longlong)&pTVar10->field0_0x0 + local_250 * 4 + 4) -
                                 fVar39 * *(float *)((longlong)&local_228->field0_0x0 +
                                                    (longlong)local_230 * 4 + 4)) * fVar40 +
                                (*(float *)((longlong)&local_220->field0_0x0 + local_238 * 4 + 4) -
                                fVar39 * pTVar12[(int)uVar24].field0_0x0._s_0.Y) * fVar1) * fVar44;
                    local_2d0 = local_2d0 +
                                ((*(float *)((longlong)&pTVar10->field0_0x0 + local_250 * 4 + 8) -
                                 fVar39 * *(float *)((longlong)&local_228->field0_0x0 +
                                                    (longlong)local_230 * 4 + 8)) * fVar40 +
                                 (pTVar9[(int)uVar22].field0_0x0._s_0.Z -
                                 fVar39 * pTVar11[(int)uVar23].field0_0x0._s_0.Z) * fVar49 +
                                (*(float *)((longlong)&local_220->field0_0x0 + local_238 * 4 + 8) -
                                fVar39 * pTVar12[(int)uVar24].field0_0x0._s_0.Z) * fVar1) * fVar44;
                    if ((local_200 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    uVar25 = 0;
                    if ((int)uVar30 < local_1a0[lVar36].ArrayNum) {
                      uVar25 = ~uVar30 >> 0x1f;
                    }
                    if ((uVar25 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    pFVar13 = local_1a0[lVar36].AllocatorInstance.Data;
                    fVar39 = *(float *)(pFVar13 + local_248 + 0xc);
                    fVar49 = *(float *)(pFVar13 + local_248);
                    fVar40 = *(float *)(pFVar13 + local_248 + 4);
                    fVar1 = *(float *)(pFVar13 + local_248 + 8);
                    fVar46 = fVar46 + ((pTVar9[(int)uVar22].field0_0x0._s_0.X -
                                       fVar39 * pTVar11[(int)uVar23].field0_0x0._s_0.X) * fVar49 +
                                       ((pTVar10->field0_0x0).XYZ[local_250] -
                                       fVar39 * (local_228->field0_0x0).XYZ[(longlong)local_230]) *
                                       fVar40 + ((local_220->field0_0x0).XYZ[local_238] -
                                                fVar39 * pTVar12[(int)uVar24].field0_0x0._s_0.X) *
                                                fVar1) * fVar44;
                    fVar47 = fVar47 + ((*(float *)((longlong)&pTVar10->field0_0x0 +
                                                  local_250 * 4 + 4) -
                                       fVar39 * *(float *)((longlong)&local_228->field0_0x0 +
                                                          (longlong)local_230 * 4 + 4)) * fVar40 +
                                       (pTVar9[(int)uVar22].field0_0x0._s_0.Y -
                                       fVar39 * pTVar11[(int)uVar23].field0_0x0._s_0.Y) * fVar49 +
                                      (*(float *)((longlong)&local_220->field0_0x0 +
                                                 local_238 * 4 + 4) -
                                      fVar39 * pTVar12[(int)uVar24].field0_0x0._s_0.Y) * fVar1) *
                                      fVar44;
                    uVar30 = uVar30 + 1;
                    local_248 = local_248 + 0x10;
                    local_218 = (double)((longlong)local_218 + 0xc);
                    lVar34 = lVar34 + 1;
                    fVar48 = fVar48 + ((*(float *)((longlong)&pTVar10->field0_0x0 +
                                                  local_250 * 4 + 8) -
                                       fVar39 * *(float *)((longlong)&local_228->field0_0x0 +
                                                          (longlong)local_230 * 4 + 8)) * fVar40 +
                                       (pTVar9[(int)uVar22].field0_0x0._s_0.Z -
                                       fVar39 * pTVar11[(int)uVar23].field0_0x0._s_0.Z) * fVar49 +
                                      (*(float *)((longlong)&local_220->field0_0x0 +
                                                 local_238 * 4 + 8) -
                                      fVar39 * pTVar12[(int)uVar24].field0_0x0._s_0.Z) * fVar1) *
                                      fVar44;
                    lVar35 = local_240;
                    local_2cc = fVar43;
                  } while ((int)uVar30 < iVar19);
LAB_14db42a0e:
                  uVar17 = local_180;
                  fVar38 = 0.0;
                  uVar42 = 0.0;
                  uVar45 = 0.0;
                  if (local_2a8 <= __real_38d1b717) {
                    local_2d8 = 0.0;
                    fVar43 = fVar38;
                    fVar44 = fVar38;
                    fVar47 = fVar38;
                    fVar46 = fVar38;
                    fVar48 = fVar38;
                    fVar39 = fVar38;
                  }
                  else {
                    local_2a8 = __real_3f800000 / local_2a8;
                    local_2cc = local_2cc * local_2a8;
                    local_2c8 = local_2c8 * local_2a8;
                    local_2c4 = local_2c4 * local_2a8;
                    fVar47 = fVar47 * local_2a8 - local_2c8;
                    uVar45 = fVar48 * local_2a8 - local_2c4;
                    fVar44 = fVar46 * local_2a8 - local_2cc;
                    fVar38 = fVar47 * fVar47 + fVar44 * fVar44 + (float)uVar45 * (float)uVar45;
                    fVar48 = (float)((ulonglong)
                                     UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
                    local_180._0_4_ = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                    fVar46 = (float)local_180;
                    local_180 = uVar17;
                    if (fVar38 != __real_3f800000) {
                      if (__real_322bcc77 <= fVar38) {
                        fVar38 = __real_3f800000 / SQRT(fVar38);
                        fVar44 = fVar38 * fVar44;
                        fVar47 = fVar38 * fVar47;
                        uVar45 = fVar38 * (float)uVar45;
                      }
                      else {
                        local_180 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                        fVar44 = fVar46;
                        fVar47 = fVar48;
                        uVar45 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                      }
                    }
                    fVar43 = local_2ac * local_2a8 - local_2c8;
                    fVar38 = local_2b0 * local_2a8 - local_2cc;
                    uVar42 = local_2d0 * local_2a8 - local_2c4;
                    fVar39 = fVar43 * fVar43 + fVar38 * fVar38 + (float)uVar42 * (float)uVar42;
                    if (fVar39 != __real_3f800000) {
                      if (__real_322bcc77 <= fVar39) {
                        fVar39 = __real_3f800000 / SQRT(fVar39);
                        fVar38 = fVar39 * fVar38;
                        fVar43 = fVar39 * fVar43;
                        uVar42 = fVar39 * (float)uVar42;
                      }
                      else {
                        local_160 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                        fVar38 = fVar46;
                        fVar43 = fVar48;
                        uVar42 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                      }
                    }
                    fVar39 = (float)uVar45 * fVar43 - fVar47 * (float)uVar42;
                    fVar49 = fVar44 * (float)uVar42 - (float)uVar45 * fVar38;
                    local_2d0 = fVar47 * fVar38 - fVar44 * fVar43;
                    fVar40 = fVar49 * fVar49 + fVar39 * fVar39 + local_2d0 * local_2d0;
                    if (fVar40 != __real_3f800000) {
                      if (__real_322bcc77 <= fVar40) {
                        fVar46 = __real_3f800000 / SQRT(fVar40);
                        local_2d0 = local_2d0 * fVar46;
                        fVar39 = fVar39 * fVar46;
                        fVar49 = fVar49 * fVar46;
                      }
                      else {
                        local_170 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                        local_2d0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                        fVar39 = fVar46;
                        fVar49 = fVar48;
                      }
                    }
                    uVar30 = ~uVar32 >> 0x1f;
                    uVar20 = 0;
                    if ((int)uVar32 < local_1e8.ArrayNum) {
                      uVar20 = uVar30;
                    }
                    if ((uVar20 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    local_230 = (double)*(float *)((longlong)&(local_1e8.DataPtr)->field0_0x0 +
                                                  local_1f8);
                    dVar16 = (double)*(float *)((longlong)&(local_1e8.DataPtr)->field0_0x0 +
                                               local_1f8 + 8);
                    local_220 = (TVector<float> *)
                                (double)*(float *)((longlong)&(local_1e8.DataPtr)->field0_0x0 +
                                                  local_1f8 + 4);
                    uVar20 = 0;
                    if ((int)uVar32 < local_1c8.ArrayNum) {
                      uVar20 = uVar30;
                    }
                    if ((uVar20 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    local_228 = (TVector<float> *)
                                (double)local_1c8.DataPtr[lVar35].field0_0x0._s_0.X;
                    uVar20 = 0;
                    if ((int)uVar32 < local_1d8.ArrayNum) {
                      uVar20 = uVar30;
                    }
                    local_218 = (double)local_1c8.DataPtr[lVar35].field0_0x0._s_0.Y;
                    dVar15 = (double)local_1c8.DataPtr[lVar35].field0_0x0._s_0.Z;
                    if ((uVar20 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar18)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    dVar37 = (double)local_1d8.DataPtr[lVar35].field0_0x0._s_0.Y;
                    dVar41 = (double)local_1d8.DataPtr[lVar35].field0_0x0._s_0.Z;
                    fVar40 = __real_3f800000;
                    if (((dVar16 * local_218 - (double)local_220 * dVar15) *
                         (double)local_1d8.DataPtr[lVar35].field0_0x0._s_0.X -
                        (dVar16 * dVar37 - (double)local_220 * dVar41) * (double)local_228) +
                        (dVar15 * dVar37 - dVar41 * local_218) * local_230 < __real_0000000000000000
                       ) {
                      fVar40 = __real_bf800000;
                    }
                    fVar46 = fVar40 * local_2d0;
                    fVar48 = fVar40 * fVar39;
                    fVar39 = fVar40 * fVar49;
                  }
                  iVar21 = local_198.ArrayNum;
                  if (1 < iVar19) {
                    local_2d8 = local_2d8 / (float)iVar19;
                  }
                  uVar30 = ~uVar32 >> 0x1f;
                  uVar20 = 0;
                  if ((int)uVar32 < local_198.ArrayNum) {
                    uVar20 = uVar30;
                  }
                  if ((uVar20 == 0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar18)) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  pTVar9 = local_198.DataPtr;
                  uVar20 = 0;
                  if ((int)uVar32 < iVar21) {
                    uVar20 = uVar30;
                  }
                  fVar49 = local_198.DataPtr[lVar35].field0_0x0._s_0.X;
                  fVar40 = local_198.DataPtr[lVar35].field0_0x0._s_0.Y;
                  fVar1 = local_198.DataPtr[lVar35].field0_0x0._s_0.Z;
                  fVar2 = local_198.DataPtr[lVar35].field0_0x0._s_0.X;
                  fVar3 = local_198.DataPtr[lVar35].field0_0x0._s_0.Y;
                  fVar4 = local_198.DataPtr[lVar35].field0_0x0._s_0.Z;
                  if ((uVar20 == 0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar18)) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  pTVar9[lVar35].field0_0x0._s_0.X = (local_2cc - fVar49) * local_2d8 + fVar2;
                  pTVar9[lVar35].field0_0x0._s_0.Y = (local_2c8 - fVar40) * local_2d8 + fVar3;
                  pTVar9[lVar35].field0_0x0._s_0.Z = (local_2c4 - fVar1) * local_2d8 + fVar4;
                  uVar20 = 0;
                  if ((int)uVar32 < local_1e8.ArrayNum) {
                    uVar20 = uVar30;
                  }
                  if ((uVar20 == 0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar18)) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  lVar36 = local_240;
                  fVar38 = (fVar38 - local_1e8.DataPtr[lVar35].field0_0x0._s_0.X) * local_2d8 +
                           local_1e8.DataPtr[lVar35].field0_0x0._s_0.X;
                  uVar42 = ((float)uVar42 - local_1e8.DataPtr[lVar35].field0_0x0._s_0.Z) * local_2d8
                           + local_1e8.DataPtr[lVar35].field0_0x0._s_0.Z;
                  fVar43 = (fVar43 - local_1e8.DataPtr[lVar35].field0_0x0._s_0.Y) * local_2d8 +
                           local_1e8.DataPtr[lVar35].field0_0x0._s_0.Y;
                  fVar49 = fVar43 * fVar43 + fVar38 * fVar38 + (float)uVar42 * (float)uVar42;
                  if (fVar49 != __real_3f800000) {
                    if (__real_322bcc77 <= fVar49) {
                      fVar49 = __real_3f800000 / SQRT(fVar49);
                      fVar38 = fVar49 * fVar38;
                      fVar43 = fVar49 * fVar43;
                      uVar42 = fVar49 * (float)uVar42;
                    }
                    else {
                      fVar38 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                      fVar43 = (float)((ulonglong)
                                       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20
                                      );
                      uVar42 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                    }
                  }
                  uVar20 = 0;
                  if ((int)uVar32 < local_1e8.ArrayNum) {
                    uVar20 = ~uVar32 >> 0x1f;
                  }
                  if ((uVar20 == 0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar18)) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  *(ulonglong *)&local_1e8.DataPtr[lVar36].field0_0x0 = CONCAT44(fVar43,fVar38);
                  local_1e8.DataPtr[lVar36].field0_0x0._s_0.Z = (float)uVar42;
                  uVar20 = 0;
                  if ((int)uVar32 < local_1d8.ArrayNum) {
                    uVar20 = ~uVar32 >> 0x1f;
                  }
                  if ((uVar20 == 0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar18)) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  fVar38 = __real_3f800000;
                  fVar49 = (fVar44 - local_1d8.DataPtr[lVar36].field0_0x0._s_0.X) * local_2d8 +
                           local_1d8.DataPtr[lVar36].field0_0x0._s_0.X;
                  fVar43 = (fVar47 - local_1d8.DataPtr[lVar36].field0_0x0._s_0.Y) * local_2d8 +
                           local_1d8.DataPtr[lVar36].field0_0x0._s_0.Y;
                  uVar42 = ((float)uVar45 - local_1d8.DataPtr[lVar36].field0_0x0._s_0.Z) * local_2d8
                           + local_1d8.DataPtr[lVar36].field0_0x0._s_0.Z;
                  fVar44 = fVar43 * fVar43 + fVar49 * fVar49 + (float)uVar42 * (float)uVar42;
                  if (fVar44 != __real_3f800000) {
                    if (__real_322bcc77 <= fVar44) {
                      fVar44 = __real_3f800000 / SQRT(fVar44);
                      fVar49 = fVar44 * fVar49;
                      fVar43 = fVar44 * fVar43;
                      uVar42 = fVar44 * (float)uVar42;
                    }
                    else {
                      fVar49 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                      fVar43 = (float)((ulonglong)
                                       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20
                                      );
                      uVar42 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                    }
                  }
                  uVar20 = 0;
                  if ((int)uVar32 < local_1d8.ArrayNum) {
                    uVar20 = ~uVar32 >> 0x1f;
                  }
                  if ((uVar20 == 0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar18)) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  *(ulonglong *)&local_1d8.DataPtr[lVar36].field0_0x0 = CONCAT44(fVar43,fVar49);
                  local_1d8.DataPtr[lVar36].field0_0x0._s_0.Z = (float)uVar42;
                  uVar20 = 0;
                  if ((int)uVar32 < local_1c8.ArrayNum) {
                    uVar20 = ~uVar32 >> 0x1f;
                  }
                  if ((uVar20 == 0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar18)) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  fVar47 = (fVar48 - local_1c8.DataPtr[lVar36].field0_0x0._s_0.X) * local_2d8 +
                           local_1c8.DataPtr[lVar36].field0_0x0._s_0.X;
                  fVar43 = (fVar39 - local_1c8.DataPtr[lVar36].field0_0x0._s_0.Y) * local_2d8 +
                           local_1c8.DataPtr[lVar36].field0_0x0._s_0.Y;
                  uVar42 = (fVar46 - local_1c8.DataPtr[lVar36].field0_0x0._s_0.Z) * local_2d8 +
                           local_1c8.DataPtr[lVar36].field0_0x0._s_0.Z;
                  fVar44 = fVar43 * fVar43 + fVar47 * fVar47 + (float)uVar42 * (float)uVar42;
                  if (fVar44 != fVar38) {
                    if (__real_322bcc77 <= fVar44) {
                      fVar44 = fVar38 / SQRT(fVar44);
                      fVar47 = fVar44 * fVar47;
                      fVar43 = fVar44 * fVar43;
                      uVar42 = fVar44 * (float)uVar42;
                    }
                    else {
                      fVar47 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                      fVar43 = (float)((ulonglong)
                                       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20
                                      );
                      uVar42 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                    }
                  }
                  uVar20 = 0;
                  if ((int)uVar32 < local_1c8.ArrayNum) {
                    uVar20 = ~uVar32 >> 0x1f;
                  }
                  if ((uVar20 == 0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar18)) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  *(ulonglong *)&local_1c8.DataPtr[lVar36].field0_0x0 = CONCAT44(fVar43,fVar47);
                  local_1c8.DataPtr[lVar36].field0_0x0._s_0.Z = (float)uVar42;
                  pFVar31 = local_278;
                }
                else {
                  uVar20 = 0;
                  if ((int)uVar32 < local_210) {
                    uVar20 = ~uVar32 >> 0x1f;
                  }
                  if ((uVar20 == 0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar18)) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  fVar44 = local_188[lVar36];
                  if (fVar44 < fVar38) {
                    local_2c4 = 0.0;
                    local_2cc = 0.0;
                    local_2c8 = 0.0;
                    local_2b0 = 0.0;
                    local_2ac = 0.0;
                    local_2d0 = 0.0;
                    fVar46 = 0.0;
                    fVar47 = 0.0;
                    fVar48 = 0.0;
                    local_2a8 = 0.0;
                    local_2d8 = 0.0;
                    lVar35 = lVar36;
                    if (0 < iVar19) goto LAB_14db41c6e;
                    goto LAB_14db42a0e;
                  }
                }
                lVar36 = lVar36 + 1;
                uVar32 = uVar32 + 1;
                local_1f8 = local_1f8 + 0xc;
                lVar33 = lVar33 + 0x10;
                local_240 = lVar36;
                iVar21 = FConstClothCollection::GetNumElements
                                   (pFVar31,pFVar31->RenderVerticesStart,pFVar31->RenderVerticesEnd,
                                    local_268);
              } while ((int)uVar32 < iVar21);
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_270);
        uVar32 = local_254 + 1;
        local_254 = uVar32;
        iVar19 = FManagedArrayCollection::NumElements
                           ((FManagedArrayCollection *)**(undefined8 **)&param_1->field_0x8,
                            ClothCollectionGroup::RenderPatterns);
      } while ((int)uVar32 < iVar19);
    }
  }
  return;
}

// ApplyProxyDeformer @ 14db43510

void __cdecl
UE::Chaos::ClothAsset::FClothGeometryTools::ApplyProxyDeformer
          (TSharedRef<FManagedArrayCollection,1> *param_1,bool param_2)

{
  atomic<int> *paVar1;
  TManagedArray<UE::Math::TVector<float>_> *pTVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  atomic<int> *paVar8;
  TVector<float> *pTVar9;
  TVector<float> *pTVar10;
  TArrayView<UE::Math::TVector<float>_const_,int> local_68;
  TArrayView<UE::Math::TVector<float>_const_,int> local_58;
  undefined1 local_48 [16];
  TReferenceControllerBase<1> *local_38;
  
  FCollectionClothFacade::FCollectionClothFacade((FCollectionClothFacade *)local_48,param_1);
  bVar5 = FConstClothCollection::IsValid((FConstClothCollection *)local_48._8_8_,RenderDeformer);
  if ((!bVar5) ||
     (iVar6 = FManagedArrayCollection::NumElements
                        (((TSharedRef<FManagedArrayCollection_const_,1> *)local_48._8_8_)->Object,
                         ClothCollectionGroup::Lods), pTVar4 = local_38, iVar6 != 1)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
    return;
  }
  paVar8 = (atomic<int> *)&DAT_00000008;
  if (local_38 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    paVar1 = &local_38->SharedReferenceCount;
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = *(TManagedArray<UE::Math::TVector<float>_> **)(local_48._8_8_ + 0x158);
  pTVar10 = (TVector<float> *)0x0;
  iVar6 = 0;
  if (pTVar2 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    pTVar9 = (TVector<float> *)0x0;
    iVar7 = iVar6;
  }
  else {
    iVar7 = (**(code **)(*(longlong *)pTVar2 + 0x60))(pTVar2);
    pTVar9 = *(TVector<float> **)&pTVar2->field_0x10;
    if ((iVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  local_68.DataPtr = pTVar9;
  local_68.ArrayNum = iVar7;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14db43679:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) goto LAB_14db4368c;
  }
  else {
    paVar8 = &pTVar4->SharedReferenceCount;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) goto LAB_14db43679;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  LOCK();
  *paVar8 = (atomic<int>)((int)*paVar8 + 1);
  UNLOCK();
LAB_14db4368c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar2 = *(TManagedArray<UE::Math::TVector<float>_> **)(local_48._8_8_ + 0x150);
  if (pTVar2 != (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    iVar6 = (**(code **)(*(longlong *)pTVar2 + 0x60))(pTVar2);
    pTVar10 = *(TVector<float> **)&pTVar2->field_0x10;
    if ((iVar6 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  local_58.DataPtr = pTVar10;
  local_58.ArrayNum = iVar6;
  ApplyProxyDeformer((FCollectionClothFacade *)local_48,param_2,&local_58,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// BindMeshToRootBone @ 14db43770

void __cdecl
UE::Chaos::ClothAsset::FClothGeometryTools::BindMeshToRootBone
          (TSharedRef<FManagedArrayCollection,1> *param_1,bool param_2,bool param_3)

{
  atomic<int> *paVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  TReferenceControllerBase<1> *pTVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int *piVar13;
  longlong lVar14;
  undefined8 *puVar15;
  int local_res10;
  int local_res20 [2];
  float local_68;
  int local_64;
  float local_60 [2];
  longlong local_58;
  undefined1 local_50 [16];
  TReferenceControllerBase<1> *local_40;
  
  if ((param_2) || (param_3)) {
    FCollectionClothFacade::FCollectionClothFacade((FCollectionClothFacade *)local_50,param_1);
    puVar15 = (undefined8 *)local_50._8_8_;
    pTVar9 = local_40;
    if (param_2) {
      iVar5 = FManagedArrayCollection::NumElements
                        (*(FManagedArrayCollection **)local_50._8_8_,
                         ClothCollectionGroup::SimVertices3D);
      pTVar9 = local_40;
      if (local_40 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        paVar1 = &local_40->SharedReferenceCount;
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_40);
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      plVar2 = *(longlong **)((undefined8)puVar15 + 0x2c);
      if (plVar2 == (longlong *)0x0) {
        local_58 = 0;
        local_res10 = 0;
      }
      else {
        local_res10 = (**(code **)(*plVar2 + 0x60))(plVar2);
        local_58 = plVar2[2];
        if ((local_res10 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        paVar1 = &pTVar9->SharedReferenceCount;
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      plVar2 = *(longlong **)((undefined8)puVar15 + 0x2d);
      if (plVar2 == (longlong *)0x0) {
        lVar14 = 0;
        iVar6 = 0;
      }
      else {
        iVar6 = (**(code **)(*plVar2 + 0x60))(plVar2);
        lVar14 = plVar2[2];
        if ((iVar6 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      uVar12 = 0;
      if (0 < (longlong)iVar5) {
        piVar13 = (int *)(lVar14 + 0xc);
        lVar10 = 0;
        lVar14 = local_58 - lVar14;
        do {
          local_res20[0] = 0;
          uVar7 = 0;
          if ((int)uVar12 < local_res10) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)piVar13 + lVar14 + -0xc),
                     local_res20,1,*(int *)((longlong)piVar13 + lVar14));
          local_68 = 1.0;
          uVar7 = 0;
          if ((int)uVar12 < iVar6) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          TArray<float,TSizedDefaultAllocator<32>_>::CopyToEmpty<float,int>
                    ((TArray<float,TSizedDefaultAllocator<32>_> *)(piVar13 + -3),&local_68,1,
                     *piVar13);
          uVar12 = uVar12 + 1;
          lVar10 = lVar10 + 1;
          piVar13 = piVar13 + 4;
          pTVar9 = local_40;
          puVar15 = (undefined8 *)local_50._8_8_;
        } while (lVar10 < iVar5);
      }
    }
    if (param_3) {
      iVar5 = FManagedArrayCollection::NumElements
                        ((FManagedArrayCollection *)*puVar15,ClothCollectionGroup::RenderVertices);
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        paVar1 = &pTVar9->SharedReferenceCount;
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      plVar2 = (longlong *)puVar15[0x41];
      if (plVar2 == (longlong *)0x0) {
        lVar14 = 0;
        iVar6 = 0;
      }
      else {
        iVar6 = (**(code **)(*plVar2 + 0x60))(plVar2);
        lVar14 = plVar2[2];
        if ((iVar6 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        paVar1 = &pTVar9->SharedReferenceCount;
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      plVar2 = (longlong *)puVar15[0x42];
      if (plVar2 == (longlong *)0x0) {
        lVar10 = 0;
        iVar8 = 0;
      }
      else {
        iVar8 = (**(code **)(*plVar2 + 0x60))(plVar2);
        lVar10 = plVar2[2];
        if ((iVar8 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      uVar12 = 0;
      if (0 < (longlong)iVar5) {
        lVar11 = 0;
        piVar13 = (int *)(lVar10 + 0xc);
        do {
          local_64 = 0;
          uVar7 = 0;
          if ((int)uVar12 < iVar6) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)
                     ((longlong)piVar13 + (lVar14 - lVar10) + -0xc),&local_64,1,
                     *(int *)((lVar14 - lVar10) + (longlong)piVar13));
          local_60[0] = 1.0;
          uVar7 = 0;
          if ((int)uVar12 < iVar8) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          TArray<float,TSizedDefaultAllocator<32>_>::CopyToEmpty<float,int>
                    ((TArray<float,TSizedDefaultAllocator<32>_> *)(piVar13 + -3),local_60,1,*piVar13
                    );
          uVar12 = uVar12 + 1;
          lVar11 = lVar11 + 1;
          piVar13 = piVar13 + 4;
          pTVar9 = local_40;
        } while (lVar11 < iVar5);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  return;
}

// BuildConnectedSeams2D @ 14db43d50

void __cdecl
UE::Chaos::ClothAsset::FClothGeometryTools::BuildConnectedSeams2D
          (TSharedRef<FManagedArrayCollection_const_,1> *param_1,int param_2,FDynamicMesh3 *param_3,
          TArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_4)

{
  TIntVector2<int> *_Src;
  code *pcVar1;
  bool bVar2;
  TArrayView<UE::Math::TIntVector2<int>_const_,int> *pTVar3;
  longlong lVar4;
  TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> local_78;
  FNonManifoldMappingSupport local_68;
  TArrayView<UE::Math::TIntVector2<int>_const_,int> local_58;
  FCollectionClothConstFacade local_48;
  FCollectionClothSeamConstFacade local_30;
  
  UE::Geometry::FNonManifoldMappingSupport::FNonManifoldMappingSupport(&local_68,param_3);
  bVar2 = UE::Geometry::FNonManifoldMappingSupport::IsNonManifoldVertexInSource(&local_68);
  if (bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NonManifold.IsNonManifoldVertexInSource()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothGeometryTools.cpp"
                       ,0x563,
                       L"Cloth source is non-manifold. Cannot use FDynamicMesh to build connected seams"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FCollectionClothConstFacade::FCollectionClothConstFacade(&local_48,param_1);
  FCollectionClothSeamConstFacade::FCollectionClothSeamConstFacade
            (&local_30,&local_48.ClothCollection,param_2);
  pTVar3 = FCollectionClothSeamConstFacade::GetSeamStitch2DEndIndices(&local_30,&local_58);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = pTVar3->ArrayNum;
  lVar4 = (longlong)local_78.ArrayNum;
  _Src = pTVar3->DataPtr;
  if (local_78.ArrayNum == 0) {
    local_78.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_78.ArrayNum,0,&local_78.AllocatorInstance,local_78.ArrayNum,
               &local_78.ArrayMax);
    memcpy(local_78.AllocatorInstance.Data,_Src,lVar4 << 3);
  }
  BuildConnectedSeams(&local_78,param_3,param_4);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ClothCollection.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.ClothCollection.SharedReferenceCount.ReferenceController);
  return;
}

// BuildConnectedSeams @ 14db43ea0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Chaos::ClothAsset::FClothGeometryTools::BuildConnectedSeams
          (TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *param_1,
          FDynamicMesh3 *param_2,
          TArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  int *local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> local_58;
  FScriptContainerElement *pFVar8;
  
  local_58.ArrayNum = param_1->ArrayNum;
  lVar11 = (longlong)local_58.ArrayNum;
  pFVar7 = (param_1->AllocatorInstance).Data;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_58.ArrayNum == 0) {
    local_58.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_58.ArrayNum,0,&local_58.AllocatorInstance,local_58.ArrayNum,
               &local_58.ArrayMax);
    memcpy(local_58.AllocatorInstance.Data,pFVar7,lVar11 << 3);
  }
  pFVar7 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 8;
  FVar9.Data = local_58.AllocatorInstance.Data;
  while (FVar9.Data != pFVar7) {
    if ((*(int *)FVar9.Data == -1) || (*(int *)(FVar9.Data + 4) == -1)) {
      do {
        pFVar8 = pFVar7;
        pFVar7 = pFVar8 + -8;
        if (FVar9.Data == pFVar7) goto LAB_14db43f66;
      } while ((*(int *)pFVar7 == -1) || (*(int *)(pFVar8 + -4) == -1));
      *(undefined8 *)FVar9.Data = *(undefined8 *)pFVar7;
      FVar9.Data = FVar9.Data + 8;
    }
    else {
      FVar9.Data = FVar9.Data + 8;
    }
  }
LAB_14db43f66:
  TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_58,(int)((longlong)FVar9.Data - (longlong)local_58.AllocatorInstance.Data >> 3),
             Default);
  if (0 < local_58.ArrayNum) {
    piVar16 = &param_3->ArrayMax;
    local_70 = piVar16;
    do {
      local_60._0_4_ = 0;
      local_68.Data = (FScriptContainerElement *)0x0;
      local_60 = 0;
      uVar12 = 0;
      if ((int)(local_58.ArrayNum - 1U) < local_58.ArrayNum) {
        uVar12 = ~(local_58.ArrayNum - 1U) >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_80 = *(undefined8 *)
                  (local_58.AllocatorInstance.Data + (longlong)(local_58.ArrayNum + -1) * 8);
      iVar6 = (int)local_60;
      if ((local_68.Data <= (FScriptContainerElement *)&local_80) &&
         ((FScriptContainerElement *)&local_80 < local_68.Data + (longlong)local_60._4_4_ * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = (int)local_60;
      }
      if (iVar6 == local_60._4_4_) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_68,(int *)((longlong)&local_60 + 4));
      }
      local_60 = CONCAT44(local_60._4_4_,iVar6 + 1);
      *(undefined8 *)(local_68.Data + (longlong)iVar6 * 8) = local_80;
      uVar10 = local_58.ArrayNum - 1;
      uVar12 = 0;
      if ((int)uVar10 < local_58.ArrayNum) {
        uVar12 = ~uVar10 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = (local_58.ArrayNum - uVar10) + -1;
      if (iVar6 != 0) {
        memmove(local_58.AllocatorInstance.Data + (longlong)(int)uVar10 * 8,
                local_58.AllocatorInstance.Data + (longlong)(int)uVar10 * 8 + 8,(longlong)iVar6 << 3
               );
      }
      local_58.ArrayNum = local_58.ArrayNum + -1;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,&local_58.AllocatorInstance,local_58.ArrayNum,&local_58.ArrayMax);
      bVar3 = false;
      bVar5 = true;
      local_78 = local_80;
      uVar13 = local_78;
      bVar4 = false;
      if (0 < local_58.ArrayNum) {
        local_78._4_4_ = (int)((ulonglong)local_80 >> 0x20);
        iVar6 = local_58.ArrayNum;
        iVar14 = local_78._4_4_;
        local_78 = uVar13;
        do {
          if ((!bVar5) && (piVar16 = local_70, bVar3)) break;
          uVar12 = 0;
          if (0 < iVar6) {
            lVar11 = 0;
            do {
              uVar10 = 0;
              if ((int)uVar12 < iVar6) {
                uVar10 = ~uVar12 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar1 = *(undefined8 *)(local_58.AllocatorInstance.Data + lVar11);
              local_88 = uVar1;
              iVar6 = UE::Geometry::FDynamicMesh3::FindEdge(param_2,(int)uVar13,(int)uVar1);
              iVar15 = (int)((ulonglong)uVar1 >> 0x20);
              if ((iVar6 != -1) &&
                 (iVar6 = UE::Geometry::FDynamicMesh3::FindEdge(param_2,iVar14,iVar15), iVar6 != -1)
                 ) {
LAB_14db443a8:
                if (((local_68.Data <= (FScriptContainerElement *)&local_88) &&
                    ((FScriptContainerElement *)&local_88 <
                     local_68.Data + (longlong)local_60._4_4_ * 8)) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar5)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                iVar6 = (int)local_60;
                if ((int)local_60 == local_60._4_4_) {
                  iVar6 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x408,&local_68,(int *)((longlong)&local_60 + 4));
                }
                local_60 = CONCAT44(local_60._4_4_,iVar6 + 1);
                *(undefined8 *)(local_68.Data + (longlong)iVar6 * 8) = local_88;
                uVar10 = 0;
                if ((int)uVar12 < local_58.ArrayNum) {
                  uVar10 = ~uVar12 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                iVar6 = (local_58.ArrayNum - uVar12) + -1;
                if (iVar6 != 0) {
                  memmove(local_58.AllocatorInstance.Data + (longlong)(int)uVar12 * 8,
                          local_58.AllocatorInstance.Data + (longlong)(int)uVar12 * 8 + 8,
                          (longlong)iVar6 << 3);
                }
                local_58.ArrayNum = local_58.ArrayNum + -1;
                Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,&local_58.AllocatorInstance,local_58.ArrayNum,&local_58.ArrayMax);
                uVar13 = local_88;
                iVar6 = local_58.ArrayNum;
                goto LAB_14db442ca;
              }
              iVar6 = UE::Geometry::FDynamicMesh3::FindEdge(param_2,(int)uVar13,iVar15);
              if ((iVar6 != -1) &&
                 (iVar6 = UE::Geometry::FDynamicMesh3::FindEdge(param_2,iVar14,(int)uVar1),
                 iVar6 != -1)) {
                local_88 = CONCAT44((undefined4)local_88,local_88._4_4_);
                goto LAB_14db443a8;
              }
              uVar12 = uVar12 + 1;
              lVar11 = lVar11 + 8;
              iVar6 = local_58.ArrayNum;
              bVar3 = bVar4;
            } while ((int)uVar12 < local_58.ArrayNum);
          }
          bVar5 = false;
          if (!bVar3) {
            lVar11 = 0;
            if (0 < (int)local_60 / 2) {
              pFVar7 = local_68.Data + (longlong)((int)local_60 + -1) * 8;
              do {
                uVar13 = *(undefined8 *)(local_68.Data + lVar11 * 8);
                *(undefined8 *)(local_68.Data + lVar11 * 8) = *(undefined8 *)pFVar7;
                lVar11 = lVar11 + 1;
                *(undefined8 *)pFVar7 = uVar13;
                pFVar7 = pFVar7 + -8;
                iVar6 = local_58.ArrayNum;
              } while (lVar11 < (int)local_60 / 2);
            }
            bVar4 = true;
            uVar13 = local_80;
LAB_14db442ca:
            bVar5 = true;
            local_78._4_4_ = (int)((ulonglong)uVar13 >> 0x20);
            iVar14 = local_78._4_4_;
            local_78 = uVar13;
            bVar3 = bVar4;
          }
          piVar16 = local_70;
        } while (0 < iVar6);
      }
      pFVar7 = (param_3->AllocatorInstance).Data;
      if (((pFVar7 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 < pFVar7 + (longlong)*piVar16 * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = param_3->ArrayNum;
      if (iVar6 == *piVar16) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_3->AllocatorInstance,piVar16);
      }
      FVar9.Data = local_68.Data;
      param_3->ArrayNum = iVar6 + 1;
      pFVar7 = (param_3->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(FScriptContainerElement **)&pFVar7->field_0x0 = (FScriptContainerElement *)0x0;
      lVar11 = (longlong)(int)local_60;
      *(int *)&pFVar7[8].field_0x0 = (int)local_60;
      if ((int)local_60 == 0) {
        *(int *)(pFVar7 + 0xc) = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,(int)local_60,0,(ForAnyElementType *)pFVar7,(int)local_60,
                   (int *)(pFVar7 + 0xc));
        memcpy(*(FScriptContainerElement **)&pFVar7->field_0x0,FVar9.Data,lVar11 << 3);
      }
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
    } while (0 < local_58.ArrayNum);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// BuildSimMeshFromDynamicMesh @ 14db462f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Chaos::ClothAsset::FClothGeometryTools::BuildSimMeshFromDynamicMesh
          (TSharedRef<FManagedArrayCollection,1> *param_1,FDynamicMesh3 *param_2,int param_3,
          TVector2<float> *param_4,bool param_5,bool param_6,
          TArray<int,TSizedDefaultAllocator<32>_> *param_7)

{
  int *piVar1;
  undefined4 uVar2;
  ushort uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *pTVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  FName *pFVar12;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTVar13;
  TManagedArray<float> *pTVar14;
  ulonglong uVar15;
  ForElementType<UE::AnimationCore::FBoneWeight> _Dst;
  uint uVar16;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar17;
  FIsland *pFVar18;
  longlong lVar19;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar20;
  atomic<int> *paVar21;
  ForAnyElementType FVar22;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar23;
  uint uVar24;
  longlong lVar25;
  TReferenceControllerBase<1> *pTVar26;
  FSeam *pFVar27;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar28;
  FDynamicMeshAttributeSet *pFVar29;
  FConstClothCollection *this;
  longlong lVar30;
  undefined1 auStackY_228 [32];
  undefined1 local_1d8 [4];
  uint local_1d4;
  int local_1d0 [2];
  undefined1 local_1c8 [16];
  TReferenceControllerBase<1> *local_1b8;
  undefined1 local_1b0 [8];
  TArray<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FIsland,TSizedDefaultAllocator<32>_>
  local_1a8;
  uint local_198;
  int local_194;
  FDynamicMeshAttributeSet *local_190;
  FIsland *local_188;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *local_180;
  TArray<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FSeam,TSizedDefaultAllocator<32>_>
  local_178;
  uint local_168;
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *local_160;
  longlong local_158;
  longlong local_150;
  FName local_148;
  FName local_140;
  longlong local_138;
  undefined **local_130;
  FConstClothCollection *local_128;
  TReferenceControllerBase<1> *local_120;
  int local_118;
  TArray<float,TSizedDefaultAllocator<32>_> *local_110;
  TArray<int,TSizedDefaultAllocator<32>_> *local_108;
  FIsland *local_100;
  FDynamicMesh3 *local_f8;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_f0;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_e0;
  FNonManifoldMappingSupport local_d0;
  FName local_c0;
  ForElementType<UE::AnimationCore::FBoneWeight> local_b8;
  int local_80;
  int local_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_108 = param_7;
  local_f8 = param_2;
  if ((!param_5) &&
     (DeleteSimMesh(param_1), param_7 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) {
    param_7->ArrayNum = 0;
    if (param_7->ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_7->AllocatorInstance,0,&param_7->ArrayMax);
    }
  }
  pFVar29 = (param_2->AttributeSet).Ptr;
  if (pFVar29 == (FDynamicMeshAttributeSet *)0x0) {
    local_190 = (FDynamicMeshAttributeSet *)0x0;
    local_180 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0;
    UE::Geometry::FNonManifoldMappingSupport::FNonManifoldMappingSupport(&local_d0,param_2);
  }
  else {
    local_190 = pFVar29;
    if ((param_3 < (pFVar29->UVLayers).Array.ArrayNum) && (-1 < param_3)) {
      if ((param_3 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar17 = *(TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **)
                 ((pFVar29->UVLayers).Array.AllocatorInstance.Data + (longlong)param_3 * 8);
    }
    else {
      pTVar17 = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0;
    }
    pFVar12 = ::FName::FName(&local_c0,"Default");
    pTVar13 = UE::Geometry::FDynamicMeshAttributeSet::GetSkinWeightsAttribute(pFVar29,*pFVar12);
    local_180 = pTVar13;
    UE::Geometry::FNonManifoldMappingSupport::FNonManifoldMappingSupport(&local_d0,param_2);
    local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.ArrayNum = 0;
    local_1a8.ArrayMax = 0;
    if (pTVar17 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
      ClothAsset::Private::SimMeshBuilder::BuildIslandsFromDynamicMeshUVs
                (pTVar17,param_4,param_6,&local_1a8);
      local_190 = pFVar29;
      local_180 = pTVar13;
      goto LAB_14db46487;
    }
  }
  local_1a8.ArrayNum = 0;
  local_1a8.ArrayMax = 0;
  local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ClothAsset::Private::SimMeshBuilder::UnwrapDynamicMesh(param_2,param_6,&local_1a8);
LAB_14db46487:
  FCollectionClothFacade::FCollectionClothFacade((FCollectionClothFacade *)local_1c8,param_1);
  this = (FConstClothCollection *)local_1c8._8_8_;
  if (param_5) {
    local_194 = FManagedArrayCollection::NumElements
                          (((TSharedRef<FManagedArrayCollection_const_,1> *)local_1c8._8_8_)->Object
                           ,ClothCollectionGroup::SimPatterns);
  }
  else {
    local_194 = 0;
  }
  fVar6 = __real_37800080;
  uVar15 = (ulonglong)local_1a8.ArrayNum;
  local_168 = local_1a8.ArrayNum;
  pFVar18 = (FIsland *)(local_1a8.AllocatorInstance.Data + uVar15 * 0x50);
  FVar22.Data = local_1a8.AllocatorInstance.Data;
  local_100 = pFVar18;
  do {
    local_188 = (FIsland *)FVar22.Data;
    if (local_1a8.ArrayNum != (int)uVar15) {
      local_1d8[0] = 0;
      `TCheckedPointerIterator<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FIsland,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_1d8);
    }
    if ((FIsland *)FVar22.Data == pFVar18) {
      local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178.ArrayNum = 0;
      local_178.ArrayMax = 0;
      ClothAsset::Private::SimMeshBuilder::BuildSeams(&local_1a8,local_f8,local_194,&local_178);
      iVar9 = local_178.ArrayNum;
      pFVar27 = (FSeam *)(local_178.AllocatorInstance.Data + (longlong)local_178.ArrayNum * 0x58);
      FVar22.Data = local_178.AllocatorInstance.Data;
      while( true ) {
        if (local_178.ArrayNum != iVar9) {
          `TCheckedPointerIterator<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FSeam,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_1b0);
        }
        if ((FSeam *)FVar22.Data == pFVar27) break;
        ClothAsset::Private::SimMeshBuilder::AddSeam
                  ((FCollectionClothFacade *)local_1c8,(FSeam *)FVar22.Data);
        FVar22.Data = FVar22.Data + 0x58;
      }
      DestructItems<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FSeam,int>
                ((FSeam *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
      if ((FSeam *)local_178.AllocatorInstance.Data != (FSeam *)0x0) {
        FMemory::Free(local_178.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b8)
      ;
      DestructItems<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FIsland,int>
                ((FIsland *)local_1a8.AllocatorInstance.Data,local_1a8.ArrayNum);
      if ((FIsland *)local_1a8.AllocatorInstance.Data != (FIsland *)0x0) {
        FMemory::Free(local_1a8.AllocatorInstance.Data);
      }
      return;
    }
    if ((((((FIsland *)FVar22.Data)->Indices).ArrayNum != 0) &&
        ((((FIsland *)FVar22.Data)->Positions2D).ArrayNum != 0)) &&
       ((((FIsland *)FVar22.Data)->Positions3D).ArrayNum != 0)) {
      iVar9 = FManagedArrayCollection::NumElements
                        ((this->ManagedArrayCollection).Object,ClothCollectionGroup::SimPatterns);
      FCollectionClothFacade::SetNumSimPatterns((FCollectionClothFacade *)local_1c8,iVar9 + 1);
      pTVar26 = local_1b8;
      if (local_1b8 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        LOCK();
        local_1b8->SharedReferenceCount = (atomic<int>)((int)local_1b8->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        local_1b8->SharedReferenceCount = (atomic<int>)((int)local_1b8->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1b8);
        LOCK();
        pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
        UNLOCK();
      }
      this = (FConstClothCollection *)local_1c8._8_8_;
      local_120 = pTVar26;
      local_128 = (FConstClothCollection *)local_1c8._8_8_;
      local_118 = iVar9;
      bVar8 = FConstClothCollection::IsValid((FConstClothCollection *)local_1c8._8_8_,None);
      if ((!bVar8) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ClothCollection->IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                             ,0x71,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((iVar9 < 0) ||
          (iVar10 = FManagedArrayCollection::NumElements
                              ((this->ManagedArrayCollection).Object,
                               ClothCollectionGroup::SimPatterns), iVar10 <= iVar9)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("PatternIndex >= 0 && PatternIndex < ClothCollection->GetNumElements(ClothCollectionGroup::SimPatterns)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                             ,0x72,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
      local_130 = &___7FCollectionClothSimPatternFacade_ClothAsset_Chaos_UE__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
      uVar11 = FManagedArrayCollection::NumElements
                         ((this->ManagedArrayCollection).Object,ClothCollectionGroup::SimVertices3D)
      ;
      FVar22.Data = (FScriptContainerElement *)local_188;
      lVar19 = (longlong)(int)uVar11;
      local_198 = uVar11;
      FCollectionClothSimPatternFacade::Initialize<int>
                ((FCollectionClothSimPatternFacade *)&local_130,&local_188->Positions2D,
                 &local_188->Positions3D,&local_188->Indices,-1,&local_188->Normals);
      local_138 = lVar19;
      if (local_180 != (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0) {
        FCollectionClothFacade::GetSimBoneIndices((FCollectionClothFacade *)local_1c8,&local_e0);
        FCollectionClothFacade::GetSimBoneWeights((FCollectionClothFacade *)local_1c8,&local_f0);
        local_160 = (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *)
                    (longlong)(((FIsland *)FVar22.Data)->Positions3D).ArrayNum;
        local_158 = 0;
        pTVar26 = local_1b8;
        this = (FConstClothCollection *)local_1c8._8_8_;
        if (0 < (longlong)local_160) {
          lVar19 = lVar19 << 4;
          do {
            lVar30 = local_158;
            uVar24 = 0;
            if ((int)uVar11 < local_f0.ArrayNum) {
              uVar24 = ~uVar11 >> 0x1f;
            }
            local_1d4 = uVar11;
            local_150 = lVar19;
            if ((uVar24 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar23 = (TArray<float,TSizedDefaultAllocator<32>_> *)
                      ((longlong)&((local_f0.DataPtr)->AllocatorInstance).Data + lVar19);
            uVar24 = 0;
            if ((int)uVar11 < local_e0.ArrayNum) {
              uVar24 = ~uVar11 >> 0x1f;
            }
            local_110 = pTVar23;
            if ((uVar24 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar28 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                      ((longlong)&((local_e0.DataPtr)->AllocatorInstance).Data + lVar19);
            uVar24 = 0;
            if ((int)(uVar11 - local_198) <
                (((FIsland *)FVar22.Data)->PositionToSourceIndex).ArrayNum) {
              uVar24 = ~(uVar11 - local_198) >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_b8.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
            local_80 = 0;
            local_7c = 0xc;
            uVar24 = *(uint *)((((FIsland *)FVar22.Data)->PositionToSourceIndex).AllocatorInstance.
                               Data + lVar30 * 4);
            FVar20 = (ForElementType<UE::AnimationCore::FBoneWeight>)
                     (*(longlong *)
                       ((local_180->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar24 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 0x40);
            if ((ForElementType<UE::AnimationCore::FBoneWeight>)&local_b8 != FVar20) {
              iVar9 = *(int *)((longlong)FVar20 + 0x38);
              if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar20 + 0x30) !=
                  (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                FVar20 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)
                          ((longlong)FVar20 + 0x30);
              }
              local_80 = iVar9;
              Core::Private::
              ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                        (4,2,iVar9,0xc,&local_b8,iVar9,&local_7c);
              _Dst = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_b8;
              if (local_b8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                _Dst = local_b8.SecondaryData;
              }
              if (iVar9 != 0) {
                memcpy((void *)_Dst,(void *)FVar20,(longlong)iVar9 << 2);
              }
            }
            iVar9 = local_80;
            TArray<int,TSizedDefaultAllocator<32>_>::SetNum(pTVar28,local_80,No);
            TArray<float,TSizedDefaultAllocator<32>_>::SetNum(pTVar23,iVar9,No);
            uVar24 = 0;
            if (0 < iVar9) {
              lVar19 = 0;
              do {
                uVar16 = ~uVar24 >> 0x1f;
                uVar11 = 0;
                if ((int)uVar24 < local_80) {
                  uVar11 = uVar16;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                FVar20 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_b8;
                if (local_b8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                  FVar20 = local_b8.SecondaryData;
                }
                uVar3 = *(ushort *)((longlong)FVar20 + lVar19);
                uVar11 = 0;
                if ((int)uVar24 < pTVar28->ArrayNum) {
                  uVar11 = uVar16;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                *(uint *)((pTVar28->AllocatorInstance).Data + lVar19) = (uint)uVar3;
                uVar11 = 0;
                if ((int)uVar24 < local_80) {
                  uVar11 = uVar16;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pTVar23 = local_110;
                FVar20 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_b8;
                if (local_b8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                  FVar20 = local_b8.SecondaryData;
                }
                uVar3 = *(ushort *)((uchar *)((longlong)FVar20 + 2) + lVar19);
                uVar11 = 0;
                if ((int)uVar24 < local_110->ArrayNum) {
                  uVar11 = uVar16;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uVar24 = uVar24 + 1;
                *(float *)((pTVar23->AllocatorInstance).Data + lVar19) = (float)uVar3 * fVar6;
                lVar19 = lVar19 + 4;
                lVar30 = local_158;
                uVar11 = local_1d4;
              } while ((int)uVar24 < iVar9);
            }
            if (local_b8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FMemory::Free((void *)local_b8.SecondaryData);
            }
            uVar11 = uVar11 + 1;
            lVar19 = local_150 + 0x10;
            local_158 = lVar30 + 1;
            pTVar26 = local_1b8;
            FVar22.Data = (FScriptContainerElement *)local_188;
            this = (FConstClothCollection *)local_1c8._8_8_;
            local_1d4 = uVar11;
            local_150 = lVar19;
          } while (local_158 < (longlong)local_160);
        }
      }
      pFVar29 = local_190;
      if (local_190 != (FDynamicMeshAttributeSet *)0x0) {
        uVar11 = 0;
        local_1d4 = 0;
        iVar9 = (**(code **)(local_190->_padding_ + 0xd8))(local_190);
        if (0 < iVar9) {
          do {
            local_160 = UE::Geometry::FDynamicMeshAttributeSet::GetWeightLayer(pFVar29,uVar11);
            if (local_160 != (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *)0x0) {
              local_140 = (FName)local_160->_padding_;
              bVar8 = FConstClothCollection::IsValid(this,None);
              if (((!bVar8) ||
                  (iVar9 = FManagedArrayCollection::NumElements
                                     ((this->ManagedArrayCollection).Object,
                                      ClothCollectionGroup::Lods), iVar9 != 1)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothFacade.cpp"
                                     ,0x648,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (pTVar26 == (TReferenceControllerBase<1> *)0x0) {
                paVar21 = (atomic<int> *)&DAT_00000008;
              }
              else {
                paVar21 = &pTVar26->SharedReferenceCount;
                LOCK();
                *paVar21 = (atomic<int>)((int)*paVar21 + 1);
                UNLOCK();
                LOCK();
                *paVar21 = (atomic<int>)((int)*paVar21 + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar26);
              local_148.ComparisonIndex.Value = 0;
              local_148.Number = 0;
              FClothCollection::FindOrAddUserDefinedAttribute<float>
                        ((FClothCollection *)this,&local_140,&ClothCollectionGroup::SimVertices3D,
                         &local_148);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar26);
              if (pTVar26 == (TReferenceControllerBase<1> *)0x0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)0x0);
              }
              else {
                LOCK();
                *paVar21 = (atomic<int>)((int)*paVar21 + 1);
                UNLOCK();
                LOCK();
                *paVar21 = (atomic<int>)((int)*paVar21 + 1);
                UNLOCK();
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar26);
                LOCK();
                pTVar26->SharedReferenceCount =
                     (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
                UNLOCK();
                LOCK();
                pTVar26->SharedReferenceCount =
                     (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar26);
              pTVar14 = FClothCollection::GetUserDefinedAttribute<float>
                                  ((FClothCollection *)this,&local_140,
                                   &ClothCollectionGroup::SimVertices3D);
              if (pTVar14 == (TManagedArray<float> *)0x0) {
                lVar19 = 0;
                iVar9 = 0;
              }
              else {
                iVar9 = (**(code **)(*(longlong *)pTVar14 + 0x60))(pTVar14);
                lVar19 = *(longlong *)&pTVar14->field_0x10;
                if ((iVar9 < 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("ArrayNum >= 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0xfe,L""), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar26);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar26);
              pTVar7 = local_160;
              FVar22.Data = (FScriptContainerElement *)local_188;
              uVar24 = 0;
              pFVar29 = local_190;
              uVar11 = local_1d4;
              if (0 < (local_188->Positions3D).ArrayNum) {
                lVar25 = 0;
                lVar30 = local_138 * 4;
                do {
                  uVar11 = 0;
                  if ((int)uVar24 < (((FIsland *)FVar22.Data)->PositionToSourceIndex).ArrayNum) {
                    uVar11 = ~uVar24 >> 0x1f;
                  }
                  if ((uVar11 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  uVar11 = *(uint *)((((FIsland *)FVar22.Data)->PositionToSourceIndex).
                                     AllocatorInstance.Data + lVar25);
                  uVar2 = *(undefined4 *)
                           (*(longlong *)
                             ((pTVar7->AttribValues).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar11 >> 9) * 8) + (ulonglong)(uVar11 & 0x1ff) * 4);
                  uVar11 = 0;
                  if ((int)(local_198 + uVar24) < iVar9) {
                    uVar11 = ~(local_198 + uVar24) >> 0x1f;
                  }
                  if ((uVar11 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0x14f,
                                         L"Array index out of bounds: %lld from an array of size %lld"
                                        ), bVar8)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  *(undefined4 *)(lVar25 + lVar19 + lVar30) = uVar2;
                  uVar24 = uVar24 + 1;
                  lVar25 = lVar25 + 4;
                  pTVar26 = local_1b8;
                  pFVar29 = local_190;
                  this = (FConstClothCollection *)local_1c8._8_8_;
                  uVar11 = local_1d4;
                } while ((int)uVar24 < (((FIsland *)FVar22.Data)->Positions3D).ArrayNum);
              }
            }
            uVar11 = uVar11 + 1;
            local_1d4 = uVar11;
            iVar9 = (**(code **)(pFVar29->_padding_ + 0xd8))(pFVar29);
          } while ((int)uVar11 < iVar9);
        }
      }
      pTVar28 = local_108;
      if (local_108 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        uVar11 = (((FIsland *)FVar22.Data)->PositionToSourceIndex).ArrayNum + local_108->ArrayNum;
        if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
        }
        piVar1 = &local_108->ArrayMax;
        if (local_108->ArrayMax < (int)uVar11) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar11,&local_108->AllocatorInstance,local_108->ArrayNum,piVar1);
        }
        uVar11 = 0;
        if (0 < (((FIsland *)FVar22.Data)->PositionToSourceIndex).ArrayNum) {
          lVar19 = 0;
          do {
            uVar24 = 0;
            if ((int)uVar11 < (((FIsland *)FVar22.Data)->PositionToSourceIndex).ArrayNum) {
              uVar24 = ~uVar11 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_1d0[0] = UE::Geometry::FNonManifoldMappingSupport::GetOriginalNonManifoldVertexID
                                     (&local_d0,
                                      *(int *)((((FIsland *)FVar22.Data)->PositionToSourceIndex).
                                               AllocatorInstance.Data + lVar19));
            pFVar4 = (pTVar28->AllocatorInstance).Data;
            if (((pFVar4 <= (FScriptContainerElement *)local_1d0) &&
                ((FScriptContainerElement *)local_1d0 < pFVar4 + (longlong)*piVar1 * 4)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar9 = pTVar28->ArrayNum;
            if (iVar9 == *piVar1) {
              iVar9 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&pTVar28->AllocatorInstance,piVar1);
            }
            uVar11 = uVar11 + 1;
            pTVar28->ArrayNum = iVar9 + 1;
            lVar19 = lVar19 + 4;
            *(int *)((pTVar28->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_1d0[0];
            this = (FConstClothCollection *)local_1c8._8_8_;
          } while ((int)uVar11 < (((FIsland *)FVar22.Data)->PositionToSourceIndex).ArrayNum);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_120)
      ;
      pFVar18 = local_100;
    }
    uVar15 = (ulonglong)local_168;
    FVar22.Data = FVar22.Data + 0x50;
  } while( true );
}

// BuildSimMeshFromDynamicMeshes @ 14db46f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Chaos::ClothAsset::FClothGeometryTools::BuildSimMeshFromDynamicMeshes
          (TSharedRef<FManagedArrayCollection,1> *param_1,FDynamicMesh3 *param_2,
          FDynamicMesh3 *param_3,int param_4,bool param_5,bool param_6,bool param_7,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_8)

{
  FRefCountVector *pFVar1;
  double *pdVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  FDynamicMesh3 *pFVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar13;
  TIntVector2<int> *pTVar14;
  FName *pFVar15;
  uint *puVar16;
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *pTVar17;
  TManagedArray<float> *pTVar18;
  FDynamicMeshAttributeSet *pFVar19;
  ulonglong uVar20;
  FDynamicMeshAttributeSet *pFVar21;
  ForElementType<FSetElementId> FVar22;
  uint uVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  atomic<int> *paVar26;
  longlong lVar27;
  uint uVar28;
  TReferenceControllerBase<1> *pTVar29;
  uint uVar30;
  ulonglong uVar32;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar33;
  FDynamicMesh3 *pFVar34;
  longlong lVar35;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *this;
  undefined1 auStackY_2d8 [32];
  undefined1 local_288 [4];
  int local_284;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_280;
  uint local_270;
  undefined8 local_268;
  undefined4 local_260 [2];
  FDynamicMesh3 *local_258;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_250;
  TArray<int,TSizedDefaultAllocator<32>_> local_240;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_230;
  undefined1 local_220 [16];
  TReferenceControllerBase<1> *local_210;
  float local_208;
  float fStack_204;
  FDynamicMeshAttributeSet *local_200;
  IndexIterator local_1f8;
  float local_1e8;
  float fStack_1e4;
  float local_1e0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_1d8;
  FDynamicMesh3 *local_1d0;
  int local_1c8;
  int local_1c4;
  uint local_1c0;
  int iStack_1bc;
  FName local_1b8;
  FName local_1b0;
  uint local_1a8;
  undefined8 local_1a4;
  undefined1 local_19c [12];
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_190;
  uint *local_180;
  undefined8 *local_178;
  TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> local_170;
  int *local_160;
  int *local_158;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_150;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_140;
  IndexIterator local_130;
  undefined1 local_120 [24];
  int local_108;
  FCollectionClothSimPatternConstFacade local_100;
  FName local_e0;
  double local_d8;
  double dStack_d0;
  undefined8 local_c8;
  double local_b0;
  TSet<TTuple<int,UE::Math::TIntVector2<int>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TIntVector2<int>,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  FDynamicMeshAttributeSet *pFVar31;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_1d8 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
              param_8;
  local_258 = param_2;
  local_1d0 = param_3;
  if (!param_7) {
    DeleteSimMesh(param_1);
  }
  FCollectionClothFacade::FCollectionClothFacade((FCollectionClothFacade *)local_220,param_1);
  uVar9 = local_220._8_8_;
  bVar10 = FConstClothCollection::IsValid((FConstClothCollection *)local_220._8_8_,None);
  if (((!bVar10) ||
      (iVar11 = FManagedArrayCollection::NumElements
                          (((TSharedRef<FManagedArrayCollection_const_,1> *)uVar9)->Object,
                           ClothCollectionGroup::Lods), iVar11 != 1)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Cloth.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothGeometryTools.cpp"
                          ,0x36b,
                          L"Invalid ClothCollection passed into BuildSimMeshFromDynamicMeshes"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((param_2->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mesh2D.HasAttributes()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothGeometryTools.cpp"
                          ,0x36d,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar31 = (param_2->AttributeSet).Ptr;
  pFVar21 = (FDynamicMeshAttributeSet *)0x0;
  pFVar19 = pFVar21;
  if (pFVar31 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar19 = pFVar31;
  }
  pTVar13 = UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer(pFVar19,param_4);
  if ((pTVar13 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("PatternLayer",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothGeometryTools.cpp"
                          ,0x36f,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_280.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_280.ArrayNum = 0;
  local_280.ArrayMax = 0;
  pFVar31 = pFVar21;
  if (0 < (int)((param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_2->TriangleRefCounts).RefCounts.CurBlockUsed)) {
    do {
      uVar20 = (ulonglong)((uint)pFVar31 & 0x1ff);
      uVar30 = *(uint *)(*(longlong *)
                          (*(longlong *)&pTVar13->field_0x20 + ((ulonglong)pFVar31 >> 9) * 8) +
                        uVar20 * 4);
      uVar24 = (uint)pFVar21;
      if ((int)uVar24 <= (int)uVar30) {
        uVar23 = uVar30 + 1;
        if ((int)uVar24 < (int)uVar23) {
          iVar11 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,uVar23 - uVar24,&local_280.AllocatorInstance,
                              &local_280.ArrayNum,&local_280.ArrayMax);
          memset(local_280.AllocatorInstance.Data + (longlong)iVar11 * 0x10,0,
                 (longlong)(int)(uVar23 - uVar24) << 4);
          uVar24 = local_280.ArrayNum;
        }
        else {
          if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
          }
          if ((int)uVar23 < (int)uVar24) {
            uVar28 = uVar24 - uVar23;
            if (((int)(uVar28 | uVar23) < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), uVar24 = local_280.ArrayNum, bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (uVar28 != 0) {
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
              RemoveAtImpl(&local_280,uVar23,uVar28);
              Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&local_280.AllocatorInstance,local_280.ArrayNum,&local_280.ArrayMax)
              ;
              uVar24 = local_280.ArrayNum;
            }
          }
        }
      }
      uVar28 = ~uVar30 >> 0x1f;
      lVar27 = *(longlong *)
                ((local_258->Triangles).Blocks.AllocatorInstance.Data +
                ((ulonglong)pFVar31 >> 9) * 8);
      local_268 = *(undefined8 *)(lVar27 + uVar20 * 0xc);
      local_260[0] = *(undefined4 *)(lVar27 + 8 + uVar20 * 0xc);
      uVar23 = 0;
      if ((int)uVar30 < (int)uVar24) {
        uVar23 = uVar28;
      }
      if ((uVar23 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar27 = (longlong)(int)uVar30 * 0x10;
      pFVar25 = local_280.AllocatorInstance.Data + lVar27;
      if (((*(FScriptContainerElement **)&pFVar25->field_0x0 <=
            (FScriptContainerElement *)&local_268) &&
          ((FScriptContainerElement *)&local_268 <
           *(FScriptContainerElement **)&pFVar25->field_0x0 + (longlong)*(int *)(pFVar25 + 0xc) * 4)
          ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = *(int *)(pFVar25 + 8);
      if (iVar11 == *(int *)(pFVar25 + 0xc)) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)pFVar25,(int *)(pFVar25 + 0xc));
      }
      *(int *)(pFVar25 + 8) = iVar11 + 1;
      *(undefined4 *)(*(FScriptContainerElement **)&pFVar25->field_0x0 + (longlong)iVar11 * 4) =
           (undefined4)local_268;
      uVar24 = 0;
      if ((int)uVar30 < local_280.ArrayNum) {
        uVar24 = uVar28;
      }
      if ((uVar24 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar25 = local_280.AllocatorInstance.Data + lVar27;
      if (((*(FScriptContainerElement **)&pFVar25->field_0x0 <=
            (FScriptContainerElement *)((longlong)&local_268 + 4U)) &&
          ((FScriptContainerElement *)((longlong)&local_268 + 4U) <
           *(FScriptContainerElement **)&pFVar25->field_0x0 + (longlong)*(int *)(pFVar25 + 0xc) * 4)
          ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = *(int *)(pFVar25 + 8);
      if (iVar11 == *(int *)(pFVar25 + 0xc)) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)pFVar25,(int *)(pFVar25 + 0xc));
      }
      *(int *)(pFVar25 + 8) = iVar11 + 1;
      *(undefined4 *)(*(FScriptContainerElement **)&pFVar25->field_0x0 + (longlong)iVar11 * 4) =
           local_268._4_4_;
      uVar24 = 0;
      if ((int)uVar30 < local_280.ArrayNum) {
        uVar24 = uVar28;
      }
      if ((uVar24 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar25 = local_280.AllocatorInstance.Data + lVar27;
      if (((*(FScriptContainerElement **)&pFVar25->field_0x0 <= (FScriptContainerElement *)local_260
           ) && ((FScriptContainerElement *)local_260 <
                 *(FScriptContainerElement **)&pFVar25->field_0x0 +
                 (longlong)*(int *)(pFVar25 + 0xc) * 4)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = *(int *)(pFVar25 + 8);
      if (iVar11 == *(int *)(pFVar25 + 0xc)) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)pFVar25,(int *)(pFVar25 + 0xc));
      }
      *(int *)(pFVar25 + 8) = iVar11 + 1;
      uVar30 = (uint)pFVar31 + 1;
      pFVar31 = (FDynamicMeshAttributeSet *)(ulonglong)uVar30;
      *(undefined4 *)(*(FScriptContainerElement **)&pFVar25->field_0x0 + (longlong)iVar11 * 4) =
           local_260[0];
      pFVar21 = (FDynamicMeshAttributeSet *)(ulonglong)(uint)local_280.ArrayNum;
    } while ((int)uVar30 <
             (int)((local_258->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                  (local_258->TriangleRefCounts).RefCounts.CurBlockUsed));
  }
  uVar32 = 0;
  local_a8.Elements._0_8_ = 0;
  local_a8.Elements._8_8_ = 0;
  local_a8.Elements._32_8_ = 0;
  local_a8.Elements._40_4_ = 0;
  local_a8.Elements._44_4_ = 0x80;
  local_a8.Elements._48_4_ = 0xffffffff;
  local_a8.Elements._52_4_ = 0;
  local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.HashSize = 0;
  uVar20 = uVar32;
  if (0 < local_280.ArrayNum) {
    do {
      iVar11 = FManagedArrayCollection::NumElements
                         (((TSharedRef<FManagedArrayCollection_const_,1> *)local_220._8_8_)->Object,
                          ClothCollectionGroup::SimPatterns);
      FCollectionClothFacade::SetNumSimPatterns((FCollectionClothFacade *)local_220,iVar11 + 1);
      FCollectionClothFacade::GetSimPattern
                ((FCollectionClothFacade *)local_220,(FCollectionClothSimPatternFacade *)local_120,
                 iVar11);
      FConstClothCollection::GetElementsOffset
                (*(TManagedArray<int> **)(local_120._8_8_ + 200),0,local_108);
      uVar24 = (uint)uVar20;
      local_250.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_250.ArrayNum = 0;
      local_250.ArrayMax = 0;
      local_230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar30 = 0;
      if ((int)uVar24 < local_280.ArrayNum) {
        uVar30 = ~uVar24 >> 0x1f;
      }
      local_230.ArrayNum = 0;
      local_230.ArrayMax = 0;
      if ((uVar30 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar7.Data = local_280.AllocatorInstance.Data;
      local_240.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_240.ArrayNum = 0;
      local_240.ArrayMax = 0;
      local_270 = *(uint *)(local_280.AllocatorInstance.Data + uVar32 + 8);
      uVar20 = (ulonglong)(int)local_270;
      pFVar31 = *(FDynamicMeshAttributeSet **)(local_280.AllocatorInstance.Data + uVar32);
      local_200 = (FDynamicMeshAttributeSet *)((longlong)&pFVar31->_padding_ + uVar20 * 4);
      while( true ) {
        pFVar19 = local_200;
        if (*(int *)(FVar7.Data + uVar32 + 8) != (int)uVar20) {
          local_288[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_288);
        }
        if (pFVar31 == pFVar19) break;
        uVar30 = (uint)pFVar31->_padding_;
        if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
          FVar22 = (ForElementType<FSetElementId>)&local_a8.Hash;
          if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar22 = local_a8.Hash.SecondaryData;
          }
          for (iVar11 = *(int *)((longlong)FVar22 + (ulonglong)(local_a8.HashSize - 1U & uVar30) * 4
                                ); iVar11 != -1;
              iVar11 = *(int *)(local_a8.Elements._0_8_ + 0xc + (longlong)iVar11 * 0x14)) {
            if (*(uint *)(local_a8.Elements._0_8_ + (longlong)iVar11 * 0x14) == uVar30) {
              if (iVar11 != -1) {
                pTVar14 = TMapBase<int,UE::Math::TIntVector2<int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TIntVector2<int>,0>_>
                          ::FindChecked((TMapBase<int,UE::Math::TIntVector2<int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TIntVector2<int>,0>_>
                                         *)&local_a8,uVar30);
                if (((pTVar14->field0_0x0)._s_0.X != uVar24) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("MeshVertexToPatternAndVertex[VertexIndex][0] == PatternID",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothGeometryTools.cpp"
                                        ,0x39e,L""), bVar10)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pTVar14 = TMapBase<int,UE::Math::TIntVector2<int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TIntVector2<int>,0>_>
                          ::FindChecked((TMapBase<int,UE::Math::TIntVector2<int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TIntVector2<int>,0>_>
                                         *)&local_a8,uVar30);
                local_284 = (pTVar14->field0_0x0)._s_0.Y;
                goto LAB_14db478dc;
              }
              break;
            }
          }
        }
        uVar20 = (ulonglong)(uVar30 & 0x1ff);
        lVar27 = *(longlong *)
                  ((local_258->Vertices).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar30 >> 9) * 8);
        local_c8 = *(undefined8 *)(lVar27 + 0x10 + uVar20 * 0x18);
        pdVar2 = (double *)(lVar27 + uVar20 * 0x18);
        local_d8 = *pdVar2;
        dStack_d0 = pdVar2[1];
        local_208 = (float)local_d8;
        fStack_204 = (float)dStack_d0;
        if (((local_250.AllocatorInstance.Data <= (FScriptContainerElement *)&local_208) &&
            ((FScriptContainerElement *)&local_208 <
             local_250.AllocatorInstance.Data + (longlong)local_250.ArrayMax * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_250.ArrayNum == local_250.ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_250.AllocatorInstance,&local_250.ArrayMax);
          local_250.ArrayNum = iVar11;
        }
        local_284 = local_250.ArrayNum;
        lVar27 = (longlong)local_250.ArrayNum;
        local_250.ArrayNum = local_250.ArrayNum + 1;
        *(ulonglong *)(local_250.AllocatorInstance.Data + lVar27 * 8) =
             CONCAT44(fStack_204,local_208);
        lVar27 = *(longlong *)
                  ((local_1d0->Vertices).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar30 >> 9) * 8);
        local_b0 = *(double *)(lVar27 + 0x10 + uVar20 * 0x18);
        pdVar2 = (double *)(lVar27 + uVar20 * 0x18);
        local_1e8 = (float)*pdVar2;
        fStack_1e4 = (float)pdVar2[1];
        local_1e0 = (float)local_b0;
        if (((local_230.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1e8) &&
            ((FScriptContainerElement *)&local_1e8 <
             local_230.AllocatorInstance.Data + (longlong)local_230.ArrayMax * 0xc)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar11 = local_230.ArrayNum;
        if (local_230.ArrayNum == local_230.ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,&local_230.AllocatorInstance,&local_230.ArrayMax);
        }
        local_230.ArrayNum = iVar11 + 1;
        *(ulonglong *)(local_230.AllocatorInstance.Data + (longlong)iVar11 * 0xc) =
             CONCAT44(fStack_1e4,local_1e8);
        *(float *)(local_230.AllocatorInstance.Data + (longlong)iVar11 * 0xc + 8) = local_1e0;
        iStack_1bc = local_284;
        local_1a4 = CONCAT44(local_284,uVar24);
        local_180 = &local_1a8;
        local_178 = &local_1a4;
        local_1c0 = uVar24;
        local_1a8 = uVar30;
        TSet<TTuple<int,UE::Math::TIntVector2<int>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TIntVector2<int>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_&&,UE::Math::TIntVector2<int>_&&>_>
                  (&local_a8,(TPairInitializer<int_&&,UE::Math::TIntVector2<int>_&&> *)local_19c,
                   (bool *)&local_180);
LAB_14db478dc:
        if (((local_240.AllocatorInstance.Data <= (FScriptContainerElement *)&local_284) &&
            ((FScriptContainerElement *)&local_284 <
             local_240.AllocatorInstance.Data + (longlong)local_240.ArrayMax * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar11 = local_240.ArrayNum;
        if (local_240.ArrayNum == local_240.ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_240.AllocatorInstance,&local_240.ArrayMax);
        }
        local_240.ArrayNum = iVar11 + 1;
        pFVar31 = (FDynamicMeshAttributeSet *)((longlong)&pFVar31->_padding_ + 4);
        *(int *)(local_240.AllocatorInstance.Data + (longlong)iVar11 * 4) = local_284;
        uVar20 = (ulonglong)local_270;
      }
      local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_190.ArrayNum = 0;
      local_190.ArrayMax = 0;
      FCollectionClothSimPatternFacade::Initialize<int>
                ((FCollectionClothSimPatternFacade *)local_120,&local_250,&local_230,&local_240,-1,
                 &local_190);
      if (local_240.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.AllocatorInstance.Data);
      }
      if (local_230.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_230.AllocatorInstance.Data);
      }
      if (local_250.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_250.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_120._16_8_);
      uVar32 = uVar32 + 0x10;
      uVar20 = (ulonglong)(uVar24 + 1);
    } while ((int)(uVar24 + 1) < local_280.ArrayNum);
  }
  pTVar29 = local_210;
  pFVar8 = local_258;
  uVar20 = 0;
  pFVar1 = &local_258->VertexRefCounts;
  this = local_1d8;
  if (0 < (int)((local_258->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (local_258->VertexRefCounts).RefCounts.CurBlockUsed)) {
    do {
      lVar35 = 0;
      iVar11 = (int)uVar20;
      lVar27 = lVar35;
      if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
        FVar22 = (ForElementType<FSetElementId>)&local_a8.Hash;
        if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar22 = local_a8.Hash.SecondaryData;
        }
        iVar12 = *(int *)((longlong)FVar22 + (local_a8.HashSize - 1 & uVar20) * 4);
        while (lVar27 = lVar35, iVar12 != -1) {
          lVar27 = local_a8.Elements._0_8_ + (longlong)iVar12 * 0x14;
          if (*(int *)(local_a8.Elements._0_8_ + (longlong)iVar12 * 0x14) == iVar11) {
            if (lVar27 != 0) goto LAB_14db47b30;
            break;
          }
          iVar12 = *(int *)(lVar27 + 0xc);
        }
      }
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L"");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
LAB_14db47b30:
      iVar12 = *(int *)(lVar27 + 4);
      lVar27 = lVar35;
      if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
        FVar22 = (ForElementType<FSetElementId>)&local_a8.Hash;
        if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar22 = local_a8.Hash.SecondaryData;
        }
        iVar5 = *(int *)((longlong)FVar22 + (local_a8.HashSize - 1 & uVar20) * 4);
        while (lVar27 = lVar35, iVar5 != -1) {
          lVar27 = local_a8.Elements._0_8_ + (longlong)iVar5 * 0x14;
          if (*(int *)(local_a8.Elements._0_8_ + (longlong)iVar5 * 0x14) == iVar11) {
            if (lVar27 != 0) goto LAB_14db47bb5;
            break;
          }
          iVar5 = *(int *)(lVar27 + 0xc);
        }
      }
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L"");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
LAB_14db47bb5:
      iVar5 = *(int *)(lVar27 + 8);
      if (pTVar29 == (TReferenceControllerBase<1> *)0x0) {
        paVar26 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar26 = &pTVar29->SharedReferenceCount;
        LOCK();
        *paVar26 = (atomic<int>)((int)*paVar26 + 1);
        UNLOCK();
        LOCK();
        *paVar26 = (atomic<int>)((int)*paVar26 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29);
      local_170.Object = (FConstClothCollection *)local_220._8_8_;
      local_170.SharedReferenceCount.ReferenceController = pTVar29;
      if (pTVar29 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar26 = (atomic<int>)((int)*paVar26 + 1);
        UNLOCK();
      }
      FCollectionClothSimPatternConstFacade::FCollectionClothSimPatternConstFacade
                (&local_100,&local_170,iVar12);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29);
      local_100._padding_ = (longlong)&___7FCollectionClothSimPatternFacade_ClothAsset_Chaos_UE__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29);
      iVar12 = FConstClothCollection::GetElementsOffset
                         ((local_100.ClothCollection.Object)->SimVertices2DStart,0,
                          local_100.PatternIndex);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_100.ClothCollection.SharedReferenceCount.ReferenceController);
      this = local_1d8;
      local_160 = &local_1c8;
      local_158 = &local_1c4;
      local_1c8 = iVar11;
      local_1c4 = iVar12 + iVar5;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_&&,int_&&>_>
                (local_1d8,(TPairInitializer<int_&&,int_&&> *)(local_19c + 4),(bool *)&local_160);
      uVar20 = (ulonglong)(iVar11 + 1U);
    } while ((int)(iVar11 + 1U) <
             (int)((pFVar1->RefCounts).CurBlock * 0x200 +
                  (pFVar8->VertexRefCounts).RefCounts.CurBlockUsed));
  }
  pFVar34 = local_258;
  if ((param_6) &&
     (pFVar31 = (local_258->AttributeSet).Ptr, pFVar31 != (FDynamicMeshAttributeSet *)0x0)) {
    pFVar15 = ::FName::FName(&local_e0,"Default");
    local_200 = (FDynamicMeshAttributeSet *)
                UE::Geometry::FDynamicMeshAttributeSet::GetSkinWeightsAttribute(pFVar31,*pFVar15);
    if (local_200 != (FDynamicMeshAttributeSet *)0x0) {
      FCollectionClothFacade::GetSimBoneIndices((FCollectionClothFacade *)local_220,&local_140);
      FCollectionClothFacade::GetSimBoneWeights((FCollectionClothFacade *)local_220,&local_150);
      UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                (&local_1f8,pFVar1,0,
                 (pFVar1->RefCounts).CurBlock * 0x200 +
                 (pFVar8->VertexRefCounts).RefCounts.CurBlockUsed);
      iVar11 = (pFVar1->RefCounts).CurBlock * 0x200 +
               (pFVar8->VertexRefCounts).RefCounts.CurBlockUsed;
      UE::Geometry::FRefCountVector::IndexIterator::IndexIterator(&local_130,pFVar1,iVar11,iVar11);
      uVar20 = (ulonglong)(uint)local_1f8._8_4_;
      pTVar29 = local_210;
      if (local_1f8._8_4_ != local_130._8_4_) {
        do {
          iVar11 = (int)uVar20;
          puVar16 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                            ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                           *)this,iVar11);
          uVar30 = *puVar16;
          uVar24 = 0;
          if ((int)uVar30 < local_150.ArrayNum) {
            uVar24 = ~uVar30 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar33 = local_150.DataPtr + (int)uVar30;
          uVar24 = 0;
          if ((int)uVar30 < local_140.ArrayNum) {
            uVar24 = ~uVar30 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::
          GetValue<int,float>((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                              local_200,iVar11,local_140.DataPtr + (int)uVar30,pTVar33);
          local_1f8._8_4_ = iVar11 + 1;
          uVar20 = (ulonglong)(uint)local_1f8._8_4_;
          if ((int)local_1f8._8_4_ < (int)local_1f8._12_4_) {
            do {
              if ((*(short *)(*(longlong *)(*(longlong *)(local_1f8._0_8_ + 8) + (uVar20 >> 9) * 8)
                             + (ulonglong)(local_1f8._8_4_ & 0x1ff) * 2) != 0) &&
                 (*(short *)(*(longlong *)(*(longlong *)(local_1f8._0_8_ + 8) + (uVar20 >> 9) * 8) +
                            (ulonglong)(local_1f8._8_4_ & 0x1ff) * 2) != -1)) break;
              local_1f8._8_4_ = (int)uVar20 + 1;
              uVar20 = (ulonglong)(uint)local_1f8._8_4_;
            } while ((int)local_1f8._8_4_ < (int)local_1f8._12_4_);
          }
          pTVar29 = local_210;
          pFVar34 = local_258;
          this = local_1d8;
        } while ((uint)uVar20 != local_130._8_4_);
      }
    }
  }
  if ((param_5) &&
     (pFVar31 = (pFVar34->AttributeSet).Ptr, local_200 = pFVar31,
     pFVar31 != (FDynamicMeshAttributeSet *)0x0)) {
    uVar30 = 0;
    local_270 = 0;
    iVar11 = (**(code **)(pFVar31->_padding_ + 0xd8))(pFVar31);
    if (0 < iVar11) {
      do {
        pTVar17 = UE::Geometry::FDynamicMeshAttributeSet::GetWeightLayer(pFVar31,uVar30);
        uVar9 = local_220._8_8_;
        if (pTVar17 != (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *)0x0) {
          local_1b0 = (FName)pTVar17->_padding_;
          bVar10 = FConstClothCollection::IsValid((FConstClothCollection *)local_220._8_8_,None);
          if (((!bVar10) ||
              (iVar11 = FManagedArrayCollection::NumElements
                                  (((TSharedRef<FManagedArrayCollection_const_,1> *)uVar9)->Object,
                                   ClothCollectionGroup::Lods), iVar11 != 1)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothFacade.cpp"
                                  ,0x648,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (pTVar29 == (TReferenceControllerBase<1> *)0x0) {
            paVar26 = (atomic<int> *)&DAT_00000008;
          }
          else {
            paVar26 = &pTVar29->SharedReferenceCount;
            LOCK();
            *paVar26 = (atomic<int>)((int)*paVar26 + 1);
            UNLOCK();
            LOCK();
            *paVar26 = (atomic<int>)((int)*paVar26 + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar29);
          local_1b8.ComparisonIndex.Value = 0;
          local_1b8.Number = 0;
          FClothCollection::FindOrAddUserDefinedAttribute<float>
                    ((FClothCollection *)local_220._8_8_,&local_1b0,
                     &ClothCollectionGroup::SimVertices3D,&local_1b8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar29);
          if (pTVar29 == (TReferenceControllerBase<1> *)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
          }
          else {
            LOCK();
            *paVar26 = (atomic<int>)((int)*paVar26 + 1);
            UNLOCK();
            LOCK();
            *paVar26 = (atomic<int>)((int)*paVar26 + 1);
            UNLOCK();
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar29);
            LOCK();
            pTVar29->SharedReferenceCount = (atomic<int>)((int)pTVar29->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            pTVar29->SharedReferenceCount = (atomic<int>)((int)pTVar29->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar29);
          pTVar18 = FClothCollection::GetUserDefinedAttribute<float>
                              ((FClothCollection *)local_220._8_8_,&local_1b0,
                               &ClothCollectionGroup::SimVertices3D);
          if (pTVar18 == (TManagedArray<float> *)0x0) {
            lVar27 = 0;
            iVar11 = 0;
          }
          else {
            iVar11 = (**(code **)(*(longlong *)pTVar18 + 0x60))(pTVar18);
            lVar27 = *(longlong *)&pTVar18->field_0x10;
            if ((iVar11 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar29);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar29);
          iVar12 = (local_258->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                   (local_258->VertexRefCounts).RefCounts.CurBlockUsed;
          uVar24 = 0;
          if (((iVar12 != 0) &&
              (pFVar25 = (local_258->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
              uVar24 = 0, 0xfffd < (ushort)(**(short **)pFVar25 - 1U))) && (uVar24 = 1, 1 < iVar12))
          {
            do {
              sVar4 = *(short *)(*(longlong *)(pFVar25 + (ulonglong)(uVar24 >> 9) * 8) +
                                (ulonglong)(uVar24 & 0x1ff) * 2);
              pTVar29 = local_210;
              if ((sVar4 != 0) && (sVar4 != -1)) break;
              uVar24 = uVar24 + 1;
            } while ((int)uVar24 < iVar12);
          }
          uVar23 = (local_258->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                   (local_258->VertexRefCounts).RefCounts.CurBlockUsed;
          local_1d0 = (FDynamicMesh3 *)CONCAT44(local_1d0._4_4_,uVar23);
          uVar30 = local_270;
          if (uVar24 != uVar23) {
            do {
              uVar3 = *(undefined4 *)
                       (*(longlong *)
                         ((pTVar17->AttribValues).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar24 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 4);
              puVar16 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                               *)local_1d8,uVar24);
              uVar30 = *puVar16;
              uVar28 = 0;
              if ((int)uVar30 < iVar11) {
                uVar28 = ~uVar30 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar24 = uVar24 + 1;
              *(undefined4 *)(lVar27 + (longlong)(int)uVar30 * 4) = uVar3;
              if ((int)uVar24 < iVar12) {
                do {
                  lVar35 = *(longlong *)
                            ((local_258->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar24 >> 9) * 8);
                  if ((*(short *)(lVar35 + (ulonglong)(uVar24 & 0x1ff) * 2) != 0) &&
                     (*(short *)(lVar35 + (ulonglong)(uVar24 & 0x1ff) * 2) != -1)) break;
                  uVar24 = uVar24 + 1;
                } while ((int)uVar24 < iVar12);
                uVar23 = (uint)local_1d0;
              }
              pTVar29 = local_210;
              uVar30 = local_270;
            } while (uVar24 != uVar23);
          }
        }
        pFVar31 = local_200;
        uVar30 = uVar30 + 1;
        local_270 = uVar30;
        iVar11 = (**(code **)(local_200->_padding_ + 0xd8))(local_200);
      } while ((int)uVar30 < iVar11);
    }
  }
  local_a8.HashSize = 0;
  if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TIntVector2<int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TIntVector2<int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a8.Elements);
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_280.AllocatorInstance.Data,
             local_280.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_280.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_280.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29);
  return;
}

// CleanupAndCompactMesh @ 14db4c410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Chaos::ClothAsset::FClothGeometryTools::CleanupAndCompactMesh
          (TSharedRef<FManagedArrayCollection,1> *param_1)

{
  uint *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  FManagedArrayCollection *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  TManagedArray<int> *pTVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  TArrayView<UE::Math::TIntVector3<int>,int> *pTVar12;
  TIntVector3<int> *pTVar13;
  TIntVector3<int> *pTVar14;
  uint uVar15;
  ForElementType<unsigned_int> FVar16;
  int _Val;
  longlong lVar17;
  FConstClothCollection *pFVar18;
  atomic<int> *paVar19;
  uint uVar20;
  TManagedArray<int> *pTVar21;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar22;
  TArray<float,TSizedDefaultAllocator<32>_> *this;
  longlong lVar23;
  FSharedReferencer<1> FVar24;
  uint uVar25;
  FConstClothCollection *this_00;
  uint uVar26;
  ulonglong uVar27;
  TReferenceControllerBase<1> *pTVar28;
  undefined1 auStackY_688 [32];
  uint local_638;
  uint local_634;
  uint local_630;
  int local_62c;
  int local_628;
  int local_624;
  undefined1 local_620 [16];
  TReferenceControllerBase<1> *local_610;
  int local_608;
  int local_604;
  uint local_600 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_5f8;
  TArray<int,TSizedDefaultAllocator<32>_> local_5e8;
  ForAnyElementType local_5d8;
  int local_5d0;
  int local_5cc;
  TArray<int,TSizedDefaultAllocator<32>_> local_5c8;
  TArray<int,TSizedDefaultAllocator<32>_> local_5b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_5a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_598;
  TArrayView<UE::Math::TIntVector3<int>_const_,int> local_588;
  TArray<int,TSizedDefaultAllocator<32>_> local_578;
  undefined8 local_568;
  TArrayView<UE::Math::TIntVector3<int>_const_,int> local_560;
  TManagedArray<int> *local_550;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_548;
  FCollectionClothRenderPatternConstFacade local_538;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_518;
  undefined1 local_4f8 [16];
  TReferenceControllerBase<1> *local_4e8;
  undefined8 local_4e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4d8;
  longlong local_4b8;
  longlong local_4b0;
  int local_4a8;
  int local_4a4;
  TSharedRef<FManagedArrayCollection,1> *local_4a0;
  FCollectionClothSeamConstFacade local_498;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_478;
  TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> local_468;
  TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> local_458;
  TArrayView<UE::Math::TIntVector3<int>,int> local_448;
  FCollectionClothSeamConstFacade local_438;
  TArrayView<UE::Math::TIntVector3<int>,int> local_418;
  TArrayView<UE::Math::TIntVector3<int>,int> local_408;
  TArrayView<UE::Math::TIntVector3<int>,int> local_3f8;
  TArrayView<UE::Math::TIntVector3<int>,int> local_3e8;
  TArrayView<UE::Math::TIntVector3<int>,int> local_3d8;
  FEmbeddedSpringBaseFacade local_3c8;
  ForElementType<unsigned_int> local_98;
  uint local_80;
  int local_7c;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_688;
  local_4a0 = param_1;
  FCollectionClothFacade::FCollectionClothFacade((FCollectionClothFacade *)local_620,param_1);
  local_598.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_598.ArrayNum = 0;
  local_598.ArrayMax = 0;
  local_62c = 0;
  iVar8 = FManagedArrayCollection::NumElements
                    (((TSharedRef<FManagedArrayCollection_const_,1> *)local_620._8_8_)->Object,
                     ClothCollectionGroup::SimPatterns);
  uVar15 = 0;
  if (local_62c < iVar8) {
    do {
      FCollectionClothFacade::GetSimPattern
                ((FCollectionClothFacade *)local_620,(FCollectionClothSimPatternFacade *)local_4f8,
                 local_62c);
      local_578.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_578.ArrayNum = 0;
      local_578.ArrayMax = 0;
      pTVar12 = FCollectionClothSimPatternFacade::GetSimIndices3D
                          ((FCollectionClothSimPatternFacade *)local_4f8,&local_418);
      local_588.DataPtr = pTVar12->DataPtr;
      iVar8 = pTVar12->ArrayNum;
      local_588.ArrayNum = iVar8;
      pTVar12 = FCollectionClothSimPatternFacade::GetSimIndices2D
                          ((FCollectionClothSimPatternFacade *)local_4f8,&local_408);
      local_638 = 0;
      local_560.DataPtr = pTVar12->DataPtr;
      local_560.ArrayNum = pTVar12->ArrayNum;
      if (0 < iVar8) {
        do {
          uVar20 = local_638;
          uVar25 = uVar15;
          if ((int)local_638 < iVar8) {
            uVar25 = ~local_638 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (local_588.DataPtr[(int)uVar20].field0_0x0._s_0.X == -1) {
LAB_14db4c7e3:
            if (((local_578.AllocatorInstance.Data <= (FScriptContainerElement *)&local_638) &&
                ((FScriptContainerElement *)&local_638 <
                 local_578.AllocatorInstance.Data + (longlong)local_578.ArrayMax * 4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar9 = local_578.ArrayNum;
            if (local_578.ArrayNum == local_578.ArrayMax) {
              iVar9 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_578.AllocatorInstance,&local_578.ArrayMax);
            }
            local_578.ArrayNum = iVar9 + 1;
            *(uint *)(local_578.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_638;
          }
          else {
            lVar17 = (longlong)(int)local_638;
            uVar20 = uVar15;
            if ((int)local_638 < iVar8) {
              uVar20 = ~local_638 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (local_588.DataPtr[lVar17].field0_0x0._s_0.Y == -1) goto LAB_14db4c7e3;
            lVar17 = (longlong)(int)local_638;
            uVar20 = uVar15;
            if ((int)local_638 < iVar8) {
              uVar20 = ~local_638 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (local_588.DataPtr[lVar17].field0_0x0._s_0.Z == -1) goto LAB_14db4c7e3;
            lVar17 = (longlong)(int)local_638;
            uVar20 = uVar15;
            if ((int)local_638 < local_560.ArrayNum) {
              uVar20 = ~local_638 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (local_560.DataPtr[lVar17].field0_0x0._s_0.X == -1) goto LAB_14db4c7e3;
            lVar17 = (longlong)(int)local_638;
            uVar20 = 0;
            if ((int)local_638 < local_560.ArrayNum) {
              uVar20 = ~local_638 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if ((local_560.DataPtr[lVar17].field0_0x0._s_0.Y == -1) ||
               (pTVar13 = TArrayView<UE::Math::TIntVector3<int>_const_,int>::operator[]
                                    (&local_560,local_638), (pTVar13->field0_0x0)._s_0.Z == -1))
            goto LAB_14db4c7e3;
            pTVar13 = TArrayView<UE::Math::TIntVector3<int>_const_,int>::operator[]
                                (&local_588,local_638);
            pTVar14 = TArrayView<UE::Math::TIntVector3<int>_const_,int>::operator[]
                                (&local_588,local_638);
            if ((pTVar13->field0_0x0)._s_0.X == (pTVar14->field0_0x0)._s_0.Y) goto LAB_14db4c7e3;
            pTVar13 = TArrayView<UE::Math::TIntVector3<int>_const_,int>::operator[]
                                (&local_588,local_638);
            pTVar14 = TArrayView<UE::Math::TIntVector3<int>_const_,int>::operator[]
                                (&local_588,local_638);
            if ((pTVar13->field0_0x0)._s_0.X == (pTVar14->field0_0x0)._s_0.Z) goto LAB_14db4c7e3;
            pTVar13 = TArrayView<UE::Math::TIntVector3<int>_const_,int>::operator[]
                                (&local_588,local_638);
            pTVar14 = TArrayView<UE::Math::TIntVector3<int>_const_,int>::operator[]
                                (&local_588,local_638);
            if ((pTVar13->field0_0x0)._s_0.Y == (pTVar14->field0_0x0)._s_0.Z) goto LAB_14db4c7e3;
            pTVar13 = TArrayView<UE::Math::TIntVector3<int>_const_,int>::operator[]
                                (&local_560,local_638);
            pTVar14 = TArrayView<UE::Math::TIntVector3<int>_const_,int>::operator[]
                                (&local_560,local_638);
            if ((pTVar13->field0_0x0)._s_0.X == (pTVar14->field0_0x0)._s_0.Y) goto LAB_14db4c7e3;
            pTVar13 = TArrayView<UE::Math::TIntVector3<int>_const_,int>::operator[]
                                (&local_560,local_638);
            pTVar14 = TArrayView<UE::Math::TIntVector3<int>_const_,int>::operator[]
                                (&local_560,local_638);
            if ((pTVar13->field0_0x0)._s_0.X == (pTVar14->field0_0x0)._s_0.Z) goto LAB_14db4c7e3;
            pTVar13 = TArrayView<UE::Math::TIntVector3<int>_const_,int>::operator[]
                                (&local_560,local_638);
            pTVar14 = TArrayView<UE::Math::TIntVector3<int>_const_,int>::operator[]
                                (&local_560,local_638);
            if ((pTVar13->field0_0x0)._s_0.Y == (pTVar14->field0_0x0)._s_0.Z) goto LAB_14db4c7e3;
          }
          local_638 = local_638 + 1;
        } while ((int)local_638 < iVar8);
      }
      if (local_578.ArrayNum != 0) {
        FCollectionClothSimPatternFacade::RemoveSimFaces
                  ((FCollectionClothSimPatternFacade *)local_4f8,&local_578);
      }
      if (local_578.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_578.AllocatorInstance.Data);
      }
      pTVar12 = FCollectionClothSimPatternFacade::GetSimIndices2D
                          ((FCollectionClothSimPatternFacade *)local_4f8,&local_3f8);
      pFVar18 = (FConstClothCollection *)local_4f8._8_8_;
      iVar9 = (int)local_4e0;
      pTVar13 = pTVar12->DataPtr;
      iVar8 = pTVar12->ArrayNum;
      iVar10 = FConstClothCollection::GetElementsOffset
                         (*(TManagedArray<int> **)(local_4f8._8_8_ + 200),0,iVar9);
      local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_78.NumBits = 0;
      local_78.MaxBits = 0x80;
      local_78.NumBits =
           FConstClothCollection::GetNumElements
                     (pFVar18,*(TManagedArray<int> **)((longlong)pFVar18 + 200),
                      *(TManagedArray<int> **)((longlong)pFVar18 + 0xd0),iVar9);
      uVar20 = local_78.NumBits + 0x1fU >> 5;
      if (local_78.NumBits + 0x1fU >> 5 != 0) {
        if (local_78.MaxBits + 0x1fU >> 5 < uVar20) {
          TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
          ResizeAllocation(&local_78.AllocatorInstance,0,uVar20,4);
          local_78.MaxBits = uVar20 << 5;
        }
        FVar16 = (ForElementType<unsigned_int>)&local_78;
        if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar16 = local_78.AllocatorInstance.SecondaryData;
        }
        if (uVar20 < 9) {
          _Val = -1;
        }
        else {
          _Val = 0xff;
        }
        memset((void *)FVar16,_Val,(ulonglong)uVar20 << 2);
        uVar20 = local_78.NumBits & 0x8000001f;
        if ((int)uVar20 < 0) {
          uVar20 = (uVar20 - 1 | 0xffffffe0) + 1;
        }
        if (uVar20 != 0) {
          FVar16 = (ForElementType<unsigned_int>)&local_78;
          if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar16 = local_78.AllocatorInstance.SecondaryData;
          }
          puVar1 = (uint *)((longlong)FVar16 +
                           (longlong)
                           ((int)(local_78.NumBits + (local_78.NumBits >> 0x1f & 0x1fU)) >> 5) * 4);
          *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar20 & 0x1f);
        }
      }
      pTVar14 = pTVar13 + iVar8;
      if (pTVar13 != pTVar14) {
        do {
          iVar8 = (pTVar13->field0_0x0)._s_0.X - iVar10;
          if (((iVar8 < 0) || (local_78.NumBits <= iVar8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar16 = (ForElementType<unsigned_int>)&local_78;
          if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar16 = local_78.AllocatorInstance.SecondaryData;
          }
          iVar9 = iVar8;
          if (iVar8 < 0) {
            iVar9 = iVar8 + 0x1f;
          }
          puVar1 = (uint *)((longlong)FVar16 + (longlong)(iVar9 >> 5) * 4);
          *puVar1 = *puVar1 & ~(1 << ((byte)iVar8 & 0x1f));
          iVar8 = (pTVar13->field0_0x0)._s_0.Y - iVar10;
          if (((iVar8 < 0) || (local_78.NumBits <= iVar8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar16 = (ForElementType<unsigned_int>)&local_78;
          if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar16 = local_78.AllocatorInstance.SecondaryData;
          }
          iVar9 = iVar8;
          if (iVar8 < 0) {
            iVar9 = iVar8 + 0x1f;
          }
          puVar1 = (uint *)((longlong)FVar16 + (longlong)(iVar9 >> 5) * 4);
          *puVar1 = *puVar1 & ~(1 << ((byte)iVar8 & 0x1f));
          iVar8 = (pTVar13->field0_0x0)._s_0.Z - iVar10;
          if (((iVar8 < 0) || (local_78.NumBits <= iVar8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar16 = (ForElementType<unsigned_int>)&local_78;
          if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar16 = local_78.AllocatorInstance.SecondaryData;
          }
          iVar9 = iVar8;
          if (iVar8 < 0) {
            iVar9 = iVar8 + 0x1f;
          }
          pTVar13 = pTVar13 + 1;
          puVar1 = (uint *)((longlong)FVar16 + (longlong)(iVar9 >> 5) * 4);
          *puVar1 = *puVar1 & ~(1 << ((byte)iVar8 & 0x1f));
        } while (pTVar13 != pTVar14);
        iVar9 = (int)local_4e0;
        pFVar18 = (FConstClothCollection *)local_4f8._8_8_;
      }
      local_5e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5e8.ArrayNum = 0;
      local_518.Array = &local_78;
      local_518.CurrentBitIndex = 0;
      local_5e8.ArrayMax = 0;
      local_518._padding_._0_4_ = 0;
      local_518._padding_._4_4_ = 1;
      local_518.UnvisitedBitMask = 0xffffffff;
      local_518.BaseBitIndex = 0;
      if (local_78.NumBits != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_518);
      }
      if (local_518.CurrentBitIndex < (local_518.Array)->NumBits) {
        do {
          local_608 = local_518.CurrentBitIndex;
          if (((local_5e8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_608) &&
              ((FScriptContainerElement *)&local_608 <
               local_5e8.AllocatorInstance.Data + (longlong)local_5e8.ArrayMax * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (local_5e8.ArrayNum == local_5e8.ArrayMax) {
            local_5e8.ArrayNum =
                 Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_5e8.AllocatorInstance,&local_5e8.ArrayMax);
          }
          *(int *)(local_5e8.AllocatorInstance.Data + (longlong)local_5e8.ArrayNum * 4) = local_608;
          local_518.UnvisitedBitMask = local_518.UnvisitedBitMask & ~local_518._padding_._4_4_;
          local_5e8.ArrayNum = local_5e8.ArrayNum + 1;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_518);
        } while (local_518.CurrentBitIndex < (local_518.Array)->NumBits);
        iVar9 = (int)local_4e0;
        pFVar18 = (FConstClothCollection *)local_4f8._8_8_;
      }
      if (local_5e8.ArrayNum != 0) {
        FCollectionClothSimPatternFacade::RemoveSimVertices2D
                  ((FCollectionClothSimPatternFacade *)local_4f8,&local_5e8);
        iVar9 = (int)local_4e0;
        pFVar18 = (FConstClothCollection *)local_4f8._8_8_;
      }
      if (local_5e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5e8.AllocatorInstance.Data);
      }
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
      }
      iVar8 = FConstClothCollection::GetNumElements
                        (pFVar18,pFVar18->SimFacesStart,pFVar18->SimFacesEnd,iVar9);
      if ((iVar8 == 0) &&
         (iVar8 = FConstClothCollection::GetNumElements
                            (pFVar18,pFVar18->SimVertices2DStart,pFVar18->SimVertices2DEnd,iVar9),
         iVar8 == 0)) {
        if ((local_598.AllocatorInstance.Data <= (FScriptContainerElement *)&local_62c) &&
           (((FScriptContainerElement *)&local_62c <
             local_598.AllocatorInstance.Data + (longlong)local_598.ArrayMax * 4 &&
            (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)))) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = local_598.ArrayNum;
        if (local_598.ArrayNum == local_598.ArrayMax) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_598.AllocatorInstance,&local_598.ArrayMax);
        }
        local_598.ArrayNum = iVar8 + 1;
        *(int *)(local_598.AllocatorInstance.Data + (longlong)iVar8 * 4) = local_62c;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4e8)
      ;
      local_62c = local_62c + 1;
      iVar8 = FManagedArrayCollection::NumElements
                        (((TSharedRef<FManagedArrayCollection_const_,1> *)local_620._8_8_)->Object,
                         ClothCollectionGroup::SimPatterns);
    } while (local_62c < iVar8);
  }
  if (local_598.ArrayNum != 0) {
    FCollectionClothFacade::RemoveSimPatterns((FCollectionClothFacade *)local_620,&local_598);
  }
  pTVar12 = FCollectionClothFacade::GetSimIndices3D((FCollectionClothFacade *)local_620,&local_3e8);
  pFVar18 = (FConstClothCollection *)local_620._8_8_;
  pTVar13 = pTVar12->DataPtr;
  iVar8 = pTVar12->ArrayNum;
  local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_58.MaxBits = 0x80;
  local_58.NumBits =
       FManagedArrayCollection::NumElements
                 (((TSharedRef<FManagedArrayCollection_const_,1> *)local_620._8_8_)->Object,
                  ClothCollectionGroup::SimVertices3D);
  uVar20 = local_58.NumBits + 0x1fU >> 5;
  if (local_58.NumBits + 0x1fU >> 5 != 0) {
    if (local_58.MaxBits + 0x1fU >> 5 < uVar20) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_58.AllocatorInstance,0,uVar20,4);
      local_58.MaxBits = uVar20 << 5;
    }
    FVar16 = (ForElementType<unsigned_int>)&local_58;
    if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar16 = local_58.AllocatorInstance.SecondaryData;
    }
    if (uVar20 < 9) {
      iVar9 = -1;
    }
    else {
      iVar9 = 0xff;
    }
    memset((void *)FVar16,iVar9,(ulonglong)uVar20 << 2);
    uVar20 = local_58.NumBits & 0x8000001f;
    if ((int)uVar20 < 0) {
      uVar20 = (uVar20 - 1 | 0xffffffe0) + 1;
    }
    if (uVar20 != 0) {
      FVar16 = (ForElementType<unsigned_int>)&local_58;
      if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar16 = local_58.AllocatorInstance.SecondaryData;
      }
      puVar1 = (uint *)((longlong)FVar16 +
                       (longlong)((int)(local_58.NumBits + (local_58.NumBits >> 0x1f & 0x1fU)) >> 5)
                       * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar20 & 0x1f);
    }
  }
  pTVar14 = pTVar13 + iVar8;
  for (; pTVar13 != pTVar14; pTVar13 = pTVar13 + 1) {
    iVar8 = (pTVar13->field0_0x0)._s_0.X;
    if (((iVar8 < 0) || (local_58.NumBits <= iVar8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar16 = (ForElementType<unsigned_int>)&local_58;
    if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar16 = local_58.AllocatorInstance.SecondaryData;
    }
    iVar9 = iVar8;
    if (iVar8 < 0) {
      iVar9 = iVar8 + 0x1f;
    }
    puVar1 = (uint *)((longlong)FVar16 + (longlong)(iVar9 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)iVar8 & 0x1f));
    iVar8 = (pTVar13->field0_0x0)._s_0.Y;
    if (((iVar8 < 0) || (local_58.NumBits <= iVar8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar16 = (ForElementType<unsigned_int>)&local_58;
    if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar16 = local_58.AllocatorInstance.SecondaryData;
    }
    iVar9 = iVar8;
    if (iVar8 < 0) {
      iVar9 = iVar8 + 0x1f;
    }
    puVar1 = (uint *)((longlong)FVar16 + (longlong)(iVar9 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)iVar8 & 0x1f));
    iVar8 = (pTVar13->field0_0x0)._s_0.Z;
    if (((iVar8 < 0) || (local_58.NumBits <= iVar8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar16 = (ForElementType<unsigned_int>)&local_58;
    if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar16 = local_58.AllocatorInstance.SecondaryData;
    }
    iVar9 = iVar8;
    if (iVar8 < 0) {
      iVar9 = iVar8 + 0x1f;
    }
    puVar1 = (uint *)((longlong)FVar16 + (longlong)(iVar9 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)iVar8 & 0x1f));
    pFVar18 = (FConstClothCollection *)local_620._8_8_;
  }
  local_5d8.Data = (FScriptContainerElement *)0x0;
  local_5d0 = 0;
  local_4d8.Array = &local_58;
  local_4d8.CurrentBitIndex = 0;
  local_5cc = 0;
  local_4d8._padding_._0_4_ = 0;
  local_4d8._padding_._4_4_ = 1;
  local_4d8.UnvisitedBitMask = 0xffffffff;
  local_4d8.BaseBitIndex = 0;
  if (local_58.NumBits != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4d8);
  }
  if (local_4d8.CurrentBitIndex < (local_4d8.Array)->NumBits) {
    do {
      local_604 = local_4d8.CurrentBitIndex;
      if (((local_5d8.Data <= (FScriptContainerElement *)&local_604) &&
          ((FScriptContainerElement *)&local_604 < local_5d8.Data + (longlong)local_5cc * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_5d0 == local_5cc) {
        local_5d0 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_5d8,&local_5cc);
      }
      *(int *)(local_5d8.Data + (longlong)local_5d0 * 4) = local_604;
      local_4d8.UnvisitedBitMask = local_4d8.UnvisitedBitMask & ~local_4d8._padding_._4_4_;
      local_5d0 = local_5d0 + 1;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4d8);
      pFVar18 = (FConstClothCollection *)local_620._8_8_;
    } while (local_4d8.CurrentBitIndex < (local_4d8.Array)->NumBits);
  }
  pTVar28 = local_610;
  if (local_5d0 != 0) {
    if (local_610 != (TReferenceControllerBase<1> *)0x0) {
      paVar19 = &local_610->SharedReferenceCount;
      LOCK();
      *paVar19 = (atomic<int>)((int)*paVar19 + 1);
      UNLOCK();
      LOCK();
      *paVar19 = (atomic<int>)((int)*paVar19 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_610);
    pTVar2 = (pFVar18->ManagedArrayCollection).SharedReferenceCount.ReferenceController;
    pFVar3 = (pFVar18->ManagedArrayCollection).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    (**(code **)(pFVar3->_padding_ + 0x28))
              (pFVar3,&ClothCollectionGroup::SimVertices3D,&local_5d8,0x101);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  }
  if (local_5d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d8.Data);
  }
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
  }
  FCollectionClothFacade::CompactSimVertex2DLookup((FCollectionClothFacade *)local_620);
  FCollectionClothFacade::GetTetherKinematicIndex((FCollectionClothFacade *)local_620,&local_548);
  FCollectionClothFacade::GetTetherReferenceLength((FCollectionClothFacade *)local_620,&local_478);
  local_4b0 = (longlong)local_548.ArrayNum;
  local_630 = 0;
  if (0 < local_4b0) {
    local_4b8 = 0;
    do {
      pTVar21 = (TManagedArray<int> *)(longlong)(int)local_630;
      uVar25 = ~local_630 >> 0x1f;
      local_568 = 0;
      local_550 = pTVar21;
      uVar20 = 0;
      while( true ) {
        lVar17 = local_4b8;
        uVar11 = uVar15;
        if ((int)local_630 < local_548.ArrayNum) {
          uVar11 = uVar25;
        }
        pTVar6 = local_550;
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , pTVar6 = pTVar21, bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar21 = pTVar6;
        if (*(int *)((longlong)&(local_548.DataPtr)->ArrayNum + lVar17) <= (int)uVar20) break;
        uVar11 = uVar15;
        if ((int)local_630 < local_548.ArrayNum) {
          uVar11 = uVar25;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar22 = local_548.DataPtr;
        uVar26 = ~uVar20 >> 0x1f;
        uVar11 = uVar15;
        if ((int)uVar20 < local_548.DataPtr[(longlong)pTVar21].ArrayNum) {
          uVar11 = uVar26;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(int *)(pTVar22[(longlong)pTVar21].AllocatorInstance.Data + local_568) == -1) {
          uVar11 = uVar15;
          if ((int)local_630 < local_548.ArrayNum) {
            uVar11 = uVar25;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pTVar22 = local_548.DataPtr + (longlong)pTVar21;
          uVar11 = uVar15;
          if ((int)uVar20 < pTVar22->ArrayNum) {
            uVar11 = uVar26;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          TArray<int,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(pTVar22,uVar20);
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&pTVar22->AllocatorInstance,pTVar22->ArrayNum,&pTVar22->ArrayMax);
          uVar11 = uVar15;
          if ((int)local_630 < local_478.ArrayNum) {
            uVar11 = uVar25;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          this = local_478.DataPtr + (longlong)pTVar21;
          uVar11 = uVar15;
          if ((int)uVar20 < this->ArrayNum) {
            uVar11 = uVar26;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          TArray<float,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this,uVar20);
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&this->AllocatorInstance,this->ArrayNum,&this->ArrayMax);
        }
        else {
          uVar20 = uVar20 + 1;
          local_568 = local_568 + 4;
        }
      }
      local_630 = local_630 + 1;
      local_4b8 = lVar17 + 0x10;
      local_4b0 = local_4b0 + -1;
    } while (local_4b0 != 0);
  }
  uVar5 = local_620._8_8_;
  local_5c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5c8.ArrayNum = 0;
  local_5c8.ArrayMax = 0;
  local_628 = 0;
  iVar8 = FManagedArrayCollection::NumElements
                    (((TSharedRef<FManagedArrayCollection_const_,1> *)local_620._8_8_)->Object,
                     ClothCollectionGroup::Seams);
  pTVar28 = local_610;
  if (local_628 < iVar8) {
    do {
      iVar8 = local_628;
      if (pTVar28 == (TReferenceControllerBase<1> *)0x0) {
        paVar19 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar19 = &pTVar28->SharedReferenceCount;
        LOCK();
        *paVar19 = (atomic<int>)((int)*paVar19 + 1);
        UNLOCK();
        LOCK();
        *paVar19 = (atomic<int>)((int)*paVar19 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
      local_468.Object = (FConstClothCollection *)uVar5;
      local_468.SharedReferenceCount.ReferenceController = pTVar28;
      if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar19 = (atomic<int>)((int)*paVar19 + 1);
        UNLOCK();
      }
      FCollectionClothSeamConstFacade::FCollectionClothSeamConstFacade(&local_438,&local_468,iVar8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
      local_438._padding_ = (longlong)&___7FCollectionClothSeamFacade_ClothAsset_Chaos_UE__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
      FCollectionClothSeamFacade::CleanupAndCompact((FCollectionClothSeamFacade *)&local_438);
      iVar8 = FConstClothCollection::GetNumElements
                        (local_438.ClothCollection.Object,
                         (local_438.ClothCollection.Object)->SeamStitchStart,
                         (local_438.ClothCollection.Object)->SeamStitchEnd,local_438.SeamIndex);
      if (iVar8 == 0) {
        if (((local_5c8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_628) &&
            ((FScriptContainerElement *)&local_628 <
             local_5c8.AllocatorInstance.Data + (longlong)local_5c8.ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = local_5c8.ArrayNum;
        if (local_5c8.ArrayNum == local_5c8.ArrayMax) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_5c8.AllocatorInstance,&local_5c8.ArrayMax);
        }
        local_5c8.ArrayNum = iVar8 + 1;
        *(int *)(local_5c8.AllocatorInstance.Data + (longlong)iVar8 * 4) = local_628;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_438.ClothCollection.SharedReferenceCount.ReferenceController);
      local_628 = local_628 + 1;
      iVar8 = FManagedArrayCollection::NumElements
                        (((TSharedRef<FManagedArrayCollection_const_,1> *)uVar5)->Object,
                         ClothCollectionGroup::Seams);
    } while (local_628 < iVar8);
  }
  if (local_5c8.ArrayNum != 0) {
    FCollectionClothFacade::RemoveSeams((FCollectionClothFacade *)local_620,&local_5c8);
  }
  FCollectionClothFacade::CompactSeamStitchLookup((FCollectionClothFacade *)local_620);
  if (local_5c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c8.AllocatorInstance.Data);
  }
  pFVar18 = (FConstClothCollection *)local_620._8_8_;
  local_5a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5a8.ArrayNum = 0;
  local_5a8.ArrayMax = 0;
  local_624 = 0;
  iVar8 = FManagedArrayCollection::NumElements
                    (((TSharedRef<FManagedArrayCollection_const_,1> *)local_620._8_8_)->Object,
                     ClothCollectionGroup::RenderPatterns);
  pTVar28 = local_610;
  if (local_624 < iVar8) {
    do {
      iVar8 = local_624;
      uVar15 = 0;
      if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
        UNLOCK();
        if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
      if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
        UNLOCK();
      }
      FCollectionClothRenderPatternConstFacade::FCollectionClothRenderPatternConstFacade
                (&local_538,&local_458,iVar8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
      local_538._padding_ =
           (longlong)&___7FCollectionClothRenderPatternFacade_ClothAsset_Chaos_UE__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
      local_5b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5b8.ArrayNum = 0;
      local_5b8.ArrayMax = 0;
      pTVar12 = FCollectionClothRenderPatternFacade::GetRenderIndices
                          ((FCollectionClothRenderPatternFacade *)&local_538,&local_3d8);
      local_634 = 0;
      iVar8 = pTVar12->ArrayNum;
      pTVar13 = pTVar12->DataPtr;
      if (0 < iVar8) {
        do {
          uVar20 = local_634;
          uVar25 = 0;
          if ((int)local_634 < iVar8) {
            uVar25 = ~local_634 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (pTVar13[(int)uVar20].field0_0x0._s_0.X == -1) {
LAB_14db4db72:
            if (((local_5b8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_634) &&
                ((FScriptContainerElement *)&local_634 <
                 local_5b8.AllocatorInstance.Data + (longlong)local_5b8.ArrayMax * 4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar9 = local_5b8.ArrayNum;
            if (local_5b8.ArrayNum == local_5b8.ArrayMax) {
              iVar9 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_5b8.AllocatorInstance,&local_5b8.ArrayMax);
            }
            local_5b8.ArrayNum = iVar9 + 1;
            *(uint *)(local_5b8.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_634;
          }
          else {
            lVar17 = (longlong)(int)local_634;
            uVar25 = 0;
            uVar20 = uVar25;
            if ((int)local_634 < iVar8) {
              uVar20 = ~local_634 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (pTVar13[lVar17].field0_0x0._s_0.Y == -1) goto LAB_14db4db72;
            lVar17 = (longlong)(int)local_634;
            uVar20 = uVar25;
            if ((int)local_634 < iVar8) {
              uVar20 = ~local_634 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (pTVar13[lVar17].field0_0x0._s_0.Z == -1) goto LAB_14db4db72;
            lVar17 = (longlong)(int)local_634;
            uVar20 = uVar25;
            if ((int)local_634 < iVar8) {
              uVar20 = ~local_634 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar23 = (longlong)(int)local_634;
            if ((int)local_634 < iVar8) {
              uVar25 = ~local_634 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (pTVar13[lVar17].field0_0x0._s_0.X == pTVar13[lVar23].field0_0x0._s_0.Y)
            goto LAB_14db4db72;
            lVar17 = (longlong)(int)local_634;
            uVar25 = 0;
            uVar20 = uVar25;
            if ((int)local_634 < iVar8) {
              uVar20 = ~local_634 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar23 = (longlong)(int)local_634;
            uVar20 = uVar25;
            if ((int)local_634 < iVar8) {
              uVar20 = ~local_634 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (pTVar13[lVar17].field0_0x0._s_0.X == pTVar13[lVar23].field0_0x0._s_0.Z)
            goto LAB_14db4db72;
            lVar17 = (longlong)(int)local_634;
            uVar20 = uVar25;
            if ((int)local_634 < iVar8) {
              uVar20 = ~local_634 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar23 = (longlong)(int)local_634;
            if ((int)local_634 < iVar8) {
              uVar25 = ~local_634 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (pTVar13[lVar17].field0_0x0._s_0.Y == pTVar13[lVar23].field0_0x0._s_0.Z)
            goto LAB_14db4db72;
          }
          local_634 = local_634 + 1;
          pTVar28 = local_610;
          pFVar18 = (FConstClothCollection *)local_620._8_8_;
        } while ((int)local_634 < iVar8);
      }
      if (local_5b8.ArrayNum != 0) {
        FCollectionClothRenderPatternFacade::RemoveRenderFaces
                  ((FCollectionClothRenderPatternFacade *)&local_538,&local_5b8);
      }
      if (local_5b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5b8.AllocatorInstance.Data);
      }
      FVar24.ReferenceController =
           local_538.ClothCollection.SharedReferenceCount.ReferenceController;
      if (local_538.ClothCollection.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_538.ClothCollection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_538.ClothCollection.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
        if (local_538.ClothCollection.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_538.ClothCollection.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_538.ClothCollection.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_538.ClothCollection.SharedReferenceCount.ReferenceController);
      if (FVar24.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar24.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar24.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        if (FVar24.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar24.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar24.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar24.ReferenceController);
      this_00 = local_538.ClothCollection.Object;
      local_550 = (local_538.ClothCollection.Object)->RenderFacesEnd;
      if (FVar24.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar24.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar24.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        if (FVar24.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar24.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar24.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar24.ReferenceController);
      pTVar21 = this_00->RenderFacesStart;
      if (FVar24.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar24.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar24.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        if (FVar24.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar24.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar24.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar24.ReferenceController);
      iVar8 = local_538.PatternIndex;
      FConstClothCollection::GetElements<UE::Math::TIntVector3<int>_>
                (&local_448,this_00->RenderIndices,pTVar21,local_550,iVar8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar24.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar24.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar24.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar24.ReferenceController);
      local_630 = FConstClothCollection::GetElementsOffset(this_00->RenderVerticesStart,0,iVar8);
      local_98.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_80 = 0;
      local_7c = 0x80;
      local_80 = FConstClothCollection::GetNumElements
                           (this_00,this_00->RenderVerticesStart,this_00->RenderVerticesEnd,iVar8);
      uVar20 = local_80 + 0x1f >> 5;
      if (local_80 + 0x1f >> 5 != 0) {
        if (local_7c + 0x1fU >> 5 < uVar20) {
          TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
          ResizeAllocation(&local_98,0,uVar20,4);
          local_7c = uVar20 << 5;
        }
        FVar16 = (ForElementType<unsigned_int>)&local_98;
        if (local_98.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar16 = local_98.SecondaryData;
        }
        if (uVar20 < 9) {
          iVar8 = -1;
        }
        else {
          iVar8 = 0xff;
        }
        memset((void *)FVar16,iVar8,(ulonglong)uVar20 << 2);
        uVar20 = local_80 & 0x8000001f;
        if ((int)uVar20 < 0) {
          uVar20 = (uVar20 - 1 | 0xffffffe0) + 1;
        }
        if (uVar20 != 0) {
          FVar16 = (ForElementType<unsigned_int>)&local_98;
          if (local_98.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar16 = local_98.SecondaryData;
          }
          puVar1 = (uint *)((longlong)FVar16 +
                           (longlong)((int)(local_80 + ((int)local_80 >> 0x1f & 0x1fU)) >> 5) * 4);
          *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar20 & 0x1f);
        }
      }
      pTVar13 = local_448.DataPtr + local_448.ArrayNum;
      uVar20 = local_630;
      for (pTVar14 = local_448.DataPtr; pTVar14 != pTVar13; pTVar14 = pTVar14 + 1) {
        iVar8 = (pTVar14->field0_0x0)._s_0.X - uVar20;
        if (((iVar8 < 0) || ((int)local_80 <= iVar8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), uVar20 = local_630, bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar16 = (ForElementType<unsigned_int>)&local_98;
        if (local_98.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar16 = local_98.SecondaryData;
        }
        iVar9 = iVar8;
        if (iVar8 < 0) {
          iVar9 = iVar8 + 0x1f;
        }
        puVar1 = (uint *)((longlong)FVar16 + (longlong)(iVar9 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar8 & 0x1f));
        iVar8 = (pTVar14->field0_0x0)._s_0.Y - uVar20;
        if (((iVar8 < 0) || ((int)local_80 <= iVar8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), uVar20 = local_630, bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar16 = (ForElementType<unsigned_int>)&local_98;
        if (local_98.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar16 = local_98.SecondaryData;
        }
        iVar9 = iVar8;
        if (iVar8 < 0) {
          iVar9 = iVar8 + 0x1f;
        }
        puVar1 = (uint *)((longlong)FVar16 + (longlong)(iVar9 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar8 & 0x1f));
        iVar8 = (pTVar14->field0_0x0)._s_0.Z - uVar20;
        if (((iVar8 < 0) || ((int)local_80 <= iVar8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), uVar20 = local_630, bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar16 = (ForElementType<unsigned_int>)&local_98;
        if (local_98.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar16 = local_98.SecondaryData;
        }
        iVar9 = iVar8;
        if (iVar8 < 0) {
          iVar9 = iVar8 + 0x1f;
        }
        puVar1 = (uint *)((longlong)FVar16 + (longlong)(iVar9 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar8 & 0x1f));
        pTVar28 = local_610;
        pFVar18 = (FConstClothCollection *)local_620._8_8_;
        this_00 = local_538.ClothCollection.Object;
        FVar24.ReferenceController =
             local_538.ClothCollection.SharedReferenceCount.ReferenceController;
      }
      local_5f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5f8.ArrayNum = 0;
      local_5f8.ArrayMax = 0;
      local_568._4_4_ = (undefined4)(local_568 >> 0x20);
      local_568 = CONCAT44(local_568._4_4_,1);
      uVar11 = uVar15;
      uVar25 = uVar15;
      uVar20 = uVar15;
      if (local_80 != 0) {
        FVar16 = (ForElementType<unsigned_int>)&local_98;
        if (local_98.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar16 = local_98.SecondaryData;
        }
        uVar11 = *(uint *)FVar16;
        while (uVar11 == 0) {
          lVar17 = (longlong)(int)uVar25;
          uVar20 = uVar20 + 0x20;
          uVar25 = uVar25 + 1;
          uVar11 = local_80;
          if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar25)
          goto LAB_14db4e073;
          uVar11 = *(uint *)((uchar *)((longlong)FVar16 + 4) + lVar17 * 4);
        }
        local_568 = (ulonglong)(-uVar11 & uVar11);
        uVar27 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
        lVar17 = 0x3f;
        if (uVar27 != 0) {
          for (; uVar27 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        local_4a8 = (int)lVar17;
        uVar11 = (uVar20 - 1) + local_4a8;
        if ((int)local_80 < (int)uVar11) {
          uVar11 = local_80;
        }
      }
LAB_14db4e073:
      if ((int)uVar11 < (int)local_80) {
        uVar26 = 0xffffffff;
        uVar27 = local_568;
        do {
          local_600[0] = uVar11;
          uVar11 = uVar15;
          if ((local_5f8.AllocatorInstance.Data <= (FScriptContainerElement *)local_600) &&
             ((FScriptContainerElement *)local_600 <
              local_5f8.AllocatorInstance.Data + (longlong)local_5f8.ArrayMax * 4)) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar11 = local_5f8.ArrayNum;
          }
          if (uVar11 == local_5f8.ArrayMax) {
            uVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_5f8.AllocatorInstance,&local_5f8.ArrayMax);
          }
          uVar15 = uVar11 + 1;
          local_5f8.ArrayNum = uVar15;
          *(uint *)(local_5f8.AllocatorInstance.Data + (longlong)(int)uVar11 * 4) = local_600[0];
          uVar26 = uVar26 & ~(uint)uVar27;
          FVar16 = (ForElementType<unsigned_int>)&local_98;
          if (local_98.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar16 = local_98.SecondaryData;
          }
          uVar11 = uVar26 & *(uint *)((longlong)FVar16 + (longlong)(int)uVar25 * 4);
          while (uVar11 == 0) {
            lVar17 = (longlong)(int)uVar25;
            uVar20 = uVar20 + 0x20;
            uVar25 = uVar25 + 1;
            uVar11 = local_80;
            if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar25)
            goto LAB_14db4e1b5;
            uVar26 = 0xffffffff;
            uVar11 = *(uint *)((uchar *)((longlong)FVar16 + 4) + lVar17 * 4);
          }
          local_568 = CONCAT44(local_568._4_4_,-uVar11 & uVar11);
          uVar27 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
          lVar17 = 0x3f;
          if (uVar27 != 0) {
            for (; uVar27 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          local_4a4 = (int)lVar17;
          uVar11 = (uVar20 - 1) + local_4a4;
          uVar27 = local_568;
          if ((int)local_80 < (int)uVar11) {
            uVar11 = local_80;
          }
LAB_14db4e1b5:
        } while ((int)uVar11 < (int)local_80);
        FVar24.ReferenceController =
             local_538.ClothCollection.SharedReferenceCount.ReferenceController;
        this_00 = local_538.ClothCollection.Object;
        pTVar28 = local_610;
        pFVar18 = (FConstClothCollection *)local_620._8_8_;
        if (uVar15 != 0) {
          FCollectionClothRenderPatternFacade::RemoveRenderVertices
                    ((FCollectionClothRenderPatternFacade *)&local_538,&local_5f8);
          FVar24.ReferenceController =
               local_538.ClothCollection.SharedReferenceCount.ReferenceController;
          this_00 = local_538.ClothCollection.Object;
          pTVar28 = local_610;
          pFVar18 = (FConstClothCollection *)local_620._8_8_;
        }
      }
      if (local_5f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5f8.AllocatorInstance.Data);
      }
      if (local_98.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_98.SecondaryData);
      }
      iVar9 = local_538.PatternIndex;
      iVar8 = FConstClothCollection::GetNumElements
                        (this_00,this_00->RenderVerticesStart,this_00->RenderVerticesEnd,iVar9);
      if ((iVar8 == 0) &&
         (iVar8 = FConstClothCollection::GetNumElements
                            (this_00,this_00->RenderFacesStart,this_00->RenderFacesEnd,iVar9),
         iVar8 == 0)) {
        if ((local_5a8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_624) &&
           (((FScriptContainerElement *)&local_624 <
             local_5a8.AllocatorInstance.Data + (longlong)local_5a8.ArrayMax * 4 &&
            (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)))) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = local_5a8.ArrayNum;
        if (local_5a8.ArrayNum == local_5a8.ArrayMax) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_5a8.AllocatorInstance,&local_5a8.ArrayMax);
        }
        local_5a8.ArrayNum = iVar8 + 1;
        *(int *)(local_5a8.AllocatorInstance.Data + (longlong)iVar8 * 4) = local_624;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar24.ReferenceController);
      local_624 = local_624 + 1;
      iVar8 = FManagedArrayCollection::NumElements
                        ((pFVar18->ManagedArrayCollection).Object,
                         ClothCollectionGroup::RenderPatterns);
    } while (local_624 < iVar8);
  }
  iVar8 = 0;
  if (local_5a8.ArrayNum != 0) {
    FCollectionClothFacade::RemoveRenderPatterns((FCollectionClothFacade *)local_620,&local_5a8);
    pTVar28 = local_610;
    pFVar18 = (FConstClothCollection *)local_620._8_8_;
  }
  iVar9 = FManagedArrayCollection::NumElements
                    ((pFVar18->ManagedArrayCollection).Object,ClothCollectionGroup::Seams);
  if (0 < iVar9) {
    do {
      if (pTVar28 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        paVar19 = &pTVar28->SharedReferenceCount;
        LOCK();
        *paVar19 = (atomic<int>)((int)*paVar19 + 1);
        UNLOCK();
        LOCK();
        *paVar19 = (atomic<int>)((int)*paVar19 + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28)
        ;
        LOCK();
        *paVar19 = (atomic<int>)((int)*paVar19 + 1);
        UNLOCK();
        LOCK();
        *paVar19 = (atomic<int>)((int)*paVar19 + 1);
        UNLOCK();
      }
      local_498.ClothCollection.SharedReferenceCount.ReferenceController = pTVar28;
      local_498.SeamIndex = iVar8;
      bVar7 = FConstClothCollection::IsValid(pFVar18,None);
      if ((!bVar7) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ClothCollection->IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                             ,0x28a,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((iVar8 < 0) ||
          (iVar9 = FManagedArrayCollection::NumElements
                             ((pFVar18->ManagedArrayCollection).Object,ClothCollectionGroup::Seams),
          iVar9 <= iVar8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("SeamIndex >= 0 && SeamIndex < ClothCollection->GetNumElements(ClothCollectionGroup::Seams)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                             ,0x28b,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
      local_498._padding_ = (longlong)&___7FCollectionClothSeamFacade_ClothAsset_Chaos_UE__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
      FCollectionClothSeamConstFacade::ValidateSeam(&local_498);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_498.ClothCollection.SharedReferenceCount.ReferenceController);
      iVar8 = iVar8 + 1;
      iVar9 = FManagedArrayCollection::NumElements
                        ((pFVar18->ManagedArrayCollection).Object,ClothCollectionGroup::Seams);
    } while (iVar8 < iVar9);
  }
  ::Chaos::Softs::FEmbeddedSpringBaseFacade::FEmbeddedSpringBaseFacade
            (&local_3c8,local_4a0->Object,&ClothCollectionGroup::SimVertices3D);
  ::Chaos::Softs::FEmbeddedSpringFacade::CleanupAndCompactInvalidSprings
            ((FEmbeddedSpringFacade *)&local_3c8);
  FCollectionClothFacade::CompactSimMorphTargets((FCollectionClothFacade *)local_620);
  if (local_5a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a8.AllocatorInstance.Data);
  }
  if (local_598.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_598.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_610);
  return;
}

// ConvertSelectionToNewGroupType @ 14db4f250

bool __cdecl
UE::Chaos::ClothAsset::FClothGeometryTools::ConvertSelectionToNewGroupType
          (TSharedRef<FManagedArrayCollection_const_,1> *param_1,FName *param_2,FName *param_3,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_4)

{
  bool bVar1;
  
  bVar1 = ConvertSelectionToNewGroupType(param_1,param_2,param_3,false,param_4);
  return bVar1;
}

// ConvertSelectionToNewGroupType @ 14db4f270

bool __cdecl
UE::Chaos::ClothAsset::FClothGeometryTools::ConvertSelectionToNewGroupType
          (TSharedRef<FManagedArrayCollection_const_,1> *param_1,FName *param_2,FName *param_3,
          bool param_4,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_5)

{
  undefined4 *puVar1;
  TIntVector3<int> *pTVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  FName FVar5;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar6;
  TManagedArray<int> *pTVar7;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar8;
  code *pcVar9;
  FConstClothCollection *pFVar10;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar11;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar21;
  TArrayView<UE::Math::TIntVector3<int>_const_,int> *pTVar22;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar23;
  byte bVar24;
  longlong lVar25;
  undefined4 *puVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  undefined8 *puVar32;
  TIntVector3<int> *pTVar33;
  uint uVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  uint *puVar37;
  TBitArray<FDefaultBitArrayAllocator> *pTVar38;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar39;
  undefined1 local_res8 [8];
  undefined1 local_538;
  undefined1 local_537;
  undefined1 local_536;
  undefined1 local_535;
  undefined1 local_534 [4];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_530;
  undefined8 uStack_528;
  TBitArray<FDefaultBitArrayAllocator> *local_520;
  uint uStack_518;
  uint uStack_514;
  uint local_510;
  undefined4 uStack_50c;
  int iStack_508;
  undefined4 uStack_504;
  FCollectionClothSelectionConstFacade local_500;
  ulonglong local_4e8;
  FCollectionClothConstFacade local_4e0;
  undefined1 local_4c8 [12];
  uint uStack_4bc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_4b8;
  undefined8 uStack_4b0;
  longlong lStack_4a8;
  int local_4a0;
  undefined4 uStack_49c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_498;
  undefined1 local_490 [12];
  uint uStack_484;
  TBitArray<FDefaultBitArrayAllocator> *local_480;
  undefined8 uStack_478;
  longlong local_470;
  int iStack_468;
  undefined4 uStack_464;
  undefined4 local_460 [2];
  longlong local_458;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_450;
  TArrayView<UE::Math::TIntVector3<int>_const_,int> local_430;
  TArrayView<UE::Math::TIntVector3<int>_const_,int> local_420;
  TArrayView<UE::Math::TIntVector3<int>_const_,int> local_410;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_400;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_3f8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_3f0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_3e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_380;
  int local_360;
  int local_35c;
  int local_358;
  FName local_354;
  FName local_34c;
  int local_344;
  int local_340;
  int local_33c;
  int local_338;
  int local_334;
  int local_330;
  int local_32c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_328;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_320;
  undefined8 uStack_300;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_2f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2f0;
  undefined8 uStack_2d0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_2c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c0;
  undefined8 uStack_2a0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_298;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_290;
  undefined8 uStack_270;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_260;
  int iStack_240;
  undefined4 uStack_23c;
  TRangedForConstIterator local_238;
  TArrayView<UE::Math::TIntVector3<int>_const_,int> local_208;
  FCollectionClothSimPatternConstFacade local_1f8;
  FCollectionClothSimPatternConstFacade local_1d8;
  FCollectionClothSimPatternConstFacade local_1b8;
  FCollectionClothRenderPatternConstFacade local_198;
  FCollectionClothRenderPatternConstFacade local_178;
  TRangedForConstIterator local_158;
  TArrayView<UE::Math::TIntVector3<int>_const_,int> local_128;
  TArrayView<UE::Math::TIntVector3<int>_const_,int> local_118;
  TArrayView<UE::Math::TIntVector3<int>_const_,int> local_108 [2];
  undefined4 local_dc;
  undefined4 local_bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_78;
  undefined4 local_3c;
  
  local_500._padding_ = (longlong)&___7FCollectionClothSelectionConstFacade_ClothAsset_Chaos_UE__6B_
  ;
  local_500.ManagedArrayCollection.Object = param_1->Object;
  local_500.ManagedArrayCollection.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_500.ManagedArrayCollection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_500.ManagedArrayCollection.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(local_500.ManagedArrayCollection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FCollectionClothConstFacade::FCollectionClothConstFacade(&local_4e0,param_1);
  bVar12 = FCollectionClothSelectionConstFacade::IsValid(&local_500);
  pFVar10 = local_4e0.ClothCollection.Object;
  if (((bVar12) &&
      (bVar12 = FConstClothCollection::IsValid(local_4e0.ClothCollection.Object,None), bVar12)) &&
     (iVar15 = FManagedArrayCollection::NumElements
                         ((pFVar10->ManagedArrayCollection).Object,ClothCollectionGroup::Lods),
     iVar15 == 1)) {
    uVar28 = 0;
    uVar27 = 0;
    if (param_4) {
      bVar12 = FCollectionClothSelectionConstFacade::HasSelectionSecondarySet(&local_500,param_2);
      uVar18 = (uint)bVar12;
    }
    else {
      bVar12 = FCollectionClothSelectionConstFacade::IsValid(&local_500);
      if (bVar12) {
        bVar12 = FManagedArrayCollection::HasAttribute
                           (local_500.ManagedArrayCollection.Object,*param_2,
                            ClothAsset::Private::SelectionGroup);
        uVar18 = 1;
        if (bVar12) goto LAB_14db4f364;
      }
      uVar18 = uVar27;
    }
LAB_14db4f364:
    if (uVar18 != 0) {
      bVar12 = FCollectionClothSelectionConstFacade::IsValid(&local_500);
      if (param_4) {
        if ((!bVar12) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                                ,0x5a,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        bVar12 = FManagedArrayCollection::HasAttribute
                           (local_500.ManagedArrayCollection.Object,*param_2,
                            ClothAsset::Private::SelectionGroup);
        if ((!bVar12) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("ManagedArrayCollection->HasAttribute(Name, Private::SelectionGroup)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                                ,0x5b,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        pTVar21 = FManagedArrayCollection::
                  FindAttributeTyped<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                            (local_500.ManagedArrayCollection.Object,*param_2,
                             ClothAsset::Private::SelectionSecondaryGroup);
        if ((pTVar21 == (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0
            ) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Selection",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                                      ,0x5e,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        pTVar39 = *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)&pTVar21->field_0x10;
        bVar12 = FCollectionClothSelectionConstFacade::IsValid(&local_500);
        if ((!bVar12) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                                ,0x51,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        bVar12 = FCollectionClothSelectionConstFacade::IsValid(&local_500);
        if (bVar12) {
          bVar12 = FManagedArrayCollection::HasAttribute
                             (local_500.ManagedArrayCollection.Object,*param_2,
                              ClothAsset::Private::SelectionGroup);
          bVar14 = FManagedArrayCollection::HasAttribute
                             (local_500.ManagedArrayCollection.Object,*param_2,
                              ClothAsset::Private::SelectionSecondaryGroup);
          if (!bVar12) {
            if ((bVar14) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("bPrimaryAttributeExists || !bSecondaryAttributeExists",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                                    ,0x4b,
                                    L"FCollectionClothSelectionConstFacade: Secondary Selection found with no matching Primary attribute"
                                   ), bVar12)) {
              pcVar9 = (code *)swi(3);
              uVar13 = (*pcVar9)();
              return (bool)uVar13;
            }
            goto LAB_14db4f4cf;
          }
          if (!bVar14) goto LAB_14db4f4cf;
        }
        else {
LAB_14db4f4cf:
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("HasSelectionSecondarySet(Name)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                              ,0x53,L"");
          if (bVar12) {
            pcVar9 = (code *)swi(3);
            uVar13 = (*pcVar9)();
            return (bool)uVar13;
          }
        }
        FManagedArrayCollection::GetDependency
                  (local_500.ManagedArrayCollection.Object,(FName)&local_354,*param_2);
      }
      else {
        if ((!bVar12) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                                ,0x36,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        pTVar21 = FManagedArrayCollection::
                  FindAttributeTyped<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                            (local_500.ManagedArrayCollection.Object,*param_2,
                             ClothAsset::Private::SelectionGroup);
        if ((pTVar21 == (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0
            ) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Selection",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                                      ,0x38,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        pTVar39 = *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)&pTVar21->field_0x10;
        bVar12 = FCollectionClothSelectionConstFacade::IsValid(&local_500);
        if ((!bVar12) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                                ,0x2f,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        bVar12 = FCollectionClothSelectionConstFacade::IsValid(&local_500);
        if (((!bVar12) ||
            (bVar12 = FManagedArrayCollection::HasAttribute
                                (local_500.ManagedArrayCollection.Object,*param_2,
                                 ClothAsset::Private::SelectionGroup), !bVar12)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("HasSelection(Name)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                                ,0x30,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        FManagedArrayCollection::GetDependency
                  (local_500.ManagedArrayCollection.Object,(FName)&local_34c,*param_2);
        local_354 = local_34c;
      }
      FVar5 = *param_3;
      bVar12 = true;
      if (local_354 == FVar5) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=(param_5,pTVar39);
        goto LAB_14db50912;
      }
      local_3f8 = param_5;
      local_3e8 = param_5;
      local_498 = param_5;
      uVar34 = 0;
      uVar18 = 0;
      uVar17 = 1;
      local_400 = pTVar39;
      local_3f0 = pTVar39;
      if (local_354 == ClothCollectionGroup::SimVertices2D) {
        if (FVar5 == ClothCollectionGroup::SimFaces) {
          pTVar6 = (local_4e0.ClothCollection.Object)->SimIndices2D;
          if (pTVar6 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
            local_430.DataPtr = (TIntVector3<int> *)0x0;
            local_430.ArrayNum = 0;
          }
          else {
            local_430.ArrayNum = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
            local_430.DataPtr = *(TIntVector3<int> **)&pTVar6->field_0x10;
            if ((local_430.ArrayNum < 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar14)) {
              pcVar9 = (code *)swi(3);
              uVar13 = (*pcVar9)();
              return (bool)uVar13;
            }
          }
          `UE::Chaos::ClothAsset::FClothGeometryTools::ConvertSelectionToNewGroupType'::__l2::
          <lambda_1>::operator()(&local_400,&local_430);
          goto LAB_14db50912;
        }
        if (FVar5 == ClothCollectionGroup::SimVertices3D) {
          pTVar7 = (local_4e0.ClothCollection.Object)->SimVertex3DLookup;
          if (pTVar7 == (TManagedArray<int> *)0x0) {
            local_4e8 = 0;
            uVar16 = uVar18;
          }
          else {
            uVar16 = (**(code **)(*(longlong *)pTVar7 + 0x60))(pTVar7);
            local_4e8 = *(ulonglong *)&pTVar7->field_0x10;
            if (((int)uVar16 < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              uVar13 = (*pcVar9)();
              return (bool)uVar13;
            }
          }
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(param_5);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reserve
                    (param_5,*(int *)&(pTVar39->Elements).field_0x8 -
                             *(int *)&(pTVar39->Elements).field_0x34);
          uVar29 = *(uint *)&(pTVar39->Elements).field_0x28;
          local_520 = (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar39->Elements).field_0x10;
          if (uVar29 != 0) {
            puVar37 = *(uint **)&(pTVar39->Elements).field_0x20;
            if (puVar37 == (uint *)0x0) {
              puVar37 = (uint *)local_520;
            }
            uVar18 = *puVar37;
            uVar34 = uVar28;
            uVar27 = uVar28;
            while (uVar18 == 0) {
              lVar25 = (longlong)(int)uVar27;
              uVar34 = uVar34 + 0x20;
              uVar27 = uVar27 + 1;
              uVar18 = uVar29;
              if ((int)((uVar29 - 1) + ((int)(uVar29 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar27)
              goto LAB_14db4f7f0;
              uVar18 = puVar37[lVar25 + 1];
            }
            uVar17 = -uVar18 & uVar18;
            uVar3 = (ulonglong)uVar17 * 2 + 1;
            lVar25 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            local_344 = (int)lVar25;
            uVar18 = (uVar34 - 1) + local_344;
            if ((int)uVar29 < (int)uVar18) {
              uVar18 = uVar29;
            }
          }
LAB_14db4f7f0:
          iStack_508 = *(int *)&(pTVar39->Elements).field_0x8 -
                       *(int *)&(pTVar39->Elements).field_0x34;
          uStack_528 = CONCAT44(uVar17,uVar27);
          uVar27 = *(uint *)&(pTVar39->Elements).field_0x28;
          uStack_514 = uVar18;
          uStack_518 = 0xffffffff;
          uVar28 = uVar27 & 0xffffffe0;
          uStack_50c = local_dc;
          local_510 = uVar34;
          TStack_2f0._padding_ = uStack_528;
          iVar15 = (int)uVar27 >> 5;
          uStack_2d0 = CONCAT44(uStack_504,iStack_508);
          TStack_2f0.UnvisitedBitMask = 0xffffffff;
          TStack_2f0.CurrentBitIndex = uVar18;
          TStack_2f0.BaseBitIndex = uVar34;
          TStack_2f0._28_4_ = local_dc;
          local_2f8 = pTVar39;
          TStack_2f0.Array = local_520;
          if ((((int)uVar27 < 0) || (local_530 = pTVar39, (int)uVar29 < (int)uVar27)) &&
             (local_530 = pTVar39,
             bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar12)) {
            pcVar9 = (code *)swi(3);
            uVar13 = (*pcVar9)();
            return (bool)uVar13;
          }
          uVar3 = local_4e8;
          uVar18 = *(uint *)&(pTVar39->Elements).field_0x28;
          if (uVar27 != uVar18) {
            puVar35 = *(undefined1 **)&(pTVar39->Elements).field_0x20;
            if (puVar35 == (undefined1 *)0x0) {
              puVar35 = &(pTVar39->Elements).field_0x10;
            }
            uVar27 = -1 << ((byte)uVar27 & 0x1f) & *(uint *)(puVar35 + (longlong)iVar15 * 4);
            while (uVar27 == 0) {
              lVar25 = (longlong)iVar15;
              uVar28 = uVar28 + 0x20;
              iVar15 = iVar15 + 1;
              uVar27 = uVar18;
              if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
              goto LAB_14db4f920;
              uVar27 = *(uint *)(puVar35 + lVar25 * 4 + 4);
            }
            uVar4 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
            lVar25 = 0x3f;
            if (uVar4 != 0) {
              for (; uVar4 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            local_340 = (int)lVar25;
            uVar27 = local_340 + -1 + uVar28;
            if ((int)uVar18 < (int)uVar27) {
              uVar27 = uVar18;
            }
          }
LAB_14db4f920:
          while( true ) {
            pTVar11 = local_2f8;
            if (*(int *)&(local_2f8->Elements).field_0x8 - *(int *)&(local_2f8->Elements).field_0x34
                != (int)uStack_2d0) {
              local_res8[0] = 0;
              `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
            }
            if (((TStack_2f0.CurrentBitIndex == uVar27) &&
                (TStack_2f0.Array ==
                 (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar39->Elements).field_0x10)) &&
               (pTVar11 == pTVar39)) break;
            iVar15 = *(int *)(*(longlong *)&pTVar11->Elements +
                             (longlong)TStack_2f0.CurrentBitIndex * 0xc);
            if ((-1 < iVar15) && (iVar15 < (int)uVar16)) {
              if ((iVar15 < 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar13 = (*pcVar9)();
                return (bool)uVar13;
              }
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        (param_5,&local_33c,(bool *)(uVar3 + (longlong)iVar15 * 4));
            }
            TStack_2f0.UnvisitedBitMask = TStack_2f0.UnvisitedBitMask & ~TStack_2f0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2f0);
          }
          goto LAB_14db4f9f2;
        }
      }
      else if (local_354 == ClothCollectionGroup::SimVertices3D) {
        if (FVar5 == ClothCollectionGroup::SimFaces) {
          pTVar6 = (local_4e0.ClothCollection.Object)->SimIndices3D;
          if (pTVar6 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
            local_420.DataPtr = (TIntVector3<int> *)0x0;
            local_420.ArrayNum = 0;
          }
          else {
            local_420.ArrayNum = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
            local_420.DataPtr = *(TIntVector3<int> **)&pTVar6->field_0x10;
            if ((local_420.ArrayNum < 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar14)) {
              pcVar9 = (code *)swi(3);
              uVar13 = (*pcVar9)();
              return (bool)uVar13;
            }
          }
          `UE::Chaos::ClothAsset::FClothGeometryTools::ConvertSelectionToNewGroupType'::__l2::
          <lambda_1>::operator()(&local_400,&local_420);
          goto LAB_14db50912;
        }
        if (FVar5 == ClothCollectionGroup::SimVertices2D) {
          pTVar8 = (local_4e0.ClothCollection.Object)->SimVertex2DLookup;
          if (pTVar8 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
            local_458 = 0;
            iVar15 = 0;
            local_4e8 = local_4e8 & 0xffffffff00000000;
          }
          else {
            iVar15 = (**(code **)(*(longlong *)pTVar8 + 0x60))(pTVar8);
            local_458 = *(longlong *)&pTVar8->field_0x10;
            local_4e8 = CONCAT44(local_4e8._4_4_,iVar15);
            if ((iVar15 < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              uVar13 = (*pcVar9)();
              return (bool)uVar13;
            }
          }
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(param_5);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reserve
                    (param_5,*(int *)&(pTVar39->Elements).field_0x8 -
                             *(int *)&(pTVar39->Elements).field_0x34);
          uVar18 = *(uint *)&(pTVar39->Elements).field_0x28;
          local_520 = (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar39->Elements).field_0x10;
          uStack_514 = uVar34;
          if (uVar18 != 0) {
            puVar37 = *(uint **)&(pTVar39->Elements).field_0x20;
            if (puVar37 == (uint *)0x0) {
              puVar37 = (uint *)local_520;
            }
            uVar16 = *puVar37;
            uVar34 = uVar28;
            uVar27 = uVar28;
            while (uVar16 == 0) {
              lVar25 = (longlong)(int)uVar27;
              uVar34 = uVar34 + 0x20;
              uVar27 = uVar27 + 1;
              uStack_514 = uVar18;
              if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar27)
              goto LAB_14db4fb73;
              uVar16 = puVar37[lVar25 + 1];
            }
            uVar17 = -uVar16 & uVar16;
            uVar3 = (ulonglong)uVar17 * 2 + 1;
            lVar25 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            local_338 = (int)lVar25;
            uStack_514 = (uVar34 - 1) + local_338;
            if ((int)uVar18 < (int)uStack_514) {
              uStack_514 = uVar18;
            }
          }
LAB_14db4fb73:
          iStack_508 = *(int *)&(pTVar39->Elements).field_0x8 -
                       *(int *)&(pTVar39->Elements).field_0x34;
          uStack_528 = CONCAT44(uVar17,uVar27);
          uVar27 = *(uint *)&(pTVar39->Elements).field_0x28;
          uVar28 = uVar27 & 0xffffffe0;
          uStack_518 = 0xffffffff;
          uStack_50c = local_3c;
          local_510 = uVar34;
          TStack_320._padding_ = uStack_528;
          iVar30 = (int)uVar27 >> 5;
          uStack_300 = CONCAT44(uStack_504,iStack_508);
          TStack_320.UnvisitedBitMask = 0xffffffff;
          TStack_320.CurrentBitIndex = uStack_514;
          TStack_320.BaseBitIndex = uVar34;
          TStack_320._28_4_ = local_3c;
          local_328 = pTVar39;
          TStack_320.Array = local_520;
          if ((((int)uVar27 < 0) || (local_530 = pTVar39, (int)uVar18 < (int)uVar27)) &&
             (local_530 = pTVar39,
             bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar12)) {
            pcVar9 = (code *)swi(3);
            uVar13 = (*pcVar9)();
            return (bool)uVar13;
          }
          uVar18 = *(uint *)&(pTVar39->Elements).field_0x28;
          if (uVar27 != uVar18) {
            puVar35 = *(undefined1 **)&(pTVar39->Elements).field_0x20;
            if (puVar35 == (undefined1 *)0x0) {
              puVar35 = &(pTVar39->Elements).field_0x10;
            }
            uVar27 = -1 << ((byte)uVar27 & 0x1f) & *(uint *)(puVar35 + (longlong)iVar30 * 4);
            while (uVar27 == 0) {
              lVar25 = (longlong)iVar30;
              uVar28 = uVar28 + 0x20;
              iVar30 = iVar30 + 1;
              uVar27 = uVar18;
              if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar30)
              goto LAB_14db4fc90;
              uVar27 = *(uint *)(puVar35 + lVar25 * 4 + 4);
            }
            uVar3 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
            lVar25 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            local_334 = (int)lVar25;
            uVar27 = (uVar28 - 1) + local_334;
            if ((int)uVar18 < (int)uVar27) {
              uVar27 = uVar18;
            }
          }
LAB_14db4fc90:
          while( true ) {
            pTVar11 = local_328;
            if (*(int *)&(local_328->Elements).field_0x8 - *(int *)&(local_328->Elements).field_0x34
                != (int)uStack_300) {
              local_538 = 0;
              `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_538);
            }
            if (((TStack_320.CurrentBitIndex == uVar27) &&
                (TStack_320.Array ==
                 (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar39->Elements).field_0x10)) &&
               (pTVar11 == pTVar39)) break;
            iVar30 = *(int *)(*(longlong *)&pTVar11->Elements +
                             (longlong)TStack_320.CurrentBitIndex * 0xc);
            if ((-1 < iVar30) && (iVar30 < iVar15)) {
              if ((iVar30 < 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar13 = (*pcVar9)();
                return (bool)uVar13;
              }
              puVar32 = (undefined8 *)((longlong)iVar30 * 0x10 + local_458);
              puVar26 = (undefined4 *)*puVar32;
              iVar15 = *(int *)(puVar32 + 1);
              puVar1 = puVar26 + iVar15;
              while( true ) {
                if (*(int *)(puVar32 + 1) != iVar15) {
                  local_537 = 0;
                  `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(&local_537);
                }
                if (puVar26 == puVar1) break;
                local_460[0] = *puVar26;
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          (param_5,&local_330,(bool *)local_460);
                puVar26 = puVar26 + 1;
              }
            }
            TStack_320.UnvisitedBitMask = TStack_320.UnvisitedBitMask & ~TStack_320._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_320);
            iVar15 = (int)local_4e8;
          }
          goto LAB_14db4f9f2;
        }
      }
      else if (local_354 == ClothCollectionGroup::SimFaces) {
        if (FVar5 == ClothCollectionGroup::SimVertices2D) {
          pTVar6 = (local_4e0.ClothCollection.Object)->SimIndices2D;
          if (pTVar6 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
            local_410.DataPtr = (TIntVector3<int> *)0x0;
            local_410.ArrayNum = 0;
          }
          else {
            local_410.ArrayNum = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
            local_410.DataPtr = *(TIntVector3<int> **)&pTVar6->field_0x10;
            if ((local_410.ArrayNum < 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar14)) {
              pcVar9 = (code *)swi(3);
              uVar13 = (*pcVar9)();
              return (bool)uVar13;
            }
          }
          `UE::Chaos::ClothAsset::FClothGeometryTools::ConvertSelectionToNewGroupType'::__l2::
          <lambda_2>::operator()(&local_3f0,&local_410);
          goto LAB_14db50912;
        }
        if (FVar5 == ClothCollectionGroup::SimVertices3D) {
          pTVar22 = FCollectionClothConstFacade::GetSimIndices3D(&local_4e0,local_108);
          `UE::Chaos::ClothAsset::FClothGeometryTools::ConvertSelectionToNewGroupType'::__l2::
          <lambda_2>::operator()(&local_3f0,pTVar22);
          goto LAB_14db50912;
        }
      }
      else {
        if (local_354 == ClothCollectionGroup::SimPatterns) {
          iVar30 = FManagedArrayCollection::NumElements
                             (((local_4e0.ClothCollection.Object)->ManagedArrayCollection).Object,
                              ClothCollectionGroup::SimPatterns);
          FVar5 = *param_3;
          if (FVar5 == ClothCollectionGroup::SimFaces) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(param_5);
            uVar16 = *(uint *)&(pTVar39->Elements).field_0x28;
            local_520 = (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar39->Elements).field_0x10;
            if (uVar16 != 0) {
              puVar37 = *(uint **)&(pTVar39->Elements).field_0x20;
              if (puVar37 == (uint *)0x0) {
                puVar37 = (uint *)local_520;
              }
              uVar34 = *puVar37;
              uVar18 = uVar28;
              uVar27 = uVar28;
              while (uVar34 == 0) {
                lVar25 = (longlong)(int)uVar27;
                uVar18 = uVar18 + 0x20;
                uVar27 = uVar27 + 1;
                uVar34 = uVar16;
                if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar27)
                goto LAB_14db4ff00;
                uVar34 = puVar37[lVar25 + 1];
              }
              uVar17 = -uVar34 & uVar34;
              uVar3 = (ulonglong)uVar17 * 2 + 1;
              lVar25 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                }
              }
              local_32c = (int)lVar25;
              uVar34 = (uVar18 - 1) + local_32c;
              if ((int)uVar16 < (int)uVar34) {
                uVar34 = uVar16;
              }
            }
LAB_14db4ff00:
            uVar28 = *(uint *)&(pTVar39->Elements).field_0x28;
            iStack_508 = *(int *)&(pTVar39->Elements).field_0x8 -
                         *(int *)&(pTVar39->Elements).field_0x34;
            uVar29 = uVar28 & 0xffffffe0;
            uStack_528 = CONCAT44(uVar17,uVar27);
            uStack_514 = uVar34;
            uStack_518 = 0xffffffff;
            puVar35 = &(pTVar39->Elements).field_0x10;
            uStack_50c = local_bc;
            local_510 = uVar18;
            TStack_2c0._padding_ = uStack_528;
            iVar15 = (int)uVar28 >> 5;
            uStack_2a0 = CONCAT44(uStack_504,iStack_508);
            TStack_2c0.UnvisitedBitMask = 0xffffffff;
            TStack_2c0.CurrentBitIndex = uVar34;
            TStack_2c0.BaseBitIndex = uVar18;
            TStack_2c0._28_4_ = local_bc;
            local_2c8 = pTVar39;
            TStack_2c0.Array = local_520;
            if ((((int)uVar28 < 0) || (local_530 = pTVar39, (int)uVar16 < (int)uVar28)) &&
               (local_530 = pTVar39,
               bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x7af,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              uVar13 = (*pcVar9)();
              return (bool)uVar13;
            }
            uVar27 = *(uint *)&(pTVar39->Elements).field_0x28;
            if (uVar28 != uVar27) {
              puVar36 = *(undefined1 **)&(pTVar39->Elements).field_0x20;
              if (puVar36 == (undefined1 *)0x0) {
                puVar36 = puVar35;
              }
              uVar28 = -1 << ((byte)uVar28 & 0x1f) & *(uint *)(puVar36 + (longlong)iVar15 * 4);
              while (uVar28 == 0) {
                lVar25 = (longlong)iVar15;
                uVar29 = uVar29 + 0x20;
                iVar15 = iVar15 + 1;
                uVar28 = uVar27;
                if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
                goto LAB_14db50020;
                uVar28 = *(uint *)(puVar36 + lVar25 * 4 + 4);
              }
              uVar3 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
              lVar25 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                }
              }
              uVar28 = (uVar29 - 1) + (int)lVar25;
              if ((int)uVar27 < (int)uVar28) {
                uVar28 = uVar27;
              }
            }
LAB_14db50020:
            while( true ) {
              pTVar11 = local_2c8;
              if (*(int *)&(local_2c8->Elements).field_0x8 -
                  *(int *)&(local_2c8->Elements).field_0x34 != (int)uStack_2a0) {
                `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_536);
              }
              if (((TStack_2c0.CurrentBitIndex == uVar28) &&
                  (TStack_2c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar35)) &&
                 (pTVar11 == pTVar39)) break;
              iVar15 = *(int *)(*(longlong *)&pTVar11->Elements +
                               (longlong)TStack_2c0.CurrentBitIndex * 0xc);
              if ((-1 < iVar15) && (iVar15 < iVar30)) {
                FCollectionClothSimPatternConstFacade::FCollectionClothSimPatternConstFacade
                          (&local_1f8,&local_4e0.ClothCollection,iVar15);
                pFVar10 = local_1f8.ClothCollection.Object;
                iVar19 = local_1f8.PatternIndex;
                iVar15 = FConstClothCollection::GetNumElements
                                   (local_1f8.ClothCollection.Object,
                                    (local_1f8.ClothCollection.Object)->SimFacesStart,
                                    (local_1f8.ClothCollection.Object)->SimFacesEnd,iVar19);
                iVar19 = FConstClothCollection::GetElementsOffset(pFVar10->SimFacesStart,0,iVar19);
                `UE::Chaos::ClothAsset::FClothGeometryTools::ConvertSelectionToNewGroupType'::__l2::
                <lambda_3>::operator()(&local_498,iVar19,iVar15);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_1f8.ClothCollection.SharedReferenceCount.ReferenceController);
              }
              TStack_2c0.UnvisitedBitMask =
                   TStack_2c0.UnvisitedBitMask & ~TStack_2c0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c0);
            }
          }
          else if (FVar5 == ClothCollectionGroup::SimVertices2D) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(param_5);
            pTVar38 = (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar39->Elements).field_0x10;
            local_3c0.UnvisitedBitMask = 0xffffffff;
            local_3c0._padding_._0_4_ = 0;
            local_3c0.CurrentBitIndex = 0;
            local_3c0.BaseBitIndex = 0;
            local_3c0._padding_._4_4_ = iVar15;
            local_3c0.Array = pTVar38;
            if (*(int *)&(pTVar39->Elements).field_0x28 != 0) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3c0);
            }
            uVar27 = *(uint *)&(pTVar39->Elements).field_0x28;
            uStack_528 = CONCAT44(local_3c0._padding_._4_4_,(undefined4)local_3c0._padding_);
            bVar24 = (byte)uVar27 & 0x1f;
            iStack_508 = *(int *)&(pTVar39->Elements).field_0x8 -
                         *(int *)&(pTVar39->Elements).field_0x34;
            uStack_514 = local_3c0.CurrentBitIndex;
            uStack_518 = local_3c0.UnvisitedBitMask;
            uStack_50c = local_3c0._28_4_;
            local_510 = local_3c0.BaseBitIndex;
            local_450._padding_._0_4_ = (int)uVar27 >> 5;
            local_520 = local_3c0.Array;
            local_450._padding_._4_4_ = 1 << bVar24;
            local_450.BaseBitIndex = uVar27 & 0xffffffe0;
            local_450.UnvisitedBitMask = -1 << bVar24;
            uStack_270 = CONCAT44(uStack_504,iStack_508);
            TStack_290.Array = local_3c0.Array;
            local_530 = pTVar39;
            local_450.Array = pTVar38;
            local_450.CurrentBitIndex = uVar27;
            local_298 = pTVar39;
            TStack_290._padding_ = uStack_528;
            TStack_290._16_8_ = _uStack_518;
            TStack_290._24_8_ = _local_510;
            if (((int)uVar27 < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              uVar13 = (*pcVar9)();
              return (bool)uVar13;
            }
            if (uVar27 != *(uint *)&(pTVar39->Elements).field_0x28) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_450);
              pTVar38 = local_450.Array;
              uVar27 = local_450.CurrentBitIndex;
            }
            while( true ) {
              pTVar11 = local_298;
              if (*(int *)&(local_298->Elements).field_0x8 -
                  *(int *)&(local_298->Elements).field_0x34 != (int)uStack_270) {
                `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_535);
              }
              if (((TStack_290.CurrentBitIndex == uVar27) && (TStack_290.Array == pTVar38)) &&
                 (pTVar11 == pTVar39)) break;
              iVar15 = *(int *)(*(longlong *)&pTVar11->Elements +
                               (longlong)TStack_290.CurrentBitIndex * 0xc);
              if ((-1 < iVar15) && (iVar15 < iVar30)) {
                FCollectionClothSimPatternConstFacade::FCollectionClothSimPatternConstFacade
                          (&local_1d8,&local_4e0.ClothCollection,iVar15);
                pFVar10 = local_1d8.ClothCollection.Object;
                iVar19 = local_1d8.PatternIndex;
                iVar15 = FConstClothCollection::GetNumElements
                                   (local_1d8.ClothCollection.Object,
                                    (local_1d8.ClothCollection.Object)->SimVertices2DStart,
                                    (local_1d8.ClothCollection.Object)->SimVertices2DEnd,iVar19);
                iVar19 = FConstClothCollection::GetElementsOffset
                                   (pFVar10->SimVertices2DStart,0,iVar19);
                `UE::Chaos::ClothAsset::FClothGeometryTools::ConvertSelectionToNewGroupType'::__l2::
                <lambda_3>::operator()(&local_498,iVar19,iVar15);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_1d8.ClothCollection.SharedReferenceCount.ReferenceController);
              }
              TStack_290.UnvisitedBitMask =
                   TStack_290.UnvisitedBitMask & ~TStack_290._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_290);
            }
          }
          else {
            if (FVar5 != ClothCollectionGroup::SimVertices3D) goto LAB_14db50910;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(param_5);
            puVar35 = &(pTVar39->Elements).field_0x10;
            local_3a0.UnvisitedBitMask = 0xffffffff;
            local_3a0._padding_._0_4_ = 0;
            local_3a0.CurrentBitIndex = 0;
            local_3a0.BaseBitIndex = 0;
            local_3a0._padding_._4_4_ = iVar15;
            local_3a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar35;
            if (*(int *)&(pTVar39->Elements).field_0x28 != 0) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3a0);
            }
            unique0x1000175e = CONCAT44(local_3a0._padding_._4_4_,(undefined4)local_3a0._padding_);
            uStack_4b0 = CONCAT44(local_3a0.CurrentBitIndex,local_3a0.UnvisitedBitMask);
            lStack_4a8 = CONCAT44(local_3a0._28_4_,local_3a0.BaseBitIndex);
            local_4a0 = *(int *)&(pTVar39->Elements).field_0x8 -
                        *(int *)&(pTVar39->Elements).field_0x34;
            pTStack_4b8 = local_3a0.Array;
            TStack_260.Array = local_3a0.Array;
            iStack_240 = local_4a0;
            uStack_23c = uStack_49c;
            local_4c8._0_8_ = pTVar39;
            local_268 = pTVar39;
            TStack_260._padding_ = unique0x1000175e;
            TStack_260._16_8_ = uStack_4b0;
            TStack_260._24_8_ = lStack_4a8;
            pTVar23 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                      TConstSetBitIterator<FDefaultBitArrayAllocator>
                                (&local_b8,(TBitArray<FDefaultBitArrayAllocator> *)puVar35,
                                 *(int *)&(pTVar39->Elements).field_0x28);
            lVar25._0_4_ = pTVar23->UnvisitedBitMask;
            lVar25._4_4_ = pTVar23->CurrentBitIndex;
            local_238._padding_ = *(longlong *)&pTVar23->BaseBitIndex;
            local_238._padding_ = pTVar23->_padding_;
            local_238._padding_ = (longlong)pTVar23->Array;
            local_238._padding_ = lVar25;
            while( true ) {
              pTVar11 = local_268;
              if (*(int *)&(local_268->Elements).field_0x8 -
                  *(int *)&(local_268->Elements).field_0x34 != iStack_240) {
                `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_534);
              }
              if (((TStack_260.CurrentBitIndex == lVar25._4_4_) &&
                  (TStack_260.Array == (TBitArray<FDefaultBitArrayAllocator> *)local_238._padding_))
                 && (pTVar11 == pTVar39)) break;
              iVar15 = *(int *)(*(longlong *)&pTVar11->Elements +
                               (longlong)TStack_260.CurrentBitIndex * 0xc);
              if ((-1 < iVar15) && (iVar15 < iVar30)) {
                FCollectionClothSimPatternConstFacade::FCollectionClothSimPatternConstFacade
                          (&local_1b8,&local_4e0.ClothCollection,iVar15);
                pFVar10 = local_1b8.ClothCollection.Object;
                iVar15 = *(int *)&(param_5->Elements).field_0x8;
                iVar19 = *(int *)&(param_5->Elements).field_0x34;
                iVar31 = local_1b8.PatternIndex;
                iVar20 = FConstClothCollection::GetNumElements
                                   (local_1b8.ClothCollection.Object,
                                    (local_1b8.ClothCollection.Object)->SimVertices2DStart,
                                    (local_1b8.ClothCollection.Object)->SimVertices2DEnd,iVar31);
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reserve
                          (param_5,(iVar15 - iVar19) + iVar20);
                FConstClothCollection::GetElements<UE::Math::TIntVector3<int>_>
                          (&local_208,pFVar10->SimIndices3D,pFVar10->SimFacesStart,
                           pFVar10->SimFacesEnd,iVar31);
                pTVar2 = local_208.DataPtr + local_208.ArrayNum;
                for (pTVar33 = local_208.DataPtr; pTVar33 != pTVar2; pTVar33 = pTVar33 + 1) {
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                            (param_5,&local_360,(bool *)pTVar33);
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                            (param_5,&local_35c,(bool *)((longlong)&pTVar33->field0_0x0 + 4));
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                            (param_5,&local_358,(bool *)((longlong)&pTVar33->field0_0x0 + 8));
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_1b8.ClothCollection.SharedReferenceCount.ReferenceController);
              }
              TStack_260.UnvisitedBitMask =
                   TStack_260.UnvisitedBitMask & ~TStack_260._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_260);
            }
          }
LAB_14db4f9f2:
          bVar12 = true;
          goto LAB_14db50912;
        }
        if (local_354 == ClothCollectionGroup::RenderVertices) {
          if (FVar5 == ClothCollectionGroup::RenderFaces) {
            pTVar22 = FCollectionClothConstFacade::GetRenderIndices(&local_4e0,&local_118);
            `UE::Chaos::ClothAsset::FClothGeometryTools::ConvertSelectionToNewGroupType'::__l2::
            <lambda_1>::operator()(&local_400,pTVar22);
            goto LAB_14db50912;
          }
        }
        else if (local_354 == ClothCollectionGroup::RenderFaces) {
          if (FVar5 == ClothCollectionGroup::RenderVertices) {
            pTVar22 = FCollectionClothConstFacade::GetRenderIndices(&local_4e0,&local_128);
            `UE::Chaos::ClothAsset::FClothGeometryTools::ConvertSelectionToNewGroupType'::__l2::
            <lambda_2>::operator()(&local_3f0,pTVar22);
            goto LAB_14db50912;
          }
        }
        else if (local_354 == ClothCollectionGroup::RenderPatterns) {
          iVar30 = FManagedArrayCollection::NumElements
                             (((local_4e0.ClothCollection.Object)->ManagedArrayCollection).Object,
                              ClothCollectionGroup::RenderPatterns);
          if (*param_3 == ClothCollectionGroup::RenderFaces) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(param_5);
            puVar35 = &(pTVar39->Elements).field_0x10;
            local_380.UnvisitedBitMask = 0xffffffff;
            local_380._padding_._0_4_ = 0;
            local_380.CurrentBitIndex = 0;
            local_380.BaseBitIndex = 0;
            local_380._padding_._4_4_ = iVar15;
            local_380.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar35;
            if (*(int *)&(pTVar39->Elements).field_0x28 != 0) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_380);
            }
            unique0x1000177e = CONCAT44(local_380._padding_._4_4_,(undefined4)local_380._padding_);
            uStack_4b0 = CONCAT44(local_380.CurrentBitIndex,local_380.UnvisitedBitMask);
            lStack_4a8 = CONCAT44(local_380._28_4_,local_380.BaseBitIndex);
            local_4a0 = *(int *)&(pTVar39->Elements).field_0x8 -
                        *(int *)&(pTVar39->Elements).field_0x34;
            pTStack_4b8 = local_380.Array;
            local_480 = local_380.Array;
            iStack_468 = local_4a0;
            uStack_464 = uStack_49c;
            local_4c8._0_8_ = pTVar39;
            local_490._0_8_ = pTVar39;
            unique0x10002d3c = unique0x1000177e;
            uStack_478 = uStack_4b0;
            local_470 = lStack_4a8;
            pTVar23 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                      TConstSetBitIterator<FDefaultBitArrayAllocator>
                                (&local_98,(TBitArray<FDefaultBitArrayAllocator> *)puVar35,
                                 *(int *)&(pTVar39->Elements).field_0x28);
            unique0x1000151e = pTVar23->_padding_;
            pTStack_4b8 = pTVar23->Array;
            uStack_4b0._0_4_ = pTVar23->UnvisitedBitMask;
            uStack_4b0._4_4_ = pTVar23->CurrentBitIndex;
            lStack_4a8 = *(longlong *)&pTVar23->BaseBitIndex;
            local_158.InitialNum =
                 *(int *)&(pTVar39->Elements).field_0x8 - *(int *)&(pTVar39->Elements).field_0x34;
            local_4a0 = local_158.InitialNum;
            local_158._44_4_ = uStack_49c;
            local_4c8._0_8_ = pTVar39;
            local_158._padding_ = (longlong)pTVar39;
            local_158._padding_ = unique0x1000151e;
            local_158._padding_ = (longlong)pTStack_4b8;
            local_158._padding_ = uStack_4b0;
            local_158._padding_ = lStack_4a8;
            bVar14 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForConstIterator::operator!=
                               ((TRangedForConstIterator *)local_490,&local_158);
            if (bVar14) {
              do {
                iVar15 = *(int *)(*(longlong *)
                                   (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                    *)local_490._0_8_ + (longlong)uStack_478._4_4_ * 0xc);
                if ((-1 < iVar15) && (iVar15 < iVar30)) {
                  FCollectionClothRenderPatternConstFacade::FCollectionClothRenderPatternConstFacade
                            (&local_198,&local_4e0.ClothCollection,iVar15);
                  pFVar10 = local_198.ClothCollection.Object;
                  iVar19 = local_198.PatternIndex;
                  iVar15 = FConstClothCollection::GetNumElements
                                     (local_198.ClothCollection.Object,
                                      (local_198.ClothCollection.Object)->RenderFacesStart,
                                      (local_198.ClothCollection.Object)->RenderFacesEnd,iVar19);
                  iVar19 = FConstClothCollection::GetElementsOffset
                                     (pFVar10->RenderFacesStart,0,iVar19);
                  `UE::Chaos::ClothAsset::FClothGeometryTools::ConvertSelectionToNewGroupType'::__l2
                  ::<lambda_3>::operator()(&local_498,iVar19,iVar15);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline
                            (local_198.ClothCollection.SharedReferenceCount.ReferenceController);
                }
                uStack_478 = CONCAT44(uStack_478._4_4_,(uint)uStack_478 & ~uStack_484);
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_490 + 8));
                bVar14 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         ::TRangedForConstIterator::operator!=
                                   ((TRangedForConstIterator *)local_490,&local_158);
              } while (bVar14);
            }
            goto LAB_14db50912;
          }
          if (*param_3 == ClothCollectionGroup::RenderVertices) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(param_5);
            puVar35 = &(pTVar39->Elements).field_0x10;
            local_3e0.UnvisitedBitMask = 0xffffffff;
            local_3e0._padding_._0_4_ = 0;
            local_3e0.CurrentBitIndex = 0;
            local_3e0.BaseBitIndex = 0;
            local_3e0._padding_._4_4_ = iVar15;
            local_3e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar35;
            if (*(int *)&(pTVar39->Elements).field_0x28 != 0) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3e0);
            }
            unique0x1000171e = CONCAT44(local_3e0._padding_._4_4_,(undefined4)local_3e0._padding_);
            uStack_4b0 = CONCAT44(local_3e0.CurrentBitIndex,local_3e0.UnvisitedBitMask);
            lStack_4a8 = CONCAT44(local_3e0._28_4_,local_3e0.BaseBitIndex);
            iStack_468 = *(int *)&(pTVar39->Elements).field_0x8 -
                         *(int *)&(pTVar39->Elements).field_0x34;
            local_480 = local_3e0.Array;
            pTStack_4b8 = local_3e0.Array;
            local_4a0 = iStack_468;
            uStack_49c = uStack_464;
            local_4c8._0_8_ = pTVar39;
            local_490._0_8_ = pTVar39;
            unique0x10002d34 = unique0x1000171e;
            uStack_478 = uStack_4b0;
            local_470 = lStack_4a8;
            pTVar23 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                      TConstSetBitIterator<FDefaultBitArrayAllocator>
                                (&local_78,(TBitArray<FDefaultBitArrayAllocator> *)puVar35,
                                 *(int *)&(pTVar39->Elements).field_0x28);
            unique0x1000165e = pTVar23->_padding_;
            local_480 = pTVar23->Array;
            uStack_478._0_4_ = pTVar23->UnvisitedBitMask;
            uStack_478._4_4_ = pTVar23->CurrentBitIndex;
            local_470 = *(longlong *)&pTVar23->BaseBitIndex;
            local_238.InitialNum =
                 *(int *)&(pTVar39->Elements).field_0x8 - *(int *)&(pTVar39->Elements).field_0x34;
            iStack_468 = local_238.InitialNum;
            local_238._44_4_ = uStack_464;
            local_490._0_8_ = pTVar39;
            local_238._padding_ = (longlong)pTVar39;
            local_238._padding_ = unique0x1000165e;
            local_238._padding_ = (longlong)local_480;
            local_238._padding_ = uStack_478;
            local_238._padding_ = local_470;
            bVar14 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForConstIterator::operator!=
                               ((TRangedForConstIterator *)local_4c8,&local_238);
            if (bVar14) {
              do {
                iVar15 = *(int *)(*(longlong *)
                                   (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                    *)local_4c8._0_8_ + (longlong)uStack_4b0._4_4_ * 0xc);
                if ((-1 < iVar15) && (iVar15 < iVar30)) {
                  FCollectionClothRenderPatternConstFacade::FCollectionClothRenderPatternConstFacade
                            (&local_178,&local_4e0.ClothCollection,iVar15);
                  pFVar10 = local_178.ClothCollection.Object;
                  iVar19 = local_178.PatternIndex;
                  iVar15 = FConstClothCollection::GetNumElements
                                     (local_178.ClothCollection.Object,
                                      (local_178.ClothCollection.Object)->RenderVerticesStart,
                                      (local_178.ClothCollection.Object)->RenderVerticesEnd,iVar19);
                  iVar19 = FConstClothCollection::GetElementsOffset
                                     (pFVar10->RenderVerticesStart,0,iVar19);
                  `UE::Chaos::ClothAsset::FClothGeometryTools::ConvertSelectionToNewGroupType'::__l2
                  ::<lambda_3>::operator()(&local_498,iVar19,iVar15);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline
                            (local_178.ClothCollection.SharedReferenceCount.ReferenceController);
                }
                uStack_4b0 = CONCAT44(uStack_4b0._4_4_,(uint)uStack_4b0 & ~uStack_4bc);
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_4c8 + 8));
                bVar14 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         ::TRangedForConstIterator::operator!=
                                   ((TRangedForConstIterator *)local_4c8,&local_238);
              } while (bVar14);
            }
            goto LAB_14db50912;
          }
        }
      }
    }
  }
LAB_14db50910:
  bVar12 = false;
LAB_14db50912:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4e0.ClothCollection.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_500.ManagedArrayCollection.SharedReferenceCount.ReferenceController);
  return bVar12;
}

// CopySimMeshToRenderMesh @ 14db50960

void __cdecl
UE::Chaos::ClothAsset::FClothGeometryTools::CopySimMeshToRenderMesh
          (TSharedRef<FManagedArrayCollection,1> *param_1,FSoftObjectPath *param_2,bool param_3)

{
  atomic<int> *paVar1;
  int *piVar2;
  undefined8 uVar3;
  FConstClothCollection *pFVar4;
  longlong *plVar5;
  TIntVector3<int> *pTVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  FLinearColor FVar10;
  undefined4 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  FCollectionClothSimPatternFacade *pFVar18;
  TArrayView<UE::Math::TVector<float>,int> *pTVar19;
  TArrayView<UE::Math::TIntVector3<int>,int> *pTVar20;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar21;
  uint uVar22;
  TReferenceControllerBase<1> *pTVar23;
  longlong lVar24;
  int *piVar25;
  uint uVar26;
  atomic<int> *paVar27;
  longlong lVar28;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar29;
  uint uVar30;
  uint uVar31;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar32;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar33;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar34;
  int iVar35;
  longlong lVar36;
  uint uVar37;
  undefined8 *puVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  int local_res18;
  int local_2a4;
  int local_29c;
  int local_298;
  float local_294;
  undefined1 local_288 [16];
  TReferenceControllerBase<1> *local_278;
  longlong local_270;
  int *local_268;
  longlong local_260;
  int local_258;
  longlong local_250;
  longlong local_248;
  TArrayView<UE::Math::TVector<float>,int> local_240;
  TArrayView<UE::Math::TVector<float>,int> local_230;
  longlong local_220;
  int local_218;
  TVector<float> *local_210;
  TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int> local_208;
  TVector2<float>_u_0 local_1f8;
  TVector<float> *local_1f0;
  longlong local_1e8;
  TArrayView<UE::Math::TIntVector3<int>,int> local_1e0;
  TArrayView<UE::Math::TVector<float>,int> local_1d0;
  TArrayView<UE::Math::TVector<float>,int> local_1c0;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_1b0;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_1a0;
  TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> local_190;
  FCollectionClothRenderPatternConstFacade local_180;
  TArrayView<UE::Math::TVector<float>,int> local_160;
  TArrayView<UE::Math::TVector<float>,int> local_150;
  TArrayView<UE::Math::TIntVector3<int>,int> local_140;
  undefined1 local_130 [32];
  undefined1 local_110 [208];
  
  bVar9 = false;
  bVar12 = false;
  FCollectionClothFacade::FCollectionClothFacade((FCollectionClothFacade *)local_288,param_1);
  if (param_3) {
    iVar16 = 1;
  }
  else {
    iVar16 = FManagedArrayCollection::NumElements
                       (*(FManagedArrayCollection **)local_288._8_8_,
                        ClothCollectionGroup::SimPatterns);
  }
  FCollectionClothFacade::SetNumRenderPatterns((FCollectionClothFacade *)local_288,iVar16);
  puVar38 = (undefined8 *)local_288._8_8_;
  iVar13 = FManagedArrayCollection::NumElements
                     (*(FManagedArrayCollection **)local_288._8_8_,ClothCollectionGroup::SimFaces);
  iVar14 = FManagedArrayCollection::NumElements
                     ((FManagedArrayCollection *)*puVar38,ClothCollectionGroup::SimVertices2D);
  iVar35 = 0;
  pTVar23 = local_278;
  if (0 < iVar16) {
    do {
      if (pTVar23 == (TReferenceControllerBase<1> *)0x0) {
        paVar27 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar27 = &pTVar23->SharedReferenceCount;
        LOCK();
        *paVar27 = (atomic<int>)((int)*paVar27 + 1);
        UNLOCK();
        LOCK();
        *paVar27 = (atomic<int>)((int)*paVar27 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
      if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar27 = (atomic<int>)((int)*paVar27 + 1);
        UNLOCK();
      }
      FCollectionClothRenderPatternConstFacade::FCollectionClothRenderPatternConstFacade
                (&local_180,&local_190,iVar35);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
      local_180._padding_ =
           (longlong)&___7FCollectionClothRenderPatternFacade_ClothAsset_Chaos_UE__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
      FCollectionClothRenderPatternFacade::SetRenderMaterialSoftObjectPathName
                ((FCollectionClothRenderPatternFacade *)&local_180,param_2);
      iVar15 = iVar14;
      if (!param_3) {
        bVar12 = true;
        pFVar18 = FCollectionClothFacade::GetSimPattern
                            ((FCollectionClothFacade *)local_288,
                             (FCollectionClothSimPatternFacade *)local_130,iVar35);
        pFVar4 = *(FConstClothCollection **)&pFVar18->field_0x8;
        iVar15 = FConstClothCollection::GetNumElements
                           (pFVar4,pFVar4->SimVertices2DStart,pFVar4->SimVertices2DEnd,
                            *(int *)&pFVar18->field_0x18);
        pTVar23 = local_278;
        puVar38 = (undefined8 *)local_288._8_8_;
      }
      FCollectionClothRenderPatternFacade::SetNumRenderVertices
                ((FCollectionClothRenderPatternFacade *)&local_180,iVar15);
      if (bVar12) {
        bVar12 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_130._16_8_);
      }
      iVar15 = iVar13;
      if (!param_3) {
        bVar9 = true;
        pFVar18 = FCollectionClothFacade::GetSimPattern
                            ((FCollectionClothFacade *)local_288,
                             (FCollectionClothSimPatternFacade *)local_110,iVar35);
        pFVar4 = *(FConstClothCollection **)&pFVar18->field_0x8;
        iVar15 = FConstClothCollection::GetNumElements
                           (pFVar4,pFVar4->SimFacesStart,pFVar4->SimFacesEnd,
                            *(int *)&pFVar18->field_0x18);
        pTVar23 = local_278;
        puVar38 = (undefined8 *)local_288._8_8_;
      }
      FCollectionClothRenderPatternFacade::SetNumRenderFaces
                ((FCollectionClothRenderPatternFacade *)&local_180,iVar15);
      if (bVar9) {
        bVar9 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_110._16_8_);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_180.ClothCollection.SharedReferenceCount.ReferenceController);
      iVar35 = iVar35 + 1;
    } while (iVar35 < iVar16);
  }
  fVar49 = __real_7f7fffff;
  fVar43 = __real_ff7fffff;
  if (pTVar23 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    paVar27 = &pTVar23->SharedReferenceCount;
    LOCK();
    *paVar27 = (atomic<int>)((int)*paVar27 + 1);
    UNLOCK();
    LOCK();
    *paVar27 = (atomic<int>)((int)*paVar27 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
    LOCK();
    *paVar27 = (atomic<int>)((int)*paVar27 + 1);
    UNLOCK();
    LOCK();
    *paVar27 = (atomic<int>)((int)*paVar27 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  plVar5 = (longlong *)puVar38[0x27];
  if (plVar5 == (longlong *)0x0) {
    iVar16 = 0;
    local_250 = 0;
    local_258 = 0;
  }
  else {
    iVar16 = (**(code **)(*plVar5 + 0x60))(plVar5);
    local_250 = plVar5[2];
    local_258 = iVar16;
    if ((iVar16 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  pTVar19 = FCollectionClothFacade::GetSimNormal((FCollectionClothFacade *)local_288,&local_160);
  local_1f0 = pTVar19->DataPtr;
  local_218 = pTVar19->ArrayNum;
  FCollectionClothFacade::GetRenderTangentU((FCollectionClothFacade *)local_288,&local_240);
  FCollectionClothFacade::GetRenderTangentV((FCollectionClothFacade *)local_288,&local_230);
  lVar28 = local_250;
  uVar26 = 0;
  fVar50 = fVar43;
  fVar47 = fVar49;
  if (0 < iVar14) {
    lVar36 = 0;
    lVar24 = 0;
    do {
      uVar30 = ~uVar26 >> 0x1f;
      uVar37 = (int)uVar26 < iVar16 & uVar30;
      if ((uVar37 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar53 = *(float *)(lVar28 + lVar24 * 8);
      if (fVar53 <= fVar47) {
        fVar47 = fVar53;
      }
      fVar53 = *(float *)(lVar28 + 4 + lVar24 * 8);
      if (fVar53 <= fVar49) {
        fVar49 = fVar53;
      }
      if ((uVar37 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar11 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      fVar53 = *(float *)(lVar28 + lVar24 * 8);
      if (fVar43 <= fVar53) {
        fVar43 = fVar53;
      }
      fVar53 = *(float *)(lVar28 + 4 + lVar24 * 8);
      if (fVar50 <= fVar53) {
        fVar50 = fVar53;
      }
      uVar37 = 0;
      if ((int)uVar26 < local_240.ArrayNum) {
        uVar37 = uVar30;
      }
      if ((uVar37 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined8 *)((longlong)&(local_240.DataPtr)->field0_0x0 + lVar36) = uVar3;
      *(undefined4 *)((longlong)&(local_240.DataPtr)->field0_0x0 + lVar36 + 8) = uVar11;
      uVar11 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar37 = 0;
      if ((int)uVar26 < local_230.ArrayNum) {
        uVar37 = uVar30;
      }
      if ((uVar37 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar26 = uVar26 + 1;
      lVar24 = lVar24 + 1;
      *(undefined8 *)((longlong)&(local_230.DataPtr)->field0_0x0 + lVar36) = uVar3;
      *(undefined4 *)((longlong)&(local_230.DataPtr)->field0_0x0 + lVar36 + 8) = uVar11;
      lVar36 = lVar36 + 0xc;
    } while ((int)uVar26 < iVar14);
  }
  fVar54 = __real_3f800000;
  fVar53 = __real_322bcc77;
  if (__real_322bcc77 <= fVar50 - fVar49) {
    local_294 = __real_3f800000 / (fVar50 - fVar49);
  }
  else {
    local_294 = 0.0;
  }
  if (__real_322bcc77 <= fVar43 - fVar47) {
    fVar43 = __real_3f800000 / (fVar43 - fVar47);
  }
  else {
    fVar43 = 0.0;
  }
  pTVar19 = FCollectionClothFacade::GetSimPosition3D((FCollectionClothFacade *)local_288,&local_150)
  ;
  local_210 = pTVar19->DataPtr;
  iVar35 = pTVar19->ArrayNum;
  plVar5 = *(longlong **)(local_288._8_8_ + 0x140);
  if (plVar5 == (longlong *)0x0) {
    local_270 = 0;
    local_res18 = 0;
  }
  else {
    local_res18 = (**(code **)(*plVar5 + 0x60))(plVar5);
    local_270 = plVar5[2];
    if ((local_res18 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar20 = FCollectionClothFacade::GetSimIndices2D((FCollectionClothFacade *)local_288,&local_140);
  iVar15 = pTVar20->ArrayNum;
  pTVar6 = pTVar20->DataPtr;
  FCollectionClothFacade::GetRenderIndices((FCollectionClothFacade *)local_288,&local_1e0);
  uVar26 = 0;
  if (0 < iVar13) {
    piVar25 = &(pTVar6->field0_0x0)._s_0.Z;
    local_260 = -8 - (longlong)pTVar6;
    uVar30 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    do {
      uVar37 = 0;
      if ((int)uVar26 < iVar15) {
        uVar37 = ~uVar26 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar3 = *(undefined8 *)(piVar25 + -2);
      uVar37 = *piVar25;
      uVar22 = 0;
      if ((int)uVar26 < local_1e0.ArrayNum) {
        uVar22 = ~uVar26 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar28 = (longlong)&(local_1e0.DataPtr)->field0_0x0 + local_260;
      *(undefined8 *)(lVar28 + (longlong)piVar25) = uVar3;
      *(uint *)(lVar28 + 8 + (longlong)piVar25) = uVar37;
      uVar37 = piVar25[-1];
      uVar22 = 0;
      if ((int)uVar37 < local_res18) {
        uVar22 = ~uVar37 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar37 = *(uint *)(local_270 + (longlong)(int)uVar37 * 4);
      uVar22 = 0;
      if ((int)uVar37 < iVar35) {
        uVar22 = ~uVar37 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar22 = ((TIntVector3<int>_u_0_s_0 *)(piVar25 + -2))->X;
      uVar17 = 0;
      if ((int)uVar22 < local_res18) {
        uVar17 = ~uVar22 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar22 = *(uint *)(local_270 + (longlong)(int)uVar22 * 4);
      uVar17 = 0;
      if ((int)uVar22 < iVar35) {
        uVar17 = ~uVar22 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar17 = *piVar25;
      fVar53 = local_210[(int)uVar37].field0_0x0._s_0.X - local_210[(int)uVar22].field0_0x0._s_0.X;
      fVar54 = local_210[(int)uVar37].field0_0x0._s_0.Y - local_210[(int)uVar22].field0_0x0._s_0.Y;
      fVar50 = local_210[(int)uVar37].field0_0x0._s_0.Z - local_210[(int)uVar22].field0_0x0._s_0.Z;
      uVar37 = 0;
      if ((int)uVar17 < local_res18) {
        uVar37 = ~uVar17 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar37 = *(uint *)(local_270 + (longlong)(int)uVar17 * 4);
      uVar22 = 0;
      if ((int)uVar37 < iVar35) {
        uVar22 = ~uVar37 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar22 = ((TIntVector3<int>_u_0_s_0 *)(piVar25 + -2))->X;
      uVar17 = 0;
      if ((int)uVar22 < local_res18) {
        uVar17 = ~uVar22 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar22 = *(uint *)(local_270 + (longlong)(int)uVar22 * 4);
      uVar17 = 0;
      if ((int)uVar22 < iVar35) {
        uVar17 = ~uVar22 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar17 = piVar25[-1];
      fVar42 = local_210[(int)uVar37].field0_0x0._s_0.X - local_210[(int)uVar22].field0_0x0._s_0.X;
      fVar44 = local_210[(int)uVar37].field0_0x0._s_0.Y - local_210[(int)uVar22].field0_0x0._s_0.Y;
      fVar45 = local_210[(int)uVar37].field0_0x0._s_0.Z - local_210[(int)uVar22].field0_0x0._s_0.Z;
      uVar37 = 0;
      if ((int)uVar17 < iVar16) {
        uVar37 = ~uVar17 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar37 = ((TIntVector3<int>_u_0_s_0 *)(piVar25 + -2))->X;
      uVar22 = 0;
      if ((int)uVar37 < iVar16) {
        uVar22 = ~uVar37 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar51 = *(float *)(local_250 + (longlong)(int)uVar17 * 8) -
               *(float *)(local_250 + (longlong)(int)uVar37 * 8);
      fVar52 = *(float *)(local_250 + 4 + (longlong)(int)uVar17 * 8) -
               *(float *)(local_250 + 4 + (longlong)(int)uVar37 * 8);
      uVar37 = *piVar25;
      uVar22 = 0;
      if ((int)uVar37 < iVar16) {
        uVar22 = ~uVar37 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar22 = ((TIntVector3<int>_u_0_s_0 *)(piVar25 + -2))->X;
      uVar17 = 0;
      if ((int)uVar22 < iVar16) {
        uVar17 = ~uVar22 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar40 = *(float *)(local_250 + (longlong)(int)uVar37 * 8) -
               *(float *)(local_250 + (longlong)(int)uVar22 * 8);
      fVar41 = *(float *)(local_250 + 4 + (longlong)(int)uVar37 * 8) -
               *(float *)(local_250 + 4 + (longlong)(int)uVar22 * 8);
      fVar39 = fVar41 * fVar51 - fVar40 * fVar52;
      if (__real_322bcc77 <= (float)((uint)fVar39 & uVar30)) {
        fVar39 = __real_3f800000 / fVar39;
      }
      else {
        fVar39 = 0.0;
      }
      uVar30 = ((TIntVector3<int>_u_0_s_0 *)(piVar25 + -2))->X;
      uVar37 = 0;
      if ((int)uVar30 < local_240.ArrayNum) {
        uVar37 = ~uVar30 >> 0x1f;
      }
      fVar46 = (fVar53 * fVar41 - fVar42 * fVar52) * fVar39;
      fVar48 = (fVar54 * fVar41 - fVar44 * fVar52) * fVar39;
      fVar52 = (fVar50 * fVar41 - fVar45 * fVar52) * fVar39;
      fVar53 = (fVar42 * fVar51 - fVar53 * fVar40) * fVar39;
      fVar54 = (fVar44 * fVar51 - fVar54 * fVar40) * fVar39;
      fVar39 = (fVar45 * fVar51 - fVar50 * fVar40) * fVar39;
      if ((uVar37 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar50 = local_240.DataPtr[(int)uVar30].field0_0x0._s_0.Y;
      local_240.DataPtr[(int)uVar30].field0_0x0._s_0.X =
           fVar46 + local_240.DataPtr[(int)uVar30].field0_0x0._s_0.X;
      fVar42 = local_240.DataPtr[(int)uVar30].field0_0x0._s_0.Z;
      local_240.DataPtr[(int)uVar30].field0_0x0._s_0.Y = fVar48 + fVar50;
      local_240.DataPtr[(int)uVar30].field0_0x0._s_0.Z = fVar52 + fVar42;
      uVar30 = ((TIntVector3<int>_u_0_s_0 *)(piVar25 + -2))->X;
      uVar37 = 0;
      if ((int)uVar30 < local_230.ArrayNum) {
        uVar37 = ~uVar30 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar50 = local_230.DataPtr[(int)uVar30].field0_0x0._s_0.Y;
      local_230.DataPtr[(int)uVar30].field0_0x0._s_0.X =
           fVar53 + local_230.DataPtr[(int)uVar30].field0_0x0._s_0.X;
      fVar42 = local_230.DataPtr[(int)uVar30].field0_0x0._s_0.Z;
      local_230.DataPtr[(int)uVar30].field0_0x0._s_0.Y = fVar54 + fVar50;
      local_230.DataPtr[(int)uVar30].field0_0x0._s_0.Z = fVar39 + fVar42;
      uVar30 = piVar25[-1];
      uVar37 = 0;
      if ((int)uVar30 < local_240.ArrayNum) {
        uVar37 = ~uVar30 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_240.DataPtr[(int)uVar30].field0_0x0._s_0.X =
           fVar46 + local_240.DataPtr[(int)uVar30].field0_0x0._s_0.X;
      local_240.DataPtr[(int)uVar30].field0_0x0._s_0.Y =
           fVar48 + local_240.DataPtr[(int)uVar30].field0_0x0._s_0.Y;
      local_240.DataPtr[(int)uVar30].field0_0x0._s_0.Z =
           fVar52 + local_240.DataPtr[(int)uVar30].field0_0x0._s_0.Z;
      uVar30 = piVar25[-1];
      uVar37 = 0;
      if ((int)uVar30 < local_230.ArrayNum) {
        uVar37 = ~uVar30 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_230.DataPtr[(int)uVar30].field0_0x0._s_0.X =
           fVar53 + local_230.DataPtr[(int)uVar30].field0_0x0._s_0.X;
      local_230.DataPtr[(int)uVar30].field0_0x0._s_0.Y =
           fVar54 + local_230.DataPtr[(int)uVar30].field0_0x0._s_0.Y;
      local_230.DataPtr[(int)uVar30].field0_0x0._s_0.Z =
           fVar39 + local_230.DataPtr[(int)uVar30].field0_0x0._s_0.Z;
      uVar30 = *piVar25;
      uVar37 = 0;
      if ((int)uVar30 < local_240.ArrayNum) {
        uVar37 = ~uVar30 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_240.DataPtr[(int)uVar30].field0_0x0._s_0.X =
           fVar46 + local_240.DataPtr[(int)uVar30].field0_0x0._s_0.X;
      local_240.DataPtr[(int)uVar30].field0_0x0._s_0.Y =
           fVar48 + local_240.DataPtr[(int)uVar30].field0_0x0._s_0.Y;
      local_240.DataPtr[(int)uVar30].field0_0x0._s_0.Z =
           fVar52 + local_240.DataPtr[(int)uVar30].field0_0x0._s_0.Z;
      uVar37 = *piVar25;
      uVar30 = 0;
      if ((int)uVar37 < local_230.ArrayNum) {
        uVar30 = ~uVar37 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar30 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      uVar26 = uVar26 + 1;
      piVar25 = piVar25 + 3;
      local_230.DataPtr[(int)uVar37].field0_0x0._s_0.X =
           fVar53 + local_230.DataPtr[(int)uVar37].field0_0x0._s_0.X;
      local_230.DataPtr[(int)uVar37].field0_0x0._s_0.Y =
           fVar54 + local_230.DataPtr[(int)uVar37].field0_0x0._s_0.Y;
      local_230.DataPtr[(int)uVar37].field0_0x0._s_0.Z =
           fVar39 + local_230.DataPtr[(int)uVar37].field0_0x0._s_0.Z;
      fVar54 = __real_3f800000;
      fVar53 = __real_322bcc77;
    } while ((int)uVar26 < iVar13);
  }
  paVar27 = (atomic<int> *)&DAT_00000008;
  FCollectionClothFacade::GetRenderPosition((FCollectionClothFacade *)local_288,&local_1d0);
  FCollectionClothFacade::GetRenderNormal((FCollectionClothFacade *)local_288,&local_1c0);
  FCollectionClothFacade::GetRenderUVs((FCollectionClothFacade *)local_288,&local_208);
  pTVar23 = local_278;
  if (local_278 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    paVar1 = &local_278->SharedReferenceCount;
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_278);
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  plVar5 = *(longlong **)(local_288._8_8_ + 0x200);
  if (plVar5 == (longlong *)0x0) {
    local_220 = 0;
    local_298 = 0;
  }
  else {
    local_298 = (**(code **)(*plVar5 + 0x60))(plVar5);
    local_220 = plVar5[2];
    if ((local_298 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  if (pTVar23 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    paVar1 = &pTVar23->SharedReferenceCount;
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  plVar5 = *(longlong **)(local_288._8_8_ + 0x208);
  if (plVar5 == (longlong *)0x0) {
    lVar28 = 0;
    local_29c = 0;
  }
  else {
    local_29c = (**(code **)(*plVar5 + 0x60))(plVar5);
    lVar28 = plVar5[2];
    if ((local_29c < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  if (pTVar23 == (TReferenceControllerBase<1> *)0x0) {
LAB_14db51a41:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
    if (pTVar23 == (TReferenceControllerBase<1> *)0x0) goto LAB_14db51a56;
  }
  else {
    paVar27 = &pTVar23->SharedReferenceCount;
    LOCK();
    *paVar27 = (atomic<int>)((int)*paVar27 + 1);
    UNLOCK();
    if (pTVar23 == (TReferenceControllerBase<1> *)0x0) goto LAB_14db51a41;
    LOCK();
    *paVar27 = (atomic<int>)((int)*paVar27 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
    LOCK();
    *paVar27 = (atomic<int>)((int)*paVar27 + 1);
    UNLOCK();
  }
  LOCK();
  *paVar27 = (atomic<int>)((int)*paVar27 + 1);
  UNLOCK();
LAB_14db51a56:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  plVar5 = *(longlong **)(local_288._8_8_ + 0x210);
  if (plVar5 == (longlong *)0x0) {
    local_260 = 0;
    local_2a4 = 0;
  }
  else {
    local_2a4 = (**(code **)(*plVar5 + 0x60))(plVar5);
    local_260 = plVar5[2];
    if ((local_2a4 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  FCollectionClothFacade::GetSimBoneIndices((FCollectionClothFacade *)local_288,&local_1b0);
  FCollectionClothFacade::GetSimBoneWeights((FCollectionClothFacade *)local_288,&local_1a0);
  uVar26 = __xmm_80000000800000008000000080000000;
  uVar30 = 0;
  if (0 < iVar14) {
    local_260 = local_260 - lVar28;
    piVar25 = (int *)(lVar28 + 0xc);
    local_220 = local_220 - lVar28;
    lVar24 = 0;
    lVar36 = 0;
    local_1e8 = -0xc - lVar28;
    do {
      uVar22 = ~uVar30 >> 0x1f;
      uVar37 = 0;
      if ((int)uVar30 < local_res18) {
        uVar37 = uVar22;
      }
      local_268 = piVar25;
      if ((uVar37 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar37 = *(uint *)(local_270 + lVar24 * 4);
      lVar28 = (longlong)(int)uVar37;
      uVar31 = ~uVar37 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar37 < iVar35) {
        uVar17 = uVar31;
      }
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar3 = *(undefined8 *)&local_210[lVar28].field0_0x0;
      fVar50 = local_210[lVar28].field0_0x0._s_0.Z;
      uVar17 = 0;
      if ((int)uVar30 < local_1d0.ArrayNum) {
        uVar17 = uVar22;
      }
      local_248 = lVar28;
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined8 *)((longlong)&(local_1d0.DataPtr)->field0_0x0 + lVar36) = uVar3;
      *(float *)((longlong)&(local_1d0.DataPtr)->field0_0x0 + lVar36 + 8) = fVar50;
      uVar17 = 0;
      if ((int)uVar37 < local_218) {
        uVar17 = uVar31;
      }
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar50 = local_1f0[lVar28].field0_0x0._s_0.X;
      fVar42 = local_1f0[lVar28].field0_0x0._s_0.Y;
      fVar44 = local_1f0[lVar28].field0_0x0._s_0.Z;
      uVar17 = 0;
      if ((int)uVar30 < local_1c0.ArrayNum) {
        uVar17 = uVar22;
      }
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(uint *)((longlong)&(local_1c0.DataPtr)->field0_0x0 + lVar36) = (uint)fVar50 ^ uVar26;
      *(uint *)((longlong)&(local_1c0.DataPtr)->field0_0x0 + lVar36 + 4) = (uint)fVar42 ^ uVar26;
      *(uint *)((longlong)&(local_1c0.DataPtr)->field0_0x0 + lVar36 + 8) = (uint)fVar44 ^ uVar26;
      uVar17 = 0;
      if ((int)uVar30 < local_258) {
        uVar17 = uVar22;
      }
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar16 = local_208.ArrayNum;
      uVar17 = 0;
      if ((int)uVar30 < local_208.ArrayNum) {
        uVar17 = uVar22;
      }
      local_1f8._s_0.X = (*(float *)(local_250 + lVar24 * 8) - fVar47) * fVar43;
      local_1f8._s_0.Y = (*(float *)(local_250 + 4 + lVar24 * 8) - fVar49) * local_294;
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar28 = local_1e8;
      pTVar21 = (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)
                ((longlong)piVar25 +
                (longlong)&((local_208.DataPtr)->AllocatorInstance).Data + local_1e8);
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
      CopyToEmpty<UE::Math::TVector2<float>,int>
                (pTVar21,(TVector2<float> *)&local_1f8._s_0,1,pTVar21->ArrayMax);
      uVar17 = 0;
      if ((int)uVar30 < iVar16) {
        uVar17 = uVar22;
      }
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar21 = local_208.DataPtr;
      if ((*(int *)((longlong)piVar25 + (longlong)&(local_208.DataPtr)->ArrayNum + lVar28) < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar50 = *(float *)(*(longlong *)
                           ((longlong)piVar25 +
                           (longlong)&(pTVar21->AllocatorInstance).Data + lVar28) + 4);
      uVar17 = 0;
      if ((int)uVar30 < iVar16) {
        uVar17 = uVar22;
      }
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar21 = local_208.DataPtr;
      if ((*(int *)((longlong)piVar25 + (longlong)&(local_208.DataPtr)->ArrayNum + lVar28) < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(float *)(*(longlong *)
                  ((longlong)piVar25 + (longlong)&(pTVar21->AllocatorInstance).Data + lVar28) + 4) =
           fVar54 - fVar50;
      FVar10 = FLinearColor::White;
      uVar17 = 0;
      if ((int)uVar30 < local_298) {
        uVar17 = uVar22;
      }
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      ((FLinearColor_u_0 *)(local_220 + -0xc + (longlong)piVar25))->_s_0 =
           (FLinearColor_u_0_s_0)FVar10.field0_0x0;
      uVar17 = 0;
      if ((int)uVar30 < local_240.ArrayNum) {
        uVar17 = uVar22;
      }
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar50 = *(float *)((longlong)&(local_240.DataPtr)->field0_0x0 + lVar36);
      fVar42 = *(float *)((longlong)&(local_240.DataPtr)->field0_0x0 + lVar36 + 4);
      fVar44 = *(float *)((longlong)&(local_240.DataPtr)->field0_0x0 + lVar36 + 8);
      fVar45 = fVar42 * fVar42 + fVar50 * fVar50 + fVar44 * fVar44;
      if (fVar53 < fVar45) {
        fVar45 = fVar54 / SQRT(fVar45);
        *(float *)((longlong)&(local_240.DataPtr)->field0_0x0 + lVar36) = fVar45 * fVar50;
        *(float *)((longlong)&(local_240.DataPtr)->field0_0x0 + lVar36 + 4) = fVar45 * fVar42;
        *(float *)((longlong)&(local_240.DataPtr)->field0_0x0 + lVar36 + 8) = fVar45 * fVar44;
      }
      uVar17 = 0;
      if ((int)uVar30 < local_230.ArrayNum) {
        uVar17 = uVar22;
      }
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar28 = local_248;
      fVar50 = *(float *)((longlong)&(local_230.DataPtr)->field0_0x0 + lVar36);
      fVar42 = *(float *)((longlong)&(local_230.DataPtr)->field0_0x0 + lVar36 + 4);
      fVar44 = *(float *)((longlong)&(local_230.DataPtr)->field0_0x0 + lVar36 + 8);
      fVar45 = fVar42 * fVar42 + fVar50 * fVar50 + fVar44 * fVar44;
      if (fVar53 < fVar45) {
        fVar45 = fVar54 / SQRT(fVar45);
        *(float *)((longlong)&(local_230.DataPtr)->field0_0x0 + lVar36) = fVar45 * fVar50;
        *(float *)((longlong)&(local_230.DataPtr)->field0_0x0 + lVar36 + 4) = fVar45 * fVar42;
        *(float *)((longlong)&(local_230.DataPtr)->field0_0x0 + lVar36 + 8) = fVar45 * fVar44;
      }
      uVar17 = 0;
      if ((int)uVar37 < local_1b0.ArrayNum) {
        uVar17 = uVar31;
      }
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar32 = local_1b0.DataPtr + lVar28;
      uVar17 = 0;
      if ((int)uVar30 < local_29c) {
        uVar17 = uVar22;
      }
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar34 = (TArray<int,TSizedDefaultAllocator<32>_> *)(piVar25 + -3);
      if (pTVar34 != pTVar32) {
        iVar16 = pTVar32->ArrayNum;
        pFVar7 = (pTVar32->AllocatorInstance).Data;
        local_268[-1] = iVar16;
        if ((iVar16 == 0) && (*local_268 == 0)) {
          *local_268 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar16,*local_268,(ForAnyElementType *)pTVar34,iVar16,local_268);
          if (iVar16 != 0) {
            memcpy((pTVar34->AllocatorInstance).Data,pFVar7,(longlong)iVar16 << 2);
          }
        }
      }
      piVar25 = local_268;
      uVar17 = 0;
      if ((int)uVar37 < local_1a0.ArrayNum) {
        uVar17 = uVar31;
      }
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar33 = local_1a0.DataPtr + lVar28;
      uVar37 = 0;
      if ((int)uVar30 < local_2a4) {
        uVar37 = uVar22;
      }
      if ((uVar37 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar29 = (TArray<float,TSizedDefaultAllocator<32>_> *)(local_260 + -0xc + (longlong)piVar25);
      if (pTVar29 != pTVar33) {
        iVar16 = pTVar33->ArrayNum;
        piVar2 = (int *)(local_260 + (longlong)piVar25);
        pFVar7 = (pTVar33->AllocatorInstance).Data;
        piVar2[-1] = iVar16;
        if ((iVar16 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar16,*piVar2,(ForAnyElementType *)pTVar29,iVar16,piVar2);
          if (iVar16 != 0) {
            memcpy((pTVar29->AllocatorInstance).Data,pFVar7,(longlong)iVar16 << 2);
          }
        }
      }
      piVar25 = piVar25 + 4;
      uVar30 = uVar30 + 1;
      lVar24 = lVar24 + 1;
      lVar36 = lVar36 + 0xc;
      local_268 = piVar25;
    } while ((int)uVar30 < iVar14);
  }
  BindMeshToRootBone(param_1,false,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_278);
  return;
}

// DeleteRenderMesh @ 14db54c30

void __cdecl
UE::Chaos::ClothAsset::FClothGeometryTools::DeleteRenderMesh
          (TSharedRef<FManagedArrayCollection,1> *param_1)

{
  undefined1 local_28 [40];
  
  FCollectionClothFacade::FCollectionClothFacade((FCollectionClothFacade *)local_28,param_1);
  FCollectionClothFacade::SetNumRenderPatterns((FCollectionClothFacade *)local_28,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28._16_8_);
  return;
}

// DeleteSelections @ 14db54c70

void __cdecl
UE::Chaos::ClothAsset::FClothGeometryTools::DeleteSelections
          (TSharedRef<FManagedArrayCollection,1> *param_1,FName param_2)

{
  FName *pFVar1;
  FManagedArrayCollection *this;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForAnyElementType FVar6;
  undefined1 local_res8 [8];
  FName local_res18;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FCollectionClothSelectionConstFacade local_48;
  
  this = param_1->Object;
  local_48.ManagedArrayCollection.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_48.ManagedArrayCollection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.ManagedArrayCollection.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         = (atomic<int>)
           ((int)(local_48.ManagedArrayCollection.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_48.ManagedArrayCollection.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         = (atomic<int>)
           ((int)(local_48.ManagedArrayCollection.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.ManagedArrayCollection.Object = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.ManagedArrayCollection.SharedReferenceCount.ReferenceController);
  local_48._padding_ = (longlong)&___7FCollectionClothSelectionFacade_ClothAsset_Chaos_UE__6B_;
  FManagedArrayCollection::AttributeNames(this,&local_58,ClothAsset::Private::SelectionGroup);
  iVar5 = local_58.ArrayNum;
  pFVar1 = (FName *)(local_58.AllocatorInstance.Data + (longlong)iVar5 * 8);
  FVar6.Data = local_58.AllocatorInstance.Data;
  do {
    if (local_58.ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if ((FName *)FVar6.Data == pFVar1) {
      if ((FName *)local_58.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.ManagedArrayCollection.SharedReferenceCount.ReferenceController);
      return;
    }
    FVar2 = *(FName *)FVar6.Data;
    if (param_2 == (FName)0x0) {
LAB_14db54dc1:
      bVar4 = FCollectionClothSelectionConstFacade::IsValid(&local_48);
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                           ,0xd5,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this,FVar2,ClothAsset::Private::SelectionGroup);
    }
    else {
      bVar4 = FCollectionClothSelectionConstFacade::IsValid(&local_48);
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                           ,0x2f,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      bVar4 = FCollectionClothSelectionConstFacade::IsValid(&local_48);
      if (bVar4) {
        bVar4 = FManagedArrayCollection::HasAttribute
                          (this,FVar2,ClothAsset::Private::SelectionGroup);
        if (!bVar4) goto LAB_14db54d72;
      }
      else {
LAB_14db54d72:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("HasSelection(Name)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                           ,0x30,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FManagedArrayCollection::GetDependency(this,(FName)&local_res18,FVar2);
      if (local_res18 == param_2) goto LAB_14db54dc1;
    }
    FVar6.Data = FVar6.Data + 8;
  } while( true );
}

// DeleteSimMesh @ 14db54e60

void __cdecl
UE::Chaos::ClothAsset::FClothGeometryTools::DeleteSimMesh
          (TSharedRef<FManagedArrayCollection,1> *param_1)

{
  undefined1 local_358 [32];
  FEmbeddedSpringBaseFacade local_338;
  
  ::Chaos::Softs::FEmbeddedSpringBaseFacade::FEmbeddedSpringBaseFacade
            (&local_338,param_1->Object,&ClothCollectionGroup::SimVertices3D);
  ::Chaos::Softs::FEmbeddedSpringFacade::SetNumSpringConstraints
            ((FEmbeddedSpringFacade *)&local_338,0);
  FCollectionClothFacade::FCollectionClothFacade((FCollectionClothFacade *)local_358,param_1);
  FCollectionClothFacade::SetNumSimPatterns((FCollectionClothFacade *)local_358,0);
  FCollectionClothFacade::RemoveAllSimVertices3D((FCollectionClothFacade *)local_358);
  FCollectionClothFacade::SetNumSeams((FCollectionClothFacade *)local_358,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_358._16_8_);
  return;
}

// DeleteTethers @ 14db54ee0

void __cdecl
UE::Chaos::ClothAsset::FClothGeometryTools::DeleteTethers
          (TSharedRef<FManagedArrayCollection,1> *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  TReferenceControllerBase<1> *pTVar8;
  int *piVar9;
  undefined1 local_38 [32];
  
  FCollectionClothFacade::FCollectionClothFacade((FCollectionClothFacade *)local_38,param_1);
  pTVar8 = (TReferenceControllerBase<1> *)local_38._16_8_;
  if ((TReferenceControllerBase<1> *)local_38._16_8_ == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    paVar1 = (atomic<int> *)(local_38._16_8_ + 8);
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_38._16_8_);
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  plVar3 = *(longlong **)(local_38._8_8_ + 0x170);
  iVar6 = 0;
  if (plVar3 == (longlong *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    iVar6 = (**(code **)(*plVar3 + 0x60))(plVar3);
    piVar9 = (int *)plVar3[2];
    if ((iVar6 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if (piVar9 != piVar9 + (longlong)iVar6 * 4) {
    piVar7 = piVar9 + 3;
    do {
      piVar7[-1] = 0;
      if (*piVar7 < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)(piVar7 + -3),0,piVar7);
      }
      piVar2 = piVar7 + 1;
      pTVar8 = (TReferenceControllerBase<1> *)local_38._16_8_;
      piVar7 = piVar7 + 4;
    } while (piVar2 != piVar9 + (longlong)iVar6 * 4);
  }
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    paVar1 = &pTVar8->SharedReferenceCount;
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  plVar3 = *(longlong **)(local_38._8_8_ + 0x178);
  if (plVar3 == (longlong *)0x0) {
    piVar9 = (int *)0x0;
    iVar6 = 0;
  }
  else {
    iVar6 = (**(code **)(*plVar3 + 0x60))(plVar3);
    piVar9 = (int *)plVar3[2];
    if ((iVar6 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if (piVar9 != piVar9 + (longlong)iVar6 * 4) {
    piVar7 = piVar9 + 3;
    do {
      piVar7[-1] = 0;
      if (*piVar7 < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)(piVar7 + -3),0,piVar7);
      }
      piVar2 = piVar7 + 1;
      pTVar8 = (TReferenceControllerBase<1> *)local_38._16_8_;
      piVar7 = piVar7 + 4;
    } while (piVar2 != piVar9 + (longlong)iVar6 * 4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// GenerateKinematicVertices3D @ 14db56520

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __cdecl
UE::Chaos::ClothAsset::FClothGeometryTools::GenerateKinematicVertices3D
          (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *__return_storage_ptr__,
          TSharedRef<FManagedArrayCollection,1> *param_1,FName *param_2,TVector2<float> *param_3,
          FName *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  FManagedArrayCollection *this;
  float *pfVar3;
  undefined1 *puVar4;
  ForElementType<FSetElementId> FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FName FVar11;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar12;
  TArrayView<float,int> *pTVar13;
  ulong64 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  byte bVar17;
  undefined1 *puVar18;
  ForElementType<FSetElementId> FVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined1 *puVar23;
  uint *puVar24;
  TSparseSetElement<int> *pTVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  uint *puVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  longlong local_128;
  int local_118;
  uint uStack_114;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  FCollectionClothSelectionConstFacade local_f8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d8;
  FSparseArrayAllocationInfo local_b8;
  FSparseArrayAllocationInfo local_a8;
  undefined1 local_98 [16];
  TReferenceControllerBase<1> *local_88;
  FName local_80;
  TArrayView<float,int> local_78 [4];
  
  local_f8._padding_ = (longlong)&___7FCollectionClothSelectionConstFacade_ClothAsset_Chaos_UE__6B_;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  local_f8.ManagedArrayCollection.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  this = param_1->Object;
  if (local_f8.ManagedArrayCollection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f8.ManagedArrayCollection.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         = (atomic<int>)
           ((int)(local_f8.ManagedArrayCollection.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_f8.ManagedArrayCollection.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         = (atomic<int>)
           ((int)(local_f8.ManagedArrayCollection.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f8.ManagedArrayCollection.Object = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.ManagedArrayCollection.SharedReferenceCount.ReferenceController);
  if ((((*param_4 != (FName)0x0) &&
       (bVar7 = FCollectionClothSelectionConstFacade::IsValid(&local_f8), bVar7)) &&
      (bVar7 = FCollectionClothSelectionConstFacade::IsValid(&local_f8), bVar7)) &&
     ((bVar7 = FManagedArrayCollection::HasAttribute
                         (this,*param_4,ClothAsset::Private::SelectionGroup), bVar7 &&
      (FVar11 = FCollectionClothSelectionConstFacade::GetSelectionGroup(&local_f8,&local_80),
      *(FName *)FVar11 == ClothCollectionGroup::SimVertices3D)))) {
    pTVar12 = FCollectionClothSelectionConstFacade::GetSelectionSet(&local_f8,param_4);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=(__return_storage_ptr__,pTVar12)
    ;
  }
  FCollectionClothFacade::FCollectionClothFacade((FCollectionClothFacade *)local_98,param_1);
  bVar7 = FConstClothCollection::IsValid((FConstClothCollection *)local_98._8_8_,None);
  if ((bVar7) &&
     (iVar8 = FManagedArrayCollection::NumElements
                        (((TSharedRef<FManagedArrayCollection_const_,1> *)local_98._8_8_)->Object,
                         ClothCollectionGroup::Lods), iVar8 == 1)) {
    bVar7 = FConstClothCollection::HasUserDefinedAttribute<float>
                      ((FConstClothCollection *)local_98._8_8_,param_2,
                       &ClothCollectionGroup::SimVertices3D);
    if (bVar7) {
      pTVar13 = FCollectionClothFacade::GetWeightMap
                          ((FCollectionClothFacade *)local_98,local_78,param_2);
      fVar1 = (param_3->field0_0x0)._s_0.X;
      fVar2 = (param_3->field0_0x0)._s_0.Y;
      uVar31 = 0;
      iVar8 = pTVar13->ArrayNum;
      pfVar3 = pTVar13->DataPtr;
      if (0 < iVar8) {
        local_128 = 0;
        do {
          if (((int)uVar31 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar6)();
            return pTVar12;
          }
          if ((fVar2 - fVar1) * pfVar3[local_128] + fVar1 < param_5) {
            iVar30 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
            if (iVar30 == 0) {
              iVar9 = Core::Private::
                      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0xc,4,1,(ForAnyElementType *)__return_storage_ptr__,
                                 (int *)&(__return_storage_ptr__->Elements).field_0x8,
                                 (int *)&(__return_storage_ptr__->Elements).field_0xc);
              iVar30 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
              puVar23 = &(__return_storage_ptr__->Elements).field_0x10;
              iVar32 = (int)((iVar30 >> 0x1f & 0x1fU) + iVar30) >> 5;
              if ((iVar30 == 0) ||
                 (iVar32 != (int)(iVar30 + -1 + (iVar30 + -1 >> 0x1f & 0x1fU)) >> 5)) {
                iVar10 = *(int *)&(__return_storage_ptr__->Elements).field_0x2c;
                if (iVar10 < iVar30 + 1) {
                  uVar27 = iVar10 + 0x1fU >> 5;
                  uVar20 = iVar30 + 0x20U >> 5;
                  if (uVar20 < 5) {
                    iVar10 = 4;
                  }
                  else {
                    uVar21 = (ulonglong)uVar20;
                    if (uVar27 < 5) {
                      uVar27 = 0;
                    }
                    if (uVar27 == 0) {
                      uVar28 = 4;
                      if (4 < uVar21) {
                        uVar28 = uVar21;
                      }
                    }
                    else {
                      uVar28 = ((ulonglong)uVar20 * 3 >> 3) + 0x10 + uVar21;
                    }
                    uVar14 = FMemory::QuantizeSize(uVar28 * 4,0);
                    iVar10 = (int)(uVar14 >> 2);
                    if (iVar10 < (int)uVar20) {
                      iVar10 = 0x7fffffff;
                    }
                  }
                  *(int *)&(__return_storage_ptr__->Elements).field_0x2c = iVar10 << 5;
                  TBitArray<FDefaultBitArrayAllocator>::Realloc
                            ((TBitArray<FDefaultBitArrayAllocator> *)puVar23,
                             *(int *)&(__return_storage_ptr__->Elements).field_0x28);
                }
                puVar4 = &(__return_storage_ptr__->Elements).field_0x28;
                *(int *)puVar4 = *(int *)puVar4 + 1;
                iVar10 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
                uVar20 = iVar10 >> 0x1f & 0x1f;
                uVar27 = iVar10 + uVar20;
                iVar10 = (uVar27 & 0x1f) - uVar20;
                if (iVar10 != 0) {
                  puVar4 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
                  puVar18 = puVar23;
                  if (puVar4 != (undefined1 *)0x0) {
                    puVar18 = puVar4;
                  }
                  *(uint *)(puVar18 + (longlong)((int)uVar27 >> 5) * 4) =
                       *(uint *)(puVar18 + (longlong)((int)uVar27 >> 5) * 4) &
                       0xffffffffU >> (0x20U - (char)iVar10 & 0x1f);
                }
              }
              else {
                *(int *)&(__return_storage_ptr__->Elements).field_0x28 = iVar30 + 1;
              }
              puVar4 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
              if (puVar4 != (undefined1 *)0x0) {
                puVar23 = puVar4;
              }
              *(uint *)(puVar23 + (longlong)iVar32 * 4) =
                   *(uint *)(puVar23 + (longlong)iVar32 * 4) & ~(1 << ((byte)iVar30 & 0x1f));
            }
            else {
              iVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
              iVar30 = iVar30 + -1;
              lVar22 = *(longlong *)&__return_storage_ptr__->Elements;
              iVar32 = *(int *)(lVar22 + 4 + (longlong)iVar9 * 0xc);
              *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar32;
              *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar30;
              if (iVar30 != 0) {
                *(undefined4 *)(lVar22 + (longlong)iVar32 * 0xc) = 0xffffffff;
              }
            }
            puVar24 = (uint *)0x0;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)__return_storage_ptr__,&local_b8,iVar9);
            if (local_b8.Pointer != (uint *)0x0) {
              *(uint *)local_b8.Pointer = uVar31;
              *(uint *)((longlong)local_b8.Pointer + 4) = 0xffffffff;
              puVar24 = local_b8.Pointer;
            }
            iVar30 = *(int *)&(__return_storage_ptr__->Elements).field_0x8;
            iVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
            uVar27 = *puVar24;
            if ((iVar30 - iVar9 != 1) && (iVar30 != iVar9)) {
              FVar5 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar19 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar5 != (ForElementType<FSetElementId>)0x0) {
                FVar19 = FVar5;
              }
              iVar30 = *(int *)((longlong)FVar19 +
                               (ulonglong)(__return_storage_ptr__->HashSize - 1U & uVar27) * 4);
              if (iVar30 != -1) {
                do {
                  if (*(uint *)(*(longlong *)&__return_storage_ptr__->Elements +
                               (longlong)iVar30 * 0xc) == uVar27) {
                    if (iVar30 != -1) {
                      *(uint *)(*(longlong *)&__return_storage_ptr__->Elements +
                               (longlong)iVar30 * 0xc) = uVar27;
                      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::RemoveAtUninitialized
                                ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                  *)__return_storage_ptr__,local_b8.Index,1);
                      goto LAB_14db56bcf;
                    }
                    break;
                  }
                  iVar30 = *(int *)(*(longlong *)&__return_storage_ptr__->Elements + 4 +
                                   (longlong)iVar30 * 0xc);
                } while (iVar30 != -1);
              }
            }
            uVar26 = 1;
            uVar20 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
                     *(int *)&(__return_storage_ptr__->Elements).field_0x34;
            if (3 < uVar20) {
              uVar21 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
              lVar22 = 0x3f;
              if (uVar21 != 0) {
                for (; uVar21 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                }
              }
              uVar26 = 1 << ((byte)lVar22 & 0x1f);
            }
            if (((int)uVar20 < 1) || ((int)uVar26 <= __return_storage_ptr__->HashSize)) {
              uVar27 = __return_storage_ptr__->HashSize - 1U & uVar27;
              puVar24[2] = uVar27;
              FVar5 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar19 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar5 != (ForElementType<FSetElementId>)0x0) {
                FVar19 = FVar5;
              }
              uVar21 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar27;
              puVar24[1] = *(uint *)((longlong)FVar19 + uVar21 * 4);
              *(int *)((longlong)FVar19 + uVar21 * 4) = local_b8.Index;
            }
            else {
              __return_storage_ptr__->HashSize = uVar26;
              if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0
                 ) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4)
                ;
              }
              if (uVar26 != 0) {
                uVar27 = uVar26;
                if (uVar26 < 2) {
                  if ((__return_storage_ptr__->Hash).SecondaryData !=
                      (ForElementType<FSetElementId>)0x0) {
                    uVar27 = 0;
                    goto LAB_14db569db;
                  }
                }
                else {
LAB_14db569db:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,
                             uVar27,4);
                }
                if (0 < (int)uVar26) {
                  uVar28 = (ulonglong)uVar26;
                  uVar21 = 0;
                  do {
                    FVar5 = (__return_storage_ptr__->Hash).SecondaryData;
                    FVar19 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
                    if (FVar5 != (ForElementType<FSetElementId>)0x0) {
                      FVar19 = FVar5;
                    }
                    uVar15 = uVar21 & (longlong)(int)uVar26 - 1U;
                    uVar21 = uVar21 + 1;
                    *(undefined4 *)((longlong)FVar19 + uVar15 * 4) = 0xffffffff;
                    uVar28 = uVar28 - 1;
                  } while (uVar28 != 0);
                }
              }
              if (__return_storage_ptr__->HashSize != 0) {
                iVar30 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
                local_d8.Array =
                     (TBitArray<FDefaultBitArrayAllocator> *)
                     &(__return_storage_ptr__->Elements).field_0x10;
                uStack_114 = 1;
                local_118 = 0;
                iStack_104 = 0;
                iStack_100 = 0;
                if (iVar30 != 0) {
                  puVar24 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
                  puVar29 = (uint *)local_d8.Array;
                  if (puVar24 != (uint *)0x0) {
                    puVar29 = puVar24;
                  }
                  uVar27 = *puVar29;
                  while (uVar27 == 0) {
                    iStack_100 = iStack_100 + 0x20;
                    lVar22 = (longlong)local_118;
                    local_118 = local_118 + 1;
                    if ((int)(iVar30 + -1 + (iVar30 + -1 >> 0x1f & 0x1fU)) >> 5 < local_118)
                    goto LAB_14db56af2;
                    uVar27 = puVar29[lVar22 + 1];
                  }
                  uStack_114 = -uVar27 & uVar27;
                  uVar21 = (ulonglong)uStack_114 * 2 + 1;
                  lVar22 = 0x3f;
                  if (uVar21 != 0) {
                    for (; uVar21 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                    }
                  }
                  iStack_104 = iStack_100 + -1 + (int)lVar22;
                  if (iVar30 < iStack_104) {
LAB_14db56af2:
                    iStack_104 = iVar30;
                  }
                }
                local_d8._padding_ = CONCAT44(uStack_114,local_118);
                local_d8.CurrentBitIndex = iStack_104;
                local_d8.UnvisitedBitMask = 0xffffffff;
                local_d8._28_4_ = uStack_fc;
                local_d8.BaseBitIndex = iStack_100;
                local_e0 = __return_storage_ptr__;
                if (iStack_104 < *(int *)&(__return_storage_ptr__->Elements).field_0x28) {
                  do {
                    lVar22 = *(longlong *)&local_e0->Elements;
                    lVar16 = (longlong)iStack_104;
                    uVar27 = __return_storage_ptr__->HashSize - 1U &
                             *(uint *)(lVar22 + lVar16 * 0xc);
                    *(uint *)(lVar22 + 8 + lVar16 * 0xc) = uVar27;
                    FVar5 = (__return_storage_ptr__->Hash).SecondaryData;
                    FVar19 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
                    if (FVar5 != (ForElementType<FSetElementId>)0x0) {
                      FVar19 = FVar5;
                    }
                    uVar21 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar27
                    ;
                    *(undefined4 *)(lVar22 + 4 + lVar16 * 0xc) =
                         *(undefined4 *)((longlong)FVar19 + uVar21 * 4);
                    *(int *)((longlong)FVar19 + uVar21 * 4) = iStack_104;
                    local_d8.UnvisitedBitMask =
                         local_d8.UnvisitedBitMask & ~local_d8._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d8);
                    iStack_104 = local_d8.CurrentBitIndex;
                  } while (local_d8.CurrentBitIndex < (local_d8.Array)->NumBits);
                }
              }
            }
          }
LAB_14db56bcf:
          local_128 = local_128 + 1;
          uVar31 = uVar31 + 1;
        } while ((int)uVar31 < iVar8);
      }
    }
    else if ((param_3->field0_0x0)._s_0.X <= param_5 && param_5 != (param_3->field0_0x0)._s_0.X) {
      iVar8 = FManagedArrayCollection::NumElements
                        (((TSharedRef<FManagedArrayCollection_const_,1> *)local_98._8_8_)->Object,
                         ClothCollectionGroup::SimVertices3D);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reserve(__return_storage_ptr__,iVar8);
      iVar30 = 0;
      iVar8 = FManagedArrayCollection::NumElements
                        (((TSharedRef<FManagedArrayCollection_const_,1> *)local_98._8_8_)->Object,
                         ClothCollectionGroup::SimVertices3D);
      if (0 < iVar8) {
        do {
          iVar8 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
          if (iVar8 == 0) {
            iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0xc,4,1,(ForAnyElementType *)__return_storage_ptr__,
                               (int *)&(__return_storage_ptr__->Elements).field_0x8,
                               (int *)&(__return_storage_ptr__->Elements).field_0xc);
            iVar8 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
            puVar23 = &(__return_storage_ptr__->Elements).field_0x10;
            if ((iVar8 == 0) ||
               ((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5 !=
                (int)((iVar8 + -1 >> 0x1f & 0x1fU) + iVar8 + -1) >> 5)) {
              iVar32 = *(int *)&(__return_storage_ptr__->Elements).field_0x2c;
              if (iVar32 < iVar8 + 1) {
                uVar31 = iVar32 + 0x1fU >> 5;
                uVar27 = iVar8 + 0x20U >> 5;
                if (uVar27 < 5) {
                  iVar32 = 4;
                }
                else {
                  uVar21 = (ulonglong)uVar27;
                  if (uVar31 < 5) {
                    uVar31 = 0;
                  }
                  if (uVar31 == 0) {
                    uVar28 = 4;
                    if (4 < uVar21) {
                      uVar28 = uVar21;
                    }
                  }
                  else {
                    uVar28 = ((ulonglong)uVar27 * 3 >> 3) + 0x10 + uVar21;
                  }
                  uVar14 = FMemory::QuantizeSize(uVar28 * 4,0);
                  iVar32 = (int)(uVar14 >> 2);
                  if (iVar32 < (int)uVar27) {
                    iVar32 = 0x7fffffff;
                  }
                }
                *(int *)&(__return_storage_ptr__->Elements).field_0x2c = iVar32 << 5;
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)puVar23,
                           *(int *)&(__return_storage_ptr__->Elements).field_0x28);
              }
              iVar32 = *(int *)&(__return_storage_ptr__->Elements).field_0x28 + 1;
              *(int *)&(__return_storage_ptr__->Elements).field_0x28 = iVar32;
              uVar27 = iVar32 >> 0x1f & 0x1f;
              uVar31 = iVar32 + uVar27;
              iVar32 = (uVar31 & 0x1f) - uVar27;
              if (iVar32 != 0) {
                puVar4 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
                puVar18 = puVar23;
                if (puVar4 != (undefined1 *)0x0) {
                  puVar18 = puVar4;
                }
                *(uint *)(puVar18 + (longlong)((int)uVar31 >> 5) * 4) =
                     *(uint *)(puVar18 + (longlong)((int)uVar31 >> 5) * 4) &
                     0xffffffffU >> (0x20U - (char)iVar32 & 0x1f);
              }
            }
            else {
              *(int *)&(__return_storage_ptr__->Elements).field_0x28 = iVar8 + 1;
            }
            puVar4 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
            if (puVar4 != (undefined1 *)0x0) {
              puVar23 = puVar4;
            }
            bVar17 = (byte)iVar8 & 0x1f;
            if (iVar8 < 0) {
              iVar8 = iVar8 + 0x1f;
              bVar17 = bVar17 - 0x20;
            }
            *(uint *)(puVar23 + (longlong)(iVar8 >> 5) * 4) =
                 *(uint *)(puVar23 + (longlong)(iVar8 >> 5) * 4) & ~(1 << (bVar17 & 0x1f));
          }
          else {
            iVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
            iVar8 = iVar8 + -1;
            lVar22 = *(longlong *)&__return_storage_ptr__->Elements;
            iVar32 = *(int *)(lVar22 + 4 + (longlong)iVar9 * 0xc);
            *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar32;
            *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar8;
            if (iVar8 != 0) {
              *(undefined4 *)(lVar22 + (longlong)iVar32 * 0xc) = 0xffffffff;
            }
          }
          pTVar25 = (TSparseSetElement<int> *)0x0;
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)__return_storage_ptr__,&local_a8,iVar9);
          if (local_a8.Pointer != (TSparseSetElement<int> *)0x0) {
            *(int *)local_a8.Pointer = iVar30;
            *(undefined4 *)((longlong)local_a8.Pointer + 4) = 0xffffffff;
            pTVar25 = local_a8.Pointer;
          }
          iVar8 = *(int *)&(__return_storage_ptr__->Elements).field_0x8;
          iVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
          uVar31 = *(uint *)pTVar25;
          if ((iVar8 - iVar9 != 1) && (iVar8 != iVar9)) {
            FVar5 = (__return_storage_ptr__->Hash).SecondaryData;
            FVar19 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
            if (FVar5 != (ForElementType<FSetElementId>)0x0) {
              FVar19 = FVar5;
            }
            iVar8 = *(int *)((longlong)FVar19 +
                            (ulonglong)(__return_storage_ptr__->HashSize - 1U & uVar31) * 4);
            if (iVar8 != -1) {
              do {
                if (*(uint *)(*(longlong *)&__return_storage_ptr__->Elements + (longlong)iVar8 * 0xc
                             ) == uVar31) {
                  if (iVar8 != -1) {
                    *(uint *)(*(longlong *)&__return_storage_ptr__->Elements + (longlong)iVar8 * 0xc
                             ) = uVar31;
                    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::RemoveAtUninitialized
                              ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                *)__return_storage_ptr__,local_a8.Index,1);
                    goto LAB_14db56eb9;
                  }
                  break;
                }
                iVar8 = *(int *)(*(longlong *)&__return_storage_ptr__->Elements + 4 +
                                (longlong)iVar8 * 0xc);
              } while (iVar8 != -1);
            }
          }
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RehashOrLink
                    (__return_storage_ptr__,uVar31,pTVar25,local_a8.Index);
LAB_14db56eb9:
          iVar30 = iVar30 + 1;
          iVar8 = FManagedArrayCollection::NumElements
                            (((TSharedRef<FManagedArrayCollection_const_,1> *)local_98._8_8_)->
                             Object,ClothCollectionGroup::SimVertices3D);
        } while (iVar30 < iVar8);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.ManagedArrayCollection.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// HasRenderMesh @ 14db615e0

bool __cdecl
UE::Chaos::ClothAsset::FClothGeometryTools::HasRenderMesh
          (TSharedRef<FManagedArrayCollection_const_,1> *param_1)

{
  int iVar1;
  FCollectionClothConstFacade local_28;
  
  FCollectionClothConstFacade::FCollectionClothConstFacade(&local_28,param_1);
  iVar1 = FManagedArrayCollection::NumElements
                    (((local_28.ClothCollection.Object)->ManagedArrayCollection).Object,
                     ClothCollectionGroup::RenderVertices);
  if (0 < iVar1) {
    iVar1 = FManagedArrayCollection::NumElements
                      (((local_28.ClothCollection.Object)->ManagedArrayCollection).Object,
                       ClothCollectionGroup::RenderFaces);
    if (0 < iVar1) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.ClothCollection.SharedReferenceCount.ReferenceController);
      return true;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.ClothCollection.SharedReferenceCount.ReferenceController);
  return false;
}

// HasSimMesh @ 14db61750

bool __cdecl
UE::Chaos::ClothAsset::FClothGeometryTools::HasSimMesh
          (TSharedRef<FManagedArrayCollection_const_,1> *param_1)

{
  int iVar1;
  FCollectionClothConstFacade local_28;
  
  FCollectionClothConstFacade::FCollectionClothConstFacade(&local_28,param_1);
  iVar1 = FManagedArrayCollection::NumElements
                    (((local_28.ClothCollection.Object)->ManagedArrayCollection).Object,
                     ClothCollectionGroup::SimVertices2D);
  if (0 < iVar1) {
    iVar1 = FManagedArrayCollection::NumElements
                      (((local_28.ClothCollection.Object)->ManagedArrayCollection).Object,
                       ClothCollectionGroup::SimVertices3D);
    if (iVar1 != 0) {
      iVar1 = FManagedArrayCollection::NumElements
                        (((local_28.ClothCollection.Object)->ManagedArrayCollection).Object,
                         ClothCollectionGroup::SimFaces);
      if (0 < iVar1) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.ClothCollection.SharedReferenceCount.ReferenceController);
        return true;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.ClothCollection.SharedReferenceCount.ReferenceController);
  return false;
}

// RecalculateRenderMeshNormals @ 14db665f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Chaos::ClothAsset::FClothGeometryTools::RecalculateRenderMeshNormals
          (TSharedRef<FManagedArrayCollection,1> *param_1)

{
  atomic<int> *paVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  TArrayView<UE::Math::TIntVector3<int>,int> *pTVar15;
  TArrayView<UE::Math::TVector<float>,int> *pTVar16;
  TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int> *pTVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  int *piVar21;
  TReferenceControllerBase<1> *pTVar22;
  uint uVar23;
  longlong lVar25;
  ulonglong uVar26;
  uint uVar27;
  TIntVector3<int> *pTVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStackY_218 [32];
  <lambda_1> local_1d4;
  void *local_1c8;
  int local_1c0;
  uint local_1b8;
  int local_1b4;
  void *local_1b0;
  int local_1a8;
  undefined1 local_1a0 [24];
  float local_188;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_180;
  longlong local_178;
  int local_170;
  TArray<float,TSizedDefaultAllocator<32>_> local_168;
  TVector<float> *local_158;
  TArrayView<std::nullptr_t,int> local_150;
  code *local_140;
  void ***local_138;
  void **local_130;
  void **local_128;
  longlong *local_120;
  TArray<float,TSizedDefaultAllocator<32>_> *local_118;
  TArrayView<UE::Math::TIntVector3<int>,int> local_110;
  TArrayView<UE::Math::TVector<float>,int> local_100;
  TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int> local_f0;
  int local_e0 [4];
  ulonglong local_d0;
  ulonglong uVar24;
  
  local_d0 = __security_cookie.value ^ (ulonglong)auStackY_218;
  FCollectionClothFacade::FCollectionClothFacade((FCollectionClothFacade *)local_1a0,param_1);
  pTVar15 = FCollectionClothFacade::GetRenderIndices((FCollectionClothFacade *)local_1a0,&local_110)
  ;
  local_1b4 = pTVar15->ArrayNum;
  pTVar28 = pTVar15->DataPtr;
  pTVar16 = FCollectionClothFacade::GetRenderPosition
                      ((FCollectionClothFacade *)local_1a0,&local_100);
  local_158 = pTVar16->DataPtr;
  iVar2 = pTVar16->ArrayNum;
  pTVar17 = FCollectionClothFacade::GetRenderUVs((FCollectionClothFacade *)local_1a0,&local_f0);
  pTVar22 = (TReferenceControllerBase<1> *)local_1a0._16_8_;
  local_180 = pTVar17->DataPtr;
  iVar3 = pTVar17->ArrayNum;
  if ((TReferenceControllerBase<1> *)local_1a0._16_8_ == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    paVar1 = (atomic<int> *)(local_1a0._16_8_ + 8);
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1a0._16_8_);
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  uVar18 = 0;
  plVar5 = *(longlong **)(local_1a0._8_8_ + 0x1e0);
  uVar19 = 0;
  if (plVar5 == (longlong *)0x0) {
    local_1c8 = (void *)0x0;
    local_1c0 = 0;
  }
  else {
    local_1c0 = (**(code **)(*plVar5 + 0x60))();
    local_1c8 = (void *)plVar5[2];
    if ((local_1c0 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  if (pTVar22 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    paVar1 = (atomic<int> *)((longlong)pTVar22 + 8);
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  plVar5 = *(longlong **)(local_1a0._8_8_ + 0x1e8);
  if (plVar5 == (longlong *)0x0) {
    local_1b0 = (void *)0x0;
    local_1a8 = 0;
  }
  else {
    local_1a8 = (**(code **)(*plVar5 + 0x60))();
    local_1b0 = (void *)plVar5[2];
    if ((local_1a8 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  if (pTVar22 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    paVar1 = (atomic<int> *)((longlong)pTVar22 + 8);
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  plVar5 = *(longlong **)(local_1a0._8_8_ + 0x1f0);
  if (plVar5 == (longlong *)0x0) {
    local_178 = 0;
    local_170 = 0;
  }
  else {
    local_170 = (**(code **)(*plVar5 + 0x60))(plVar5);
    local_178 = plVar5[2];
    if ((local_170 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  if ((iVar2 != iVar3) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Positions.Num() == UVs.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothGeometryTools.cpp"
                          ,0x2f4,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((iVar2 != local_1c0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Positions.Num() == Normals.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothGeometryTools.cpp"
                          ,0x2f5,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((iVar2 != local_1a8) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Positions.Num() == TangentUs.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothGeometryTools.cpp"
                          ,0x2f6,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((iVar2 != local_170) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Positions.Num() == TangentVs.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothGeometryTools.cpp"
                          ,0x2f7,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_168,local_1c0,Default);
  fVar30 = __real_bf800000;
  fVar38 = __real_3f800000;
  uVar11 = 0;
  uVar20 = uVar18;
  uVar24 = uVar18;
  uVar26 = uVar18;
  if (0 < local_1c0) {
    do {
      uVar23 = (uint)uVar24;
      uVar27 = ~uVar23 >> 0x1f;
      uVar12 = uVar19;
      if ((int)uVar23 < local_1c0) {
        uVar12 = uVar27;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar32 = *(float *)(uVar20 + (longlong)local_1c8);
      fVar34 = *(float *)(uVar20 + 4 + (longlong)local_1c8);
      fVar39 = *(float *)(uVar20 + 8 + (longlong)local_1c8);
      uVar12 = uVar19;
      if ((int)uVar23 < local_170) {
        uVar12 = uVar27;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar40 = *(float *)(uVar20 + local_178);
      fVar41 = *(float *)(uVar20 + 4 + local_178);
      fVar35 = *(float *)(uVar20 + 8 + local_178);
      uVar12 = uVar19;
      if ((int)uVar23 < local_1a8) {
        uVar12 = uVar27;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar36 = *(float *)(uVar20 + 4 + (longlong)local_1b0);
      fVar31 = *(float *)(uVar20 + 8 + (longlong)local_1b0);
      fVar33 = fVar38;
      if (((fVar41 * fVar39 - fVar35 * fVar34) * *(float *)(uVar20 + (longlong)local_1b0) -
          (fVar36 * fVar39 - fVar31 * fVar34) * fVar40) +
          (fVar36 * fVar35 - fVar31 * fVar41) * fVar32 < 0.0) {
        fVar33 = fVar30;
      }
      uVar12 = uVar11;
      if ((int)uVar23 < local_168.ArrayNum) {
        uVar12 = uVar27;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(float *)(local_168.AllocatorInstance.Data + uVar26 * 4) = fVar33;
      pTVar22 = (TReferenceControllerBase<1> *)local_1a0._16_8_;
      uVar20 = uVar20 + 0xc;
      uVar24 = (ulonglong)(uVar23 + 1);
      uVar26 = uVar26 + 1;
    } while ((int)(uVar23 + 1) < local_1c0);
  }
  memset(local_1c8,0,(longlong)local_1c0 * 0xc);
  memset(local_1b0,0,(longlong)local_1a8 * 0xc);
  local_1b8 = 0;
  fVar38 = __real_3f000000;
  if (0 < local_1b4) {
    do {
      if (((int)uVar18 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar19 = (pTVar28->field0_0x0)._s_0.X;
      uVar12 = uVar11;
      if ((int)uVar19 < iVar2) {
        uVar12 = ~uVar19 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar12 = (pTVar28->field0_0x0)._s_0.Y;
      uVar27 = 0;
      uVar23 = uVar27;
      if ((int)uVar12 < iVar2) {
        uVar23 = ~uVar12 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar23 = (pTVar28->field0_0x0)._s_0.Z;
      uVar13 = uVar27;
      if ((int)uVar23 < iVar2) {
        uVar13 = ~uVar23 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar13 = (pTVar28->field0_0x0)._s_0.X;
      fVar40 = local_158[(int)uVar23].field0_0x0._s_0.Y - local_158[(int)uVar19].field0_0x0._s_0.Y;
      fVar41 = local_158[(int)uVar23].field0_0x0._s_0.Z - local_158[(int)uVar19].field0_0x0._s_0.Z;
      fVar39 = local_158[(int)uVar23].field0_0x0._s_0.X - local_158[(int)uVar19].field0_0x0._s_0.X;
      fVar32 = local_158[(int)uVar12].field0_0x0._s_0.Y - local_158[(int)uVar19].field0_0x0._s_0.Y;
      fVar34 = local_158[(int)uVar12].field0_0x0._s_0.Z - local_158[(int)uVar19].field0_0x0._s_0.Z;
      fVar30 = local_158[(int)uVar12].field0_0x0._s_0.X - local_158[(int)uVar19].field0_0x0._s_0.X;
      uVar14 = uVar27;
      if ((int)uVar13 < iVar3) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      fVar35 = fVar39 * fVar32 - fVar40 * fVar30;
      local_188 = fVar35;
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (local_180[(int)uVar13].ArrayNum == 0) {
LAB_14db671d7:
        fVar31 = (local_158[(int)uVar12].field0_0x0._s_0.X +
                 local_158[(int)uVar23].field0_0x0._s_0.X) * fVar38 -
                 local_158[(int)uVar19].field0_0x0._s_0.X;
        fVar33 = (local_158[(int)uVar23].field0_0x0._s_0.Y +
                 local_158[(int)uVar12].field0_0x0._s_0.Y) * fVar38 -
                 local_158[(int)uVar19].field0_0x0._s_0.Y;
        fVar36 = (local_158[(int)uVar12].field0_0x0._s_0.Z +
                 local_158[(int)uVar23].field0_0x0._s_0.Z) * fVar38 -
                 local_158[(int)uVar19].field0_0x0._s_0.Z;
      }
      else {
        uVar13 = (pTVar28->field0_0x0)._s_0.Y;
        uVar14 = uVar27;
        if ((int)uVar13 < iVar3) {
          uVar14 = ~uVar13 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (local_180[(int)uVar13].ArrayNum == 0) goto LAB_14db671d7;
        uVar13 = (pTVar28->field0_0x0)._s_0.Z;
        uVar14 = uVar27;
        if ((int)uVar13 < iVar3) {
          uVar14 = ~uVar13 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (local_180[(int)uVar13].ArrayNum == 0) goto LAB_14db671d7;
        uVar19 = (pTVar28->field0_0x0)._s_0.Y;
        uVar12 = uVar27;
        if ((int)uVar19 < iVar3) {
          uVar12 = ~uVar19 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar9 = local_180;
        if ((local_180[(int)uVar19].ArrayNum < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = pTVar9[(int)uVar19].AllocatorInstance.Data;
        uVar19 = (pTVar28->field0_0x0)._s_0.X;
        uVar12 = uVar27;
        if ((int)uVar19 < iVar3) {
          uVar12 = ~uVar19 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((pTVar9[(int)uVar19].ArrayNum < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar7 = pTVar9[(int)uVar19].AllocatorInstance.Data;
        uVar19 = (pTVar28->field0_0x0)._s_0.Z;
        fVar38 = *(float *)pFVar6;
        fVar35 = *(float *)pFVar7;
        fVar37 = *(float *)(pFVar6 + 4) - *(float *)(pFVar7 + 4);
        if ((int)uVar19 < iVar3) {
          uVar27 = ~uVar19 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((pTVar9[(int)uVar19].ArrayNum < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = pTVar9[(int)uVar19].AllocatorInstance.Data;
        uVar19 = (pTVar28->field0_0x0)._s_0.X;
        uVar12 = uVar11;
        if ((int)uVar19 < iVar3) {
          uVar12 = ~uVar19 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((pTVar9[(int)uVar19].ArrayNum < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar7 = pTVar9[(int)uVar19].AllocatorInstance.Data;
        fVar29 = *(float *)(pFVar6 + 4) - *(float *)(pFVar7 + 4);
        fVar36 = (fVar38 - fVar35) * fVar29 - (*(float *)pFVar6 - *(float *)pFVar7) * fVar37;
        if (__real_322bcc77 <= (float)((uint)fVar36 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          fVar36 = __real_3f800000 / fVar36;
        }
        else {
          fVar36 = 0.0;
        }
        fVar31 = (fVar30 * fVar29 - fVar39 * fVar37) * fVar36;
        fVar33 = (fVar32 * fVar29 - fVar40 * fVar37) * fVar36;
        fVar36 = (fVar34 * fVar29 - fVar41 * fVar37) * fVar36;
        fVar35 = local_188;
        fVar38 = __real_3f000000;
      }
      local_e0[0] = 0;
      piVar21 = local_e0;
      local_e0[1] = 1;
      local_e0[2] = 2;
      do {
        iVar4 = *piVar21;
        uVar19 = (pTVar28->field0_0x0).XYZ[iVar4];
        lVar25 = (longlong)(int)uVar19;
        uVar12 = uVar11;
        if ((int)uVar19 < local_1c0) {
          uVar12 = ~uVar19 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar37 = *(float *)((longlong)local_1c8 + lVar25 * 0xc + 4);
        *(float *)((longlong)local_1c8 + lVar25 * 0xc) =
             (fVar40 * fVar34 - fVar41 * fVar32) + *(float *)((longlong)local_1c8 + lVar25 * 0xc);
        *(float *)((longlong)local_1c8 + lVar25 * 0xc + 4) =
             (fVar41 * fVar30 - fVar39 * fVar34) + fVar37;
        *(float *)((longlong)local_1c8 + lVar25 * 0xc + 8) =
             fVar35 + *(float *)((longlong)local_1c8 + lVar25 * 0xc + 8);
        uVar19 = (pTVar28->field0_0x0).XYZ[iVar4];
        lVar25 = (longlong)(int)uVar19;
        uVar12 = uVar11;
        if ((int)uVar19 < local_1a8) {
          uVar12 = ~uVar19 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        piVar21 = piVar21 + 1;
        fVar37 = *(float *)((longlong)local_1b0 + lVar25 * 0xc + 4);
        *(float *)((longlong)local_1b0 + lVar25 * 0xc) =
             fVar31 + *(float *)((longlong)local_1b0 + lVar25 * 0xc);
        *(float *)((longlong)local_1b0 + lVar25 * 0xc + 4) = fVar33 + fVar37;
        *(float *)((longlong)local_1b0 + lVar25 * 0xc + 8) =
             fVar36 + *(float *)((longlong)local_1b0 + lVar25 * 0xc + 8);
      } while (piVar21 != local_e0 + 3);
      pTVar28 = pTVar28 + 1;
      local_1b8 = local_1b8 + 1;
      uVar18 = (ulonglong)local_1b8;
      pTVar22 = (TReferenceControllerBase<1> *)local_1a0._16_8_;
    } while ((int)local_1b8 < local_1b4);
  }
  local_130 = &local_1c8;
  local_128 = &local_1b0;
  local_150.DataPtr = (void **)0x0;
  local_120 = &local_178;
  local_150.ArrayNum = 0;
  local_118 = &local_168;
  local_140 = Core::Private::Function::
              TFunctionRefCaller<`UE::Chaos::ClothAsset::FClothGeometryTools::RecalculateRenderMeshNormals'::__l2::<lambda_1>,void,int>
              ::Call;
  local_138 = &local_130;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar2,1,(TFunctionRef<void___cdecl(int)> *)&local_140,local_1d4,
             (uint)(iVar2 < 2000),&local_150);
  if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  return;
}

// ReverseMesh @ 14db6b7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Chaos::ClothAsset::FClothGeometryTools::ReverseMesh
          (TSharedRef<FManagedArrayCollection,1> *param_1,bool param_2,bool param_3,bool param_4,
          bool param_5,TArray<int,TSizedDefaultAllocator<32>_> *param_6,
          TArray<int,TSizedDefaultAllocator<32>_> *param_7)

{
  atomic<int> *paVar1;
  uint *puVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  TVector<float> *pTVar8;
  TManagedArray<UE::Math::TVector<float>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  TIntVector3<int> *pTVar11;
  code *pcVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  TArrayView<UE::Math::TVector<float>,int> *pTVar18;
  TArrayView<UE::Math::TIntVector3<int>,int> *pTVar19;
  TArrayView<UE::Math::TVector<float>,int> *pTVar20;
  FScriptContainerElement *pFVar21;
  ForElementType<unsigned_int> FVar22;
  longlong lVar23;
  uint uVar24;
  TReferenceControllerBase<1> *pTVar25;
  uint uVar26;
  uint *puVar27;
  int iVar28;
  FConstClothCollection *this;
  undefined1 auStackY_208 [32];
  undefined1 local_1d7;
  char local_1d6;
  char local_1d5;
  undefined1 local_1d4 [4];
  undefined1 local_1d0 [16];
  TReferenceControllerBase<1> *local_1c0;
  int local_1b8;
  undefined **local_1b0 [2];
  TReferenceControllerBase<1> *local_1a0;
  int local_198;
  undefined **local_190 [2];
  TReferenceControllerBase<1> *local_180;
  int local_178;
  TArrayView<UE::Math::TVector<float>,int> local_170;
  TArrayView<UE::Math::TVector<float>,int> local_160;
  TArrayView<UE::Math::TVector<float>,int> local_150;
  longlong local_140;
  uint *local_138;
  TArrayView<int_const_,int> local_130;
  TArrayView<UE::Math::TVector<float>,int> local_120;
  TArrayView<UE::Math::TIntVector3<int>,int> local_110;
  TArrayView<UE::Math::TIntVector3<int>,int> local_100;
  TArrayView<UE::Math::TIntVector3<int>,int> local_f0;
  TArrayView<UE::Math::TIntVector3<int>,int> local_e0;
  TArrayView<UE::Math::TIntVector3<int>,int> local_d0;
  TArrayView<UE::Math::TVector<float>,int> local_c0;
  TArrayView<UE::Math::TVector<float>,int> local_b0;
  TArrayView<UE::Math::TIntVector3<int>,int> local_a0;
  ForElementType<unsigned_int> local_90;
  uint local_78;
  int local_74;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1d6 = param_2;
  local_1d5 = param_3;
  FCollectionClothFacade::FCollectionClothFacade((FCollectionClothFacade *)local_1d0,param_1);
  if (param_6->ArrayNum == 0) {
    if (param_2) {
      pTVar18 = FCollectionClothFacade::GetSimNormal((FCollectionClothFacade *)local_1d0,&local_120)
      ;
      uVar26 = __xmm_80000000800000008000000080000000;
      uVar24 = 0;
      iVar17 = pTVar18->ArrayNum;
      if (0 < iVar17) {
        lVar23 = 0;
        do {
          uVar15 = 0;
          if ((int)uVar24 < iVar17) {
            uVar15 = ~uVar24 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pTVar8 = pTVar18->DataPtr;
          uVar15 = *(uint *)((longlong)&pTVar8->field0_0x0 + lVar23);
          uVar16 = *(uint *)((longlong)&pTVar8->field0_0x0 + lVar23 + 4);
          uVar3 = *(uint *)((longlong)&pTVar8->field0_0x0 + lVar23 + 8);
          uVar14 = 0;
          if ((int)uVar24 < pTVar18->ArrayNum) {
            uVar14 = ~uVar24 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pTVar8 = pTVar18->DataPtr;
          uVar24 = uVar24 + 1;
          *(uint *)((longlong)&pTVar8->field0_0x0 + lVar23) = uVar15 ^ uVar26;
          *(uint *)((longlong)&pTVar8->field0_0x0 + lVar23 + 4) = uVar16 ^ uVar26;
          *(uint *)((longlong)&pTVar8->field0_0x0 + lVar23 + 8) = uVar3 ^ uVar26;
          lVar23 = lVar23 + 0xc;
          iVar17 = pTVar18->ArrayNum;
        } while ((int)uVar24 < iVar17);
      }
    }
    pTVar25 = local_1c0;
    this = (FConstClothCollection *)local_1d0._8_8_;
    if (param_3) {
      pTVar19 = FCollectionClothFacade::GetSimIndices2D
                          ((FCollectionClothFacade *)local_1d0,&local_110);
      `UE::Chaos::ClothAsset::FClothGeometryTools::ReverseMesh'::__l2::<lambda_3>::operator()
                (&local_1d7,pTVar19);
      pTVar19 = FCollectionClothFacade::GetSimIndices3D
                          ((FCollectionClothFacade *)local_1d0,&local_100);
      `UE::Chaos::ClothAsset::FClothGeometryTools::ReverseMesh'::__l2::<lambda_3>::operator()
                (&local_1d7,pTVar19);
      pTVar25 = local_1c0;
      this = (FConstClothCollection *)local_1d0._8_8_;
    }
  }
  else {
    local_90.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_78 = 0;
    local_74 = 0x80;
    if (param_2) {
      local_78 = FManagedArrayCollection::NumElements
                           (((TSharedRef<FManagedArrayCollection_const_,1> *)local_1d0._8_8_)->
                            Object,ClothCollectionGroup::SimVertices3D);
      uVar26 = local_78 + 0x1f >> 5;
      if (local_78 + 0x1f >> 5 != 0) {
        if (local_74 + 0x1fU >> 5 < uVar26) {
          TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
          ResizeAllocation(&local_90,0,uVar26,4);
          local_74 = uVar26 << 5;
        }
        FVar22 = (ForElementType<unsigned_int>)&local_90;
        if (local_90.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar22 = local_90.SecondaryData;
        }
        memset((void *)FVar22,0,(ulonglong)uVar26 << 2);
        uVar26 = local_78 & 0x8000001f;
        if ((int)uVar26 < 0) {
          uVar26 = (uVar26 - 1 | 0xffffffe0) + 1;
        }
        if (uVar26 != 0) {
          FVar22 = (ForElementType<unsigned_int>)&local_90;
          if (local_90.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar22 = local_90.SecondaryData;
          }
          puVar27 = (uint *)((longlong)FVar22 +
                            (longlong)((int)(local_78 + ((int)local_78 >> 0x1f & 0x1fU)) >> 5) * 4);
          *puVar27 = *puVar27 & 0xffffffffU >> (0x20U - (char)uVar26 & 0x1f);
        }
      }
    }
    FCollectionClothFacade::GetSimNormal((FCollectionClothFacade *)local_1d0,&local_170);
    this = (FConstClothCollection *)local_1d0._8_8_;
    iVar17 = 0;
    local_1b8 = 0;
    iVar28 = FManagedArrayCollection::NumElements
                       (((TSharedRef<FManagedArrayCollection_const_,1> *)local_1d0._8_8_)->Object,
                        ClothCollectionGroup::SimPatterns);
    uVar26 = __xmm_80000000800000008000000080000000;
    pTVar25 = local_1c0;
    if (0 < iVar28) {
      do {
        pFVar10 = (param_6->AllocatorInstance).Data;
        for (pFVar21 = pFVar10; pFVar21 != pFVar10 + (longlong)param_6->ArrayNum * 4;
            pFVar21 = pFVar21 + 4) {
          if (*(int *)pFVar21 == iVar17) {
            if ((int)((longlong)pFVar21 - (longlong)pFVar10 >> 2) != -1) {
              if (pTVar25 == (TReferenceControllerBase<1> *)0x0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)0x0);
              }
              else {
                paVar1 = &pTVar25->SharedReferenceCount;
                LOCK();
                *paVar1 = (atomic<int>)((int)*paVar1 + 1);
                UNLOCK();
                LOCK();
                *paVar1 = (atomic<int>)((int)*paVar1 + 1);
                UNLOCK();
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar25);
                LOCK();
                *paVar1 = (atomic<int>)((int)*paVar1 + 1);
                UNLOCK();
                LOCK();
                *paVar1 = (atomic<int>)((int)*paVar1 + 1);
                UNLOCK();
              }
              iVar17 = local_1b8;
              local_198 = local_1b8;
              local_1a0 = pTVar25;
              bVar13 = FConstClothCollection::IsValid(this,None);
              if ((!bVar13) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ClothCollection->IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                                      ,0x71,L""), bVar13)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              if (((iVar17 < 0) ||
                  (iVar28 = FManagedArrayCollection::NumElements
                                      ((this->ManagedArrayCollection).Object,
                                       ClothCollectionGroup::SimPatterns), iVar28 <= iVar17)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("PatternIndex >= 0 && PatternIndex < ClothCollection->GetNumElements(ClothCollectionGroup::SimPatterns)"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                                      ,0x72,L""), bVar13)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar25);
              local_1b0[0] = &___7FCollectionClothSimPatternFacade_ClothAsset_Chaos_UE__6B_;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar25);
              if (local_1d6 != '\0') {
                FConstClothCollection::GetElements<int>
                          (&local_130,this->SimVertex3DLookup,this->SimVertices2DStart,
                           this->SimVertices2DEnd,iVar17);
                local_138 = (uint *)(local_130.DataPtr + local_130.ArrayNum);
                puVar27 = (uint *)local_130.DataPtr;
                if ((uint *)local_130.DataPtr != local_138) {
                  do {
                    uVar24 = *puVar27;
                    if ((((int)uVar24 < 0) || ((int)local_78 <= (int)uVar24)) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Index>=0 && Index<NumBits",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                            ,0x5be,L""), bVar13)) {
                      pcVar12 = (code *)swi(3);
                      (*pcVar12)();
                      return;
                    }
                    iVar17 = local_170.ArrayNum;
                    FVar22 = (ForElementType<unsigned_int>)&local_90;
                    if (local_90.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                      FVar22 = local_90.SecondaryData;
                    }
                    uVar15 = uVar24;
                    if ((int)uVar24 < 0) {
                      uVar15 = uVar24 + 0x1f;
                    }
                    local_140 = (longlong)((int)uVar15 >> 5);
                    uVar15 = 1 << ((byte)uVar24 & 0x1f);
                    if ((*(uint *)((longlong)FVar22 + local_140 * 4) & uVar15) == 0) {
                      uVar16 = 0;
                      if ((int)uVar24 < local_170.ArrayNum) {
                        uVar16 = ~uVar24 >> 0x1f;
                      }
                      if ((uVar16 == 0) &&
                         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0x14f,
                                              L"Array index out of bounds: %lld from an array of size %lld"
                                             ), bVar13)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      pTVar8 = local_170.DataPtr;
                      fVar4 = local_170.DataPtr[(int)uVar24].field0_0x0._s_0.X;
                      uVar16 = 0;
                      if ((int)uVar24 < iVar17) {
                        uVar16 = ~uVar24 >> 0x1f;
                      }
                      fVar5 = local_170.DataPtr[(int)uVar24].field0_0x0._s_0.Y;
                      fVar6 = local_170.DataPtr[(int)uVar24].field0_0x0._s_0.Z;
                      if ((uVar16 == 0) &&
                         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0x14f,
                                              L"Array index out of bounds: %lld from an array of size %lld"
                                             ), bVar13)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      pTVar8[(int)uVar24].field0_0x0._s_0.X = (float)((uint)fVar4 ^ uVar26);
                      pTVar8[(int)uVar24].field0_0x0._s_0.Y = (float)((uint)fVar5 ^ uVar26);
                      pTVar8[(int)uVar24].field0_0x0._s_0.Z = (float)((uint)fVar6 ^ uVar26);
                      if ((((int)uVar24 < 0) || ((int)local_78 <= (int)uVar24)) &&
                         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Index>=0 && Index<NumBits",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                              ,0x5be,L""), bVar13)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      FVar22 = (ForElementType<unsigned_int>)&local_90;
                      if (local_90.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                        FVar22 = local_90.SecondaryData;
                      }
                      puVar2 = (uint *)((longlong)FVar22 + local_140 * 4);
                      *puVar2 = *puVar2 | uVar15;
                    }
                    puVar27 = puVar27 + 1;
                    pTVar25 = local_1c0;
                    this = (FConstClothCollection *)local_1d0._8_8_;
                  } while (puVar27 != local_138);
                }
              }
              if (local_1d5 != '\0') {
                pTVar19 = FCollectionClothSimPatternFacade::GetSimIndices2D
                                    ((FCollectionClothSimPatternFacade *)local_1b0,&local_f0);
                uVar24 = 0;
                iVar17 = pTVar19->ArrayNum;
                if (0 < iVar17) {
                  lVar23 = 0;
                  do {
                    uVar15 = 0;
                    if ((int)uVar24 < iVar17) {
                      uVar15 = ~uVar24 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar13)) {
                      pcVar12 = (code *)swi(3);
                      (*pcVar12)();
                      return;
                    }
                    pTVar11 = pTVar19->DataPtr;
                    uVar15 = 0;
                    if ((int)uVar24 < pTVar19->ArrayNum) {
                      uVar15 = ~uVar24 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar13)) {
                      pcVar12 = (code *)swi(3);
                      (*pcVar12)();
                      return;
                    }
                    uVar24 = uVar24 + 1;
                    uVar7 = *(undefined4 *)((longlong)&pTVar19->DataPtr->field0_0x0 + lVar23 + 4);
                    *(undefined4 *)((longlong)&pTVar19->DataPtr->field0_0x0 + lVar23 + 4) =
                         *(undefined4 *)((longlong)&pTVar11->field0_0x0 + lVar23 + 8);
                    *(undefined4 *)((longlong)&pTVar11->field0_0x0 + lVar23 + 8) = uVar7;
                    lVar23 = lVar23 + 0xc;
                    iVar17 = pTVar19->ArrayNum;
                    pTVar25 = local_1c0;
                    this = (FConstClothCollection *)local_1d0._8_8_;
                  } while ((int)uVar24 < iVar17);
                }
                pTVar19 = FCollectionClothSimPatternFacade::GetSimIndices3D
                                    ((FCollectionClothSimPatternFacade *)local_1b0,&local_e0);
                uVar24 = 0;
                iVar17 = pTVar19->ArrayNum;
                if (0 < iVar17) {
                  lVar23 = 0;
                  do {
                    uVar15 = 0;
                    if ((int)uVar24 < iVar17) {
                      uVar15 = ~uVar24 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar13)) {
                      pcVar12 = (code *)swi(3);
                      (*pcVar12)();
                      return;
                    }
                    pTVar11 = pTVar19->DataPtr;
                    uVar15 = 0;
                    if ((int)uVar24 < pTVar19->ArrayNum) {
                      uVar15 = ~uVar24 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar13)) {
                      pcVar12 = (code *)swi(3);
                      (*pcVar12)();
                      return;
                    }
                    uVar24 = uVar24 + 1;
                    uVar7 = *(undefined4 *)((longlong)&pTVar19->DataPtr->field0_0x0 + lVar23 + 4);
                    *(undefined4 *)((longlong)&pTVar19->DataPtr->field0_0x0 + lVar23 + 4) =
                         *(undefined4 *)((longlong)&pTVar11->field0_0x0 + lVar23 + 8);
                    *(undefined4 *)((longlong)&pTVar11->field0_0x0 + lVar23 + 8) = uVar7;
                    lVar23 = lVar23 + 0xc;
                    iVar17 = pTVar19->ArrayNum;
                    pTVar25 = local_1c0;
                    this = (FConstClothCollection *)local_1d0._8_8_;
                  } while ((int)uVar24 < iVar17);
                }
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_1a0);
              iVar17 = local_1b8;
            }
            break;
          }
        }
        iVar17 = iVar17 + 1;
        local_1b8 = iVar17;
        iVar28 = FManagedArrayCollection::NumElements
                           ((this->ManagedArrayCollection).Object,ClothCollectionGroup::SimPatterns)
        ;
      } while (iVar17 < iVar28);
    }
    if (local_90.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_90.SecondaryData);
    }
  }
  if (param_7->ArrayNum == 0) {
    if (param_4) {
      if (pTVar25 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        paVar1 = &pTVar25->SharedReferenceCount;
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25)
        ;
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
      pTVar9 = this->RenderTangentU;
      if (pTVar9 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
        local_160.DataPtr = (TVector<float> *)0x0;
        local_160.ArrayNum = 0;
      }
      else {
        local_160.ArrayNum = (**(code **)(*(longlong *)pTVar9 + 0x60))(pTVar9);
        local_160.DataPtr = *(TVector<float> **)&pTVar9->field_0x10;
        if ((local_160.ArrayNum < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar13)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
      if (pTVar25 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        paVar1 = &pTVar25->SharedReferenceCount;
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25)
        ;
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
      pTVar9 = this->RenderNormal;
      if (pTVar9 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
        local_150.DataPtr = (TVector<float> *)0x0;
        local_150.ArrayNum = 0;
      }
      else {
        local_150.ArrayNum = (**(code **)(*(longlong *)pTVar9 + 0x60))(pTVar9);
        local_150.DataPtr = *(TVector<float> **)&pTVar9->field_0x10;
        if ((local_150.ArrayNum < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar13)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
      `UE::Chaos::ClothAsset::FClothGeometryTools::ReverseMesh'::__l2::<lambda_2>::operator()
                (local_1d4,&local_150,&local_160);
    }
    if (param_5) {
      pTVar19 = FCollectionClothFacade::GetRenderIndices
                          ((FCollectionClothFacade *)local_1d0,&local_d0);
      `UE::Chaos::ClothAsset::FClothGeometryTools::ReverseMesh'::__l2::<lambda_3>::operator()
                (&local_1d7,pTVar19);
      pTVar25 = local_1c0;
    }
  }
  else {
    iVar28 = 0;
    iVar17 = FManagedArrayCollection::NumElements
                       ((this->ManagedArrayCollection).Object,ClothCollectionGroup::RenderPatterns);
    if (0 < iVar17) {
      do {
        pFVar10 = (param_7->AllocatorInstance).Data;
        for (pFVar21 = pFVar10; pFVar21 != pFVar10 + (longlong)param_7->ArrayNum * 4;
            pFVar21 = pFVar21 + 4) {
          if (*(int *)pFVar21 == iVar28) {
            if ((int)((longlong)pFVar21 - (longlong)pFVar10 >> 2) != -1) {
              if (pTVar25 == (TReferenceControllerBase<1> *)0x0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)0x0);
              }
              else {
                paVar1 = &pTVar25->SharedReferenceCount;
                LOCK();
                *paVar1 = (atomic<int>)((int)*paVar1 + 1);
                UNLOCK();
                LOCK();
                *paVar1 = (atomic<int>)((int)*paVar1 + 1);
                UNLOCK();
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar25);
                LOCK();
                *paVar1 = (atomic<int>)((int)*paVar1 + 1);
                UNLOCK();
                LOCK();
                *paVar1 = (atomic<int>)((int)*paVar1 + 1);
                UNLOCK();
              }
              local_180 = pTVar25;
              local_178 = iVar28;
              bVar13 = FConstClothCollection::IsValid(this,None);
              if ((!bVar13) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ClothCollection->IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothRenderPatternFacade.cpp"
                                      ,0xd1,L""), bVar13)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              if (((iVar28 < 0) ||
                  (iVar17 = FManagedArrayCollection::NumElements
                                      ((this->ManagedArrayCollection).Object,
                                       ClothCollectionGroup::RenderPatterns), iVar17 <= iVar28)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("PatternIndex >= 0 && PatternIndex < ClothCollection->GetNumElements(ClothCollectionGroup::RenderPatterns)"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothRenderPatternFacade.cpp"
                                      ,0xd2,L""), bVar13)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar25);
              local_190[0] = &___7FCollectionClothRenderPatternFacade_ClothAsset_Chaos_UE__6B_;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar25);
              if (param_4) {
                pTVar18 = FCollectionClothRenderPatternFacade::GetRenderTangentU
                                    ((FCollectionClothRenderPatternFacade *)local_190,&local_c0);
                pTVar20 = FCollectionClothRenderPatternFacade::GetRenderNormal
                                    ((FCollectionClothRenderPatternFacade *)local_190,&local_b0);
                `UE::Chaos::ClothAsset::FClothGeometryTools::ReverseMesh'::__l2::<lambda_2>::
                operator()(local_1d4,pTVar20,pTVar18);
              }
              if (param_5) {
                pTVar19 = FCollectionClothRenderPatternFacade::GetRenderIndices
                                    ((FCollectionClothRenderPatternFacade *)local_190,&local_a0);
                uVar26 = 0;
                iVar17 = pTVar19->ArrayNum;
                if (0 < iVar17) {
                  lVar23 = 0;
                  do {
                    uVar24 = 0;
                    if ((int)uVar26 < iVar17) {
                      uVar24 = ~uVar26 >> 0x1f;
                    }
                    if ((uVar24 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar13)) {
                      pcVar12 = (code *)swi(3);
                      (*pcVar12)();
                      return;
                    }
                    pTVar11 = pTVar19->DataPtr;
                    uVar24 = 0;
                    if ((int)uVar26 < pTVar19->ArrayNum) {
                      uVar24 = ~uVar26 >> 0x1f;
                    }
                    if ((uVar24 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar13)) {
                      pcVar12 = (code *)swi(3);
                      (*pcVar12)();
                      return;
                    }
                    uVar26 = uVar26 + 1;
                    uVar7 = *(undefined4 *)((longlong)&pTVar19->DataPtr->field0_0x0 + lVar23 + 4);
                    *(undefined4 *)((longlong)&pTVar19->DataPtr->field0_0x0 + lVar23 + 4) =
                         *(undefined4 *)((longlong)&pTVar11->field0_0x0 + lVar23 + 8);
                    *(undefined4 *)((longlong)&pTVar11->field0_0x0 + lVar23 + 8) = uVar7;
                    lVar23 = lVar23 + 0xc;
                    iVar17 = pTVar19->ArrayNum;
                    pTVar25 = local_1c0;
                    this = (FConstClothCollection *)local_1d0._8_8_;
                  } while ((int)uVar26 < iVar17);
                }
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_180);
            }
            break;
          }
        }
        iVar28 = iVar28 + 1;
        iVar17 = FManagedArrayCollection::NumElements
                           ((this->ManagedArrayCollection).Object,
                            ClothCollectionGroup::RenderPatterns);
      } while (iVar28 < iVar17);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
  return;
}

// SampleVertices @ 14db6c760

void __cdecl
UE::Chaos::ClothAsset::FClothGeometryTools::SampleVertices
          (TArrayView<UE::Math::TVector<float>_const_,int> *param_1,float param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3)

{
  TVector<float> *pTVar1;
  TVector<float> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint local_res8 [2];
  bool local_res10 [8];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_res18;
  int local_res20 [2];
  TArray<bool,TSizedDefaultAllocator<32>_> local_70 [3];
  
  local_res18 = param_3;
  if ((param_2 <= 0.0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CullDiameterSq > 0.0f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothGeometryTools.cpp"
                         ,0x56f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = param_1->ArrayNum;
  local_70[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70[0].ArrayNum = 0;
  local_70[0].ArrayMax = 0;
  local_res10[0] = true;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(local_70,local_res10,iVar5);
  local_res8[0] = 0;
  if (0 < iVar5) {
    do {
      uVar8 = local_res8[0];
      uVar9 = 0;
      if ((int)local_res8[0] < local_70[0].ArrayNum) {
        uVar9 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_70[0].AllocatorInstance.Data[(int)uVar8] != (FScriptContainerElement)0x0) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (param_3,local_res20,(bool *)local_res8);
        lVar6 = (longlong)(int)uVar8;
        uVar9 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar1 = param_1->DataPtr;
        iVar5 = param_1->ArrayNum;
        uVar9 = uVar8 + 1;
        if ((int)uVar9 < iVar5) {
          lVar11 = (longlong)(int)uVar9;
          lVar10 = lVar11 * 0xc;
          do {
            uVar7 = ~uVar9 >> 0x1f;
            uVar8 = 0;
            if ((int)uVar9 < local_70[0].ArrayNum) {
              uVar8 = uVar7;
            }
            if ((uVar8 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (local_70[0].AllocatorInstance.Data[lVar11] != (FScriptContainerElement)0x0) {
              uVar8 = 0;
              if ((int)uVar9 < iVar5) {
                uVar8 = uVar7;
              }
              if ((uVar8 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pTVar2 = param_1->DataPtr;
              fVar14 = *(float *)((longlong)&pTVar2->field0_0x0 + lVar10 + 4) -
                       pTVar1[lVar6].field0_0x0._s_0.Y;
              fVar13 = *(float *)((longlong)&pTVar2->field0_0x0 + lVar10) -
                       pTVar1[lVar6].field0_0x0._s_0.X;
              fVar12 = *(float *)((longlong)&pTVar2->field0_0x0 + lVar10 + 8) -
                       pTVar1[lVar6].field0_0x0._s_0.Z;
              if (fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12 < param_2) {
                uVar8 = 0;
                if ((int)uVar9 < local_70[0].ArrayNum) {
                  uVar8 = uVar7;
                }
                if ((uVar8 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                local_70[0].AllocatorInstance.Data[lVar11] = (FScriptContainerElement)0x0;
              }
            }
            uVar9 = uVar9 + 1;
            lVar11 = lVar11 + 1;
            lVar10 = lVar10 + 0xc;
            param_3 = local_res18;
            uVar8 = local_res8[0];
          } while ((int)uVar9 < iVar5);
        }
      }
      local_res8[0] = uVar8 + 1;
    } while ((int)local_res8[0] < iVar5);
  }
  if (local_70[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70[0].AllocatorInstance.Data);
  }
  return;
}

// SelectAllInGroupType @ 14db6caf0

void __cdecl
UE::Chaos::ClothAsset::FClothGeometryTools::SelectAllInGroupType
          (TSharedRef<FManagedArrayCollection,1> *param_1,FName *param_2,FName *param_3)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  uint uVar3;
  int iVar4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this;
  undefined1 *puVar5;
  int iVar6;
  undefined8 *local_res8;
  int local_res18 [2];
  undefined1 local_38 [16];
  TReferenceControllerBase<1> *local_28;
  
  local_38._8_8_ = param_1->Object;
  local_28 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_28->SharedReferenceCount = (atomic<int>)((int)local_28->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_28->SharedReferenceCount = (atomic<int>)((int)local_28->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  local_38._0_8_ = &___7FCollectionClothSelectionFacade_ClothAsset_Chaos_UE__6B_;
  local_res8 = (undefined8 *)local_38;
  `UE::Chaos::ClothAsset::FCollectionClothSelectionFacade::DefineSchema'::__l2::<lambda_1>::
  operator()(&local_res8,&ClothAsset::Private::SelectionGroup);
  `UE::Chaos::ClothAsset::FCollectionClothSelectionFacade::DefineSchema'::__l2::<lambda_1>::
  operator()(&local_res8,&ClothAsset::Private::SelectionSecondaryGroup);
  FVar1 = *param_3;
  pFVar2 = param_1->Object;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(pFVar2->GroupInfo).field_0x8 != *(int *)&(pFVar2->GroupInfo).field_0x34) {
    puVar5 = *(undefined1 **)&(pFVar2->GroupInfo).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(pFVar2->GroupInfo).field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(pFVar2->GroupInfo).field_0x48 - 1U & FVar1.Number + uVar3)
                              * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)&pFVar2->GroupInfo + (longlong)iVar4 * 0x14) == FVar1) {
          iVar4 = FManagedArrayCollection::NumElements(param_1->Object,*param_3);
          this = FCollectionClothSelectionFacade::FindOrAddSelectionSetInternal
                           ((FCollectionClothSelectionFacade *)local_38,param_2,param_3,
                            &ClothAsset::Private::SelectionGroup);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reserve(this,iVar4);
          iVar6 = 0;
          local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffff00000000);
          if (0 < iVar4) {
            do {
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        (this,local_res18,(bool *)&local_res8);
              iVar6 = iVar6 + 1;
              local_res8 = (undefined8 *)CONCAT44(local_res8._4_4_,iVar6);
            } while (iVar6 < iVar4);
          }
          break;
        }
        iVar4 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  return;
}

// TransferWeightMap @ 14db70fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Chaos::ClothAsset::FClothGeometryTools::TransferWeightMap
          (TArrayView<UE::Math::TVector<float>_const_,int> *param_1,
          TArrayView<UE::Math::TIntVector3<int>_const_,int> *param_2,
          TArrayView<float_const_,int> *param_3,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_4,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_5,
          TArrayView<UE::Math::TIntVector3<int>_const_,int> *param_6,TArrayView<float,int> *param_7)

{
  TIntVector3<int> *pTVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  code *pcVar6;
  float fVar7;
  ForAnyElementType FVar8;
  TArrayView<float,int> *pTVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  TIntVector3<int> *pTVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  float fVar19;
  undefined1 auStackY_638 [32];
  ForAnyElementType local_5e8;
  uint local_5e0;
  uint local_5dc;
  ForAnyElementType local_5d8;
  int local_5d0;
  int iStack_5cc;
  int local_5c8;
  int local_5c4;
  int local_5c0;
  int local_5bc;
  int local_5b8;
  int local_5b4;
  TArrayView<float_const_,int> *local_5b0;
  TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> local_5a8;
  uint local_598;
  TArray<ClothingMeshUtils::FMeshToMeshFilterSet,TSizedDefaultAllocator<32>_> local_590;
  float *local_580;
  float *local_578;
  TArrayView<float,int> *local_570;
  FScriptContainerElement *local_568;
  int iStack_560;
  undefined4 uStack_55c;
  FScriptContainerElement *local_558;
  int iStack_550;
  undefined4 uStack_54c;
  FScriptContainerElement *local_548;
  uint uStack_540;
  undefined4 uStack_53c;
  ClothMeshDesc local_538;
  ClothMeshDesc local_2e8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_638;
  local_570 = param_7;
  local_5b0 = param_3;
  if ((param_7->ArrayNum != param_4->ArrayNum) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TargetWeights.Num() == TargetPositions.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothGeometryTools.cpp"
                          ,0x68a,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (param_1->ArrayNum < 0x10001) {
    uVar16 = 0;
    local_5d8.Data = (FScriptContainerElement *)0x0;
    local_5d0 = 0;
    iStack_5cc = 0;
    uVar11 = param_2->ArrayNum * 3;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if (0 < (int)uVar11) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar11,&local_5d8,0,&iStack_5cc);
    }
    pTVar15 = param_2->DataPtr;
    pTVar1 = pTVar15 + param_2->ArrayNum;
    for (; pTVar15 != pTVar1; pTVar15 = pTVar15 + 1) {
      local_5c8 = (pTVar15->field0_0x0)._s_0.X;
      if (((local_5d8.Data <= (FScriptContainerElement *)&local_5c8) &&
          ((FScriptContainerElement *)&local_5c8 < local_5d8.Data + (longlong)iStack_5cc * 4)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_5d0 == iStack_5cc) {
        local_5d0 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_5d8,&iStack_5cc);
      }
      lVar13 = (longlong)local_5d0;
      local_5d0 = local_5d0 + 1;
      *(int *)(local_5d8.Data + lVar13 * 4) = local_5c8;
      local_5c4 = (pTVar15->field0_0x0)._s_0.Y;
      if (((local_5d8.Data <= (FScriptContainerElement *)&local_5c4) &&
          ((FScriptContainerElement *)&local_5c4 < local_5d8.Data + (longlong)iStack_5cc * 4)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_5d0 == iStack_5cc) {
        local_5d0 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_5d8,&iStack_5cc);
      }
      iVar12 = local_5d0 + 1;
      *(int *)(local_5d8.Data + (longlong)local_5d0 * 4) = local_5c4;
      local_5c0 = (pTVar15->field0_0x0)._s_0.Z;
      local_5d0 = iVar12;
      if (((local_5d8.Data <= (FScriptContainerElement *)&local_5c0) &&
          ((FScriptContainerElement *)&local_5c0 < local_5d8.Data + (longlong)iStack_5cc * 4)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_5d0 == iStack_5cc) {
        local_5d0 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_5d8,&iStack_5cc);
      }
      *(int *)(local_5d8.Data + (longlong)local_5d0 * 4) = local_5c0;
      local_5d0 = local_5d0 + 1;
    }
    local_5e8.Data = (FScriptContainerElement *)0x0;
    local_5e0 = 0;
    local_5dc = 0;
    uVar11 = param_6->ArrayNum * 3;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    uVar14 = uVar16;
    if (0 < (int)uVar11) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar11,&local_5e8,0,(int *)&local_5dc);
      uVar14 = (ulonglong)local_5e0;
    }
    pTVar15 = param_6->DataPtr;
    pTVar1 = pTVar15 + param_6->ArrayNum;
    if (pTVar15 != pTVar1) {
      while( true ) {
        local_5bc = (pTVar15->field0_0x0)._s_0.X;
        uVar11 = (uint)uVar14;
        if (((local_5e8.Data <= (FScriptContainerElement *)&local_5bc) &&
            ((FScriptContainerElement *)&local_5bc < local_5e8.Data + (longlong)(int)local_5dc * 4))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), uVar11 = local_5e0, bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (uVar11 == local_5dc) {
          uVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_5e8,(int *)&local_5dc);
        }
        local_5e0 = uVar11 + 1;
        *(int *)(local_5e8.Data + (longlong)(int)uVar11 * 4) = local_5bc;
        local_5b8 = (pTVar15->field0_0x0)._s_0.Y;
        if (((local_5e8.Data <= (FScriptContainerElement *)&local_5b8) &&
            ((FScriptContainerElement *)&local_5b8 < local_5e8.Data + (longlong)(int)local_5dc * 4))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_5e0 == local_5dc) {
          local_5e0 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_5e8,(int *)&local_5dc);
        }
        uVar11 = local_5e0 + 1;
        *(int *)(local_5e8.Data + (longlong)(int)local_5e0 * 4) = local_5b8;
        local_5b4 = (pTVar15->field0_0x0)._s_0.Z;
        local_5e0 = uVar11;
        if (((local_5e8.Data <= (FScriptContainerElement *)&local_5b4) &&
            ((FScriptContainerElement *)&local_5b4 < local_5e8.Data + (longlong)(int)local_5dc * 4))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_5e0 == local_5dc) {
          local_5e0 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_5e8,(int *)&local_5dc);
        }
        uVar11 = local_5e0 + 1;
        pTVar15 = pTVar15 + 1;
        *(int *)(local_5e8.Data + (longlong)(int)local_5e0 * 4) = local_5b4;
        local_5e0 = uVar11;
        if (pTVar15 == pTVar1) break;
        uVar14 = (ulonglong)uVar11;
      }
    }
    iVar12 = local_5d0;
    local_568 = local_5d8.Data;
    if ((local_5d0 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_538.Positions.DataPtr = param_1->DataPtr;
    local_538.Positions.ArrayNum = param_1->ArrayNum;
    local_538.Positions._12_4_ = *(undefined4 *)&param_1->field_0xc;
    iStack_560 = iVar12;
    local_538.Normals.DataPtr = (TVector<float> *)0x0;
    local_538.Indices._12_4_ = uStack_55c;
    local_538.Indices.ArrayNum = iVar12;
    local_538.Normals._8_8_ = (ulonglong)(uint)local_538.Normals._12_4_ << 0x20;
    local_538.Tangents.DataPtr = (TVector<float> *)0x0;
    local_538.Indices.DataPtr = (uint *)local_568;
    local_538.Tangents.ArrayNum = 0;
    local_538.AveragedNormals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_538.AveragedNormals.ArrayNum = 0;
    local_538.AveragedNormals.ArrayMax = 0;
    local_538.bHasValidBVH = false;
    ::Chaos::
    TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
    ::
    TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
              (&local_538.BVH);
    local_538.MaxEdgeLengths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_538.MaxEdgeLengths.ArrayNum = 0;
    local_538.MaxEdgeLengths.ArrayMax = 0;
    local_538.FilteredTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_538.FilteredTriangles.ArrayNum = 0;
    local_538.FilteredTriangles.ArrayMax = 0;
    ClothingMeshUtils::ClothMeshDesc::ComputeAveragedNormals(&local_538);
    iStack_550 = local_538.AveragedNormals.ArrayNum;
    local_558 = local_538.AveragedNormals.AllocatorInstance.Data;
    if ((local_538.AveragedNormals.ArrayNum < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar11 = local_5e0;
    local_538.Normals._12_4_ = uStack_54c;
    local_538.Normals.ArrayNum = iStack_550;
    local_548 = local_5e8.Data;
    local_538.Normals.DataPtr = (TVector<float> *)local_558;
    if (((int)local_5e0 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_2e8.Positions.DataPtr = param_4->DataPtr;
    local_2e8.Positions.ArrayNum = param_4->ArrayNum;
    local_2e8.Positions._12_4_ = *(undefined4 *)&param_4->field_0xc;
    uStack_540 = uVar11;
    local_2e8.Indices._12_4_ = uStack_53c;
    local_2e8.Indices.ArrayNum = uVar11;
    local_2e8.Tangents.DataPtr = (TVector<float> *)0x0;
    local_2e8.Normals.DataPtr = param_5->DataPtr;
    local_2e8.Normals.ArrayNum = param_5->ArrayNum;
    local_2e8.Normals._12_4_ = *(undefined4 *)&param_5->field_0xc;
    local_2e8.Tangents.ArrayNum = 0;
    local_2e8.Indices.DataPtr = (uint *)local_548;
    local_2e8.AveragedNormals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2e8.AveragedNormals.ArrayNum = 0;
    local_2e8.AveragedNormals.ArrayMax = 0;
    local_2e8.bHasValidBVH = false;
    ::Chaos::
    TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
    ::
    TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
              (&local_2e8.BVH);
    local_2e8.MaxEdgeLengths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2e8.MaxEdgeLengths.ArrayNum = 0;
    local_2e8.MaxEdgeLengths.ArrayMax = 0;
    local_2e8.FilteredTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2e8.FilteredTriangles.ArrayNum = 0;
    local_2e8.FilteredTriangles.ArrayMax = 0;
    local_5a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5a8.ArrayNum = 0;
    local_5a8.ArrayMax = 0;
    local_590.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_590.ArrayNum = 0;
    local_590.ArrayMax = 0;
    ClothingMeshUtils::GenerateMeshToMeshVertData
              (&local_5a8,&local_2e8,&local_538,(FPointWeightMap *)0x0,false,false,0.0,&local_590);
    DestructItems<ClothingMeshUtils::FMeshToMeshFilterSet,int>
              ((FMeshToMeshFilterSet *)local_590.AllocatorInstance.Data,local_590.ArrayNum);
    if ((FMeshToMeshFilterSet *)local_590.AllocatorInstance.Data != (FMeshToMeshFilterSet *)0x0) {
      FMemory::Free(local_590.AllocatorInstance.Data);
    }
    if (local_5a8.ArrayNum != param_7->ArrayNum) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("MeshToMeshVertData.Num() == TargetWeights.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothGeometryTools.cpp"
                          ,0x6b3,L"");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    fVar7 = __real_3f800000;
    uVar14 = uVar16;
    uVar18 = uVar16;
    iVar12 = local_5a8.ArrayNum;
    if (0 < param_7->ArrayNum) {
      while( true ) {
        uVar17 = (uint)uVar14;
        uVar11 = 0;
        if ((int)uVar17 < iVar12) {
          uVar11 = ~uVar17 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar8.Data = local_5a8.AllocatorInstance.Data;
        uVar4 = *(ushort *)(local_5a8.AllocatorInstance.Data + uVar16 + 0x32);
        uVar5 = *(ushort *)(local_5a8.AllocatorInstance.Data + uVar16 + 0x34);
        fVar19 = *(float *)(local_5a8.AllocatorInstance.Data + uVar16 + 8);
        local_598 = (uint)*(ushort *)(local_5a8.AllocatorInstance.Data + uVar16 + 0x30);
        if ((local_5b0->ArrayNum <= (int)local_598) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar2 = *(float *)(FVar8.Data + uVar16);
        local_578 = local_5b0->DataPtr;
        if ((local_5b0->ArrayNum <= (int)(uint)uVar4) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar3 = *(float *)(FVar8.Data + uVar16 + 4);
        local_580 = local_5b0->DataPtr;
        if ((local_5b0->ArrayNum <= (int)(uint)uVar5) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar9 = local_570;
        uVar11 = 0;
        if ((int)uVar17 < local_570->ArrayNum) {
          uVar11 = ~uVar17 >> 0x1f;
        }
        fVar19 = fVar3 * local_580[uVar4] + fVar2 * local_578[(ushort)local_598] +
                 fVar19 * local_5b0->DataPtr[uVar5];
        if (fVar7 <= fVar19) {
          fVar19 = fVar7;
        }
        if (fVar19 <= 0.0) {
          fVar19 = 0.0;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar16 = uVar16 + 0x40;
        pTVar9->DataPtr[uVar18] = fVar19;
        if (pTVar9->ArrayNum <= (int)(uVar17 + 1)) break;
        uVar14 = (ulonglong)(uVar17 + 1);
        uVar18 = uVar18 + 1;
        iVar12 = local_5a8.ArrayNum;
      }
    }
    if (local_5a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a8.AllocatorInstance.Data);
    }
    if (local_2e8.FilteredTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.FilteredTriangles.AllocatorInstance.Data);
    }
    if (local_2e8.MaxEdgeLengths.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.MaxEdgeLengths.AllocatorInstance.Data);
    }
    ::Chaos::
    TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
    ::
    ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
              (&local_2e8.BVH);
    if (local_2e8.AveragedNormals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.AveragedNormals.AllocatorInstance.Data);
    }
    if (local_538.FilteredTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.FilteredTriangles.AllocatorInstance.Data);
    }
    if (local_538.MaxEdgeLengths.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.MaxEdgeLengths.AllocatorInstance.Data);
    }
    ::Chaos::
    TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
    ::
    ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
              (&local_538.BVH);
    if (local_538.AveragedNormals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.AveragedNormals.AllocatorInstance.Data);
    }
    if (local_5e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5e8.Data);
    }
    if (local_5d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d8.Data);
    }
  }
  else {
    bVar10 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<3001317416958428811>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothGeometryTools.cpp"
                        ,0x68b,"SourcePositions.Num() <= 65536");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

