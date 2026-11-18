// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 12

// ~TDynamicVertexAttributeChange<float,1,UE::Geometry::FDynamicMesh3> @ 143453520

void __thiscall
UE::Geometry::TDynamicVertexAttributeChange<float,1,UE::Geometry::FDynamicMesh3>::
~TDynamicVertexAttributeChange<float,1,UE::Geometry::FDynamicMesh3>
          (TDynamicVertexAttributeChange<float,1,UE::Geometry::FDynamicMesh3> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)
       &___7__TDynamicVertexAttributeChange_M_00VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
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

// ~TDynamicVertexAttributeChange<float,3,UE::Geometry::FDynamicMesh3> @ 143453570

void __thiscall
UE::Geometry::TDynamicVertexAttributeChange<float,3,UE::Geometry::FDynamicMesh3>::
~TDynamicVertexAttributeChange<float,3,UE::Geometry::FDynamicMesh3>
          (TDynamicVertexAttributeChange<float,3,UE::Geometry::FDynamicMesh3> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)
       &___7__TDynamicVertexAttributeChange_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
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

// ~TDynamicVertexAttributeChange<double,3,UE::Geometry::FDynamicMesh3> @ 1434535c0

void __thiscall
UE::Geometry::TDynamicVertexAttributeChange<double,3,UE::Geometry::FDynamicMesh3>::
~TDynamicVertexAttributeChange<double,3,UE::Geometry::FDynamicMesh3>
          (TDynamicVertexAttributeChange<double,3,UE::Geometry::FDynamicMesh3> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)
       &___7__TDynamicVertexAttributeChange_N_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
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

// Apply @ 143470960

bool __thiscall
UE::Geometry::TDynamicVertexAttributeChange<float,1,UE::Geometry::FDynamicMesh3>::Apply
          (TDynamicVertexAttributeChange<float,1,UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  undefined1 local_res18 [16];
  
  uVar10 = (ulonglong)param_2 ^ 1;
  pFVar9 = (&this->OldVertexAttributes)[uVar10].AllocatorInstance.Data;
  iVar2 = (&this->OldVertexAttributes)[uVar10].ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
LAB_1434709a0:
  do {
    if ((&this->OldVertexAttributes)[uVar10].ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicVertexAttributeChange<float,1,UE::Geometry::FDynamicMesh3>::FChangeVertexAttribute_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar9 == pFVar1) {
      return true;
    }
    uVar3 = *(uint *)(pFVar9 + 4);
    lVar5 = param_1[1]._padding_;
    if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(lVar5 + 0x20) * 0x200 + *(int *)(lVar5 + 0x24)))
    {
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar3 >> 9) * 8) +
                             (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe) {
        uVar4 = *(undefined4 *)pFVar9;
        pFVar9 = pFVar9 + 8;
        *(undefined4 *)
         (*(longlong *)(param_1[2]._padding_ + (ulonglong)(uVar3 >> 9) * 8) +
         (ulonglong)(uVar3 & 0x1ff) * 4) = uVar4;
        goto LAB_1434709a0;
      }
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsVertex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                       ,0x26e,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// Apply @ 143470a60

