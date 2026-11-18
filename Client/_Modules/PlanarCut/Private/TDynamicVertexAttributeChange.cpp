// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 8

// ~TDynamicVertexAttributeChange<float,2,UE::Geometry::FDynamicMesh3> @ 14c9a8d10

void __thiscall
UE::Geometry::TDynamicVertexAttributeChange<float,2,UE::Geometry::FDynamicMesh3>::
~TDynamicVertexAttributeChange<float,2,UE::Geometry::FDynamicMesh3>
          (TDynamicVertexAttributeChange<float,2,UE::Geometry::FDynamicMesh3> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)
       &___7__TDynamicVertexAttributeChange_M_01VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  pFVar1 = (this->NewVertexAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldVertexAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeChangeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  return;
}

// ~TDynamicVertexAttributeChange<float,4,UE::Geometry::FDynamicMesh3> @ 14c9a8d60

void __thiscall
UE::Geometry::TDynamicVertexAttributeChange<float,4,UE::Geometry::FDynamicMesh3>::
~TDynamicVertexAttributeChange<float,4,UE::Geometry::FDynamicMesh3>
          (TDynamicVertexAttributeChange<float,4,UE::Geometry::FDynamicMesh3> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)
       &___7__TDynamicVertexAttributeChange_M_03VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  pFVar1 = (this->NewVertexAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldVertexAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeChangeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  return;
}

// Apply @ 14c9b5240

bool __thiscall
UE::Geometry::TDynamicVertexAttributeChange<float,2,UE::Geometry::FDynamicMesh3>::Apply
          (TDynamicVertexAttributeChange<float,2,UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  undefined1 local_res18 [16];
  
  uVar10 = (ulonglong)param_2 ^ 1;
  iVar3 = (&this->OldVertexAttributes)[uVar10].ArrayNum;
  pFVar9 = (&this->OldVertexAttributes)[uVar10].AllocatorInstance.Data;
  pFVar2 = pFVar9 + (longlong)iVar3 * 0xc;
  while( true ) {
    if ((&this->OldVertexAttributes)[uVar10].ArrayNum != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicVertexAttributeChange<float,2,UE::Geometry::FDynamicMesh3>::FChangeVertexAttribute_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar9 == pFVar2) break;
    uVar4 = *(uint *)(pFVar9 + 8);
    lVar5 = param_1[1]._padding_;
    if ((((int)uVar4 < 0) || (*(int *)(lVar5 + 0x20) * 0x200 + *(int *)(lVar5 + 0x24) <= (int)uVar4)
        ) || (0xfffd < (ushort)(*(short *)(*(longlong *)
                                            (*(longlong *)(lVar5 + 0x28) +
                                            (ulonglong)(uVar4 >> 9) * 8) +
                                          (ulonglong)(uVar4 & 0x1ff) * 2) - 1U))) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsVertex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                         ,0x26e,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      pFVar9 = pFVar9 + 0xc;
    }
    else {
      *(undefined4 *)
       (*(longlong *)(param_1[2]._padding_ + (ulonglong)((uVar4 & 0x7fffffff) >> 8) * 8) +
       (ulonglong)(uVar4 * 2 & 0x1ff) * 4) = *(undefined4 *)pFVar9;
      pFVar1 = pFVar9 + 4;
      pFVar9 = pFVar9 + 0xc;
      *(undefined4 *)
       (*(longlong *)(param_1[2]._padding_ + (ulonglong)((uVar4 & 0x7fffffff) >> 8) * 8) +
       (ulonglong)(uVar4 * 2 + 1 & 0x1ff) * 4) = *(undefined4 *)pFVar1;
    }
  }
  return true;
}

// Apply @ 14c9b5380

