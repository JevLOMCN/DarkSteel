// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 15

// StaticClass @ 14cff66d0

UClass * __cdecl ULiveLinkMessageBusFinder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkMessageBusFinder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkMessageBusFinder",
               &Z_Registration_Info_UClass_ULiveLinkMessageBusFinder.InnerSingleton,
               StaticRegisterNativesULiveLinkMessageBusFinder,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkMessageBusFinder>,
               InternalVTableHelperCtorCaller<ULiveLinkMessageBusFinder>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkMessageBusFinder.InnerSingleton;
}

// ULiveLinkMessageBusFinder @ 14d013f30

/* WARNING: Enum "Type": Some values do not have unique names */

ULiveLinkMessageBusFinder * __thiscall
ULiveLinkMessageBusFinder::ULiveLinkMessageBusFinder
          (ULiveLinkMessageBusFinder *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveLinkMessageBusFinder__6B_;
  (this->MessageEndpoint).Object = (FMessageEndpoint *)0x0;
  (this->MessageEndpoint).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PollData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PollData).ArrayNum = 0;
  (this->PollData).ArrayMax = 0;
  (this->CurrentPollRequest).A = 0;
  (this->CurrentPollRequest).B = 0;
  (this->CurrentPollRequest).C = 0;
  (this->CurrentPollRequest).D = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PollDataCriticalSection,4000);
  return this;
}

// ULiveLinkMessageBusFinder @ 14d013f80

/* WARNING: Enum "Type": Some values do not have unique names */

ULiveLinkMessageBusFinder * __thiscall
ULiveLinkMessageBusFinder::ULiveLinkMessageBusFinder(ULiveLinkMessageBusFinder *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7ULiveLinkMessageBusFinder__6B_;
  (this->MessageEndpoint).Object = (FMessageEndpoint *)0x0;
  (this->MessageEndpoint).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PollData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PollData).ArrayNum = 0;
  (this->PollData).ArrayMax = 0;
  (this->CurrentPollRequest).A = 0;
  (this->CurrentPollRequest).B = 0;
  (this->CurrentPollRequest).C = 0;
  (this->CurrentPollRequest).D = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PollDataCriticalSection,4000);
  return this;
}

// ~ULiveLinkMessageBusFinder @ 14d0172c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ULiveLinkMessageBusFinder::~ULiveLinkMessageBusFinder(ULiveLinkMessageBusFinder *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULiveLinkMessageBusFinder__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PollDataCriticalSection);
  DestructItems<FProviderPollResult,int>
            ((FProviderPollResult *)(this->PollData).AllocatorInstance.Data,
             (this->PollData).ArrayNum);
  pFVar1 = (this->PollData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageEndpoint).SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  return;
}

