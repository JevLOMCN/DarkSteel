// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 19

// StaticClass @ 148c6fb50

UClass * __cdecl UFunctionalTestingManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFunctionalTestingManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FunctionalTestingManager",
               &Z_Registration_Info_UClass_UFunctionalTestingManager.InnerSingleton,
               StaticRegisterNativesUFunctionalTestingManager,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFunctionalTestingManager>,
               InternalVTableHelperCtorCaller<UFunctionalTestingManager>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFunctionalTestingManager.InnerSingleton;
}

// UFunctionalTestingManager @ 148c80280

UFunctionalTestingManager * __thiscall
UFunctionalTestingManager::UFunctionalTestingManager
          (UFunctionalTestingManager *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  this->_padding_ = (longlong)&___7UFunctionalTestingManager__6B_;
  (this->TestsLeft).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestsLeft).ArrayNum = 0;
  (this->TestsLeft).ArrayMax = 0;
  (this->AllTests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllTests).ArrayNum = 0;
  (this->AllTests).ArrayMax = 0;
  *(undefined8 *)&this->OnSetupTests = 0;
  *(undefined8 *)&(this->OnSetupTests).field_0x8 = 0;
  *(undefined8 *)&(this->OnSetupTests).field_0x10 = 0;
  *(undefined8 *)&this->OnTestsComplete = 0;
  *(undefined8 *)&(this->OnTestsComplete).field_0x8 = 0;
  *(undefined8 *)&(this->OnTestsComplete).field_0x10 = 0;
  *(undefined8 *)&this->OnTestsBegin = 0;
  *(undefined8 *)&(this->OnTestsBegin).field_0x8 = 0;
  *(undefined8 *)&(this->OnTestsBegin).field_0x10 = 0;
  *(undefined8 *)&this->TestFinishedObserver = 0;
  *(undefined8 *)&(this->TestFinishedObserver).field_0x8 = 0;
  *(undefined4 *)&(this->TestFinishedObserver).field_0x10 = 0;
  (this->StartingReproString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StartingReproString).Data.ArrayNum = 0;
  (this->StartingReproString).Data.ArrayMax = 0;
  (this->TestReproStrings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestReproStrings).ArrayNum = 0;
  (this->TestReproStrings).ArrayMax = 0;
  (this->TriggerFirstValidTestTimerHandle).Handle = 0;
  return this;
}

// UFunctionalTestingManager @ 148c80320

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UFunctionalTestingManager * __thiscall
UFunctionalTestingManager::UFunctionalTestingManager
          (UFunctionalTestingManager *this,FObjectInitializer *param_1)

{
  void *pvVar1;
  ForElementType<TAlignedBytes<16,16>_> FVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UFunctionalTestingManager *local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  this->CurrentIteration = 0xffffffff;
  this->bIsRunning = false;
  this->bFinished = false;
  this->bLooped = false;
  this->bInitialDelayApplied = false;
  this->bIsTearingDown = false;
  this->_padding_ = (longlong)&___7UFunctionalTestingManager__6B_;
  (this->TestsLeft).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestsLeft).ArrayNum = 0;
  (this->TestsLeft).ArrayMax = 0;
  (this->AllTests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllTests).ArrayNum = 0;
  (this->AllTests).ArrayMax = 0;
  *(undefined8 *)&this->OnSetupTests = 0;
  *(undefined8 *)&(this->OnSetupTests).field_0x8 = 0;
  *(undefined8 *)&(this->OnSetupTests).field_0x10 = 0;
  *(undefined8 *)&this->OnTestsComplete = 0;
  *(undefined8 *)&(this->OnTestsComplete).field_0x8 = 0;
  *(undefined8 *)&(this->OnTestsComplete).field_0x10 = 0;
  *(undefined8 *)&this->OnTestsBegin = 0;
  *(undefined8 *)&(this->OnTestsBegin).field_0x8 = 0;
  *(undefined8 *)&(this->OnTestsBegin).field_0x10 = 0;
  *(undefined8 *)&this->TestFinishedObserver = 0;
  *(undefined8 *)&(this->TestFinishedObserver).field_0x8 = 0;
  *(undefined4 *)&(this->TestFinishedObserver).field_0x10 = 0;
  (this->StartingReproString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StartingReproString).Data.ArrayNum = 0;
  (this->StartingReproString).Data.ArrayMax = 0;
  (this->TestReproStrings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestReproStrings).ArrayNum = 0;
  (this->TestReproStrings).ArrayMax = 0;
  (this->TriggerFirstValidTestTimerHandle).Handle = 0;
  if ((this->_padding_ & 0x10) == 0) {
    local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVAFunctionalTest___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUFunctionalTestingManager____A6AXPEAVAFunctionalTest___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
      puVar4[4] = OnTestDone;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    iVar3 = local_60.DelegateSize;
    FVar2 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->TestFinishedObserver
               ,(FWriteAccessScope *)&local_50);
    if ((*(int *)&(this->TestFinishedObserver).field_0x10 != 0) &&
       (puVar4 = *(undefined8 **)&(this->TestFinishedObserver).field_0x8,
       puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->TestFinishedObserver).field_0x8,0,0,0x10);
      *(undefined4 *)&(this->TestFinishedObserver).field_0x10 = 0;
    }
    pvVar1 = *(void **)&(this->TestFinishedObserver).field_0x8;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)&(this->TestFinishedObserver).field_0x8 = FVar2;
    *(int *)&(this->TestFinishedObserver).field_0x10 = iVar3;
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

// ~UFunctionalTestingManager @ 148c81270