bool __thiscall
UE::Geometry::TDynamicVertexAttributeChange<float,4,UE::Geometry::FDynamicMesh3>::Apply
          (TDynamicVertexAttributeChange<float,4,UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  undefined1 local_res18 [16];
  
  uVar11 = (ulonglong)param_2 ^ 1;
  iVar4 = (&this->OldVertexAttributes)[uVar11].ArrayNum;
  pFVar10 = (&this->OldVertexAttributes)[uVar11].AllocatorInstance.Data;
  pFVar2 = pFVar10 + (longlong)iVar4 * 0x14;
  while( true ) {
    if ((&this->OldVertexAttributes)[uVar11].ArrayNum != iVar4) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicVertexAttributeChange<float,4,UE::Geometry::FDynamicMesh3>::FChangeVertexAttribute_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar10 == pFVar2) break;
    uVar5 = *(uint *)(pFVar10 + 0x10);
    lVar6 = param_1[1]._padding_;
    if ((((int)uVar5 < 0) || (*(int *)(lVar6 + 0x20) * 0x200 + *(int *)(lVar6 + 0x24) <= (int)uVar5)
        ) || (0xfffd < (ushort)(*(short *)(*(longlong *)
                                            (*(longlong *)(lVar6 + 0x28) +
                                            (ulonglong)(uVar5 >> 9) * 8) +
                                          (ulonglong)(uVar5 & 0x1ff) * 2) - 1U))) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsVertex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                         ,0x26e,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      pFVar10 = pFVar10 + 0x14;
    }
    else {
      uVar3 = uVar5 * 4;
      *(undefined4 *)
       (*(longlong *)(param_1[2]._padding_ + (ulonglong)((uVar5 & 0x3fffffff) >> 7) * 8) +
       (ulonglong)(uVar3 & 0x1ff) * 4) = *(undefined4 *)pFVar10;
      *(undefined4 *)
       (*(longlong *)(param_1[2]._padding_ + (ulonglong)((uVar5 & 0x3fffffff) >> 7) * 8) +
       (ulonglong)(uVar3 + 1 & 0x1ff) * 4) = *(undefined4 *)(pFVar10 + 4);
      *(undefined4 *)
       (*(longlong *)(param_1[2]._padding_ + (ulonglong)((uVar5 & 0x3fffffff) >> 7) * 8) +
       (ulonglong)(uVar3 + 2 & 0x1ff) * 4) = *(undefined4 *)(pFVar10 + 8);
      pFVar1 = pFVar10 + 0xc;
      pFVar10 = pFVar10 + 0x14;
      *(undefined4 *)
       (*(longlong *)(param_1[2]._padding_ + (ulonglong)((uVar5 & 0x3fffffff) >> 7) * 8) +
       (ulonglong)(uVar3 + 3 & 0x1ff) * 4) = *(undefined4 *)pFVar1;
    }
  }
  return true;
}

// SaveInitialVertex @ 14c9dee70

void __thiscall
UE::Geometry::TDynamicVertexAttributeChange<float,2,UE::Geometry::FDynamicMesh3>::SaveInitialVertex
          (TDynamicVertexAttributeChange<float,2,UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (this->OldVertexAttributes).ArrayNum;
  piVar1 = &(this->OldVertexAttributes).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(this->OldVertexAttributes).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->OldVertexAttributes).AllocatorInstance.Data;
  (this->OldVertexAttributes).ArrayNum = iVar3 + 1;
  lVar4 = (longlong)iVar3;
  *(undefined8 *)(pFVar2 + lVar4 * 0xc) = 0;
  *(int *)(pFVar2 + lVar4 * 0xc + 8) = param_2;
  *(undefined4 *)(pFVar2 + lVar4 * 0xc) =
       *(undefined4 *)
        (*(longlong *)(param_1[2]._padding_ + (ulonglong)((param_2 & 0x7fffffffU) >> 8) * 8) +
        (ulonglong)(param_2 * 2 & 0x1ff) * 4);
  *(undefined4 *)(pFVar2 + lVar4 * 0xc + 4) =
       *(undefined4 *)
        (*(longlong *)(param_1[2]._padding_ + (ulonglong)((param_2 & 0x7fffffffU) >> 8) * 8) +
        (ulonglong)(param_2 * 2 + 1U & 0x1ff) * 4);
  return;
}

// SaveInitialVertex @ 14c9def20

