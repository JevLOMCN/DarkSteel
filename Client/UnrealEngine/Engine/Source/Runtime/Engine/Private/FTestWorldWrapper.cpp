// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// ~FTestWorldWrapper @ 14880c820

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

void __thiscall FTestWorldWrapper::~FTestWorldWrapper(FTestWorldWrapper *this)

{
  code *pcVar1;
  UGameInstance *pUVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  FUObjectItem *this_00;
  
  this->_padding_ = (longlong)&___7FTestWorldWrapper__6B_;
  bVar4 = UObjectInitialized();
  if ((bVar4) && (GIsRequestingExit == false)) {
    if (this->TestWorld == (UWorld *)0x0) {
      pcVar1 = *(code **)(this->_padding_ + 0x30);
      if (pcVar1 == ReportFailure) {
        ReportFailure(this,L"TestWorld does not exist in DestroyTestWorld!");
      }
      else {
        (*pcVar1)();
      }
    }
    else {
      pcVar1 = *(code **)(this->_padding_ + 0x28);
      if (pcVar1 == EndPlayInTestWorld) {
        EndPlayInTestWorld(this);
      }
      else {
        (*pcVar1)();
      }
      this_00 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&this->TestWorld->_padding_ + 4));
      FUObjectItem::ClearRootFlags(this_00,RootSet);
      pUVar2 = (this->TestWorld->OwningGameInstance).field0_0x0.DebugPtr;
      if (pUVar2 != (UGameInstance *)0x0) {
        (**(code **)(pUVar2->_padding_ + 0x2d8))();
      }
      (**(code **)(GEngine->_padding_ + 0x530))();
      UWorld::DestroyWorld(this->TestWorld,false,(UWorld *)0x0);
      this->TestWorld = (UWorld *)0x0;
    }
  }
  DestructItems<FString,int>
            ((FString *)(this->FailureErrors).AllocatorInstance.Data,(this->FailureErrors).ArrayNum)
  ;
  pFVar3 = (this->FailureErrors).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

// AppendErrorMessages @ 14881dad0

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
FTestWorldWrapper::AppendErrorMessages
          (FTestWorldWrapper *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
            (param_1,&this->FailureErrors);
  return;
}

// BeginPlayInTestWorld @ 148823750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FTestWorldWrapper::BeginPlayInTestWorld(FTestWorldWrapper *this)

{
  bool bVar1;
  AWorldSettings *pAVar2;
  FURL local_78;
  
  if (this->TestWorld == (UWorld *)0x0) {
    (**(code **)(this->_padding_ + 0x30))(this,L"TestWorld does not exist in BeginPlayInTestWorld!")
    ;
    return false;
  }
  bVar1 = UWorld::HasBegunPlay(this->TestWorld);
  if (bVar1) {
    (**(code **)(this->_padding_ + 0x30))
              (this,L"TestWorld has already begin play in BeginPlayInTestWorld!");
    return false;
  }
  this->CachedFrameCounter = GFrameCounter;
  FURL::FURL(&local_78,(wchar_t *)0x0);
  if ((this->TestWorld->OwningGameInstance).field0_0x0.DebugPtr != (UGameInstance *)0x0) {
    UWorld::SetGameMode(this->TestWorld,&local_78);
    if ((this->TestWorld->AuthorityGameMode).field0_0x0.DebugPtr == (AGameModeBase *)0x0) {
      (**(code **)(this->_padding_ + 0x30))(this,L"BeginPlayInTestWorld failed to create GameMode");
      bVar1 = false;
      goto LAB_148823863;
    }
    pAVar2 = UWorld::GetWorldSettings(this->TestWorld,false,true);
    if (pAVar2 == (AWorldSettings *)0x0) {
      (**(code **)(this->_padding_ + 0x30))
                (this,L"BeginPlayInTestWorld failed to create WorldSettings");
      bVar1 = false;
      goto LAB_148823863;
    }
  }
  UWorld::InitializeActorsForPlay(this->TestWorld,&local_78,true,(FRegisterComponentContext *)0x0);
  UWorld::BeginPlay(this->TestWorld);
  if (((this->TestWorld->OwningGameInstance).field0_0x0.DebugPtr == (UGameInstance *)0x0) ||
     ((this->TestWorld->GameState).field0_0x0.DebugPtr != (AGameStateBase *)0x0)) {
    bVar1 = true;
  }
  else {
    (**(code **)(this->_padding_ + 0x30))(this,L"BeginPlayInTestWorld failed to create GameState");
    bVar1 = false;
  }
LAB_148823863:
  if (local_78.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Portal.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_78.Op.AllocatorInstance.Data,local_78.Op.ArrayNum);
  if (local_78.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Op.AllocatorInstance.Data);
  }
  if (local_78.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.RedirectURL.Data.AllocatorInstance.Data);
  }
  if (local_78.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Map.Data.AllocatorInstance.Data);
  }
  if (local_78.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Host.Data.AllocatorInstance.Data);
  }
  if (local_78.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Protocol.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// ClearFailureState @ 148829e50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTestWorldWrapper::ClearFailureState(FTestWorldWrapper *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  iVar2 = (this->FailureErrors).ArrayNum;
  piVar1 = &(this->FailureErrors).ArrayMax;
  pFVar3 = (this->FailureErrors).AllocatorInstance.Data;
  if (-1 < (this->FailureErrors).ArrayMax) {
    DestructItems<FString,int>((FString *)pFVar3,iVar2);
    (this->FailureErrors).ArrayNum = 0;
    return;
  }
  DestructItems<FString,int>((FString *)pFVar3,iVar2);
  (this->FailureErrors).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->FailureErrors).AllocatorInstance,0,piVar1);
  }
  return;
}