void __thiscall
UFunctionalTestingManager::~UFunctionalTestingManager(UFunctionalTestingManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UFunctionalTestingManager__6B_;
  DestructItems<FString,int>
            ((FString *)(this->TestReproStrings).AllocatorInstance.Data,
             (this->TestReproStrings).ArrayNum);
  pFVar1 = (this->TestReproStrings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StartingReproString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->TestFinishedObserver);
  pvVar2 = *(void **)&(this->TestFinishedObserver).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TestFinishedObserver);
  pvVar2 = *(void **)&(this->OnTestsBegin).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTestsBegin);
  pvVar2 = *(void **)&(this->OnTestsComplete).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTestsComplete);
  pvVar2 = *(void **)&(this->OnSetupTests).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSetupTests);
  pFVar1 = (this->AllTests).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TestsLeft).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// AllTestsDone @ 148c84480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UFunctionalTestingManager::AllTestsDone(UFunctionalTestingManager *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  IFunctionalTestingModule *pIVar4;
  FUObjectItem *this_00;
  FString local_18;
  
  if (this->bLooped != true) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnTestsComplete,
               (void *)0x0);
    this->bFinished = true;
    pIVar4 = IFunctionalTestingModule::Get();
    (**(code **)((longlong)*pIVar4 + 0x70))(pIVar4,0);
    this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
    FUObjectItem::ClearRootFlags(this_00,RootSet);
    return;
  }
  this->CurrentIteration = this->CurrentIteration + 1;
  if ((this->TestReproStrings).ArrayNum != 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6714225771432378675>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\FunctionalTestingManager.cpp"
                       ,0x133,"TestReproStrings.Num() == 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = ::FString::FString(&local_18,&this->StartingReproString);
  SetReproString(this,pFVar3);
  TArray<TObjectPtr<AFunctionalTest>,TSizedDefaultAllocator<32>_>::operator=
            (&this->TestsLeft,&this->AllTests);
  if (4 < (byte)LogFunctionalTest._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
  }
  bVar2 = RunFirstValidTest(this);
  this->bIsRunning = bVar2;
  if ((!bVar2) && (2 < (byte)LogFunctionalTest._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
    return;
  }
  return;
}

// GetManager @ 148c90cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UFunctionalTestingManager * __cdecl UFunctionalTestingManager::GetManager(UObject *param_1)

{
  uchar uVar1;
  IFunctionalTestingModule *pIVar2;
  pmf_5f3c8826 pVar3;
  UWorld *pUVar4;
  UClass *pUVar5;
  FUObjectItem *this;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined1 local_a0 [16];
  UWorld *local_90;
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pIVar2 = IFunctionalTestingModule::Get();
  pVar3 = (pmf_5f3c8826)(**(code **)((longlong)*pIVar2 + 0x78))(pIVar2);
  if (pVar3 == (pmf_5f3c8826)0x0) {
    pUVar4 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
    if (pUVar4 == (UWorld *)0x0) {
      `UFunctionalTestingManager::GetManager'::__l13::<lambda_1>::operator()(local_a8);
    }
    else {
      uVar1 = (pUVar4->WorldType).Value;
      if ((uVar1 == '\x03') || (uVar1 == '\x01')) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar4,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar5 = StaticClass();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)(local_a0 + 8),pUVar5);
        local_90 = pUVar4;
        pVar3 = (pmf_5f3c8826)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_a0 + 8));
        if (local_58 != 0) {
          plVar6 = local_48;
          if (local_30 != (longlong *)0x0) {
            plVar6 = local_30;
          }
          (**(code **)(*plVar6 + 0x10))();
        }
        pIVar2 = IFunctionalTestingModule::Get();
        (**(code **)((longlong)*pIVar2 + 0x70))(pIVar2,pVar3);
        this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)pVar3 + 0xc));
        FUObjectItem::SetRootFlags(this,RootSet);
        TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
        ::AddUObject<UFunctionalTestingManager>
                  ((TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
                    *)&FWorldDelegates::OnWorldCleanup,(UFunctionalTestingManager *)local_a0,pVar3);
      }
    }
  }
  return (UFunctionalTestingManager *)pVar3;
}

// GetPrivateStaticClass @ 148c91ba0

UClass * __cdecl UFunctionalTestingManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFunctionalTestingManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FunctionalTestingManager",
               &Z_Registration_Info_UClass_UFunctionalTestingManager.InnerSingleton,
               StaticRegisterNativesUFunctionalTestingManager,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFunctionalTestingManager>,
               InternalVTableHelperCtorCaller<UFunctionalTestingManager>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFunctionalTestingManager.InnerSingleton;
}

// GetWorld @ 148c92c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UFunctionalTestingManager::GetWorld(UFunctionalTestingManager *this)

{
  UWorld *pUVar1;
  
  pUVar1 = UEngine::GetWorldFromContextObject(GEngine,(UObject *)this->_padding_,Assert);
  return pUVar1;
}

// NotifyTestDone @ 148c951b0

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
UFunctionalTestingManager::NotifyTestDone(UFunctionalTestingManager *this,AFunctionalTest *param_1)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  char cVar5;
  bool bVar6;
  UFunction *pUVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  char local_res8 [8];
  
  local_res8[0] = '\0';
  pUVar7 = UObject::FindFunctionChecked((UObject *)param_1,NAME_AFunctionalTest_OnWantsReRunCheck);
  (**(code **)(param_1->_padding_ + 0x260))(param_1,pUVar7,local_res8);
  if ((local_res8[0] == '\0') &&
     (cVar5 = (**(code **)(param_1->_padding_ + 0x8a0))(param_1), cVar5 == '\0')) {
    if ((param_1->RerunCauses).ArrayNum < 1) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      pFVar4 = (this->TestsLeft).AllocatorInstance.Data;
      iVar2 = (this->TestsLeft).ArrayNum;
      for (pFVar8 = pFVar4; pFVar8 != pFVar4 + (longlong)iVar2 * 8; pFVar8 = pFVar8 + 8) {
        if (*(AFunctionalTest **)pFVar8 == param_1) {
          iVar9 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 3);
          if (iVar9 != -1) {
            memmove(pFVar4 + (longlong)iVar9 * 8,pFVar4 + (longlong)iVar9 * 8 + 8,
                    (longlong)((iVar2 - iVar9) + -1) << 3);
            piVar1 = &(this->TestsLeft).ArrayNum;
            *piVar1 = *piVar1 + -1;
          }
          break;
        }
      }
      (**(code **)(param_1->_padding_ + 0x8b8))(param_1);
    }
    else {
      iVar2 = (param_1->RerunCauses).ArrayNum;
      iVar9 = iVar2 + -1;
      FVar3 = *(FName *)((param_1->RerunCauses).AllocatorInstance.Data + (longlong)iVar2 * 8 + -8);
      (param_1->RerunCauses).ArrayNum = iVar9;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,&(param_1->RerunCauses).AllocatorInstance,iVar9,
                 &(param_1->RerunCauses).ArrayMax);
      param_1->CurrentRerunCause = FVar3;
    }
  }
  if (((0 < (this->TestsLeft).ArrayNum) || (0 < (this->TestReproStrings).ArrayNum)) &&
     (this->bIsTearingDown == false)) {
    bVar6 = RunFirstValidTest(this);
    this->bIsRunning = bVar6;
    if (!bVar6) {
      AllTestsDone(this);
      return;
    }
    return;
  }
  this->bIsRunning = false;
  AllTestsDone(this);
  return;
}

// OnTestDone @ 148c96060

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UFunctionalTestingManager::OnTestDone(UFunctionalTestingManager *this,AFunctionalTest *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<_protected:_void___cdecl_UFunctionalTestingManager::OnTestDone(AFunctionalTest_*)_::_2_::FStat_STAT_FSimpleDelegateGraphTask_RequestingToBuildNextTileIfNecessary>
  FVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FTaskBase *this_00;
  FTaskBase *this_01;
  FName local_res18;
  ETaskPriority local_res20 [8];
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  this_01 = (FTaskBase *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FSimpleDelegateGraphTask_RequestingToBuildNextTileIfNecessary ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_UFunctionalTestingManager::OnTestDone(AFunctionalTest_*)_::_2_::FStat_STAT_FSimpleDelegateGraphTask_RequestingToBuildNextTileIfNecessary>
         )0x0) {
      pFVar3 = ::FName::FName(&local_res18,
                              "STAT_FSimpleDelegateGraphTask_RequestingToBuildNextTileIfNecessary");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FSimpleDelegateGraphTask_RequestingToBuildNextTileIfNecessary,*pFVar3
                 ,L"FSimpleDelegateGraphTask.Requesting to build next tile if necessary",
                 "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar4 = StatPtr_STAT_FSimpleDelegateGraphTask_RequestingToBuildNextTileIfNecessary;
  if (StatPtr_STAT_FSimpleDelegateGraphTask_RequestingToBuildNextTileIfNecessary ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_UFunctionalTestingManager::OnTestDone(AFunctionalTest_*)_::_2_::FStat_STAT_FSimpleDelegateGraphTask_RequestingToBuildNextTileIfNecessary>
       )0x0) {
    pFVar3 = ::FName::FName(&local_res18,
                            "STAT_FSimpleDelegateGraphTask_RequestingToBuildNextTileIfNecessary");
    FVar4 = (FThreadSafeStaticStat<_protected:_void___cdecl_UFunctionalTestingManager::OnTestDone(AFunctionalTest_*)_::_2_::FStat_STAT_FSimpleDelegateGraphTask_RequestingToBuildNextTileIfNecessary>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FSimpleDelegateGraphTask_RequestingToBuildNextTileIfNecessary
                         ,*pFVar3,
                         L"FSimpleDelegateGraphTask.Requesting to build next tile if necessary",
                         "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true
                         ,ST_int64,true,false,MCR_Invalid);
  }
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAVAFunctionalTest____6B_
    ;
    puVar5[1] = param_1;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFunctionalTestingManager____A6AXXZUFDefaultDelegateUserPolicy__PEAVAFunctionalTest____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UFunctionalTestingManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar5[3] = 0;
    local_res18 = (FName)this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UFunctionalTestingManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res18);
    puVar5[4] = NotifyTestDone;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x100,8);
  if (this_00 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)this_00,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)0x0);
    this_00->_padding_ = (longlong)&___7__TGraphTask_VFSimpleDelegateGraphTask____6B_;
    this_01 = this_00;
  }
  this_01[1]._padding_ = (longlong)FVar4;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this_01[1]._padding_,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_68);
  *(undefined4 *)&this_01[1]._padding_ = 1;
  UE::Tasks::Private::TranslatePriority
            (GameThread,local_res20,(EExtendedTaskPriority *)&local_res18);
  UE::Tasks::Private::FTaskBase::Init
            (this_01,L"GraphTask",local_res20[0],
             (EExtendedTaskPriority)local_res18.ComparisonIndex.Value,None);
  if (this_01 == (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
  }
  else {
    LOCK();
    this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x100);
    LOCK();
    paVar1 = &this_01->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_01->_padding_)(this_01,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
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
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return;
}

// OnWorldCleanedUp @ 148c96a00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UFunctionalTestingManager::OnWorldCleanedUp
          (UFunctionalTestingManager *this,UWorld *param_1,bool param_2,bool param_3)

{
  UWorld *pUVar1;
  FUObjectItem *this_00;
  IFunctionalTestingModule *pIVar2;
  undefined7 in_register_00000081;
  
  pUVar1 = (UWorld *)
           (**(code **)(this->_padding_ + 0x180))
                     (this,param_1,CONCAT71(in_register_00000081,param_2));
  if (pUVar1 == param_1) {
    this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
    FUObjectItem::ClearRootFlags(this_00,RootSet);
    pIVar2 = IFunctionalTestingModule::Get();
    (**(code **)((longlong)*pIVar2 + 0x70))(pIVar2,0);
    this->bIsTearingDown = true;
  }
  return;
}

// RunAllFunctionalTests @ 148c98f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __cdecl
UFunctionalTestingManager::RunAllFunctionalTests
          (UObject *param_1,bool param_2,bool param_3,FString *param_4)

{
  uchar uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  IFunctionalTestingModule *pIVar7;
  pmf_5f3c8826 this;
  UWorld *pUVar8;
  UClass *pUVar9;
  FUObjectItem *this_00;
  FString *pFVar10;
  AActor *pAVar11;
  APhasedAutomationActorBase *pAVar12;
  char *pcVar13;
  AFunctionalTest *pAVar14;
  longlong *plVar15;
  char *pcVar16;
  undefined1 auStackY_238 [32];
  undefined1 local_1e8;
  FIdentityFunctor local_1e7 [7];
  AFunctionalTest *local_1e0 [2];
  UClass *local_1d0;
  FName local_1c8;
  FName local_1c0;
  UClass *local_1b8;
  UWorld *local_1b0;
  TActorIteratorBase<TActorIterator<APhasedAutomationActorBase>_> local_1a8;
  TActorIteratorBase<TActorIterator<AFunctionalTest>_> local_148;
  FString local_e0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pIVar7 = IFunctionalTestingModule::Get();
  this = (pmf_5f3c8826)(**(code **)((longlong)*pIVar7 + 0x78))(pIVar7);
  if (this == (pmf_5f3c8826)0x0) {
    pUVar8 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
    if (pUVar8 == (UWorld *)0x0) {
      local_1e8 = 0;
      `UFunctionalTestingManager::GetManager'::__l13::<lambda_1>::operator()(&local_1e8);
    }
    else {
      uVar1 = (pUVar8->WorldType).Value;
      if ((uVar1 == '\x03') || (uVar1 == '\x01')) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar8,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar9 = StaticClass();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_c8,pUVar9);
        local_c8._8_8_ = pUVar8;
        this = (pmf_5f3c8826)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
        if (local_c8._64_8_ != 0) {
          plVar15 = (longlong *)(local_c8 + 0x50);
          if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
            plVar15 = (longlong *)local_c8._104_8_;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
        pIVar7 = IFunctionalTestingModule::Get();
        (**(code **)((longlong)*pIVar7 + 0x70))(pIVar7,this);
        this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)this + 0xc));
        FUObjectItem::SetRootFlags(this_00,RootSet);
        TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
        ::AddUObject<UFunctionalTestingManager>
                  ((TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
                    *)&FWorldDelegates::OnWorldCleanup,
                   (UFunctionalTestingManager *)&stack0xffffffffffffff18,this);
        goto LAB_148c99077;
      }
    }