bool __thiscall
UE::Geometry::TDynamicVertexAttributeChange<float,3,UE::Geometry::FDynamicMesh3>::Apply
          (TDynamicVertexAttributeChange<float,3,UE::Geometry::FDynamicMesh3> *this,
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
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  undefined1 local_res18 [16];
  
  uVar10 = (ulonglong)param_2 ^ 1;
  iVar2 = (&this->OldVertexAttributes)[uVar10].ArrayNum;
  pFVar8 = (&this->OldVertexAttributes)[uVar10].AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((&this->OldVertexAttributes)[uVar10].ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicVertexAttributeChange<float,3,UE::Geometry::FDynamicMesh3>::FChangeVertexAttribute_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar8 == pFVar9) break;
    uVar3 = *(uint *)(pFVar8 + 0xc);
    lVar4 = param_1[1]._padding_;
    if ((((int)uVar3 < 0) || (*(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24) <= (int)uVar3)
        ) || (0xfffd < (ushort)(*(short *)(*(longlong *)
                                            (*(longlong *)(lVar4 + 0x28) +
                                            (ulonglong)(uVar3 >> 9) * 8) +
                                          (ulonglong)(uVar3 & 0x1ff) * 2) - 1U))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsVertex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                         ,0x26e,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar8 = pFVar8 + 0x10;
    }
    else {
      uVar3 = uVar3 * 3;
      *(undefined4 *)
       (*(longlong *)(param_1[2]._padding_ + (ulonglong)(uVar3 >> 9) * 8) +
       (ulonglong)(uVar3 & 0x1ff) * 4) = *(undefined4 *)pFVar8;
      *(undefined4 *)
       (*(longlong *)(param_1[2]._padding_ + (ulonglong)(uVar3 + 1 >> 9) * 8) +
       (ulonglong)(uVar3 + 1 & 0x1ff) * 4) = *(undefined4 *)(pFVar8 + 4);
      pFVar1 = pFVar8 + 8;
      pFVar8 = pFVar8 + 0x10;
      *(undefined4 *)
       (*(longlong *)(param_1[2]._padding_ + (ulonglong)(uVar3 + 2 >> 9) * 8) +
       (ulonglong)(uVar3 + 2 & 0x1ff) * 4) = *(undefined4 *)pFVar1;
    }
  }
  return true;
}

// Apply @ 143470bc0

bool __thiscall
UE::Geometry::TDynamicVertexAttributeChange<double,3,UE::Geometry::FDynamicMesh3>::Apply
          (TDynamicVertexAttributeChange<double,3,UE::Geometry::FDynamicMesh3> *this,
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
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  undefined1 local_res18 [16];
  
  uVar10 = (ulonglong)param_2 ^ 1;
  iVar2 = (&this->OldVertexAttributes)[uVar10].ArrayNum;
  pFVar8 = (&this->OldVertexAttributes)[uVar10].AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar2 * 0x20;
  while( true ) {
    if ((&this->OldVertexAttributes)[uVar10].ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicVertexAttributeChange<double,3,UE::Geometry::FDynamicMesh3>::FChangeVertexAttribute_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar8 == pFVar9) break;
    uVar3 = *(uint *)(pFVar8 + 0x18);
    lVar4 = param_1[1]._padding_;
    if ((((int)uVar3 < 0) || (*(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24) <= (int)uVar3)
        ) || (0xfffd < (ushort)(*(short *)(*(longlong *)
                                            (*(longlong *)(lVar4 + 0x28) +
                                            (ulonglong)(uVar3 >> 9) * 8) +
                                          (ulonglong)(uVar3 & 0x1ff) * 2) - 1U))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsVertex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                         ,0x26e,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar8 = pFVar8 + 0x20;
    }
    else {
      uVar3 = uVar3 * 3;
      *(undefined8 *)
       (*(longlong *)(param_1[2]._padding_ + (ulonglong)(uVar3 >> 9) * 8) +
       (ulonglong)(uVar3 & 0x1ff) * 8) = *(undefined8 *)pFVar8;
      *(undefined8 *)
       (*(longlong *)(param_1[2]._padding_ + (ulonglong)(uVar3 + 1 >> 9) * 8) +
       (ulonglong)(uVar3 + 1 & 0x1ff) * 8) = *(undefined8 *)(pFVar8 + 8);
      pFVar1 = pFVar8 + 0x10;
      pFVar8 = pFVar8 + 0x20;
      *(undefined8 *)
       (*(longlong *)(param_1[2]._padding_ + (ulonglong)(uVar3 + 2 >> 9) * 8) +
       (ulonglong)(uVar3 + 2 & 0x1ff) * 8) = *(undefined8 *)pFVar1;
    }
  }
  return true;
}

// SaveInitialVertex @ 14351e4d0

