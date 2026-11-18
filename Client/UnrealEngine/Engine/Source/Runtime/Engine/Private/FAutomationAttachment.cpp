// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487edfe0

EAutomationTestFlags __thiscall FAutomationAttachment::GetTestFlags(FAutomationAttachment *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 1487edff0

bool __thiscall FAutomationAttachment::IsStressTest(FAutomationAttachment *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487ee000

uint __thiscall FAutomationAttachment::GetRequiredDeviceNum(FAutomationAttachment *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487ee010

FString * __thiscall
FAutomationAttachment::GetTestSourceFileName
          (FAutomationAttachment *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487ee040

int __thiscall FAutomationAttachment::GetTestSourceFileLine(FAutomationAttachment *this)

{
  return 0x607;
}

// GetTests @ 1487ee050

/* WARNING: Removing unreachable block (ram,0x0001487ee13d) */
/* WARNING: Removing unreachable block (ram,0x0001487ee208) */

void __thiscall
FAutomationAttachment::GetTests
          (FAutomationAttachment *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Attachment");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 1487ee230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

bool __thiscall FAutomationAttachment::RunTest(FAutomationAttachment *this,FString *param_1)

{
  UGameInstance *pUVar1;
  UWorld *pUVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  AWorldSettings *pAVar7;
  ADefaultPawn *this_00;
  FUObjectItem *this_01;
  wchar_t *pwVar8;
  undefined8 uVar9;
  AActor *pAVar10;
  AActor *local_res18;
  AActor *local_res20;
  FTestWorldWrapper local_f8;
  TVector<double>_u_0 local_c8;
  AActor *local_a8 [2];
  FURL local_98;
  
  local_f8._padding_ = (longlong)&___7FTestWorldWrapper__6B_;
  local_f8.TestWorld = (UWorld *)0x0;
  local_f8.CachedFrameCounter = 0;
  local_f8.FailureErrors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.FailureErrors.ArrayNum = 0;
  local_f8.FailureErrors.ArrayMax = 0;
  FTestWorldWrapper::CreateTestWorld(&local_f8,Game);
  pUVar2 = local_f8.TestWorld;
  if (local_f8.TestWorld == (UWorld *)0x0) {
    bVar4 = false;
    goto LAB_1487ee551;
  }
  bVar4 = UWorld::HasBegunPlay(local_f8.TestWorld);
  if (bVar4) {
    (**(code **)(local_f8._padding_ + 0x30))
              (&local_f8,L"TestWorld has already begin play in BeginPlayInTestWorld!");
  }
  else {
    local_f8.CachedFrameCounter = GFrameCounter;
    FURL::FURL(&local_98,(wchar_t *)0x0);
    if (((local_f8.TestWorld)->OwningGameInstance).field0_0x0.DebugPtr == (UGameInstance *)0x0) {
LAB_1487ee333:
      UWorld::InitializeActorsForPlay
                (local_f8.TestWorld,&local_98,true,(FRegisterComponentContext *)0x0);
      UWorld::BeginPlay(local_f8.TestWorld);
      if ((((local_f8.TestWorld)->OwningGameInstance).field0_0x0.DebugPtr == (UGameInstance *)0x0)
         || (((local_f8.TestWorld)->GameState).field0_0x0.DebugPtr != (AGameStateBase *)0x0)) {
        if (local_98.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Portal.Data.AllocatorInstance.Data);
        }
        DestructItems<FString,int>
                  ((FString *)local_98.Op.AllocatorInstance.Data,local_98.Op.ArrayNum);
        if (local_98.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Op.AllocatorInstance.Data);
        }
        if (local_98.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.RedirectURL.Data.AllocatorInstance.Data);
        }
        if (local_98.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Map.Data.AllocatorInstance.Data);
        }
        if (local_98.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Host.Data.AllocatorInstance.Data);
        }
        if (local_98.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Protocol.Data.AllocatorInstance.Data);
        }
        goto LAB_1487ee3cc;
      }
      pwVar8 = L"BeginPlayInTestWorld failed to create GameState";
    }
    else {
      UWorld::SetGameMode(local_f8.TestWorld,&local_98);
      if (((local_f8.TestWorld)->AuthorityGameMode).field0_0x0.DebugPtr == (AGameModeBase *)0x0) {
        pwVar8 = L"BeginPlayInTestWorld failed to create GameMode";
      }
      else {
        pAVar7 = UWorld::GetWorldSettings(local_f8.TestWorld,false,true);
        if (pAVar7 != (AWorldSettings *)0x0) goto LAB_1487ee333;
        pwVar8 = L"BeginPlayInTestWorld failed to create WorldSettings";
      }
    }
    (**(code **)(local_f8._padding_ + 0x30))(&local_f8,pwVar8);
    FURL::~FURL(&local_98);
  }