LAB_148c9907c:
    bVar4 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("Manager != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\FunctionalTestingManager.cpp"
                       ,0x5f);
    if (bVar4) goto LAB_148c9909d;
LAB_148c99718:
    pFVar2 = (param_4->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    bVar4 = false;
  }
  else {
LAB_148c99077:
    if (this == (pmf_5f3c8826)0x0) goto LAB_148c9907c;
LAB_148c9909d:
    if (*(char *)((longlong)this + 0x90) == '\0') {
      pUVar8 = UEngine::GetWorldFromContextObject(GEngine,param_1,Assert);
      local_1b0 = pUVar8;
      UEngine::ForceGarbageCollection(GEngine,true);
      *(undefined1 *)((longlong)this + 0x91) = 0;
      *(undefined4 *)((longlong)this + 0x98) = 0;
      *(bool *)((longlong)this + 0x92) = param_3;
      *(undefined4 *)((longlong)this + 0x30) = 0;
      if (*(int *)((longlong)this + 0x34) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)((longlong)this + 0x28),0,
                   (int *)((longlong)this + 0x34));
      }
      *(undefined4 *)((longlong)this + 0x40) = 0;
      if (*(int *)((longlong)this + 0x44) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)((longlong)this + 0x38),0,
                   (int *)((longlong)this + 0x44));
      }
      pFVar10 = ::FString::FString(&local_e0,param_4);
      SetReproString((UFunctionalTestingManager *)this,pFVar10);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)((longlong)this + 0x48),
                 (void *)0x0);
      if (*(int *)((longlong)this + 0xd0) < 1) {
        pUVar9 = APhasedAutomationActorBase::StaticClass();
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar9 != (UClass *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
        }
        local_1a8.Flags = OnlyActiveLevels|SkipPendingKill;
        local_1a8.State.bIsSet = false;
        local_1d0 = pUVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
        }
        FActorIteratorState::FActorIteratorState
                  (&local_1a8.State.TypedValue,pUVar8,(TSubclassOf<AActor>)&local_1d0);
        local_1a8.State.bIsSet = true;
        TActorIteratorBase<TActorIterator<APhasedAutomationActorBase>_>::operator++(&local_1a8);
        while( true ) {
          if ((local_1a8.State.bIsSet == false) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (local_1a8.State.TypedValue.ReachedEnd != false) break;
          if ((local_1a8.State.bIsSet == false) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pAVar11 = FActorIteratorState::GetActorChecked(&local_1a8.State.TypedValue);
          pAVar12 = CastChecked<APhasedAutomationActorBase,AActor>(pAVar11);
          pcVar13 = strstr("&APhasedAutomationActorBase::OnFunctionalTestingComplete","::");
          if (pcVar13 == (char *)0x0) {
LAB_148c9935b:
            pcVar16 = &DAT_00000002;
LAB_148c99360:
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result && Result[2] != \'0\'",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                               ,0x1da,L"\'%hs\' does not look like a member function");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
          }
          else {
            do {
              pcVar16 = pcVar13;
              pcVar13 = strstr(pcVar16 + 1,"::");
            } while (pcVar13 != (char *)0x0);
            if (pcVar16 == (char *)0x0) goto LAB_148c9935b;
            pcVar16 = pcVar16 + 2;
            if (*pcVar16 == '0') goto LAB_148c99360;
          }
          ::FName::FName(&local_1c8,pcVar16);
          TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void>::
          __Internal_AddDynamic<APhasedAutomationActorBase>
                    ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void> *)
                     ((longlong)this + 0x60),pAVar12,(pmf_2d818a1d)0x148c957a0,local_1c8);
          pcVar13 = strstr("&APhasedAutomationActorBase::OnFunctionalTestingBegin","::");
          if (pcVar13 == (char *)0x0) {
LAB_148c993fb:
            pcVar16 = &DAT_00000002;
LAB_148c99400:
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result && Result[2] != \'0\'",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                               ,0x1da,L"\'%hs\' does not look like a member function");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
          }
          else {
            do {
              pcVar16 = pcVar13;
              pcVar13 = strstr(pcVar16 + 1,"::");
            } while (pcVar13 != (char *)0x0);
            if (pcVar16 == (char *)0x0) goto LAB_148c993fb;
            pcVar16 = pcVar16 + 2;
            if (*pcVar16 == '0') goto LAB_148c99400;
          }
          ::FName::FName(&local_1c0,pcVar16);
          TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void>::
          __Internal_AddDynamic<APhasedAutomationActorBase>
                    ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void> *)
                     ((longlong)this + 0x78),pAVar12,(pmf_2d818a1d)0x148c95760,local_1c0);
          TActorIteratorBase<TActorIterator<APhasedAutomationActorBase>_>::operator++(&local_1a8);
        }
        if (local_1a8.State.bIsSet != false) {
          UWorld::RemoveOnActorSpawnedHandler
                    (local_1a8.State.TypedValue.CurrentWorld,
                     local_1a8.State.TypedValue.ActorSpawnedDelegateHandle);
          if (local_1a8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
          }
          if (local_1a8.State.TypedValue.ActorArray.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.State.TypedValue.ActorArray.AllocatorInstance.Data);
          }
        }
        pUVar9 = AFunctionalTest::StaticClass();
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar9 != (UClass *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
        }
        local_148.Flags = OnlyActiveLevels|SkipPendingKill;
        local_148.State.bIsSet = false;
        local_1b8 = pUVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
        }
        FActorIteratorState::FActorIteratorState
                  (&local_148.State.TypedValue,local_1b0,(TSubclassOf<AActor>)&local_1b8);
        local_148.State.bIsSet = true;
        while( true ) {
          TActorIteratorBase<TActorIterator<AFunctionalTest>_>::operator++(&local_148);
          if ((local_148.State.bIsSet == false) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (local_148.State.TypedValue.ReachedEnd != false) break;
          if ((local_148.State.bIsSet == false) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pAVar11 = FActorIteratorState::GetActorChecked(&local_148.State.TypedValue);
          pAVar14 = CastChecked<AFunctionalTest,AActor>(pAVar11);
          if ((pAVar14 != (AFunctionalTest *)0x0) && (pAVar14->bIsEnabled != 0)) {
            local_1e0[0] = pAVar14;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pAVar14);
            }
            if (((*(AFunctionalTest ***)((longlong)this + 0x38) <= local_1e0) &&
                (local_1e0 <
                 *(AFunctionalTest ***)((longlong)this + 0x38) + *(int *)((longlong)this + 0x44)))
               && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            iVar6 = *(int *)((longlong)this + 0x40);
            if (iVar6 == *(int *)((longlong)this + 0x44)) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,(ForAnyElementType *)((longlong)this + 0x38),
                                 (int *)((longlong)this + 0x44));
            }
            *(int *)((longlong)this + 0x40) = iVar6 + 1;
            *(AFunctionalTest **)(*(longlong *)((longlong)this + 0x38) + (longlong)iVar6 * 8) =
                 local_1e0[0];
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_1e0[0] != (AFunctionalTest *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_1e0[0]);
            }
          }
        }
        if (local_148.State.bIsSet != false) {
          UWorld::RemoveOnActorSpawnedHandler
                    (local_148.State.TypedValue.CurrentWorld,
                     local_148.State.TypedValue.ActorSpawnedDelegateHandle);
          if (local_148.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
          }
          if (local_148.State.TypedValue.ActorArray.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.State.TypedValue.ActorArray.AllocatorInstance.Data);
          }
        }
        AlgoImpl::
        IntroSortInternal<TObjectPtr<AFunctionalTest>,int,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<AFunctionalTest>,FSortTestActorsByName>_>
                  (*(TObjectPtr<AFunctionalTest> **)((longlong)this + 0x38),
                   *(int *)((longlong)this + 0x40),local_1e7[0],(FSortTestActorsByName *)local_1e7);
        if (0 < *(int *)((longlong)this + 0x40)) {
          TArray<TObjectPtr<AFunctionalTest>,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<TObjectPtr<AFunctionalTest>,TSizedDefaultAllocator<32>_> *)
                     ((longlong)this + 0x28),
                     (TArray<TObjectPtr<AFunctionalTest>,TSizedDefaultAllocator<32>_> *)
                     ((longlong)this + 0x38));
          TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                    ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)((longlong)this + 0x78)
                     ,(void *)0x0);
          goto LAB_148c996d6;
        }
      }
      else {
        if (4 < (byte)LogFunctionalTest._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
        }
LAB_148c996d6:
        TriggerFirstValidTest((UFunctionalTestingManager *)this);
      }
      if (*(char *)((longlong)this + 0x90) == '\0') {
        if (2 < (byte)LogFunctionalTest._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
        }
        goto LAB_148c99718;
      }
    }
    else if (4 < (byte)LogFunctionalTest._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
    }
    pFVar2 = (param_4->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    bVar4 = true;
  }
  return bVar4;
}