void __thiscall
UE::Geometry::TDynamicVertexAttributeChange<float,4,UE::Geometry::FDynamicMesh3>::SaveInitialVertex
          (TDynamicVertexAttributeChange<float,4,UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  iVar3 = (this->OldVertexAttributes).ArrayNum;
  piVar1 = &(this->OldVertexAttributes).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x414,&(this->OldVertexAttributes).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->OldVertexAttributes).AllocatorInstance.Data;
  (this->OldVertexAttributes).ArrayNum = iVar3 + 1;
  uVar5 = param_2 * 4;
  lVar4 = (longlong)iVar3;
  *(undefined8 *)(pFVar2 + lVar4 * 0x14) = 0;
  *(undefined8 *)(pFVar2 + lVar4 * 0x14 + 8) = 0;
  *(int *)(pFVar2 + lVar4 * 0x14 + 0x10) = param_2;
  *(undefined4 *)(pFVar2 + lVar4 * 0x14) =
       *(undefined4 *)
        (*(longlong *)(param_1[2]._padding_ + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
        (ulonglong)(uVar5 & 0x1ff) * 4);
  *(undefined4 *)(pFVar2 + lVar4 * 0x14 + 4) =
       *(undefined4 *)
        (*(longlong *)(param_1[2]._padding_ + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
        (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
  *(undefined4 *)(pFVar2 + lVar4 * 0x14 + 8) =
       *(undefined4 *)
        (*(longlong *)(param_1[2]._padding_ + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
        (ulonglong)(uVar5 + 2 & 0x1ff) * 4);
  *(undefined4 *)(pFVar2 + lVar4 * 0x14 + 0xc) =
       *(undefined4 *)
        (*(longlong *)(param_1[2]._padding_ + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
        (ulonglong)(uVar5 + 3 & 0x1ff) * 4);
  return;
}

// StoreAllFinalVertices @ 14c9e8a00

void __thiscall
UE::Geometry::TDynamicVertexAttributeChange<float,2,UE::Geometry::FDynamicMesh3>::
StoreAllFinalVertices
          (TDynamicVertexAttributeChange<float,2,UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2)

{
  TArray<UE::Geometry::TDynamicVertexAttributeChange<float,2,UE::Geometry::FDynamicMesh3>::FChangeVertexAttribute,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
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
  
  iVar10 = (this->NewVertexAttributes).ArrayNum;
  pTVar1 = &this->NewVertexAttributes;
  uVar13 = (iVar10 - *(int *)&(param_2->Elements).field_0x34) +
           *(int *)&(param_2->Elements).field_0x8;
  local_res10 = param_1;
  local_res18 = param_2;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar2 = &(this->NewVertexAttributes).ArrayMax;
  if (*piVar2 < (int)uVar13) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar13,&pTVar1->AllocatorInstance,iVar10,piVar2);
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
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14c9e8aef;
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
    iVar9 = local_res20 + -1 + iVar16;
    if (iVar10 < iVar9) {
      iVar9 = iVar10;
    }
  }
LAB_14c9e8aef:
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
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar7 = local_res18;
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
      goto LAB_14c9e8c00;
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
LAB_14c9e8c00:
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
    iVar10 = (this->NewVertexAttributes).ArrayNum;
    if (iVar10 == *piVar2) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&pTVar1->AllocatorInstance,piVar2);
    }
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    (this->NewVertexAttributes).ArrayNum = iVar10 + 1;
    lVar11 = (longlong)iVar10;
    *(undefined8 *)(pFVar5 + lVar11 * 0xc) = 0;
    *(uint *)(pFVar5 + lVar11 * 0xc + 8) = uVar13;
    *(undefined4 *)(pFVar5 + lVar11 * 0xc) =
         *(undefined4 *)
          (*(longlong *)(local_res10[2]._padding_ + (ulonglong)((uVar13 & 0x7fffffff) >> 8) * 8) +
          (ulonglong)(uVar13 * 2 & 0x1ff) * 4);
    *(undefined4 *)(pFVar5 + lVar11 * 0xc + 4) =
         *(undefined4 *)
          (*(longlong *)(local_res10[2]._padding_ + (ulonglong)((uVar13 & 0x7fffffff) >> 8) * 8) +
          (ulonglong)(uVar13 * 2 + 1 & 0x1ff) * 4);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// StoreAllFinalVertices @ 14c9e8d10

void __thiscall
UE::Geometry::TDynamicVertexAttributeChange<float,4,UE::Geometry::FDynamicMesh3>::
StoreAllFinalVertices
          (TDynamicVertexAttributeChange<float,4,UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2)

{
  TArray<UE::Geometry::TDynamicVertexAttributeChange<float,4,UE::Geometry::FDynamicMesh3>::FChangeVertexAttribute,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *local_res10;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_res18;
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar10 = (this->NewVertexAttributes).ArrayNum;
  pTVar1 = &this->NewVertexAttributes;
  uVar14 = (iVar10 - *(int *)&(param_2->Elements).field_0x34) +
           *(int *)&(param_2->Elements).field_0x8;
  local_res10 = param_1;
  local_res18 = param_2;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  piVar2 = &(this->NewVertexAttributes).ArrayMax;
  if (*piVar2 < (int)uVar14) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,uVar14,&pTVar1->AllocatorInstance,iVar10,piVar2);
  }
  iVar10 = *(int *)&(param_2->Elements).field_0x28;
  puVar3 = &(param_2->Elements).field_0x10;
  iVar15 = 0;
  iVar17 = 0;
  uVar14 = 1;
  iVar9 = 0;
  if (iVar10 != 0) {
    puVar18 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar3;
    }
    uVar13 = *puVar18;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar9 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14c9e8dfe;
      uVar13 = puVar18[lVar11 + 1];
    }
    uVar14 = -uVar13 & uVar13;
    uVar4 = (ulonglong)uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar9 = local_res20 + -1 + iVar17;
    if (iVar10 < iVar9) {
      iVar9 = iVar10;
    }
  }
