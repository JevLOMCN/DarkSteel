// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 43

// AddInternal<FInstancedStruct_&> @ 1471ba700

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityBuilder * __thiscall
UE::Mass::FEntityBuilder::AddInternal<FInstancedStruct_&>
          (FEntityBuilder *this,FInstancedStruct *param_1)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  int iVar5;
  FInstancedStruct *pFVar6;
  FEntityBuilder *pFVar7;
  FInstancedStruct *pFVar8;
  bool local_res8 [8];
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *local_res10;
  
  pUVar1 = (param_1->ScriptStruct).field0_0x0.DebugPtr;
  if (pUVar1 == (UScriptStruct *)0x0) {
    return this;
  }
  local_res10 = (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *)0x0;
  local_res8[0] = false;
  bVar4 = HandleTypeInstance<FMassFragment>(this,pUVar1,&local_res10,local_res8);
  if ((!bVar4) &&
     (bVar4 = HandleTypeInstance<FMassSharedFragment>(this,pUVar1,&local_res10,local_res8), !bVar4))
  {
    HandleTypeInstance<FMassConstSharedFragment>(this,pUVar1,&local_res10,local_res8);
  }
  pTVar3 = local_res10;
  if (local_res10 == (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *)0x0) {
    return this;
  }
  if (local_res8[0] != false) {
    pFVar8 = (FInstancedStruct *)(local_res10->AllocatorInstance).Data;
    pFVar6 = pFVar8 + local_res10->ArrayNum;
    for (; pFVar8 != pFVar6; pFVar8 = pFVar8 + 1) {
      if ((pFVar8->ScriptStruct).field0_0x0.DebugPtr == pUVar1) goto LAB_1471ba7a7;
    }
    pFVar8 = (FInstancedStruct *)0x0;
LAB_1471ba7a7:
    if (pFVar8 != (FInstancedStruct *)0x0) {
      if (pFVar8 == param_1) {
        return this;
      }
      goto LAB_1471ba854;
    }
  }
  pFVar8 = (FInstancedStruct *)(local_res10->AllocatorInstance).Data;
  if (((pFVar8 <= param_1) && (param_1 < pFVar8 + local_res10->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FEntityBuilder *)(*pcVar2)();
    return pFVar7;
  }
  iVar5 = pTVar3->ArrayNum;
  if (iVar5 == pTVar3->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
  }
  pTVar3->ArrayNum = iVar5 + 1;
  pFVar8 = (FInstancedStruct *)((pTVar3->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
  (pFVar8->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  pFVar8->StructMemory = (uchar *)0x0;
LAB_1471ba854:
  FInstancedStruct::InitializeAs
            (pFVar8,(param_1->ScriptStruct).field0_0x0.DebugPtr,param_1->StructMemory);
  return this;
}

// AddInternal<FInstancedStruct_const_&> @ 1471ba880

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityBuilder * __thiscall
UE::Mass::FEntityBuilder::AddInternal<FInstancedStruct_const_&>
          (FEntityBuilder *this,FInstancedStruct *param_1)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  int iVar5;
  FInstancedStruct *pFVar6;
  FEntityBuilder *pFVar7;
  FInstancedStruct *pFVar8;
  bool local_res8 [8];
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *local_res10;
  
  pUVar1 = (param_1->ScriptStruct).field0_0x0.DebugPtr;
  if (pUVar1 == (UScriptStruct *)0x0) {
    return this;
  }
  local_res10 = (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *)0x0;
  local_res8[0] = false;
  bVar4 = HandleTypeInstance<FMassFragment>(this,pUVar1,&local_res10,local_res8);
  if ((!bVar4) &&
     (bVar4 = HandleTypeInstance<FMassSharedFragment>(this,pUVar1,&local_res10,local_res8), !bVar4))
  {
    HandleTypeInstance<FMassConstSharedFragment>(this,pUVar1,&local_res10,local_res8);
  }
  pTVar3 = local_res10;
  if (local_res10 == (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *)0x0) {
    return this;
  }
  if (local_res8[0] != false) {
    pFVar8 = (FInstancedStruct *)(local_res10->AllocatorInstance).Data;
    pFVar6 = pFVar8 + local_res10->ArrayNum;
    for (; pFVar8 != pFVar6; pFVar8 = pFVar8 + 1) {
      if ((pFVar8->ScriptStruct).field0_0x0.DebugPtr == pUVar1) goto LAB_1471ba927;
    }
    pFVar8 = (FInstancedStruct *)0x0;
LAB_1471ba927:
    if (pFVar8 != (FInstancedStruct *)0x0) {
      if (pFVar8 == param_1) {
        return this;
      }
      goto LAB_1471ba9d4;
    }
  }
  pFVar8 = (FInstancedStruct *)(local_res10->AllocatorInstance).Data;
  if (((pFVar8 <= param_1) && (param_1 < pFVar8 + local_res10->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FEntityBuilder *)(*pcVar2)();
    return pFVar7;
  }
  iVar5 = pTVar3->ArrayNum;
  if (iVar5 == pTVar3->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
  }
  pTVar3->ArrayNum = iVar5 + 1;
  pFVar8 = (FInstancedStruct *)((pTVar3->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
  (pFVar8->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  pFVar8->StructMemory = (uchar *)0x0;
LAB_1471ba9d4:
  FInstancedStruct::InitializeAs
            (pFVar8,(param_1->ScriptStruct).field0_0x0.DebugPtr,param_1->StructMemory);
  return this;
}

// Add_GetRef<FMassRelationFragment> @ 1471bea30

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassRelationFragment * __thiscall
UE::Mass::FEntityBuilder::Add_GetRef<FMassRelationFragment>(FEntityBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UPackage *pUVar5;
  FMassRelationFragment *pFVar6;
  FInstancedStruct *this_00;
  FInstancedStruct *pFVar7;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar8;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar9;
  undefined1 local_res8 [8];
  TObjectPtr<UScriptStruct_const_>_u_0 local_28;
  TObjectPtr<UScriptStruct_const_>_u_0 TStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->State = ReadyToCommit;
  iVar4 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FMassRelationFragment>();
  bVar3 = FStructTypeBitSet::FConstBitSetContainer::Contains
                    ((FConstBitSetContainer *)&this->Composition,iVar4);
  if (bVar3) {
    local_res8[0] = 0;
    bVar3 = `UE::Mass::FEntityBuilder::Add_GetRef<FMassRelationFragment>'::__l3::<lambda_1>::
            operator()(local_res8);
    if (!bVar3) {
      if (Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_MassEntity();
        Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMassRelationFragment,(UObject *)pUVar5,
                             L"MassRelationFragment");
      }
      this_00 = (FInstancedStruct *)(this->Fragments).AllocatorInstance.Data;
      pFVar7 = this_00 + (this->Fragments).ArrayNum;
      for (; this_00 != pFVar7; this_00 = this_00 + 1) {
        if ((this_00->ScriptStruct).field0_0x0.DebugPtr ==
            Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton)
        goto LAB_1471bead0;
      }
      this_00 = (FInstancedStruct *)0x0;
LAB_1471bead0:
      pFVar6 = FInstancedStruct::GetMutable<FMassRelationFragment>(this_00);
      return pFVar6;
    }
  }
  iVar4 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FMassRelationFragment>();
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)&this->Composition,iVar4);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CachedArchetypeHandle != (FMassArchetypeHandle *)&local_18) {
    (this->CachedArchetypeHandle).DataPtr.Object = (FMassArchetypeData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CachedArchetypeHandle).DataPtr.SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  pTVar8 = &this->Fragments;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_28.ObjectPtr);
  if (Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassRelationFragment,(UObject *)pUVar5,
                         L"MassRelationFragment");
  }
  FInstancedStruct::InitializeAs
            ((FInstancedStruct *)&local_28.ObjectPtr,
             Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton,(uchar *)0x0);
  pTVar9 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pTVar8->AllocatorInstance).Data;
  if (((pTVar9 <= &local_28) && (&local_28 < pTVar9 + (longlong)(this->Fragments).ArrayMax * 2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FMassRelationFragment *)(*pcVar2)();
    return pFVar6;
  }
  iVar4 = (this->Fragments).ArrayNum;
  piVar1 = &(this->Fragments).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar8->AllocatorInstance,piVar1);
  }
  (this->Fragments).ArrayNum = iVar4 + 1;
  pTVar9 = (TObjectPtr<UScriptStruct_const_>_u_0 *)
           ((pTVar8->AllocatorInstance).Data + (longlong)iVar4 * 0x10);
  pTVar9->DebugPtr = (UScriptStruct *)local_28;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (local_28.DebugPtr != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)local_28.DebugPtr);
  }
  pTVar9[1] = TStack_20;
  local_28.DebugPtr = (UScriptStruct *)0x0;
  TStack_20 = (TObjectPtr<UScriptStruct_const_>_u_0)0x0;
  pFVar6 = FInstancedStruct::GetMutable<FMassRelationFragment>
                     ((FInstancedStruct *)&pTVar9->ObjectPtr);
  FInstancedStruct::Reset((FInstancedStruct *)&local_28.ObjectPtr);
  return pFVar6;
}

// HandleTypeInstance<FMassConstSharedFragment> @ 1471cc710

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::FEntityBuilder::HandleTypeInstance<FMassConstSharedFragment>
          (FEntityBuilder *this,UScriptStruct *param_1,
          TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> **param_2,bool *param_3)

{
  bool bVar1;
  int iVar2;
  UPackage *pUVar3;
  UStruct *pUVar4;
  UScriptStruct *local_res10;
  
  if (param_1 == (UScriptStruct *)0x0) {
    return false;
  }
  if (Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassConstSharedFragment,(UObject *)pUVar3,
                         L"MassConstSharedFragment");
    if (Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return false;
    }
  }
  iVar2 = (int)(Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton)->
               _padding_;
  if (((int)param_1->_padding_ < iVar2) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton)->_padding_)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return false;
  }
  pUVar4 = TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           ::GetBaseUStruct();
  if (pUVar4 != (UStruct *)0x0) {
    iVar2 = (int)pUVar4->_padding_;
    if (((int)param_1->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) != &pUVar4->_padding_
       )) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1471cc7d4;
  }
  local_res10 = param_1;
  `TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  ::GetTypeIndex'::__l2::<lambda_1>::operator()(&local_res10);
LAB_1471cc7d4:
  iVar2 = FStructTracker::FindOrAddStructTypeIndex
                    (&FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                     (UStruct *)param_1);
  FMassArchetypeSharedFragmentValues::Reset(&this->CachedSharedFragmentValues);
  *param_2 = &this->ConstSharedFragments;
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::Contains
                    ((FConstBitSetContainer *)&(this->Composition).ConstSharedFragments,iVar2);
  if (bVar1) {
    *param_3 = true;
    return true;
  }
  FStructTypeBitSet::FBitSetContainer::AddAtIndex
            ((FBitSetContainer *)&(this->Composition).ConstSharedFragments,iVar2);
  return true;
}

// HandleTypeInstance<FMassFragment> @ 1471cc870

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::FEntityBuilder::HandleTypeInstance<FMassFragment>
          (FEntityBuilder *this,UScriptStruct *param_1,
          TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> **param_2,bool *param_3)

{
  bool bVar1;
  int iVar2;
  UPackage *pUVar3;
  UStruct *pUVar4;
  UScriptStruct *local_res10;
  
  if (param_1 == (UScriptStruct *)0x0) {
    return false;
  }
  if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment,(UObject *)pUVar3,L"MassFragment");
    if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0) {
      return false;
    }
  }
  iVar2 = (int)(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_;
  if (((int)param_1->_padding_ < iVar2) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return false;
  }
  pUVar4 = TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           ::GetBaseUStruct();
  if (pUVar4 != (UStruct *)0x0) {
    iVar2 = (int)pUVar4->_padding_;
    if (((int)param_1->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) != &pUVar4->_padding_
       )) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1471cc933;
  }
  local_res10 = param_1;
  `TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  GetTypeIndex'::__l2::<lambda_1>::operator()(&local_res10);
LAB_1471cc933:
  iVar2 = FStructTracker::FindOrAddStructTypeIndex
                    (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,(UStruct *)param_1);
  *param_2 = &this->Fragments;
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::Contains
                    ((FConstBitSetContainer *)&this->Composition,iVar2);
  if (bVar1) {
    *param_3 = true;
    return true;
  }
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)&this->Composition,iVar2);
  return true;
}

// HandleTypeInstance<FMassSharedFragment> @ 1471cc9b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::FEntityBuilder::HandleTypeInstance<FMassSharedFragment>
          (FEntityBuilder *this,UScriptStruct *param_1,
          TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> **param_2,bool *param_3)

{
  bool bVar1;
  int iVar2;
  UPackage *pUVar3;
  UStruct *pUVar4;
  UScriptStruct *local_res10;
  
  if (param_1 == (UScriptStruct *)0x0) {
    return false;
  }
  if (Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar3 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassSharedFragment,(UObject *)pUVar3,
                         L"MassSharedFragment");
    if (Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton == (UScriptStruct *)0x0
       ) {
      return false;
    }
  }
  iVar2 = (int)(Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton)->_padding_;
  if (((int)param_1->_padding_ < iVar2) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton)->_padding_)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return false;
  }
  pUVar4 = TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           ::GetBaseUStruct();
  if (pUVar4 != (UStruct *)0x0) {
    iVar2 = (int)pUVar4->_padding_;
    if (((int)param_1->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) != &pUVar4->_padding_
       )) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1471cca74;
  }
  local_res10 = param_1;
  `TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  ::GetTypeIndex'::__l2::<lambda_1>::operator()(&local_res10);
LAB_1471cca74:
  iVar2 = FStructTracker::FindOrAddStructTypeIndex
                    (&FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                     (UStruct *)param_1);
  FMassArchetypeSharedFragmentValues::Reset(&this->CachedSharedFragmentValues);
  *param_2 = &this->SharedFragments;
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::Contains
                    ((FConstBitSetContainer *)&(this->Composition).SharedFragments,iVar2);
  if (bVar1) {
    *param_3 = true;
    return true;
  }
  FStructTypeBitSet::FBitSetContainer::AddAtIndex
            ((FBitSetContainer *)&(this->Composition).SharedFragments,iVar2);
  return true;
}

// <lambda_2> @ 1471d4f80

<lambda_2> * __thiscall
`UE::Mass::FEntityBuilder::Commit'::__l56::<lambda_2>::<lambda_2>(void *this,<lambda_2> *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FInstancedStruct *pFVar4;
  FScriptContainerElement *_Src;
  
  *(FMassEntityHandle *)this = param_1->ReservedEntityHandle;
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues
            ((FMassArchetypeSharedFragmentValues *)((longlong)this + 8),
             &param_1->SharedFragmentValues);
  *(FMassArchetypeData **)((longlong)this + 0x70) = (param_1->ArchetypeHandle).DataPtr.Object;
  pTVar3 = (param_1->ArchetypeHandle).DataPtr.SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x78) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x80);
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->FragmentsCopy).ArrayNum;
  pFVar4 = (FInstancedStruct *)(param_1->FragmentsCopy).AllocatorInstance.Data;
  *(int *)((longlong)this + 0x88) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x8c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x8c));
    ConstructItems<FInstancedStruct,FInstancedStruct,int>(pFVar1->Data,pFVar4,iVar2);
  }
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x90);
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->RelationsParams).ArrayNum;
  _Src = (param_1->RelationsParams).AllocatorInstance.Data;
  *(int *)((longlong)this + 0x98) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x9c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x9c));
    memcpy(pFVar1->Data,_Src,(longlong)iVar2 * 0x18);
  }
  return this;
}

// FEntityBuilder @ 1471d58c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityBuilder * __thiscall
UE::Mass::FEntityBuilder::FEntityBuilder(FEntityBuilder *this,FMassEntityManager *param_1)

{
  TSharedFromThis<FMassEntityManager,1>::AsShared
            ((TSharedFromThis<FMassEntityManager,1> *)&param_1->_padding_,&this->EntityManager);
  (this->EntityHandle).Index = 0;
  (this->EntityHandle).SerialNumber = 0;
  *(undefined8 *)&(this->Composition).Fragments.field_0x10 = 0;
  *(undefined4 *)&(this->Composition).Fragments.field_0x18 = 0;
  *(undefined4 *)&(this->Composition).Fragments.field_0x1c = 0x80;
  *(undefined8 *)&(this->Composition).Tags.field_0x10 = 0;
  *(undefined4 *)&(this->Composition).Tags.field_0x18 = 0;
  *(undefined4 *)&(this->Composition).Tags.field_0x1c = 0x80;
  *(undefined8 *)&(this->Composition).ChunkFragments.field_0x10 = 0;
  *(undefined4 *)&(this->Composition).ChunkFragments.field_0x18 = 0;
  *(undefined4 *)&(this->Composition).ChunkFragments.field_0x1c = 0x80;
  *(undefined8 *)&(this->Composition).SharedFragments.field_0x10 = 0;
  *(undefined4 *)&(this->Composition).SharedFragments.field_0x18 = 0;
  *(undefined4 *)&(this->Composition).SharedFragments.field_0x1c = 0x80;
  *(undefined8 *)&(this->Composition).ConstSharedFragments.field_0x10 = 0;
  *(undefined4 *)&(this->Composition).ConstSharedFragments.field_0x18 = 0;
  *(undefined4 *)&(this->Composition).ConstSharedFragments.field_0x1c = 0x80;
  *(undefined8 *)&(this->CachedSharedFragmentValues).SharedFragmentBitSet.field_0x10 = 0;
  (this->CachedSharedFragmentValues).HashCache = 0xffffffff;
  (this->CachedSharedFragmentValues).bSorted = true;
  *(undefined4 *)&(this->CachedSharedFragmentValues).SharedFragmentBitSet.field_0x18 = 0;
  *(undefined4 *)&(this->CachedSharedFragmentValues).SharedFragmentBitSet.field_0x1c = 0x80;
  *(undefined8 *)&(this->CachedSharedFragmentValues).ConstSharedFragmentBitSet.field_0x10 = 0;
  *(undefined4 *)&(this->CachedSharedFragmentValues).ConstSharedFragmentBitSet.field_0x18 = 0;
  *(undefined4 *)&(this->CachedSharedFragmentValues).ConstSharedFragmentBitSet.field_0x1c = 0x80;
  (this->CachedSharedFragmentValues).ConstSharedFragments.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedSharedFragmentValues).ConstSharedFragments.ArrayNum = 0;
  (this->CachedSharedFragmentValues).ConstSharedFragments.ArrayMax = 0;
  (this->CachedSharedFragmentValues).SharedFragments.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedSharedFragmentValues).SharedFragments.ArrayNum = 0;
  (this->CachedSharedFragmentValues).SharedFragments.ArrayMax = 0;
  (this->CachedArchetypeHandle).DataPtr.Object = (FMassArchetypeData *)0x0;
  (this->CachedArchetypeHandle).DataPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ArchetypeCreationParams).ChunkMemorySize = 0;
  (this->ArchetypeCreationParams).DebugName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ArchetypeCreationParams).DebugName.Number = 0;
  (this->Fragments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Fragments).ArrayNum = 0;
  (this->Fragments).ArrayMax = 0;
  (this->SharedFragments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SharedFragments).ArrayNum = 0;
  (this->SharedFragments).ArrayMax = 0;
  (this->ConstSharedFragments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstSharedFragments).ArrayNum = 0;
  (this->ConstSharedFragments).ArrayMax = 0;
  (this->RelationsParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RelationsParams).ArrayNum = 0;
  (this->RelationsParams).ArrayMax = 0;
  this->State = Empty;
  return this;
}

// FEntityBuilder @ 1471d5a00

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityBuilder * __thiscall
UE::Mass::FEntityBuilder::FEntityBuilder(FEntityBuilder *this,FEntityBuilder *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->EntityManager).Object = (param_1->EntityManager).Object;
  pTVar1 = (param_1->EntityManager).SharedReferenceCount.ReferenceController;
  (this->EntityManager).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->EntityHandle).Index = 0;
  (this->EntityHandle).SerialNumber = 0;
  *(undefined8 *)&(this->Composition).Fragments.field_0x10 = 0;
  *(undefined4 *)&(this->Composition).Fragments.field_0x18 = 0;
  *(undefined4 *)&(this->Composition).Fragments.field_0x1c = 0x80;
  *(undefined8 *)&(this->Composition).Tags.field_0x10 = 0;
  *(undefined4 *)&(this->Composition).Tags.field_0x18 = 0;
  *(undefined4 *)&(this->Composition).Tags.field_0x1c = 0x80;
  *(undefined8 *)&(this->Composition).ChunkFragments.field_0x10 = 0;
  *(undefined4 *)&(this->Composition).ChunkFragments.field_0x18 = 0;
  *(undefined4 *)&(this->Composition).ChunkFragments.field_0x1c = 0x80;
  *(undefined8 *)&(this->Composition).SharedFragments.field_0x10 = 0;
  *(undefined4 *)&(this->Composition).SharedFragments.field_0x18 = 0;
  *(undefined4 *)&(this->Composition).SharedFragments.field_0x1c = 0x80;
  *(undefined8 *)&(this->Composition).ConstSharedFragments.field_0x10 = 0;
  *(undefined4 *)&(this->Composition).ConstSharedFragments.field_0x18 = 0;
  *(undefined4 *)&(this->Composition).ConstSharedFragments.field_0x1c = 0x80;
  (this->CachedSharedFragmentValues).HashCache = 0xffffffff;
  (this->CachedSharedFragmentValues).bSorted = true;
  *(undefined8 *)&(this->CachedSharedFragmentValues).SharedFragmentBitSet.field_0x10 = 0;
  *(undefined4 *)&(this->CachedSharedFragmentValues).SharedFragmentBitSet.field_0x18 = 0;
  *(undefined4 *)&(this->CachedSharedFragmentValues).SharedFragmentBitSet.field_0x1c = 0x80;
  *(undefined8 *)&(this->CachedSharedFragmentValues).ConstSharedFragmentBitSet.field_0x10 = 0;
  *(undefined4 *)&(this->CachedSharedFragmentValues).ConstSharedFragmentBitSet.field_0x18 = 0;
  *(undefined4 *)&(this->CachedSharedFragmentValues).ConstSharedFragmentBitSet.field_0x1c = 0x80;
  (this->CachedSharedFragmentValues).ConstSharedFragments.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedSharedFragmentValues).ConstSharedFragments.ArrayNum = 0;
  (this->CachedSharedFragmentValues).ConstSharedFragments.ArrayMax = 0;
  (this->CachedSharedFragmentValues).SharedFragments.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedSharedFragmentValues).SharedFragments.ArrayNum = 0;
  (this->CachedSharedFragmentValues).SharedFragments.ArrayMax = 0;
  (this->CachedArchetypeHandle).DataPtr.Object = (FMassArchetypeData *)0x0;
  (this->CachedArchetypeHandle).DataPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ArchetypeCreationParams).ChunkMemorySize = 0;
  (this->ArchetypeCreationParams).DebugName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ArchetypeCreationParams).DebugName.Number = 0;
  (this->Fragments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Fragments).ArrayNum = 0;
  (this->Fragments).ArrayMax = 0;
  (this->SharedFragments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SharedFragments).ArrayNum = 0;
  (this->SharedFragments).ArrayMax = 0;
  (this->ConstSharedFragments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstSharedFragments).ArrayNum = 0;
  (this->ConstSharedFragments).ArrayMax = 0;
  (this->RelationsParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RelationsParams).ArrayNum = 0;
  (this->RelationsParams).ArrayMax = 0;
  this->State = Empty;
  operator=(this,param_1);
  return this;
}

// FEntityBuilder @ 1471d5b50

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityBuilder * __thiscall
UE::Mass::FEntityBuilder::FEntityBuilder
          (FEntityBuilder *this,TSharedRef<FMassEntityManager,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->EntityManager).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->EntityManager).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->EntityHandle).Index = 0;
  (this->EntityHandle).SerialNumber = 0;
  *(undefined8 *)&(this->Composition).Fragments.field_0x10 = 0;
  *(undefined4 *)&(this->Composition).Fragments.field_0x18 = 0;
  *(undefined4 *)&(this->Composition).Fragments.field_0x1c = 0x80;
  *(undefined8 *)&(this->Composition).Tags.field_0x10 = 0;
  *(undefined4 *)&(this->Composition).Tags.field_0x18 = 0;
  *(undefined4 *)&(this->Composition).Tags.field_0x1c = 0x80;
  *(undefined8 *)&(this->Composition).ChunkFragments.field_0x10 = 0;
  *(undefined4 *)&(this->Composition).ChunkFragments.field_0x18 = 0;
  *(undefined4 *)&(this->Composition).ChunkFragments.field_0x1c = 0x80;
  *(undefined8 *)&(this->Composition).SharedFragments.field_0x10 = 0;
  *(undefined4 *)&(this->Composition).SharedFragments.field_0x18 = 0;
  *(undefined4 *)&(this->Composition).SharedFragments.field_0x1c = 0x80;
  *(undefined8 *)&(this->Composition).ConstSharedFragments.field_0x10 = 0;
  *(undefined4 *)&(this->Composition).ConstSharedFragments.field_0x18 = 0;
  *(undefined4 *)&(this->Composition).ConstSharedFragments.field_0x1c = 0x80;
  *(undefined8 *)&(this->CachedSharedFragmentValues).SharedFragmentBitSet.field_0x10 = 0;
  (this->CachedSharedFragmentValues).HashCache = 0xffffffff;
  (this->CachedSharedFragmentValues).bSorted = true;
  *(undefined4 *)&(this->CachedSharedFragmentValues).SharedFragmentBitSet.field_0x18 = 0;
  *(undefined4 *)&(this->CachedSharedFragmentValues).SharedFragmentBitSet.field_0x1c = 0x80;
  *(undefined8 *)&(this->CachedSharedFragmentValues).ConstSharedFragmentBitSet.field_0x10 = 0;
  *(undefined4 *)&(this->CachedSharedFragmentValues).ConstSharedFragmentBitSet.field_0x18 = 0;
  *(undefined4 *)&(this->CachedSharedFragmentValues).ConstSharedFragmentBitSet.field_0x1c = 0x80;
  (this->CachedSharedFragmentValues).ConstSharedFragments.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedSharedFragmentValues).ConstSharedFragments.ArrayNum = 0;
  (this->CachedSharedFragmentValues).ConstSharedFragments.ArrayMax = 0;
  (this->CachedSharedFragmentValues).SharedFragments.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedSharedFragmentValues).SharedFragments.ArrayNum = 0;
  (this->CachedSharedFragmentValues).SharedFragments.ArrayMax = 0;
  (this->CachedArchetypeHandle).DataPtr.Object = (FMassArchetypeData *)0x0;
  (this->CachedArchetypeHandle).DataPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ArchetypeCreationParams).ChunkMemorySize = 0;
  (this->ArchetypeCreationParams).DebugName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ArchetypeCreationParams).DebugName.Number = 0;
  (this->Fragments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Fragments).ArrayNum = 0;
  (this->Fragments).ArrayMax = 0;
  (this->SharedFragments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SharedFragments).ArrayNum = 0;
  (this->SharedFragments).ArrayMax = 0;
  (this->ConstSharedFragments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstSharedFragments).ArrayNum = 0;
  (this->ConstSharedFragments).ArrayMax = 0;
  (this->RelationsParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RelationsParams).ArrayNum = 0;
  (this->RelationsParams).ArrayMax = 0;
  this->State = Empty;
  return this;
}

// ~FEntityBuilder @ 1471dfa30

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall UE::Mass::FEntityBuilder::~FEntityBuilder(FEntityBuilder *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  if ((((this->EntityHandle).Index != 0) && ((this->EntityHandle).SerialNumber != 0)) &&
     (this->State != Committed)) {
    FMassEntityManager::ReleaseReservedEntity((this->EntityManager).Object,this->EntityHandle);
  }
  (this->EntityHandle).Index = 0;
  (this->EntityHandle).SerialNumber = 0;
  pFVar1 = (this->RelationsParams).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(this->ConstSharedFragments).AllocatorInstance.Data,
             (this->ConstSharedFragments).ArrayNum);
  pFVar1 = (this->ConstSharedFragments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(this->SharedFragments).AllocatorInstance.Data,
             (this->SharedFragments).ArrayNum);
  pFVar1 = (this->SharedFragments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(this->Fragments).AllocatorInstance.Data,(this->Fragments).ArrayNum
            );
  pFVar1 = (this->Fragments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedArchetypeHandle).DataPtr.SharedReferenceCount.ReferenceController);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues
            (&this->CachedSharedFragmentValues);
  pvVar2 = *(void **)&(this->Composition).ConstSharedFragments.field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->Composition).SharedFragments.field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->Composition).ChunkFragments.field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->Composition).Tags.field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->Composition).Fragments.field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EntityManager).SharedReferenceCount.ReferenceController);
  return;
}

// operator= @ 1471e1ad0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FEntityBuilder * __thiscall
UE::Mass::FEntityBuilder::operator=(FEntityBuilder *this,FEntityBuilder *param_1)

{
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar2;
  FMassEntityManager *pFVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  EState EVar7;
  undefined1 local_res8 [8];
  
  if (param_1->State == Invalid) {
    if (AITestSuite::TestsInProgress < 1) {
      ``UE::Mass::FEntityBuilder::operator='::__l3::<lambda_1>::operator()'::__l16::<lambda_1>::
      operator()(local_res8);
      return this;
    }
    if (2 < (byte)LogTestableEnsures._0_1_) {
      Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Copying_invalid_151570b50,
                 (FLogCategoryBase *)&LogTestableEnsures);
      return this;
    }
  }
  else {
    pFVar3 = (this->EntityManager).Object;
    if (pFVar3 != (param_1->EntityManager).Object) {
      if ((((this->EntityHandle).Index != 0) && ((this->EntityHandle).SerialNumber != 0)) &&
         (this->State != Committed)) {
        FMassEntityManager::ReleaseReservedEntity(pFVar3,this->EntityHandle);
      }
      (this->EntityHandle).Index = 0;
      (this->EntityHandle).SerialNumber = 0;
      pTVar5 = (param_1->EntityManager).SharedReferenceCount.ReferenceController;
      pFVar3 = (this->EntityManager).Object;
      pTVar6 = (this->EntityManager).SharedReferenceCount.ReferenceController;
      (this->EntityManager).Object = (param_1->EntityManager).Object;
      (this->EntityManager).SharedReferenceCount.ReferenceController = pTVar5;
      (param_1->EntityManager).Object = pFVar3;
      (param_1->EntityManager).SharedReferenceCount.ReferenceController = pTVar6;
    }
    pTVar1 = &param_1->Fragments;
    pTVar2 = &this->Fragments;
    if (pTVar2 != pTVar1) {
      DestructItems<FInstancedStruct,int>
                ((FInstancedStruct *)(pTVar2->AllocatorInstance).Data,(this->Fragments).ArrayNum);
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->Fragments).ArrayNum = (param_1->Fragments).ArrayNum;
      (this->Fragments).ArrayMax = (param_1->Fragments).ArrayMax;
      (param_1->Fragments).ArrayNum = 0;
      (param_1->Fragments).ArrayMax = 0;
    }
    pTVar1 = &param_1->SharedFragments;
    pTVar2 = &this->SharedFragments;
    if (pTVar2 != pTVar1) {
      DestructItems<FInstancedStruct,int>
                ((FInstancedStruct *)(pTVar2->AllocatorInstance).Data,
                 (this->SharedFragments).ArrayNum);
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->SharedFragments).ArrayNum = (param_1->SharedFragments).ArrayNum;
      (this->SharedFragments).ArrayMax = (param_1->SharedFragments).ArrayMax;
      (param_1->SharedFragments).ArrayNum = 0;
      (param_1->SharedFragments).ArrayMax = 0;
    }
    pTVar1 = &param_1->ConstSharedFragments;
    pTVar2 = &this->ConstSharedFragments;
    if (pTVar2 != pTVar1) {
      DestructItems<FInstancedStruct,int>
                ((FInstancedStruct *)(pTVar2->AllocatorInstance).Data,
                 (this->ConstSharedFragments).ArrayNum);
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->ConstSharedFragments).ArrayNum = (param_1->ConstSharedFragments).ArrayNum;
      (this->ConstSharedFragments).ArrayMax = (param_1->ConstSharedFragments).ArrayMax;
      (param_1->ConstSharedFragments).ArrayNum = 0;
      (param_1->ConstSharedFragments).ArrayMax = 0;
    }
    if (((this->State == Committed) || ((this->EntityHandle).Index == 0)) ||
       ((this->EntityHandle).SerialNumber == 0)) {
      this->EntityHandle = param_1->EntityHandle;
      EVar7 = param_1->State;
    }
    else {
      if (((param_1->State != Committed) && ((param_1->EntityHandle).Index != 0)) &&
         ((param_1->EntityHandle).SerialNumber != 0)) {
        FMassEntityManager::ReleaseReservedEntity((this->EntityManager).Object,this->EntityHandle);
        (this->EntityHandle).Index = 0;
        (this->EntityHandle).SerialNumber = 0;
        this->EntityHandle = param_1->EntityHandle;
      }
      EVar7 = param_1->State;
      if (param_1->State == Committed) {
        EVar7 = ReadyToCommit;
      }
    }
    this->State = EVar7;
    (param_1->EntityHandle).Index = 0;
    (param_1->EntityHandle).SerialNumber = 0;
    param_1->State = Invalid;
  }
  return this;
}

// operator= @ 1471e1ce0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FEntityBuilder * __thiscall
UE::Mass::FEntityBuilder::operator=(FEntityBuilder *this,FEntityBuilder *param_1)

{
  FMassEntityManager *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  EState EVar5;
  undefined1 local_res8 [8];
  
  if (param_1->State != Invalid) {
    pFVar1 = (this->EntityManager).Object;
    if (pFVar1 == (param_1->EntityManager).Object) {
      if (this->State == Committed) {
        (this->EntityHandle).Index = 0;
        (this->EntityHandle).SerialNumber = 0;
      }
    }
    else {
      if ((((this->EntityHandle).Index != 0) && ((this->EntityHandle).SerialNumber != 0)) &&
         (this->State != Committed)) {
        FMassEntityManager::ReleaseReservedEntity(pFVar1,this->EntityHandle);
      }
      (this->EntityHandle).Index = 0;
      (this->EntityHandle).SerialNumber = 0;
      pTVar2 = (param_1->EntityManager).SharedReferenceCount.ReferenceController;
      pFVar1 = (param_1->EntityManager).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar3 = (this->EntityManager).SharedReferenceCount.ReferenceController;
      (this->EntityManager).Object = pFVar1;
      (this->EntityManager).SharedReferenceCount.ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    FMassArchetypeCompositionDescriptor::operator=(&this->Composition,&param_1->Composition);
    TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::operator=
              (&this->Fragments,&param_1->Fragments);
    TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::operator=
              (&this->SharedFragments,&param_1->SharedFragments);
    TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::operator=
              (&this->ConstSharedFragments,&param_1->ConstSharedFragments);
    bVar4 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                      ((FConstBitSetContainer *)&this->Composition);
    if (((bVar4) &&
        (bVar4 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                           ((FConstBitSetContainer *)&(this->Composition).Tags), bVar4)) &&
       ((bVar4 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                           ((FConstBitSetContainer *)&(this->Composition).ChunkFragments), bVar4 &&
        ((bVar4 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&(this->Composition).SharedFragments), bVar4
         && (bVar4 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                               ((FConstBitSetContainer *)&(this->Composition).ConstSharedFragments),
            bVar4)))))) {
      EVar5 = Empty;
    }
    else {
      EVar5 = ReadyToCommit;
    }
    this->State = EVar5;
    return this;
  }
  if (0 < AITestSuite::TestsInProgress) {
    if ((byte)LogTestableEnsures._0_1_ < 3) {
      return this;
    }
    Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Copying_invalid_151570a20,
               (FLogCategoryBase *)&LogTestableEnsures);
    return this;
  }
  ``UE::Mass::FEntityBuilder::operator='::__l3::<lambda_1>::operator()'::__l16::<lambda_1>::
  operator()(local_res8);
  return this;
}

// operator() @ 1471e5120

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::FEntityBuilder::Commit'::__l56::<lambda_2>::operator()
          (void *this,FMassEntityManager *param_1)

{
  int iVar1;
  int iVar2;
  FPendingRelationParams *pFVar3;
  FInstancedStruct *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  TArrayView<UE::Mass::FEntityBuilder::FPendingRelationParams_const_,int> local_28;
  TArrayView<FInstancedStruct_const_,int> local_18;
  
  pFVar3 = *(FPendingRelationParams **)((longlong)this + 0x90);
  iVar1 = *(int *)((longlong)this + 0x98);
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = *(FInstancedStruct **)((longlong)this + 0x80);
  iVar2 = *(int *)((longlong)this + 0x88);
  if (iVar2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iVar1;
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = iVar2;
  local_28.DataPtr = pFVar3;
  local_18.DataPtr = pFVar4;
  UE::Mass::FEntityBuilder::CreateEntityImpl
            (param_1,*(FMassEntityHandle *)this,(FMassArchetypeHandle *)((longlong)this + 0x70),
             (FMassArchetypeSharedFragmentValues *)((longlong)this + 8),&local_18,&local_28);
  return;
}

// Add @ 1471eba20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityBuilder * __thiscall
UE::Mass::FEntityBuilder::Add(FEntityBuilder *this,FInstancedStruct *param_1)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  int iVar5;
  FInstancedStruct *pFVar6;
  FEntityBuilder *pFVar7;
  FInstancedStruct *pFVar8;
  bool abStackX_8 [8];
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTStackX_10;
  
  pUVar1 = (param_1->ScriptStruct).field0_0x0.DebugPtr;
  if (pUVar1 == (UScriptStruct *)0x0) {
    return this;
  }
  pTStackX_10 = (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *)0x0;
  abStackX_8[0] = false;
  bVar4 = HandleTypeInstance<FMassFragment>(this,pUVar1,&pTStackX_10,abStackX_8);
  if ((!bVar4) &&
     (bVar4 = HandleTypeInstance<FMassSharedFragment>(this,pUVar1,&pTStackX_10,abStackX_8), !bVar4))
  {
    HandleTypeInstance<FMassConstSharedFragment>(this,pUVar1,&pTStackX_10,abStackX_8);
  }
  pTVar3 = pTStackX_10;
  if (pTStackX_10 == (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *)0x0) {
    return this;
  }
  if (abStackX_8[0] != false) {
    pFVar8 = (FInstancedStruct *)(pTStackX_10->AllocatorInstance).Data;
    pFVar6 = pFVar8 + pTStackX_10->ArrayNum;
    for (; pFVar8 != pFVar6; pFVar8 = pFVar8 + 1) {
      if ((pFVar8->ScriptStruct).field0_0x0.DebugPtr == pUVar1) goto LAB_1471ba7a7;
    }
    pFVar8 = (FInstancedStruct *)0x0;
LAB_1471ba7a7:
    if (pFVar8 != (FInstancedStruct *)0x0) {
      if (pFVar8 == param_1) {
        return this;
      }
      goto LAB_1471ba854;
    }
  }
  pFVar8 = (FInstancedStruct *)(pTStackX_10->AllocatorInstance).Data;
  if (((pFVar8 <= param_1) && (param_1 < pFVar8 + pTStackX_10->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FEntityBuilder *)(*pcVar2)();
    return pFVar7;
  }
  iVar5 = pTVar3->ArrayNum;
  if (iVar5 == pTVar3->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
  }
  pTVar3->ArrayNum = iVar5 + 1;
  pFVar8 = (FInstancedStruct *)((pTVar3->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
  (pFVar8->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  pFVar8->StructMemory = (uchar *)0x0;
LAB_1471ba854:
  FInstancedStruct::InitializeAs
            (pFVar8,(param_1->ScriptStruct).field0_0x0.DebugPtr,param_1->StructMemory);
  return this;
}

// Add @ 1471eba30

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityBuilder * __thiscall
UE::Mass::FEntityBuilder::Add(FEntityBuilder *this,FInstancedStruct *param_1)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  int iVar5;
  FInstancedStruct *pFVar6;
  FEntityBuilder *pFVar7;
  FInstancedStruct *pFVar8;
  bool abStackX_8 [8];
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTStackX_10;
  
  pUVar1 = (param_1->ScriptStruct).field0_0x0.DebugPtr;
  if (pUVar1 == (UScriptStruct *)0x0) {
    return this;
  }
  pTStackX_10 = (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *)0x0;
  abStackX_8[0] = false;
  bVar4 = HandleTypeInstance<FMassFragment>(this,pUVar1,&pTStackX_10,abStackX_8);
  if ((!bVar4) &&
     (bVar4 = HandleTypeInstance<FMassSharedFragment>(this,pUVar1,&pTStackX_10,abStackX_8), !bVar4))
  {
    HandleTypeInstance<FMassConstSharedFragment>(this,pUVar1,&pTStackX_10,abStackX_8);
  }
  pTVar3 = pTStackX_10;
  if (pTStackX_10 == (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *)0x0) {
    return this;
  }
  if (abStackX_8[0] != false) {
    pFVar8 = (FInstancedStruct *)(pTStackX_10->AllocatorInstance).Data;
    pFVar6 = pFVar8 + pTStackX_10->ArrayNum;
    for (; pFVar8 != pFVar6; pFVar8 = pFVar8 + 1) {
      if ((pFVar8->ScriptStruct).field0_0x0.DebugPtr == pUVar1) goto LAB_1471ba927;
    }
    pFVar8 = (FInstancedStruct *)0x0;
LAB_1471ba927:
    if (pFVar8 != (FInstancedStruct *)0x0) {
      if (pFVar8 == param_1) {
        return this;
      }
      goto LAB_1471ba9d4;
    }
  }
  pFVar8 = (FInstancedStruct *)(pTStackX_10->AllocatorInstance).Data;
  if (((pFVar8 <= param_1) && (param_1 < pFVar8 + pTStackX_10->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FEntityBuilder *)(*pcVar2)();
    return pFVar7;
  }
  iVar5 = pTVar3->ArrayNum;
  if (iVar5 == pTVar3->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
  }
  pTVar3->ArrayNum = iVar5 + 1;
  pFVar8 = (FInstancedStruct *)((pTVar3->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
  (pFVar8->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  pFVar8->StructMemory = (uchar *)0x0;
LAB_1471ba9d4:
  FInstancedStruct::InitializeAs
            (pFVar8,(param_1->ScriptStruct).field0_0x0.DebugPtr,param_1->StructMemory);
  return this;
}

// Add @ 1471eba40

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityBuilder * __thiscall
UE::Mass::FEntityBuilder::Add(FEntityBuilder *this,TNotNull<UScriptStruct_const_*> param_1)

{
  UScriptStruct *pUVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  int iVar4;
  UPackage *pUVar5;
  UStruct *pUVar6;
  UScriptStruct *local_res8;
  UScriptStruct *local_res10;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_res10 = param_1.Val;
  if (param_1.Val != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassTag,(UObject *)pUVar5,L"MassTag");
      if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_1471ebacf;
    }
    iVar4 = (int)(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_;
    if (((int)(param_1.Val)->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)((param_1.Val)->_padding_ + (longlong)iVar4 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      ::Add((TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
             *)&(this->Composition).Tags,local_res10);
      goto LAB_1471ebcbb;
    }
  }
LAB_1471ebacf:
  pUVar1 = local_res10;
  if (local_res10 != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment,(UObject *)pUVar5,L"MassFragment"
                          );
      if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_1471ebb9f;
    }
    pUVar2 = local_res10;
    iVar4 = (int)(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_;
    if (((int)pUVar1->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar4 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar6 = TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
               ::GetBaseUStruct();
      if (pUVar6 == (UStruct *)0x0) {
LAB_1471ebb69:
        local_res8 = pUVar2;
        bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                ::Add'::__l6::<lambda_1>::operator()(&local_res8);
        if (!bVar3) goto LAB_1471ebcbb;
      }
      else {
        iVar4 = (int)pUVar6->_padding_;
        if (((int)pUVar2->_padding_ < iVar4) ||
           ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar4 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_1471ebb69;
      }
      iVar4 = FStructTracker::FindOrAddStructTypeIndex
                        (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,(UStruct *)pUVar2);
      FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)&this->Composition,iVar4);
      goto LAB_1471ebcbb;
    }
  }
LAB_1471ebb9f:
  pUVar1 = local_res10;
  if (local_res10 != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar5 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassSharedFragment,(UObject *)pUVar5,
                           L"MassSharedFragment");
      if (Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_1471ebc68;
    }
    pUVar2 = local_res10;
    iVar4 = (int)(Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton)->_padding_;
    if (((int)pUVar1->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar4 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar6 = TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
               ::GetBaseUStruct();
      if (pUVar6 == (UStruct *)0x0) {
LAB_1471ebc39:
        local_res8 = pUVar2;
        bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                ::Add'::__l6::<lambda_1>::operator()(&local_res8);
        if (!bVar3) goto LAB_1471ebcbb;
      }
      else {
        iVar4 = (int)pUVar6->_padding_;
        if (((int)pUVar2->_padding_ < iVar4) ||
           ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar4 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_1471ebc39;
      }
      iVar4 = FStructTracker::FindOrAddStructTypeIndex
                        (&FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                         (UStruct *)pUVar2);
      FStructTypeBitSet::FBitSetContainer::AddAtIndex
                ((FBitSetContainer *)&(this->Composition).SharedFragments,iVar4);
      goto LAB_1471ebcbb;
    }
  }
LAB_1471ebc68:
  bVar3 = IsA<FMassConstSharedFragment>((UStruct *)local_res10);
  if (bVar3) {
    TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
    ::Add((TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *)&(this->Composition).ConstSharedFragments,local_res10);
  }
  else {
    bVar3 = IsA<FMassChunkFragment>((UStruct *)local_res10);
    if (!bVar3) {
      local_res8 = (UScriptStruct *)&local_res10;
      bVar3 = `UE::Mass::FEntityBuilder::Add'::__l19::<lambda_1>::operator()(&local_res8);
      if (!bVar3) goto LAB_1471ebcbb;
    }
    TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
    ::Add((TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *)&(this->Composition).ChunkFragments,local_res10);
  }
LAB_1471ebcbb:
  this->State = ReadyToCommit;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CachedArchetypeHandle != (FMassArchetypeHandle *)&local_18) {
    (this->CachedArchetypeHandle).DataPtr.Object = (FMassArchetypeData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CachedArchetypeHandle).DataPtr.SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return this;
}

// AddRelation @ 1471ef3a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityBuilder * __thiscall
UE::Mass::FEntityBuilder::AddRelation
          (FEntityBuilder *this,FTypeHandle param_1,FMassEntityHandle param_2,ERelationRole param_3)

{
  int *piVar1;
  TArray<UE::Mass::FEntityBuilder::FPendingRelationParams,TSizedDefaultAllocator<32>_> *pTVar2;
  FObjectKey *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FEntityBuilder *pFVar8;
  FObjectKey local_28;
  FMassEntityHandle FStack_20;
  ERelationRole local_18;
  undefined7 uStack_17;
  
  pTVar2 = &this->RelationsParams;
  pFVar3 = (FObjectKey *)(pTVar2->AllocatorInstance).Data;
  local_28 = (FObjectKey)param_1.TypeKey.ObjectKey;
  FStack_20 = param_2;
  local_18 = param_3;
  if ((pFVar3 <= &local_28) && (&local_28 < pFVar3 + (longlong)(this->RelationsParams).ArrayMax * 3)
     ) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FEntityBuilder *)(*pcVar5)();
      return pFVar8;
    }
  }
  iVar7 = (this->RelationsParams).ArrayNum;
  piVar1 = &(this->RelationsParams).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->RelationsParams).ArrayNum = iVar7 + 1;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = (FObjectKey *)(pFVar4 + (longlong)iVar7 * 0x18);
  *pFVar3 = local_28;
  *(FMassEntityHandle *)(pFVar3 + 1) = FStack_20;
  *(ulonglong *)(pFVar4 + (longlong)iVar7 * 0x18 + 0x10) = CONCAT71(uStack_17,local_18);
  return this;
}