void __thiscall
UE::Geometry::TDynamicVertexAttributeChange<float,1,UE::Geometry::FDynamicMesh3>::SaveInitialVertex
          (TDynamicVertexAttributeChange<float,1,UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = (this->OldVertexAttributes).ArrayNum;
  if (iVar2 == (this->OldVertexAttributes).ArrayMax) {
    iVar2 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(this->OldVertexAttributes).AllocatorInstance,
                       &(this->OldVertexAttributes).ArrayMax);
  }
  pFVar1 = (this->OldVertexAttributes).AllocatorInstance.Data;
  (this->OldVertexAttributes).ArrayNum = iVar2 + 1;
  lVar3 = (longlong)iVar2;
  *(undefined8 *)(pFVar1 + lVar3 * 8) = 0;
  *(int *)(pFVar1 + lVar3 * 8 + 4) = param_2;
  *(undefined4 *)(pFVar1 + lVar3 * 8) =
       *(undefined4 *)
        (*(longlong *)(param_1[2]._padding_ + (ulonglong)((uint)param_2 >> 9) * 8) +
        (ulonglong)(param_2 & 0x1ff) * 4);
  return;
}

// SaveInitialVertex @ 14351e550

void __thiscall
UE::Geometry::TDynamicVertexAttributeChange<float,3,UE::Geometry::FDynamicMesh3>::SaveInitialVertex
          (TDynamicVertexAttributeChange<float,3,UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = (this->OldVertexAttributes).ArrayNum;
  piVar1 = &(this->OldVertexAttributes).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->OldVertexAttributes).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->OldVertexAttributes).AllocatorInstance.Data;
  (this->OldVertexAttributes).ArrayNum = iVar4 + 1;
  uVar3 = param_2 * 3;
  lVar5 = (longlong)iVar4;
  *(undefined8 *)(pFVar2 + lVar5 * 0x10) = 0;
  *(undefined8 *)(pFVar2 + lVar5 * 0x10 + 8) = 0;
  *(int *)(pFVar2 + lVar5 * 0x10 + 0xc) = param_2;
  *(undefined4 *)(pFVar2 + lVar5 * 0x10) =
       *(undefined4 *)
        (*(longlong *)(param_1[2]._padding_ + (ulonglong)(uVar3 >> 9) * 8) +
        (ulonglong)(uVar3 & 0x1ff) * 4);
  *(undefined4 *)(pFVar2 + lVar5 * 0x10 + 4) =
       *(undefined4 *)
        (*(longlong *)(param_1[2]._padding_ + (ulonglong)(uVar3 + 1 >> 9) * 8) +
        (ulonglong)(uVar3 + 1 & 0x1ff) * 4);
  *(undefined4 *)(pFVar2 + lVar5 * 0x10 + 8) =
       *(undefined4 *)
        (*(longlong *)(param_1[2]._padding_ + (ulonglong)(uVar3 + 2 >> 9) * 8) +
        (ulonglong)(uVar3 + 2 & 0x1ff) * 4);
  return;
}

// SaveInitialVertex @ 14351e620

void __thiscall
UE::Geometry::TDynamicVertexAttributeChange<double,3,UE::Geometry::FDynamicMesh3>::SaveInitialVertex
          (TDynamicVertexAttributeChange<double,3,UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = (this->OldVertexAttributes).ArrayNum;
  piVar1 = &(this->OldVertexAttributes).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->OldVertexAttributes).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->OldVertexAttributes).AllocatorInstance.Data;
  (this->OldVertexAttributes).ArrayNum = iVar4 + 1;
  uVar3 = param_2 * 3;
  lVar5 = (longlong)iVar4 * 0x20;
  *(undefined8 *)(pFVar2 + lVar5) = 0;
  *(undefined8 *)(pFVar2 + lVar5 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar5 + 0x10) = 0;
  *(undefined8 *)(pFVar2 + lVar5 + 0x10 + 8) = 0;
  *(int *)(pFVar2 + lVar5 + 0x18) = param_2;
  *(undefined8 *)(pFVar2 + lVar5) =
       *(undefined8 *)
        (*(longlong *)(param_1[2]._padding_ + (ulonglong)(uVar3 >> 9) * 8) +
        (ulonglong)(uVar3 & 0x1ff) * 8);
  *(undefined8 *)(pFVar2 + lVar5 + 8) =
       *(undefined8 *)
        (*(longlong *)(param_1[2]._padding_ + (ulonglong)(uVar3 + 1 >> 9) * 8) +
        (ulonglong)(uVar3 + 1 & 0x1ff) * 8);
  *(undefined8 *)(pFVar2 + lVar5 + 0x10) =
       *(undefined8 *)
        (*(longlong *)(param_1[2]._padding_ + (ulonglong)(uVar3 + 2 >> 9) * 8) +
        (ulonglong)(uVar3 + 2 & 0x1ff) * 8);
  return;
}

