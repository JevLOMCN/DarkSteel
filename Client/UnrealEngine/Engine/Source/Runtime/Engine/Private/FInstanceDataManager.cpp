// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 35

// ~FInstanceDataManager @ 1478ab8b0

void __thiscall FInstanceDataManager::~FInstanceDataManager(FInstanceDataManager *this)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PrecomputedOptimizationData).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InstanceDataProxy).SharedReferenceCount.ReferenceController);
  FVar1 = (this->ValidInstanceIdMask).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->InstanceUpdateTracker).Removed.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  pFVar2 = (this->InstanceUpdateTracker).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// MarkChangeHelper<1> @ 147cbaef0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FInstanceDataManager::MarkChangeHelper<1>(FInstanceDataManager *this,int param_1)

{
  UActorComponent *this_00;
  int iVar1;
  
  if (this->TrackingState != Disabled) {
    if (this->TrackingState == Tracked) {
      iVar1 = (int)this->_padding_;
      if (iVar1 == 0) {
        iVar1 = (int)this->_padding_;
      }
      FInstanceAttributeTracker::MarkIndex<1>(&this->InstanceUpdateTracker,param_1,iVar1);
    }
    else {
      this->bAnyInstanceChange = '\x01';
    }
    this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
    if (this_00 != (UActorComponent *)0x0) {
      UActorComponent::MarkRenderInstancesDirty(this_00);
      return;
    }
  }
  return;
}

// MarkChangeHelper<0> @ 147cbaf60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FInstanceDataManager::MarkChangeHelper<0>(FInstanceDataManager *this,int param_1)

{
  UActorComponent *this_00;
  int iVar1;
  
  if (this->TrackingState != Disabled) {
    if (this->TrackingState == Tracked) {
      iVar1 = (int)this->_padding_;
      if (iVar1 == 0) {
        iVar1 = (int)this->_padding_;
      }
      FInstanceAttributeTracker::MarkIndex<0>(&this->InstanceUpdateTracker,param_1,iVar1);
    }
    else {
      this->bAnyInstanceChange = '\x01';
    }
    this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
    if (this_00 != (UActorComponent *)0x0) {
      UActorComponent::MarkRenderInstancesDirty(this_00);
      return;
    }
  }
  return;
}

// FInstanceDataManager @ 147cc45a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInstanceDataManager * __thiscall
FInstanceDataManager::FInstanceDataManager(FInstanceDataManager *this,UPrimitiveComponent *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  UObject *pUVar3;
  UPrimitiveComponent *local_res8;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  FInstanceAttributeTracker::FInstanceAttributeTracker(&this->InstanceUpdateTracker);
  (this->ValidInstanceIdMask).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->ValidInstanceIdMask).NumBits = 0;
  *(undefined8 *)&(this->ValidInstanceIdMask).MaxBits = 0x80;
  this->bNumCustomDataChanged = '\0';
  this->bAnyInstanceChange = '\0';
  this->bPrimitiveTransformChanged = '\0';
  this->TrackingState = Initial;
  (this->AllChangedFlags).Packed = 0;
  (this->InstanceDataProxy).Object = (FUpdatableInstanceDataSceneProxy *)0x0;
  (this->InstanceDataProxy).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->PrimitiveComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->PrimitiveComponent).WeakPtr,(FObjectPtr)&local_res8);
  (this->PrecomputedOptimizationData).Object = (FPrecomputedInstanceSpatialHashData *)0x0;
  (this->PrecomputedOptimizationData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Flags).Packed = 0;
  this->NumCustomDataFloats = 0;
  this->AbsMaxDisplacement = 0.0;
  (this->MeshBounds).Min.field0_0x0._s_0.X = 3.4028235e+38;
  (this->MeshBounds).Min.field0_0x0._s_0.Y = 3.4028235e+38;
  (this->MeshBounds).Min.field0_0x0._s_0.Z = 3.4028235e+38;
  (this->MeshBounds).Max.field0_0x0._s_0.X = -3.4028235e+38;
  (this->MeshBounds).Max.field0_0x0._s_0.Y = -3.4028235e+38;
  (this->MeshBounds).Max.field0_0x0._s_0.Z = -3.4028235e+38;
  bVar2 = FWeakObjectPtr::IsValid(&(this->PrimitiveComponent).WeakPtr);
  if ((bVar2) &&
     (pUVar3 = FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr),
     (*(uint *)&pUVar3->field_0x8 & 0x30) != 0)) {
    this->TrackingState = Disabled;
  }
  return this;
}

// Add @ 147cd0310

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPrimitiveInstanceId __thiscall FInstanceDataManager::Add(FInstanceDataManager *this,int param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  int *piVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  UActorComponent *pUVar9;
  undefined4 in_register_00000014;
  int *piVar10;
  void *_Src;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int in_R8D;
  ForElementType<unsigned_int> FVar14;
  FPrimitiveInstanceId local_38 [4];
  
  piVar10 = (int *)CONCAT44(in_register_00000014,param_1);
  if (this->TrackingState == Disabled) {
    *piVar10 = -1;
    return (FPrimitiveInstanceId)param_1;
  }
  iVar6 = (int)this->_padding_;
  iVar12 = iVar6;
  if (iVar6 == 0) {
    iVar12 = (int)this->_padding_;
  }
  if ((in_R8D != iVar12) && (iVar6 == 0)) {
    CreateExplicitIdentityMapping(this);
  }
  pUVar9 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
  if (pUVar9 != (UActorComponent *)0x0) {
    UActorComponent::MarkRenderInstancesDirty(pUVar9);
  }
  if ((int)this->_padding_ == 0) {
    iVar6 = (int)this->_padding_;
    *(int *)&this->_padding_ = iVar6 + 1;
    MarkChangeHelper<0>(this,iVar6);
    *piVar10 = iVar6;
  }
  else {
    this_00 = &this->ValidInstanceIdMask;
    uVar5 = TBitArray<FDefaultBitArrayAllocator>::FindFromImpl
                      (this_00,false,this->IdSearchStartIndex,(this->ValidInstanceIdMask).NumBits);
    if (uVar5 == 0xffffffff) {
      local_38[0].Id = uVar5;
      uVar5 = TBitArray<FDefaultBitArrayAllocator>::Add(this_00,true);
    }
    else {
      if ((((int)uVar5 < 0) || ((this->ValidInstanceIdMask).NumBits <= (int)uVar5)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return (FPrimitiveInstanceId)iVar6;
      }
      FVar14 = (this->ValidInstanceIdMask).AllocatorInstance.SecondaryData;
      if (FVar14 == (ForElementType<unsigned_int>)0x0) {
        FVar14 = (ForElementType<unsigned_int>)this_00;
      }
      puVar2 = (uint *)((longlong)FVar14 +
                       (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)uVar5 & 0x1f);
      TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(this_00);
    }
    iVar6 = (this->ValidInstanceIdMask).NumBits;
    this->IdSearchStartIndex = uVar5;
    local_38[0].Id = uVar5;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,iVar6,Default);
    iVar6 = (int)this->_padding_;
    if (in_R8D == iVar6) {
      lVar11 = (longlong)local_38[0].Id;
      uVar5 = 0;
      if (local_38[0].Id < (int)this->_padding_) {
        uVar5 = (uint)~local_38[0].Id >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return (FPrimitiveInstanceId)iVar6;
      }
      *(int *)(this->_padding_ + lVar11 * 4) = iVar6;
      if ((((FPrimitiveInstanceId *)this->_padding_ <= local_38) &&
          (local_38 <
           (FPrimitiveInstanceId *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return (FPrimitiveInstanceId)iVar6;
      }
      iVar6 = (int)this->_padding_;
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)this,piVar1);
      }
      *(int *)&this->_padding_ = iVar6 + 1;
      *(int *)(this->_padding_ + (longlong)iVar6 * 4) = local_38[0].Id;
    }
    else {
      if ((in_R8D == iVar12) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsInsert",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceData\\InstanceDataManager.cpp"
                             ,0x10c,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return (FPrimitiveInstanceId)iVar6;
      }
      lVar11 = (longlong)local_38[0].Id;
      uVar13 = 0;
      uVar5 = uVar13;
      if (local_38[0].Id < (int)this->_padding_) {
        uVar5 = (uint)~local_38[0].Id >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return (FPrimitiveInstanceId)iVar6;
      }
      *(int *)(this->_padding_ + lVar11 * 4) = in_R8D;
      if ((((FPrimitiveInstanceId *)this->_padding_ <= local_38) &&
          (local_38 <
           (FPrimitiveInstanceId *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return (FPrimitiveInstanceId)iVar6;
      }
      iVar6 = (int)this->_padding_;
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)this,piVar1);
      }
      *(int *)&this->_padding_ = iVar6 + 1;
      _Src = (void *)(this->_padding_ + (longlong)in_R8D * 4);
      memmove((void *)((longlong)_Src + 4),_Src,(longlong)(iVar6 - in_R8D) << 2);
      *(int *)((longlong)in_R8D * 4 + this->_padding_) = local_38[0].Id;
      uVar5 = in_R8D + 1;
      iVar6 = (int)this->_padding_;
      if ((int)uVar5 < iVar6) {
        lVar11 = (longlong)(int)uVar5 * 4;
        do {
          uVar7 = uVar13;
          if ((int)uVar5 < iVar6) {
            uVar7 = ~uVar5 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return (FPrimitiveInstanceId)iVar6;
          }
          uVar7 = *(uint *)(lVar11 + this->_padding_);
          uVar8 = uVar13;
          if ((int)uVar7 < (int)this->_padding_) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return (FPrimitiveInstanceId)iVar6;
          }
          *(uint *)(this->_padding_ + (longlong)(int)uVar7 * 4) = uVar5;
          iVar6 = (int)this->_padding_;
          if (iVar6 == 0) {
            iVar6 = (int)this->_padding_;
          }
          FInstanceAttributeTracker::MarkIndex<3>(&this->InstanceUpdateTracker,uVar5,iVar6);
          iVar6 = (int)this->_padding_;
          uVar5 = uVar5 + 1;
          lVar11 = lVar11 + 4;
        } while ((int)uVar5 < iVar6);
      }
    }
    iVar6 = (int)this->_padding_;
    *(int *)&this->_padding_ = iVar6;
    if (((this->ValidInstanceIdMask).NumBits < iVar6) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValidInstanceIdMask.Num() >= NumInstances",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceData\\InstanceDataManager.cpp"
                           ,0x127,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return (FPrimitiveInstanceId)iVar6;
    }
    if (this->TrackingState == Tracked) {
      iVar6 = FInstanceIdIndexMap::IdToIndex((FInstanceIdIndexMap *)this,local_38[0]);
      MarkChangeHelper<0>(this,iVar6);
    }
    else {
      this->bAnyInstanceChange = '\x01';
      pUVar9 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
      if (pUVar9 != (UActorComponent *)0x0) {
        UActorComponent::MarkRenderInstancesDirty(pUVar9);
      }
    }
    *piVar10 = local_38[0].Id;
  }
  return (FPrimitiveInstanceId)param_1;
}