// AppendDataFromEntity @ 1471f2790

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Mass::FEntityBuilder::AppendDataFromEntity(FEntityBuilder *this,FMassEntityHandle param_1)

{
  atomic<int> *paVar1;
  FMassEntityManager *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  IEntityStorageInterface *pIVar7;
  longlong *plVar8;
  FMassArchetypeCompositionDescriptor *pFVar9;
  FMassArchetypeCompositionDescriptor *pFVar10;
  StorageSelector local_res8 [16];
  StorageSelector local_res18 [8];
  StorageSelector local_res20 [8];
  undefined1 local_38 [16];
  
  if (param_1.Index == 0) {
LAB_1471f28ed:
    if (AITestSuite::TestsInProgress < 1) {
      if (param_1.Index != 0) {
        pFVar2 = (this->EntityManager).Object;
        local_res20[0] = (StorageSelector)0x0;
        pIVar7 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                   ::__l2::Invokers[(pFVar2->EntityStorage).TypeIndex])
                           (local_res20,&pFVar2->EntityStorage);
        cVar4 = (**(code **)((longlong)*pIVar7 + 0x58))(pIVar7,param_1);
        if (cVar4 != '\0') {
          return false;
        }
      }
      ``UE::Mass::FEntityBuilder::AppendDataFromEntity'::__l3::<lambda_1>::operator()'::__l16::
      <lambda_1>::operator()(local_38);
    }
    else if (2 < (byte)LogTestableEnsures._0_1_) {
      Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u__hs_expecting_a_151571268,
                 (FLogCategoryBase *)&LogTestableEnsures);
      return false;
    }
    return false;
  }
  pFVar2 = (this->EntityManager).Object;
  local_res8[0] = (StorageSelector)0x0;
  pIVar7 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(pFVar2->EntityStorage).TypeIndex])(local_res8,&pFVar2->EntityStorage)
  ;
  cVar4 = (**(code **)((longlong)*pIVar7 + 0x58))(pIVar7,param_1);
  if (cVar4 == '\0') goto LAB_1471f28ed;
  if (this->State == Empty) {
    bVar5 = CopyDataFromEntity(this,param_1);
    return bVar5;
  }
  InvalidateCachedData(this);
  pFVar2 = (this->EntityManager).Object;
  bVar5 = FMassEntityManager::IsEntityValid(pFVar2,param_1);
  if (bVar5) {
    local_res18[0] = (StorageSelector)0x0;
    pIVar7 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(pFVar2->EntityStorage).TypeIndex])
                       (local_res18,&pFVar2->EntityStorage);
    plVar8 = (longlong *)
             (**(code **)((longlong)*pIVar7 + 0x20))(pIVar7,(ulonglong)param_1 & 0xffffffff);
    pFVar9 = (FMassArchetypeCompositionDescriptor *)plVar8[1];
    pFVar10 = (FMassArchetypeCompositionDescriptor *)*plVar8;
    if (pFVar9 != (FMassArchetypeCompositionDescriptor *)0x0) {
      LOCK();
      paVar1 = (atomic<int> *)&(pFVar9->Fragments).field_0x8;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    if (pFVar10 != (FMassArchetypeCompositionDescriptor *)0x0) goto LAB_1471f2889;
  }
  else {
    pFVar9 = (FMassArchetypeCompositionDescriptor *)0x0;
    pFVar10 = pFVar9;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("ArchetypeHandle.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                     ,0x1ff,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
LAB_1471f2889:
  Mass::Private::FEntityBuilderHelper::AppendFromEntity<FMassFragment>(this,param_1,pFVar10);
  Mass::Private::FEntityBuilderHelper::AppendFromEntity<FMassSharedFragment>(this,param_1,pFVar10);
  Mass::Private::FEntityBuilderHelper::AppendFromEntity<FMassConstSharedFragment>
            (this,param_1,pFVar10);
  FMassArchetypeCompositionDescriptor::Append(&this->Composition,pFVar10);
  bVar5 = FMassArchetypeCompositionDescriptor::IsEmpty(&this->Composition);
  this->State = !bVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar9);
  return true;
}

