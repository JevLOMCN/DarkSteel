// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 26

// StaticClass @ 146d63300

UClass * __cdecl UNavigationObjectRepository::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationObjectRepository.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationObjectRepository",
               &Z_Registration_Info_UClass_UNavigationObjectRepository.InnerSingleton,
               StaticRegisterNativesUNavigationObjectRepository,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavigationObjectRepository>,
               InternalVTableHelperCtorCaller<UNavigationObjectRepository>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationObjectRepository.InnerSingleton;
}

// UNavigationObjectRepository @ 146d76490

UNavigationObjectRepository * __thiscall
UNavigationObjectRepository::UNavigationObjectRepository
          (UNavigationObjectRepository *this,FVTableHelper *param_1)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UNavigationObjectRepository__6B_;
  *(undefined8 *)&this->OnNavigationElementAddedDelegate = 0;
  *(undefined8 *)&(this->OnNavigationElementAddedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnNavigationElementAddedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnNavigationElementRemovedDelegate = 0;
  *(undefined8 *)&(this->OnNavigationElementRemovedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnNavigationElementRemovedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnCustomNavLinkObjectRegistered = 0;
  *(undefined8 *)&(this->OnCustomNavLinkObjectRegistered).field_0x8 = 0;
  *(undefined4 *)&(this->OnCustomNavLinkObjectRegistered).field_0x10 = 0;
  *(undefined8 *)&this->OnCustomNavLinkObjectUnregistered = 0;
  *(undefined8 *)&(this->OnCustomNavLinkObjectUnregistered).field_0x8 = 0;
  *(undefined4 *)&(this->OnCustomNavLinkObjectUnregistered).field_0x10 = 0;
  *(undefined8 *)&this->ObjectsToHandleMap = 0;
  *(undefined8 *)&(this->ObjectsToHandleMap).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectsToHandleMap).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectsToHandleMap).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectsToHandleMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectsToHandleMap).field_0x34 = 0;
  *(undefined4 *)&(this->ObjectsToHandleMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ObjectsToHandleMap).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectsToHandleMap).field_0x48 = 0;
  *(undefined8 *)&this->NavRelevantElements = 0;
  *(undefined8 *)&(this->NavRelevantElements).field_0x8 = 0;
  *(undefined8 *)&(this->NavRelevantElements).field_0x20 = 0;
  *(undefined4 *)&(this->NavRelevantElements).field_0x28 = 0;
  *(undefined4 *)&(this->NavRelevantElements).field_0x2c = 0x80;
  *(undefined4 *)&(this->NavRelevantElements).field_0x34 = 0;
  *(undefined4 *)&(this->NavRelevantElements).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NavRelevantElements).field_0x40 = 0;
  *(undefined4 *)&(this->NavRelevantElements).field_0x48 = 0;
  (this->CustomLinkObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomLinkObjects).ArrayNum = 0;
  (this->CustomLinkObjects).ArrayMax = 0;
  this->NavElementAccessDetector = (FRWFallbackSafeAccessDetectorDefinition)0x0;
  return this;
}

// UNavigationObjectRepository @ 146d76590

UNavigationObjectRepository * __thiscall
UNavigationObjectRepository::UNavigationObjectRepository(UNavigationObjectRepository *this)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this);
  this->_padding_ = (longlong)&___7UNavigationObjectRepository__6B_;
  *(undefined8 *)&this->OnNavigationElementAddedDelegate = 0;
  *(undefined8 *)&(this->OnNavigationElementAddedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnNavigationElementAddedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnNavigationElementRemovedDelegate = 0;
  *(undefined8 *)&(this->OnNavigationElementRemovedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnNavigationElementRemovedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnCustomNavLinkObjectRegistered = 0;
  *(undefined8 *)&(this->OnCustomNavLinkObjectRegistered).field_0x8 = 0;
  *(undefined4 *)&(this->OnCustomNavLinkObjectRegistered).field_0x10 = 0;
  *(undefined8 *)&this->OnCustomNavLinkObjectUnregistered = 0;
  *(undefined8 *)&(this->OnCustomNavLinkObjectUnregistered).field_0x8 = 0;
  *(undefined4 *)&(this->OnCustomNavLinkObjectUnregistered).field_0x10 = 0;
  *(undefined8 *)&this->ObjectsToHandleMap = 0;
  *(undefined8 *)&(this->ObjectsToHandleMap).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectsToHandleMap).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectsToHandleMap).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectsToHandleMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectsToHandleMap).field_0x34 = 0;
  *(undefined4 *)&(this->ObjectsToHandleMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ObjectsToHandleMap).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectsToHandleMap).field_0x48 = 0;
  *(undefined8 *)&this->NavRelevantElements = 0;
  *(undefined8 *)&(this->NavRelevantElements).field_0x8 = 0;
  *(undefined8 *)&(this->NavRelevantElements).field_0x20 = 0;
  *(undefined4 *)&(this->NavRelevantElements).field_0x28 = 0;
  *(undefined4 *)&(this->NavRelevantElements).field_0x2c = 0x80;
  *(undefined4 *)&(this->NavRelevantElements).field_0x34 = 0;
  *(undefined4 *)&(this->NavRelevantElements).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NavRelevantElements).field_0x40 = 0;
  *(undefined4 *)&(this->NavRelevantElements).field_0x48 = 0;
  (this->CustomLinkObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomLinkObjects).ArrayNum = 0;
  (this->CustomLinkObjects).ArrayMax = 0;
  this->NavElementAccessDetector = (FRWFallbackSafeAccessDetectorDefinition)0x0;
  return this;
}

// ~UNavigationObjectRepository @ 146d78dc0

void __thiscall
UNavigationObjectRepository::~UNavigationObjectRepository(UNavigationObjectRepository *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7UNavigationObjectRepository__6B_;
  if (this->NavElementAccessDetector != (FRWFallbackSafeAccessDetectorDefinition)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicValue.load(std::memory_order_relaxed) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x3a,L"Detector cannot be destroyed while other threads access it");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->CustomLinkObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->NavRelevantElements).field_0x48 = 0;
  pvVar2 = *(void **)&(this->NavRelevantElements).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NavRelevantElements);
  *(undefined4 *)&(this->ObjectsToHandleMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ObjectsToHandleMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,FNavigationElementHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,FNavigationElementHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,FNavigationElementHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectsToHandleMap);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCustomNavLinkObjectUnregistered);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCustomNavLinkObjectRegistered);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnNavigationElementRemovedDelegate)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnNavigationElementAddedDelegate);
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  return;
}

// AddNavigationElement @ 146d82890

