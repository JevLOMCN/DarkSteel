// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 27

// StaticClass @ 146d640c0

UClass * __cdecl UNavigationPath::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationPath.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationPath",
               &Z_Registration_Info_UClass_UNavigationPath.InnerSingleton,
               StaticRegisterNativesUNavigationPath,0x98,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavigationPath>,InternalVTableHelperCtorCaller<UNavigationPath>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationPath.InnerSingleton;
}

// UNavigationPath @ 146d76690

UNavigationPath * __thiscall
UNavigationPath::UNavigationPath(UNavigationPath *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNavigationPath__6B_;
  *(undefined8 *)&this->PathUpdatedNotifier = 0;
  *(undefined8 *)&(this->PathUpdatedNotifier).field_0x8 = 0;
  *(undefined8 *)&(this->PathUpdatedNotifier).field_0x10 = 0;
  (this->PathPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathPoints).ArrayNum = 0;
  (this->PathPoints).ArrayMax = 0;
  this->RecalculateOnInvalidation = Default;
  (this->DrawDebugDelegateHandle).ID = 0;
  (this->SharedPath).Object = (FNavigationPath *)0x0;
  (this->SharedPath).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->PathObserver = 0;
  *(undefined8 *)&(this->PathObserver).field_0x8 = 0;
  *(undefined4 *)&(this->PathObserver).field_0x10 = 0;
  (this->PathObserverDelegateHandle).ID = 0;
  return this;
}

// UNavigationPath @ 146d76700

UNavigationPath * __thiscall
UNavigationPath::UNavigationPath(UNavigationPath *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  void *pvVar2;
  ForElementType<TAlignedBytes<16,16>_> FVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UNavigationPath *local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  UObject::UObject((UObject *)this,param_1);
  this->bIsValid = 0;
  this->bDebugDrawingEnabled = 0;
  this->_padding_ = (longlong)&___7UNavigationPath__6B_;
  *(undefined8 *)&this->PathUpdatedNotifier = 0;
  *(undefined8 *)&(this->PathUpdatedNotifier).field_0x8 = 0;
  *(undefined8 *)&(this->PathUpdatedNotifier).field_0x10 = 0;
  (this->PathPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathPoints).ArrayNum = 0;
  (this->PathPoints).ArrayMax = 0;
  this->RecalculateOnInvalidation = Default;
  (this->DebugDrawingColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  (this->DrawDebugDelegateHandle).ID = 0;
  (this->SharedPath).Object = (FNavigationPath *)0x0;
  (this->SharedPath).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->PathObserver = 0;
  *(undefined8 *)&(this->PathObserver).field_0x8 = 0;
  *(undefined4 *)&(this->PathObserver).field_0x10 = 0;
  (this->PathObserverDelegateHandle).ID = 0;
  if ((this->_padding_ & 0x10) == 0) {
    local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationPath____A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar5[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res8);
      puVar5[4] = OnPathEvent;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    iVar4 = local_60.DelegateSize;
    FVar3 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->PathObserver,
               (FWriteAccessScope *)&local_50);
    if ((*(int *)&(this->PathObserver).field_0x10 != 0) &&
       (puVar5 = *(undefined8 **)&(this->PathObserver).field_0x8, puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->PathObserver).field_0x8,0,0,0x10);
      *(undefined4 *)&(this->PathObserver).field_0x10 = 0;
    }
    pvVar2 = *(void **)&(this->PathObserver).field_0x8;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)&(this->PathObserver).field_0x8 = FVar3;
    *(int *)&(this->PathObserver).field_0x10 = iVar4;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  }
  return this;
}

// ~UNavigationPath @ 146d78eb0

void __thiscall UNavigationPath::~UNavigationPath(UNavigationPath *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UNavigationPath__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->PathObserver);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedPath).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->PathPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->PathUpdatedNotifier).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PathUpdatedNotifier);
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 146d85250

void __thiscall UNavigationPath::BeginDestroy(UNavigationPath *this)

{
  FNavigationPath *pFVar1;
  FDelegateHandle FVar2;
  
  pFVar1 = (this->SharedPath).Object;
  if ((pFVar1 != (FNavigationPath *)0x0) &&
     (FVar2.ID = (this->PathObserverDelegateHandle).ID, FVar2.ID != 0)) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar1->ObserverDelegate,FVar2
              );
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// DrawDebug @ 146d92470

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNavigationPath::DrawDebug(UNavigationPath *this,UCanvas *param_1,APlayerController *param_2)