// CacheArchetypeHandle @ 1471fedd0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall UE::Mass::FEntityBuilder::CacheArchetypeHandle(FEntityBuilder *this)

{
  FMassArchetypeHandle *pFVar1;
  FMassArchetypeHandle *pFVar2;
  FMassArchetypeHandle local_18;
  
  pFVar1 = &this->CachedArchetypeHandle;
  if ((pFVar1->DataPtr).Object == (FMassArchetypeData *)0x0) {
    pFVar2 = FMassEntityManager::CreateArchetype
                       ((this->EntityManager).Object,&local_18,&this->Composition,
                        &this->ArchetypeCreationParams);
    if (pFVar1 != pFVar2) {
      (pFVar1->DataPtr).Object = (pFVar2->DataPtr).Object;
      (pFVar2->DataPtr).Object = (FMassArchetypeData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CachedArchetypeHandle).DataPtr.SharedReferenceCount,
                 &(pFVar2->DataPtr).SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.DataPtr.SharedReferenceCount.ReferenceController);
  }
  return;
}

// CacheEntityHandle @ 1471ff760

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall UE::Mass::FEntityBuilder::CacheEntityHandle(FEntityBuilder *this)

{
  FMassEntityManager *pFVar1;
  code *pcVar2;
  bool bVar3;
  IEntityStorageInterface *pIVar4;
  StorageSelector local_res8 [8];
  FMassEntityHandle local_res10 [3];
  
  if (((this->EntityHandle).Index == 0) || ((this->EntityHandle).SerialNumber == 0)) {
    if (this->State == Committed) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("State != EState::Committed",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityBuilder.cpp"
                         ,0x1c7,
                         L"Reserving an entity while the builder has already committed. This should not happen. Indicates an error during builder copying from another instance."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->EntityManager).Object;
    local_res8[0] = (StorageSelector)0x0;
    pIVar4 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(pFVar1->EntityStorage).TypeIndex])
                       (local_res8,&pFVar1->EntityStorage);
    (**(code **)((longlong)*pIVar4 + 0x70))(pIVar4,local_res10);
    this->EntityHandle = local_res10[0];
  }
  return;
}

