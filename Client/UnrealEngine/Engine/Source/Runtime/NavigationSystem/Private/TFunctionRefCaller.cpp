// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 19

// Call @ 146d867a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UNavigationSystemV1::UpdateActorAndComponentsInNavOctree'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void,UNavigationSystemV1_&,TSharedRef<FNavigationElement_const_,1>_const_&>
::Call(void *param_1,UNavigationSystemV1 *param_2,TSharedRef<FNavigationElement_const_,1> *param_3)

{
  FNavigationElementHandle *pFVar1;
  FNavigationDataHandler local_38;
  FNavigationElementHandle local_28;
  FNavigationElementHandle local_18;
  
  pFVar1 = FNavigationElement::GetHandle(param_3->Object,&local_18);
  if (UNavigationSystemV1::bStaticRuntimeNavigation == false) {
    local_28.OwnerUObject.WeakPtr = (pFVar1->OwnerUObject).WeakPtr;
    local_28.SubElementId = pFVar1->SubElementId;
    local_38.OctreeController = &param_2->DefaultOctreeController;
    local_38.DirtyAreasController = &param_2->DefaultDirtyAreasController;
    FNavigationDataHandler::UpdateNavOctreeElement(&local_38,&local_28,param_3,0);
  }
  return;
}

// Call @ 146d86810

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Navigation::Private::<lambda_25>::operator()'::__l5::<lambda_1>,void,TSharedRef<FNavigationElement_const_,1>_const_&>
::Call(void *param_1,TSharedRef<FNavigationElement_const_,1> *param_2)

{
  FOutputDevice *this;
  FNavigationElement *pFVar1;
  UObject *pUVar2;
  FString FStack_c8;
  FString FStack_b8;
  FString FStack_a8;
  FString FStack_98;
  FString aFStack_88 [4];
  undefined8 uStack_48;
  
  **(int **)((longlong)param_1 + 8) = **(int **)((longlong)param_1 + 8) + 1;
  this = *(FOutputDevice **)param_1;
  pUVar2 = FWeakObjectPtr::Get(&(param_2->Object->NavigationParent).WeakPtr);
  if (pUVar2 == (UObject *)0x0) {
    ::FString::FString(&FStack_b8,L"None");
  }
  else {
    FStack_c8.Data.AllocatorInstance.Data._0_4_ = *(uint *)&pUVar2->field_0x18;
    FStack_c8.Data.AllocatorInstance.Data._4_4_ = *(uint *)&pUVar2->field_0x1c;
    ::FName::ToString((FName *)&FStack_c8,&FStack_b8);
  }
  pFVar1 = param_2->Object;
  uStack_48._0_1_ = (pFVar1->Bounds).IsValid;
  uStack_48._1_1_ = (pFVar1->Bounds).Pad[0];
  uStack_48._2_1_ = (pFVar1->Bounds).Pad[1];
  uStack_48._3_1_ = (pFVar1->Bounds).Pad[2];
  uStack_48._4_1_ = (pFVar1->Bounds).Pad[3];
  uStack_48._5_1_ = (pFVar1->Bounds).Pad[4];
  uStack_48._6_1_ = (pFVar1->Bounds).Pad[5];
  uStack_48._7_1_ = (pFVar1->Bounds).Pad[6];
  ::FString::PrintfImpl(&FStack_a8,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&FStack_c8,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&FStack_98,L"IsValid=%s, Min=(%s), Max=(%s)");
  if ((FName)FStack_c8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(FStack_c8.Data.AllocatorInstance.Data);
  }
  if (FStack_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.Data.AllocatorInstance.Data);
  }
  FNavigationElement::GetPathName(param_2->Object,aFStack_88);
  FOutputDevice::LogfImpl(this,Log,L"%s bounds: [%s] parent:\'%s\'");
  if (aFStack_88[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(aFStack_88[0].Data.AllocatorInstance.Data);
  }
  if (FStack_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_98.Data.AllocatorInstance.Data);
  }
  if (FStack_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 146d86820

TSharedPtr<FNavigationElement_const_,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNavigationDataHandler::RemoveFromNavOctree'::__l8::<lambda_1>,TSharedPtr<FNavigationElement_const_,1>_const_>
::Call(TSharedPtr<FNavigationElement_const_,1> *__return_storage_ptr__,void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FNavigationElement *pFVar2;
  
  pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)(*(longlong *)param_1 + 0x38) + 0x108);
  pFVar2 = *(FNavigationElement **)(*(longlong *)(*(longlong *)param_1 + 0x38) + 0x100);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = pFVar2;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// Call @ 146d86880

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNavigationSystemV1::UpdateNavRelevantObjectInNavOctree'::__l8::<lambda_1>,void,UNavigationSystemV1_&,TSharedRef<FNavigationElement_const_,1>_const_&>
::Call(void *param_1,UNavigationSystemV1 *param_2,TSharedRef<FNavigationElement_const_,1> *param_3)