// BakedLightingDataChanged @ 147cd54d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FInstanceDataManager::BakedLightingDataChanged(FInstanceDataManager *this,int param_1)

{
  UActorComponent *this_00;
  
  (this->AllChangedFlags).Packed = (this->AllChangedFlags).Packed | 0x10;
  this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
  if (this_00 != (UActorComponent *)0x0) {
    UActorComponent::MarkRenderInstancesDirty(this_00);
    return;
  }
  return;
}

// BakedLightingDataChangedAll @ 147cd5510

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FInstanceDataManager::BakedLightingDataChangedAll(FInstanceDataManager *this)

{
  UActorComponent *this_00;
  
  if (this->TrackingState != Disabled) {
    (this->AllChangedFlags).Packed = (this->AllChangedFlags).Packed | 0x10;
    this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
    if (this_00 != (UActorComponent *)0x0) {
      UActorComponent::MarkRenderInstancesDirty(this_00);
      return;
    }
  }
  return;
}

// ClearChangeTracking @ 147ce46a0

void __thiscall FInstanceDataManager::ClearChangeTracking(FInstanceDataManager *this)

{
  undefined1 *puVar1;
  
  if (this->TrackingState != Disabled) {
    this->TrackingState = Initial;
    FInstanceAttributeTracker::Reset(&this->InstanceUpdateTracker);
    this->bNumCustomDataChanged = '\0';
    this->bAnyInstanceChange = '\0';
    this->bPrimitiveTransformChanged = '\0';
    this->bTransformChangedAllInstances = '\0';
    (this->AllChangedFlags).Packed = 0;
  }
  return;
}

// ClearInstances @ 147ce4890

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FInstanceDataManager::ClearInstances(FInstanceDataManager *this)

{
  undefined1 *puVar1;
  int iVar2;
  UActorComponent *this_00;
  
  if (this->TrackingState != Disabled) {
    FInstanceIdIndexMap::Reset((FInstanceIdIndexMap *)this,0);
    iVar2 = (this->ValidInstanceIdMask).MaxBits;
    (this->ValidInstanceIdMask).NumBits = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      (this->ValidInstanceIdMask).MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->ValidInstanceIdMask,0);
    }
    this->IdSearchStartIndex = 0;
    if (this->TrackingState != Disabled) {
      this->TrackingState = Initial;
      FInstanceAttributeTracker::Reset(&this->InstanceUpdateTracker);
      this->bNumCustomDataChanged = '\0';
      this->bAnyInstanceChange = '\0';
      this->bPrimitiveTransformChanged = '\0';
      this->bTransformChangedAllInstances = '\0';
      (this->AllChangedFlags).Packed = 0;
    }
    this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
    if (this_00 != (UActorComponent *)0x0) {
      UActorComponent::MarkRenderInstancesDirty(this_00);
      return;
    }
  }
  return;
}

// CreateExplicitIdentityMapping @ 147ce8820

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FInstanceDataManager::CreateExplicitIdentityMapping(FInstanceDataManager *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if (((int)this->_padding_ != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("HasIdentityMapping()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceData\\InstanceDataManager.cpp"
                         ,0x327,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            ((TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> *)this,(int)this->_padding_,
             Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,(int)this->_padding_,
             Default);
  uVar4 = 0;
  if (0 < (int)this->_padding_) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (int)this->_padding_) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(uint *)(lVar5 + this->_padding_) = uVar4;
      uVar3 = 0;
      if ((int)uVar4 < (int)this->_padding_) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(uint *)(lVar5 + this->_padding_) = uVar4;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 4;
    } while ((int)uVar4 < (int)this->_padding_);
  }
  lVar5 = this->_padding_;
  (this->ValidInstanceIdMask).NumBits = 0;
  TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>(&this->ValidInstanceIdMask,(int)lVar5,true);
  this->IdSearchStartIndex = (int)this->_padding_;
  return;
}

// CustomDataChanged @ 147cebe60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FInstanceDataManager::CustomDataChanged(FInstanceDataManager *this,int param_1)

{
  UActorComponent *this_00;
  int iVar1;
  
  if (this->TrackingState != Disabled) {
    if (this->TrackingState == Tracked) {
      iVar1 = (int)this->_padding_;
      if (iVar1 == 0) {
        iVar1 = (int)this->_padding_;
      }
      FInstanceAttributeTracker::MarkIndex<2>(&this->InstanceUpdateTracker,param_1,iVar1);
    }
    else {
      this->bAnyInstanceChange = '\x01';
    }
    this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
    if (this_00 != (UActorComponent *)0x0) {
      UActorComponent::MarkRenderInstancesDirty(this_00);
      return;
    }
  }
  return;
}

// FlushChanges @ 147cf7230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FInstanceDataManager::FlushChanges
          (FInstanceDataManager *this,FInstanceDataManagerSourceDataDesc *param_1)