// StoreAllFinalVertices @ 14354dbd0

void __thiscall
UE::Geometry::TDynamicVertexAttributeChange<float,1,UE::Geometry::FDynamicMesh3>::
StoreAllFinalVertices
          (TDynamicVertexAttributeChange<float,1,UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2)

{
  TArray<UE::Geometry::TDynamicVertexAttributeChange<float,1,UE::Geometry::FDynamicMesh3>::FChangeVertexAttribute,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *pTVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *local_res10;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_res18;
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar11 = (this->NewVertexAttributes).ArrayNum;
  pTVar1 = &this->NewVertexAttributes;
  uVar14 = (iVar11 - *(int *)&(param_2->Elements).field_0x34) +
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
              (8,4,uVar14,&pTVar1->AllocatorInstance,iVar11,piVar2);
  }
  iVar11 = *(int *)&(param_2->Elements).field_0x28;
  puVar3 = &(param_2->Elements).field_0x10;
  iVar15 = 0;
  uVar14 = 1;
  iVar17 = 0;
  iVar10 = 0;
  if (iVar11 != 0) {
    puVar18 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar3;
    }
    uVar13 = *puVar18;
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar10 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14354dcbf;
      uVar13 = puVar18[lVar12 + 1];
    }
    uVar14 = -uVar13 & uVar13;
    uVar4 = (ulonglong)uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    iVar10 = local_res20 + -1 + iVar17;
    if (iVar11 < iVar10) {
      iVar10 = iVar11;
    }
  }