{
  uint uVar1;
  FNavigationPath *pFVar2;
  code *pcVar3;
  UObject *pUVar4;
  
  pFVar2 = (this->SharedPath).Object;
  if (pFVar2 != (FNavigationPath *)0x0) {
    uVar1 = (this->DebugDrawingColor).field0_0x0.Bits;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x10);
    pUVar4 = FWeakObjectPtr::Get(&(pFVar2->NavigationDataUsed).WeakPtr);
    (*pcVar3)(pFVar2,pUVar4,uVar1,param_1,0,__real_bf800000,0);
  }
  return;
}

// EnableDebugDrawing @ 146d92b60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNavigationPath::EnableDebugDrawing(UNavigationPath *this,bool param_1,FLinearColor *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDelegateHandle FVar4;
  UNavigationPath *local_res8;
  FColor_u_0 local_res10;
  wchar_t local_res20 [4];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  FLinearColor::ToFColorSRGB(param_2);
  uVar1 = *(undefined4 *)&this->field_0x54;
  (this->DebugDrawingColor).field0_0x0 = local_res10;
  if (ZPULL(uVar1,1,1) != (uint)param_1) {
    *(uint *)&this->field_0x54 = uVar1 & 0xfffffffd | (uint)param_1 + (uint)param_1;
    if (param_1) {
      local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_60.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_68,(FWriteAccessScope *)&local_50);
      local_38 = &local_60;
      puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationPath____A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar2[3] = 0;
        local_res8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
        puVar2[4] = DrawDebug;
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      FVar4 = UDebugDrawService::Register
                        (local_res20,
                         (TDelegate<void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                          *)L"Navigation");
                    /* WARNING: Load size is inaccurate */
      (this->DrawDebugDelegateHandle).ID = *FVar4.ID;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_68,(FWriteAccessScope *)&local_50);
      if ((local_60.DelegateSize != 0) &&
         (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_60,0,0,0x10);
        local_60.DelegateSize = 0;
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_60.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
      return;
    }
    UDebugDrawService::Unregister((FDelegateHandle)(this->DrawDebugDelegateHandle).ID);
  }
  return;
}

// EnableRecalculationOnInvalidation @ 146d92d10

void __thiscall
UNavigationPath::EnableRecalculationOnInvalidation
          (UNavigationPath *this,ENavigationOptionFlag param_1)

{
  FNavigationPath *pFVar1;
  uint uVar2;
  
  if (((param_1 != this->RecalculateOnInvalidation) &&
      (this->RecalculateOnInvalidation = param_1, this->bIsValid != 0)) && (param_1 != Default)) {
    pFVar1 = TSharedPtr<FNavigationPath,1>::operator->(&this->SharedPath);
    uVar2 = 0;
    if (this->RecalculateOnInvalidation == Enable) {
      uVar2 = 0x40;
    }
    pFVar1->bDoAutoUpdateOnInvalidation = uVar2 >> 6;
  }
  return;
}

// GetDebugString @ 146d9a880

FString * __thiscall
UNavigationPath::GetDebugString(UNavigationPath *this,FString *__return_storage_ptr__)