// CacheSharedFragmentValue @ 1471ff7f0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall UE::Mass::FEntityBuilder::CacheSharedFragmentValue(FEntityBuilder *this)

{
  int iVar1;
  int iVar2;
  FMassEntityManager *pFVar3;
  uchar *puVar4;
  UScriptStruct *pUVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  UPackage *pUVar9;
  FSharedStruct *pFVar10;
  FConstSharedStruct *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FSharedStruct local_58;
  FConstSharedStruct local_48;
  
  if (((this->CachedSharedFragmentValues).ConstSharedFragments.ArrayNum == 0) &&
     ((this->CachedSharedFragmentValues).SharedFragments.ArrayNum == 0)) {
    pFVar12 = (this->SharedFragments).AllocatorInstance.Data;
    iVar1 = (this->SharedFragments).ArrayNum;
    pFVar13 = pFVar12 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->SharedFragments).ArrayNum != iVar1) {
        local_res8[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<FInstancedStruct,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar12 == pFVar13) break;
      if ((*(longlong *)(pFVar12 + 8) == 0) || (*(longlong *)pFVar12 == 0)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("SharedFragmentInstance.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityBuilder.cpp"
                           ,0x1e6,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pFVar3 = (this->EntityManager).Object;
      puVar4 = *(uchar **)(pFVar12 + 8);
      pUVar5 = *(UScriptStruct **)pFVar12;
      if (Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar9 = Z_Construct_UPackage__Script_MassEntity();
        Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMassSharedFragment,(UObject *)pUVar9,
                             L"MassSharedFragment");
        if (Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton !=
            (UScriptStruct *)0x0) goto LAB_1471ff8e7;
LAB_1471ff90b:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InScriptStruct.IsChildOf(TBaseStructure<FMassSharedFragment>::Get())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                           ,0x3a8,
                           L"Given struct doesn\'t represent a valid shared fragment type. Make sure to inherit from FMassSharedFragment or one of its child-types."
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
LAB_1471ff8e7:
        iVar2 = (int)(Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton)->
                     _padding_;
        if (((int)pUVar5->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
            &(Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton)->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (!bVar7) goto LAB_1471ff90b;
      }
      uVar8 = StructUtils::GetStructInstanceCrc32(pUVar5,puVar4,0);
      pFVar10 = FMassEntityManager::TSharedFragmentsContainer<FSharedStruct>::FindOrAdd
                          (&pFVar3->SharedFragmentsContainer,uVar8,pUVar5,puVar4);
      FMassArchetypeSharedFragmentValues::Add_GetRef
                (&this->CachedSharedFragmentValues,&local_58,pFVar10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.StructMemoryPtr.SharedReferenceCount.ReferenceController);
      pFVar12 = pFVar12 + 0x10;
    }
    iVar1 = (this->ConstSharedFragments).ArrayNum;
    pFVar12 = (this->ConstSharedFragments).AllocatorInstance.Data;
    pFVar13 = pFVar12 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->ConstSharedFragments).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FInstancedStruct,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar12 == pFVar13) break;
      if ((*(longlong *)(pFVar12 + 8) == 0) || (*(longlong *)pFVar12 == 0)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ConstSharedFragmentInstance.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityBuilder.cpp"
                           ,0x1ec,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pFVar3 = (this->EntityManager).Object;
      puVar4 = *(uchar **)(pFVar12 + 8);
      pUVar5 = *(UScriptStruct **)pFVar12;
      if (Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar9 = Z_Construct_UPackage__Script_MassEntity();
        Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMassConstSharedFragment,(UObject *)pUVar9,
                             L"MassConstSharedFragment");
        if (Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton !=
            (UScriptStruct *)0x0) goto LAB_1471ffa29;
LAB_1471ffa4d:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InScriptStruct.IsChildOf(TBaseStructure<FMassConstSharedFragment>::Get())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                           ,0x394,
                           L"Given struct doesn\'t represent a valid const shared fragment type. Make sure to inherit from FMassConstSharedFragment or one of its child-types."
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
LAB_1471ffa29:
        iVar2 = (int)(Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton)->
                     _padding_;
        if (((int)pUVar5->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
            &(Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton)->_padding_)
           ) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (!bVar7) goto LAB_1471ffa4d;
      }
      uVar8 = StructUtils::GetStructInstanceCrc32(pUVar5,puVar4,0);
      pFVar11 = FMassEntityManager::TSharedFragmentsContainer<FConstSharedStruct>::FindOrAdd
                          (&pFVar3->ConstSharedFragmentsContainer,uVar8,pUVar5,puVar4);
      FMassArchetypeSharedFragmentValues::Add_GetRef
                (&this->CachedSharedFragmentValues,&local_48,pFVar11);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.StructMemoryPtr.SharedReferenceCount.ReferenceController);
      pFVar12 = pFVar12 + 0x10;
    }
    if ((this->CachedSharedFragmentValues).bSorted == false) {
      AlgoImpl::
      IntroSortInternal<FConstSharedStruct,int,FIdentityFunctor,TDereferenceWrapper<FConstSharedStruct,FStructTypeSortOperator>_>
                ((FConstSharedStruct *)
                 (this->CachedSharedFragmentValues).ConstSharedFragments.AllocatorInstance.Data,
                 (this->CachedSharedFragmentValues).ConstSharedFragments.ArrayNum,local_res8[0],
                 (FStructTypeSortOperator *)local_res18);
      AlgoImpl::
      IntroSortInternal<FSharedStruct,int,FIdentityFunctor,TDereferenceWrapper<FSharedStruct,FStructTypeSortOperator>_>
                ((FSharedStruct *)
                 (this->CachedSharedFragmentValues).SharedFragments.AllocatorInstance.Data,
                 (this->CachedSharedFragmentValues).SharedFragments.ArrayNum,local_res8[0],
                 (FStructTypeSortOperator *)local_res20);
      (this->CachedSharedFragmentValues).bSorted = true;
    }
  }
  return;
}