LAB_14354dcbf:
  uVar13 = *(uint *)&(param_2->Elements).field_0x28;
  uVar19 = uVar13 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar14,iVar15);
  TStack_70.CurrentBitIndex = iVar10;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar13 >> 5;
  TStack_70._28_4_ = iVar10;
  TStack_70.BaseBitIndex = iVar17;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(param_2->Elements).field_0x8 -
                       *(int *)&(param_2->Elements).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar13 < 0) || (iVar11 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar8 = local_res18;
  pTVar7 = local_res10;
  uVar14 = *(uint *)&(param_2->Elements).field_0x28;
  if (uVar13 != uVar14) {
    puVar16 = *(undefined1 **)&(param_2->Elements).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar3;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar15;
      uVar19 = uVar19 + 0x20;
      iVar15 = iVar15 + 1;
      uVar13 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14354ddd0;
      uVar13 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar13 = (int)lVar12 + -1 + uVar19;
    if ((int)uVar14 < (int)uVar13) {
      uVar13 = uVar14;
    }
  }
LAB_14354ddd0:
  while( true ) {
    if (*(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar13) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (param_2 == pTVar8))
    break;
    uVar14 = *(uint *)(*(longlong *)&param_2->Elements + (longlong)TStack_70.CurrentBitIndex * 0xc);
    iVar11 = (this->NewVertexAttributes).ArrayNum;
    if (iVar11 == *piVar2) {
      iVar11 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&pTVar1->AllocatorInstance,piVar2);
    }
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    (this->NewVertexAttributes).ArrayNum = iVar11 + 1;
    lVar12 = (longlong)iVar11;
    *(undefined8 *)(pFVar5 + lVar12 * 8) = 0;
    *(uint *)(pFVar5 + lVar12 * 8 + 4) = uVar14;
    *(undefined4 *)(pFVar5 + lVar12 * 8) =
         *(undefined4 *)
          (*(longlong *)(pTVar7[2]._padding_ + (ulonglong)(uVar14 >> 9) * 8) +
          (ulonglong)(uVar14 & 0x1ff) * 4);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// StoreAllFinalVertices @ 14354deb0

void __thiscall
UE::Geometry::TDynamicVertexAttributeChange<float,3,UE::Geometry::FDynamicMesh3>::
StoreAllFinalVertices
          (TDynamicVertexAttributeChange<float,3,UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2)

{
  TArray<UE::Geometry::TDynamicVertexAttributeChange<float,3,UE::Geometry::FDynamicMesh3>::FChangeVertexAttribute,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
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
  
  iVar5 = (this->NewVertexAttributes).ArrayNum;
  pTVar1 = &this->NewVertexAttributes;
  uVar14 = (iVar5 - *(int *)&(param_2->Elements).field_0x34) +
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
              (0x10,4,uVar14,&pTVar1->AllocatorInstance,iVar5,piVar2);
  }
  iVar5 = *(int *)&(param_2->Elements).field_0x28;
  puVar3 = &(param_2->Elements).field_0x10;
  iVar15 = 0;
  uVar14 = 1;
  iVar17 = 0;
  iVar10 = 0;
  if (iVar5 != 0) {
    puVar18 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar3;
    }
    uVar13 = *puVar18;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar10 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14354df9e;
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
    iVar10 = local_res20 + -1 + iVar17;
    if (iVar5 < iVar10) {
      iVar10 = iVar5;
    }
  }
LAB_14354df9e:
  uVar13 = *(uint *)&(param_2->Elements).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar14,iVar15);
  TStack_70.CurrentBitIndex = iVar10;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar13 >> 5;
  TStack_70._28_4_ = iVar10;
  TStack_70.BaseBitIndex = iVar17;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(param_2->Elements).field_0x8 -
                       *(int *)&(param_2->Elements).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar8 = local_res18;
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
      goto LAB_14354e0b0;
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
LAB_14354e0b0:
  while( true ) {
    if (*(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar13) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (param_2 == pTVar8))
    break;
    iVar5 = *(int *)(*(longlong *)&param_2->Elements + (longlong)TStack_70.CurrentBitIndex * 0xc);
    iVar15 = (this->NewVertexAttributes).ArrayNum;
    if (iVar15 == *piVar2) {
      iVar15 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,&pTVar1->AllocatorInstance,piVar2);
    }
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    uVar14 = iVar5 * 3;
    (this->NewVertexAttributes).ArrayNum = iVar15 + 1;
    lVar11 = (longlong)iVar15;
    *(undefined8 *)(pFVar6 + lVar11 * 0x10) = 0;
    *(undefined8 *)(pFVar6 + lVar11 * 0x10 + 8) = 0;
    *(int *)(pFVar6 + lVar11 * 0x10 + 0xc) = iVar5;
    *(undefined4 *)(pFVar6 + lVar11 * 0x10) =
         *(undefined4 *)
          (*(longlong *)(local_res10[2]._padding_ + (ulonglong)(uVar14 >> 9) * 8) +
          (ulonglong)(uVar14 & 0x1ff) * 4);
    *(undefined4 *)(pFVar6 + lVar11 * 0x10 + 4) =
         *(undefined4 *)
          (*(longlong *)(local_res10[2]._padding_ + (ulonglong)(uVar14 + 1 >> 9) * 8) +
          (ulonglong)(uVar14 + 1 & 0x1ff) * 4);
    *(undefined4 *)(pFVar6 + lVar11 * 0x10 + 8) =
         *(undefined4 *)
          (*(longlong *)(local_res10[2]._padding_ + (ulonglong)(uVar14 + 2 >> 9) * 8) +
          (ulonglong)(uVar14 + 2 & 0x1ff) * 4);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// StoreAllFinalVertices @ 14354e1e0

