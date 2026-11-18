// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 4

// ~TDynamicVertexSkinWeightsAttributeChange<UE::Geometry::FDynamicMesh3> @ 1433697b0

void __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttributeChange<UE::Geometry::FDynamicMesh3>::
~TDynamicVertexSkinWeightsAttributeChange<UE::Geometry::FDynamicMesh3>
          (TDynamicVertexSkinWeightsAttributeChange<UE::Geometry::FDynamicMesh3> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<UE::Geometry::TDynamicVertexSkinWeightsAttributeChange<UE::Geometry::FDynamicMesh3>::FChangeVertexBoneWeights,int>
            ((FChangeVertexBoneWeights *)(this->NewVertexBoneWeights).AllocatorInstance.Data,
             (this->NewVertexBoneWeights).ArrayNum);
  pFVar1 = (this->NewVertexBoneWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Geometry::TDynamicVertexSkinWeightsAttributeChange<UE::Geometry::FDynamicMesh3>::FChangeVertexBoneWeights,int>
            ((FChangeVertexBoneWeights *)(this->OldVertexBoneWeights).AllocatorInstance.Data,
             (this->OldVertexBoneWeights).ArrayNum);
  pFVar1 = (this->OldVertexBoneWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeChangeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  return;
}

// Apply @ 1433875a0

bool __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttributeChange<UE::Geometry::FDynamicMesh3>::Apply
          (TDynamicVertexSkinWeightsAttributeChange<UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  undefined1 local_res18 [8];
  
  uVar9 = (ulonglong)param_2 ^ 1;
  iVar2 = (&this->OldVertexBoneWeights)[uVar9].ArrayNum;
  pFVar8 = (&this->OldVertexBoneWeights)[uVar9].AllocatorInstance.Data;
  pFVar1 = pFVar8 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((&this->OldVertexBoneWeights)[uVar9].ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicVertexSkinWeightsAttributeChange<UE::Geometry::FDynamicMesh3>::FChangeVertexBoneWeights_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar8 == pFVar1) break;
    uVar3 = *(uint *)&pFVar8[0x40].field_0x0;
    lVar4 = param_1[1]._padding_;
    if ((((int)uVar3 < 0) || (*(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24) <= (int)uVar3)
        ) || (0xfffd < (ushort)(*(short *)(*(longlong *)
                                            (*(longlong *)(lVar4 + 0x28) +
                                            (ulonglong)(uVar3 >> 9) * 8) +
                                          (ulonglong)(uVar3 & 0x1ff) * 2) - 1U))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttribCast->GetParent()->IsVertex(Change.VertexID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexSkinWeightsAttribute.h"
                         ,0x2fa,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    AnimationCore::FBoneWeights::operator=
              ((FBoneWeights *)
               ((ulonglong)(*(uint *)&pFVar8[0x40].field_0x0 & 0x1ff) * 0x40 +
               *(longlong *)
                (param_1[2]._padding_ + (ulonglong)(*(uint *)&pFVar8[0x40].field_0x0 >> 9) * 8)),
               (FBoneWeights *)pFVar8);
    pFVar8 = pFVar8 + 0x48;
  }
  return true;
}

// SaveInitialVertex @ 1433c7140

void __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttributeChange<UE::Geometry::FDynamicMesh3>::
SaveInitialVertex(TDynamicVertexSkinWeightsAttributeChange<UE::Geometry::FDynamicMesh3> *this,
                 TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,int param_2)

{
  FScriptContainerElement *this_00;
  int iVar1;
  
  iVar1 = (this->OldVertexBoneWeights).ArrayNum;
  if (iVar1 == (this->OldVertexBoneWeights).ArrayMax) {
    iVar1 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,&(this->OldVertexBoneWeights).AllocatorInstance,
                       &(this->OldVertexBoneWeights).ArrayMax);
  }
  (this->OldVertexBoneWeights).ArrayNum = iVar1 + 1;
  this_00 = (this->OldVertexBoneWeights).AllocatorInstance.Data + (longlong)iVar1 * 0x48;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined4 *)(this_00 + 0x44) = 0;
  *(ForElementType<UE::AnimationCore::FBoneWeight> *)(this_00 + 0x30) =
       (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
  *(int *)(this_00 + 0x38) = 0;
  *(int *)(this_00 + 0x3c) = 0xc;
  *(int *)(this_00 + 0x40) = param_2;
  AnimationCore::FBoneWeights::operator=
            ((FBoneWeights *)this_00,
             (FBoneWeights *)
             ((ulonglong)(param_2 & 0x1ff) * 0x40 +
             *(longlong *)(param_1[2]._padding_ + (ulonglong)((uint)param_2 >> 9) * 8)));
  return;
}

// StoreAllFinalVertices @ 1433d8060

void __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttributeChange<UE::Geometry::FDynamicMesh3>::
StoreAllFinalVertices
          (TDynamicVertexSkinWeightsAttributeChange<UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2)

{
  TArray<UE::Geometry::TDynamicVertexSkinWeightsAttributeChange<UE::Geometry::FDynamicMesh3>::FChangeVertexBoneWeights,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  FScriptContainerElement *this_00;
  ulonglong uVar4;
  code *pcVar5;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *pTVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *local_res10;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_res18;
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar10 = (this->NewVertexBoneWeights).ArrayNum;
  pTVar1 = &this->NewVertexBoneWeights;
  uVar13 = (iVar10 - *(int *)&(param_2->Elements).field_0x34) +
           *(int *)&(param_2->Elements).field_0x8;
  local_res10 = param_1;
  local_res18 = param_2;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar2 = &(this->NewVertexBoneWeights).ArrayMax;
  if (*piVar2 < (int)uVar13) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,uVar13,&pTVar1->AllocatorInstance,iVar10,piVar2);
  }
  iVar10 = *(int *)&(param_2->Elements).field_0x28;
  puVar3 = &(param_2->Elements).field_0x10;
  iVar14 = 0;
  iVar16 = 0;
  uVar13 = 1;
  iVar9 = 0;
  if (iVar10 != 0) {
    puVar17 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar3;
    }
    uVar12 = *puVar17;
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar9 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1433d814f;
      uVar12 = puVar17[lVar11 + 1];
    }
    uVar13 = -uVar12 & uVar12;
    uVar4 = (ulonglong)uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar9 = iVar16 + -1 + local_res20;
    if (iVar10 < iVar9) {
      iVar9 = iVar10;
    }
  }