// ConnectToProvider @ 14d029b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ULiveLinkMessageBusFinder::ConnectToProvider
          (FProviderPollResult *param_1,FLiveLinkSourceHandle *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  IModularFeatures *pIVar6;
  longlong lVar7;
  FText *pFVar8;
  FText *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  UClass *pUVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  FString local_98;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  TReferenceControllerBase<1> *local_78;
  TReferenceControllerBase<1> *local_70;
  FText local_68;
  FText local_58;
  ILiveLinkSource *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  ILiveLinkSource *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  pIVar6 = IModularFeatures::Get();
  iVar5 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,ILiveLinkClient::ModularFeatureName);
  if (iVar5 < 1) {
    local_38 = (param_2->SourcePointer).Object;
    pTStack_30 = (param_2->SourcePointer).SharedReferenceCount.ReferenceController;
    (param_2->SourcePointer).Object = (ILiveLinkSource *)0x0;
    (param_2->SourcePointer).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return;
  }
  lVar7 = (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,ILiveLinkClient::ModularFeatureName,0);
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  pTVar14 = (TReferenceControllerBase<1> *)(lVar7 + -8);
  if (lVar7 == 0) {
    pTVar14 = pTVar12;
  }
  pFVar8 = FText::FromString(&local_58,&param_1->MachineName);
  pFVar9 = FText::FromString(&local_68,&param_1->Name);
  pTVar10 = ::operator_new(0xd0);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pTVar13 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFLiveLinkMessageBusSource___00_SharedPointerInternals__6B_
    ;
    FLiveLinkMessageBusSource::FLiveLinkMessageBusSource
              ((FLiveLinkMessageBusSource *)(pTVar10 + 1),pFVar9,pFVar8,&param_1->Address,
               param_1->MachineTimeOffset);
    pTVar13 = pTVar10 + 1;
    if ((pTVar13 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    pTVar12 = pTVar10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  lVar7 = pTVar14->_padding_;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = pTVar13;
  local_70 = pTVar12;
  (**(code **)(lVar7 + 8))(pTVar14,&local_88,&local_78);
  if ((((local_7c != 0 || local_80 != 0) || local_84 != 0) || local_88 != 0) &&
     (lVar7 = (**(code **)(pTVar14->_padding_ + 0x168))(pTVar14,&local_88), lVar7 != 0)) {
    ::FString::PrintfImpl(&local_98,L"Name=\"%s\"");
    pFVar1 = (FString *)(lVar7 + 0x98);
    if (pFVar1 != &local_98) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      *(int *)(lVar7 + 0xa0) = local_98.Data.ArrayNum;
      *(int *)(lVar7 + 0xa4) = local_98.Data.ArrayMax;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    pUVar11 = ULiveLinkMessageBusSourceFactory::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    *(UClass **)(lVar7 + 0xa8) = pUVar11;
  }
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = (param_2->SourcePointer).Object;
  pTStack_40 = (param_2->SourcePointer).SharedReferenceCount.ReferenceController;
  (param_2->SourcePointer).Object = (ILiveLinkSource *)pTVar13;
  (param_2->SourcePointer).SharedReferenceCount.ReferenceController = pTVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

// ConstructMessageBusFinder @ 14d030cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULiveLinkMessageBusFinder * __cdecl ULiveLinkMessageBusFinder::ConstructMessageBusFinder(void)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ULiveLinkMessageBusFinder *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (ULiveLinkMessageBusFinder *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return pUVar3;
}

// GetAvailableProviders @ 14d0481b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULiveLinkMessageBusFinder::GetAvailableProviders
          (ULiveLinkMessageBusFinder *this,UObject *param_1,FLatentActionInfo *param_2,float param_3
          ,TArray<FProviderPollResult,TSizedDefaultAllocator<32>_> *param_4)

{
  UObject *pUVar1;
  UWorld *this_00;
  FLatentActionManager *this_01;
  FLiveLinkMessageBusFinderAction *pFVar2;
  FPendingLatentAction *pFVar3;
  FFirstItemPredicate local_38 [8];
  ULiveLinkMessageBusFinder *local_30 [3];
  
  this_00 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (this_00 != (UWorld *)0x0) {
    this_01 = UWorld::GetLatentActionManager(this_00);
    pFVar2 = FLatentActionManager::
             FindExistingActionWithPredicate<FLiveLinkMessageBusFinderAction,_FLatentActionManager::FindExistingAction<FLiveLinkMessageBusFinderAction>_::__l2::FFirstItemPredicate>
                       (this_01,(param_2->CallbackTarget).field0_0x0.DebugPtr,param_2->UUID,local_38
                       );
    if (pFVar2 == (FLiveLinkMessageBusFinderAction *)0x0) {
      PollNetwork(this);
      pFVar3 = ::operator_new(0x38);
      if (pFVar3 == (FPendingLatentAction *)0x0) {
        pFVar3 = (FPendingLatentAction *)0x0;
      }
      else {
        *pFVar3 = (FPendingLatentAction)&___7FLiveLinkMessageBusFinderAction__6B_;
        *(FName *)(pFVar3 + 1) = param_2->ExecutionFunction;
        *(int *)(pFVar3 + 2) = param_2->Linkage;
        pUVar1 = (param_2->CallbackTarget).field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar1 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar1);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar1);
          }
        }
        *(undefined8 *)&pFVar3[2].field_0x4 = 0;
        local_30[0] = (ULiveLinkMessageBusFinder *)pUVar1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar1);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar3[2].field_0x4,(FObjectPtr)local_30);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (ULiveLinkMessageBusFinder *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        *(undefined8 *)&pFVar3[3].field_0x4 = 0;
        local_30[0] = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (ULiveLinkMessageBusFinder *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar3[3].field_0x4,(FObjectPtr)local_30);
        pFVar3[5] = (FPendingLatentAction)param_4;
        *(float *)(pFVar3 + 6) = param_3;
      }
      FLatentActionManager::AddNewAction
                (this_01,(param_2->CallbackTarget).field0_0x0.DebugPtr,param_2->UUID,pFVar3);
      return;
    }
    if (2 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
  }
  return;
}