void __thiscall
UE::Geometry::TDynamicVertexAttributeChange<double,3,UE::Geometry::FDynamicMesh3>::
StoreAllFinalVertices
          (TDynamicVertexAttributeChange<double,3,UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2)

{
  TArray<UE::Geometry::TDynamicVertexAttributeChange<double,3,UE::Geometry::FDynamicMesh3>::FChangeVertexAttribute,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
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
  
  iVar5 = (this->NewVertexAttributes).ArrayNum;
  pTVar1 = &this->NewVertexAttributes;
  uVar14 = (iVar5 - *(int *)&(param_2->Elements).field_0x34) +
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
              (0x20,8,uVar14,&pTVar1->AllocatorInstance,iVar5,piVar2);
  }
  iVar5 = *(int *)&(param_2->Elements).field_0x28;
  puVar3 = &(param_2->Elements).field_0x10;
  iVar15 = 0;
  uVar14 = 1;
  iVar17 = 0;
  iVar10 = 0;
  if (iVar5 != 0) {
    puVar18 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar3;
    }
    uVar13 = *puVar18;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar10 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14354e2ce;
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
    iVar10 = local_res20 + -1 + iVar17;
    if (iVar5 < iVar10) {
      iVar10 = iVar5;
    }
  }
LAB_14354e2ce:
  uVar13 = *(uint *)&(param_2->Elements).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar14,iVar15);
  TStack_70.CurrentBitIndex = iVar10;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar13 >> 5;
  TStack_70._28_4_ = iVar10;
  TStack_70.BaseBitIndex = iVar17;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(param_2->Elements).field_0x8 -
                       *(int *)&(param_2->Elements).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar8 = local_res18;
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
      goto LAB_14354e3e0;
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
LAB_14354e3e0:
  while( true ) {
    if (*(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar13) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (param_2 == pTVar8))
    break;
    iVar5 = *(int *)(*(longlong *)&param_2->Elements + (longlong)TStack_70.CurrentBitIndex * 0xc);
    iVar15 = (this->NewVertexAttributes).ArrayNum;
    if (iVar15 == *piVar2) {
      iVar15 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar1->AllocatorInstance,piVar2);
    }
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    uVar14 = iVar5 * 3;
    (this->NewVertexAttributes).ArrayNum = iVar15 + 1;
    lVar11 = (longlong)iVar15 * 0x20;
    *(undefined8 *)(pFVar6 + lVar11) = 0;
    *(undefined8 *)(pFVar6 + lVar11 + 8) = 0;
    *(undefined8 *)(pFVar6 + lVar11 + 0x10) = 0;
    *(undefined8 *)(pFVar6 + lVar11 + 0x10 + 8) = 0;
    *(int *)(pFVar6 + lVar11 + 0x18) = iVar5;
    *(undefined8 *)(pFVar6 + lVar11) =
         *(undefined8 *)
          (*(longlong *)(local_res10[2]._padding_ + (ulonglong)(uVar14 >> 9) * 8) +
          (ulonglong)(uVar14 & 0x1ff) * 8);
    *(undefined8 *)(pFVar6 + lVar11 + 8) =
         *(undefined8 *)
          (*(longlong *)(local_res10[2]._padding_ + (ulonglong)(uVar14 + 1 >> 9) * 8) +
          (ulonglong)(uVar14 + 1 & 0x1ff) * 8);
    *(undefined8 *)(pFVar6 + lVar11 + 0x10) =
         *(undefined8 *)
          (*(longlong *)(local_res10[2]._padding_ + (ulonglong)(uVar14 + 2 >> 9) * 8) +
          (ulonglong)(uVar14 + 2 & 0x1ff) * 8);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