TSharedPtr<FNavigationElement_const_,1> * __thiscall
UNavigationObjectRepository::AddNavigationElement
          (UNavigationObjectRepository *this,
          TSharedPtr<FNavigationElement_const_,1> *__return_storage_ptr__,
          FNavigationElement *param_1,ENotifyOnSuccess param_2)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<FNavigationElement_const_,1> *pTVar6;
  FNavigationElementHandle *pFVar7;
  TSharedPtr<FNavigationElement,1> *pTVar8;
  undefined1 local_res8 [8];
  TPairInitializer<FNavigationElementHandle_&&,TSharedRef<FNavigationElement,1>_const_&> local_98;
  TSharedRef<FNavigationElement,1> local_88;
  FNavigationElementHandle *local_78;
  TSharedRef<FNavigationElement,1> *local_70;
  FNavigationElement *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FNavigationElementHandle local_58;
  FNavigationElementHandle local_48;
  FReadAccessScope local_38;
  
  LOCK();
  pFVar1 = &this->NavElementAccessDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 1);
  UNLOCK();
  if (((((uint)FVar2 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x5c,L"Acquiring a read access while there is already a write access"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FNavigationElement_const_,1> *)(*pcVar4)();
    return pTVar6;
  }
  pFVar7 = FNavigationElement::GetHandle(param_1,&local_58);
  pTVar8 = TMapBase<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>_>
           ::Find((TMapBase<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>_>
                   *)&this->NavRelevantElements,pFVar7);
  if (pTVar8 != (TSharedPtr<FNavigationElement,1> *)0x0) {
    local_res8[0] = 0;
    bVar5 = `UNavigationObjectRepository::AddNavigationElement'::__l4::<lambda_1>::operator()
                      (local_res8);
    if (!bVar5) {
      __return_storage_ptr__->Object = (FNavigationElement *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      LOCK();
      pFVar1 = &this->NavElementAccessDetector;
      FVar2 = *pFVar1;
      *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -1);
      UNLOCK();
      if (((uint)FVar2 & 0xfff00000) == 0) {
        return __return_storage_ptr__;
      }
      if (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure != false) {
        return __return_storage_ptr__;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x67,
                         L"Another thread asked to have a write access during this read access");
      if (!bVar5) {
        return __return_storage_ptr__;
      }
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FNavigationElement_const_,1> *)(*pcVar4)();
      return pTVar6;
    }
  }
  LOCK();
  pFVar1 = &this->NavElementAccessDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -1);
  UNLOCK();
  if (((((uint)FVar2 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x67,
                         L"Another thread asked to have a write access during this read access"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FNavigationElement_const_,1> *)(*pcVar4)();
    return pTVar6;
  }
  MakeShared<FNavigationElement,1,FNavigationElement>(&local_88,param_1);
  LOCK();
  pFVar1 = &this->NavElementAccessDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 0x100000);
  UNLOCK();
  if (((FVar2 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x72,
                         L"Acquiring a write access while there are ongoing read or write access"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FNavigationElement_const_,1> *)(*pcVar4)();
    return pTVar6;
  }
  local_78 = FNavigationElement::GetHandle(param_1,&local_48);
  local_70 = &local_88;
  TSet<TTuple<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FNavigationElementHandle_&&,TSharedRef<FNavigationElement,1>_const_&>_>
            ((TSet<TTuple<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>,FDefaultSetAllocator>
              *)&this->NavRelevantElements,&local_98,(bool *)&local_78);
  LOCK();
  pFVar1 = &this->NavElementAccessDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -0x100000);
  UNLOCK();
  if (((FVar2 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x7d,
                         L"Another thread asked to have a read or write access during this write access"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FNavigationElement_const_,1> *)(*pcVar4)();
    return pTVar6;
  }
  if (param_2 == Yes) {
    local_68 = local_88.Object;
    pTStack_60 = local_88.SharedReferenceCount.ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnNavigationElementAddedDelegate,&local_38);
    if ((*(int *)&(this->OnNavigationElementAddedDelegate).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(this->OnNavigationElementAddedDelegate).field_0x8,
       plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))(plVar3,&local_68);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  }
  if (local_88.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = local_88.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    __return_storage_ptr__->Object = local_88.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_88.SharedReferenceCount.ReferenceController;
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ForEachNavigationElement @ 146d97700

void __thiscall
UNavigationObjectRepository::ForEachNavigationElement
          (UNavigationObjectRepository *this,
          TFunctionRef<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&)> *param_1)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  ulonglong uVar2;
  FRWFallbackSafeAccessDetectorDefinition FVar3;
  int iVar4;
  uint uVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  longlong local_b8;
  TReferenceControllerBase<1> *local_b0;
  TMap<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  TMap<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>_>
  *local_80;
  int iStack_78;
  uint uStack_74;
  undefined1 *local_70;
  undefined4 uStack_68;
  int iStack_64;
  int local_60;
  undefined4 uStack_5c;
  undefined4 local_34;
  
  uVar9 = 1;
  LOCK();
  pFVar1 = &this->NavElementAccessDetector;
  FVar3 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 1);
  UNLOCK();
  if (((((uint)FVar3 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x5c,L"Acquiring a read access while there is already a write access"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iStack_78 = 0;
  local_a8 = &this->NavRelevantElements;
  iVar4 = *(int *)&(this->NavRelevantElements).field_0x28;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->NavRelevantElements).field_0x10;
  local_60 = 0;
  iStack_64 = 0;
  if (iVar4 != 0) {
    puVar11 = *(uint **)&(this->NavRelevantElements).field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)TStack_a0.Array;
    }
    uVar5 = *puVar11;
    while (uVar5 == 0) {
      lVar10 = (longlong)iStack_78;
      local_60 = local_60 + 0x20;
      iStack_78 = iStack_78 + 1;
      iStack_64 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_78) goto LAB_146d977ef;
      uVar5 = puVar11[lVar10 + 1];
    }
    uVar9 = -uVar5 & uVar5;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_64 = (int)lVar10 + -1 + local_60;
    if (iVar4 < iStack_64) {
      iStack_64 = iVar4;
    }
  }
LAB_146d977ef:
  uStack_68 = 0xffffffff;
  uStack_5c = local_34;
  TStack_a0._padding_ = CONCAT44(uVar9,iStack_78);
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  TStack_a0._28_4_ = local_34;
  TStack_a0.BaseBitIndex = local_60;
  local_80 = local_a8;
  uStack_74 = uVar9;
  local_70 = (undefined1 *)TStack_a0.Array;
  TStack_a0.CurrentBitIndex = iStack_64;
  if (iStack_64 < iVar4) {
    do {
      pTVar6 = *(TReferenceControllerBase<1> **)
                (*(longlong *)local_a8 + 0x18 + (longlong)TStack_a0.CurrentBitIndex * 0x28);
      lVar10 = *(longlong *)
                (*(longlong *)local_a8 + 0x10 + (longlong)TStack_a0.CurrentBitIndex * 0x28);
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (lVar10 != 0) {
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_b8 = lVar10;
        local_b0 = pTVar6;
        if ((lVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_b8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
    } while (TStack_a0.CurrentBitIndex < (TStack_a0.Array)->NumBits);
  }
  LOCK();
  pFVar1 = &this->NavElementAccessDetector;
  FVar3 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -1);
  UNLOCK();
  if (((((uint)FVar3 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x67,
                         L"Another thread asked to have a write access during this read access"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  return;
}

// GetMutableNavigationElementForHandle @ 146d9c460

TSharedPtr<FNavigationElement,1> * __thiscall
UNavigationObjectRepository::GetMutableNavigationElementForHandle
          (UNavigationObjectRepository *this,
          TSharedPtr<FNavigationElement,1> *__return_storage_ptr__,FNavigationElementHandle *param_1
          )

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<FNavigationElement,1> *pTVar6;
  
  LOCK();
  pFVar1 = &this->NavElementAccessDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 1);
  UNLOCK();
  if ((((uint)FVar2 & 0xfff00000) != 0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x5c,L"Acquiring a read access while there is already a write access");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FNavigationElement,1> *)(*pcVar4)();
      return pTVar6;
    }
  }
  pTVar6 = TMapBase<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>_>
           ::Find((TMapBase<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>_>
                   *)&this->NavRelevantElements,param_1);
  if (pTVar6 == (TSharedPtr<FNavigationElement,1> *)0x0) {
    __return_storage_ptr__->Object = (FNavigationElement *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = pTVar6->Object;
    pTVar3 = (pTVar6->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  LOCK();
  pFVar1 = &this->NavElementAccessDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -1);
  UNLOCK();
  if ((((uint)FVar2 & 0xfff00000) != 0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x67,L"Another thread asked to have a write access during this read access")
    ;
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FNavigationElement,1> *)(*pcVar4)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

// GetMutableNavigationElementForUObject @ 146d9c550

TSharedPtr<FNavigationElement,1> * __thiscall
UNavigationObjectRepository::GetMutableNavigationElementForUObject
          (UNavigationObjectRepository *this,
          TSharedPtr<FNavigationElement,1> *__return_storage_ptr__,UObject *param_1)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<FNavigationElement,1> *pTVar6;
  FNavigationElementHandle *pFVar7;
  FWeakObjectPtr local_res8;
  FObjectKey local_res18;
  UObject *local_res20;
  
  LOCK();
  pFVar1 = &this->NavElementAccessDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 1);
  UNLOCK();
  if ((((uint)FVar2 & 0xfff00000) != 0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x5c,L"Acquiring a read access while there is already a write access");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FNavigationElement,1> *)(*pcVar4)();
      return pTVar6;
    }
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  if (param_1 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    local_res18.ObjectIndex = local_res8.ObjectIndex;
    local_res18.ObjectSerialNumber = local_res8.ObjectSerialNumber;
  }
  pFVar7 = TMapBase<FObjectKey,FNavigationElementHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FNavigationElementHandle,0>_>
           ::Find((TMapBase<FObjectKey,FNavigationElementHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FNavigationElementHandle,0>_>
                   *)&this->ObjectsToHandleMap,&local_res18);
  if (pFVar7 != (FNavigationElementHandle *)0x0) {
    pTVar6 = TMapBase<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>_>
             ::Find((TMapBase<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>_>
                     *)&this->NavRelevantElements,pFVar7);
    if (pTVar6 != (TSharedPtr<FNavigationElement,1> *)0x0) {
      __return_storage_ptr__->Object = pTVar6->Object;
      pTVar3 = (pTVar6->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      goto LAB_146d9c647;
    }
  }
  __return_storage_ptr__->Object = (FNavigationElement *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_146d9c647:
  LOCK();
  pFVar1 = &this->NavElementAccessDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -1);
  UNLOCK();
  if ((((uint)FVar2 & 0xfff00000) != 0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x67,L"Another thread asked to have a write access during this read access")
    ;
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FNavigationElement,1> *)(*pcVar4)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

// GetNavigationElementForHandle @ 146d9d7a0

TSharedPtr<FNavigationElement_const_,1> * __thiscall
UNavigationObjectRepository::GetNavigationElementForHandle
          (UNavigationObjectRepository *this,
          TSharedPtr<FNavigationElement_const_,1> *__return_storage_ptr__,
          FNavigationElementHandle *param_1)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<FNavigationElement_const_,1> *pTVar5;
  TSharedPtr<FNavigationElement,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FNavigationElement *local_28;
  FNavigationElementHandle local_18;
  
  local_18.OwnerUObject.WeakPtr = (param_1->OwnerUObject).WeakPtr;
  local_18.SubElementId = param_1->SubElementId;
  LOCK();
  pFVar1 = &this->NavElementAccessDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 1);
  UNLOCK();
  if ((((uint)FVar2 & 0xfff00000) != 0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x5c,L"Acquiring a read access while there is already a write access");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedPtr<FNavigationElement_const_,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pTVar6 = TMapBase<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>_>
           ::Find((TMapBase<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>_>
                   *)&this->NavRelevantElements,&local_18);
  if (pTVar6 == (TSharedPtr<FNavigationElement,1> *)0x0) {
    local_28 = (FNavigationElement *)0x0;
    LOCK();
    pFVar1 = &this->NavElementAccessDetector;
    FVar2 = *pFVar1;
    *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -1);
    UNLOCK();
    if ((((uint)FVar2 & 0xfff00000) != 0) &&
       (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x67,
                         L"Another thread asked to have a write access during this read access");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FNavigationElement_const_,1> *)(*pcVar3)();
        return pTVar5;
      }
    }
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    local_28 = pTVar6->Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    LOCK();
    pFVar1 = &this->NavElementAccessDetector;
    FVar2 = *pFVar1;
    *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -1);
    UNLOCK();
    if ((((uint)FVar2 & 0xfff00000) != 0) &&
       (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x67,
                         L"Another thread asked to have a write access during this read access");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FNavigationElement_const_,1> *)(*pcVar3)();
        return pTVar5;
      }
    }
  }
  __return_storage_ptr__->Object = local_28;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// GetNavigationElementForUObject @ 146d9d910

TSharedPtr<FNavigationElement_const_,1> * __thiscall
UNavigationObjectRepository::GetNavigationElementForUObject
          (UNavigationObjectRepository *this,
          TSharedPtr<FNavigationElement_const_,1> *__return_storage_ptr__,UObject *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FNavigationElement,1> *pTVar2;
  TSharedPtr<FNavigationElement,1> local_18;
  
  pTVar2 = GetMutableNavigationElementForUObject(this,&local_18,param_1);
  __return_storage_ptr__->Object = pTVar2->Object;
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

// GetNavigationElementHandleForUObject @ 146d9da10

FNavigationElementHandle * __thiscall
UNavigationObjectRepository::GetNavigationElementHandleForUObject
          (UNavigationObjectRepository *this,FNavigationElementHandle *__return_storage_ptr__,
          UObject *param_1)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  code *pcVar3;
  bool bVar4;
  FNavigationElementHandle *pFVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  FWeakObjectPtr local_res8;
  FObjectKey local_res18;
  UObject *local_res20;
  
  LOCK();
  pFVar1 = &this->NavElementAccessDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 1);
  UNLOCK();
  if ((((uint)FVar2 & 0xfff00000) != 0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x5c,L"Acquiring a read access while there is already a write access");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FNavigationElementHandle *)(*pcVar3)();
      return pFVar5;
    }
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  if (param_1 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    local_res18.ObjectIndex = local_res8.ObjectIndex;
    local_res18.ObjectSerialNumber = local_res8.ObjectSerialNumber;
  }
  pFVar5 = TMapBase<FObjectKey,FNavigationElementHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FNavigationElementHandle,0>_>
           ::Find((TMapBase<FObjectKey,FNavigationElementHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FNavigationElementHandle,0>_>
                   *)&this->ObjectsToHandleMap,&local_res18);
  if (pFVar5 == (FNavigationElementHandle *)0x0) {
    iVar6 = FNavigationElementHandle::Invalid.OwnerUObject.WeakPtr.ObjectIndex;
    iVar7 = FNavigationElementHandle::Invalid.OwnerUObject.WeakPtr.ObjectSerialNumber;
    uVar8 = (undefined4)FNavigationElementHandle::Invalid.SubElementId;
    uVar9 = FNavigationElementHandle::Invalid.SubElementId._4_4_;
  }
  else {
    iVar6 = (pFVar5->OwnerUObject).WeakPtr.ObjectIndex;
    iVar7 = (pFVar5->OwnerUObject).WeakPtr.ObjectSerialNumber;
    uVar8 = (undefined4)pFVar5->SubElementId;
    uVar9 = *(undefined4 *)((longlong)&pFVar5->SubElementId + 4);
  }
  (__return_storage_ptr__->OwnerUObject).WeakPtr.ObjectIndex = iVar6;
  (__return_storage_ptr__->OwnerUObject).WeakPtr.ObjectSerialNumber = iVar7;
  *(undefined4 *)&__return_storage_ptr__->SubElementId = uVar8;
  *(undefined4 *)((longlong)&__return_storage_ptr__->SubElementId + 4) = uVar9;
  LOCK();
  pFVar1 = &this->NavElementAccessDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -1);
  UNLOCK();
  if ((((uint)FVar2 & 0xfff00000) != 0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x67,L"Another thread asked to have a write access during this read access")
    ;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FNavigationElementHandle *)(*pcVar3)();
      return pFVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146da0af0

UClass * __cdecl UNavigationObjectRepository::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationObjectRepository.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationObjectRepository",
               &Z_Registration_Info_UClass_UNavigationObjectRepository.InnerSingleton,
               StaticRegisterNativesUNavigationObjectRepository,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavigationObjectRepository>,
               InternalVTableHelperCtorCaller<UNavigationObjectRepository>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationObjectRepository.InnerSingleton;
}

// RegisterCustomNavLinkObject @ 146daee90

void __thiscall
UNavigationObjectRepository::RegisterCustomNavLinkObject
          (UNavigationObjectRepository *this,INavLinkCustomInterface *param_1)

{
  int *piVar1;
  FRWFallbackSafeAccessDetectorDefinition *pFVar2;
  TArray<TWeakInterfacePtr<INavLinkCustomInterface>,TSizedDefaultAllocator<32>_> *pTVar3;
  FRWFallbackSafeAccessDetectorDefinition FVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FWeakObjectPtr *this_00;
  undefined1 local_res8 [8];
  UObject *local_res10;
  UObject *local_res18;
  FWeakObjectPtr local_48;
  INavLinkCustomInterface *local_40;
  FReadAccessScope local_38;
  
  LOCK();
  pFVar2 = &this->NavElementAccessDetector;
  FVar4 = *pFVar2;
  *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + 0x100000);
  UNLOCK();
  if (((FVar4 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x72,
                         L"Acquiring a write access while there are ongoing read or write access"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar3 = &this->CustomLinkObjects;
  local_48.ObjectIndex = 0;
  local_48.ObjectSerialNumber = 0;
  local_40 = (INavLinkCustomInterface *)0x0;
  if ((param_1 == (INavLinkCustomInterface *)0x0) ||
     (local_res10 = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1),
     local_res10 == (UObject *)0x0)) {
    local_res10 = (UObject *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&local_res10);
  bVar8 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_48,(void *)0x0);
  pFVar5 = (pTVar3->AllocatorInstance).Data;
  if (!bVar8) {
    local_40 = param_1;
  }
  pFVar10 = pFVar5;
  do {
    if (pFVar10 == pFVar5 + (longlong)(this->CustomLinkObjects).ArrayNum * 0x10) {
LAB_146daef83:
      iVar9 = (this->CustomLinkObjects).ArrayNum;
      piVar1 = &(this->CustomLinkObjects).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar3->AllocatorInstance,piVar1);
      }
      (this->CustomLinkObjects).ArrayNum = iVar9 + 1;
      this_00 = (FWeakObjectPtr *)((pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 0x10);
      this_00->ObjectIndex = 0;
      this_00->ObjectSerialNumber = 0;
      this_00[1].ObjectIndex = 0;
      this_00[1].ObjectSerialNumber = 0;
      if ((param_1 == (INavLinkCustomInterface *)0x0) ||
         (local_res18 = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1),
         local_res18 == (UObject *)0x0)) {
        local_res18 = (UObject *)0x0;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res18);
      }
      FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res18);
      bVar8 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)this_00,(void *)0x0);
      if (!bVar8) {
        this_00[1] = (FWeakObjectPtr)param_1;
      }
      LOCK();
      pFVar2 = &this->NavElementAccessDetector;
      FVar4 = *pFVar2;
      *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + -0x100000);
      UNLOCK();
      if (((FVar4 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
          (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                             ,0x7d,
                             L"Another thread asked to have a read or write access during this write access"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnCustomNavLinkObjectRegistered,&local_38);
      if ((*(int *)&(this->OnCustomNavLinkObjectRegistered).field_0x10 != 0) &&
         (plVar6 = *(longlong **)&(this->OnCustomNavLinkObjectRegistered).field_0x8,
         plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x68))(plVar6,param_1);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      return;
    }
    if (*(INavLinkCustomInterface **)(pFVar10 + 8) == local_40) {
      if ((int)((longlong)pFVar10 - (longlong)pFVar5 >> 4) != -1) {
        local_res8[0] = 0;
        bVar8 = `UNavigationObjectRepository::RegisterCustomNavLinkObject'::__l4::<lambda_1>::
                operator()(local_res8);
        if (!bVar8) {
          LOCK();
          pFVar2 = &this->NavElementAccessDetector;
          FVar4 = *pFVar2;
          *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + -0x100000);
          UNLOCK();
          if (FVar4 == (FRWFallbackSafeAccessDetectorDefinition)0x100000) {
            return;
          }
          if (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure != false) {
            return;
          }
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                             ,0x7d,
                             L"Another thread asked to have a read or write access during this write access"
                            );
          if (!bVar8) {
            return;
          }
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      goto LAB_146daef83;
    }
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

// RegisterNavRelevantObject @ 146db07c0

TSharedPtr<FNavigationElement_const_,1> * __thiscall
UNavigationObjectRepository::RegisterNavRelevantObject
          (UNavigationObjectRepository *this,
          TSharedPtr<FNavigationElement_const_,1> *__return_storage_ptr__,
          INavRelevantInterface *param_1)

{
  UObject *pUVar1;
  
  if (param_1 != (INavRelevantInterface *)0x0) {
    pUVar1 = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (pUVar1 != (UObject *)0x0) goto LAB_146db07ed;
  }
  pUVar1 = (UObject *)0x0;
LAB_146db07ed:
  RegisterNavRelevantObjectInternal(this,__return_storage_ptr__,param_1,pUVar1,Yes);
  return __return_storage_ptr__;
}

// RegisterNavRelevantObjectInternal @ 146db0820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FNavigationElement_const_,1> * __thiscall
UNavigationObjectRepository::RegisterNavRelevantObjectInternal
          (UNavigationObjectRepository *this,
          TSharedPtr<FNavigationElement_const_,1> *__return_storage_ptr__,
          INavRelevantInterface *param_1,UObject *param_2,ENotifyOnSuccess param_3)

{
  int *piVar1;
  FRWFallbackSafeAccessDetectorDefinition *pFVar2;
  FRWFallbackSafeAccessDetectorDefinition FVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  double dVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  bool bVar15;
  char cVar16;
  TSharedPtr<FNavigationElement_const_,1> *pTVar17;
  FNavigationElement *pFVar18;
  FNavigationElementHandle *pFVar19;
  longlong lVar20;
  ForAnyElementType FVar21;
  ForAnyElementType FVar22;
  FSharedReferencer<1> FVar23;
  undefined1 auStack_558 [32];
  FScriptContainerElement *local_538;
  FScriptContainerElement *local_530;
  FNavigationElement *local_528;
  FNavigationElement *local_518;
  TSharedPtr<FNavigationElement,1> local_510;
  FWeakObjectPtr local_500;
  FWeakObjectPtr local_4f8;
  TSharedPtr<FNavigationElement_const_,1> local_4f0;
  FString local_4e0;
  FString local_4d0;
  FString local_4c0;
  FString local_4b0;
  FString local_4a0;
  FString local_490;
  FName local_480;
  FName local_478;
  UObject *local_470;
  FName local_468;
  FName local_460;
  FName local_458;
  FName local_450;
  TPairInitializer<FObjectKey_&&,FNavigationElementHandle_&&> local_448;
  TReferenceControllerBase<1> *local_438;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  double local_3a0;
  double dStack_398;
  double local_390;
  double dStack_388;
  double local_380;
  double dStack_378;
  undefined8 local_370;
  FWeakObjectPtr *local_368;
  FNavigationElementHandle *local_360;
  FReadAccessScope local_358;
  FNavigationElementHandle local_340 [4];
  undefined8 local_300;
  undefined1 local_2f8 [64];
  undefined1 local_2b8 [16];
  TDelegateBase<FNotThreadSafeDelegateMode> local_2a8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_290;
  TDelegateBase<FNotThreadSafeDelegateMode> local_278 [9];
  undefined1 local_198 [16];
  TDelegateBase<FNotThreadSafeDelegateMode> local_188;
  TDelegateBase<FNotThreadSafeDelegateMode> local_170;
  TDelegateBase<FNotThreadSafeDelegateMode> local_158 [9];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_558;
  local_518 = (FNavigationElement *)param_1;
  GetMutableNavigationElementForUObject(this,&local_510,param_2);
  if (local_510.Object == (FNavigationElement *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_510.SharedReferenceCount.ReferenceController);
    cVar16 = (**(code **)((longlong)*param_1 + 0x70))(param_1);
    if (cVar16 == '\0') {
      if (6 < (byte)LogNavigation._0_1_) {
        if (param_2 == (UObject *)0x0) {
          ::FString::FString(&local_4e0,L"None");
        }
        else {
          local_458.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
          local_458.Number = *(uint *)&param_2->field_0x1c;
          ::FName::ToString(&local_458,&local_4e0);
        }
        FVar21.Data = (FScriptContainerElement *)L"";
        if (local_4e0.Data.ArrayNum != 0) {
          FVar21.Data = local_4e0.Data.AllocatorInstance.Data;
        }
        if (*(longlong *)&param_2->field_0x20 == 0) {
          ::FString::FString(&local_490,L"None");
        }
        else {
          local_450 = *(FName *)(*(longlong *)&param_2->field_0x20 + 0x18);
          ::FName::ToString(&local_450,&local_490);
        }
        local_538 = FVar21.Data;
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
        if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_490.Data.AllocatorInstance.Data);
        }
        if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      pFVar18 = FNavigationElement::FNavigationElement
                          ((FNavigationElement *)local_198,param_1,0xffffffffffffffff);
      AddNavigationElement(this,&local_4f0,pFVar18,param_3);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                (local_158);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_170);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_188);
      if ((longlong *)local_198._8_8_ != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)(local_198._8_8_ + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*(longlong *)local_198._8_8_ + 8))(local_198._8_8_,1);
        }
      }
      if (local_4f0.Object != (FNavigationElement *)0x0) {
        LOCK();
        pFVar2 = &this->NavElementAccessDetector;
        FVar3 = *pFVar2;
        *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + 0x100000);
        UNLOCK();
        if (((FVar3 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
            (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                                ,0x72,
                                L"Acquiring a write access while there are ongoing read or write access"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          pTVar17 = (TSharedPtr<FNavigationElement_const_,1> *)(*pcVar6)();
          return pTVar17;
        }
        if ((local_4f0.Object == (FNavigationElement *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar6 = (code *)swi(3);
          pTVar17 = (TSharedPtr<FNavigationElement_const_,1> *)(*pcVar6)();
          return pTVar17;
        }
        pFVar19 = FNavigationElement::GetHandle(local_4f0.Object,local_340);
        local_4f8.ObjectIndex = 0;
        local_4f8.ObjectSerialNumber = 0;
        if (param_2 != (UObject *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(param_2);
          }
          local_500.ObjectIndex = 0;
          local_500.ObjectSerialNumber = 0;
          local_470 = param_2;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(param_2);
          }
          FWeakObjectPtr::operator=(&local_500,(FObjectPtr)&local_470);
          local_4f8 = local_500;
        }
        local_368 = &local_4f8;
        local_360 = pFVar19;
        TSet<TTuple<FObjectKey,FNavigationElementHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,FNavigationElementHandle,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FObjectKey_&&,FNavigationElementHandle_&&>_>
                  ((TSet<TTuple<FObjectKey,FNavigationElementHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,FNavigationElementHandle,0>,FDefaultSetAllocator>
                    *)&this->ObjectsToHandleMap,&local_448,(bool *)&local_368);
        if (5 < (byte)LogNavigation._0_1_) {
          lVar20 = (**(code **)(*(longlong *)local_518 + 0x18))(local_518,local_2f8);
          local_538 = *(FScriptContainerElement **)(lVar20 + 0x28);
          ::FString::PrintfImpl(&local_3c0,L"X=%3.3f Y=%3.3f Z=%3.3f");
          local_538 = *(FScriptContainerElement **)(lVar20 + 0x10);
          FVar21.Data = (FScriptContainerElement *)L"";
          if (local_3c0.Data.ArrayNum != 0) {
            FVar21.Data = local_3c0.Data.AllocatorInstance.Data;
          }
          ::FString::PrintfImpl(&local_3d0,L"X=%3.3f Y=%3.3f Z=%3.3f");
          local_538 = FVar21.Data;
          ::FString::PrintfImpl(&local_3b0,L"IsValid=%s, Min=(%s), Max=(%s)");
          if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
          }
          if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
          }
          FVar21.Data = (FScriptContainerElement *)L"";
          if (local_3b0.Data.ArrayNum != 0) {
            FVar21.Data = local_3b0.Data.AllocatorInstance.Data;
          }
          if (param_2 == (UObject *)0x0) {
            ::FString::FString(&local_4a0,L"None");
          }
          else {
            local_468.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
            local_468.Number = *(uint *)&param_2->field_0x1c;
            ::FName::ToString(&local_468,&local_4a0);
          }
          FVar22.Data = (FScriptContainerElement *)L"";
          if (local_4a0.Data.ArrayNum != 0) {
            FVar22.Data = local_4a0.Data.AllocatorInstance.Data;
          }
          if (*(longlong *)&param_2->field_0x20 == 0) {
            ::FString::FString(&local_4b0,L"None");
          }
          else {
            local_460 = *(FName *)(*(longlong *)&param_2->field_0x20 + 0x18);
            ::FName::ToString(&local_460,&local_4b0);
          }
          local_538 = FVar22.Data;
          local_530 = FVar21.Data;
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
          if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
          }
          if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
          }
          if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
          }
        }
        __return_storage_ptr__->Object = local_4f0.Object;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             local_4f0.SharedReferenceCount.ReferenceController;
        if (local_4f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_4f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_4f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        LOCK();
        pFVar2 = &this->NavElementAccessDetector;
        FVar3 = *pFVar2;
        *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + -0x100000);
        UNLOCK();
        if (((FVar3 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
            (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                                ,0x7d,
                                L"Another thread asked to have a read or write access during this write access"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          pTVar17 = (TSharedPtr<FNavigationElement_const_,1> *)(*pcVar6)();
          return pTVar17;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4f0.SharedReferenceCount.ReferenceController);
        return __return_storage_ptr__;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4f0.SharedReferenceCount.ReferenceController);
    }
    __return_storage_ptr__->Object = (FNavigationElement *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if ((local_510.Object == (FNavigationElement *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      pTVar17 = (TSharedPtr<FNavigationElement_const_,1> *)(*pcVar6)();
      return pTVar17;
    }
    local_3a0 = ((local_510.Object)->Bounds).Min.field0_0x0._s_0.X;
    dStack_398 = ((local_510.Object)->Bounds).Min.field0_0x0._s_0.Y;
    local_390 = ((local_510.Object)->Bounds).Min.field0_0x0._s_0.Z;
    dStack_388 = ((local_510.Object)->Bounds).Max.field0_0x0._s_0.X;
    local_380 = ((local_510.Object)->Bounds).Max.field0_0x0._s_0.Y;
    dStack_378 = ((local_510.Object)->Bounds).Max.field0_0x0._s_0.Z;
    local_370._0_1_ = ((local_510.Object)->Bounds).IsValid;
    local_370._1_1_ = ((local_510.Object)->Bounds).Pad[0];
    local_370._2_1_ = ((local_510.Object)->Bounds).Pad[1];
    local_370._3_1_ = ((local_510.Object)->Bounds).Pad[2];
    local_370._4_1_ = ((local_510.Object)->Bounds).Pad[3];
    local_370._5_1_ = ((local_510.Object)->Bounds).Pad[4];
    local_370._6_1_ = ((local_510.Object)->Bounds).Pad[5];
    local_370._7_1_ = ((local_510.Object)->Bounds).Pad[6];
    LOCK();
    pFVar2 = &this->NavElementAccessDetector;
    FVar3 = *pFVar2;
    *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + 0x100000);
    UNLOCK();
    if (((FVar3 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                            ,0x72,
                            L"Acquiring a write access while there are ongoing read or write access"
                           ), bVar15)) {
      pcVar6 = (code *)swi(3);
      pTVar17 = (TSharedPtr<FNavigationElement_const_,1> *)(*pcVar6)();
      return pTVar17;
    }
    pFVar18 = FNavigationElement::FNavigationElement
                        ((FNavigationElement *)local_2b8,param_1,0xffffffffffffffff);
    if ((local_510.Object == (FNavigationElement *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      pTVar17 = (TSharedPtr<FNavigationElement_const_,1> *)(*pcVar6)();
      return pTVar17;
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(local_510.Object)->NavigationDataExportDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar18->NavigationDataExportDelegate);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(local_510.Object)->CustomGeometryExportDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar18->CustomGeometryExportDelegate);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(local_510.Object)->GeometrySliceExportDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar18->GeometrySliceExportDelegate);
    ((local_510.Object)->OwnerUObject).WeakPtr = (pFVar18->OwnerUObject).WeakPtr;
    (local_510.Object)->SubElementId = pFVar18->SubElementId;
    ((local_510.Object)->BodySetup).WeakPtr = (pFVar18->BodySetup).WeakPtr;
    dVar7 = (pFVar18->GeometryTransform).Rotation.XY.m128d_f64[1];
    ((local_510.Object)->GeometryTransform).Rotation.XY.m128d_f64[0] =
         (pFVar18->GeometryTransform).Rotation.XY.m128d_f64[0];
    ((local_510.Object)->GeometryTransform).Rotation.XY.m128d_f64[1] = dVar7;
    dVar7 = (pFVar18->GeometryTransform).Rotation.ZW.m128d_f64[1];
    ((local_510.Object)->GeometryTransform).Rotation.ZW.m128d_f64[0] =
         (pFVar18->GeometryTransform).Rotation.ZW.m128d_f64[0];
    ((local_510.Object)->GeometryTransform).Rotation.ZW.m128d_f64[1] = dVar7;
    dVar7 = (pFVar18->GeometryTransform).Translation.XY.m128d_f64[1];
    ((local_510.Object)->GeometryTransform).Translation.XY.m128d_f64[0] =
         (pFVar18->GeometryTransform).Translation.XY.m128d_f64[0];
    ((local_510.Object)->GeometryTransform).Translation.XY.m128d_f64[1] = dVar7;
    dVar7 = (pFVar18->GeometryTransform).Translation.ZW.m128d_f64[1];
    ((local_510.Object)->GeometryTransform).Translation.ZW.m128d_f64[0] =
         (pFVar18->GeometryTransform).Translation.ZW.m128d_f64[0];
    ((local_510.Object)->GeometryTransform).Translation.ZW.m128d_f64[1] = dVar7;
    dVar7 = (pFVar18->GeometryTransform).Scale3D.XY.m128d_f64[1];
    ((local_510.Object)->GeometryTransform).Scale3D.XY.m128d_f64[0] =
         (pFVar18->GeometryTransform).Scale3D.XY.m128d_f64[0];
    ((local_510.Object)->GeometryTransform).Scale3D.XY.m128d_f64[1] = dVar7;
    dVar7 = (pFVar18->GeometryTransform).Scale3D.ZW.m128d_f64[1];
    ((local_510.Object)->GeometryTransform).Scale3D.ZW.m128d_f64[0] =
         (pFVar18->GeometryTransform).Scale3D.ZW.m128d_f64[0];
    ((local_510.Object)->GeometryTransform).Scale3D.ZW.m128d_f64[1] = dVar7;
    dVar7 = (pFVar18->Bounds).Min.field0_0x0._s_0.Y;
    ((local_510.Object)->Bounds).Min.field0_0x0._s_0.X = (pFVar18->Bounds).Min.field0_0x0._s_0.X;
    ((local_510.Object)->Bounds).Min.field0_0x0._s_0.Y = dVar7;
    dVar7 = (pFVar18->Bounds).Max.field0_0x0._s_0.X;
    ((local_510.Object)->Bounds).Min.field0_0x0._s_0.Z = (pFVar18->Bounds).Min.field0_0x0._s_0.Z;
    ((local_510.Object)->Bounds).Max.field0_0x0._s_0.X = dVar7;
    dVar7 = (pFVar18->Bounds).Max.field0_0x0._s_0.Z;
    ((local_510.Object)->Bounds).Max.field0_0x0._s_0.Y = (pFVar18->Bounds).Max.field0_0x0._s_0.Y;
    ((local_510.Object)->Bounds).Max.field0_0x0._s_0.Z = dVar7;
    uVar8 = (pFVar18->Bounds).Pad[0];
    uVar9 = (pFVar18->Bounds).Pad[1];
    uVar10 = (pFVar18->Bounds).Pad[2];
    uVar11 = (pFVar18->Bounds).Pad[3];
    uVar12 = (pFVar18->Bounds).Pad[4];
    uVar13 = (pFVar18->Bounds).Pad[5];
    uVar14 = (pFVar18->Bounds).Pad[6];
    ((local_510.Object)->Bounds).IsValid = (pFVar18->Bounds).IsValid;
    ((local_510.Object)->Bounds).Pad[0] = uVar8;
    ((local_510.Object)->Bounds).Pad[1] = uVar9;
    ((local_510.Object)->Bounds).Pad[2] = uVar10;
    ((local_510.Object)->Bounds).Pad[3] = uVar11;
    ((local_510.Object)->Bounds).Pad[4] = uVar12;
    ((local_510.Object)->Bounds).Pad[5] = uVar13;
    ((local_510.Object)->Bounds).Pad[6] = uVar14;
    ((local_510.Object)->NavigationParent).WeakPtr = (pFVar18->NavigationParent).WeakPtr;
    (local_510.Object)->GeometryExportType = pFVar18->GeometryExportType;
    (local_510.Object)->GeometryGatheringMode = pFVar18->GeometryGatheringMode;
    (local_510.Object)->bDirtyAreaOnRegistration = pFVar18->bDirtyAreaOnRegistration;
    (local_510.Object)->bIsInBaseNavigationData = pFVar18->bIsInBaseNavigationData;
    (local_510.Object)->bIsFromLevelVisibilityChange = pFVar18->bIsFromLevelVisibilityChange;
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(local_278)
    ;
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_290);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_2a8);
    if ((longlong *)local_2b8._8_8_ != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)(local_2b8._8_8_ + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*(longlong *)local_2b8._8_8_ + 8))(local_2b8._8_8_,1);
      }
    }
    LOCK();
    pFVar2 = &this->NavElementAccessDetector;
    FVar3 = *pFVar2;
    *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + -0x100000);
    UNLOCK();
    if (((FVar3 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                            ,0x7d,
                            L"Another thread asked to have a read or write access during this write access"
                           ), bVar15)) {
      pcVar6 = (code *)swi(3);
      pTVar17 = (TSharedPtr<FNavigationElement_const_,1> *)(*pcVar6)();
      return pTVar17;
    }
    FVar23.ReferenceController = local_510.SharedReferenceCount.ReferenceController;
    if (param_3 == Yes) {
      if ((local_510.Object == (FNavigationElement *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        pTVar17 = (TSharedPtr<FNavigationElement_const_,1> *)(*pcVar6)();
        return pTVar17;
      }
      local_518 = local_510.Object;
      if (local_510.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_510.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_510.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_510.Object == (FNavigationElement *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        pTVar17 = (TSharedPtr<FNavigationElement_const_,1> *)(*pcVar6)();
        return pTVar17;
      }
      local_448.Value = (FNavigationElementHandle *)local_510.Object;
      local_438 = local_510.SharedReferenceCount.ReferenceController;
      if (local_510.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_510.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_510.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnNavigationElementAddedDelegate,&local_358);
      if ((*(int *)&(this->OnNavigationElementAddedDelegate).field_0x10 != 0) &&
         (plVar5 = *(longlong **)&(this->OnNavigationElementAddedDelegate).field_0x8,
         plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x68))(plVar5,&local_448.Value);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_358);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_438)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_510.SharedReferenceCount.ReferenceController);
      FVar23.ReferenceController = local_510.SharedReferenceCount.ReferenceController;
    }
    if (5 < (byte)LogNavigation._0_1_) {
      if ((local_510.Object == (FNavigationElement *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        pTVar17 = (TSharedPtr<FNavigationElement_const_,1> *)(*pcVar6)();
        return pTVar17;
      }
      local_538 = (FScriptContainerElement *)((local_510.Object)->Bounds).Max.field0_0x0._s_0.Z;
      dVar7 = ((local_510.Object)->Bounds).Min.field0_0x0._s_0.Z;
      local_300._0_1_ = ((local_510.Object)->Bounds).IsValid;
      local_300._1_1_ = ((local_510.Object)->Bounds).Pad[0];
      local_300._2_1_ = ((local_510.Object)->Bounds).Pad[1];
      local_300._3_1_ = ((local_510.Object)->Bounds).Pad[2];
      local_300._4_1_ = ((local_510.Object)->Bounds).Pad[3];
      local_300._5_1_ = ((local_510.Object)->Bounds).Pad[4];
      local_300._6_1_ = ((local_510.Object)->Bounds).Pad[5];
      local_300._7_1_ = ((local_510.Object)->Bounds).Pad[6];
      ::FString::PrintfImpl(&local_420,L"X=%3.3f Y=%3.3f Z=%3.3f");
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_420.Data.ArrayNum != 0) {
        FVar21.Data = local_420.Data.AllocatorInstance.Data;
      }
      local_538 = (FScriptContainerElement *)dVar7;
      ::FString::PrintfImpl(&local_430,L"X=%3.3f Y=%3.3f Z=%3.3f");
      local_538 = FVar21.Data;
      ::FString::PrintfImpl(&local_3e0,L"IsValid=%s, Min=(%s), Max=(%s)");
      if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_430.Data.AllocatorInstance.Data);
      }
      if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_420.Data.AllocatorInstance.Data);
      }
      local_518 = (FNavigationElement *)L"";
      if (local_3e0.Data.ArrayNum != 0) {
        local_518 = (FNavigationElement *)local_3e0.Data.AllocatorInstance.Data;
      }
      local_538 = (FScriptContainerElement *)dStack_378;
      ::FString::PrintfImpl(&local_400,L"X=%3.3f Y=%3.3f Z=%3.3f");
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_400.Data.ArrayNum != 0) {
        FVar21.Data = local_400.Data.AllocatorInstance.Data;
      }
      local_538 = (FScriptContainerElement *)local_390;
      ::FString::PrintfImpl(&local_410,L"X=%3.3f Y=%3.3f Z=%3.3f");
      local_538 = FVar21.Data;
      ::FString::PrintfImpl(&local_3f0,L"IsValid=%s, Min=(%s), Max=(%s)");
      if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_410.Data.AllocatorInstance.Data);
      }
      if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_400.Data.AllocatorInstance.Data);
      }
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_3f0.Data.ArrayNum != 0) {
        FVar21.Data = local_3f0.Data.AllocatorInstance.Data;
      }
      if (param_2 == (UObject *)0x0) {
        ::FString::FString(&local_4c0,L"None");
      }
      else {
        local_480.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
        local_480.Number = *(uint *)&param_2->field_0x1c;
        ::FName::ToString(&local_480,&local_4c0);
      }
      FVar22.Data = (FScriptContainerElement *)L"";
      if (local_4c0.Data.ArrayNum != 0) {
        FVar22.Data = local_4c0.Data.AllocatorInstance.Data;
      }
      if (*(longlong *)&param_2->field_0x20 == 0) {
        ::FString::FString(&local_4d0,L"None");
      }
      else {
        local_478 = *(FName *)(*(longlong *)&param_2->field_0x20 + 0x18);
        ::FName::ToString(&local_478,&local_4d0);
      }
      local_528 = local_518;
      local_538 = FVar22.Data;
      local_530 = FVar21.Data;
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
      if (local_4d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4d0.Data.AllocatorInstance.Data);
      }
      if (local_4c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
      }
      if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
      }
      if ((FNavigationElement *)local_3e0.Data.AllocatorInstance.Data != (FNavigationElement *)0x0)
      {
        FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
      }
    }
    __return_storage_ptr__->Object = local_510.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar23.ReferenceController;
    if (FVar23.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar23.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar23.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar23.ReferenceController);
  }
  return __return_storage_ptr__;
}