{
  FNavigationElementHandle *pFVar1;
  FNavigationDataHandler local_38;
  FNavigationElementHandle local_28;
  FNavigationElementHandle local_18;
  
  pFVar1 = FNavigationElement::GetHandle(param_3->Object,&local_18);
  if (UNavigationSystemV1::bStaticRuntimeNavigation == false) {
    local_28.OwnerUObject.WeakPtr = (pFVar1->OwnerUObject).WeakPtr;
    local_28.SubElementId = pFVar1->SubElementId;
    local_38.OctreeController = &param_2->DefaultOctreeController;
    local_38.DirtyAreasController = &param_2->DefaultDirtyAreasController;
    FNavigationDataHandler::UpdateNavOctreeElement(&local_38,&local_28,param_3,0);
  }
  return;
}

// Call @ 146d868f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNavigationSystemV1::ConditionalPopulateNavOctree'::__l47::<lambda_1>,void,TSharedRef<FNavigationElement_const_,1>_const_&>
::Call(void *param_1,TSharedRef<FNavigationElement_const_,1> *param_2)

{
  TSharedRef<FNavigationElement_const_,1> local_res8 [2];
  FNavigationDataHandler local_18;
  
  local_18.OctreeController = (FNavigationOctreeController *)(*(longlong *)param_1 + 0x2e8);
  local_18.DirtyAreasController = (FNavigationDirtyAreasController *)(*(longlong *)param_1 + 0x490);
  FNavigationDataHandler::RegisterElementWithNavOctree(&local_18,local_res8,(int)param_2);
  return;
}

// Call @ 146d86930

TSharedPtr<FNavigationElement_const_,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNavigationDataHandler::UpdateNavOctreeElementBounds'::__l11::<lambda_1>,TSharedPtr<FNavigationElement_const_,1>_const_>
::Call(TSharedPtr<FNavigationElement_const_,1> *__return_storage_ptr__,void *param_1)