LAB_14c9e8dfe:
  uVar13 = *(uint *)&(param_2->Elements).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar14,iVar15);
  TStack_70.CurrentBitIndex = iVar9;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar13 >> 5;
  TStack_70._28_4_ = iVar9;
  TStack_70.BaseBitIndex = iVar17;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(param_2->Elements).field_0x8 -
                       *(int *)&(param_2->Elements).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar13 < 0) || (iVar10 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar7 = local_res18;
  uVar14 = *(uint *)&(param_2->Elements).field_0x28;
  if (uVar13 != uVar14) {
    puVar16 = *(undefined1 **)&(param_2->Elements).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar3;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar15;
      uVar12 = uVar12 + 0x20;
      iVar15 = iVar15 + 1;
      uVar13 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14c9e8f10;
      uVar13 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar14 < (int)uVar13) {
      uVar13 = uVar14;
    }
  }
LAB_14c9e8f10:
  while( true ) {
    if (*(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar13) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (param_2 == pTVar7))
    break;
    uVar14 = *(uint *)(*(longlong *)&param_2->Elements + (longlong)TStack_70.CurrentBitIndex * 0xc);
    iVar10 = (this->NewVertexAttributes).ArrayNum;
    if (iVar10 == *piVar2) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x414,&pTVar1->AllocatorInstance,piVar2);
    }
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    (this->NewVertexAttributes).ArrayNum = iVar10 + 1;
    uVar12 = uVar14 * 4;
    lVar11 = (longlong)iVar10;
    *(undefined8 *)(pFVar5 + lVar11 * 0x14) = 0;
    *(undefined8 *)(pFVar5 + lVar11 * 0x14 + 8) = 0;
    *(uint *)(pFVar5 + lVar11 * 0x14 + 0x10) = uVar14;
    *(undefined4 *)(pFVar5 + lVar11 * 0x14) =
         *(undefined4 *)
          (*(longlong *)(local_res10[2]._padding_ + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
          (ulonglong)(uVar12 & 0x1ff) * 4);
    *(undefined4 *)(pFVar5 + lVar11 * 0x14 + 4) =
         *(undefined4 *)
          (*(longlong *)(local_res10[2]._padding_ + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
          (ulonglong)(uVar12 + 1 & 0x1ff) * 4);
    *(undefined4 *)(pFVar5 + lVar11 * 0x14 + 8) =
         *(undefined4 *)
          (*(longlong *)(local_res10[2]._padding_ + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
          (ulonglong)(uVar12 + 2 & 0x1ff) * 4);
    *(undefined4 *)(pFVar5 + lVar11 * 0x14 + 0xc) =
         *(undefined4 *)
          (*(longlong *)(local_res10[2]._padding_ + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
          (ulonglong)(uVar12 + 3 & 0x1ff) * 4);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