LAB_1433d814f:
  uVar12 = *(uint *)&(param_2->Elements).field_0x28;
  uVar18 = uVar12 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar13,iVar14);
  TStack_70.CurrentBitIndex = iVar9;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar12 >> 5;
  TStack_70._28_4_ = iVar9;
  TStack_70.BaseBitIndex = iVar16;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(param_2->Elements).field_0x8 -
                       *(int *)&(param_2->Elements).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar12 < 0) || (iVar10 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar7 = local_res18;
  pTVar6 = local_res10;
  uVar13 = *(uint *)&(param_2->Elements).field_0x28;
  if (uVar12 != uVar13) {
    puVar15 = *(undefined1 **)&(param_2->Elements).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar3;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar12 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_1433d8260;
      uVar12 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar12 = (int)lVar11 + -1 + uVar18;
    if ((int)uVar13 < (int)uVar12) {
      uVar12 = uVar13;
    }
  }
LAB_1433d8260:
  while( true ) {
    if (*(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar12) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (param_2 == pTVar7))
    break;
    uVar13 = *(uint *)(*(longlong *)&param_2->Elements + (longlong)TStack_70.CurrentBitIndex * 0xc);
    iVar10 = (this->NewVertexBoneWeights).ArrayNum;
    if (iVar10 == *piVar2) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x848,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->NewVertexBoneWeights).ArrayNum = iVar10 + 1;
    this_00 = (pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 0x48;
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)(this_00 + 8) = 0;
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(undefined8 *)(this_00 + 0x20) = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    *(undefined4 *)(this_00 + 0x44) = 0;
    *(ForElementType<UE::AnimationCore::FBoneWeight> *)(this_00 + 0x30) =
         (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
    *(int *)(this_00 + 0x38) = 0;
    *(int *)(this_00 + 0x3c) = 0xc;
    *(uint *)(this_00 + 0x40) = uVar13;
    AnimationCore::FBoneWeights::operator=
              ((FBoneWeights *)this_00,
               (FBoneWeights *)
               ((ulonglong)(uVar13 & 0x1ff) * 0x40 +
               *(longlong *)(pTVar6[2]._padding_ + (ulonglong)(uVar13 >> 9) * 8)));
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