// GetPollResults @ 14d0519b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ULiveLinkMessageBusFinder::GetPollResults
          (ULiveLinkMessageBusFinder *this,
          TArray<FProviderPollResult,TSizedDefaultAllocator<32>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  FProviderPollResult *pFVar3;
  
  lpCriticalSection = &this->PollDataCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1 != &this->PollData) {
    DestructItems<FProviderPollResult,int>
              ((FProviderPollResult *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    iVar2 = (this->PollData).ArrayNum;
    piVar1 = &param_1->ArrayMax;
    pFVar3 = (FProviderPollResult *)(this->PollData).AllocatorInstance.Data;
    param_1->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x90,8,iVar2,*piVar1,&param_1->AllocatorInstance,iVar2,piVar1);
      ConstructItems<FProviderPollResult,FProviderPollResult,int>
                ((param_1->AllocatorInstance).Data,pFVar3,iVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d051a56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetPrivateStaticClass @ 14d052730

UClass * __cdecl ULiveLinkMessageBusFinder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkMessageBusFinder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkMessageBusFinder",
               &Z_Registration_Info_UClass_ULiveLinkMessageBusFinder.InnerSingleton,
               StaticRegisterNativesULiveLinkMessageBusFinder,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkMessageBusFinder>,
               InternalVTableHelperCtorCaller<ULiveLinkMessageBusFinder>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkMessageBusFinder.InnerSingleton;
}

// HandlePongMessage @ 14d058c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ULiveLinkMessageBusFinder::HandlePongMessage
          (ULiveLinkMessageBusFinder *this,FLiveLinkPongMessage *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *pTVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStackY_188 [32];
  undefined1 local_138 [32];
  void *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  FString local_d8;
  FString local_c8;
  double local_b8;
  FScriptContainerElement local_b0;
  int local_ac;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((((param_1->PollRequest).D == (this->CurrentPollRequest).D &&
       (param_1->PollRequest).C == (this->CurrentPollRequest).C) &&
      (param_1->PollRequest).B == (this->CurrentPollRequest).B) &&
      (param_1->PollRequest).A == (this->CurrentPollRequest).A) {
    lpCriticalSection = &this->PollDataCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar7 = param_1->LiveLinkVersion;
    dVar4 = LiveLinkMessageBusHelper::CalculateProviderMachineOffset
                      (param_1->CreationPlatformTime,param_2);
    pTVar8 = (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)(**(code **)*param_2->Object)();
    local_110 = ___xmm_00000000ffffffff0000008000000000;
    uStack_108 = _UNK_150631d98;
    local_138._0_8_ = (FScriptContainerElement *)0x0;
    local_138._8_8_ = 0;
    local_118 = (void *)0x0;
    local_f8 = (ForElementType<FSetElementId>)0x0;
    local_f0 = 0;
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
               *)local_138,pTVar8);
    puVar9 = (undefined8 *)(**(code **)((longlong)*param_2->Object + 0x48))();
    local_e8 = *puVar9;
    uStack_e0 = puVar9[1];
    ::FString::FString(&local_d8,&param_1->ProviderName);
    ::FString::FString(&local_c8,&param_1->MachineName);
    local_ac = 1;
    local_b8 = dVar4;
    local_b0 = (FScriptContainerElement)(1 < iVar7);
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              (&local_a8,
               (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                *)local_138);
    local_f0 = 0;
    if (local_f8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_138,0,local_138._8_4_);
    iVar7 = SUB84(local_138._8_8_,4);
    local_138._8_8_ = local_138._8_8_ & 0xffffffff00000000;
    if (iVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
    }
    uVar5 = local_110._4_4_;
    uStack_108 = 0xffffffff;
    local_110 = (ulonglong)local_110._4_4_ << 0x20;
    if (0x80 < uVar5) {
      local_110 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
    }
    if (local_118 != (void *)0x0) {
      FMemory::Free(local_118);
    }
    if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_138._0_8_);
    }
    local_ac = param_1->DiscoveryProtocolVersion;
    pFVar2 = (this->PollData).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_e8) &&
       ((FScriptContainerElement *)&local_e8 < pFVar2 + (longlong)(this->PollData).ArrayMax * 0x90))
    {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar7 = (this->PollData).ArrayNum;
    piVar1 = &(this->PollData).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x890,&(this->PollData).AllocatorInstance,piVar1);
    }
    (this->PollData).ArrayNum = iVar7 + 1;
    pFVar2 = (this->PollData).AllocatorInstance.Data;
    lVar10 = (longlong)iVar7 * 0x90;
    *(undefined8 *)(pFVar2 + lVar10) = local_e8;
    *(undefined8 *)(pFVar2 + lVar10 + 8) = uStack_e0;
    *(undefined8 *)(pFVar2 + lVar10 + 0x10) = 0;
    *(FScriptContainerElement **)(pFVar2 + lVar10 + 0x10) = local_d8.Data.AllocatorInstance.Data;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar2 + lVar10 + 0x18) = local_d8.Data.ArrayNum;
    *(int *)(pFVar2 + lVar10 + 0x1c) = local_d8.Data.ArrayMax;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    *(undefined8 *)(pFVar2 + lVar10 + 0x20) = 0;
    *(FScriptContainerElement **)(pFVar2 + lVar10 + 0x20) = local_c8.Data.AllocatorInstance.Data;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar2 + lVar10 + 0x28) = local_c8.Data.ArrayNum;
    *(int *)(pFVar2 + lVar10 + 0x2c) = local_c8.Data.ArrayMax;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    *(double *)(pFVar2 + lVar10 + 0x30) = local_b8;
    pFVar2[lVar10 + 0x38] = local_b0;
    *(int *)(pFVar2 + lVar10 + 0x3c) = local_ac;
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                *)(pFVar2 + lVar10 + 0x40),&local_a8);
    local_a8.HashSize = 0;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8.Elements);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// PollNetwork @ 14d06c8f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ULiveLinkMessageBusFinder::PollNetwork(ULiveLinkMessageBusFinder *this)