// CreateTestWorld @ 14882d880

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

bool __thiscall FTestWorldWrapper::CreateTestWorld(FTestWorldWrapper *this,Type param_1)

{
  UEngine *pUVar1;
  bool bVar2;
  UClass *pUVar3;
  UGameInstance *pUVar4;
  UWorld *pUVar5;
  FUObjectItem *this_00;
  FWorldContext *this_01;
  longlong *plVar6;
  wchar_t *pwVar7;
  undefined1 auStackY_f8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  pUVar1 = GEngine;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (this->TestWorld != (UWorld *)0x0) {
    (**(code **)(this->_padding_ + 0x30))(this,L"TestWorld already exists in CreateTestWorld!");
    return false;
  }
  pUVar4 = (UGameInstance *)0x0;
  switch(param_1) {
  case Game:
    break;
  case Editor:
  case EditorPreview:
  case GamePreview:
  case GameRPC:
  case Inactive:
    goto switchD_14882d8ef_caseD_2;
  default:
    `FTestWorldWrapper::CreateTestWorld'::__l7::<lambda_1>::operator()(local_b8);
    pwVar7 = L"Unsupported world type in CreateTestWorld";
    goto LAB_14882da5d;
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)GEngine,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UGameInstance_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar3);
  local_a8._8_8_ = pUVar1;
  pUVar4 = (UGameInstance *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar6 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
switchD_14882d8ef_caseD_2:
  local_b0 = 0;
  pUVar5 = UWorld::CreateWorld(param_1,false,(FName)0x0,(UPackage *)0x0,true,Num,
                               (FWorldInitializationValues *)0x0,false);
  this->TestWorld = pUVar5;
  if (pUVar5 == (UWorld *)0x0) {
    pwVar7 = L"Failed to create world in CreateTestWorld";
LAB_14882da5d:
    (**(code **)(this->_padding_ + 0x30))(this,pwVar7);
    bVar2 = false;
  }
  else {
    pUVar5->bShouldTick = '\0';
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&this->TestWorld->_padding_ + 4));
    FUObjectItem::SetRootFlags(this_00,RootSet);
    this_01 = UEngine::CreateNewWorldContext(GEngine,param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UGameInstance *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this_01->OwningGameInstance).field0_0x0.DebugPtr = pUVar4;
    pUVar5 = this->TestWorld;
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UGameInstance *)0x0)) {
      (pUVar5->OwningGameInstance).field0_0x0.DebugPtr = pUVar4;
      FWorldContext::SetCurrentWorld(this_01,this->TestWorld);
      if (pUVar4 != (UGameInstance *)0x0) {
        (**(code **)(pUVar4->_padding_ + 0x2d0))(pUVar4);
      }
      bVar2 = true;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
      (pUVar5->OwningGameInstance).field0_0x0.DebugPtr = pUVar4;
      FWorldContext::SetCurrentWorld(this_01,this->TestWorld);
      (**(code **)(pUVar4->_padding_ + 0x2d0))(pUVar4);
      bVar2 = true;
    }
  }
  return bVar2;
}

// DestroyTestWorld @ 14882f850

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

bool __thiscall FTestWorldWrapper::DestroyTestWorld(FTestWorldWrapper *this,bool param_1)

{
  UGameInstance *pUVar1;
  FUObjectItem *this_00;
  
  if (this->TestWorld == (UWorld *)0x0) {
    (**(code **)(this->_padding_ + 0x30))(this,L"TestWorld does not exist in DestroyTestWorld!");
    return false;
  }
  (**(code **)(this->_padding_ + 0x28))();
  this_00 = FUObjectArray::IndexToObject
                      (&GUObjectArray,*(int *)((longlong)&this->TestWorld->_padding_ + 4));
  FUObjectItem::ClearRootFlags(this_00,RootSet);
  pUVar1 = (this->TestWorld->OwningGameInstance).field0_0x0.DebugPtr;
  if (pUVar1 != (UGameInstance *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2d8))();
  }
  (**(code **)(GEngine->_padding_ + 0x530))();
  UWorld::DestroyWorld(this->TestWorld,false,(UWorld *)0x0);
  this->TestWorld = (UWorld *)0x0;
  if (param_1) {
    CollectGarbage(RF_NoFlags,true);
    (**(code **)(GEngine->_padding_ + 0x528))(GEngine,0);
  }
  return true;
}

// EndPlayInTestWorld @ 1488352b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FTestWorldWrapper::EndPlayInTestWorld(FTestWorldWrapper *this)

{
  bool bVar1;
  
  if (this->TestWorld == (UWorld *)0x0) {
    (**(code **)(this->_padding_ + 0x30))(this,L"Failed to find world in EndPlayInTestWorld");
    return false;
  }
  bVar1 = UWorld::HasBegunPlay(this->TestWorld);
  if (bVar1) {
    UWorld::BeginTearingDown(this->TestWorld);
    UWorld::EndPlay(this->TestWorld,Quit);
    GFrameCounter = this->CachedFrameCounter;
  }
  return true;
}

// ForwardErrorMessages @ 14883b660

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
FTestWorldWrapper::ForwardErrorMessages(FTestWorldWrapper *this,FAutomationTestBase *param_1)

{
  int iVar1;
  char cVar2;
  FString *pFVar3;
  FString *pFVar4;
  undefined1 local_res8 [8];
  FString *local_18;
  undefined8 local_10;
  
  cVar2 = (**(code **)(this->_padding_ + 0x40))();
  if (cVar2 != '\0') {
    local_18 = (FString *)0x0;
    local_10 = 0;
    (**(code **)(this->_padding_ + 0x48))(this,&local_18);
    iVar1 = (int)local_10;
    pFVar4 = local_18 + (int)local_10;
    pFVar3 = local_18;
    while( true ) {
      if ((int)local_10 != iVar1) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar3 == pFVar4) break;
      (**(code **)(param_1->_padding_ + 0x28))(param_1,pFVar3,0);
      pFVar3 = pFVar3 + 1;
    }
    DestructItems<FString,int>(local_18,(int)local_10);
    if (local_18 != (FString *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return;
}

// HasFailed @ 148844b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FTestWorldWrapper::HasFailed(FTestWorldWrapper *this)

{
  return 0 < (this->FailureErrors).ArrayNum;
}

// ReportFailure @ 148855ad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTestWorldWrapper::ReportFailure(FTestWorldWrapper *this,wchar_t *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (this->FailureErrors).ArrayNum;
  piVar1 = &(this->FailureErrors).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->FailureErrors).AllocatorInstance,piVar1);
  }
  (this->FailureErrors).ArrayNum = iVar2 + 1;
  ::FString::FString((FString *)
                     ((this->FailureErrors).AllocatorInstance.Data + (longlong)iVar2 * 0x10),param_1
                    );
  return;
}

// TickTestWorld @ 14885bc50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FTestWorldWrapper::TickTestWorld(FTestWorldWrapper *this,float param_1)

{
  bool bVar1;
  
  if (this->TestWorld == (UWorld *)0x0) {
    (**(code **)(this->_padding_ + 0x30))(this,L"Failed to find world in TickTestWorld");
    return false;
  }
  UWorld::Tick(this->TestWorld,LEVELTICK_All,param_1);
  bVar1 = UWorld::HasBegunPlay(this->TestWorld);
  if (bVar1) {
    GFrameCounter = GFrameCounter + 1;
  }
  return true;
}

// operator() @ 150532060

bool __thiscall `FTestWorldWrapper::CreateTestWorld'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_261016140514328490>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_261016140514328490>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