{
  TSharedPtr<FUpdatableInstanceDataSceneProxy,1> *pTVar1;
  undefined1 *puVar2;
  float fVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FPrecomputedInstanceSpatialHashData *pFVar6;
  code *pcVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  undefined1 uVar10;
  byte bVar11;
  byte bVar12;
  bool bVar13;
  ushort uVar14;
  TSharedPtr<FUpdatableInstanceDataSceneProxy,1> *pTVar15;
  undefined8 uVar16;
  FMotionVectorSimulation *this_00;
  UObject *pUVar17;
  TMatrix<double> *pTVar18;
  FDFMatrix *pFVar19;
  FUpdatableInstanceDataSceneProxy *pFVar20;
  longlong *plVar21;
  <lambda_1> *this_01;
  longlong *plVar22;
  byte bVar23;
  ETrackingState EVar24;
  byte bVar25;
  ushort uVar26;
  float fVar27;
  undefined1 auStack_778 [32];
  bool local_758;
  FInstanceDataBufferHeader local_750;
  uint local_73c;
  TVector<float>_u_0 local_738;
  undefined8 local_728;
  FSharedReferencer<1> FStack_720;
  TSharedPtr<FUpdatableInstanceDataSceneProxy,1> local_718;
  TOptional<UE::Math::TTransform<double>_> local_708;
  undefined1 local_698 [248];
  longlong *local_5a0;
  TVector<double>_u_0 local_568;
  TVector<float>_u_0 local_550;
  TVector<float>_u_0 local_544;
  TVector<float>_u_0 local_538;
  TVector<float>_u_0 local_52c;
  bool local_520;
  float local_51c;
  int local_518;
  int local_514;
  FPrecomputedInstanceSpatialHashData *local_510;
  FSharedReferencer<1> FStack_508;
  <lambda_1> local_4f8;
  <lambda_2> local_338;
  FDFMatrix local_178;
  TMatrix<double> local_128;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_778;
  if (this->TrackingState != Disabled) {
    if ((((*(byte *)&param_1->Flags & 2) != 0) && (param_1->NumCustomDataFloats == 0)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ComponentData.Flags.bHasPerInstanceCustomData || ComponentData.NumCustomDataFloats != 0"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceData\\InstanceDataManager.cpp"
                           ,0x25e,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    pTVar1 = &this->InstanceDataProxy;
    pFVar20 = pTVar1->Object;
    if ((pFVar20 == (FUpdatableInstanceDataSceneProxy *)0x0) ||
       ((pTVar5 = (this->InstanceDataProxy).SharedReferenceCount.ReferenceController,
        pTVar5 != (TReferenceControllerBase<1> *)0x0 &&
        (pFVar20 = pTVar1->Object, pTVar5->SharedReferenceCount == (atomic<int>)0x1)))) {
      local_758 = true;
    }
    else {
      local_758 = false;
    }
    bVar9 = false;
    if (pFVar20 == (FUpdatableInstanceDataSceneProxy *)0x0) {
      pTVar15 = GetOrCreateProxyInternal(this,&local_718);
      if (pTVar1 != pTVar15) {
        pTVar1->Object = pTVar15->Object;
        pTVar15->Object = (FUpdatableInstanceDataSceneProxy *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->InstanceDataProxy).SharedReferenceCount,&pTVar15->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_718.SharedReferenceCount.ReferenceController);
    }
    uVar26 = 0;
    fVar27 = (float)((uint)(param_1->PrimitiveMaterialDesc).MinMaxMaterialDisplacement.field0_0x0.
                           _s_0.X ^ __xmm_80000000800000008000000080000000);
    EVar24 = this->TrackingState;
    fVar3 = (param_1->PrimitiveMaterialDesc).MinMaxMaterialDisplacement.field0_0x0._s_0.Y;
    if (fVar27 <= fVar3) {
      fVar27 = fVar3;
    }
    fVar27 = fVar27 + (param_1->PrimitiveMaterialDesc).MaxWorldPositionOffsetDisplacement;
    bVar11 = 0;
    if ((EVar24 - Tracked & 0xfd) == 0) {
      if (((this->bNumCustomDataChanged == '\0' && this->bAnyInstanceChange == '\0') &&
          ((this->AllChangedFlags).Packed == 0)) &&
         ((this->bTransformChangedAllInstances == '\0' &&
          (((this->InstanceUpdateTracker).MaxIndex < 1 &&
           ((this->InstanceUpdateTracker).Removed.NumBits == 0)))))) {
        bVar23 = 0;
      }
      else {
        bVar23 = 2;
      }
      if ((this->Flags).Packed != (param_1->Flags).Packed) {
        bVar11 = 8;
      }
      if (fVar27 == this->AbsMaxDisplacement) {
        bVar25 = 0;
      }
      else {
        bVar25 = 0x10;
      }
      if (((((__real_38d1b717 <
              (float)((uint)((this->MeshBounds).Min.field0_0x0._s_0.X -
                            (param_1->MeshBounds).Min.field0_0x0._s_0.X) &
                     __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
            (__real_38d1b717 <
             (float)((uint)((this->MeshBounds).Min.field0_0x0._s_0.Y -
                           (param_1->MeshBounds).Min.field0_0x0._s_0.Y) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
           (__real_38d1b717 <
            (float)((uint)((this->MeshBounds).Min.field0_0x0._s_0.Z -
                          (param_1->MeshBounds).Min.field0_0x0._s_0.Z) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
          ((__real_38d1b717 <
            (float)((uint)((this->MeshBounds).Max.field0_0x0._s_0.X -
                          (param_1->MeshBounds).Max.field0_0x0._s_0.X) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff) ||
           (__real_38d1b717 <
            (float)((uint)((this->MeshBounds).Max.field0_0x0._s_0.Y -
                          (param_1->MeshBounds).Max.field0_0x0._s_0.Y) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff))))) ||
         (__real_38d1b717 <
          (float)((uint)((this->MeshBounds).Max.field0_0x0._s_0.Z -
                        (param_1->MeshBounds).Max.field0_0x0._s_0.Z) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff))) {
        bVar12 = 0x20;
      }
      else {
        bVar12 = 0;
      }
      bVar12 = bVar25 | -(this->bTransformChangedAllInstances != '\0' ||
                         this->bPrimitiveTransformChanged != '\0') & 4U | bVar11 | bVar23 | bVar12;
      uVar26 = (this->Flags).Packed ^ (param_1->Flags).Packed;
    }
    else {
      bVar12 = 1;
    }
    this->AbsMaxDisplacement = fVar27;
    uVar16 = *(undefined8 *)((longlong)&(param_1->MeshBounds).Min.field0_0x0 + 8);
    local_73c = (uint)bVar12;
    *(undefined8 *)&(this->MeshBounds).Min.field0_0x0 =
         *(undefined8 *)&(param_1->MeshBounds).Min.field0_0x0;
    *(undefined8 *)((longlong)&(this->MeshBounds).Min.field0_0x0 + 8) = uVar16;
    *(undefined8 *)((longlong)&(this->MeshBounds).Max.field0_0x0 + 4) =
         *(undefined8 *)((longlong)&(param_1->MeshBounds).Max.field0_0x0 + 4);
    this->Flags = param_1->Flags;
    this->NumCustomDataFloats = param_1->NumCustomDataFloats;
    if ((local_73c != 0) || (uVar26 != 0)) {
      if (EVar24 == Optimized) {
        if (bLoggedOnce == false) {
          if (4 < (byte)LogTemp._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
          }
          bLoggedOnce = true;
        }
        local_728 = 0;
        FStack_720.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (&this->PrecomputedOptimizationData !=
            (TSharedPtr<FPrecomputedInstanceSpatialHashData_const_,1> *)&local_728) {
          (this->PrecomputedOptimizationData).Object = (FPrecomputedInstanceSpatialHashData *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->PrecomputedOptimizationData).SharedReferenceCount,&FStack_720);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_720.ReferenceController);
      }
      EVar24 = Tracked;
      if ((((bVar12 & 1) != 0) || ((bVar12 & 8) != 0)) || (this->TrackingState == Optimized)) {
        bVar9 = true;
      }
      iVar4 = param_1->NumInstances;
      FInstanceAttributeTracker::FInstanceAttributeTracker
                ((FInstanceAttributeTracker *)local_698,&this->InstanceUpdateTracker);
      uVar14 = 0;
      local_698[0x57] = false;
      local_698._88_8_ = (FScriptContainerElement *)0x0;
      local_698._96_4_ = 0;
      local_698._100_4_ = 0;
      local_698._104_4_ = 0;
      local_698._112_8_ = (FScriptContainerElement *)0x0;
      local_698._120_4_ = 0;
      local_698._124_4_ = 0;
      local_698._128_8_ = (FScriptContainerElement *)0x0;
      local_698._136_4_ = 0;
      local_698._140_4_ = 0;
      local_698._144_8_ = (FScriptContainerElement *)0x0;
      local_698._152_4_ = 0;
      local_698._156_4_ = 0;
      local_698._160_8_ = (FScriptContainerElement *)0x0;
      local_698._168_4_ = 0;
      local_698._172_4_ = 0;
      local_698._176_8_ = (FScriptContainerElement *)0x0;
      local_698._184_4_ = 0;
      local_698._188_4_ = 0;
      local_698._192_8_ = (FScriptContainerElement *)0x0;
      local_698._200_4_ = 0;
      local_698._204_4_ = 0;
      local_698._208_8_ = 0;
      local_5a0 = (longlong *)0x0;
      local_520 = false;
      local_51c = 0.0;
      local_514 = 0;
      local_510 = (FPrecomputedInstanceSpatialHashData *)0x0;
      FStack_508.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (((bVar12 & 4) != 0) ||
         (local_698[0x56] = false, this->bTransformChangedAllInstances != '\0')) {
        local_698[0x56] = true;
      }
      if (((uVar26 & 2) != 0) || (this->bNumCustomDataChanged != 0)) {
        uVar14 = 2;
      }
      local_698._84_2_ = uVar26 & 0xfffd | uVar14;
      local_698._82_2_ = (param_1->Flags).Packed;
      local_698[0x50] = bVar9;
      local_518 = iVar4;
      GatherDefaultData(this,param_1,(FInstanceUpdateChangeSet *)local_698);
      UE::Core::Private::Function::CheckCallable(*(void **)&param_1->BuildChangeSet);
      pcVar7 = *(code **)&param_1->BuildChangeSet;
      plVar22 = *(longlong **)&(param_1->BuildChangeSet).field_0x28;
      plVar21 = (longlong *)&(param_1->BuildChangeSet).field_0x10;
      if (plVar22 != (longlong *)0x0) {
        plVar21 = plVar22;
      }
      uVar16 = (**(code **)(*plVar21 + 8))();
      (*pcVar7)(uVar16,local_698);
      if ((((local_698._82_2_ & 2) != 0) && (this->NumCustomDataFloats != local_698._104_4_)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ChangeSet.Flags.bHasPerInstanceCustomData || NumCustomDataFloats == ChangeSet.NumCustomDataFloats"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceData\\InstanceDataManager.cpp"
                              ,0x2ba,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      if ((((local_698._82_2_ & 0x20) == 0) && (local_698._200_4_ != 1)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("ChangeSet.Flags.bHasPerInstanceLocalBounds || ChangeSet.InstanceLocalBounds.Num() == 1"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceData\\InstanceDataManager.cpp"
                              ,0x2be,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      if ((local_698._82_2_ & 4) != 0) {
        this_00 = FMotionVectorSimulation::Get();
        pUVar17 = FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
        FMotionVectorSimulation::GetPreviousTransform(this_00,&local_708,pUVar17);
        if (local_708.bIsSet != false) {
          pTVar18 = UE::Math::TTransform<double>::ToMatrixWithScale
                              (&local_708.TypedValue,&local_128);
          local_738._s_0.X = (float)local_568._s_0.X;
          local_738._s_0.Y = (float)local_568._s_0.Y;
          local_738._s_0.Z = (float)local_568._s_0.Z;
          pFVar19 = FDFMatrix::MakeToRelativeWorldMatrix
                              (&local_178,(TVector<float> *)&local_738._s_0,pTVar18);
          local_538._s_0.X = (pFVar19->M).M[2][0];
          local_538._s_0.Y = (pFVar19->M).M[2][1];
          local_538._s_0.Z = (pFVar19->M).M[2][2];
          local_52c._s_0.X = (pFVar19->M).M[3][0];
          local_52c._s_0.Y = (pFVar19->M).M[3][1];
          local_52c._s_0.Z = (pFVar19->M).M[3][2];
          local_550._s_0.Y = (pFVar19->M).M[0][1];
          local_550._s_0.Z = (pFVar19->M).M[0][2];
          local_544._s_0.X = (pFVar19->M).M[1][0];
          local_544._s_0.Y = (pFVar19->M).M[1][1];
          local_544._s_0.Z = (pFVar19->M).M[1][2];
          local_550._s_0.X = (pFVar19->M).M[0][0];
          local_520 = true;
        }
      }
      if (this->TrackingState != Disabled) {
        this->TrackingState = Initial;
        FInstanceAttributeTracker::Reset(&this->InstanceUpdateTracker);
        this->bNumCustomDataChanged = '\0';
        this->bAnyInstanceChange = '\0';
        this->bPrimitiveTransformChanged = '\0';
        this->bTransformChangedAllInstances = '\0';
        (this->AllChangedFlags).Packed = 0;
      }
      iVar4 = local_518;
      local_750.bInstanceDataIsGPUOnly = false;
      local_750.NumInstances = local_518;
      local_750.PayloadDataStride =
           FInstanceSceneDataBuffers::CalcPayloadDataStride
                     ((FInstanceDataFlags)local_698._82_2_,local_698._104_4_,0);
      local_750.Flags = (FInstanceDataFlags)local_698._82_2_;
      if (__CsvProfilerStat732 == false) {
        FCsvProfilerTrace::OutputInlineStat("NumInstanceTransformUpdates",0);
        __CsvProfilerStat732 = true;
      }
      FCsvProfiler::RecordCustomStat("NumInstanceTransformUpdates",0,local_698._120_4_,Accumulate);
      FVar8.ReferenceController = FStack_508.ReferenceController;
      if (bVar9 == false) {
        if (((bVar12 & 1) != 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!ChangeDesc.bUntrackedState",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceData\\InstanceDataManager.cpp"
                               ,0x301,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        FInstanceUpdateChangeSet::FInstanceUpdateChangeSet
                  (&local_338.ChangeSet,(FInstanceUpdateChangeSet *)local_698);
        local_338.InstanceDataProxy.Object = (this->InstanceDataProxy).Object;
        local_338.InstanceDataProxy.SharedReferenceCount.ReferenceController =
             (this->InstanceDataProxy).SharedReferenceCount.ReferenceController;
        if (local_338.InstanceDataProxy.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_338.InstanceDataProxy.SharedReferenceCount.ReferenceController)->
          SharedReferenceCount =
               (atomic<int>)
               ((int)(local_338.InstanceDataProxy.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_338.NumHeaderInstances = iVar4;
        DispatchInstanceDataUpdateTask<FUpdatableInstanceDataSceneProxy,_FInstanceDataManager::FlushChanges_::__l78::<lambda_2>_>
                  (local_758,&this->InstanceDataProxy,&local_750,&local_338);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_338.InstanceDataProxy.SharedReferenceCount.ReferenceController);
        this_01 = (<lambda_1> *)&local_338;
      }
      else {
        pFVar6 = (this->PrecomputedOptimizationData).Object;
        EVar24 = Tracked;
        if (pFVar6 != (FPrecomputedInstanceSpatialHashData *)0x0) {
          FStack_508.ReferenceController =
               (this->PrecomputedOptimizationData).SharedReferenceCount.ReferenceController;
          if (FStack_508.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FStack_508.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FStack_508.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_510 = pFVar6;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar8.ReferenceController);
          EVar24 = Optimized;
        }
        FInstanceUpdateChangeSet::FInstanceUpdateChangeSet
                  (&local_4f8.ChangeSet,(FInstanceUpdateChangeSet *)local_698);
        local_4f8.InstanceDataProxy.Object = (this->InstanceDataProxy).Object;
        local_4f8.InstanceDataProxy.SharedReferenceCount.ReferenceController =
             (this->InstanceDataProxy).SharedReferenceCount.ReferenceController;
        if (local_4f8.InstanceDataProxy.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_4f8.InstanceDataProxy.SharedReferenceCount.ReferenceController)->
          SharedReferenceCount =
               (atomic<int>)
               ((int)(local_4f8.InstanceDataProxy.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_4f8.NumHeaderInstances = iVar4;
        DispatchInstanceDataUpdateTask<FUpdatableInstanceDataSceneProxy,_FInstanceDataManager::FlushChanges_::__l73::<lambda_1>_>
                  (local_758,&this->InstanceDataProxy,&local_750,&local_4f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4f8.InstanceDataProxy.SharedReferenceCount.ReferenceController);
        this_01 = &local_4f8;
      }
      FInstanceUpdateChangeSet::~FInstanceUpdateChangeSet(&this_01->ChangeSet);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_508.ReferenceController);
      if (local_698._208_8_ != 0) {
        plVar22 = (longlong *)(local_698 + 0xe0);
        if (local_5a0 != (longlong *)0x0) {
          plVar22 = local_5a0;
        }
        (**(code **)(*plVar22 + 0x10))();
      }
      if ((FScriptContainerElement *)local_698._192_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_698._192_8_);
      }
      if ((FScriptContainerElement *)local_698._176_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_698._176_8_);
      }
      if ((FScriptContainerElement *)local_698._160_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_698._160_8_);
      }
      if ((FScriptContainerElement *)local_698._144_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_698._144_8_);
      }
      if ((FScriptContainerElement *)local_698._128_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_698._128_8_);
      }
      if ((FScriptContainerElement *)local_698._112_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_698._112_8_);
      }
      if ((FScriptContainerElement *)local_698._88_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_698._88_8_);
      }
      if ((ForElementType<unsigned_int>)local_698._32_8_ != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_698._32_8_);
      }
      if ((FScriptContainerElement *)local_698._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_698._0_8_);
      }
      this->TrackingState = EVar24;
      return true;
    }
  }
  return false;
}

// FreeInstanceId @ 147cf8290

void __thiscall
FInstanceDataManager::FreeInstanceId(FInstanceDataManager *this,FPrimitiveInstanceId param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ForElementType<unsigned_int> FVar5;
  
  if ((int)this->_padding_ != 0) {
    uVar4 = 0;
    if (param_1.Id < (int)this->_padding_) {
      uVar4 = (uint)~param_1.Id >> 0x1f;
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
    *(undefined4 *)(this->_padding_ + (longlong)param_1.Id * 4) = 0xffffffff;
    if ((param_1.Id < 0) || ((this->ValidInstanceIdMask).NumBits <= param_1.Id)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar5 = (this->ValidInstanceIdMask).AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<unsigned_int>)0x0) {
      FVar5 = (ForElementType<unsigned_int>)&this->ValidInstanceIdMask;
    }
    puVar1 = (uint *)((longlong)FVar5 +
                     (longlong)((int)(param_1.Id + (param_1.Id >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)param_1.Id & 0x1f));
    if (this->IdSearchStartIndex < param_1.Id) {
      param_1.Id = this->IdSearchStartIndex;
    }
    this->IdSearchStartIndex = param_1.Id;
  }
  return;
}

// GatherDefaultData @ 147cf83f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FInstanceDataManager::GatherDefaultData
          (FInstanceDataManager *this,FInstanceDataManagerSourceDataDesc *param_1,
          FInstanceUpdateChangeSet *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  FDFMatrix *pFVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_108 [32];
  FDeltaRange<3> local_e8;
  TVector<float>_u_0 local_d8;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_bc;
  float local_b4;
  FDFMatrix local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_108;
  lVar6 = 0x20;
  if ((int)this->_padding_ != 0) {
    lVar6 = 0x90;
  }
  param_2->MaxInstanceId =
       *(int *)((this->InstanceUpdateTracker).Removed.AllocatorInstance.InlineData + lVar6 + -0x38);
  param_2->bIdentityIdMap = (int)this->_padding_ == 0;
  dVar1 = (param_1->PrimitiveLocalToWorld).M[3][0];
  dVar2 = (param_1->PrimitiveLocalToWorld).M[3][1];
  dVar3 = (param_1->PrimitiveLocalToWorld).M[3][2];
  fVar9 = (float)dVar1;
  local_d8._s_0.Z = (float)dVar3;
  fVar10 = (float)dVar2;
  local_c8 = CONCAT44(fVar10,fVar9);
  local_b4 = (float)(dVar3 - (double)local_d8._s_0.Z);
  local_bc = CONCAT44((float)(dVar2 - (double)fVar10),(float)(dVar1 - (double)fVar9));
  (param_2->PrimitiveWorldSpaceOffset).field0_0x0._s_0.X = (double)fVar9;
  (param_2->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Y = (double)fVar10;
  (param_2->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Z = (double)local_d8._s_0.Z;
  local_d8._0_8_ = CONCAT44(fVar10,fVar9);
  local_c0 = local_d8._s_0.Z;
  pFVar7 = FDFMatrix::MakeToRelativeWorldMatrix
                     (&local_a8,(TVector<float> *)&local_d8._s_0,&param_1->PrimitiveLocalToWorld);
  fVar9 = (pFVar7->M).M[0][1];
  fVar10 = (pFVar7->M).M[0][2];
  (param_2->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0._s_0.X = (pFVar7->M).M[0][0];
  (param_2->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0._s_0.Y = fVar9;
  (param_2->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0._s_0.Z = fVar10;
  fVar9 = (pFVar7->M).M[1][1];
  fVar10 = (pFVar7->M).M[1][2];
  (param_2->PrimitiveToRelativeWorld).TransformRows[1].field0_0x0._s_0.X = (pFVar7->M).M[1][0];
  (param_2->PrimitiveToRelativeWorld).TransformRows[1].field0_0x0._s_0.Y = fVar9;
  (param_2->PrimitiveToRelativeWorld).TransformRows[1].field0_0x0._s_0.Z = fVar10;
  fVar9 = (pFVar7->M).M[2][1];
  fVar10 = (pFVar7->M).M[2][2];
  (param_2->PrimitiveToRelativeWorld).TransformRows[2].field0_0x0._s_0.X = (pFVar7->M).M[2][0];
  (param_2->PrimitiveToRelativeWorld).TransformRows[2].field0_0x0._s_0.Y = fVar9;
  (param_2->PrimitiveToRelativeWorld).TransformRows[2].field0_0x0._s_0.Z = fVar10;
  fVar9 = (pFVar7->M).M[3][1];
  fVar10 = (pFVar7->M).M[3][2];
  (param_2->PrimitiveToRelativeWorld).Origin.field0_0x0._s_0.X = (pFVar7->M).M[3][0];
  (param_2->PrimitiveToRelativeWorld).Origin.field0_0x0._s_0.Y = fVar9;
  (param_2->PrimitiveToRelativeWorld).Origin.field0_0x0._s_0.Z = fVar10;
  fVar10 = (float)((uint)(param_1->PrimitiveMaterialDesc).MinMaxMaterialDisplacement.field0_0x0._s_0
                         .X ^ __xmm_80000000800000008000000080000000);
  fVar9 = (param_1->PrimitiveMaterialDesc).MinMaxMaterialDisplacement.field0_0x0._s_0.Y;
  if (fVar10 <= fVar9) {
    fVar10 = fVar9;
  }
  param_2->AbsMaxDisplacement =
       fVar10 + (param_1->PrimitiveMaterialDesc).MaxWorldPositionOffsetDisplacement;
  if ((*(byte *)&param_2->Flags & 2) != 0) {
    param_2->NumCustomDataFloats = param_1->NumCustomDataFloats;
  }
  if (param_2->bIdentityIdMap == false) {
    local_e8.NumItems = param_2->NumSourceInstances;
    if ((param_2->bNeedFullUpdate == false) &&
       (iVar8 = (param_2->InstanceAttributeTracker).NumChanged[3] +
                (param_2->InstanceAttributeTracker).NumChanged[0], iVar8 != local_e8.NumItems)) {
      local_e8.bFullUpdate = false;
      local_e8.NumItems = iVar8;
    }
    else {
      local_e8.bFullUpdate = true;
    }
    local_e8.Tracker = &param_2->InstanceAttributeTracker;
    Gather<FInstanceAttributeTracker::FDeltaRange<3>,FPrimitiveInstanceId,TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_>_>
              (&local_e8,&param_2->IndexToIdMapDeltaData,
               (TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> *)this,1);
  }
  if ((*(byte *)&param_2->Flags & 0x20) == 0) {
    if ((param_2->InstanceLocalBounds).ArrayNum != 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChangeSet.InstanceLocalBounds.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceData\\InstanceDataManager.cpp"
                         ,0x23d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FInstanceUpdateChangeSet::SetSharedLocalBounds(param_2,&param_1->MeshBounds);
  }
  return;
}

// GetAllocatedSize @ 147cfa860

ulong64 __thiscall FInstanceDataManager::GetAllocatedSize(FInstanceDataManager *this)

{
  return (ulonglong)(((this->ValidInstanceIdMask).MaxBits + 0x1fU >> 5) << 2) +
         (ulonglong)(((this->InstanceUpdateTracker).Removed.MaxBits + 0x1fU >> 5) << 2) +
         (longlong)(this->InstanceUpdateTracker).Data.ArrayMax * 4;
}

// GetMaxAllocatedInstanceId @ 147d090a0

int __thiscall FInstanceDataManager::GetMaxAllocatedInstanceId(FInstanceDataManager *this)

{
  if ((int)this->_padding_ == 0) {
    return (int)this->_padding_;
  }
  return (this->ValidInstanceIdMask).NumBits;
}

// GetOrCreateProxy @ 147d09e50

TSharedPtr<FInstanceDataSceneProxy,1> * __thiscall
FInstanceDataManager::GetOrCreateProxy
          (FInstanceDataManager *this,TSharedPtr<FInstanceDataSceneProxy,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FUpdatableInstanceDataSceneProxy,1> *pTVar2;
  TSharedPtr<FUpdatableInstanceDataSceneProxy,1> local_18;
  
  pTVar2 = GetOrCreateProxyInternal(this,&local_18);
  __return_storage_ptr__->Object = (FInstanceDataSceneProxy *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetOrCreateProxyInternal @ 147d09ea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<FUpdatableInstanceDataSceneProxy,1> * __thiscall
FInstanceDataManager::GetOrCreateProxyInternal
          (FInstanceDataManager *this,
          TSharedPtr<FUpdatableInstanceDataSceneProxy,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FUpdatableInstanceDataSceneProxy,1> *pTVar5;
  FUpdatableInstanceDataSceneProxy *pFVar6;
  FUpdatableInstanceDataSceneProxy *local_28;
  FSharedReferencer<1> FStack_20;
  
  pTVar5 = &this->InstanceDataProxy;
  if (pTVar5->Object == (FUpdatableInstanceDataSceneProxy *)0x0) {
    pTVar4 = ::operator_new(0x170);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      local_28 = ___xmm_00000000000000000000000000000010;
      pFVar6 = (FUpdatableInstanceDataSceneProxy *)&DAT_00000010;
      FStack_20.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFUpdatableInstanceDataSceneProxy___00_SharedPointerInternals__6B_
      ;
      memset(&pTVar4[1].SharedReferenceCount,0,0x158);
      pTVar4[1]._padding_ = (longlong)&___7FInstanceDataSceneProxy__6B_;
      FInstanceSceneDataBuffers::FInstanceSceneDataBuffers
                ((FInstanceSceneDataBuffers *)&pTVar4[1].SharedReferenceCount);
      pTVar4[1]._padding_ = (longlong)&___7FUpdatableInstanceDataSceneProxy__6B_;
      pFVar6 = (FUpdatableInstanceDataSceneProxy *)(pTVar4 + 1);
      pbVar1 = (byte *)((longlong)&pTVar4[0x14]._padding_ + 2);
      *pbVar1 = *pbVar1 & 0xfe;
      pTVar4[0x13]._padding_ = 0;
      pTVar4[0x13].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[0x13].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined2 *)&pTVar4[0x14]._padding_ = 0;
      pTVar4[0x14].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[0x14].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[0x15]._padding_ = 0;
      pTVar4[0x15].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[0x15].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[0x16]._padding_ = 0;
      pTVar4[0x16].SharedReferenceCount = (atomic<int>)0x0;
      if (pFVar6 == (FUpdatableInstanceDataSceneProxy *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TSharedPtr<FUpdatableInstanceDataSceneProxy,1> *)(*pcVar2)();
          return pTVar5;
        }
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      FStack_20.ReferenceController = pTVar4;
      local_28 = pFVar6;
    }
    if (pTVar5 != (TSharedPtr<FUpdatableInstanceDataSceneProxy,1> *)&local_28) {
      pTVar5->Object = pFVar6;
      local_28 = (FUpdatableInstanceDataSceneProxy *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->InstanceDataProxy).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  __return_storage_ptr__->Object = pTVar5->Object;
  pTVar4 = (this->InstanceDataProxy).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetProxy @ 147d0cc20

TSharedPtr<FInstanceDataSceneProxy,1> * __thiscall
FInstanceDataManager::GetProxy
          (FInstanceDataManager *this,TSharedPtr<FInstanceDataSceneProxy,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (FInstanceDataSceneProxy *)(this->InstanceDataProxy).Object;
  pTVar1 = (this->InstanceDataProxy).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// HasAnyInstanceChanges @ 147d139e0

bool __thiscall FInstanceDataManager::HasAnyInstanceChanges(FInstanceDataManager *this)

{
  undefined1 *puVar1;
  
  if ((((this->bNumCustomDataChanged == '\0' && this->bAnyInstanceChange == '\0') &&
       ((this->AllChangedFlags).Packed == 0)) && (this->bTransformChangedAllInstances == '\0')) &&
     (((this->InstanceUpdateTracker).MaxIndex < 1 &&
      ((this->InstanceUpdateTracker).Removed.NumBits == 0)))) {
    return false;
  }
  return true;
}

// HasIdentityMapping @ 147d13a60

bool __thiscall FInstanceDataManager::HasIdentityMapping(FInstanceDataManager *this)

{
  return (int)this->_padding_ == 0;
}

// InitChangeSet @ 147d15f20

void __thiscall
FInstanceDataManager::InitChangeSet
          (FInstanceDataManager *this,FChangeDesc2 *param_1,
          FInstanceDataManagerSourceDataDesc *param_2,FInstanceUpdateChangeSet *param_3)

{
  FInstanceDataFlags_s_1 FVar1;
  ushort uVar2;
  
  FVar1 = (FInstanceDataFlags_s_1)(param_1->ChangedFlags).Packed;
  (param_3->ForceFullFlags)._s_1 = FVar1;
  if ((FVar1.bHasPerInstanceCustomData == 0) && (this->bNumCustomDataChanged == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  (param_3->ForceFullFlags).Packed = (ushort)FVar1 & 0xfffd | uVar2;
  param_3->Flags = param_2->Flags;
  GatherDefaultData(this,param_2,param_3);
  return;
}

// InitChangeSet @ 147d15f80

void __thiscall
FInstanceDataManager::InitChangeSet
          (FInstanceDataManager *this,FInstanceDataManagerSourceDataDesc *param_1,
          FInstanceUpdateChangeSet *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2->bNeedFullUpdate == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChangeSet.bNeedFullUpdate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceData\\InstanceDataManager.cpp"
                       ,0x246,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->Flags).Packed != (param_2->ForceFullFlags).Packed) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChangeSet.Flags == ChangeSet.ForceFullFlags",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceData\\InstanceDataManager.cpp"
                       ,0x247,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GatherDefaultData(this,param_1,param_2);
  return;
}

// MarkComponentRenderInstancesDirty @ 147d1ab80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FInstanceDataManager::MarkComponentRenderInstancesDirty(FInstanceDataManager *this)

{
  UActorComponent *this_00;
  
  this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
  if (this_00 != (UActorComponent *)0x0) {
    UActorComponent::MarkRenderInstancesDirty(this_00);
    return;
  }
  return;
}

// NumCustomDataChanged @ 147d1b880

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FInstanceDataManager::NumCustomDataChanged(FInstanceDataManager *this)

{
  UActorComponent *this_00;
  
  if (this->TrackingState != Disabled) {
    this->bNumCustomDataChanged = '\x01';
    this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
    if (this_00 != (UActorComponent *)0x0) {
      UActorComponent::MarkRenderInstancesDirty(this_00);
      return;
    }
  }
  return;
}

// Optimize @ 147d1cb50

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FInstanceDataManager::Optimize
          (FInstanceDataManager *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FInstanceDataManagerSourceDataDesc *param_1,bool param_2)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// PrimitiveTransformChanged @ 147d1f010

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FInstanceDataManager::PrimitiveTransformChanged(FInstanceDataManager *this)

{
  UActorComponent *this_00;
  
  if (this->TrackingState != Disabled) {
    this->bPrimitiveTransformChanged = '\x01';
    this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
    if (this_00 != (UActorComponent *)0x0) {
      UActorComponent::MarkRenderInstancesDirty(this_00);
      return;
    }
  }
  return;
}

// ReadCookedRenderData @ 147d1f5a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FInstanceDataManager::ReadCookedRenderData(FInstanceDataManager *this,FArchive *param_1)

{
  uint *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  IConsoleManager *pIVar9;
  longlong *plVar10;
  longlong lVar11;
  FPrecomputedInstanceSpatialHashData *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  uint local_res10 [2];
  FPrecomputedInstanceSpatialHashData *local_68;
  FSharedReferencer<1> FStack_60;
  undefined8 local_58;
  FSharedReferencer<1> FStack_50;
  TArray<FInstanceSceneDataBuffers::FCompressedSpatialHashItem,TSizedDefaultAllocator<32>_> local_48
  ;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_res10[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar2 = local_res10[0];
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
  }
  else {
    uVar2 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (uVar2 == 0) {
    return;
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  TArray<FInstanceSceneDataBuffers::FCompressedSpatialHashItem,TSizedDefaultAllocator<32>_>::
  BulkSerialize(&local_48,param_1,false);
  TArray<int,TSizedDefaultAllocator<32>_>::BulkSerialize(&local_38,param_1,false);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar9 = IConsoleManager::Get();
    plVar10 = (longlong *)
              (**(code **)((longlong)*pIVar9 + 0xc0))(pIVar9,L"r.SceneCulling.Precomputed",1);
    pTVar8 = pTVar13;
    if (plVar10 != (longlong *)0x0) {
      pTVar8 = (TReferenceControllerBase<1> *)(**(code **)(*plVar10 + 0x68))(plVar10);
    }
    CVarPrecomputed = (TConsoleVariableData<int> *)pTVar8;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar5 = CVarPrecomputed;
  if (CVarPrecomputed != (TConsoleVariableData<int> *)0x0) {
    bVar7 = IsInParallelGameThread();
    if (bVar7) {
LAB_147d1f695:
      pTVar8 = pTVar13;
    }
    else {
      bVar7 = IsInGameThread();
      pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000004;
      if (bVar7) goto LAB_147d1f695;
    }
    if (*(int *)((longlong)pTVar5->ShadowedValue + (longlong)&pTVar8->_padding_) != 0) {
      pTVar8 = ::operator_new(0x30);
      FVar6.Data = local_48.AllocatorInstance.Data;
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
        local_68 = ___xmm_00000000000000000000000000000010;
        pFVar12 = (FPrecomputedInstanceSpatialHashData *)&DAT_00000010;
        FStack_60.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar8->SharedReferenceCount = (atomic<int>)0x1;
        pTVar13 = pTVar8 + 1;
        pTVar8->WeakReferenceCount = (atomic<int>)0x1;
        pTVar8->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController___CBVFPrecomputedInstanceSpatialHashData___00_SharedPointerInternals__6B_
        ;
        pTVar13->_padding_ = 0;
        lVar11 = (longlong)local_48.ArrayNum;
        pTVar8[1].SharedReferenceCount = (atomic<int>)local_48.ArrayNum;
        if ((atomic<int>)local_48.ArrayNum == (atomic<int>)0x0) {
          pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,local_48.ArrayNum,0,(ForAnyElementType *)pTVar13,local_48.ArrayNum,
                     (int *)&pTVar8[1].WeakReferenceCount);
          memcpy((FScriptContainerElement *)pTVar13->_padding_,FVar6.Data,lVar11 * 0x28);
        }
        FVar6.Data = local_38.AllocatorInstance.Data;
        pTVar13 = pTVar8 + 2;
        pTVar13->_padding_ = 0;
        lVar11 = (longlong)local_38.ArrayNum;
        pTVar8[2].SharedReferenceCount = (atomic<int>)local_38.ArrayNum;
        if ((atomic<int>)local_38.ArrayNum == (atomic<int>)0x0) {
          pTVar8[2].WeakReferenceCount = (atomic<int>)0x0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_38.ArrayNum,0,(ForAnyElementType *)pTVar13,local_38.ArrayNum,
                     (int *)&pTVar8[2].WeakReferenceCount);
          memcpy((FScriptContainerElement *)pTVar13->_padding_,FVar6.Data,lVar11 << 2);
        }
        pFVar12 = (FPrecomputedInstanceSpatialHashData *)(pTVar8 + 1);
        if ((pFVar12 == (FPrecomputedInstanceSpatialHashData *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
        FStack_60.ReferenceController = pTVar8;
        pTVar13 = pTVar8;
        local_68 = pFVar12;
      }
      if (&this->PrecomputedOptimizationData !=
          (TSharedPtr<FPrecomputedInstanceSpatialHashData_const_,1> *)&local_68) {
        (this->PrecomputedOptimizationData).Object = pFVar12;
        local_68 = (FPrecomputedInstanceSpatialHashData *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->PrecomputedOptimizationData).SharedReferenceCount,&FStack_60);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_60.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      goto LAB_147d1f870;
    }
  }
  local_58 = 0;
  FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->PrecomputedOptimizationData !=
      (TSharedPtr<FPrecomputedInstanceSpatialHashData_const_,1> *)&local_58) {
    (this->PrecomputedOptimizationData).Object = (FPrecomputedInstanceSpatialHashData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PrecomputedOptimizationData).SharedReferenceCount,&FStack_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_50.ReferenceController);
LAB_147d1f870:
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// RemoveAt @ 147d21f60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FInstanceDataManager::RemoveAt(FInstanceDataManager *this,int param_1)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UActorComponent *this_00;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  FPrimitiveInstanceId local_res8 [2];
  
  uVar10 = (ulonglong)param_1;
  if (this->TrackingState != Disabled) {
    FInstanceIdIndexMap::IndexToId((FInstanceIdIndexMap *)this,(int)local_res8);
    iVar8 = (int)this->_padding_;
    plVar1 = &this->_padding_;
    if (iVar8 == 0) {
      iVar8 = (int)this->_padding_;
    }
    FInstanceAttributeTracker::RemoveAt(&this->InstanceUpdateTracker,local_res8[0],param_1,iVar8);
    iVar8 = (int)this->_padding_ + -1;
    if ((param_1 != iVar8) && ((int)*plVar1 == 0)) {
      CreateExplicitIdentityMapping(this);
    }
    this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
    if (this_00 != (UActorComponent *)0x0) {
      UActorComponent::MarkRenderInstancesDirty(this_00);
    }
    FreeInstanceId(this,local_res8[0]);
    iVar2 = (int)*plVar1;
    if (iVar2 == 0) {
      if ((param_1 != iVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bCausesReordering",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceData\\InstanceDataManager.cpp"
                             ,0x176,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(int *)&this->_padding_ = (int)this->_padding_ + -1;
    }
    else {
      if (param_1 == iVar2 + -1) {
        if (iVar2 < param_1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,param_1 - iVar2,(ForAnyElementType *)this,(int *)plVar1,
                             (int *)((longlong)&this->_padding_ + 4));
          DefaultConstructItems<FPrimitiveInstanceId,int>
                    ((void *)(this->_padding_ + (longlong)iVar8 * 4),param_1 - iVar2);
        }
        else {
          if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
          }
          if (param_1 < iVar2) {
            uVar7 = iVar2 - param_1;
            if (((int)(uVar7 | param_1) < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (uVar7 != 0) {
              pvVar6 = (void *)(this->_padding_ + uVar10 * 4);
              iVar8 = ((int)*plVar1 - uVar7) - param_1;
              if (iVar8 != 0) {
                memmove(pvVar6,(void *)((longlong)pvVar6 + (longlong)(int)uVar7 * 4),
                        (longlong)iVar8 << 2);
              }
              *(uint *)plVar1 = (int)*plVar1 - uVar7;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,(ForAnyElementType *)this,(int)*plVar1,
                         (int *)((longlong)&this->_padding_ + 4));
            }
          }
        }
      }
      else {
        uVar7 = 0;
        if (param_1 < iVar2) {
          uVar7 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar11 = uVar10 * 4;
        pvVar6 = (void *)(this->_padding_ + lVar11);
        iVar8 = (int)*plVar1 + ~param_1;
        if (iVar8 != 0) {
          memmove(pvVar6,(void *)((longlong)pvVar6 + 4),(longlong)iVar8 << 2);
        }
        *(int *)plVar1 = (int)*plVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)this,(int)*plVar1,
                   (int *)((longlong)&this->_padding_ + 4));
        iVar8 = (int)*plVar1;
        if (param_1 < iVar8) {
          do {
            uVar9 = (uint)uVar10;
            uVar7 = 0;
            if ((int)uVar9 < iVar8) {
              uVar7 = ~uVar9 >> 0x1f;
            }
            if ((uVar7 == 0) &&
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
            uVar7 = *(uint *)(lVar11 + this->_padding_);
            uVar5 = 0;
            if ((int)uVar7 < (int)this->_padding_) {
              uVar5 = ~uVar7 >> 0x1f;
            }
            if ((uVar5 == 0) &&
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
            lVar11 = lVar11 + 4;
            *(uint *)(this->_padding_ + (longlong)(int)uVar7 * 4) = uVar9;
            uVar10 = (ulonglong)(uVar9 + 1);
            iVar8 = (int)*plVar1;
          } while ((int)(uVar9 + 1) < iVar8);
        }
      }
      *(int *)&this->_padding_ = (int)*plVar1;
      if (((this->ValidInstanceIdMask).NumBits < (int)*plVar1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ValidInstanceIdMask.Num() >= NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceData\\InstanceDataManager.cpp"
                             ,0x18b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  return;
}

// RemoveAtSwap @ 147d22670

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FInstanceDataManager::RemoveAtSwap(FInstanceDataManager *this,int param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UActorComponent *this_00;
  int iVar6;
  FPrimitiveInstanceId local_res8 [2];
  
  if (this->TrackingState != Disabled) {
    FInstanceIdIndexMap::IndexToId((FInstanceIdIndexMap *)this,(int)local_res8);
    iVar6 = (int)this->_padding_;
    if (iVar6 == 0) {
      iVar6 = (int)this->_padding_;
    }
    FInstanceAttributeTracker::RemoveAtSwap
              (&this->InstanceUpdateTracker,local_res8[0],param_1,iVar6);
    iVar6 = (int)this->_padding_ + -1;
    if ((param_1 != iVar6) && ((int)this->_padding_ == 0)) {
      CreateExplicitIdentityMapping(this);
    }
    this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
    if (this_00 != (UActorComponent *)0x0) {
      UActorComponent::MarkRenderInstancesDirty(this_00);
    }
    FreeInstanceId(this,local_res8[0]);
    iVar1 = (int)this->_padding_;
    if (iVar1 == 0) {
      if ((param_1 != iVar6) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bCausesReordering",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceData\\InstanceDataManager.cpp"
                             ,0x149,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(int *)&this->_padding_ = (int)this->_padding_ + -1;
      return;
    }
    if ((iVar1 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (int)this->_padding_;
    uVar2 = *(uint *)(this->_padding_ + -4 + (longlong)iVar6 * 4);
    iVar6 = iVar6 + -1;
    *(int *)&this->_padding_ = iVar6;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(ForAnyElementType *)this,iVar6,(int *)((longlong)&this->_padding_ + 4));
    iVar6 = (int)this->_padding_;
    *(int *)&this->_padding_ = iVar6;
    if (((this->ValidInstanceIdMask).NumBits < iVar6) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValidInstanceIdMask.Num() >= NumInstances",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceData\\InstanceDataManager.cpp"
                           ,0x151,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar2 != local_res8[0].Id) {
      uVar5 = 0;
      if ((int)uVar2 < (int)this->_padding_) {
        uVar5 = ~uVar2 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(int *)(this->_padding_ + (longlong)(int)uVar2 * 4) = param_1;
      uVar5 = 0;
      if (param_1 < (int)this->_padding_) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)(this->_padding_ + (longlong)param_1 * 4) = uVar2;
    }
  }
  return;
}

// Serialize @ 147d27c90

void __thiscall
FInstanceDataManager::Serialize(FInstanceDataManager *this,FArchive *param_1,bool param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  ForElementType<unsigned_int> FVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ForElementType<unsigned_int> FVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint local_res8 [2];
  
  TArrayPrivateFriend::Serialize<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> *)this);
  plVar4 = &this->_padding_;
  puVar3 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)plVar4);
    }
  }
  else {
    *(undefined4 *)plVar4 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  lVar10 = 0x20;
  if ((int)this->_padding_ != 0) {
    lVar10 = 0x18;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  local_res8[0] =
       *(uint *)((this->InstanceUpdateTracker).Removed.AllocatorInstance.InlineData + lVar10 + -0x38
                );
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  uVar14 = 0;
  if ((param_1->field_0x28 & 1) != 0) {
    if ((int)this->_padding_ == 0) {
      iVar12 = *(int *)((longlong)&this->_padding_ + 4);
      *(undefined4 *)&this->_padding_ = 0;
      if (iVar12 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)&this->_padding_,0,
                   (int *)((longlong)&this->_padding_ + 4));
      }
    }
    else {
      FInstanceIdIndexMap::RebuildFromIndexToIdMap((FInstanceIdIndexMap *)this,local_res8[0]);
    }
    if ((param_1->field_0x28 & 1) != 0) {
      iVar12 = (this->ValidInstanceIdMask).MaxBits;
      uVar8 = (int)this->_padding_ + 0x1fU & 0xffffffe0;
      (this->ValidInstanceIdMask).NumBits = 0;
      if ((iVar12 < (int)uVar8) || (0x80 < iVar12)) {
        uVar13 = 0x80;
        if (0x80 < (int)uVar8) {
          uVar13 = uVar8;
        }
        (this->ValidInstanceIdMask).MaxBits = uVar13;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->ValidInstanceIdMask,0);
      }
      iVar12 = (int)this->_padding_;
      if (iVar12 != 0) {
        TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>(&this->ValidInstanceIdMask,iVar12,false);
        iVar12 = (int)this->_padding_;
        uVar15 = uVar14;
        if (0 < iVar12) {
          do {
            uVar13 = (uint)uVar14;
            uVar8 = 0;
            if ((int)uVar13 < iVar12) {
              uVar8 = ~uVar13 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar12 = *(int *)(uVar15 + this->_padding_);
            if (((iVar12 < 0) || ((this->ValidInstanceIdMask).NumBits <= iVar12)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FVar5 = (this->ValidInstanceIdMask).AllocatorInstance.SecondaryData;
            FVar11 = (ForElementType<unsigned_int>)&this->ValidInstanceIdMask;
            if (FVar5 != (ForElementType<unsigned_int>)0x0) {
              FVar11 = FVar5;
            }
            iVar9 = iVar12;
            if (iVar12 < 0) {
              iVar9 = iVar12 + 0x1f;
            }
            uVar14 = (ulonglong)(uVar13 + 1);
            puVar2 = (uint *)((longlong)FVar11 + (longlong)(iVar9 >> 5) * 4);
            *puVar2 = *puVar2 | 1 << ((byte)iVar12 & 0x1f);
            iVar12 = (int)this->_padding_;
            uVar15 = uVar15 + 4;
          } while ((int)(uVar13 + 1) < iVar12);
        }
      }
      this->IdSearchStartIndex = 0;
      if (this->TrackingState != Disabled) {
        this->TrackingState = Initial;
        FInstanceAttributeTracker::Reset(&this->InstanceUpdateTracker);
        this->bNumCustomDataChanged = '\0';
        this->bAnyInstanceChange = '\0';
        this->bPrimitiveTransformChanged = '\0';
        this->bTransformChangedAllInstances = '\0';
        (this->AllChangedFlags).Packed = 0;
      }
    }
  }
  return;
}

// ShouldUsePrecomputed @ 147d2d9e0

bool __cdecl FInstanceDataManager::ShouldUsePrecomputed(void)

{
  bool bVar1;
  IConsoleManager *pIVar2;
  longlong *plVar3;
  TConsoleVariableData<int> *pTVar4;
  TConsoleVariableData<int> *pTVar5;
  
  pTVar5 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar2 = IConsoleManager::Get();
    plVar3 = (longlong *)
             (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,L"r.SceneCulling.Precomputed",1);
    pTVar4 = pTVar5;
    if (plVar3 != (longlong *)0x0) {
      pTVar4 = (TConsoleVariableData<int> *)(**(code **)(*plVar3 + 0x68))(plVar3);
    }
    CVarPrecomputed = pTVar4;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar4 = CVarPrecomputed;
  if (CVarPrecomputed != (TConsoleVariableData<int> *)0x0) {
    bVar1 = IsInParallelGameThread();
    if ((!bVar1) && (bVar1 = IsInGameThread(), !bVar1)) {
      pTVar5 = (TConsoleVariableData<int> *)&DAT_00000004;
    }
    if (*(int *)((longlong)pTVar4->ShadowedValue + (longlong)pTVar5->ShadowedValue) != 0) {
      return true;
    }
  }
  return false;
}

// TransformChanged @ 147d33e70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FInstanceDataManager::TransformChanged(FInstanceDataManager *this,int param_1)

{
  UActorComponent *this_00;
  int iVar1;
  
  if (this->TrackingState != Disabled) {
    if (this->TrackingState == Tracked) {
      iVar1 = (int)this->_padding_;
      if (iVar1 == 0) {
        iVar1 = (int)this->_padding_;
      }
      FInstanceAttributeTracker::MarkIndex<1>(&this->InstanceUpdateTracker,param_1,iVar1);
    }
    else {
      this->bAnyInstanceChange = '\x01';
    }
    this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
    if (this_00 != (UActorComponent *)0x0) {
      UActorComponent::MarkRenderInstancesDirty(this_00);
      return;
    }
  }
  return;
}

// TransformChanged @ 147d33ee0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FInstanceDataManager::TransformChanged(FInstanceDataManager *this,FPrimitiveInstanceId param_1)

{
  int iVar1;
  UActorComponent *this_00;
  
  if (this->TrackingState == Tracked) {
    iVar1 = FInstanceIdIndexMap::IdToIndex((FInstanceIdIndexMap *)this,param_1);
    MarkChangeHelper<1>(this,iVar1);
    return;
  }
  this->bAnyInstanceChange = '\x01';
  this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
  if (this_00 != (UActorComponent *)0x0) {
    UActorComponent::MarkRenderInstancesDirty(this_00);
    return;
  }
  return;
}

// TransformsChangedAll @ 147d33f40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FInstanceDataManager::TransformsChangedAll(FInstanceDataManager *this)

{
  UActorComponent *this_00;
  
  if (this->TrackingState != Disabled) {
    this->bTransformChangedAllInstances = '\x01';
    this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
    if (this_00 != (UActorComponent *)0x0) {
      UActorComponent::MarkRenderInstancesDirty(this_00);
      return;
    }
  }
  return;
}