LAB_1487ee3cc:
  local_res20 = (AActor *)0x0;
  local_res18 = (AActor *)0x0;
  AttachmentTest_SetupParentAndChild(pUVar2,&local_res20,&local_res18);
  AttachmentTest_CommonTests(local_res20,local_res18,(FAutomationTestBase *)this);
  this_00 = NewObject<ADefaultPawn>((UObject *)(pUVar2->PersistentLevel).field0_0x0.DebugPtr);
  AActor::SetActorLocation
            ((AActor *)this_00,&UE::Math::TVector<double>::ZeroVector,false,(FHitResult *)0x0,None);
  AActor::SetActorRotation((AActor *)this_00,&UE::Math::TQuat<double>::Identity,None);
  local_c8._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_c8._s_0.Y = _UNK_150689688;
  local_c8._s_0.Z = __real_3ff0000000000000;
  AActor::SetActorScale3D((AActor *)this_00,(TVector<double> *)&local_c8._s_0);
  local_c8._s_0.X = 0.0;
  local_a8[0] = (AActor *)0x0;
  AttachmentTest_SetupParentAndChild(pUVar2,(AActor **)local_c8.XYZ,local_a8);
  local_res20 = (AActor *)0x0;
  local_res18 = (AActor *)CONCAT44(local_res18._4_4_,0x10101);
  AActor::AttachToActor
            (local_a8[0],(AActor *)this_00,(FAttachmentTransformRules *)&local_res18,(FName)0x0);
  AttachmentTest_CommonTests((AActor *)local_c8._s_0.X,local_a8[0],(FAutomationTestBase *)this);
  cVar5 = (**(code **)(local_f8._padding_ + 0x40))(&local_f8);
  if (cVar5 != '\0') {
    local_c8._s_0.X = 0.0;
    local_c8._s_0.Y = 0.0;
    (**(code **)(local_f8._padding_ + 0x48))(&local_f8,&local_c8);
    uVar3 = local_c8._8_4_;
    pAVar10 = (AActor *)((longlong)(int)local_c8._8_4_ * 0x10 + (longlong)local_c8._s_0.X);
    uVar9 = local_c8._s_0.X;
    while( true ) {
      if (local_c8._8_4_ != uVar3) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res18);
      }
      if ((AActor *)uVar9 == pAVar10) break;
      (**(code **)(*(longlong *)this + 0x28))(this,uVar9);
      uVar9 = &((AActor *)uVar9)->_padding_;
    }
    DestructItems<FString,int>((FString *)local_c8._s_0.X,local_c8._8_4_);
    if ((AActor *)local_c8._s_0.X != (AActor *)0x0) {
      FMemory::Free((void *)local_c8._s_0.X);
    }
  }
  bVar4 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  bVar4 = !bVar4;
LAB_1487ee551:
  local_f8._padding_ = (longlong)&___7FTestWorldWrapper__6B_;
  bVar6 = UObjectInitialized();
  if ((bVar6) && (GIsRequestingExit == false)) {
    if (local_f8.TestWorld == (UWorld *)0x0) {
      (**(code **)(local_f8._padding_ + 0x30))
                (&local_f8,L"TestWorld does not exist in DestroyTestWorld!");
    }
    else {
      (**(code **)(local_f8._padding_ + 0x28))(&local_f8);
      this_01 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&(local_f8.TestWorld)->_padding_ + 4));
      FUObjectItem::ClearRootFlags(this_01,RootSet);
      pUVar1 = ((local_f8.TestWorld)->OwningGameInstance).field0_0x0.DebugPtr;
      if (pUVar1 != (UGameInstance *)0x0) {
        (**(code **)(pUVar1->_padding_ + 0x2d8))();
      }
      (**(code **)(GEngine->_padding_ + 0x530))();
      UWorld::DestroyWorld(local_f8.TestWorld,false,(UWorld *)0x0);
      local_f8.TestWorld = (UWorld *)0x0;
    }
  }
  DestructItems<FString,int>
            ((FString *)local_f8.FailureErrors.AllocatorInstance.Data,
             local_f8.FailureErrors.ArrayNum);
  if (local_f8.FailureErrors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.FailureErrors.AllocatorInstance.Data);
  }
  return bVar4;
}

// GetBeautifiedTestName @ 1487ee650

FString * __thiscall
FAutomationAttachment::GetBeautifiedTestName
          (FAutomationAttachment *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Attachment");
  return __return_storage_ptr__;
}

