// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 19

// ~TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> @ 143452cd0

void __thiscall
UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::
~TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>
          (TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeSetBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  pFVar1 = (this->RegisteredAttributes).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// CheckValidity @ 143478350

bool __thiscall
UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::CheckValidity
          (TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *this,bool param_1,
          EValidityCheckFailMode param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->RegisteredAttributes).AllocatorInstance.Data;
  iVar2 = (this->RegisteredAttributes).ArrayNum;
  bVar3 = true;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RegisteredAttributes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    cVar4 = (**(code **)(**(longlong **)pFVar5 + 0x80))(*(longlong **)pFVar5,param_1,param_2);
    if ((cVar4 == '\0') || (!bVar3)) {
      bVar3 = false;
      pFVar5 = pFVar5 + 8;
    }
    else {
      bVar3 = true;
      pFVar5 = pFVar5 + 8;
    }
  }
  return bVar3;
}

// OnCollapseEdge @ 1434fb9b0

void __thiscall
UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::OnCollapseEdge
          (TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *this,FEdgeCollapseInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->RegisteredAttributes).AllocatorInstance.Data;
  iVar2 = (this->RegisteredAttributes).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RegisteredAttributes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0xa0))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// OnFlipEdge @ 143500a10

void __thiscall
UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::OnFlipEdge
          (TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *this,FEdgeFlipInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->RegisteredAttributes).AllocatorInstance.Data;
  iVar2 = (this->RegisteredAttributes).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RegisteredAttributes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x98))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// OnMergeEdges @ 143504620

void __thiscall
UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::OnMergeEdges
          (TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *this,FMergeEdgesInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->RegisteredAttributes).AllocatorInstance.Data;
  iVar2 = (this->RegisteredAttributes).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RegisteredAttributes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0xb0))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// OnMergeVertices @ 143506ee0

void __thiscall
UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::OnMergeVertices
          (TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *this,FMergeVerticesInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  if ((param_1->EdgeCollapseInfo).bIsSet != false) {
    local_res10[0] = 0;
    bVar3 = `UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::OnMergeVertices'::
            __l3::<lambda_1>::operator()(local_res10);
    if (!bVar3) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(this->_padding_ + 0x48);
      if ((param_1->EdgeCollapseInfo).bIsSet == false) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar3) {
          UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000143506f4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(this,&param_1->EdgeCollapseInfo);
      return;
    }
  }
  if ((param_1->MergeEdgesInfo).bIsSet != false) {
    local_res18[0] = 0;
    bVar3 = `UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::OnMergeVertices'::
            __l6::<lambda_2>::operator()(local_res18);
    if (!bVar3) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(this->_padding_ + 0x58);
      if ((param_1->MergeEdgesInfo).bIsSet == false) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar3) {
          UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000143506fb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(this,&param_1->MergeEdgesInfo);
      return;
    }
  }
  pFVar4 = (this->RegisteredAttributes).AllocatorInstance.Data;
  iVar2 = (this->RegisteredAttributes).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RegisteredAttributes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar4 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar4 + 0xb8))(*(longlong **)pFVar4,param_1);
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// OnNewTriangle @ 143508b30

void __thiscall
UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::OnNewTriangle
          (TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *this,int param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->RegisteredAttributes).AllocatorInstance.Data;
  iVar2 = (this->RegisteredAttributes).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RegisteredAttributes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x68))(*(longlong **)pFVar3,param_1,param_2);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// OnNewVertex @ 143508f80

void __thiscall
UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::OnNewVertex
          (TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *this,int param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->RegisteredAttributes).AllocatorInstance.Data;
  iVar2 = (this->RegisteredAttributes).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RegisteredAttributes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x58))(*(longlong **)pFVar3,param_1,param_2);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// OnPokeTriangle @ 143509600

void __thiscall
UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::OnPokeTriangle
          (TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *this,FPokeTriangleInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->RegisteredAttributes).AllocatorInstance.Data;
  iVar2 = (this->RegisteredAttributes).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RegisteredAttributes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0xa8))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// OnRemoveTriangle @ 14350b4c0

void __thiscall
UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::OnRemoveTriangle
          (TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->RegisteredAttributes).AllocatorInstance.Data;
  iVar2 = (this->RegisteredAttributes).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RegisteredAttributes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x70))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// OnRemoveVertex @ 14350d590

void __thiscall
UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::OnRemoveVertex
          (TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->RegisteredAttributes).AllocatorInstance.Data;
  iVar2 = (this->RegisteredAttributes).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RegisteredAttributes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x60))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// OnReverseTriOrientation @ 14350d860

void __thiscall
UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::OnReverseTriOrientation
          (TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->RegisteredAttributes).AllocatorInstance.Data;
  iVar2 = (this->RegisteredAttributes).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RegisteredAttributes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x78))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// OnSplitEdge @ 14350e350

void __thiscall
UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::OnSplitEdge
          (TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *this,FEdgeSplitInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->RegisteredAttributes).AllocatorInstance.Data;
  iVar2 = (this->RegisteredAttributes).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RegisteredAttributes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x90))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// OnSplitVertex @ 143511e60

void __thiscall
UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::OnSplitVertex
          (TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *this,FVertexSplitInfo *param_1,
          TArrayView<int_const_,int> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->RegisteredAttributes).AllocatorInstance.Data;
  iVar2 = (this->RegisteredAttributes).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RegisteredAttributes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0xc0))(*(longlong **)pFVar3,param_1,param_2);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// RegisterExternalAttribute @ 143515340

void __thiscall
UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::RegisterExternalAttribute
          (TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *local_res10 [3];
  
  pFVar2 = (this->RegisteredAttributes).AllocatorInstance.Data;
  local_res10[0] = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2 + (longlong)(this->RegisteredAttributes).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->RegisteredAttributes).ArrayNum;
  piVar1 = &(this->RegisteredAttributes).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->RegisteredAttributes).AllocatorInstance,piVar1);
  }
  (this->RegisteredAttributes).ArrayNum = iVar5 + 1;
  *(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)
   ((this->RegisteredAttributes).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_res10[0];
  return;
}

// ResetRegisteredAttributes @ 143518df0

void __thiscall
UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::ResetRegisteredAttributes
          (TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *this)

{
  (this->RegisteredAttributes).ArrayNum = 0;
  if ((this->RegisteredAttributes).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->RegisteredAttributes).AllocatorInstance,0,
               &(this->RegisteredAttributes).ArrayMax);
  }
  return;
}

// UnregisterExternalAttribute @ 143554c30

void __thiscall
UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::UnregisterExternalAttribute
          (TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *pTVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *local_res10;
  
  pFVar2 = (this->RegisteredAttributes).AllocatorInstance.Data;
  local_res10 = param_1;
  if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar2 + (longlong)(this->RegisteredAttributes).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->RegisteredAttributes).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this->RegisteredAttributes).AllocatorInstance.Data;
    bVar4 = *(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)pFVar2 != local_res10;
    lVar6 = 0;
    pTVar5 = local_res10;
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)
                          (pFVar2 + lVar6 * 8) != pTVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pTVar5 = local_res10;
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->RegisteredAttributes).ArrayNum = iVar9;
  }
  return;
}

// operator() @ 15049f4a0

bool __thiscall
`UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::OnMergeVertices'::__l3::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5825938462020206990>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5825938462020206990>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::OnMergeVertices(DynamicMeshInfo::FMergeVerticesInfo_const&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049f570

bool __thiscall
`UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::OnMergeVertices'::__l6::
<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5825938462020206996>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5825938462020206996>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::OnMergeVertices(DynamicMeshInfo::FMergeVerticesInfo_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