// RunFirstValidTest @ 148c99740

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UFunctionalTestingManager::RunFirstValidTest(UFunctionalTestingManager *this)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  UWorld *this_00;
  UClass *pUVar13;
  AActor *pAVar14;
  AFunctionalTest *pAVar15;
  AFunctionalTest *pAVar16;
  int iVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_01;
  UClass *local_res8;
  FName local_res10;
  FName local_res18;
  FUObjectCppClassStaticFunctions local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_248;
  AFunctionalTest *local_238;
  ForAnyElementType local_230;
  int local_228;
  int local_224;
  FString local_220;
  undefined1 local_210 [8];
  ForAnyElementType local_208;
  int local_200;
  undefined1 local_1f8 [8];
  ForAnyElementType local_1f0;
  int local_1e8;
  FString *local_1e0;
  undefined8 local_1d8;
  UClass *local_1d0;
  FName local_1c8;
  FName local_1c0;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  TActorIteratorBase<TActorIterator<AFunctionalTest>_> local_178;
  FDestructionSentinel local_118;
  FDestructionSentinel local_100;
  TActorIteratorBase<TActorIterator<AFunctionalTest>_> local_e8;
  FString local_88;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  
  if (0 < (this->TestReproStrings).ArrayNum) {
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
    if (this_00 == (UWorld *)0x0) {
      if ((byte)LogFunctionalTest._0_1_ < 3) {
        return false;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
      return false;
    }
    if (0 < (this->TestReproStrings).ArrayNum) {
      pTVar2 = &this->TestReproStrings;
      do {
        local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_248.ArrayNum = 0;
        local_248.ArrayMax = 0;
        if (((this->TestReproStrings).ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_220.Data.ArrayNum = *(int *)(pFVar3 + 8);
        lVar20 = (longlong)local_220.Data.ArrayNum;
        pvVar4 = *(void **)pFVar3;
        if (local_220.Data.ArrayNum == 0) {
          local_220.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_220.Data.ArrayNum,0,(ForAnyElementType *)&local_220,
                     local_220.Data.ArrayNum,&local_220.Data.ArrayMax);
          memcpy(local_220.Data.AllocatorInstance.Data,pvVar4,lVar20 * 2);
        }
        if (((this->TestReproStrings).ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        if (*(void **)pFVar3 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar3);
        }
        iVar11 = (this->TestReproStrings).ArrayNum + -1;
        if (iVar11 != 0) {
          memmove(pFVar3,pFVar3 + 0x10,(longlong)iVar11 << 4);
        }
        iVar11 = (this->TestReproStrings).ArrayNum + -1;
        (this->TestReproStrings).ArrayNum = iVar11;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&pTVar2->AllocatorInstance,iVar11,&(this->TestReproStrings).ArrayMax);
        ::FString::ParseIntoArray(&local_220,&local_248,L"#",true);
        if (local_248.ArrayNum == 0) {
          if (2 < (byte)LogFunctionalTest._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
          }
          if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_220.Data.AllocatorInstance.Data);
          }
          DestructItems<FString,int>((FString *)local_248.AllocatorInstance.Data,local_248.ArrayNum)
          ;
          if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.AllocatorInstance.Data);
          }
        }
        else {
          if ((local_248.ArrayNum < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          local_230.Data = (FScriptContainerElement *)0x0;
          local_228 = *(int *)(local_248.AllocatorInstance.Data + 8);
          lVar20 = (longlong)local_228;
          pvVar4 = *(void **)local_248.AllocatorInstance.Data;
          if (local_228 == 0) {
            local_224 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_228,0,&local_230,local_228,&local_224);
            memcpy(local_230.Data,pvVar4,lVar20 * 2);
          }
          pAVar16 = (AFunctionalTest *)0x0;
          if ((local_248.ArrayNum < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          FVar18.Data = local_248.AllocatorInstance.Data;
          if (*(void **)local_248.AllocatorInstance.Data != (void *)0x0) {
            FMemory::Free(*(void **)local_248.AllocatorInstance.Data);
          }
          if (local_248.ArrayNum + -1 != 0) {
            memmove(FVar18.Data,FVar18.Data + 0x10,(longlong)(local_248.ArrayNum + -1) << 4);
          }
          local_248.ArrayNum = local_248.ArrayNum + -1;
          pUVar13 = AFunctionalTest::StaticClass();
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (pUVar13 != (UClass *)0x0) {
              UE::GC::MarkAsReachable((UObject *)pUVar13);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UClass *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)pUVar13);
            }
          }
          local_178.Flags = OnlyActiveLevels|SkipPendingKill;
          local_178.State.bIsSet = false;
          local_res8 = pUVar13;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar13);
          }
          FActorIteratorState::FActorIteratorState
                    (&local_178.State.TypedValue,this_00,(TSubclassOf<AActor>)&local_res8);
          local_178.State.bIsSet = true;
          while( true ) {
            TActorIteratorBase<TActorIterator<AFunctionalTest>_>::operator++(&local_178);
            if ((local_178.State.bIsSet == false) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar8)) {
              pcVar7 = (code *)swi(3);
              uVar9 = (*pcVar7)();
              return (bool)uVar9;
            }
            if (local_178.State.TypedValue.ReachedEnd != false) break;
            if ((local_178.State.bIsSet == false) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar8)) {
              pcVar7 = (code *)swi(3);
              uVar9 = (*pcVar7)();
              return (bool)uVar9;
            }
            pAVar14 = FActorIteratorState::GetActorChecked(&local_178.State.TypedValue);
            pAVar15 = CastChecked<AFunctionalTest,AActor>(pAVar14);
            local_res10 = (FName)pAVar15->_padding_;
            ::FName::ToString(&local_res10,&local_1b8);
            iVar11 = local_1b8.Data.ArrayNum;
            if (iVar11 == local_228) {
              if (iVar11 < 2) {
                bVar8 = true;
              }
              else {
                iVar11 = FGenericPlatformStricmp::Stricmp
                                   ((wchar_t *)local_1b8.Data.AllocatorInstance.Data,
                                    (wchar_t *)local_230.Data);
                bVar8 = iVar11 == 0;
              }
            }
            else {
              bVar8 = iVar11 + local_228 == 1;
            }
            if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
            }
            if (bVar8) {
              if ((local_178.State.bIsSet == false) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0x1bd,
                                     L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                    ), bVar8)) {
                pcVar7 = (code *)swi(3);
                uVar9 = (*pcVar7)();
                return (bool)uVar9;
              }
              pAVar14 = FActorIteratorState::GetActorChecked(&local_178.State.TypedValue);
              pAVar16 = CastChecked<AFunctionalTest,AActor>(pAVar14);
            }
          }
          if (local_178.State.bIsSet != false) {
            UWorld::RemoveOnActorSpawnedHandler
                      (local_178.State.TypedValue.CurrentWorld,
                       local_178.State.TypedValue.ActorSpawnedDelegateHandle);
            if (local_178.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_178.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
            }
            if (local_178.State.TypedValue.ActorArray.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_178.State.TypedValue.ActorArray.AllocatorInstance.Data);
            }
          }
          if (pAVar16 == (AFunctionalTest *)0x0) {
            if (2 < (byte)LogFunctionalTest._0_1_) {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this_00,&local_88,(UObject *)0x0,None);
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
            }
            if (Z_Registration_Info_UClass_AFunctionalTest.InnerSingleton == (UClass *)0x0) {
              local_res20.AddReferencedObjects = AActor::AddReferencedObjects;
              GetPrivateStaticClassBody
                        (L"/Script/FunctionalTesting",L"FunctionalTest",
                         &Z_Registration_Info_UClass_AFunctionalTest.InnerSingleton,
                         AFunctionalTest::StaticRegisterNativesAFunctionalTest,0x438,8,
                         CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
                         InternalConstructor<AFunctionalTest>,
                         InternalVTableHelperCtorCaller<AFunctionalTest>,&local_res20,
                         AActor::StaticClass,UObject::StaticClass);
            }
            pUVar13 = Z_Registration_Info_UClass_AFunctionalTest.InnerSingleton;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (Z_Registration_Info_UClass_AFunctionalTest.InnerSingleton != (UClass *)0x0) {
                UE::GC::MarkAsReachable
                          ((UObject *)Z_Registration_Info_UClass_AFunctionalTest.InnerSingleton);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UClass *)0x0)
                 ) {
                UE::GC::MarkAsReachable((UObject *)pUVar13);
              }
            }
            local_e8.Flags = OnlyActiveLevels|SkipPendingKill;
            local_e8.State.bIsSet = false;
            local_1d0 = pUVar13;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UClass *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)pUVar13);
            }
            FActorIteratorState::FActorIteratorState
                      (&local_e8.State.TypedValue,this_00,(TSubclassOf<AActor>)&local_1d0);
            local_e8.State.bIsSet = true;
            while( true ) {
              TActorIteratorBase<TActorIterator<AFunctionalTest>_>::operator++(&local_e8);
              if ((local_e8.State.bIsSet == false) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0x1bd,
                                     L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                    ), bVar8)) {
                pcVar7 = (code *)swi(3);
                uVar9 = (*pcVar7)();
                return (bool)uVar9;
              }
              if (local_e8.State.TypedValue.ReachedEnd != false) break;
              if (2 < (byte)LogFunctionalTest._0_1_) {
                if ((local_e8.State.bIsSet == false) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsSet()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                       ,0x1bd,
                                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                      ), bVar8)) {
                  pcVar7 = (code *)swi(3);
                  uVar9 = (*pcVar7)();
                  return (bool)uVar9;
                }
                pAVar14 = FActorIteratorState::GetActorChecked(&local_e8.State.TypedValue);
                pAVar16 = CastChecked<AFunctionalTest,AActor>(pAVar14);
                local_1c8 = (FName)pAVar16->_padding_;
                ::FName::ToString(&local_1c8,&local_198);
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
                if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_198.Data.AllocatorInstance.Data);
                }
              }
            }
            if (local_e8.State.bIsSet != false) {
              UWorld::RemoveOnActorSpawnedHandler
                        (local_e8.State.TypedValue.CurrentWorld,
                         local_e8.State.TypedValue.ActorSpawnedDelegateHandle);
              FVar18.Data = local_e8.State.TypedValue.ActorArray.AllocatorInstance.Data;
              if (local_e8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
                FVar18.Data = local_e8.State.TypedValue.ActorArray.AllocatorInstance.Data;
              }
              goto LAB_148c9a10b;
            }
          }
          else {
            local_238 = pAVar16;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pAVar16);
            }
            pFVar3 = (this->TestsLeft).AllocatorInstance.Data;
            if (((pFVar3 <= (FScriptContainerElement *)&local_238) &&
                ((FScriptContainerElement *)&local_238 <
                 pFVar3 + (longlong)(this->TestsLeft).ArrayMax * 8)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar7 = (code *)swi(3);
              uVar9 = (*pcVar7)();
              return (bool)uVar9;
            }
            iVar11 = (this->TestsLeft).ArrayNum;
            piVar1 = &(this->TestsLeft).ArrayMax;
            if (iVar11 == *piVar1) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&(this->TestsLeft).AllocatorInstance,piVar1);
            }
            pFVar3 = (this->TestsLeft).AllocatorInstance.Data;
            (this->TestsLeft).ArrayNum = iVar11 + 1;
            *(AFunctionalTest **)(pFVar3 + (longlong)iVar11 * 8) = local_238;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_238 != (AFunctionalTest *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_238);
            }
            if (&this->TestFinishedObserver != &pAVar16->TestFinishedObserver) {
              local_210 = (undefined1  [8])0x0;
              local_208.Data = (FScriptContainerElement *)0x0;
              local_200 = 0;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         &this->TestFinishedObserver,&local_78);
              if ((*(int *)&(this->TestFinishedObserver).field_0x10 != 0) &&
                 (plVar6 = *(longlong **)&(this->TestFinishedObserver).field_0x8,
                 plVar6 != (longlong *)0x0)) {
                (**(code **)(*plVar6 + 0x50))(plVar6,local_210);
              }
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_78);
              TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pAVar16->TestFinishedObserver
                         ,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_210);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_210,
                         (FWriteAccessScope *)&local_118);
              if ((local_200 != 0) && (local_208.Data != (FScriptContainerElement *)0x0)) {
                (*(code *)**(undefined8 **)local_208.Data)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_208,0,0,0x10);
                local_200 = 0;
              }
              if (local_118.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
              }
              if (local_208.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_208.Data);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                        ((FMRSWRecursiveAccessDetector *)local_210);
            }
            cVar10 = (**(code **)(pAVar16->_padding_ + 0x878))(pAVar16,&local_248);
            if (cVar10 != '\0') {
              local_res8 = (UClass *)CONCAT71(local_res8._1_7_,1);
              if (local_230.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_230.Data);
              }
              if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_220.Data.AllocatorInstance.Data);
              }
              DestructItems<FString,int>
                        ((FString *)local_248.AllocatorInstance.Data,local_248.ArrayNum);
              if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_248.AllocatorInstance.Data);
              }
              return (bool)local_res8._0_1_;
            }
            if (2 < (byte)LogFunctionalTest._0_1_) {
              local_res18 = (FName)pAVar16->_padding_;
              ::FName::ToString(&local_res18,&local_1a8);
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
              FVar18.Data = local_1a8.Data.AllocatorInstance.Data;
LAB_148c9a10b:
              if (FVar18.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar18.Data);
              }
            }
          }
          if (local_230.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_230.Data);
          }
          if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_220.Data.AllocatorInstance.Data);
          }
          DestructItems<FString,int>((FString *)local_248.AllocatorInstance.Data,local_248.ArrayNum)
          ;
          if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.AllocatorInstance.Data);
          }
        }
      } while (0 < (this->TestReproStrings).ArrayNum);
    }
  }
  uVar19 = (this->TestsLeft).ArrayNum - 1;
  if (-1 < (int)uVar19) {
    lVar20 = (longlong)(int)uVar19 << 3;
    do {
      uVar21 = ~uVar19 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar19 < (this->TestsLeft).ArrayNum) {
        uVar12 = uVar21;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      lVar5 = *(longlong *)((this->TestsLeft).AllocatorInstance.Data + lVar20);
      uVar12 = 0;
      if ((int)uVar19 < (this->TestsLeft).ArrayNum) {
        uVar12 = uVar21;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      if (*(longlong *)((this->TestsLeft).AllocatorInstance.Data + lVar20) == 0) {
        if (lVar5 == 0) goto LAB_148c9a5d1;
      }
      else {
        uVar12 = 0;
        if ((int)uVar19 < (this->TestsLeft).ArrayNum) {
          uVar12 = uVar21;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        if (((*(byte *)(*(longlong *)((this->TestsLeft).AllocatorInstance.Data + lVar20) + 0x318) &
             1) == 0) &&
           (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6714225771432378786>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\FunctionalTestingManager.cpp"
                               ,0x1a2,"TestsLeft[Index]->IsEnabled()"), bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        uVar12 = 0;
        if ((int)uVar19 < (this->TestsLeft).ArrayNum) {
          uVar12 = ~uVar19 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        this_01 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                  (*(longlong *)((this->TestsLeft).AllocatorInstance.Data + lVar20) + 0x3e0);
        if (&this->TestFinishedObserver !=
            (TDelegate<void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy> *)this_01) {
          local_1f8 = (undefined1  [8])0x0;
          local_1f0.Data = (FScriptContainerElement *)0x0;
          local_1e8 = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &this->TestFinishedObserver,&local_60);
          if ((*(int *)&(this->TestFinishedObserver).field_0x10 != 0) &&
             (plVar6 = *(longlong **)&(this->TestFinishedObserver).field_0x8,
             plVar6 != (longlong *)0x0)) {
            (**(code **)(*plVar6 + 0x50))(plVar6,local_1f8);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_60);
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    (this_01,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f8);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f8,
                     (FWriteAccessScope *)&local_100);
          if ((local_1e8 != 0) && (local_1f0.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)local_1f0.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_1f0,0,0,0x10);
            local_1e8 = 0;
          }
          if (local_100.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
          }
          if (local_1f0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f0.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_1f8);
        }
        uVar12 = 0;
        if ((int)uVar19 < (this->TestsLeft).ArrayNum) {
          uVar12 = ~uVar19 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        plVar6 = *(longlong **)((this->TestsLeft).AllocatorInstance.Data + lVar20);
        local_1e0 = (FString *)0x0;
        local_1d8 = 0;
        cVar10 = (**(code **)(*plVar6 + 0x878))(plVar6,&local_1e0);
        DestructItems<FString,int>(local_1e0,(int)local_1d8);
        if (local_1e0 != (FString *)0x0) {
          FMemory::Free(local_1e0);
        }
        if (cVar10 == '\0') {
          if (2 < (byte)LogFunctionalTest._0_1_) {
            uVar12 = 0;
            if ((int)uVar19 < (this->TestsLeft).ArrayNum) {
              uVar12 = ~uVar19 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              uVar9 = (*pcVar7)();
              return (bool)uVar9;
            }
            local_1c0 = *(FName *)(*(longlong *)((this->TestsLeft).AllocatorInstance.Data + lVar20)
                                  + 0x18);
            ::FName::ToString(&local_1c0,&local_188);
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)&PTR_u_Test___s_failed_151cafd98,
                       (FLogCategoryBase *)&LogFunctionalTest);
            if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_188.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          uVar12 = 0;
          if ((int)uVar19 < (this->TestsLeft).ArrayNum) {
            uVar12 = ~uVar19 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          if (*(char *)(*(longlong *)((this->TestsLeft).AllocatorInstance.Data + lVar20) + 0x3f8) ==
              '\x01') {
            return true;
          }
        }
LAB_148c9a5d1:
        uVar12 = 0;
        if ((int)uVar19 < (this->TestsLeft).ArrayNum) {
          uVar12 = ~uVar19 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        iVar11 = (this->TestsLeft).ArrayNum;
        pFVar3 = (this->TestsLeft).AllocatorInstance.Data;
        iVar17 = ~uVar19 + iVar11;
        if (1 < iVar17) {
          iVar17 = 1;
        }
        if (iVar17 != 0) {
          memmove(pFVar3 + (longlong)(int)uVar19 * 8,pFVar3 + (longlong)(iVar11 - iVar17) * 8,
                  (longlong)iVar17 << 3);
        }
        piVar1 = &(this->TestsLeft).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      lVar20 = lVar20 + -8;
      uVar19 = uVar19 - 1;
    } while (-1 < (int)uVar19);
  }
  return false;
}

// SetReproString @ 148c9be60

void __thiscall
UFunctionalTestingManager::SetReproString(UFunctionalTestingManager *this,FString *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  
  pTVar2 = &this->TestReproStrings;
  piVar1 = &(this->TestReproStrings).ArrayMax;
  iVar5 = (this->TestReproStrings).ArrayNum;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  if ((this->TestReproStrings).ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar4,iVar5);
    (this->TestReproStrings).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar4,iVar5);
    (this->TestReproStrings).ArrayNum = 0;
  }
  iVar3 = (param_1->Data).ArrayNum;
  iVar5 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  ::FString::AssignRange
            (&this->StartingReproString,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar5);
  if (1 < (param_1->Data).ArrayNum) {
    ::FString::ParseIntoArray(param_1,pTVar2,FFunctionalTesting::ReproStringTestSeparator,true);
  }
  pFVar4 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// SetUpTests @ 148c9c200

void __thiscall UFunctionalTestingManager::SetUpTests(UFunctionalTestingManager *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSetupTests,(void *)0x0
            );
  return;
}

// StaticRegisterNativesUFunctionalTestingManager @ 148c9d530

void __cdecl UFunctionalTestingManager::StaticRegisterNativesUFunctionalTestingManager(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UFunctionalTestingManager_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TriggerFirstValidTest @ 148ca09d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UFunctionalTestingManager::TriggerFirstValidTest(UFunctionalTestingManager *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UWorld *this_00;
  AWorldSettings *this_01;
  APlayerController *this_02;
  APawn *pAVar4;
  FTimerManager *this_03;
  
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (this_00 == (UWorld *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\FunctionalTestingManager.cpp"
                       ,0xa5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bIsRunning = true;
  bVar2 = UWorld::AreActorsInitialized(this_00);
  if (bVar2) {
    this_01 = UWorld::GetWorldSettings(this_00,false,true);
    bVar2 = AWorldSettings::IsNavigationSystemEnabled(this_01);
    if (bVar2) {
      bVar2 = UNavigationSystemV1::IsNavigationBeingBuilt((UObject *)this_00);
      if (bVar2) goto LAB_148ca0a71;
    }
    iVar3 = UWorld::GetNumPlayerControllers(this_00);
    if (iVar3 != 0) {
      this_02 = UWorld::GetFirstPlayerController(this_00);
      pAVar4 = APlayerController::GetPawnOrSpectator(this_02);
      if (pAVar4 != (APawn *)0x0) {
        bVar2 = true;
        goto LAB_148ca0a73;
      }
    }
  }
LAB_148ca0a71:
  bVar2 = false;
LAB_148ca0a73:
  if ((this->bInitialDelayApplied == true) && (bVar2)) {
    bVar2 = RunFirstValidTest(this);
    this->bIsRunning = bVar2;
    if (!bVar2) {
      AllTestsDone(this);
      return;
    }
  }
  else {
    this->bInitialDelayApplied = true;
    this_03 = UWorld::GetTimerManager(this_00);
    FTimerManager::SetTimer<UFunctionalTestingManager>
              (this_03,&this->TriggerFirstValidTestTimerHandle,this,(pmf_3d70cac7)0x148ca09d0,
               __real_3e800000,false,__real_bf800000);
  }
  return;
}

// execRunAllFunctionalTests @ 148ca9760

void __cdecl
UFunctionalTestingManager::execRunAllFunctionalTests(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  int local_res10 [2];
  int local_res18 [2];
  UObject *local_res20;
  void *local_58;
  undefined8 local_50;
  FString local_48;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar4 = local_res18[0] != 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  _Src = local_58;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_50;
  local_48.Data.ArrayNum = (int)local_50;
  if ((int)local_50 == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_50,0,(ForAnyElementType *)&local_48,(int)local_50,
               &local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  bVar3 = RunAllFunctionalTests(local_res20,bVar3,bVar4,&local_48);
  *(bool *)param_3 = bVar3;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// operator() @ 150539320

bool __thiscall `UFunctionalTestingManager::GetManager'::__l13::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6714225771432378594>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6714225771432378594>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