// Commit @ 147203e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMassEntityHandle __thiscall UE::Mass::FEntityBuilder::Commit(FEntityBuilder *this)

{
  int iVar1;
  FMassEntityManager *pFVar2;
  FMassCommandBuffer *this_00;
  FInstancedStruct *pFVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  FMassEntityHandle FVar7;
  TArrayView<FInstancedStruct_const_,int> *pTVar8;
  FMassEntityHandle in_RDX;
  longlong lVar9;
  undefined1 auStackY_168 [32];
  undefined1 local_128 [16];
  FPendingRelationParams *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  TArrayView<UE::Mass::FEntityBuilder::FPendingRelationParams_const_,int> local_108;
  TArrayView<FInstancedStruct_const_,int> local_f8;
  TArrayView<FInstancedStruct_const_,int> local_e8;
  <lambda_2> local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (this->State == Committed) {
    if (AITestSuite::TestsInProgress < 1) {
      ``UE::Mass::FEntityBuilder::Commit'::__l3::<lambda_1>::operator()'::__l16::<lambda_1>::
      operator()(local_128);
    }
    else if (2 < (byte)LogTestableEnsures._0_1_) {
      Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Trying_to_commi_151570cf0,
                 (FLogCategoryBase *)&LogTestableEnsures);
      *(FMassEntityHandle *)in_RDX = this->EntityHandle;
      return in_RDX;
    }
    *(FMassEntityHandle *)in_RDX = this->EntityHandle;
  }
  else {
    bVar5 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                      ((FConstBitSetContainer *)&this->Composition);
    if ((((bVar5) &&
         (bVar5 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&(this->Composition).Tags), bVar5)) &&
        (bVar5 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                           ((FConstBitSetContainer *)&(this->Composition).ChunkFragments), bVar5))
       && ((bVar5 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                              ((FConstBitSetContainer *)&(this->Composition).SharedFragments), bVar5
           && (bVar5 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                                 ((FConstBitSetContainer *)&(this->Composition).ConstSharedFragments
                                 ), bVar5)))) {
      if (FVisualLogger::bIsRecording != 0) {
        pUVar6 = FWeakObjectPtr::Get(&(((this->EntityManager).Object)->Owner).WeakPtr);
        FVisualLogger::CategorizedLogfImpl
                  (pUVar6,(FName *)&LogMass.field_0x4,Warning,
                   L"%hs: Attempting to commit while no composition has been configured.");
      }
      if (2 < (byte)LogMass._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
      }
      if (((this->EntityHandle).Index != 0) && ((this->EntityHandle).SerialNumber != 0)) {
        if (FVisualLogger::bIsRecording != 0) {
          pUVar6 = FWeakObjectPtr::Get(&(((this->EntityManager).Object)->Owner).WeakPtr);
          FVisualLogger::CategorizedLogfImpl
                    (pUVar6,(FName *)&LogMass.field_0x4,Error,
                     L"Failing to commit while the entity handle has already been reserved.");
        }
        if (1 < (byte)LogMass._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
        }
      }
      *(undefined8 *)in_RDX = 0;
    }
    else {
      CacheEntityHandle(this);
      CacheSharedFragmentValue(this);
      CacheArchetypeHandle(this);
      if ((int)((this->EntityManager).Object)->ProcessingScopeCount < 1) {
        local_118 = (FPendingRelationParams *)(this->RelationsParams).AllocatorInstance.Data;
        iVar1 = (this->RelationsParams).ArrayNum;
        if ((iVar1 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          FVar7 = (FMassEntityHandle)(*pcVar4)();
          return FVar7;
        }
        iStack_110 = iVar1;
        pTVar8 = TArrayView<FInstancedStruct_const_,int>::
                 TArrayView<FInstancedStruct_const_,int><TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_&,TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>
                           (&local_e8,&this->Fragments);
        local_108._12_4_ = uStack_10c;
        local_108.ArrayNum = iStack_110;
        local_f8.DataPtr = pTVar8->DataPtr;
        local_f8.ArrayNum = pTVar8->ArrayNum;
        local_f8._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
        local_108.DataPtr = local_118;
        CreateEntityImpl((this->EntityManager).Object,this->EntityHandle,
                         &this->CachedArchetypeHandle,&this->CachedSharedFragmentValues,&local_f8,
                         &local_108);
      }
      else {
        pFVar2 = (this->EntityManager).Object;
        this_00 = (pFVar2->DeferredCommandBuffers).Elements[pFVar2->OpenedCommandBufferIndex].Object
        ;
        local_d8.ReservedEntityHandle = this->EntityHandle;
        FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues
                  (&local_d8.SharedFragmentValues,&this->CachedSharedFragmentValues);
        local_d8.ArchetypeHandle.DataPtr.Object = (this->CachedArchetypeHandle).DataPtr.Object;
        local_d8.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController =
             (this->CachedArchetypeHandle).DataPtr.SharedReferenceCount.ReferenceController;
        if (local_d8.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_d8.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController)->
          SharedReferenceCount =
               (atomic<int>)
               ((int)(local_d8.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        iVar1 = (this->Fragments).ArrayNum;
        pFVar3 = (FInstancedStruct *)(this->Fragments).AllocatorInstance.Data;
        local_d8.FragmentsCopy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.FragmentsCopy.ArrayNum = iVar1;
        if (iVar1 == 0) {
          local_d8.FragmentsCopy.ArrayMax = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar1,0,&local_d8.FragmentsCopy.AllocatorInstance,iVar1,
                     &local_d8.FragmentsCopy.ArrayMax);
          ConstructItems<FInstancedStruct,FInstancedStruct,int>
                    (local_d8.FragmentsCopy.AllocatorInstance.Data,pFVar3,iVar1);
        }
        local_d8.RelationsParams.ArrayNum = (this->RelationsParams).ArrayNum;
        lVar9 = (longlong)local_d8.RelationsParams.ArrayNum;
        _Src = (this->RelationsParams).AllocatorInstance.Data;
        local_d8.RelationsParams.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_d8.RelationsParams.ArrayNum == 0) {
          local_d8.RelationsParams.ArrayMax = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,local_d8.RelationsParams.ArrayNum,0,
                     &local_d8.RelationsParams.AllocatorInstance,local_d8.RelationsParams.ArrayNum,
                     &local_d8.RelationsParams.ArrayMax);
          memcpy(local_d8.RelationsParams.AllocatorInstance.Data,_Src,lVar9 * 0x18);
        }
        FMassCommandBuffer::
        PushCommand<FMassDeferredCommand<1>,_UE::Mass::FEntityBuilder::Commit_::__l56::<lambda_2>_>
                  (this_00,&local_d8);
        if (local_d8.RelationsParams.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.RelationsParams.AllocatorInstance.Data);
        }
        DestructItems<FInstancedStruct,int>
                  ((FInstancedStruct *)local_d8.FragmentsCopy.AllocatorInstance.Data,
                   local_d8.FragmentsCopy.ArrayNum);
        if ((FInstancedStruct *)local_d8.FragmentsCopy.AllocatorInstance.Data !=
            (FInstancedStruct *)0x0) {
          FMemory::Free(local_d8.FragmentsCopy.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController);
        FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues
                  (&local_d8.SharedFragmentValues);
      }
      this->State = Committed;
      *(FMassEntityHandle *)in_RDX = this->EntityHandle;
    }
  }
  return in_RDX;
}