{
  FNavigationPath *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  uint uVar5;
  
  pFVar1 = (this->SharedPath).Object;
  if ((((pFVar1 == (FNavigationPath *)0x0) || (pFVar1->bIsReady == 0)) ||
      ((pFVar1->PathPoints).ArrayNum < 2)) || (pFVar1->bUpToDate == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  if ((uVar5 != this->bIsValid) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(SharedPath.IsValid() && SharedPath->IsValid()) == !!bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationPath.cpp"
                         ,0x1e4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar2)();
    return pFVar4;
  }
  if (this->bIsValid == 0) {
    ::FString::FString(__return_storage_ptr__,L"Invalid path");
    return __return_storage_ptr__;
  }
  if (((this->SharedPath).Object == (FNavigationPath *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar2)();
    return pFVar4;
  }
  if (((this->SharedPath).Object == (FNavigationPath *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar2)();
    return pFVar4;
  }
  if (((this->SharedPath).Object == (FNavigationPath *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar2)();
    return pFVar4;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"Path: points %d%s%s");
  return __return_storage_ptr__;
}

// GetPathCost @ 146d9ec00

double __thiscall UNavigationPath::GetPathCost(UNavigationPath *this)

{
  FNavigationPath *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  double dVar5;
  
  pFVar1 = (this->SharedPath).Object;
  if ((((pFVar1 == (FNavigationPath *)0x0) || (pFVar1->bIsReady == 0)) ||
      ((pFVar1->PathPoints).ArrayNum < 2)) || (pFVar1->bUpToDate == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  if (uVar4 != this->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(SharedPath.IsValid() && SharedPath->IsValid()) == !!bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationPath.cpp"
                       ,0x220,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      dVar5 = (double)(*pcVar2)();
      return dVar5;
    }
  }
  if (this->bIsValid != 0) {
    if ((this->SharedPath).Object == (FNavigationPath *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        dVar5 = (double)(*pcVar2)();
        return dVar5;
      }
    }
    pFVar1 = (this->SharedPath).Object;
                    /* WARNING: Could not recover jumptable at 0x000146d9eca2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar5 = (double)(**(code **)(pFVar1->_padding_ + 0x48))(pFVar1,0);
    return dVar5;
  }
  return __real_bff0000000000000;
}

// GetPathLength @ 146d9f1b0

double __thiscall UNavigationPath::GetPathLength(UNavigationPath *this)

{
  int iVar1;
  FNavigationPath *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  pFVar2 = (this->SharedPath).Object;
  if ((((pFVar2 == (FNavigationPath *)0x0) || (pFVar2->bIsReady == 0)) ||
      ((pFVar2->PathPoints).ArrayNum < 2)) || (pFVar2->bUpToDate == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  if (uVar7 != this->bIsValid) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(SharedPath.IsValid() && SharedPath->IsValid()) == !!bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationPath.cpp"
                       ,0x21a,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      dVar5 = (double)(*pcVar4)();
      return dVar5;
    }
  }
  if (this->bIsValid == 0) {
    return __real_bff0000000000000;
  }
  if ((this->SharedPath).Object == (FNavigationPath *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      dVar5 = (double)(*pcVar4)();
      return dVar5;
    }
  }
  pFVar2 = (this->SharedPath).Object;
  iVar1 = (pFVar2->PathPoints).ArrayNum;
  if (iVar1 != 0) {
    pcVar4 = *(code **)(pFVar2->_padding_ + 0x58);
    if (iVar1 < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        dVar5 = (double)(*pcVar4)();
        return dVar5;
      }
    }
    pFVar3 = (pFVar2->PathPoints).AllocatorInstance.Data;
    local_28 = *(undefined4 *)pFVar3;
    uStack_24 = *(undefined4 *)(pFVar3 + 4);
    uStack_20 = *(undefined4 *)(pFVar3 + 8);
    uStack_1c = *(undefined4 *)(pFVar3 + 0xc);
    local_18 = *(undefined8 *)(pFVar3 + 0x10);
    dVar5 = (double)(*pcVar4)(pFVar2,&local_28,1);
    return dVar5;
  }
  return 0.0;
}

// GetPrivateStaticClass @ 146da0bb0

UClass * __cdecl UNavigationPath::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationPath.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationPath",
               &Z_Registration_Info_UClass_UNavigationPath.InnerSingleton,
               StaticRegisterNativesUNavigationPath,0x98,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavigationPath>,InternalVTableHelperCtorCaller<UNavigationPath>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationPath.InnerSingleton;
}

// IsPartial @ 146da50e0

bool __thiscall UNavigationPath::IsPartial(UNavigationPath *this)

{
  FNavigationPath *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  pFVar1 = (this->SharedPath).Object;
  if ((((pFVar1 == (FNavigationPath *)0x0) || (pFVar1->bIsReady == 0)) ||
      ((pFVar1->PathPoints).ArrayNum < 2)) || (pFVar1->bUpToDate == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  if (uVar5 != this->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(SharedPath.IsValid() && SharedPath->IsValid()) == !!bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationPath.cpp"
                       ,0x226,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (this->bIsValid != 0) {
    if ((this->SharedPath).Object == (FNavigationPath *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (((this->SharedPath).Object)->bIsPartial != 0) {
      return true;
    }
  }
  return false;
}

// IsStringPulled @ 146da5580

bool __thiscall UNavigationPath::IsStringPulled(UNavigationPath *this)

{
  return false;
}

// IsValid @ 146da5910

bool __thiscall UNavigationPath::IsValid(UNavigationPath *this)

{
  FNavigationPath *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  pFVar1 = (this->SharedPath).Object;
  if ((((pFVar1 == (FNavigationPath *)0x0) || (pFVar1->bIsReady == 0)) ||
      ((pFVar1->PathPoints).ArrayNum < 2)) || (pFVar1->bUpToDate == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  if (uVar5 != this->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(SharedPath.IsValid() && SharedPath->IsValid()) == !!bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationPath.cpp"
                       ,0x22c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return this->bIsValid;
}

// OnPathEvent @ 146da9b20

void __thiscall
UNavigationPath::OnPathEvent(UNavigationPath *this,FNavigationPath *param_1,Type param_2)

{
  FNavigationPath *pFVar1;
  UNavigationPath *local_18;
  undefined1 local_10;
  
  if (param_1 == (this->SharedPath).Object) {
    local_10 = (undefined1)param_2;
    local_18 = this;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->PathUpdatedNotifier,
               &local_18);
    pFVar1 = (this->SharedPath).Object;
    if ((((pFVar1 != (FNavigationPath *)0x0) && (pFVar1->bIsReady != 0)) &&
        (1 < (pFVar1->PathPoints).ArrayNum)) && (pFVar1->bUpToDate != 0)) {
      this->bIsValid = 1;
      SetPathPointsFromPath(this,param_1);
      return;
    }
    this->bIsValid = 0;
  }
  return;
}

// SetPath @ 146db92f0

void __thiscall
UNavigationPath::SetPath(UNavigationPath *this,TSharedPtr<FNavigationPath,1> *param_1)

{
  ENavigationOptionFlag EVar1;
  FNavigationPath *pFVar2;
  FNavigationPath *pFVar3;
  FDelegateHandle FVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  uint uVar7;
  TDelegate<void___cdecl(FNavigationPath_*,ENavPathEvent::Type),FDefaultDelegateUserPolicy> *this_00
  ;
  ulong64 local_res8;
  undefined1 local_28 [32];
  
  pFVar2 = param_1->Object;
  pFVar3 = (this->SharedPath).Object;
  if (pFVar3 != pFVar2) {
    if ((pFVar3 != (FNavigationPath *)0x0) &&
       (FVar4.ID = (this->PathObserverDelegateHandle).ID, FVar4.ID != 0)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar3->ObserverDelegate,
                 FVar4);
    }
    pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar3 = param_1->Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (this->SharedPath).SharedReferenceCount.ReferenceController;
    (this->SharedPath).Object = pFVar3;
    (this->SharedPath).SharedReferenceCount.ReferenceController = pTVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    if (pFVar2 == (FNavigationPath *)0x0) {
      (this->PathPoints).ArrayNum = 0;
      if ((this->PathPoints).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&(this->PathPoints).AllocatorInstance,0,&(this->PathPoints).ArrayMax);
      }
    }
    else {
      this_00 = TDelegate<void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
                ::
                TDelegate<void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
                          (local_28,&this->PathObserver);
      TMulticastDelegateRegistration<void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
      ::Add(&pFVar2->ObserverDelegate,
            (TDelegate<void___cdecl(FNavigationPath_*,ENavPathEvent::Type),FDefaultDelegateUserPolicy>
             *)&local_res8);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
      EVar1 = this->RecalculateOnInvalidation;
      (this->PathObserverDelegateHandle).ID = local_res8;
      if (EVar1 != Default) {
        pFVar2->bDoAutoUpdateOnInvalidation = 0;
        uVar7 = 0;
        if (EVar1 == Enable) {
          uVar7 = 0x40;
        }
        *(uint *)&pFVar2->field_0xa0 = *(uint *)&pFVar2->field_0xa0 | uVar7;
      }
      SetPathPointsFromPath(this,pFVar2);
    }
    OnPathEvent(this,pFVar2,(uint)(pFVar2 != (FNavigationPath *)0x0));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetPathPointsFromPath @ 146db9440

void __thiscall
UNavigationPath::SetPathPointsFromPath(UNavigationPath *this,FNavigationPath *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  
  uVar3 = (param_1->PathPoints).ArrayNum;
  pTVar1 = &this->PathPoints;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar2 = &(this->PathPoints).ArrayMax;
  (this->PathPoints).ArrayNum = 0;
  if ((this->PathPoints).ArrayMax < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar3,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar4 = (param_1->PathPoints).ArrayNum;
  pFVar11 = (param_1->PathPoints).AllocatorInstance.Data;
  pFVar12 = pFVar11 + (longlong)iVar4 * 0x30;
  while( true ) {
    if ((param_1->PathPoints).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FNavPathPoint,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar12) break;
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + (longlong)*piVar2 * 0x18)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar10 = (this->PathPoints).ArrayNum;
    if (iVar10 == *piVar2) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->PathPoints).ArrayNum = iVar10 + 1;
    uVar8 = *(undefined8 *)(pFVar11 + 8);
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    pFVar5 = pFVar6 + (longlong)iVar10 * 0x18;
    *(undefined8 *)pFVar5 = *(undefined8 *)pFVar11;
    *(undefined8 *)(pFVar5 + 8) = uVar8;
    pFVar5 = pFVar11 + 0x10;
    pFVar11 = pFVar11 + 0x30;
    *(undefined8 *)(pFVar6 + (longlong)iVar10 * 0x18 + 0x10) = *(undefined8 *)pFVar5;
  }
  return;
}

// StaticRegisterNativesUNavigationPath @ 146dbaa00

void __cdecl UNavigationPath::StaticRegisterNativesUNavigationPath(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UNavigationPath_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execEnableDebugDrawing @ 146dc5740

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UNavigationPath::execEnableDebugDrawing(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDelegateHandle FVar4;
  bool bVar5;
  int local_res8 [2];
  UObject *local_res10 [2];
  wchar_t local_res20 [4];
  undefined8 local_98;
  undefined8 uStack_90;
  FLinearColor_u_0 local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar5 = local_res8[0] != 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_88._0_8_ = local_98;
  local_88._8_8_ = uStack_90;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FLinearColor::ToFColorSRGB((FLinearColor *)&local_88._s_0);
  *(undefined4 *)&param_1[2].field_0x8 = local_res10[0]._0_4_;
  if ((*(uint *)&param_1[2].field_0x4 >> 1 & 1) != (uint)bVar5) {
    *(uint *)&param_1[2].field_0x4 =
         *(uint *)&param_1[2].field_0x4 & 0xfffffffd | (uint)bVar5 + (uint)bVar5;
    if (bVar5) {
      local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_70.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_78,(FWriteAccessScope *)&local_60);
      local_48 = &local_70;
      puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationPath____A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        puVar2[3] = 0;
        local_res10[0] = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)local_res10);
        puVar2[4] = DrawDebug;
      }
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      FVar4 = UDebugDrawService::Register
                        (local_res20,
                         (TDelegate<void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                          *)L"Navigation");
      *(undefined8 *)&param_1[2].field_0x10 = *(undefined8 *)FVar4.ID;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_78,(FWriteAccessScope *)&local_60);
      if ((local_70.DelegateSize != 0) &&
         (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_70,0,0,0x10);
        local_70.DelegateSize = 0;
      }
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_70.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
    }
    else {
      UDebugDrawService::Unregister((FDelegateHandle)*(ulong64 *)&param_1[2].field_0x10);
    }
  }
  return;
}

// execEnableRecalculationOnInvalidation @ 146dc5990

void __cdecl
UNavigationPath::execEnableRecalculationOnInvalidation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  FProperty *pFVar2;
  FNavigationPath *pFVar3;
  uint uVar4;
  char local_res8 [8];
  
  local_res8[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar4 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_res8[0] != *(char *)(param_1 + 2)) &&
      (bVar1 = param_1[2].field_0x4, *(char *)(param_1 + 2) = local_res8[0], (bVar1 & 1) != 0)) &&
     (local_res8[0] != '\0')) {
    pFVar3 = TSharedPtr<FNavigationPath,1>::operator->
                       ((TSharedPtr<FNavigationPath,1> *)&param_1[2].field_0x18);
    if (*(char *)(param_1 + 2) == '\x01') {
      uVar4 = 0x40;
    }
    pFVar3->bDoAutoUpdateOnInvalidation = uVar4 >> 6;
  }
  return;
}

// execGetDebugString @ 146dc5f70

void __cdecl UNavigationPath::execGetDebugString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetDebugString((UNavigationPath *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->Data).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetPathCost @ 146dc60c0

void __cdecl UNavigationPath::execGetPathCost(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)&param_1[2].field_0x18;
  if ((((lVar1 != 0) && ((*(uint *)(lVar1 + 0xa0) & 2) != 0)) && (1 < *(int *)(lVar1 + 0x30))) &&
     ((*(uint *)(lVar1 + 0xa0) & 1) != 0)) {
    uVar4 = 1;
  }
  if (uVar4 != (*(uint *)&param_1[2].field_0x4 & 1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(SharedPath.IsValid() && SharedPath->IsValid()) == !!bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationPath.cpp"
                       ,0x220,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_1[2].field_0x4 & 1) != 0) {
    if (*(longlong *)&param_1[2].field_0x18 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar5 = (**(code **)(**(longlong **)&param_1[2].field_0x18 + 0x48))
                      (*(longlong **)&param_1[2].field_0x18,0);
    *(undefined8 *)param_3 = uVar5;
    return;
  }
  *(undefined8 *)param_3 = __real_bff0000000000000;
  return;
}

// execGetPathLength @ 146dc6550

void __cdecl UNavigationPath::execGetPathLength(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)&param_1[2].field_0x18;
  if ((((lVar1 == 0) || ((*(uint *)(lVar1 + 0xa0) & 2) == 0)) || (*(int *)(lVar1 + 0x30) < 2)) ||
     ((*(uint *)(lVar1 + 0xa0) & 1) == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  if (uVar7 != (*(uint *)&param_1[2].field_0x4 & 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(SharedPath.IsValid() && SharedPath->IsValid()) == !!bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationPath.cpp"
                       ,0x21a,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((param_1[2].field_0x4 & 1) == 0) {
    *(undefined8 *)param_3 = __real_bff0000000000000;
    return;
  }
  if (*(longlong *)&param_1[2].field_0x18 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar2 = *(longlong **)&param_1[2].field_0x18;
  if ((int)plVar2[6] != 0) {
    pcVar4 = *(code **)(*plVar2 + 0x58);
    if ((int)plVar2[6] < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    puVar3 = (undefined4 *)plVar2[5];
    local_28 = *puVar3;
    uStack_24 = puVar3[1];
    uStack_20 = puVar3[2];
    uStack_1c = puVar3[3];
    local_18 = *(undefined8 *)(puVar3 + 4);
    uVar5 = (*pcVar4)(plVar2,&local_28,1);
    *(undefined8 *)param_3 = uVar5;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execIsPartial @ 146dc6c60

void __cdecl UNavigationPath::execIsPartial(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)&param_1[2].field_0x18;
  if ((((lVar1 != 0) && ((*(uint *)(lVar1 + 0xa0) & 2) != 0)) && (1 < *(int *)(lVar1 + 0x30))) &&
     ((*(uint *)(lVar1 + 0xa0) & 1) != 0)) {
    uVar4 = 1;
  }
  if (uVar4 != (*(uint *)&param_1[2].field_0x4 & 1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(SharedPath.IsValid() && SharedPath->IsValid()) == !!bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationPath.cpp"
                       ,0x226,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_1[2].field_0x4 & 1) != 0) {
    if (*(longlong *)&param_1[2].field_0x18 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((*(uint *)(*(longlong *)&param_1[2].field_0x18 + 0xa0) >> 2 & 1) != 0) {
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsStringPulled @ 146dc6d50

void __cdecl UNavigationPath::execIsStringPulled(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsValid @ 146dc6d70

void __cdecl UNavigationPath::execIsValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)&param_1[2].field_0x18;
  if ((((lVar1 != 0) && ((*(uint *)(lVar1 + 0xa0) & 2) != 0)) && (1 < *(int *)(lVar1 + 0x30))) &&
     ((*(uint *)(lVar1 + 0xa0) & 1) != 0)) {
    uVar4 = 1;
  }
  if (uVar4 != (*(uint *)&param_1[2].field_0x4 & 1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(SharedPath.IsValid() && SharedPath->IsValid()) == !!bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationPath.cpp"
                       ,0x22c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(byte *)param_3 = param_1[2].field_0x4 & 1;
  return;
}

