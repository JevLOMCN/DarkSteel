// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 4

// ~FDynamicMeshTriangleAttributeChange<bool,1> @ 14c9a8ba0

void __thiscall
UE::Geometry::FDynamicMeshTriangleAttributeChange<bool,1>::
~FDynamicMeshTriangleAttributeChange<bool,1>(FDynamicMeshTriangleAttributeChange<bool,1> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__FDynamicMeshTriangleAttributeChange__N_00_Geometry_UE__6B_;
  pFVar1 = (this->NewTriangleAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldTriangleAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeChangeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  return;
}

// Apply @ 14c9b5160

bool __thiscall
UE::Geometry::FDynamicMeshTriangleAttributeChange<bool,1>::Apply
          (FDynamicMeshTriangleAttributeChange<bool,1> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  undefined1 local_res18 [8];
  
  uVar7 = (ulonglong)param_2 ^ 1;
  pFVar6 = (&this->OldTriangleAttributes)[uVar7].AllocatorInstance.Data;
  iVar3 = (&this->OldTriangleAttributes)[uVar7].ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if ((&this->OldTriangleAttributes)[uVar7].ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::Geometry::FDynamicMeshTriangleAttributeChange<bool,1>::FChangeTriangleAttribute_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar6 == pFVar1) break;
    uVar4 = *(uint *)(pFVar6 + 4);
    lVar5 = param_1[1]._padding_;
    if (((-1 < (int)uVar4) &&
        ((int)uVar4 < *(int *)(lVar5 + 0x140) * 0x200 + *(int *)(lVar5 + 0x144))) &&
       (lVar2 = (ulonglong)(uVar4 >> 9) * 8,
       (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar5 + 0x148) + lVar2) +
                          (ulonglong)(uVar4 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      *(FScriptContainerElement *)
       ((ulonglong)(uVar4 & 0x1ff) + *(longlong *)(param_1[2]._padding_ + lVar2)) = *pFVar6;
    }
    pFVar6 = pFVar6 + 8;
  }
  return true;
}

// SaveInitialTriangle @ 14c9dedf0

void __thiscall
UE::Geometry::FDynamicMeshTriangleAttributeChange<bool,1>::SaveInitialTriangle
          (FDynamicMeshTriangleAttributeChange<bool,1> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  iVar2 = (this->OldTriangleAttributes).ArrayNum;
  if (iVar2 == (this->OldTriangleAttributes).ArrayMax) {
    iVar2 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(this->OldTriangleAttributes).AllocatorInstance,
                       &(this->OldTriangleAttributes).ArrayMax);
  }
  (this->OldTriangleAttributes).ArrayNum = iVar2 + 1;
  pFVar1 = (this->OldTriangleAttributes).AllocatorInstance.Data + (longlong)iVar2 * 8;
  *(undefined8 *)pFVar1 = 0;
  *(int *)(pFVar1 + 4) = param_2;
  *pFVar1 = *(FScriptContainerElement *)
             ((ulonglong)(param_2 & 0x1ff) +
             *(longlong *)(param_1[2]._padding_ + (ulonglong)((uint)param_2 >> 9) * 8));
  return;
}

// StoreAllFinalTriangles @ 14c9e88f0

void __thiscall
UE::Geometry::FDynamicMeshTriangleAttributeChange<bool,1>::StoreAllFinalTriangles
          (FDynamicMeshTriangleAttributeChange<bool,1> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<UE::Geometry::FDynamicMeshTriangleAttributeChange<bool,1>::FChangeTriangleAttribute,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  iVar5 = (this->NewTriangleAttributes).ArrayNum;
  pTVar1 = &this->NewTriangleAttributes;
  uVar8 = param_2->ArrayNum + iVar5;
  if (-1 < (int)uVar8) {
    piVar2 = &(this->NewTriangleAttributes).ArrayMax;
    if (*piVar2 < (int)uVar8) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar8,&pTVar1->AllocatorInstance,iVar5,piVar2);
    }
    pFVar7 = (param_2->AllocatorInstance).Data;
    iVar5 = param_2->ArrayNum;
    pFVar3 = pFVar7 + (longlong)iVar5 * 4;
    while( true ) {
      if (param_2->ArrayNum != iVar5) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar7 == pFVar3) break;
      iVar6 = (this->NewTriangleAttributes).ArrayNum;
      uVar8 = *(uint *)pFVar7;
      if (iVar6 == *piVar2) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->NewTriangleAttributes).ArrayNum = iVar6 + 1;
      pFVar4 = (pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8;
      *(undefined8 *)pFVar4 = 0;
      *(uint *)(pFVar4 + 4) = uVar8;
      pFVar7 = pFVar7 + 4;
      *pFVar4 = *(FScriptContainerElement *)
                 ((ulonglong)(uVar8 & 0x1ff) +
                 *(longlong *)(param_1[2]._padding_ + (ulonglong)(uVar8 >> 9) * 8));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
}