// RemoveNavigationElement @ 146db5780

void __thiscall
UNavigationObjectRepository::RemoveNavigationElement
          (UNavigationObjectRepository *this,FNavigationElementHandle *param_1)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  longlong *plVar3;
  code *pcVar4;
  FNavigationElement *pFVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  TSharedPtr<FNavigationElement,1> local_48;
  FNavigationElement *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  LOCK();
  pFVar1 = &this->NavElementAccessDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 0x100000);
  UNLOCK();
  if ((FVar2 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x72,
                       L"Acquiring a write access while there are ongoing read or write access");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_48.Object = (FNavigationElement *)0x0;
  local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar7 = TMap<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>_>
          ::RemoveAndCopyValue(&this->NavRelevantElements,param_1,&local_48);
  if (!bVar7) {
    local_res8[0] = bVar7;
    bVar7 = `UNavigationObjectRepository::RemoveNavigationElement'::__l3::<lambda_1>::operator()
                      (local_res8);
    if (!bVar7) goto LAB_146db58f0;
  }
  pFVar5 = local_48.Object;
  if (local_48.Object == (FNavigationElement *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar6.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar5 == (FNavigationElement *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_38 = pFVar5;
  local_30 = FVar6.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnNavigationElementRemovedDelegate,&local_28);
  if ((*(int *)&(this->OnNavigationElementRemovedDelegate).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->OnNavigationElementRemovedDelegate).field_0x8,
     plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))(plVar3,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
LAB_146db58f0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  LOCK();
  pFVar1 = &this->NavElementAccessDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -0x100000);
  UNLOCK();
  if ((FVar2 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x7d,
                       L"Another thread asked to have a read or write access during this write access"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// ShouldCreateSubsystem @ 146db9ee0

bool __thiscall
UNavigationObjectRepository::ShouldCreateSubsystem
          (UNavigationObjectRepository *this,UObject *param_1)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  UClass *pUVar6;
  
  bVar4 = UWorldSubsystem::ShouldCreateSubsystem((UWorldSubsystem *)this,param_1);
  if (!bVar4) {
    return false;
  }
  pUVar6 = UNavigationSystemV1::GetPrivateStaticClass();
  if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar6);
  }
  pUVar2 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(*(longlong *)pUVar2 + 0x338);
  if (param_1 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_146db9f51;
  }
  param_1 = (UObject *)0x0;
LAB_146db9f51:
  cVar5 = (*pcVar3)(pUVar2,param_1);
  if (cVar5 == '\0') {
    return false;
  }
  return true;
}

// StaticRegisterNativesUNavigationObjectRepository @ 146dba9f0

void __cdecl UNavigationObjectRepository::StaticRegisterNativesUNavigationObjectRepository(void)

{
  return;
}

// UnregisterCustomNavLinkObject @ 146dbec40

void __thiscall
UNavigationObjectRepository::UnregisterCustomNavLinkObject
          (UNavigationObjectRepository *this,INavLinkCustomInterface *param_1)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  FWeakObjectPtr *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  INavLinkCustomInterface *pIVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 local_res8 [8];
  INavLinkCustomInterface *local_res10;
  int local_res18;
  UObject *local_res20;
  FWeakObjectPtr local_78;
  INavLinkCustomInterface *local_70;
  FReadAccessScope local_68;
  
  LOCK();
  pFVar1 = &this->NavElementAccessDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 0x100000);
  UNLOCK();
  local_res10 = param_1;
  if (((FVar2 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x72,
                         L"Acquiring a write access while there are ongoing read or write access"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_78.ObjectIndex = 0;
  local_78.ObjectSerialNumber = 0;
  local_70 = (INavLinkCustomInterface *)0x0;
  if ((param_1 == (INavLinkCustomInterface *)0x0) ||
     (local_res20 = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1),
     local_res20 == (UObject *)0x0)) {
    local_res20 = (UObject *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_res20);
  bVar7 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_78,(void *)0x0);
  pFVar3 = (FWeakObjectPtr *)(this->CustomLinkObjects).AllocatorInstance.Data;
  if (!bVar7) {
    local_70 = param_1;
  }
  if (((pFVar3 <= &local_78) &&
      (&local_78 < pFVar3 + (longlong)(this->CustomLinkObjects).ArrayMax * 2)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_res18 = (this->CustomLinkObjects).ArrayNum;
  lVar8 = (longlong)local_res18;
  if (local_res18 != 0) {
    pFVar4 = (this->CustomLinkObjects).AllocatorInstance.Data;
    iVar14 = 0;
    bVar7 = *(INavLinkCustomInterface **)(pFVar4 + 8) != local_70;
    lVar11 = 0;
    pIVar10 = local_70;
    iVar12 = 0;
    do {
      lVar11 = lVar11 + 1;
      iVar13 = iVar12 + 1;
      if (lVar11 < lVar8) {
        pFVar9 = pFVar4 + lVar11 * 0x10 + 8;
        do {
          if (bVar7 != (*(INavLinkCustomInterface **)pFVar9 != pIVar10)) break;
          iVar13 = iVar13 + 1;
          lVar11 = lVar11 + 1;
          pFVar9 = pFVar9 + 0x10;
        } while (lVar11 < lVar8);
      }
      if (bVar7 != false) {
        if (iVar14 != iVar12) {
          memmove(pFVar4 + (longlong)iVar14 * 0x10,pFVar4 + (longlong)iVar12 * 0x10,
                  (longlong)(iVar13 - iVar12) << 4);
          pIVar10 = local_70;
        }
        iVar14 = iVar14 + (iVar13 - iVar12);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar12 = iVar13;
    } while (lVar11 < lVar8);
    (this->CustomLinkObjects).ArrayNum = iVar14;
    if (0 < local_res18 - iVar14) goto LAB_146dbeec5;
  }
  local_res8[0] = 0;
  `UNavigationObjectRepository::UnregisterCustomNavLinkObject'::__l3::<lambda_1>::operator()
            (local_res8);
LAB_146dbeec5:
  LOCK();
  pFVar1 = &this->NavElementAccessDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -0x100000);
  UNLOCK();
  if (((FVar2 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x7d,
                         L"Another thread asked to have a read or write access during this write access"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnCustomNavLinkObjectUnregistered,&local_68);
  if ((*(int *)&(this->OnCustomNavLinkObjectUnregistered).field_0x10 != 0) &&
     (plVar5 = *(longlong **)&(this->OnCustomNavLinkObjectUnregistered).field_0x8,
     plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x68))(plVar5,local_res10);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  return;
}

// UnregisterNavRelevantObject @ 146dbff30

void __thiscall
UNavigationObjectRepository::UnregisterNavRelevantObject
          (UNavigationObjectRepository *this,INavRelevantInterface *param_1)

{
  UObject *pUVar1;
  
  if (param_1 != (INavRelevantInterface *)0x0) {
    pUVar1 = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (pUVar1 != (UObject *)0x0) goto LAB_146dbff4e;
  }
  pUVar1 = (UObject *)0x0;
LAB_146dbff4e:
  UnregisterNavRelevantObject(this,pUVar1);
  return;
}

// UnregisterNavRelevantObject @ 146dbff70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNavigationObjectRepository::UnregisterNavRelevantObject
          (UNavigationObjectRepository *this,UObject *param_1)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  code *pcVar3;
  bool bVar4;
  FWeakObjectPtr local_res8;
  FObjectKey local_res10;
  FName local_res18;
  FName local_res20;
  UObject *local_88 [2];
  FNavigationElementHandle local_78;
  FString local_68;
  FString local_58;
  FNavigationElementHandle local_48;
  
  bVar4 = false;
  local_res8 = (FWeakObjectPtr)((ulonglong)local_res8 & 0xffffffff00000000);
  if (5 < (byte)LogNavigation._0_1_) {
    if (param_1 == (UObject *)0x0) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      local_res18.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_res18.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_res18,&local_58);
      if (*(longlong *)&param_1->field_0x20 == 0) {
        ::FString::FString(&local_68,L"None");
        bVar4 = true;
      }
      else {
        local_res20 = *(FName *)(*(longlong *)&param_1->field_0x20 + 0x18);
        ::FName::ToString(&local_res20,&local_68);
        bVar4 = true;
      }
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if ((bVar4) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  local_78.OwnerUObject.WeakPtr.ObjectIndex = 0;
  local_78.OwnerUObject.WeakPtr.ObjectSerialNumber = 0;
  local_78.SubElementId = 0xffffffffffffffff;
  LOCK();
  pFVar1 = &this->NavElementAccessDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 0x100000);
  UNLOCK();
  if (((FVar2 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x72,
                         L"Acquiring a write access while there are ongoing read or write access"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if (param_1 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_88[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_88);
    local_res10.ObjectIndex = local_res8.ObjectIndex;
    local_res10.ObjectSerialNumber = local_res8.ObjectSerialNumber;
  }
  TMap<FObjectKey,FNavigationElementHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FNavigationElementHandle,0>_>
  ::RemoveAndCopyValue(&this->ObjectsToHandleMap,&local_res10,&local_78);
  LOCK();
  pFVar1 = &this->NavElementAccessDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -0x100000);
  UNLOCK();
  if (((FVar2 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x7d,
                         L"Another thread asked to have a read or write access during this write access"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((local_78.OwnerUObject.WeakPtr.ObjectIndex !=
        FNavigationElementHandle::Invalid.OwnerUObject.WeakPtr.ObjectIndex) ||
      (local_78.OwnerUObject.WeakPtr.ObjectSerialNumber !=
       FNavigationElementHandle::Invalid.OwnerUObject.WeakPtr.ObjectSerialNumber)) ||
     (local_78.SubElementId !=
      CONCAT44(FNavigationElementHandle::Invalid.SubElementId._4_4_,
               (undefined4)FNavigationElementHandle::Invalid.SubElementId))) {
    local_48.OwnerUObject.WeakPtr = local_78.OwnerUObject.WeakPtr;
    local_48.SubElementId = local_78.SubElementId;
    RemoveNavigationElement(this,&local_48);
  }
  return;
}

// UpdateNavigationElementForUObject @ 146dc44c0

TSharedPtr<FNavigationElement_const_,1> * __thiscall
UNavigationObjectRepository::UpdateNavigationElementForUObject
          (UNavigationObjectRepository *this,
          TSharedPtr<FNavigationElement_const_,1> *__return_storage_ptr__,
          INavRelevantInterface *param_1,UObject *param_2)

{
  RegisterNavRelevantObjectInternal(this,__return_storage_ptr__,param_1,param_2,No);
  return __return_storage_ptr__;
}

// operator() @ 1504fc330

bool __thiscall
`UNavigationObjectRepository::RemoveNavigationElement'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1311236339894583373>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1311236339894583373>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fc370

bool __thiscall
`UNavigationObjectRepository::UnregisterCustomNavLinkObject'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1311236339894583558>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1311236339894583558>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fc3b0

bool __thiscall
`UNavigationObjectRepository::AddNavigationElement'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1311236339894583346>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1311236339894583346>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fc3f0

bool __thiscall
`UNavigationObjectRepository::RegisterCustomNavLinkObject'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1311236339894583542>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1311236339894583542>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