// CommitAndReprepare @ 147204230

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassEntityHandle __thiscall UE::Mass::FEntityBuilder::CommitAndReprepare(FEntityBuilder *this)

{
  bool bVar1;
  FMassEntityHandle in_RDX;
  undefined1 local_res8 [8];
  
  Commit(this);
  if ((this->State != Committed) &&
     (bVar1 = `UE::Mass::FEntityBuilder::Reprepare'::__l3::<lambda_1>::operator()(local_res8),
     !bVar1)) {
    return in_RDX;
  }
  this->State = ReadyToCommit;
  (this->EntityHandle).Index = 0;
  (this->EntityHandle).SerialNumber = 0;
  return in_RDX;
}

// ConditionallyReleaseEntityHandle @ 147204df0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall UE::Mass::FEntityBuilder::ConditionallyReleaseEntityHandle(FEntityBuilder *this)

{
  if ((((this->EntityHandle).Index != 0) && ((this->EntityHandle).SerialNumber != 0)) &&
     (this->State != Committed)) {
    FMassEntityManager::ReleaseReservedEntity((this->EntityManager).Object,this->EntityHandle);
    (this->EntityHandle).Index = 0;
    (this->EntityHandle).SerialNumber = 0;
    return;
  }
  (this->EntityHandle).Index = 0;
  (this->EntityHandle).SerialNumber = 0;
  return;
}

// CopyDataFromEntity @ 147206d20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Mass::FEntityBuilder::CopyDataFromEntity(FEntityBuilder *this,FMassEntityHandle param_1)

{
  atomic<int> *paVar1;
  FMassEntityManager *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  EState EVar7;
  IEntityStorageInterface *pIVar8;
  longlong *plVar9;
  FMassArchetypeCompositionDescriptor *pFVar10;
  FMassArchetypeCompositionDescriptor *pFVar11;
  StorageSelector local_res8 [16];
  StorageSelector local_res18 [8];
  StorageSelector local_res20 [8];
  undefined1 local_38 [16];
  
  if (param_1.Index == 0) {
LAB_147206ea4:
    if (AITestSuite::TestsInProgress < 1) {
      if (param_1.Index != 0) {
        pFVar2 = (this->EntityManager).Object;
        local_res20[0] = (StorageSelector)0x0;
        pIVar8 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                   ::__l2::Invokers[(pFVar2->EntityStorage).TypeIndex])
                           (local_res20,&pFVar2->EntityStorage);
        cVar4 = (**(code **)((longlong)*pIVar8 + 0x58))(pIVar8,param_1);
        if (cVar4 != '\0') {
          return false;
        }
      }
      ``UE::Mass::FEntityBuilder::CopyDataFromEntity'::__l3::<lambda_1>::operator()'::__l16::
      <lambda_1>::operator()(local_38);
    }
    else if (2 < (byte)LogTestableEnsures._0_1_) {
      Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u__hs_expecting_a_1515713f8,
                 (FLogCategoryBase *)&LogTestableEnsures);
      return false;
    }
    return false;
  }
  pFVar2 = (this->EntityManager).Object;
  local_res8[0] = (StorageSelector)0x0;
  pIVar8 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(pFVar2->EntityStorage).TypeIndex])(local_res8,&pFVar2->EntityStorage)
  ;
  cVar4 = (**(code **)((longlong)*pIVar8 + 0x58))(pIVar8);
  if (cVar4 == '\0') goto LAB_147206ea4;
  Reset(this,false);
  pFVar2 = (this->EntityManager).Object;
  bVar5 = FMassEntityManager::IsEntityValid(pFVar2,param_1);
  if (bVar5) {
    local_res18[0] = (StorageSelector)0x0;
    pIVar8 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(pFVar2->EntityStorage).TypeIndex])
                       (local_res18,&pFVar2->EntityStorage);
    plVar9 = (longlong *)
             (**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,(ulonglong)param_1 & 0xffffffff);
    pFVar10 = (FMassArchetypeCompositionDescriptor *)plVar9[1];
    pFVar11 = (FMassArchetypeCompositionDescriptor *)*plVar9;
    if (pFVar10 != (FMassArchetypeCompositionDescriptor *)0x0) {
      LOCK();
      paVar1 = (atomic<int> *)&(pFVar10->Fragments).field_0x8;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    if (pFVar11 != (FMassArchetypeCompositionDescriptor *)0x0) goto LAB_147206e01;
  }
  else {
    pFVar10 = (FMassArchetypeCompositionDescriptor *)0x0;
    pFVar11 = pFVar10;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("ArchetypeHandle.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                     ,0x1ff,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
LAB_147206e01:
  Mass::Private::FEntityBuilderHelper::CopyFromEntity<FMassFragment>(this,param_1,pFVar11);
  Mass::Private::FEntityBuilderHelper::CopyFromEntity<FMassSharedFragment>(this,param_1,pFVar11);
  Mass::Private::FEntityBuilderHelper::CopyFromEntity<FMassConstSharedFragment>
            (this,param_1,pFVar11);
  FMassArchetypeCompositionDescriptor::operator=(&this->Composition,pFVar11);
  bVar5 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                    ((FConstBitSetContainer *)&this->Composition);
  if ((((bVar5) &&
       (bVar5 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                          ((FConstBitSetContainer *)&(this->Composition).Tags), bVar5)) &&
      (bVar5 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                         ((FConstBitSetContainer *)&(this->Composition).ChunkFragments), bVar5)) &&
     ((bVar5 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                         ((FConstBitSetContainer *)&(this->Composition).SharedFragments), bVar5 &&
      (bVar5 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                         ((FConstBitSetContainer *)&(this->Composition).ConstSharedFragments), bVar5
      )))) {
    EVar7 = Empty;
  }
  else {
    EVar7 = ReadyToCommit;
  }
  this->State = EVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
  return true;
}

// CreateEntityImpl @ 147209dc0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Mass::FEntityBuilder::CreateEntityImpl
          (FMassEntityManager *param_1,FMassEntityHandle param_2,FMassArchetypeHandle *param_3,
          FMassArchetypeSharedFragmentValues *param_4,
          TArrayView<FInstancedStruct_const_,int> *param_5,
          TArrayView<UE::Mass::FEntityBuilder::FPendingRelationParams_const_,int> *param_6)

{
  FPendingRelationParams *pFVar1;
  code *pcVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  FPendingRelationParams *pFVar5;
  FPendingRelationParams *local_res8;
  FMassEntityHandle local_128;
  FMassEntityHandle local_120;
  FMassEntityHandle local_118;
  FMassEntityHandle local_110;
  FMassEntityHandle *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  FMassEntityHandle *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  FMassEntityHandle *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_d8;
  FMassEntityHandle *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_b8;
  TArrayView<FInstancedStruct_const_,int> local_a8;
  TArrayView<FMassEntityHandle,int> local_98;
  TArrayView<FMassEntityHandle,int> local_88;
  TArrayView<FMassEntityHandle,int> local_78;
  TArrayView<FMassEntityHandle,int> local_68;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_58;
  undefined4 local_3c;
  undefined4 local_2c;
  
  FMassObserverManager::GetOrMakeCreationContext(&param_1->ObserverManager,&local_58);
  if (AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)param_1->ProcessingScopeCount) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsProcessing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x27d,
                           L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (0 < (int)param_1->ProcessingScopeCount) {
    if (1 < (byte)LogTestableEnsures._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    }
    goto LAB_147209ee0;
  }
  bVar3 = FMassEntityManager::IsEntityBuilt(param_1,param_2);
  if ((bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsEntityBuilt(Entity)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x27e,L"Expecting an entity that is not already built"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((param_3->DataPtr).Object == (FMassArchetypeData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x27f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FMassEntityManager::InternalBuildEntity(param_1,param_2,param_3,param_4);
LAB_147209ee0:
  local_a8.DataPtr = param_5->DataPtr;
  local_a8.ArrayNum = param_5->ArrayNum;
  local_a8._12_4_ = *(undefined4 *)&param_5->field_0xc;
  FMassEntityManager::SetEntityFragmentValues(param_1,param_2,&local_a8);
  pFVar5 = param_6->DataPtr;
  pFVar1 = pFVar5 + param_6->ArrayNum;
  do {
    if (pFVar5 == pFVar1) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      return;
    }
    if (pFVar5->OtherEntityRole == Subject) {
      local_110 = pFVar5->OtherEntity;
      local_f8 = &local_118;
      uStack_f0 = 1;
      local_c8 = &local_110;
      uStack_ec = local_3c;
      local_78._12_4_ = local_3c;
      local_78.ArrayNum = 1;
      uStack_c0 = 1;
      local_68._12_4_ = uStack_bc;
      local_68.ArrayNum = 1;
      local_118 = param_2;
      local_78.DataPtr = local_f8;
      local_68.DataPtr = local_c8;
      FRelationManager::CreateRelationInstances
                (&param_1->RelationManager,&local_b8,
                 (FTypeHandle)(pFVar5->RelationTypeHandle).TypeKey.ObjectKey,&local_68,&local_78);
      FVar4.Data = local_b8.AllocatorInstance.Data;
      if ((0x7fffffff < (uint)local_b8.ArrayNum) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         FVar4.Data = local_b8.AllocatorInstance.Data, bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
LAB_14720a0a2:
      if (FVar4.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar4.Data);
      }
    }
    else {
      if (pFVar5->OtherEntityRole == Object) {
        local_128 = pFVar5->OtherEntity;
        local_108 = &local_128;
        uStack_100 = 1;
        local_e8 = &local_120;
        uStack_fc = local_2c;
        local_98._12_4_ = local_2c;
        local_98.ArrayNum = 1;
        uStack_e0 = 1;
        local_88._12_4_ = uStack_dc;
        local_88.ArrayNum = 1;
        local_120 = param_2;
        local_98.DataPtr = local_108;
        local_88.DataPtr = local_e8;
        FRelationManager::CreateRelationInstances
                  (&param_1->RelationManager,&local_d8,
                   (FTypeHandle)(pFVar5->RelationTypeHandle).TypeKey.ObjectKey,&local_88,&local_98);
        FVar4.Data = local_d8.AllocatorInstance.Data;
        if ((0x7fffffff < (uint)local_d8.ArrayNum) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , FVar4.Data = local_d8.AllocatorInstance.Data, bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto LAB_14720a0a2;
      }
      local_res8 = pFVar5;
      `UE::Mass::FEntityBuilder::CreateEntityImpl'::__l8::<lambda_1>::operator()(&local_res8);
    }
    pFVar5 = pFVar5 + 1;
  } while( true );
}