{
  TSharedPtr<FMessageEndpoint,1> *pTVar1;
  atomic<int> *paVar2;
  int *piVar3;
  atomic<int> aVar4;
  FName FVar5;
  FProviderPollResult *pFVar6;
  FMessageEndpoint *this_00;
  code *pcVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  int iVar13;
  FName *pFVar14;
  FModuleManager *this_01;
  IModuleInterface *pIVar15;
  undefined8 *puVar16;
  FTaskGraphInterface *pFVar17;
  TRawMessageHandler<FLiveLinkPongMessage,ULiveLinkMessageBusFinder> *pTVar18;
  TRawMessageHandler<FLiveLinkPongMessage,ULiveLinkMessageBusFinder> *pTVar19;
  FGuid *pFVar20;
  UScriptStruct *pUVar21;
  FName local_res8;
  TRawPtrProxy<TRawMessageHandler<FLiveLinkPongMessage,ULiveLinkMessageBusFinder>_> local_res10;
  FDateTime local_res18;
  FTimespan local_res20;
  TSharedPtr<IMessageHandler,1> local_e8;
  undefined1 local_d8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c0;
  ForAnyElementType FStack_b8;
  int local_b0;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  bool local_98;
  FName local_94;
  Type local_8c;
  TSharedPtr<FMessageEndpoint,1> local_88;
  FDestructionSentinel local_78;
  FName local_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  FGuid local_48;
  
  pTVar1 = &this->MessageEndpoint;
  pTVar19 = (TRawMessageHandler<FLiveLinkPongMessage,ULiveLinkMessageBusFinder> *)0x0;
  if (pTVar1->Object == (FMessageEndpoint *)0x0) {
    ::FName::FName(&local_res8,L"LiveLinkMessageBusSource");
    pFVar14 = ::FName::FName(&local_60,"Messaging");
    FVar5 = *pFVar14;
    this_01 = FModuleManager::Get();
    pIVar15 = FModuleManager::LoadModuleChecked(this_01,FVar5);
    puVar16 = (undefined8 *)(**(code **)((longlong)*pIVar15 + 0x68))(pIVar15,local_58);
    local_d8._0_8_ = *puVar16;
    local_d8._8_8_ = puVar16[1];
    if ((TReferenceControllerBase<1> *)local_d8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_d8._8_8_)->WeakReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_d8._8_8_)->WeakReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    local_c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_b8.Data = (FScriptContainerElement *)0x0;
    local_94 = local_res8;
    local_d8[0x10] = false;
    local_b0 = 0;
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0._0_4_ = 0;
    local_a0._4_4_ = 0;
    local_98 = false;
    pFVar17 = FTaskGraphInterface::Get();
    local_8c = (**(code **)((longlong)*pFVar17 + 0x10))(pFVar17,0);
    pTVar18 = ::operator_new(0x18);
    if (pTVar18 != (TRawMessageHandler<FLiveLinkPongMessage,ULiveLinkMessageBusFinder> *)0x0) {
      pTVar18->Handler = this;
      pTVar18->_padding_ =
           (longlong)
           &___7__TRawMessageHandler_UFLiveLinkPongMessage__VULiveLinkMessageBusFinder____6B_;
      pTVar18->Func = (pmf_5abfc76e)HandlePongMessage;
      pTVar19 = pTVar18;
    }
    local_res10.Object = pTVar19;
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FLiveLinkPongMessage,ULiveLinkMessageBusFinder>_>
              (&local_e8,&local_res10);
    if (((local_a8.Data <= &local_e8) &&
        (&local_e8 <
         (TSharedPtr<IMessageHandler,1> *)(local_a8.Data + (longlong)local_a0._4_4_ * 0x10))) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar13 = (int)local_a0;
    if ((int)local_a0 == local_a0._4_4_) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_a8,(int *)((longlong)&local_a0 + 4));
    }
    local_a0._0_4_ = iVar13 + 1;
    *(IMessageHandler **)&local_a8.Data[(longlong)iVar13 * 0x10].field_0x0 = local_e8.Object;
    *(TReferenceControllerBase<1> **)(local_a8.Data + (longlong)iVar13 * 0x10 + 8) =
         local_e8.SharedReferenceCount.ReferenceController;
    local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_e8.Object = (IMessageHandler *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    FMessageEndpointBuilder::Build((FMessageEndpointBuilder *)local_d8,&local_88);
    if (pTVar1 != &local_88) {
      pTVar1->Object = local_88.Object;
      local_88.Object = (FMessageEndpoint *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MessageEndpoint).SharedReferenceCount,&local_88.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<IMessageHandler,1>,int>
              ((TSharedPtr<IMessageHandler,1> *)local_a8.Data,(int)local_a0);
    if ((TSharedPtr<IMessageHandler,1> *)local_a8.Data != (TSharedPtr<IMessageHandler,1> *)0x0) {
      FMemory::Free(local_a8.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_c0,(FWriteAccessScope *)&local_78);
    if ((local_b0 != 0) && (FStack_b8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_b8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b8,0,0,0x10);
      local_b0 = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_b8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c0.AccessDetector);
    if ((TReferenceControllerBase<1> *)local_d8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = (atomic<int> *)(local_d8._8_8_ + 0xc);
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(*(longlong *)local_d8._8_8_ + 8))(local_d8._8_8_,1);
      }
    }
  }
  piVar3 = &(this->PollData).ArrayMax;
  pFVar6 = (FProviderPollResult *)(this->PollData).AllocatorInstance.Data;
  iVar13 = (this->PollData).ArrayNum;
  if (*piVar3 < 0) {
    DestructItems<FProviderPollResult,int>(pFVar6,iVar13);
    (this->PollData).ArrayNum = 0;
    if (*piVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x90,8,0,&(this->PollData).AllocatorInstance,0,piVar3);
    }
  }
  else {
    DestructItems<FProviderPollResult,int>(pFVar6,iVar13);
    (this->PollData).ArrayNum = 0;
  }
  pFVar20 = FGuid::NewGuid(&local_48);
  uVar9 = pFVar20->B;
  uVar10 = pFVar20->C;
  uVar11 = pFVar20->D;
  (this->CurrentPollRequest).A = pFVar20->A;
  (this->CurrentPollRequest).B = uVar9;
  (this->CurrentPollRequest).C = uVar10;
  (this->CurrentPollRequest).D = uVar11;
  if ((pTVar1->Object == (FMessageEndpoint *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = pTVar1->Object;
  puVar16 = FMemory::Malloc(0x18,0);
  uVar8 = *(undefined8 *)&(this->CurrentPollRequest).C;
  local_res20.Ticks = 0;
  *puVar16 = *(undefined8 *)&this->CurrentPollRequest;
  puVar16[1] = uVar8;
  *(undefined4 *)(puVar16 + 2) = 2;
  *(undefined4 *)((longlong)puVar16 + 0x14) = 2;
  local_res18.Ticks = 0x2bca2875f4373fff;
  pUVar21 = FLiveLinkPingMessage::StaticStruct();
  FMessageEndpoint::Publish(this_00,puVar16,pUVar21,Network,&local_res20,&local_res18);
  return;
}

// StaticRegisterNativesULiveLinkMessageBusFinder @ 14d0807b0

void __cdecl ULiveLinkMessageBusFinder::StaticRegisterNativesULiveLinkMessageBusFinder(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConnectToProvider @ 14d08c0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ULiveLinkMessageBusFinder::execConnectToProvider(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProviderPollResult *pFVar1;
  FProperty *pFVar2;
  int iVar3;
  FLiveLinkSourceHandle *pFVar4;
  FProviderPollResult *pFVar5;
  undefined1 auStackY_f8 [32];
  FLiveLinkSourceHandle local_c8;
  undefined1 local_a8 [64];
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_a8[0x38] = true;
  local_a8._48_8_ = 0.0;
  local_a8._0_4_ = 0;
  local_a8._4_4_ = 0;
  local_a8._8_4_ = 0;
  local_a8._12_4_ = 0;
  local_a8._16_8_ = (FScriptContainerElement *)0x0;
  local_a8._24_4_ = 0;
  local_a8._28_4_ = 0;
  local_a8._32_8_ = (FScriptContainerElement *)0x0;
  local_a8._40_4_ = 0;
  local_a8._44_4_ = 0;
  local_a8._60_4_ = 1;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  pFVar1 = (FProviderPollResult *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pFVar5 = (FProviderPollResult *)local_a8;
  if (pFVar1 != (FProviderPollResult *)0x0) {
    pFVar5 = pFVar1;
  }
  local_c8._padding_ = (longlong)&___7FLiveLinkSourceHandle__6B_;
  local_c8.SourcePointer.Object = (ILiveLinkSource *)0x0;
  local_c8.SourcePointer.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  pFVar4 = &local_c8;
  if ((FLiveLinkSourceHandle *)param_2->MostRecentPropertyAddress != (FLiveLinkSourceHandle *)0x0) {
    pFVar4 = (FLiveLinkSourceHandle *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ConnectToProvider(pFVar5,pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SourcePointer.SharedReferenceCount.ReferenceController);
  local_20 = 0;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar3 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  if ((FScriptContainerElement *)local_a8._32_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._32_8_);
  }
  if ((FScriptContainerElement *)local_a8._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._16_8_);
  }
  return;
}

// execConstructMessageBusFinder @ 14d08c2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
ULiveLinkMessageBusFinder::execConstructMessageBusFinder
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  UClass *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar1 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *(UObject **)param_3 = pUVar1;
  return;
}

// execGetAvailableProviders @ 14d08d3c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ULiveLinkMessageBusFinder::execGetAvailableProviders(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  FPendingLatentAction FVar5;
  UObject *pUVar6;
  UWorld *this;
  FLatentActionManager *this_00;
  FLiveLinkMessageBusFinderAction *pFVar7;
  FPendingLatentAction *pFVar8;
  FPendingLatentAction FVar9;
  UObject *local_res10 [2];
  undefined4 local_res20 [2];
  UObject *local_80;
  FProviderPollResult *local_78;
  undefined8 local_70;
  undefined8 local_68;
  FPendingLatentAction local_60;
  UObject *local_58;
  
  local_80 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_68 = 0xffffffffffffffff;
  local_60 = (FPendingLatentAction)0x0;
  local_58 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_78 = (FProviderPollResult *)0x0;
  local_70 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pUVar6 = local_58;
  FVar5 = local_60;
  uVar2 = local_res20[0];
  uVar3 = (undefined4)local_68;
  iVar4 = local_68._4_4_;
  FVar9 = (FPendingLatentAction)&local_78;
  if ((FPendingLatentAction)param_2->MostRecentPropertyAddress != (FPendingLatentAction)0x0) {
    FVar9 = (FPendingLatentAction)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_58);
  }
  this = UEngine::GetWorldFromContextObject(GEngine,local_80,LogAndReturnNull);
  if (this != (UWorld *)0x0) {
    this_00 = UWorld::GetLatentActionManager(this);
    pFVar7 = FLatentActionManager::
             FindExistingActionWithPredicate<FLiveLinkMessageBusFinderAction,_FLatentActionManager::FindExistingAction<FLiveLinkMessageBusFinderAction>_::__l2::FFirstItemPredicate>
                       (this_00,pUVar6,iVar4,(FFirstItemPredicate *)local_res10);
    if (pFVar7 == (FLiveLinkMessageBusFinderAction *)0x0) {
      PollNetwork((ULiveLinkMessageBusFinder *)param_1);
      pFVar8 = ::operator_new(0x38);
      if (pFVar8 == (FPendingLatentAction *)0x0) {
        pFVar8 = (FPendingLatentAction *)0x0;
      }
      else {
        pFVar8[1] = FVar5;
        *pFVar8 = (FPendingLatentAction)&___7FLiveLinkMessageBusFinderAction__6B_;
        *(undefined4 *)(pFVar8 + 2) = uVar3;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar6 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
        }
        local_res10[0] = pUVar6;
        *(undefined8 *)&pFVar8[2].field_0x4 = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar8[2].field_0x4,(FObjectPtr)local_res10);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(param_1);
        }
        *(undefined8 *)&pFVar8[3].field_0x4 = 0;
        local_res10[0] = param_1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar8[3].field_0x4,(FObjectPtr)local_res10);
        *(undefined4 *)(pFVar8 + 6) = uVar2;
        pFVar8[5] = FVar9;
      }
      FLatentActionManager::AddNewAction(this_00,pUVar6,iVar4,pFVar8);
    }
    else if (2 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
  }
  DestructItems<FProviderPollResult,int>(local_78,(int)local_70);
  if (local_78 != (FProviderPollResult *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