{
  FNavigationElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pFVar1 = *(FNavigationElement **)param_1;
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    __return_storage_ptr__->Object = pFVar1;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = pFVar1;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// Call @ 146d86980

TSharedPtr<FNavigationElement_const_,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNavigationDataHandler::AddLevelCollisionToOctree'::__l14::<lambda_1>,TSharedPtr<FNavigationElement_const_,1>_const_>
::Call(TSharedPtr<FNavigationElement_const_,1> *__return_storage_ptr__,void *param_1)

{
  FNavigationElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pFVar1 = *(FNavigationElement **)param_1;
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    __return_storage_ptr__->Object = pFVar1;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = pFVar1;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// Call @ 146d869d0

TSharedPtr<FNavigationElement_const_,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNavigationDataHandler::AddElementToNavOctree'::__l15::<lambda_1>,TSharedPtr<FNavigationElement_const_,1>_const_>
::Call(TSharedPtr<FNavigationElement_const_,1> *__return_storage_ptr__,void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FNavigationElement *pFVar2;
  
  pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x18);
  pFVar2 = *(FNavigationElement **)(*(longlong *)param_1 + 0x10);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = pFVar2;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// Call @ 146d86a30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNavigationSystemV1::UpdateComponentInNavOctree'::__l23::<lambda_2>,void,UNavigationSystemV1_&,TSharedRef<FNavigationElement_const_,1>_const_&>
::Call(void *param_1,UNavigationSystemV1 *param_2,TSharedRef<FNavigationElement_const_,1> *param_3)

{
  FNavigationElementHandle *pFVar1;
  FNavigationDataHandler local_38;
  FNavigationElementHandle local_28;
  FNavigationElementHandle local_18;
  
  pFVar1 = FNavigationElement::GetHandle(param_3->Object,&local_18);
  if (UNavigationSystemV1::bStaticRuntimeNavigation == false) {
    local_28.OwnerUObject.WeakPtr = (pFVar1->OwnerUObject).WeakPtr;
    local_28.SubElementId = pFVar1->SubElementId;
    local_38.OctreeController = &param_2->DefaultOctreeController;
    local_38.DirtyAreasController = &param_2->DefaultDirtyAreasController;
    FNavigationDataHandler::UpdateNavOctreeElement(&local_38,&local_28,param_3,0);
  }
  return;
}

// Call @ 146d86aa0

TSharedPtr<FNavigationElement_const_,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNavigationDataHandler::AddElementToNavOctree'::__l126::<lambda_2>,TSharedPtr<FNavigationElement_const_,1>_const_>
::Call(TSharedPtr<FNavigationElement_const_,1> *__return_storage_ptr__,void *param_1)

{
  FNavigationElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pFVar1 = *(FNavigationElement **)param_1;
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    __return_storage_ptr__->Object = pFVar1;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = pFVar1;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// Call @ 146d86af0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNavigationSystemV1::UpdateActorAndComponentsInNavOctree'::__l13::<lambda_2>,void,UNavigationSystemV1_&,TSharedRef<FNavigationElement_const_,1>_const_&>
::Call(void *param_1,UNavigationSystemV1 *param_2,TSharedRef<FNavigationElement_const_,1> *param_3)

{
  FNavigationElementHandle *pFVar1;
  FNavigationDataHandler local_38;
  FNavigationElementHandle local_28;
  FNavigationElementHandle local_18;
  
  pFVar1 = FNavigationElement::GetHandle(param_3->Object,&local_18);
  if (UNavigationSystemV1::bStaticRuntimeNavigation == false) {
    local_28.OwnerUObject.WeakPtr = (pFVar1->OwnerUObject).WeakPtr;
    local_28.SubElementId = pFVar1->SubElementId;
    local_38.OctreeController = &param_2->DefaultOctreeController;
    local_38.DirtyAreasController = &param_2->DefaultDirtyAreasController;
    FNavigationDataHandler::UpdateNavOctreeElement(&local_38,&local_28,param_3,0);
  }
  return;
}

// Call @ 146d86b60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UNavigationSystemV1::UpdateActorAndComponentsInNavOctree'::__l2::<lambda_1>::operator()'::__l15::<lambda_2>,void,UNavigationSystemV1_&,TSharedRef<FNavigationElement_const_,1>_const_&>
::Call(void *param_1,UNavigationSystemV1 *param_2,TSharedRef<FNavigationElement_const_,1> *param_3)

{
  FNavigationElementHandle *pFVar1;
  FNavigationDataHandler local_38;
  FNavigationElementHandle local_28;
  FNavigationElementHandle local_18;
  
  pFVar1 = FNavigationElement::GetHandle(param_3->Object,&local_18);
  if (UNavigationSystemV1::bStaticRuntimeNavigation == false) {
    local_28.OwnerUObject.WeakPtr = (pFVar1->OwnerUObject).WeakPtr;
    local_28.SubElementId = pFVar1->SubElementId;
    local_38.OctreeController = &param_2->DefaultOctreeController;
    local_38.DirtyAreasController = &param_2->DefaultDirtyAreasController;
    FNavigationDataHandler::UpdateNavOctreeElement(&local_38,&local_28,param_3,0);
  }
  return;
}

// Call @ 146d86bd0

TSharedPtr<FNavigationElement_const_,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNavigationDataHandler::AddElementToNavOctree'[::C]::<lambda_3>,TSharedPtr<FNavigationElement_const_,1>_const_>
::Call(TSharedPtr<FNavigationElement_const_,1> *__return_storage_ptr__,void *param_1)

{
  FNavigationElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pFVar1 = *(FNavigationElement **)param_1;
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    __return_storage_ptr__->Object = pFVar1;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = pFVar1;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// Call @ 146de3780

TSharedPtr<FNavigationElement_const_,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ARecastNavMesh::OnStreamingNavDataAdded'::__l20::<lambda_1>,TSharedPtr<FNavigationElement_const_,1>_const_>
::Call(TSharedPtr<FNavigationElement_const_,1> *__return_storage_ptr__,void *param_1)

{
  FNavigationElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pFVar1 = *(FNavigationElement **)param_1;
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    __return_storage_ptr__->Object = pFVar1;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = pFVar1;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// Call @ 146de37d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPImplRecastNavMesh::PostProcessPathInternal'::__l13::<lambda_1>,void,FVisualLogEntry_&>
::Call(void *param_1,FVisualLogEntry *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000146de37d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x18))();
  return;
}

// Call @ 146e44d10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOffMeshData::AddLinks'::__l4::<lambda_1>,void,dtOffMeshLinkCreateParams_&>::
Call(void *param_1,dtOffMeshLinkCreateParams *param_2)

{
  param_2->area = *(uchar *)(*(longlong *)param_1 + 0x72);
  param_2->polyFlag = *(ushort *)(*(longlong *)param_1 + 0x70);
  return;
}

// Call @ 146e44d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOffMeshData::AddLinks'::__l4::<lambda_1>,void,dtOffMeshLinkCreateParams_&>::
Call(void *param_1,dtOffMeshLinkCreateParams *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  uint *puVar5;
  FName FStackX_8;
  FString FStack_18;
  
  pUVar4 = FNavigationLinkBase::GetAreaClass(*(FNavigationLinkBase **)param_1);
  puVar5 = (uint *)TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                   ::Find(*(TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                            **)(*(longlong *)((longlong)param_1 + 8) + 0x10),pUVar4);
  if (puVar5 == (uint *)0x0) {
    if (2 < (byte)LogNavigation._0_1_) {
      if (pUVar4 == (UClass *)0x0) {
        ::FString::FString(&FStack_18,L"None");
      }
      else {
        FStackX_8 = (FName)pUVar4->_padding_;
        ::FName::ToString(&FStackX_8,&FStack_18);
      }
      Logging::Private::BasicLog<3>
                (&`public:___cdecl_`public:_void___cdecl_FOffMeshData::AddLinks(TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const&___ptr64,UE::Math::TTransform<double>_const&___ptr64,int,float)___ptr64'::`4'::<lambda_1>::operator()(dtOffMeshLinkCreateParams&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogNavigation);
      if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    uVar1 = *puVar5;
    if (((uVar1 != (uVar1 & 0xff)) || ((int)uVar1 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    param_2->area = (uchar)uVar1;
    param_2->polyFlag =
         *(ushort *)
          (*(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0x18) + (longlong)(int)*puVar5 * 2);
  }
  return;
}

// Call @ 146e44d40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`AddGeneratedLinks'::__l2::<lambda_2>,void,dtNavLinkBuilderJumpConfig_const_&,double_const_*,double_const_*>
::Call(void *param_1,dtNavLinkBuilderJumpConfig *param_2,double **param_3,double **param_4)

{
  `AddGeneratedLinks'::__l2::<lambda_2>::operator()(param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 146e44d60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`AddGeneratedLinks'::__l2::<lambda_3>,void,dtNavLinkBuilderJumpConfig_const_&,double_const_*,double_const_*>
::Call(void *param_1,dtNavLinkBuilderJumpConfig *param_2,double **param_3,double **param_4)

{
  `AddGeneratedLinks'::__l2::<lambda_3>::operator()(param_1,param_2,*param_3,*param_4);
  return;
}