// ForEachRelation @ 14721d220

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::FEntityBuilder::ForEachRelation
          (FEntityBuilder *this,
          TFunctionRef<bool___cdecl(UE::Mass::FEntityBuilder::FPendingRelationParams_&)> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  uVar6 = (this->RelationsParams).ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar8 = (longlong)(int)uVar6 * 0x18;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->RelationsParams).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      cVar4 = (**(code **)param_1)
                        (*(undefined8 *)&param_1->field_0x8,
                         (this->RelationsParams).AllocatorInstance.Data + lVar8);
      if (cVar4 == '\0') {
        uVar5 = 0;
        if ((int)uVar6 < (this->RelationsParams).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        _Dst = (this->RelationsParams).AllocatorInstance.Data + lVar8;
        iVar7 = ~uVar6 + (this->RelationsParams).ArrayNum;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 0x18,(longlong)iVar7 * 0x18);
        }
        piVar1 = &(this->RelationsParams).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      lVar8 = lVar8 + -0x18;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  return;
}

// GetArchetypeHandle @ 14721ed20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassArchetypeHandle * __thiscall
UE::Mass::FEntityBuilder::GetArchetypeHandle
          (FEntityBuilder *this,FMassArchetypeHandle *__return_storage_ptr__)

{
  FMassArchetypeHandle *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FMassArchetypeHandle *pFVar3;
  FMassArchetypeHandle local_18;
  
  pFVar1 = &this->CachedArchetypeHandle;
  if ((pFVar1->DataPtr).Object == (FMassArchetypeData *)0x0) {
    pFVar3 = FMassEntityManager::CreateArchetype
                       ((this->EntityManager).Object,&local_18,&this->Composition,
                        &this->ArchetypeCreationParams);
    if (pFVar1 != pFVar3) {
      (pFVar1->DataPtr).Object = (pFVar3->DataPtr).Object;
      (pFVar3->DataPtr).Object = (FMassArchetypeData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CachedArchetypeHandle).DataPtr.SharedReferenceCount,
                 &(pFVar3->DataPtr).SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.DataPtr.SharedReferenceCount.ReferenceController);
  }
  (__return_storage_ptr__->DataPtr).Object = (pFVar1->DataPtr).Object;
  pTVar2 = (this->CachedArchetypeHandle).DataPtr.SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->DataPtr).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetEntityHandle @ 1472214b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassEntityHandle __thiscall UE::Mass::FEntityBuilder::GetEntityHandle(FEntityBuilder *this)

{
  FMassEntityHandle in_RDX;
  
  CacheEntityHandle(this);
  *(FMassEntityHandle *)in_RDX = this->EntityHandle;
  return in_RDX;
}

// InvalidateCachedData @ 147231e60

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall UE::Mass::FEntityBuilder::InvalidateCachedData(FEntityBuilder *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CachedArchetypeHandle != (FMassArchetypeHandle *)&local_18) {
    (this->CachedArchetypeHandle).DataPtr.Object = (FMassArchetypeData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CachedArchetypeHandle).DataPtr.SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  FMassArchetypeSharedFragmentValues::Reset(&this->CachedSharedFragmentValues);
  return;
}

// Make @ 147234c30

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityBuilder * __cdecl
UE::Mass::FEntityBuilder::Make
          (FEntityBuilder *__return_storage_ptr__,TSharedRef<FMassEntityManager,1> *param_1,
          FMassArchetypeCompositionDescriptor *param_2,
          TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FSharedStruct,TSizedDefaultAllocator<32>_> *param_5)

{
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FSharedStruct *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FInstancedStruct *pFVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  FEntityBuilder *pFVar13;
  TArrayView<FInstancedStruct_const_,int> *pTVar14;
  UObject *pUVar15;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  TArrayView<FInstancedStruct_const_,int> local_78;
  TArrayView<FConstSharedStruct_const_,int> local_68;
  TArrayView<FSharedStruct_const_,int> local_58;
  TArrayView<FInstancedStruct_const_,int> local_48 [2];
  
  FEntityBuilder(__return_storage_ptr__,param_1);
  puVar8 = (undefined8 *)CONCAT71(param_5._1_7_,param_5._0_1_);
  if (Debug::bValidateEntityBuilderMakeInput != false) {
    pFVar3 = (FSharedStruct *)*puVar8;
    iVar2 = *(int *)(puVar8 + 1);
    if (iVar2 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        pFVar13 = (FEntityBuilder *)(*pcVar5)();
        return pFVar13;
      }
    }
    pFVar4 = (param_4->AllocatorInstance).Data;
    iVar12 = param_4->ArrayNum;
    if (iVar12 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        pFVar13 = (FEntityBuilder *)(*pcVar5)();
        return pFVar13;
      }
    }
    pTVar14 = TArrayView<FInstancedStruct_const_,int>::
              TArrayView<FInstancedStruct_const_,int><TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_&,TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>
                        (local_48,param_3);
    pFVar6 = pTVar14->DataPtr;
    uVar7._0_4_ = pTVar14->ArrayNum;
    uVar7._4_4_ = *(undefined4 *)&pTVar14->field_0xc;
    pUVar15 = FWeakObjectPtr::Get(&(param_1->Object->Owner).WeakPtr);
    local_78.DataPtr = pFVar6;
    local_78._8_8_ = uVar7;
    bVar9 = Mass::Private::
            CheckStructContainer<FMassFragment,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FInstancedStruct>
                      (&local_78,&param_2->Fragments,pUVar15);
    local_68._12_4_ = uStack_8c;
    local_68.ArrayNum = iVar12;
    local_68.DataPtr = (FConstSharedStruct *)pFVar4;
    bVar10 = Mass::Private::
             CheckStructContainer<FMassConstSharedFragment,TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FConstSharedStruct>
                       (&local_68,&param_2->ConstSharedFragments,pUVar15);
    local_58._12_4_ = uStack_7c;
    local_58.ArrayNum = iVar2;
    local_58.DataPtr = pFVar3;
    bVar11 = Mass::Private::
             CheckStructContainer<FMassSharedFragment,TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FSharedStruct>
                       (&local_58,&param_2->SharedFragments,pUVar15);
    if (bVar11 || (bVar10 || bVar9)) {
      param_5._0_1_ = 0;
      `UE::Mass::FEntityBuilder::Make'::__l5::<lambda_1>::operator()(&param_5);
    }
  }
  FMassArchetypeCompositionDescriptor::operator=(&__return_storage_ptr__->Composition,param_2);
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::operator=
            (&__return_storage_ptr__->Fragments,param_3);
  pTVar1 = &__return_storage_ptr__->SharedFragments;
  if (pTVar1 == (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *)puVar8) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pFVar13 = (FEntityBuilder *)(*pcVar5)();
      return pFVar13;
    }
  }
  iVar2 = *(int *)(puVar8 + 1);
  if (iVar2 != 0) {
    iVar12 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,iVar2,&pTVar1->AllocatorInstance,
                        &(__return_storage_ptr__->SharedFragments).ArrayNum,
                        &(__return_storage_ptr__->SharedFragments).ArrayMax);
    RelocateConstructItems<FInstancedStruct,FSharedStruct,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 0x10,(FSharedStruct *)*puVar8,
               iVar2);
    *(undefined4 *)(puVar8 + 1) = 0;
  }
  pTVar1 = &__return_storage_ptr__->ConstSharedFragments;
  if (pTVar1 == (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *)param_4) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pFVar13 = (FEntityBuilder *)(*pcVar5)();
      return pFVar13;
    }
  }
  iVar2 = param_4->ArrayNum;
  if (iVar2 != 0) {
    iVar12 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,iVar2,&pTVar1->AllocatorInstance,
                        &(__return_storage_ptr__->ConstSharedFragments).ArrayNum,
                        &(__return_storage_ptr__->ConstSharedFragments).ArrayMax);
    RelocateConstructItems<FInstancedStruct,FConstSharedStruct,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 0x10,
               (FConstSharedStruct *)(param_4->AllocatorInstance).Data,iVar2);
    param_4->ArrayNum = 0;
  }
  return __return_storage_ptr__;
}

// Make @ 147234ee0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityBuilder * __cdecl
UE::Mass::FEntityBuilder::Make
          (FEntityBuilder *__return_storage_ptr__,TSharedRef<FMassEntityManager,1> *param_1,
          FMassArchetypeCompositionDescriptor *param_2,
          TArrayView<FInstancedStruct_const_,int> *param_3,
          TArrayView<FConstSharedStruct_const_,int> *param_4,
          TArrayView<FSharedStruct_const_,int> *param_5)

{
  int *piVar1;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  TArrayView<FSharedStruct_const_,int> *pTVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  UObject *pUVar8;
  TArrayView<FInstancedStruct_const_,int> local_38;
  
  FEntityBuilder(__return_storage_ptr__,param_1);
  pTVar4 = param_5;
  if (Debug::bValidateEntityBuilderMakeInput != false) {
    pUVar8 = FWeakObjectPtr::Get(&(param_1->Object->Owner).WeakPtr);
    local_38.DataPtr = param_3->DataPtr;
    local_38.ArrayNum = param_3->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&param_3->field_0xc;
    bVar5 = Mass::Private::
            CheckStructContainer<FMassFragment,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FInstancedStruct>
                      (&local_38,&param_2->Fragments,pUVar8);
    local_38.DataPtr = (FInstancedStruct *)param_4->DataPtr;
    local_38.ArrayNum = param_4->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&param_4->field_0xc;
    bVar6 = Mass::Private::
            CheckStructContainer<FMassConstSharedFragment,TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FConstSharedStruct>
                      ((TArrayView<FConstSharedStruct_const_,int> *)&local_38,
                       &param_2->ConstSharedFragments,pUVar8);
    local_38.DataPtr = (FInstancedStruct *)pTVar4->DataPtr;
    local_38.ArrayNum = pTVar4->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&pTVar4->field_0xc;
    bVar7 = Mass::Private::
            CheckStructContainer<FMassSharedFragment,TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FSharedStruct>
                      ((TArrayView<FSharedStruct_const_,int> *)&local_38,&param_2->SharedFragments,
                       pUVar8);
    if (bVar7 || (bVar6 || bVar5)) {
      `UE::Mass::FEntityBuilder::Make'::__l5::<lambda_1>::operator()(&param_5);
    }
  }
  FMassArchetypeCompositionDescriptor::operator=(&__return_storage_ptr__->Composition,param_2);
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::operator=<FInstancedStruct_const_,int>
            (&__return_storage_ptr__->Fragments,param_3);
  pTVar2 = &__return_storage_ptr__->SharedFragments;
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(pTVar2->AllocatorInstance).Data,
             (__return_storage_ptr__->SharedFragments).ArrayNum);
  iVar3 = pTVar4->ArrayNum;
  piVar1 = &(__return_storage_ptr__->SharedFragments).ArrayMax;
  (__return_storage_ptr__->SharedFragments).ArrayNum = iVar3;
  if ((iVar3 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FInstancedStruct,FSharedStruct,int>
              ((pTVar2->AllocatorInstance).Data,pTVar4->DataPtr,iVar3);
  }
  pTVar2 = &__return_storage_ptr__->ConstSharedFragments;
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(pTVar2->AllocatorInstance).Data,
             (__return_storage_ptr__->ConstSharedFragments).ArrayNum);
  iVar3 = param_4->ArrayNum;
  piVar1 = &(__return_storage_ptr__->ConstSharedFragments).ArrayMax;
  (__return_storage_ptr__->ConstSharedFragments).ArrayNum = iVar3;
  if ((iVar3 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FInstancedStruct,FConstSharedStruct,int>
              ((pTVar2->AllocatorInstance).Data,param_4->DataPtr,iVar3);
  }
  return __return_storage_ptr__;
}

// Reprepare @ 147248660

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall UE::Mass::FEntityBuilder::Reprepare(FEntityBuilder *this)

{
  bool bVar1;
  undefined1 local_res8 [32];
  
  if ((this->State != Committed) &&
     (bVar1 = `UE::Mass::FEntityBuilder::Reprepare'::__l3::<lambda_1>::operator()(local_res8),
     !bVar1)) {
    return;
  }
  this->State = ReadyToCommit;
  (this->EntityHandle).Index = 0;
  (this->EntityHandle).SerialNumber = 0;
  return;
}

// Reset @ 1472489d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall UE::Mass::FEntityBuilder::Reset(FEntityBuilder *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  FInstancedStruct *pFVar3;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if (param_1) {
    if ((((this->EntityHandle).Index == 0) || ((this->EntityHandle).SerialNumber == 0)) ||
       (this->State == Committed)) {
      (this->EntityHandle).Index = 0;
      (this->EntityHandle).SerialNumber = 0;
    }
    else {
      FMassEntityManager::ReleaseReservedEntity((this->EntityManager).Object,this->EntityHandle);
      (this->EntityHandle).Index = 0;
      (this->EntityHandle).SerialNumber = 0;
    }
  }
  if (this->State != Empty) {
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->CachedArchetypeHandle != (FMassArchetypeHandle *)&local_18) {
      (this->CachedArchetypeHandle).DataPtr.Object = (FMassArchetypeData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CachedArchetypeHandle).DataPtr.SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    FMassArchetypeSharedFragmentValues::Reset(&this->CachedSharedFragmentValues);
    this->State = Empty;
    *(undefined4 *)&(this->Composition).Fragments.field_0x18 = 0;
    piVar1 = &(this->Fragments).ArrayMax;
    *(undefined4 *)&(this->Composition).Tags.field_0x18 = 0;
    *(undefined4 *)&(this->Composition).ChunkFragments.field_0x18 = 0;
    *(undefined4 *)&(this->Composition).SharedFragments.field_0x18 = 0;
    *(undefined4 *)&(this->Composition).ConstSharedFragments.field_0x18 = 0;
    pFVar3 = (FInstancedStruct *)(this->Fragments).AllocatorInstance.Data;
    iVar2 = (this->Fragments).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FInstancedStruct,int>(pFVar3,iVar2);
      (this->Fragments).ArrayNum = 0;
      if (*piVar1 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->Fragments).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FInstancedStruct,int>(pFVar3,iVar2);
      (this->Fragments).ArrayNum = 0;
    }
    piVar1 = &(this->SharedFragments).ArrayMax;
    pFVar3 = (FInstancedStruct *)(this->SharedFragments).AllocatorInstance.Data;
    iVar2 = (this->SharedFragments).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FInstancedStruct,int>(pFVar3,iVar2);
      (this->SharedFragments).ArrayNum = 0;
      if (*piVar1 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->SharedFragments).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FInstancedStruct,int>(pFVar3,iVar2);
      (this->SharedFragments).ArrayNum = 0;
    }
    piVar1 = &(this->ConstSharedFragments).ArrayMax;
    pFVar3 = (FInstancedStruct *)(this->ConstSharedFragments).AllocatorInstance.Data;
    iVar2 = (this->ConstSharedFragments).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FInstancedStruct,int>(pFVar3,iVar2);
      (this->ConstSharedFragments).ArrayNum = 0;
      if (*piVar1 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->ConstSharedFragments).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FInstancedStruct,int>(pFVar3,iVar2);
      (this->ConstSharedFragments).ArrayNum = 0;
    }
    (this->RelationsParams).ArrayNum = 0;
    if ((this->RelationsParams).ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->RelationsParams).AllocatorInstance,0,
                 &(this->RelationsParams).ArrayMax);
    }
  }
  return;
}

// SetReservedEntityHandle @ 14724d430

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::FEntityBuilder::SetReservedEntityHandle(FEntityBuilder *this,FMassEntityHandle param_1)

{
  FMassEntityManager *this_00;
  FMassEntityHandle FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  IEntityStorageInterface *pIVar5;
  undefined1 local_res10 [8];
  StorageSelector local_res18 [16];
  
  if ((param_1.Index != 0) && (param_1.SerialNumber != 0)) {
    bVar3 = FMassEntityManager::IsEntityReserved((this->EntityManager).Object,param_1);
    if (bVar3) goto LAB_14724d472;
  }
  local_res10[0] = 0;
  bVar3 = `UE::Mass::FEntityBuilder::SetReservedEntityHandle'::__l3::<lambda_1>::operator()
                    (local_res10);
  if (!bVar3) {
    return false;
  }
LAB_14724d472:
  if (((this->EntityHandle).Index != 0) && ((this->EntityHandle).SerialNumber != 0)) {
    bVar3 = FMassEntityManager::IsEntityReserved((this->EntityManager).Object,this->EntityHandle);
    if (bVar3) {
      if (this->State == Committed) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCommitted() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityBuilder.cpp"
                           ,0x176,
                           L"We only expect to be here when the entity builder has not been `Committed` yet"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      this_00 = (this->EntityManager).Object;
      FVar1 = this->EntityHandle;
      bVar3 = FMassEntityManager::IsEntityBuilt(this_00,FVar1);
      if (bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsEntityBuilt(Entity)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x276,L"Entity is already built, use DestroyEntity() instead");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      local_res18[0] = (StorageSelector)0x0;
      pIVar5 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                 ::__l2::Invokers[(this_00->EntityStorage).TypeIndex])
                         (local_res18,&this_00->EntityStorage);
      (**(code **)((longlong)*pIVar5 + 0x98))(pIVar5,FVar1);
    }
  }
  this->EntityHandle = param_1;
  return true;
}

// operator() @ 150503480

bool __thiscall
`UE::Mass::FEntityBuilder::Add_GetRef<FMassRelationFragment>'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPackage *pUVar4;
  bool bVar5;
  FName local_res10 [3];
  FString local_18;
  
  bVar5 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5239001618761908607>);
  if (bVar2) {
    if (Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassRelationFragment,(UObject *)pUVar4,
                           L"MassRelationFragment");
    }
    local_res10[0] =
         (FName)(Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton)->_padding_;
    ::FName::ToString(local_res10,&local_18);
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5239001618761908607>,
                       &`public:___cdecl_`public:_struct_FMassRelationFragment&___ptr64___cdecl_UE::Mass::FEntityBuilder::Add_GetRef<FMassRelationFragment>(void)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15050351d;
    }
  }
  bVar2 = false;
LAB_15050351d:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150503c40

bool __thiscall `UE::Mass::FEntityBuilder::Reprepare'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5189466382252638545>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5189466382252638545>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150503d00

bool __thiscall
`UE::Mass::FEntityBuilder::SetReservedEntityHandle'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5189466382252638575>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5189466382252638575>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150504000

bool __thiscall `UE::Mass::FEntityBuilder::Make'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5189466382252638456>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5189466382252638456>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150504050

bool __thiscall `UE::Mass::FEntityBuilder::Make'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5189466382252638432>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5189466382252638432>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150504a50

bool __thiscall
`UE::Mass::FEntityBuilder::CreateEntityImpl'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  wchar_t *pwVar4;
  bool bVar5;
  FString local_18;
  
  bVar5 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5189466382252638531>);
  if (bVar2) {
    if (*(char *)(*(longlong *)this + 0x10) == '\x02') {
      pwVar4 = L"INVALID";
    }
    else {
      pwVar4 = L"Object";
      if (*(char *)(*(longlong *)this + 0x10) == '\0') {
        pwVar4 = L"Subject";
      }
    }
    ::FString::FString(&local_18,pwVar4);
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5189466382252638531>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150504add;
    }
  }
  bVar2 = false;
LAB_150504add:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505050a0

bool __thiscall `UE::Mass::FEntityBuilder::Add'::__l19::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5189466382252638797>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5189466382252638797>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150505118;
    }
  }
  bVar2 = false;
LAB_150505118:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

