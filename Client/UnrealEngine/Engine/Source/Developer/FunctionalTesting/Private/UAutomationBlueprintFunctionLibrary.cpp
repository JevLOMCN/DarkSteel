// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 81

// StaticClass @ 148c72cc0

UClass * __cdecl UAutomationBlueprintFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationBlueprintFunctionLibrary.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"AutomationBlueprintFunctionLibrary",
               &Z_Registration_Info_UClass_UAutomationBlueprintFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUAutomationBlueprintFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAutomationBlueprintFunctionLibrary>,
               InternalVTableHelperCtorCaller<UAutomationBlueprintFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationBlueprintFunctionLibrary.InnerSingleton;
}

// UAutomationBlueprintFunctionLibrary @ 148c7ff80

UAutomationBlueprintFunctionLibrary * __thiscall
UAutomationBlueprintFunctionLibrary::UAutomationBlueprintFunctionLibrary
          (UAutomationBlueprintFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAutomationBlueprintFunctionLibrary__6B_;
  return this;
}

// UAutomationBlueprintFunctionLibrary @ 148c7ffb0

UAutomationBlueprintFunctionLibrary * __thiscall
UAutomationBlueprintFunctionLibrary::UAutomationBlueprintFunctionLibrary
          (UAutomationBlueprintFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAutomationBlueprintFunctionLibrary__6B_;
  return this;
}

// ~UAutomationBlueprintFunctionLibrary @ 148c81120

void __thiscall
UAutomationBlueprintFunctionLibrary::~UAutomationBlueprintFunctionLibrary
          (UAutomationBlueprintFunctionLibrary *this)

{
  *(undefined ***)this = &___7UAutomationBlueprintFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// AddExpectedLogError @ 148c83f00

void __cdecl
UAutomationBlueprintFunctionLibrary::AddExpectedLogError
          (FString *param_1,int param_2,bool param_3,bool param_4)

{
  FAutomationTestBase *this;
  FScriptContainerElement *pFVar1;
  FAutomationTestFramework *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar2 = FAutomationTestFramework::Get();
  this = pFVar2->CurrentTest;
  if (this != (FAutomationTestBase *)0x0) {
    pFVar3 = ::FString::FString(&local_18,param_1);
    FAutomationTestBase::AddExpectedError(this,pFVar3,param_3 ^ Contains,param_2,param_4);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// AddExpectedLogMessage @ 148c83f90

void __cdecl
UAutomationBlueprintFunctionLibrary::AddExpectedLogMessage
          (FString *param_1,int param_2,bool param_3,bool param_4)

{
  FAutomationTestBase *this;
  FScriptContainerElement *pFVar1;
  FAutomationTestFramework *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar2 = FAutomationTestFramework::Get();
  this = pFVar2->CurrentTest;
  if (this != (FAutomationTestBase *)0x0) {
    pFVar3 = ::FString::FString(&local_18,param_1);
    FAutomationTestBase::AddExpectedMessage(this,pFVar3,param_3 ^ Contains,param_2,param_4);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// AddExpectedPlainLogError @ 148c84020

void __cdecl
UAutomationBlueprintFunctionLibrary::AddExpectedPlainLogError
          (FString *param_1,int param_2,bool param_3)

{
  FAutomationTestBase *this;
  FScriptContainerElement *pFVar1;
  FAutomationTestFramework *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar2 = FAutomationTestFramework::Get();
  this = pFVar2->CurrentTest;
  if (this != (FAutomationTestBase *)0x0) {
    pFVar3 = ::FString::FString(&local_18,param_1);
    FAutomationTestBase::AddExpectedErrorPlain(this,pFVar3,param_3 ^ Contains,param_2);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// AddExpectedPlainLogMessage @ 148c840a0

void __cdecl
UAutomationBlueprintFunctionLibrary::AddExpectedPlainLogMessage
          (FString *param_1,int param_2,bool param_3)

{
  FAutomationTestBase *this;
  FScriptContainerElement *pFVar1;
  FAutomationTestFramework *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar2 = FAutomationTestFramework::Get();
  this = pFVar2->CurrentTest;
  if (this != (FAutomationTestBase *)0x0) {
    pFVar3 = ::FString::FString(&local_18,param_1);
    FAutomationTestBase::AddExpectedMessagePlain(this,pFVar3,param_3 ^ Contains,param_2);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// AddTestError @ 148c84330

void __cdecl UAutomationBlueprintFunctionLibrary::AddTestError(FString *param_1)

{
  FAutomationTestBase *pFVar1;
  FAutomationTestFramework *pFVar2;
  
  pFVar2 = FAutomationTestFramework::Get();
  pFVar1 = pFVar2->CurrentTest;
  if (pFVar1 != (FAutomationTestBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c84358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,param_1,0);
    return;
  }
  return;
}

// AddTestInfo @ 148c84370

void __cdecl UAutomationBlueprintFunctionLibrary::AddTestInfo(FString *param_1)

{
  FAutomationTestBase *pFVar1;
  FAutomationTestFramework *pFVar2;
  
  pFVar2 = FAutomationTestFramework::Get();
  pFVar1 = pFVar2->CurrentTest;
  if (pFVar1 != (FAutomationTestBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c8439b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x50))(pFVar1,param_1,0,0);
    return;
  }
  return;
}

// AddTestTelemetryData @ 148c843b0

void __cdecl
UAutomationBlueprintFunctionLibrary::AddTestTelemetryData
          (FString *param_1,float param_2,FString *param_3)

{
  FAutomationTestBase *pFVar1;
  FScriptContainerElement *pFVar2;
  FAutomationTestFramework *pFVar3;
  
  if (GIsAutomationTesting) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    if (pFVar1 != (FAutomationTestBase *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x70))(pFVar1,param_1,(double)param_2,param_3);
    }
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// AddTestWarning @ 148c84430

void __cdecl UAutomationBlueprintFunctionLibrary::AddTestWarning(FString *param_1)

{
  FAutomationTestBase *pFVar1;
  FAutomationTestFramework *pFVar2;
  
  pFVar2 = FAutomationTestFramework::Get();
  pFVar1 = pFVar2->CurrentTest;
  if (pFVar1 != (FAutomationTestBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c84458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x48))(pFVar1,param_1,0);
    return;
  }
  return;
}

// AreAutomatedTestsRunning @ 148c845b0

bool __cdecl UAutomationBlueprintFunctionLibrary::AreAutomatedTestsRunning(void)

{
  return GIsAutomationTesting;
}

// AutomationWaitForLoading @ 148c898c0

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
UAutomationBlueprintFunctionLibrary::AutomationWaitForLoading
          (UObject *param_1,FLatentActionInfo *param_2,FAutomationWaitForLoadingOptions param_3)

{
  UWorld *this;
  FLatentActionManager *this_00;
  FWaitForLoadingToFinish *pFVar1;
  FWaitForLoadingToFinish *this_01;
  FAutomationWaitForLoadingOptions local_res18 [8];
  FFirstItemPredicate local_res20 [8];
  
  local_res18[0].WaitForReplicationToSettle = param_3.WaitForReplicationToSettle;
  this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (this != (UWorld *)0x0) {
    this_00 = UWorld::GetLatentActionManager(this);
    pFVar1 = FLatentActionManager::
             FindExistingActionWithPredicate<FWaitForLoadingToFinish,_FLatentActionManager::FindExistingAction<FWaitForLoadingToFinish>_::__l2::FFirstItemPredicate>
                       (this_00,(param_2->CallbackTarget).field0_0x0.DebugPtr,param_2->UUID,
                        local_res20);
    if (pFVar1 == (FWaitForLoadingToFinish *)0x0) {
      this_01 = ::operator_new(0x48);
      pFVar1 = (FWaitForLoadingToFinish *)0x0;
      if (this_01 != (FWaitForLoadingToFinish *)0x0) {
        pFVar1 = FWaitForLoadingToFinish::FWaitForLoadingToFinish
                           (this_01,param_2,param_1,local_res18);
      }
      FLatentActionManager::AddNewAction
                (this_00,(param_2->CallbackTarget).field0_0x0.DebugPtr,param_2->UUID,
                 (FPendingLatentAction *)pFVar1);
    }
  }
  return;
}

// BuildScreenshotData @ 148c8a070

FAutomationScreenshotData * __cdecl
UAutomationBlueprintFunctionLibrary::BuildScreenshotData
          (FAutomationScreenshotData *__return_storage_ptr__,FString *param_1,FString *param_2,
          int param_3,int param_4)

{
  FAutomationTestFramework *pFVar1;
  FString *pFVar2;
  FString local_28;
  void *local_18 [2];
  
  ::FString::FString(&local_28,L"");
  pFVar1 = FAutomationTestFramework::Get();
  if (pFVar1->CurrentTest != (FAutomationTestBase *)0x0) {
    pFVar1 = FAutomationTestFramework::Get();
    pFVar2 = (FString *)
             (**(code **)(pFVar1->CurrentTest->_padding_ + 0x18))(pFVar1->CurrentTest,local_18);
    if (&local_28 != pFVar2) {
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      local_28.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = (pFVar2->Data).ArrayNum;
      local_28.Data.ArrayMax = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  AutomationCommon::BuildScreenshotData
            (__return_storage_ptr__,param_1,&local_28,param_2,param_3,param_4);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// BuildScreenshotData @ 148c8a170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAutomationScreenshotData * __cdecl
UAutomationBlueprintFunctionLibrary::BuildScreenshotData
          (FAutomationScreenshotData *__return_storage_ptr__,UWorld *param_1,FString *param_2,
          int param_3,int param_4)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = AutomationCommon::GetWorldContext(&local_18,param_1);
  BuildScreenshotData(__return_storage_ptr__,pFVar1,param_2,param_3,param_4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CompareImageAgainstReference @ 148c8acd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UAutomationBlueprintFunctionLibrary::CompareImageAgainstReference
          (FString *param_1,FString *param_2,EComparisonTolerance param_3,FString *param_4,
          UObject *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  EImageFormat EVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  FName *pFVar10;
  FModuleManager *this;
  IModuleInterface *pIVar11;
  undefined8 uVar12;
  FString *pFVar13;
  UWorld *pUVar14;
  uint uVar15;
  FStaticBasicLogRecord *pFVar16;
  wchar_t *pwVar17;
  bool bVar18;
  longlong lVar19;
  longlong *local_168;
  TReferenceControllerBase<1> *local_160;
  undefined1 local_158 [8];
  FName local_150;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_f8;
  void *local_e0;
  size_t sStack_d8;
  undefined8 local_d0;
  FName local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  FString local_b0;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FString local_88;
  FName local_78 [2];
  TStringView<wchar_t> local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_150 = (FName)((ulonglong)local_150 & 0xffffffff00000000);
  if (!GIsAutomationTesting) {
    if (2 < (byte)AutomationFunctionLibrary._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&AutomationFunctionLibrary);
    }
    goto LAB_148c8b442;
  }
  FPaths::GetExtension(&local_138,param_1,false);
  local_98 = local_138.Data.AllocatorInstance.Data;
  iStack_90 = local_138.Data.ArrayNum + -1;
  if (local_138.Data.ArrayNum == 0) {
    iStack_90 = 0;
  }
  local_68._12_4_ = uStack_8c;
  local_68.Size = iStack_90;
  local_68.DataPtr = (wchar_t *)local_138.Data.AllocatorInstance.Data;
  EVar5 = ImageWrapperHelper::GetImageFormat(&local_68);
  pFVar10 = ::FName::FName(local_78,"ImageWrapper");
  local_150 = *pFVar10;
  this = FModuleManager::Get();
  bVar6 = FModuleManager::IsModuleLoaded(this,local_150);
  if (!bVar6) {
    ::FName::ToString(&local_150,&local_58);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ModuleManager.IsModuleLoaded(ModuleName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                       ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
  }
  pIVar11 = FModuleManager::GetModule(this,local_150);
  (**(code **)((longlong)*pIVar11 + 0x58))(pIVar11,&local_168,EVar5,0);
  if (local_168 == (longlong *)0x0) {
    if (1 < (byte)AutomationFunctionLibrary._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&AutomationFunctionLibrary);
    }
  }
  else {
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 0;
    local_f8.ArrayMax = 0;
    if ((param_1->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar6 = FFileHelper::LoadFileToArray(&local_f8,pwVar17,0);
    if (bVar6) {
      if ((local_168 == (longlong *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
      cVar8 = (**(code **)*local_168)(local_168,local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
      if (cVar8 == '\0') {
        if (1 < (byte)AutomationFunctionLibrary._0_1_) {
          pFVar16 = &::LOG_Static;
          goto LAB_148c8aea3;
        }
      }
      else {
        if ((local_168 == (longlong *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        iVar9 = (**(code **)(*local_168 + 0x50))();
        if (iVar9 == 8) {
          if ((local_168 == (longlong *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            uVar7 = (*pcVar2)();
            return (bool)uVar7;
          }
          uVar12 = (**(code **)(*local_168 + 0x40))();
          local_b8 = uVar12;
          if ((local_168 == (longlong *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            uVar7 = (*pcVar2)();
            return (bool)uVar7;
          }
          local_c0 = (**(code **)(*local_168 + 0x48))();
          local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_148.ArrayNum = 0;
          local_148.ArrayMax = 0;
          uVar15 = (int)local_c0 * (int)uVar12;
          if ((int)uVar15 < 1) {
            if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
            }
          }
          else {
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar15,&local_148.AllocatorInstance,&local_148.ArrayNum,
                       &local_148.ArrayMax);
          }
          if ((local_168 == (longlong *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            uVar7 = (*pcVar2)();
            return (bool)uVar7;
          }
          FVar3.Data = local_148.AllocatorInstance.Data;
          iVar9 = local_148.ArrayNum * 4;
          if ((iVar9 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            uVar7 = (*pcVar2)();
            return (bool)uVar7;
          }
          local_d0 = 0;
          local_e0 = (void *)0x0;
          sStack_d8 = 0;
          cVar8 = (**(code **)(*local_168 + 0x38))(local_168,1,8);
          if ((cVar8 != '\0') &&
             ((sStack_d8 == (longlong)iVar9 ||
              (bVar6 = `IImageWrapper::GetRaw'::__l6::<lambda_1>::operator()(local_158), bVar6)))) {
            memcpy(FVar3.Data,local_e0,(longlong)iVar9);
            if (local_e0 != (void *)0x0) {
              FMemory::Free(local_e0);
            }
            if ((param_2->Data).ArrayNum < 2) {
              pFVar13 = FPaths::GetBaseFilename(&local_48,param_1,true);
              ::FString::operator=(param_2,pFVar13);
              if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_48.Data.AllocatorInstance.Data);
              }
            }
            ::FString::FString(&local_128,L"");
            if ((FFunctionalTestBase::bIsFunctionalTestRunning == false) ||
               (param_5 == (UObject *)0x0)) goto LAB_148c8b339;
            bVar6 = false;
            pUVar14 = UEngine::GetWorldFromContextObject(GEngine,param_5,LogAndReturnNull);
            if (pUVar14 == (UWorld *)0x0) {
              pFVar13 = ::FString::FString(&local_38,L"UnknownMap");
              bVar6 = true;
              bVar18 = false;
              bVar4 = false;
              if (&local_128 != pFVar13) goto LAB_148c8b23c;
LAB_148c8b271:
              if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_38.Data.AllocatorInstance.Data);
              }
            }
            else {
              local_c8 = (FName)pUVar14->_padding_;
              ::FName::ToString(&local_c8,&local_88);
              pFVar13 = &local_88;
              bVar4 = true;
LAB_148c8b23c:
              bVar18 = bVar4;
              if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_128.Data.AllocatorInstance.Data);
              }
              local_128.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
              (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_128.Data.ArrayNum = (pFVar13->Data).ArrayNum;
              local_128.Data.ArrayMax = (pFVar13->Data).ArrayMax;
              (pFVar13->Data).ArrayNum = 0;
              (pFVar13->Data).ArrayMax = 0;
              if (bVar6) goto LAB_148c8b271;
            }
            if ((bVar18) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
               ) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            FVar3.Data = FFunctionalTestBase::ActiveTestName.Data.AllocatorInstance.Data;
            lVar19 = (longlong)FFunctionalTestBase::ActiveTestName.Data.ArrayNum;
            local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_118.Data.ArrayNum = FFunctionalTestBase::ActiveTestName.Data.ArrayNum;
            if (FFunctionalTestBase::ActiveTestName.Data.ArrayNum == 0) {
              local_118.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,FFunctionalTestBase::ActiveTestName.Data.ArrayNum,0,
                         (ForAnyElementType *)&local_118,
                         FFunctionalTestBase::ActiveTestName.Data.ArrayNum,&local_118.Data.ArrayMax)
              ;
              memcpy(local_118.Data.AllocatorInstance.Data,FVar3.Data,lVar19 * 2);
            }
            ::FString::ConcatCF(&local_b0,L".",&local_118);
            iVar9 = local_b0.Data.ArrayNum + -1;
            if (local_b0.Data.ArrayNum == 0) {
              iVar9 = 0;
            }
            ::FString::AppendChars(&local_128,(wchar_t *)local_b0.Data.AllocatorInstance.Data,iVar9)
            ;
            if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0.Data.AllocatorInstance.Data);
            }
            if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_118.Data.AllocatorInstance.Data);
            }
LAB_148c8b339:
            RequestImageComparison
                      (param_2,(int)local_b8,(int)local_c0,&local_148,param_3,&local_128,param_4);
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
            }
            if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.AllocatorInstance.Data);
            }
            if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_160);
            if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_138.Data.AllocatorInstance.Data);
            }
            pFVar1 = (param_1->Data).AllocatorInstance.Data;
            if (pFVar1 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar1);
            }
            pFVar1 = (param_2->Data).AllocatorInstance.Data;
            if (pFVar1 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar1);
            }
            pFVar1 = (param_4->Data).AllocatorInstance.Data;
            if (pFVar1 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar1);
            }
            return true;
          }
          if (local_e0 != (void *)0x0) {
            FMemory::Free(local_e0);
          }
          if (1 < (byte)AutomationFunctionLibrary._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&AutomationFunctionLibrary);
          }
          if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.AllocatorInstance.Data);
          }
        }
        else if (1 < (byte)AutomationFunctionLibrary._0_1_) {
          if ((local_168 == (longlong *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            uVar7 = (*pcVar2)();
            return (bool)uVar7;
          }
          iVar9 = (**(code **)(*local_168 + 0x50))();
          local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_108.Data.ArrayNum = 0;
          local_108.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_108,iVar9);
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&AutomationFunctionLibrary);
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    else if (1 < (byte)AutomationFunctionLibrary._0_1_) {
      pFVar16 = &::LOG_Static;
LAB_148c8aea3:
      UE::Logging::Private::BasicLog<2>(pFVar16,(FLogCategoryBase *)&AutomationFunctionLibrary);
    }
    if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_160);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
LAB_148c8b442:
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return false;
}

// DisableStatGroup @ 148c8d100

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UAutomationBlueprintFunctionLibrary::DisableStatGroup(UObject *param_1,FName param_2)

{
  FName *pFVar1;
  FGameThreadStatsData *pFVar2;
  code *pcVar3;
  FLatestGameThreadStatsData *pFVar4;
  FString *pFVar5;
  FString *pFVar6;
  APlayerController *pAVar7;
  FString *pFVar8;
  FName *pFVar9;
  ForAnyElementType FVar10;
  FName local_res10;
  FName local_res18;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_res10 = param_2;
  pFVar4 = FLatestGameThreadStatsData::Get();
  pFVar2 = pFVar4->Latest;
  if (pFVar2 == (FGameThreadStatsData *)0x0) {
LAB_148c8d1da:
    pAVar7 = UGameplayStatics::GetPlayerController(param_1,0);
    if (pAVar7 != (APlayerController *)0x0) {
      pcVar3 = *(code **)(pAVar7->_padding_ + 0xe00);
      pFVar5 = ::FString::FString(&local_28,L" -nodisplay");
      pFVar6 = ::FName::ToString(&local_res10,&local_38);
      pFVar8 = ::FString::FString(&local_48,L"stat ");
      ::FString::ConcatFF(&local_68,pFVar8,pFVar6);
      ::FString::ConcatFF(&local_78,&local_68,pFVar5);
      (*pcVar3)(pAVar7,&local_58,&local_78,0);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pFVar5 = ::FName::ToString(&local_res10,&local_58);
    pFVar6 = ::FString::FString(&local_68,L"STATGROUP_");
    ::FString::ConcatFF(&local_78,pFVar6,pFVar5);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar10.Data = local_78.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res18,(wchar_t *)FVar10.Data,FNAME_Find);
    pFVar9 = (FName *)(pFVar2->GroupNames).AllocatorInstance.Data;
    pFVar1 = pFVar9 + (pFVar2->GroupNames).ArrayNum;
    for (; pFVar9 != pFVar1; pFVar9 = pFVar9 + 1) {
      if (*pFVar9 == local_res18) {
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        goto LAB_148c8d1da;
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// EnableStatGroup @ 148c8d3f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UAutomationBlueprintFunctionLibrary::EnableStatGroup(UObject *param_1,FName param_2)

{
  FName *pFVar1;
  FGameThreadStatsData *pFVar2;
  code *pcVar3;
  FLatestGameThreadStatsData *pFVar4;
  FString *pFVar5;
  FString *pFVar6;
  APlayerController *pAVar7;
  FString *pFVar8;
  FName *pFVar9;
  ForAnyElementType FVar10;
  FName local_res10;
  FName local_res18;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_res10 = param_2;
  pFVar4 = FLatestGameThreadStatsData::Get();
  pFVar2 = pFVar4->Latest;
  if (pFVar2 != (FGameThreadStatsData *)0x0) {
    pFVar5 = ::FName::ToString(&local_res10,&local_58);
    pFVar6 = ::FString::FString(&local_68,L"STATGROUP_");
    ::FString::ConcatFF(&local_78,pFVar6,pFVar5);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar10.Data = local_78.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res18,(wchar_t *)FVar10.Data,FNAME_Find);
    pFVar9 = (FName *)(pFVar2->GroupNames).AllocatorInstance.Data;
    pFVar1 = pFVar9 + (pFVar2->GroupNames).ArrayNum;
    for (; pFVar9 != pFVar1; pFVar9 = pFVar9 + 1) {
      if (*pFVar9 == local_res18) {
        if (local_78.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
        return;
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  pAVar7 = UGameplayStatics::GetPlayerController(param_1,0);
  if (pAVar7 != (APlayerController *)0x0) {
    pcVar3 = *(code **)(pAVar7->_padding_ + 0xe00);
    pFVar5 = ::FString::FString(&local_28,L" -nodisplay");
    pFVar6 = ::FName::ToString(&local_res10,&local_38);
    pFVar8 = ::FString::FString(&local_48,L"stat ");
    ::FString::ConcatFF(&local_68,pFVar8,pFVar6);
    ::FString::ConcatFF(&local_78,&local_68,pFVar5);
    (*pcVar3)(pAVar7,&local_58,&local_78,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// FinishLoadingBeforeScreenshot @ 148c8e950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UAutomationBlueprintFunctionLibrary::FinishLoadingBeforeScreenshot(void)

{
  int iVar1;
  longlong lVar2;
  UEngine *this;
  UClass *pUVar3;
  UWorld *this_00;
  FStreamingManagerCollection *pFVar4;
  
  FlushAsyncLoading(-1);
  this = GEngine;
  if (GEngine != (UEngine *)0x0) {
    pUVar3 = Z_Construct_UClass_UGameEngine_NoRegister();
    lVar2 = this->_padding_;
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      this_00 = UGameEngine::GetGameWorld((UGameEngine *)this);
      if (this_00 != (UWorld *)0x0) {
        UWorld::FlushLevelStreaming(this_00,Full);
      }
    }
  }
  UTexture::ForceUpdateTextureStreaming();
  pFVar4 = IStreamingManager::Get();
                    /* WARNING: Could not recover jumptable at 0x000148c8e9c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar4->_padding_ + 0x18))(pFVar4,0);
  return;
}

// GetAutomationScreenshotSize @ 148c8fea0

TIntPoint<int> __cdecl
UAutomationBlueprintFunctionLibrary::GetAutomationScreenshotSize
          (FAutomationScreenshotOptions *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  UObject *pUVar5;
  code *pcVar6;
  TConsoleVariableData<int> *pTVar7;
  TConsoleVariableData<int> *pTVar8;
  bool bVar9;
  int iVar10;
  UClass *this;
  TIntPoint<int> TVar11;
  double *in_RDX;
  int iVar12;
  int iVar13;
  double dVar14;
  
  this = Z_Construct_UClass_UAutomationTestSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pTVar7 = CVarAutomationScreenshotResolutionWidth.Ref;
  pUVar5 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  iVar3 = *(int *)&pUVar5[0x14].field_0x24;
  iVar4 = *(int *)&pUVar5[0x14].field_0x20;
  iVar10 = iVar3;
  if (iVar4 < iVar3) {
    iVar10 = iVar4;
  }
  iVar13 = 0x500;
  iVar12 = 0x2d0;
  if (0 < iVar10) {
    iVar13 = iVar4;
    iVar12 = iVar3;
  }
  dVar1 = *in_RDX;
  dVar2 = in_RDX[1];
  dVar14 = dVar1;
  if (dVar2 <= dVar1) {
    dVar14 = dVar2;
  }
  if (dVar14 <= 0.0) {
    bVar9 = IsInParallelGameThread();
    if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
      pcVar6 = (code *)swi(3);
      TVar11.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar6)();
      return (TIntPoint<int>)TVar11.field0_0x0;
    }
    pTVar8 = CVarAutomationScreenshotResolutionHeight.Ref;
    iVar3 = pTVar7->ShadowedValue[0];
    bVar9 = IsInParallelGameThread();
    if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
      pcVar6 = (code *)swi(3);
      TVar11.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar6)();
      return (TIntPoint<int>)TVar11.field0_0x0;
    }
    if (0 < iVar3) {
      iVar13 = iVar3;
    }
    if (0 < pTVar8->ShadowedValue[0]) {
      iVar12 = pTVar8->ShadowedValue[0];
    }
  }
  else {
    iVar13 = (int)(longlong)dVar1;
    iVar12 = (int)(longlong)dVar2;
  }
  *(int *)((longlong)&(param_1->Resolution).field0_0x0 + 4) = iVar12;
  *(int *)&(param_1->Resolution).field0_0x0 = iVar13;
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// GetDefaultScreenshotOptionsForGameplay @ 148c90770

FAutomationScreenshotOptions * __cdecl
UAutomationBlueprintFunctionLibrary::GetDefaultScreenshotOptionsForGameplay
          (FAutomationScreenshotOptions *__return_storage_ptr__,EComparisonTolerance param_1,
          float param_2)

{
  __return_storage_ptr__->FrameDelay = 5;
  (__return_storage_ptr__->Resolution).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Resolution).field0_0x0._s_0.Y = 0.0;
  __return_storage_ptr__->bOverride_OverrideTimeTo = false;
  __return_storage_ptr__->OverrideTimeTo = 0.0;
  __return_storage_ptr__->bDisableNoisyRenderingFeatures = true;
  __return_storage_ptr__->bDisableTonemapping = true;
  (__return_storage_ptr__->ViewSettings).field0_0x0.DebugPtr = (UAutomationViewSettings *)0x0;
  (__return_storage_ptr__->VisualizeBuffer).ComparisonIndex = 0;
  (__return_storage_ptr__->VisualizeBuffer).Number = 0;
  __return_storage_ptr__->Delay = param_2;
  (__return_storage_ptr__->ToleranceAmount).Red = '\0';
  (__return_storage_ptr__->ToleranceAmount).Green = '\0';
  (__return_storage_ptr__->ToleranceAmount).Blue = '\0';
  (__return_storage_ptr__->ToleranceAmount).Alpha = '\0';
  (__return_storage_ptr__->ToleranceAmount).MinBrightness = '\0';
  (__return_storage_ptr__->ToleranceAmount).MaxBrightness = 0xff;
  __return_storage_ptr__->MaximumLocalError = 0.1;
  __return_storage_ptr__->MaximumGlobalError = 0.02;
  __return_storage_ptr__->bIgnoreColors = false;
  __return_storage_ptr__->bAllowEmulatingSplitscreen = true;
  __return_storage_ptr__->Tolerance = param_1;
  __return_storage_ptr__->bIgnoreAntiAliasing = true;
  if (param_1 != Zero) {
    if (param_1 == Low) {
      (__return_storage_ptr__->ToleranceAmount).Red = '\x10';
      (__return_storage_ptr__->ToleranceAmount).Green = '\x10';
      (__return_storage_ptr__->ToleranceAmount).Blue = '\x10';
      (__return_storage_ptr__->ToleranceAmount).Alpha = '\x10';
      (__return_storage_ptr__->ToleranceAmount).MinBrightness = '\x10';
      (__return_storage_ptr__->ToleranceAmount).MaxBrightness = 0xf0;
    }
    else {
      if (param_1 == Medium) {
        (__return_storage_ptr__->ToleranceAmount).Red = '\x18';
        (__return_storage_ptr__->ToleranceAmount).Green = '\x18';
        (__return_storage_ptr__->ToleranceAmount).Blue = '\x18';
        (__return_storage_ptr__->ToleranceAmount).Alpha = '\x18';
        (__return_storage_ptr__->ToleranceAmount).MinBrightness = '\x18';
        (__return_storage_ptr__->ToleranceAmount).MaxBrightness = 0xdc;
        return __return_storage_ptr__;
      }
      if (param_1 == High) {
        (__return_storage_ptr__->ToleranceAmount).Red = ' ';
        (__return_storage_ptr__->ToleranceAmount).Green = ' ';
        (__return_storage_ptr__->ToleranceAmount).Blue = ' ';
        (__return_storage_ptr__->ToleranceAmount).Alpha = ' ';
        (__return_storage_ptr__->ToleranceAmount).MinBrightness = '@';
        (__return_storage_ptr__->ToleranceAmount).MaxBrightness = '`';
        return __return_storage_ptr__;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetDefaultScreenshotOptionsForRendering @ 148c90820

FAutomationScreenshotOptions * __cdecl
UAutomationBlueprintFunctionLibrary::GetDefaultScreenshotOptionsForRendering
          (FAutomationScreenshotOptions *__return_storage_ptr__,EComparisonTolerance param_1,
          float param_2)

{
  __return_storage_ptr__->FrameDelay = 5;
  (__return_storage_ptr__->Resolution).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Resolution).field0_0x0._s_0.Y = 0.0;
  __return_storage_ptr__->bOverride_OverrideTimeTo = false;
  __return_storage_ptr__->OverrideTimeTo = 0.0;
  __return_storage_ptr__->bDisableNoisyRenderingFeatures = true;
  __return_storage_ptr__->bDisableTonemapping = true;
  (__return_storage_ptr__->ViewSettings).field0_0x0.DebugPtr = (UAutomationViewSettings *)0x0;
  (__return_storage_ptr__->VisualizeBuffer).ComparisonIndex = 0;
  (__return_storage_ptr__->VisualizeBuffer).Number = 0;
  __return_storage_ptr__->Delay = param_2;
  (__return_storage_ptr__->ToleranceAmount).Red = '\0';
  (__return_storage_ptr__->ToleranceAmount).Green = '\0';
  (__return_storage_ptr__->ToleranceAmount).Blue = '\0';
  (__return_storage_ptr__->ToleranceAmount).Alpha = '\0';
  (__return_storage_ptr__->ToleranceAmount).MinBrightness = '\0';
  (__return_storage_ptr__->ToleranceAmount).MaxBrightness = 0xff;
  __return_storage_ptr__->MaximumLocalError = 0.1;
  __return_storage_ptr__->MaximumGlobalError = 0.02;
  __return_storage_ptr__->bIgnoreColors = false;
  __return_storage_ptr__->bAllowEmulatingSplitscreen = true;
  __return_storage_ptr__->Tolerance = param_1;
  __return_storage_ptr__->bIgnoreAntiAliasing = true;
  if (param_1 != Zero) {
    if (param_1 == Low) {
      (__return_storage_ptr__->ToleranceAmount).Red = '\x10';
      (__return_storage_ptr__->ToleranceAmount).Green = '\x10';
      (__return_storage_ptr__->ToleranceAmount).Blue = '\x10';
      (__return_storage_ptr__->ToleranceAmount).Alpha = '\x10';
      (__return_storage_ptr__->ToleranceAmount).MinBrightness = '\x10';
      (__return_storage_ptr__->ToleranceAmount).MaxBrightness = 0xf0;
    }
    else {
      if (param_1 == Medium) {
        (__return_storage_ptr__->ToleranceAmount).Red = '\x18';
        (__return_storage_ptr__->ToleranceAmount).Green = '\x18';
        (__return_storage_ptr__->ToleranceAmount).Blue = '\x18';
        (__return_storage_ptr__->ToleranceAmount).Alpha = '\x18';
        (__return_storage_ptr__->ToleranceAmount).MinBrightness = '\x18';
        (__return_storage_ptr__->ToleranceAmount).MaxBrightness = 0xdc;
        return __return_storage_ptr__;
      }
      if (param_1 == High) {
        (__return_storage_ptr__->ToleranceAmount).Red = ' ';
        (__return_storage_ptr__->ToleranceAmount).Green = ' ';
        (__return_storage_ptr__->ToleranceAmount).Blue = ' ';
        (__return_storage_ptr__->ToleranceAmount).Alpha = ' ';
        (__return_storage_ptr__->ToleranceAmount).MinBrightness = '@';
        (__return_storage_ptr__->ToleranceAmount).MaxBrightness = '`';
        return __return_storage_ptr__;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetEditorActiveViewportViewMode @ 148c90b50

EViewModeIndex __cdecl UAutomationBlueprintFunctionLibrary::GetEditorActiveViewportViewMode(void)

{
  return VMI_Unknown;
}

// GetEditorActiveViewportWireframeOpacity @ 148c90b60

float __cdecl UAutomationBlueprintFunctionLibrary::GetEditorActiveViewportWireframeOpacity(void)

{
  return 0.0;
}

// GetPrivateStaticClass @ 148c91740

UClass * __cdecl UAutomationBlueprintFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationBlueprintFunctionLibrary.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"AutomationBlueprintFunctionLibrary",
               &Z_Registration_Info_UClass_UAutomationBlueprintFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUAutomationBlueprintFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAutomationBlueprintFunctionLibrary>,
               InternalVTableHelperCtorCaller<UAutomationBlueprintFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationBlueprintFunctionLibrary.InnerSingleton;
}

// GetStatCallCount @ 148c926c0

float __cdecl UAutomationBlueprintFunctionLibrary::GetStatCallCount(FName param_1)

{
  FLatestGameThreadStatsData *pFVar1;
  TTuple<FName,TStatMessage<EComplexStatField>_const_*> *pTVar2;
  
  pFVar1 = FLatestGameThreadStatsData::Get();
  if (pFVar1->Latest != (FGameThreadStatsData *)0x0) {
    pTVar2 = TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                     *)&pFVar1->Latest->NameToStatMap,param_1);
    if ((pTVar2 != (TTuple<FName,TStatMessage<EComplexStatField>_const_*> *)0x0) &&
       (*(longlong *)&pTVar2->field_0x8 != 0)) {
      return (float)(*(longlong *)(*(longlong *)&pTVar2->field_0x8 + 8) >> 0x20 & 0xffffffff);
    }
  }
  return 0.0;
}

// GetStatExcAverage @ 148c92720

float __cdecl UAutomationBlueprintFunctionLibrary::GetStatExcAverage(FName param_1)

{
  longlong lVar1;
  FLatestGameThreadStatsData *pFVar2;
  TTuple<FName,TStatMessage<EComplexStatField>_const_*> *pTVar3;
  ulonglong uVar4;
  
  pFVar2 = FLatestGameThreadStatsData::Get();
  if (((pFVar2->Latest != (FGameThreadStatsData *)0x0) &&
      (pTVar3 = TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                        *)&pFVar2->Latest->NameToStatMap,param_1),
      pTVar3 != (TTuple<FName,TStatMessage<EComplexStatField>_const_*> *)0x0)) &&
     (lVar1 = *(longlong *)&pTVar3->field_0x8, lVar1 != 0)) {
    if ((*(uint *)(lVar1 + 0x44) & 0x100000) == 0) {
      uVar4 = *(ulonglong *)(lVar1 + 0x28);
    }
    else {
      uVar4 = (ulonglong)*(uint *)(lVar1 + 0x28);
    }
    return (float)((double)uVar4 * FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000
                  );
  }
  return 0.0;
}

// GetStatExcMax @ 148c927c0

float __cdecl UAutomationBlueprintFunctionLibrary::GetStatExcMax(FName param_1)

{
  longlong lVar1;
  FLatestGameThreadStatsData *pFVar2;
  TTuple<FName,TStatMessage<EComplexStatField>_const_*> *pTVar3;
  ulonglong uVar4;
  
  pFVar2 = FLatestGameThreadStatsData::Get();
  if (((pFVar2->Latest != (FGameThreadStatsData *)0x0) &&
      (pTVar3 = TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                        *)&pFVar2->Latest->NameToStatMap,param_1),
      pTVar3 != (TTuple<FName,TStatMessage<EComplexStatField>_const_*> *)0x0)) &&
     (lVar1 = *(longlong *)&pTVar3->field_0x8, lVar1 != 0)) {
    if ((*(uint *)(lVar1 + 0x44) & 0x100000) == 0) {
      uVar4 = *(ulonglong *)(lVar1 + 0x30);
    }
    else {
      uVar4 = (ulonglong)*(uint *)(lVar1 + 0x30);
    }
    return (float)((double)uVar4 * FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000
                  );
  }
  return 0.0;
}

// GetStatIncAverage @ 148c92860

float __cdecl UAutomationBlueprintFunctionLibrary::GetStatIncAverage(FName param_1)

{
  longlong lVar1;
  FLatestGameThreadStatsData *pFVar2;
  TTuple<FName,TStatMessage<EComplexStatField>_const_*> *pTVar3;
  ulonglong uVar4;
  
  pFVar2 = FLatestGameThreadStatsData::Get();
  if (((pFVar2->Latest != (FGameThreadStatsData *)0x0) &&
      (pTVar3 = TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                        *)&pFVar2->Latest->NameToStatMap,param_1),
      pTVar3 != (TTuple<FName,TStatMessage<EComplexStatField>_const_*> *)0x0)) &&
     (lVar1 = *(longlong *)&pTVar3->field_0x8, lVar1 != 0)) {
    if ((*(uint *)(lVar1 + 0x44) & 0x100000) == 0) {
      uVar4 = *(ulonglong *)(lVar1 + 8);
    }
    else {
      uVar4 = (ulonglong)*(uint *)(lVar1 + 8);
    }
    return (float)((double)uVar4 * FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000
                  );
  }
  return 0.0;
}

// GetStatIncMax @ 148c92900

float __cdecl UAutomationBlueprintFunctionLibrary::GetStatIncMax(FName param_1)

{
  longlong lVar1;
  FLatestGameThreadStatsData *pFVar2;
  TTuple<FName,TStatMessage<EComplexStatField>_const_*> *pTVar3;
  ulonglong uVar4;
  
  pFVar2 = FLatestGameThreadStatsData::Get();
  if (((pFVar2->Latest != (FGameThreadStatsData *)0x0) &&
      (pTVar3 = TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                        *)&pFVar2->Latest->NameToStatMap,param_1),
      pTVar3 != (TTuple<FName,TStatMessage<EComplexStatField>_const_*> *)0x0)) &&
     (lVar1 = *(longlong *)&pTVar3->field_0x8, lVar1 != 0)) {
    if ((*(uint *)(lVar1 + 0x44) & 0x100000) == 0) {
      uVar4 = *(ulonglong *)(lVar1 + 0x10);
    }
    else {
      uVar4 = (ulonglong)*(uint *)(lVar1 + 0x10);
    }
    return (float)((double)uVar4 * FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000
                  );
  }
  return 0.0;
}

// SetEditorActiveViewportViewMode @ 148c9bc20

void __cdecl
UAutomationBlueprintFunctionLibrary::SetEditorActiveViewportViewMode(EViewModeIndex param_1)

{
  return;
}

// SetEditorActiveViewportWireframeOpacity @ 148c9bc30

void __cdecl
UAutomationBlueprintFunctionLibrary::SetEditorActiveViewportWireframeOpacity(float param_1)

{
  return;
}

// SetEditorViewportViewMode @ 148c9bc40

void __cdecl UAutomationBlueprintFunctionLibrary::SetEditorViewportViewMode(EViewModeIndex param_1)

{
  return;
}

// SetEditorViewportVisualizeBuffer @ 148c9bc50

void __cdecl UAutomationBlueprintFunctionLibrary::SetEditorViewportVisualizeBuffer(FName param_1)

{
  return;
}

// SetScalabilityQualityLevelRelativeToMax @ 148c9bf40

void __cdecl
UAutomationBlueprintFunctionLibrary::SetScalabilityQualityLevelRelativeToMax
          (UObject *param_1,int param_2)

{
  FQualityLevels local_68;
  
  local_68.CPUBenchmarkResults = -1.0;
  local_68.CPUBenchmarkSteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.CPUBenchmarkSteps.ArrayNum = 0;
  local_68.CPUBenchmarkSteps.ArrayMax = 0;
  local_68.GPUBenchmarkSteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.GPUBenchmarkSteps.ArrayNum = 0;
  local_68.GPUBenchmarkSteps.ArrayMax = 0;
  local_68.GPUBenchmarkResults = -1.0;
  Scalability::FQualityLevels::SetDefaults(&local_68);
  Scalability::FQualityLevels::SetFromSingleQualityLevelRelativeToMax(&local_68,param_2);
  Scalability::SetQualityLevels(&local_68,true);
  if (local_68.GPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.GPUBenchmarkSteps.AllocatorInstance.Data);
  }
  if (local_68.CPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.CPUBenchmarkSteps.AllocatorInstance.Data);
  }
  return;
}

// SetScalabilityQualityToEpic @ 148c9bfc0

void __cdecl UAutomationBlueprintFunctionLibrary::SetScalabilityQualityToEpic(UObject *param_1)

{
  FQualityLevels local_68;
  
  local_68.CPUBenchmarkResults = -1.0;
  local_68.CPUBenchmarkSteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.CPUBenchmarkSteps.ArrayNum = 0;
  local_68.CPUBenchmarkSteps.ArrayMax = 0;
  local_68.GPUBenchmarkSteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.GPUBenchmarkSteps.ArrayNum = 0;
  local_68.GPUBenchmarkSteps.ArrayMax = 0;
  local_68.GPUBenchmarkResults = -1.0;
  Scalability::FQualityLevels::SetDefaults(&local_68);
  Scalability::FQualityLevels::SetFromSingleQualityLevelRelativeToMax(&local_68,0);
  Scalability::SetQualityLevels(&local_68,true);
  if (local_68.GPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.GPUBenchmarkSteps.AllocatorInstance.Data);
  }
  if (local_68.CPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.CPUBenchmarkSteps.AllocatorInstance.Data);
  }
  return;
}

// SetScalabilityQualityToLow @ 148c9c040

void __cdecl UAutomationBlueprintFunctionLibrary::SetScalabilityQualityToLow(UObject *param_1)

{
  FQualityLevels local_68;
  
  local_68.CPUBenchmarkResults = -1.0;
  local_68.CPUBenchmarkSteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.CPUBenchmarkSteps.ArrayNum = 0;
  local_68.CPUBenchmarkSteps.ArrayMax = 0;
  local_68.GPUBenchmarkSteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.GPUBenchmarkSteps.ArrayNum = 0;
  local_68.GPUBenchmarkSteps.ArrayMax = 0;
  local_68.GPUBenchmarkResults = -1.0;
  Scalability::FQualityLevels::SetDefaults(&local_68);
  Scalability::FQualityLevels::SetFromSingleQualityLevel(&local_68,0);
  Scalability::SetQualityLevels(&local_68,true);
  if (local_68.GPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.GPUBenchmarkSteps.AllocatorInstance.Data);
  }
  if (local_68.CPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.CPUBenchmarkSteps.AllocatorInstance.Data);
  }
  return;
}

// SetTestTelemetryStorage @ 148c9c0c0

void __cdecl UAutomationBlueprintFunctionLibrary::SetTestTelemetryStorage(FString *param_1)

{
  FAutomationTestBase *pFVar1;
  FScriptContainerElement *pFVar2;
  FAutomationTestFramework *pFVar3;
  
  if (GIsAutomationTesting) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    if (pFVar1 != (FAutomationTestBase *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x78))(pFVar1,param_1);
    }
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// StaticRegisterNativesUAutomationBlueprintFunctionLibrary @ 148c9d410

void __cdecl
UAutomationBlueprintFunctionLibrary::StaticRegisterNativesUAutomationBlueprintFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x23;
  local_18.DataPtr = Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TakeAutomationScreenshot @ 148c9d640

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
UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshot
          (UObject *param_1,FLatentActionInfo *param_2,FString *param_3,FString *param_4,
          FAutomationScreenshotOptions *param_5)

{
  FScriptContainerElement *_Src;
  UWorld *this;
  FLatentActionManager *this_00;
  FTakeScreenshotAfterTimeLatentAction *pFVar1;
  FAutomationScreenshotOptions *pFVar2;
  FTakeScreenshotAfterTimeLatentAction *pFVar3;
  longlong lVar4;
  FFirstItemPredicate local_88 [8];
  FString local_80;
  FAutomationScreenshotOptions local_70;
  
  if (GIsAutomationTesting) {
    local_80.Data.ArrayNum = (param_3->Data).ArrayNum;
    lVar4 = (longlong)local_80.Data.ArrayNum;
    pFVar3 = (FTakeScreenshotAfterTimeLatentAction *)0x0;
    _Src = (param_3->Data).AllocatorInstance.Data;
    local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_80.Data.ArrayNum == 0) {
      local_80.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_80.Data.ArrayNum,0,(ForAnyElementType *)&local_80,local_80.Data.ArrayNum,
                 &local_80.Data.ArrayMax);
      memcpy(local_80.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
    }
    if (local_80.Data.ArrayNum < 2) {
      ::FString::operator=(&local_80,L"Undefined");
      if (2 < (byte)AutomationFunctionLibrary._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&AutomationFunctionLibrary);
      }
    }
    this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
    if (this != (UWorld *)0x0) {
      this_00 = UWorld::GetLatentActionManager(this);
      pFVar1 = FLatentActionManager::
               FindExistingActionWithPredicate<FTakeScreenshotAfterTimeLatentAction,_FLatentActionManager::FindExistingAction<FTakeScreenshotAfterTimeLatentAction>_::__l2::FFirstItemPredicate>
                         (this_00,(param_2->CallbackTarget).field0_0x0.DebugPtr,param_2->UUID,
                          local_88);
      if (pFVar1 == (FTakeScreenshotAfterTimeLatentAction *)0x0) {
        pFVar1 = ::operator_new(0xa0);
        if (pFVar1 != (FTakeScreenshotAfterTimeLatentAction *)0x0) {
          pFVar2 = FAutomationScreenshotOptions::FAutomationScreenshotOptions(&local_70,param_5);
          pFVar3 = FTakeScreenshotAfterTimeLatentAction::FTakeScreenshotAfterTimeLatentAction
                             (pFVar1,param_2,&local_80,param_4,pFVar2);
        }
        FLatentActionManager::AddNewAction
                  (this_00,(param_2->CallbackTarget).field0_0x0.DebugPtr,param_2->UUID,
                   (FPendingLatentAction *)pFVar3);
      }
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
      return;
    }
  }
  else if (4 < (byte)AutomationFunctionLibrary._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&AutomationFunctionLibrary);
  }
  return;
}

// TakeAutomationScreenshotAtCamera @ 148c9d7f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshotAtCamera
          (UObject *param_1,FLatentActionInfo *param_2,ACameraActor *param_3,FString *param_4,
          FString *param_5,FAutomationScreenshotOptions *param_6)

{
  ITextData *pIVar1;
  FMessageLog *pFVar2;
  FText *pFVar3;
  UGameViewportClient *pUVar4;
  UObject *pUVar5;
  APlayerController *pAVar6;
  UWorld *this;
  FLatentActionManager *this_00;
  FTakeScreenshotAfterTimeLatentAction *pFVar7;
  FAutomationScreenshotOptions *pFVar8;
  FTakeScreenshotAfterTimeLatentAction *pFVar9;
  FName local_res18 [2];
  FText local_a8;
  TSharedRef<FTokenizedMessage,1> local_98;
  FString local_88;
  FAutomationScreenshotOptions local_78;
  
  if (param_3 == (ACameraActor *)0x0) {
    ::FName::FName(local_res18,"PIE");
    pFVar2 = FMessageLog::FMessageLog((FMessageLog *)&local_78,local_res18);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_a8,L"Automation",L"CameraRequired",
                        L"A camera is required to TakeAutomationScreenshotAtCamera");
    FMessageLog::Error(pFVar2,&local_98,pFVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_98.SharedReferenceCount.ReferenceController._4_4_,
                        local_98.SharedReferenceCount.ReferenceController._0_4_));
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog((FMessageLog *)&local_78);
  }
  else {
    pUVar4 = AutomationCommon::GetAnyGameViewportClient();
    if (pUVar4 == (UGameViewportClient *)0x0) {
      ::FName::FName(local_res18,"PIE");
      pFVar2 = FMessageLog::FMessageLog((FMessageLog *)&local_78,local_res18);
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         (&local_a8,L"Automation",L"GameViewportRequired",
                          L"No game viewport found in World to TakeAutomationScreenshotAtCamera. Use a delay or change Net mode to Standalone."
                         );
      FMessageLog::Error(pFVar2,&local_98,pFVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_98.SharedReferenceCount.ReferenceController._4_4_,
                          local_98.SharedReferenceCount.ReferenceController._0_4_));
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      FMessageLog::~FMessageLog((FMessageLog *)&local_78);
    }
    else {
      pUVar5 = (UObject *)(**(code **)(pUVar4->_padding_ + 0x180))(pUVar4);
      pAVar6 = UGameplayStatics::GetPlayerController(pUVar5,0);
      if (pAVar6 == (APlayerController *)0x0) {
        ::FName::FName(local_res18,"PIE");
        pFVar2 = FMessageLog::FMessageLog((FMessageLog *)&local_78,local_res18);
        pFVar3 = FText::AsLocalizable_Advanced_LocText
                           (&local_a8,L"Automation",L"PlayerRequired",
                            L"A player controller is required to TakeAutomationScreenshotAtCamera");
        FMessageLog::Error(pFVar2,&local_98,pFVar3);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)
                   CONCAT44(local_98.SharedReferenceCount.ReferenceController._4_4_,
                            local_98.SharedReferenceCount.ReferenceController._0_4_));
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
        }
        FMessageLog::~FMessageLog((FMessageLog *)&local_78);
      }
      else {
        local_98.SharedReferenceCount.ReferenceController._4_4_ = local_a8._12_4_ & 0xfffffffe;
        pAVar6->bAutoManageActiveCameraTarget = false;
        pIVar1 = (ITextData *)
                 CONCAT35((int3)((ulonglong)local_a8.TextData.Reference >> 0x28),0x100000000);
        local_a8._12_4_ = local_98.SharedReferenceCount.ReferenceController._4_4_;
        local_a8.Flags = 0x40000000;
        local_a8.TextData.Reference._4_4_ = (undefined4)((ulonglong)pIVar1 >> 0x20);
        local_98.Object._0_4_ = 0;
        local_98.Object._4_4_ = local_a8.TextData.Reference._4_4_;
        local_98.SharedReferenceCount.ReferenceController._0_4_ = 0x40000000;
        local_a8.TextData.Reference = pIVar1;
        (**(code **)(pAVar6->_padding_ + 0xef8))(pAVar6,param_3,&local_98);
        local_res18[0] = (FName)param_3->_padding_;
        ::FName::ToString(local_res18,&local_88);
        if (1 < (param_4->Data).ArrayNum) {
          ::FString::operator=(&local_88,param_4);
        }
        this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
        if (this != (UWorld *)0x0) {
          local_res18[0] = (FName)this->_padding_;
          ::FName::ToString(local_res18,(FString *)&local_98);
          ::FString::PrintfImpl((FString *)&local_a8,L"%s_%s");
          if ((ITextData *)local_88.Data.AllocatorInstance.Data != (ITextData *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          pFVar9 = (FTakeScreenshotAfterTimeLatentAction *)0x0;
          local_88.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)local_a8.TextData.Reference;
          local_88.Data.ArrayNum = local_a8.Flags;
          local_88.Data.ArrayMax = local_a8._12_4_;
          local_a8.Flags = 0;
          local_a8._12_4_ = 0;
          local_a8.TextData.Reference = (ITextData *)0x0;
          if ((void *)CONCAT44(local_98.Object._4_4_,local_98.Object._0_4_) != (void *)0x0) {
            FMemory::Free((void *)CONCAT44(local_98.Object._4_4_,local_98.Object._0_4_));
          }
          this_00 = UWorld::GetLatentActionManager(this);
          pFVar7 = FLatentActionManager::
                   FindExistingActionWithPredicate<FTakeScreenshotAfterTimeLatentAction,_FLatentActionManager::FindExistingAction<FTakeScreenshotAfterTimeLatentAction>_::__l2::FFirstItemPredicate>
                             (this_00,(param_2->CallbackTarget).field0_0x0.DebugPtr,param_2->UUID,
                              (FFirstItemPredicate *)local_res18);
          if (pFVar7 == (FTakeScreenshotAfterTimeLatentAction *)0x0) {
            pFVar7 = ::operator_new(0xa0);
            if (pFVar7 != (FTakeScreenshotAfterTimeLatentAction *)0x0) {
              pFVar8 = FAutomationScreenshotOptions::FAutomationScreenshotOptions(&local_78,param_6)
              ;
              pFVar9 = FTakeScreenshotAfterTimeLatentAction::FTakeScreenshotAfterTimeLatentAction
                                 (pFVar7,param_2,&local_88,param_5,pFVar8);
            }
            FLatentActionManager::AddNewAction
                      (this_00,(param_2->CallbackTarget).field0_0x0.DebugPtr,param_2->UUID,
                       (FPendingLatentAction *)pFVar9);
          }
        }
        if ((ITextData *)local_88.Data.AllocatorInstance.Data != (ITextData *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// TakeAutomationScreenshotInternal @ 148c9db40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshotInternal
          (UObject *param_1,FString *param_2,FString *param_3,FAutomationScreenshotOptions *param_4)

{
  FAutomationScreenshotTaker *this;
  FAutomationScreenshotOptions *pFVar1;
  UWorld *pUVar2;
  FAutomationScreenshotOptions local_68;
  
  FinishLoadingBeforeScreenshot();
  this = ::operator_new(0x260);
  if (this != (FAutomationScreenshotTaker *)0x0) {
    pFVar1 = FAutomationScreenshotOptions::FAutomationScreenshotOptions(&local_68,param_4);
    if (param_1 == (UObject *)0x0) {
      pUVar2 = (UWorld *)0x0;
    }
    else {
      pUVar2 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    }
    FAutomationScreenshotTaker::FAutomationScreenshotTaker(this,pUVar2,param_2,param_3,pFVar1);
  }
  FScreenshotRequest::RequestScreenshot(false);
  return true;
}

// TakeAutomationScreenshotOfUI @ 148c9dbf0

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
UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshotOfUI
          (UObject *param_1,FLatentActionInfo *param_2,FString *param_3,
          FAutomationScreenshotOptions *param_4)

{
  TObjectPtr<UObject>_u_0 TVar1;
  bool bVar2;
  UWorld *this;
  FLatentActionManager *this_00;
  FTakeScreenshotAfterTimeLatentAction *pFVar3;
  pmf_a438a6a3 pVar4;
  FAutomationTestFramework *pFVar5;
  FFirstItemPredicate local_18 [8];
  TObjectPtr<UObject>_u_0 local_10;
  
  bVar2 = TakeAutomationScreenshotOfUI_Immediate(param_1,param_3,param_4);
  if (bVar2) {
    this = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    this_00 = UWorld::GetLatentActionManager(this);
    pFVar3 = FLatentActionManager::
             FindExistingActionWithPredicate<FTakeScreenshotAfterTimeLatentAction,_FLatentActionManager::FindExistingAction<FTakeScreenshotAfterTimeLatentAction>_::__l2::FFirstItemPredicate>
                       (this_00,(param_2->CallbackTarget).field0_0x0.DebugPtr,param_2->UUID,local_18
                       );
    if (pFVar3 == (FTakeScreenshotAfterTimeLatentAction *)0x0) {
      pVar4 = (pmf_a438a6a3)::operator_new(0x20);
      if (pVar4 == (pmf_a438a6a3)0x0) {
        pVar4 = (pmf_a438a6a3)0x0;
      }
      else {
        *(undefined ***)pVar4 = &___7FWaitForScreenshotComparisonLatentAction__6B_;
        *(FName *)((longlong)pVar4 + 8) = param_2->ExecutionFunction;
        *(int *)((longlong)pVar4 + 0x10) = param_2->Linkage;
        TVar1 = (TObjectPtr<UObject>_u_0)(param_2->CallbackTarget).field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (TVar1.DebugPtr != (UObject *)0x0) {
            UE::GC::MarkAsReachable(TVar1.DebugPtr);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar1.DebugPtr != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(TVar1.DebugPtr);
          }
        }
        *(undefined8 *)((longlong)pVar4 + 0x14) = 0;
        local_10 = TVar1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar1.DebugPtr != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(TVar1.DebugPtr);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)pVar4 + 0x14),(FObjectPtr)&local_10);
        *(undefined1 *)((longlong)pVar4 + 0x1c) = 0;
        pFVar5 = FAutomationTestFramework::Get();
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        AddRaw<FWaitForScreenshotComparisonLatentAction>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &pFVar5->OnScreenshotTakenAndCompared,
                   (FWaitForScreenshotComparisonLatentAction *)&local_10.ObjectPtr,pVar4);
      }
      FLatentActionManager::AddNewAction
                (this_00,(param_2->CallbackTarget).field0_0x0.DebugPtr,param_2->UUID,
                 (FPendingLatentAction *)pVar4);
    }
  }
  return;
}

// TakeAutomationScreenshotOfUI_Immediate @ 148c9dd50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshotOfUI_Immediate
          (UObject *param_1,FString *param_2,FAutomationScreenshotOptions *param_3)

{
  code *pcVar1;
  FSlateApplication *this;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  UWorld *pUVar6;
  UWorld *this_00;
  UGameViewportClient *pUVar7;
  FAutomationScreenshotTaker *this_01;
  FAutomationScreenshotOptions *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  FName local_res20;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_238;
  TSharedPtr<SViewport,1> local_228;
  TIntVector3<int>_u_0 local_218;
  TSharedRef<SWidget,1> local_208;
  FString local_1f8;
  FString local_1e8;
  FAutomationScreenshotData local_1d8;
  FAutomationScreenshotOptions local_88;
  
  uVar10 = 0;
  local_res20 = (FName)((ulonglong)local_res20 & 0xffffffff00000000);
  FinishLoadingBeforeScreenshot();
  pUVar6 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (pUVar6 != (UWorld *)0x0) {
    this_00 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    pUVar7 = UWorld::GetGameViewport(this_00);
    if (pUVar7 != (UGameViewportClient *)0x0) {
      UGameViewportClient::GetGameViewportWidget(pUVar7,&local_228);
      if (local_228.Object != (SViewport *)0x0) {
        local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_238.ArrayNum = 0;
        local_238.ArrayMax = 0;
        if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentApplication.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                               ,0x141,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        bVar3 = IsInGameThread();
        if ((((!bVar3) && (bVar3 = IsInSlateThread(), !bVar3)) &&
            (bVar3 = (*IsInAsyncLoadingThread)(), !bVar3)) &&
           ((bVar3 = IsInParallelLoadingThread(), !bVar3 &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                                ,0x142,L""), bVar3)))) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        this = FSlateApplication::CurrentApplication.Object;
        if ((local_228.Object == (SViewport *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        FVar2.ReferenceController = local_228.SharedReferenceCount.ReferenceController;
        if (local_228.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_228.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_228.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if ((local_228.Object == (SViewport *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        local_208.Object = (SWidget *)local_228.Object;
        local_208.SharedReferenceCount.ReferenceController = FVar2.ReferenceController;
        if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar2.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar3 = FSlateApplication::TakeScreenshot
                          (this,&local_208,&local_238,(TIntVector3<int> *)&local_218._s_0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_208.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar2.ReferenceController);
        if (bVar3) {
          uVar11 = uVar10;
          if (0 < local_238.ArrayNum) {
            do {
              uVar9 = (uint)uVar10;
              uVar5 = 0;
              if ((int)uVar9 < local_238.ArrayNum) {
                uVar5 = ~uVar9 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar1 = (code *)swi(3);
                uVar4 = (*pcVar1)();
                return (bool)uVar4;
              }
              uVar10 = (ulonglong)(uVar9 + 1);
              local_238.AllocatorInstance.Data[uVar11 + 3] = (FScriptContainerElement)0xff;
              uVar11 = uVar11 + 4;
            } while ((int)(uVar9 + 1) < local_238.ArrayNum);
          }
          this_01 = ::operator_new(0x260);
          if (this_01 != (FAutomationScreenshotTaker *)0x0) {
            pFVar8 = FAutomationScreenshotOptions::FAutomationScreenshotOptions(&local_88,param_3);
            ::FString::FString(&local_1f8,L"");
            FAutomationScreenshotTaker::FAutomationScreenshotTaker
                      (this_01,pUVar6,param_2,&local_1f8,pFVar8);
            if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
            }
          }
          local_res20 = (FName)pUVar6->_padding_;
          ::FName::ToString(&local_res20,&local_1e8);
          BuildScreenshotData(&local_1d8,&local_1e8,param_2,local_218._s_0.X,local_218._s_0.Y);
          if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
          }
          local_1d8.ToleranceRed = (param_3->ToleranceAmount).Red;
          local_1d8.MaximumLocalError = param_3->MaximumLocalError;
          local_1d8.MaximumGlobalError = param_3->MaximumGlobalError;
          local_1d8.ToleranceGreen = (param_3->ToleranceAmount).Green;
          local_1d8.ToleranceBlue = (param_3->ToleranceAmount).Blue;
          local_1d8.ToleranceAlpha = (param_3->ToleranceAmount).Alpha;
          local_1d8.ToleranceMinBrightness = (param_3->ToleranceAmount).MinBrightness;
          local_1d8.ToleranceMaxBrightness = (param_3->ToleranceAmount).MaxBrightness;
          local_1d8.bIgnoreAntiAliasing = param_3->bIgnoreAntiAliasing;
          local_1d8.bIgnoreColors = param_3->bIgnoreColors;
          local_1d8.bHasComparisonRules = true;
          pUVar7 = AutomationCommon::GetAnyGameViewportClient();
          if (pUVar7 != (UGameViewportClient *)0x0) {
            TMulticastDelegate<void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
            ::Broadcast(&UGameViewportClient::ScreenshotCapturedDelegate,local_218._s_0.X,
                        local_218._s_0.Y,&local_238);
          }
          FAutomationScreenshotData::~FAutomationScreenshotData(&local_1d8);
          if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_228.SharedReferenceCount.ReferenceController);
          return true;
        }
        if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_228.SharedReferenceCount.ReferenceController);
    }
  }
  return false;
}

// TakeHighResScreenshot @ 148c9e180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAutomationEditorTask * __cdecl
UAutomationBlueprintFunctionLibrary::TakeHighResScreenshot
          (int param_1,int param_2,FString *param_3,ACameraActor *param_4,bool param_5,bool param_6,
          EComparisonTolerance param_7,FString *param_8,float param_9,bool param_10)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UAutomationEditorTask *pUVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  FGCObject local_b8;
  UAutomationEditorTask *local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = UAutomationEditorTask::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  local_98._8_8_ = pUVar2;
  pUVar4 = (UAutomationEditorTask *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar5 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  local_b8.bCanMakeInitialReferences = false;
  local_b8.bReferenceAdded = false;
  local_b8._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject(&local_b8);
  local_b8._padding_ = (longlong)&___7__TGCObjectScopeGuard___CBVUObject____6B_;
  local_a8 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UAutomationEditorTask *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  local_b8._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject(&local_b8);
  pFVar1 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_8->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return pUVar4;
}

// execAddExpectedLogError @ 148ca2900

void __cdecl
UAutomationBlueprintFunctionLibrary::execAddExpectedLogError
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAutomationTestBase *this;
  int iVar2;
  void *_Src;
  FAutomationTestFramework *pFVar3;
  FString *pFVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  int local_res10 [2];
  int local_res20 [2];
  int local_68 [2];
  FString local_60;
  void *local_50;
  undefined8 local_48;
  FString local_40;
  
  local_50 = (void *)0x0;
  local_48 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_68[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
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
  bVar6 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  _Src = local_50;
  iVar2 = local_68[0];
  bVar7 = local_res20[0] != 0;
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)local_48;
  local_60.Data.ArrayNum = (int)local_48;
  if ((int)local_48 == 0) {
    local_60.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_48,0,(ForAnyElementType *)&local_60,(int)local_48,
               &local_60.Data.ArrayMax);
    memcpy(local_60.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
  }
  pFVar3 = FAutomationTestFramework::Get();
  this = pFVar3->CurrentTest;
  if (this != (FAutomationTestBase *)0x0) {
    pFVar4 = ::FString::FString(&local_40,&local_60);
    FAutomationTestBase::AddExpectedError(this,pFVar4,bVar6 ^ Contains,iVar2,bVar7);
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}

// execAddExpectedLogMessage @ 148ca2b10

void __cdecl
UAutomationBlueprintFunctionLibrary::execAddExpectedLogMessage
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAutomationTestBase *this;
  int iVar2;
  void *_Src;
  FAutomationTestFramework *pFVar3;
  FString *pFVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  int local_res10 [2];
  int local_res20 [2];
  int local_68 [2];
  FString local_60;
  void *local_50;
  undefined8 local_48;
  FString local_40;
  
  local_50 = (void *)0x0;
  local_48 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_68[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
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
  bVar6 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  _Src = local_50;
  iVar2 = local_68[0];
  bVar7 = local_res20[0] != 0;
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)local_48;
  local_60.Data.ArrayNum = (int)local_48;
  if ((int)local_48 == 0) {
    local_60.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_48,0,(ForAnyElementType *)&local_60,(int)local_48,
               &local_60.Data.ArrayMax);
    memcpy(local_60.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
  }
  pFVar3 = FAutomationTestFramework::Get();
  this = pFVar3->CurrentTest;
  if (this != (FAutomationTestBase *)0x0) {
    pFVar4 = ::FString::FString(&local_40,&local_60);
    FAutomationTestBase::AddExpectedMessage(this,pFVar4,bVar6 ^ Contains,iVar2,bVar7);
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}

// execAddExpectedPlainLogError @ 148ca2d20

void __cdecl
UAutomationBlueprintFunctionLibrary::execAddExpectedPlainLogError
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAutomationTestBase *this;
  int iVar2;
  void *_Src;
  FAutomationTestFramework *pFVar3;
  FString *pFVar4;
  longlong lVar5;
  bool bVar6;
  int local_res10 [4];
  int local_res20 [2];
  FString local_58;
  void *local_48;
  undefined8 local_40;
  FString local_38;
  
  local_48 = (void *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
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
  _Src = local_48;
  iVar2 = local_res20[0];
  bVar6 = local_res10[0] != 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)local_40;
  local_58.Data.ArrayNum = (int)local_40;
  if ((int)local_40 == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_40,0,(ForAnyElementType *)&local_58,(int)local_40,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
  }
  pFVar3 = FAutomationTestFramework::Get();
  this = pFVar3->CurrentTest;
  if (this != (FAutomationTestBase *)0x0) {
    pFVar4 = ::FString::FString(&local_38,&local_58);
    FAutomationTestBase::AddExpectedErrorPlain(this,pFVar4,bVar6 ^ Contains,iVar2);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execAddExpectedPlainLogMessage @ 148ca2ed0

void __cdecl
UAutomationBlueprintFunctionLibrary::execAddExpectedPlainLogMessage
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAutomationTestBase *this;
  int iVar2;
  void *_Src;
  FAutomationTestFramework *pFVar3;
  FString *pFVar4;
  longlong lVar5;
  bool bVar6;
  int local_res10 [4];
  int local_res20 [2];
  FString local_58;
  void *local_48;
  undefined8 local_40;
  FString local_38;
  
  local_48 = (void *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
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
  _Src = local_48;
  iVar2 = local_res20[0];
  bVar6 = local_res10[0] != 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)local_40;
  local_58.Data.ArrayNum = (int)local_40;
  if ((int)local_40 == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_40,0,(ForAnyElementType *)&local_58,(int)local_40,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
  }
  pFVar3 = FAutomationTestFramework::Get();
  this = pFVar3->CurrentTest;
  if (this != (FAutomationTestBase *)0x0) {
    pFVar4 = ::FString::FString(&local_38,&local_58);
    FAutomationTestBase::AddExpectedMessagePlain(this,pFVar4,bVar6 ^ Contains,iVar2);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execAddTestError @ 148ca3260

void __cdecl
UAutomationBlueprintFunctionLibrary::execAddTestError
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAutomationTestBase *pFVar2;
  FAutomationTestFramework *pFVar3;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FAutomationTestFramework::Get();
  pFVar2 = pFVar3->CurrentTest;
  if (pFVar2 != (FAutomationTestBase *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,&local_18,0);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execAddTestInfo @ 148ca3310

void __cdecl
UAutomationBlueprintFunctionLibrary::execAddTestInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAutomationTestBase *pFVar2;
  FAutomationTestFramework *pFVar3;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FAutomationTestFramework::Get();
  pFVar2 = pFVar3->CurrentTest;
  if (pFVar2 != (FAutomationTestBase *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x50))(pFVar2,&local_18,0,0);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execAddTestTelemetryData @ 148ca33c0

void __cdecl
UAutomationBlueprintFunctionLibrary::execAddTestTelemetryData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAutomationTestBase *pFVar2;
  float fVar3;
  void *pvVar4;
  FAutomationTestFramework *pFVar5;
  longlong lVar6;
  float local_res10 [2];
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38 = (void *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pvVar4 = local_38;
  local_48.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar6 = (longlong)(int)local_30;
  local_40 = (int)local_30;
  if ((int)local_30 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_30,0,&local_48,(int)local_30,&local_3c);
    memcpy(local_48.Data,pvVar4,lVar6 * 2);
  }
  pvVar4 = local_28;
  fVar3 = local_res10[0];
  lVar6 = (longlong)(int)local_20;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = (int)local_20;
  if ((int)local_20 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_20,0,&local_58,(int)local_20,&local_4c);
    memcpy(local_58.Data,pvVar4,lVar6 * 2);
  }
  if (GIsAutomationTesting != false) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    if (pFVar2 != (FAutomationTestBase *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x70))(pFVar2,&local_58,(double)fVar3,&local_48);
    }
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execAddTestWarning @ 148ca35f0

void __cdecl
UAutomationBlueprintFunctionLibrary::execAddTestWarning
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAutomationTestBase *pFVar2;
  FAutomationTestFramework *pFVar3;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FAutomationTestFramework::Get();
  pFVar2 = pFVar3->CurrentTest;
  if (pFVar2 != (FAutomationTestBase *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x48))(pFVar2,&local_18,0);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execAreAutomatedTestsRunning @ 148ca3750

void __cdecl
UAutomationBlueprintFunctionLibrary::execAreAutomatedTestsRunning
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = GIsAutomationTesting;
  return;
}

// execAutomationWaitForLoading @ 148ca78b0

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
UAutomationBlueprintFunctionLibrary::execAutomationWaitForLoading
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  UObject *pUVar3;
  int iVar4;
  UObject *pUVar5;
  UWorld *this;
  FLatentActionManager *this_00;
  FWaitForLoadingToFinish *pFVar6;
  FWaitForLoadingToFinish *pFVar7;
  undefined1 local_res10 [16];
  FAutomationWaitForLoadingOptions local_res20 [8];
  FFirstItemPredicate local_68 [8];
  UObject *local_60;
  undefined8 local_58;
  FName local_50;
  UObject *local_48;
  FLatentActionInfo local_40;
  
  pFVar7 = (FWaitForLoadingToFinish *)0x0;
  local_60 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_58 = 0xffffffffffffffff;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  local_48 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar5 = local_48;
  uVar2 = local_res10[0];
  iVar4 = local_58._4_4_;
  local_40.UUID = local_58._4_4_;
  local_40.CallbackTarget.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)local_48;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_40.Linkage = (int)local_58;
  local_40.ExecutionFunction = local_50;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_48);
  }
  pUVar3 = local_60;
  local_res20[0].WaitForReplicationToSettle = (bool)uVar2;
  this = UEngine::GetWorldFromContextObject(GEngine,local_60,LogAndReturnNull);
  if (this != (UWorld *)0x0) {
    this_00 = UWorld::GetLatentActionManager(this);
    pFVar6 = FLatentActionManager::
             FindExistingActionWithPredicate<FWaitForLoadingToFinish,_FLatentActionManager::FindExistingAction<FWaitForLoadingToFinish>_::__l2::FFirstItemPredicate>
                       (this_00,pUVar5,iVar4,local_68);
    if (pFVar6 == (FWaitForLoadingToFinish *)0x0) {
      pFVar6 = ::operator_new(0x48);
      if (pFVar6 != (FWaitForLoadingToFinish *)0x0) {
        pFVar7 = FWaitForLoadingToFinish::FWaitForLoadingToFinish
                           (pFVar6,&local_40,pUVar3,local_res20);
      }
      FLatentActionManager::AddNewAction(this_00,pUVar5,iVar4,(FPendingLatentAction *)pFVar7);
    }
  }
  return;
}

// execCompareImageAgainstReference @ 148ca8060

void __cdecl
UAutomationBlueprintFunctionLibrary::execCompareImageAgainstReference
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EComparisonTolerance EVar2;
  UObject *pUVar3;
  void *pvVar4;
  bool bVar5;
  longlong lVar6;
  EComparisonTolerance local_res10 [8];
  UObject *local_res18;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_68 = (void *)0x0;
  local_60 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78 = (void *)0x0;
  local_70 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = Zero;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_88 = (void *)0x0;
  local_80 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pvVar4 = local_88;
  pUVar3 = local_res18;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar6 = (longlong)(int)local_80;
  local_58.Data.ArrayNum = (int)local_80;
  if ((int)local_80 == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_80,0,(ForAnyElementType *)&local_58,(int)local_80,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,pvVar4,lVar6 * 2);
  }
  pvVar4 = local_78;
  EVar2 = local_res10[0];
  lVar6 = (longlong)(int)local_70;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = (int)local_70;
  if ((int)local_70 == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_70,0,(ForAnyElementType *)&local_48,(int)local_70,
               &local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,pvVar4,lVar6 * 2);
  }
  pvVar4 = local_68;
  lVar6 = (longlong)(int)local_60;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = (int)local_60;
  if ((int)local_60 == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_60,0,(ForAnyElementType *)&local_38,(int)local_60,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,pvVar4,lVar6 * 2);
  }
  bVar5 = CompareImageAgainstReference(&local_38,&local_48,EVar2,&local_58,pUVar3);
  *(bool *)param_3 = bVar5;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// execDisableStatGroup @ 148ca8340

void __cdecl
UAutomationBlueprintFunctionLibrary::execDisableStatGroup
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10 [2];
  UObject *local_res20;
  
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
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  DisableStatGroup(local_res20,local_res10[0]);
  return;
}

// execEnableStatGroup @ 148ca8400

void __cdecl
UAutomationBlueprintFunctionLibrary::execEnableStatGroup
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10 [2];
  UObject *local_res20;
  
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
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EnableStatGroup(local_res20,local_res10[0]);
  return;
}

// execFinishLoadingBeforeScreenshot @ 148ca8590

void __cdecl
UAutomationBlueprintFunctionLibrary::execFinishLoadingBeforeScreenshot
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FinishLoadingBeforeScreenshot();
  return;
}

// execGetDefaultScreenshotOptionsForGameplay @ 148ca86d0

void __cdecl
UAutomationBlueprintFunctionLibrary::execGetDefaultScreenshotOptionsForGameplay
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EComparisonTolerance local_res10 [8];
  float local_res20 [2];
  TVector2<double>_u_0 local_68;
  float local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined8 local_38;
  undefined8 local_30;
  EComparisonTolerance local_28;
  undefined4 local_27;
  undefined2 local_23;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined2 local_17;
  
  local_res10[0] = Zero;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_54 = 5;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0x101;
  local_38 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_30 = 0;
  local_27 = 0;
  local_23 = 0xff00;
  local_20 = 0x3dcccccd;
  local_1c = 0x3ca3d70a;
  local_17 = 0x100;
  local_28 = local_res10[0];
  local_18 = 1;
  local_68._s_0.X = 0.0;
  local_68._s_0.Y = 0.0;
  local_58 = local_res20[0];
  if (local_res10[0] != Zero) {
    if (local_res10[0] == Low) {
      local_27 = 0x10101010;
      local_23 = 0xf010;
    }
    else if (local_res10[0] == Medium) {
      local_27 = 0x18181818;
      local_23 = 0xdc18;
    }
    else if (local_res10[0] == High) {
      local_27 = 0x20202020;
      local_23 = 0x6040;
    }
  }
  FAutomationScreenshotOptions::operator=(param_3,(FAutomationScreenshotOptions *)&local_68._s_0);
  return;
}

// execGetDefaultScreenshotOptionsForRendering @ 148ca8840

void __cdecl
UAutomationBlueprintFunctionLibrary::execGetDefaultScreenshotOptionsForRendering
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EComparisonTolerance local_res10 [8];
  float local_res20 [2];
  TVector2<double>_u_0 local_68;
  float local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined8 local_38;
  undefined8 local_30;
  EComparisonTolerance local_28;
  undefined4 local_27;
  undefined2 local_23;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined2 local_17;
  
  local_res10[0] = Zero;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_54 = 5;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0x101;
  local_38 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_30 = 0;
  local_27 = 0;
  local_23 = 0xff00;
  local_20 = 0x3dcccccd;
  local_1c = 0x3ca3d70a;
  local_17 = 0x100;
  local_28 = local_res10[0];
  local_18 = 1;
  local_68._s_0.X = 0.0;
  local_68._s_0.Y = 0.0;
  local_58 = local_res20[0];
  if (local_res10[0] != Zero) {
    if (local_res10[0] == Low) {
      local_27 = 0x10101010;
      local_23 = 0xf010;
    }
    else if (local_res10[0] == Medium) {
      local_27 = 0x18181818;
      local_23 = 0xdc18;
    }
    else if (local_res10[0] == High) {
      local_27 = 0x20202020;
      local_23 = 0x6040;
    }
  }
  FAutomationScreenshotOptions::operator=(param_3,(FAutomationScreenshotOptions *)&local_68._s_0);
  return;
}

// execGetEditorActiveViewportViewMode @ 148ca89b0

void __cdecl
UAutomationBlueprintFunctionLibrary::execGetEditorActiveViewportViewMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0xff;
  return;
}

// execGetEditorActiveViewportWireframeOpacity @ 148ca89d0

void __cdecl
UAutomationBlueprintFunctionLibrary::execGetEditorActiveViewportWireframeOpacity
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetStatCallCount @ 148ca8a00

void __cdecl
UAutomationBlueprintFunctionLibrary::execGetStatCallCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FLatestGameThreadStatsData *pFVar3;
  TTuple<FName,TStatMessage<EComplexStatField>_const_*> *pTVar4;
  float fVar5;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FLatestGameThreadStatsData::Get();
  if (pFVar3->Latest != (FGameThreadStatsData *)0x0) {
    pTVar4 = TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                     *)&pFVar3->Latest->NameToStatMap,FVar2);
    if ((pTVar4 != (TTuple<FName,TStatMessage<EComplexStatField>_const_*> *)0x0) &&
       (*(longlong *)&pTVar4->field_0x8 != 0)) {
      fVar5 = (float)(*(longlong *)(*(longlong *)&pTVar4->field_0x8 + 8) >> 0x20 & 0xffffffff);
      goto LAB_148ca8aae;
    }
  }
  fVar5 = 0.0;
LAB_148ca8aae:
  *(float *)param_3 = fVar5;
  return;
}

// execGetStatExcAverage @ 148ca8ad0

void __cdecl
UAutomationBlueprintFunctionLibrary::execGetStatExcAverage
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  FName FVar3;
  FLatestGameThreadStatsData *pFVar4;
  TTuple<FName,TStatMessage<EComplexStatField>_const_*> *pTVar5;
  ulonglong uVar6;
  float fVar7;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FLatestGameThreadStatsData::Get();
  if (((pFVar4->Latest == (FGameThreadStatsData *)0x0) ||
      (pTVar5 = TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                        *)&pFVar4->Latest->NameToStatMap,FVar3),
      pTVar5 == (TTuple<FName,TStatMessage<EComplexStatField>_const_*> *)0x0)) ||
     (lVar2 = *(longlong *)&pTVar5->field_0x8, lVar2 == 0)) {
    fVar7 = 0.0;
  }
  else {
    if ((*(uint *)(lVar2 + 0x44) & 0x100000) == 0) {
      uVar6 = *(ulonglong *)(lVar2 + 0x28);
    }
    else {
      uVar6 = (ulonglong)*(uint *)(lVar2 + 0x28);
    }
    fVar7 = (float)((double)uVar6 * FGenericPlatformTime::SecondsPerCycle64 *
                   __real_408f400000000000);
  }
  *(float *)param_3 = fVar7;
  return;
}

// execGetStatExcMax @ 148ca8bd0

void __cdecl
UAutomationBlueprintFunctionLibrary::execGetStatExcMax
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  FName FVar3;
  FLatestGameThreadStatsData *pFVar4;
  TTuple<FName,TStatMessage<EComplexStatField>_const_*> *pTVar5;
  ulonglong uVar6;
  float fVar7;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FLatestGameThreadStatsData::Get();
  if (((pFVar4->Latest == (FGameThreadStatsData *)0x0) ||
      (pTVar5 = TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                        *)&pFVar4->Latest->NameToStatMap,FVar3),
      pTVar5 == (TTuple<FName,TStatMessage<EComplexStatField>_const_*> *)0x0)) ||
     (lVar2 = *(longlong *)&pTVar5->field_0x8, lVar2 == 0)) {
    fVar7 = 0.0;
  }
  else {
    if ((*(uint *)(lVar2 + 0x44) & 0x100000) == 0) {
      uVar6 = *(ulonglong *)(lVar2 + 0x30);
    }
    else {
      uVar6 = (ulonglong)*(uint *)(lVar2 + 0x30);
    }
    fVar7 = (float)((double)uVar6 * FGenericPlatformTime::SecondsPerCycle64 *
                   __real_408f400000000000);
  }
  *(float *)param_3 = fVar7;
  return;
}

// execGetStatIncAverage @ 148ca8cd0

void __cdecl
UAutomationBlueprintFunctionLibrary::execGetStatIncAverage
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  FName FVar3;
  FLatestGameThreadStatsData *pFVar4;
  TTuple<FName,TStatMessage<EComplexStatField>_const_*> *pTVar5;
  ulonglong uVar6;
  float fVar7;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FLatestGameThreadStatsData::Get();
  if (((pFVar4->Latest == (FGameThreadStatsData *)0x0) ||
      (pTVar5 = TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                        *)&pFVar4->Latest->NameToStatMap,FVar3),
      pTVar5 == (TTuple<FName,TStatMessage<EComplexStatField>_const_*> *)0x0)) ||
     (lVar2 = *(longlong *)&pTVar5->field_0x8, lVar2 == 0)) {
    fVar7 = 0.0;
  }
  else {
    if ((*(uint *)(lVar2 + 0x44) & 0x100000) == 0) {
      uVar6 = *(ulonglong *)(lVar2 + 8);
    }
    else {
      uVar6 = (ulonglong)*(uint *)(lVar2 + 8);
    }
    fVar7 = (float)((double)uVar6 * FGenericPlatformTime::SecondsPerCycle64 *
                   __real_408f400000000000);
  }
  *(float *)param_3 = fVar7;
  return;
}

// execGetStatIncMax @ 148ca8dd0

void __cdecl
UAutomationBlueprintFunctionLibrary::execGetStatIncMax
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  FName FVar3;
  FLatestGameThreadStatsData *pFVar4;
  TTuple<FName,TStatMessage<EComplexStatField>_const_*> *pTVar5;
  ulonglong uVar6;
  float fVar7;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FLatestGameThreadStatsData::Get();
  if (((pFVar4->Latest == (FGameThreadStatsData *)0x0) ||
      (pTVar5 = TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                        *)&pFVar4->Latest->NameToStatMap,FVar3),
      pTVar5 == (TTuple<FName,TStatMessage<EComplexStatField>_const_*> *)0x0)) ||
     (lVar2 = *(longlong *)&pTVar5->field_0x8, lVar2 == 0)) {
    fVar7 = 0.0;
  }
  else {
    if ((*(uint *)(lVar2 + 0x44) & 0x100000) == 0) {
      uVar6 = *(ulonglong *)(lVar2 + 0x10);
    }
    else {
      uVar6 = (ulonglong)*(uint *)(lVar2 + 0x10);
    }
    fVar7 = (float)((double)uVar6 * FGenericPlatformTime::SecondsPerCycle64 *
                   __real_408f400000000000);
  }
  *(float *)param_3 = fVar7;
  return;
}

// execSetEditorActiveViewportViewMode @ 148caa0e0

void __cdecl
UAutomationBlueprintFunctionLibrary::execSetEditorActiveViewportViewMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetEditorActiveViewportWireframeOpacity @ 148caa150

void __cdecl
UAutomationBlueprintFunctionLibrary::execSetEditorActiveViewportWireframeOpacity
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetEditorViewportViewMode @ 148caa1c0

void __cdecl
UAutomationBlueprintFunctionLibrary::execSetEditorViewportViewMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetEditorViewportVisualizeBuffer @ 148caa230

void __cdecl
UAutomationBlueprintFunctionLibrary::execSetEditorViewportVisualizeBuffer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetScalabilityQualityLevelRelativeToMax @ 148caa2b0

void __cdecl
UAutomationBlueprintFunctionLibrary::execSetScalabilityQualityLevelRelativeToMax
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int local_res10 [4];
  undefined8 local_res20;
  FQualityLevels local_68;
  
  local_res20 = 0;
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
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar2 = local_res10[0];
  local_68.CPUBenchmarkResults = -1.0;
  local_68.GPUBenchmarkResults = -1.0;
  local_68.CPUBenchmarkSteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.CPUBenchmarkSteps.ArrayNum = 0;
  local_68.CPUBenchmarkSteps.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.GPUBenchmarkSteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.GPUBenchmarkSteps.ArrayNum = 0;
  local_68.GPUBenchmarkSteps.ArrayMax = 0;
  Scalability::FQualityLevels::SetDefaults(&local_68);
  Scalability::FQualityLevels::SetFromSingleQualityLevelRelativeToMax(&local_68,iVar2);
  Scalability::SetQualityLevels(&local_68,true);
  if (local_68.GPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.GPUBenchmarkSteps.AllocatorInstance.Data);
  }
  if (local_68.CPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.CPUBenchmarkSteps.AllocatorInstance.Data);
  }
  return;
}

// execSetScalabilityQualityToEpic @ 148caa3f0

void __cdecl
UAutomationBlueprintFunctionLibrary::execSetScalabilityQualityToEpic
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10 [3];
  FQualityLevels local_68;
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_68.CPUBenchmarkResults = -1.0;
  local_68.GPUBenchmarkResults = -1.0;
  local_68.CPUBenchmarkSteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.CPUBenchmarkSteps.ArrayNum = 0;
  local_68.CPUBenchmarkSteps.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.GPUBenchmarkSteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.GPUBenchmarkSteps.ArrayNum = 0;
  local_68.GPUBenchmarkSteps.ArrayMax = 0;
  Scalability::FQualityLevels::SetDefaults(&local_68);
  Scalability::FQualityLevels::SetFromSingleQualityLevelRelativeToMax(&local_68,0);
  Scalability::SetQualityLevels(&local_68,true);
  if (local_68.GPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.GPUBenchmarkSteps.AllocatorInstance.Data);
  }
  if (local_68.CPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.CPUBenchmarkSteps.AllocatorInstance.Data);
  }
  return;
}

// execSetScalabilityQualityToLow @ 148caa4e0

void __cdecl
UAutomationBlueprintFunctionLibrary::execSetScalabilityQualityToLow
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10 [3];
  FQualityLevels local_68;
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_68.CPUBenchmarkResults = -1.0;
  local_68.GPUBenchmarkResults = -1.0;
  local_68.CPUBenchmarkSteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.CPUBenchmarkSteps.ArrayNum = 0;
  local_68.CPUBenchmarkSteps.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.GPUBenchmarkSteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.GPUBenchmarkSteps.ArrayNum = 0;
  local_68.GPUBenchmarkSteps.ArrayMax = 0;
  Scalability::FQualityLevels::SetDefaults(&local_68);
  Scalability::FQualityLevels::SetFromSingleQualityLevel(&local_68,0);
  Scalability::SetQualityLevels(&local_68,true);
  if (local_68.GPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.GPUBenchmarkSteps.AllocatorInstance.Data);
  }
  if (local_68.CPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.CPUBenchmarkSteps.AllocatorInstance.Data);
  }
  return;
}

// execSetTestTelemetryStorage @ 148caa5d0

void __cdecl
UAutomationBlueprintFunctionLibrary::execSetTestTelemetryStorage
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAutomationTestBase *pFVar2;
  void *_Src;
  FAutomationTestFramework *pFVar3;
  longlong lVar4;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  _Src = local_18;
  local_28.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_10;
  local_20 = (int)local_10;
  if ((int)local_10 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_10,0,&local_28,(int)local_10,&local_1c);
    memcpy(local_28.Data,_Src,lVar4 * 2);
  }
  if (GIsAutomationTesting != false) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar2 = pFVar3->CurrentTest;
    if (pFVar2 != (FAutomationTestBase *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x78))(pFVar2,&local_28);
    }
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execTakeAutomationScreenshot @ 148caa860

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
UAutomationBlueprintFunctionLibrary::execTakeAutomationScreenshot
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  void *_Src;
  int iVar4;
  UObject *pUVar5;
  UWorld *this;
  FLatentActionManager *this_00;
  FTakeScreenshotAfterTimeLatentAction *pFVar6;
  FAutomationScreenshotOptions *pFVar7;
  FTakeScreenshotAfterTimeLatentAction *pFVar8;
  longlong lVar9;
  TVector2<double>_u_0 *pTVar10;
  FFirstItemPredicate local_res10 [16];
  UObject *local_res20;
  FString local_158;
  void *local_148;
  undefined8 local_140;
  undefined8 local_138;
  FName local_130;
  UObject *local_128;
  FString local_120;
  TVector2<double>_u_0 local_108;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined1 local_c2;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined1 local_b6;
  FLatentActionInfo local_a8;
  FAutomationScreenshotOptions local_90;
  
  pFVar8 = (FTakeScreenshotAfterTimeLatentAction *)0x0;
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_138 = 0xffffffffffffffff;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  local_128 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_148 = (void *)0x0;
  local_140 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.Data.ArrayNum = 0;
  local_120.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_f8 = 0x3e4ccccd;
  local_e8 = 0;
  local_108._s_0.X = 0.0;
  local_108._s_0.Y = 0.0;
  local_f4 = 5;
  local_f0 = 0;
  local_e0 = 0x101;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_c2 = 0xff;
  local_c0 = 0x3dcccccd;
  local_bc = 0x3ca3d70a;
  local_b8 = 1;
  local_b6 = 1;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  pUVar5 = local_128;
  iVar4 = local_138._4_4_;
  pTVar10 = &local_108;
  if ((TVector2<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector2<double>_u_0 *)0x0) {
    pTVar10 = (TVector2<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  local_a8.UUID = local_138._4_4_;
  local_a8.CallbackTarget.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)local_128;
  local_a8.Linkage = (int)local_138;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_a8.ExecutionFunction = local_130;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_128 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_128);
  }
  _Src = local_148;
  pUVar3 = local_res20;
  if (GIsAutomationTesting == false) {
    if (4 < (byte)AutomationFunctionLibrary._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&AutomationFunctionLibrary);
    }
  }
  else {
    lVar9 = (longlong)(int)local_140;
    local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.Data.ArrayNum = (int)local_140;
    if ((int)local_140 == 0) {
      local_158.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_140,0,(ForAnyElementType *)&local_158,(int)local_140,
                 &local_158.Data.ArrayMax);
      memcpy(local_158.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
    }
    if (local_158.Data.ArrayNum < 2) {
      ::FString::operator=(&local_158,L"Undefined");
      if (2 < (byte)AutomationFunctionLibrary._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&AutomationFunctionLibrary);
      }
    }
    this = UEngine::GetWorldFromContextObject(GEngine,pUVar3,LogAndReturnNull);
    if (this != (UWorld *)0x0) {
      this_00 = UWorld::GetLatentActionManager(this);
      pFVar6 = FLatentActionManager::
               FindExistingActionWithPredicate<FTakeScreenshotAfterTimeLatentAction,_FLatentActionManager::FindExistingAction<FTakeScreenshotAfterTimeLatentAction>_::__l2::FFirstItemPredicate>
                         (this_00,pUVar5,iVar4,local_res10);
      if (pFVar6 == (FTakeScreenshotAfterTimeLatentAction *)0x0) {
        pFVar6 = ::operator_new(0xa0);
        if (pFVar6 != (FTakeScreenshotAfterTimeLatentAction *)0x0) {
          pFVar7 = FAutomationScreenshotOptions::FAutomationScreenshotOptions
                             (&local_90,(FAutomationScreenshotOptions *)&pTVar10->_s_0);
          pFVar8 = FTakeScreenshotAfterTimeLatentAction::FTakeScreenshotAfterTimeLatentAction
                             (pFVar6,&local_a8,&local_158,&local_120,pFVar7);
        }
        FLatentActionManager::AddNewAction(this_00,pUVar5,iVar4,(FPendingLatentAction *)pFVar8);
      }
    }
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  if (local_148 != (void *)0x0) {
    FMemory::Free(local_148);
  }
  return;
}

// execTakeAutomationScreenshotAtCamera @ 148caac40

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
UAutomationBlueprintFunctionLibrary::execTakeAutomationScreenshotAtCamera
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ITextData *pIVar2;
  UObject *pUVar3;
  void *_Src;
  uint uVar4;
  int iVar5;
  UObject *pUVar6;
  FMessageLog *pFVar7;
  FText *pFVar8;
  UGameViewportClient *pUVar9;
  UObject *pUVar10;
  APlayerController *pAVar11;
  UWorld *this;
  FLatentActionManager *this_00;
  FTakeScreenshotAfterTimeLatentAction *pFVar12;
  FAutomationScreenshotOptions *pFVar13;
  FTakeScreenshotAfterTimeLatentAction *pFVar14;
  longlong lVar15;
  TVector2<double>_u_0 *pTVar16;
  FName local_res10 [2];
  longlong local_res20;
  FText local_198;
  FString local_188;
  TSharedRef<FTokenizedMessage,1> local_178;
  UObject *local_168;
  void *local_160;
  undefined8 local_158;
  undefined8 local_150;
  FName local_148;
  UObject *local_140;
  FString local_138;
  TVector2<double>_u_0 local_128;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 local_110;
  undefined8 local_108;
  undefined2 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined1 local_e2;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined2 local_d8;
  undefined1 local_d6;
  undefined1 local_c8 [16];
  TObjectPtr<UObject>_u_0 local_b8;
  FAutomationScreenshotOptions local_98;
  
  pFVar14 = (FTakeScreenshotAfterTimeLatentAction *)0x0;
  local_168 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  local_150 = 0xffffffffffffffff;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  local_140 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_160 = (void *)0x0;
  local_158 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_160,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_160);
  }
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Data.ArrayNum = 0;
  local_138.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_118 = 0x3e4ccccd;
  local_108 = 0;
  local_128._s_0.X = 0.0;
  local_128._s_0.Y = 0.0;
  local_114 = 5;
  local_110 = 0;
  local_100 = 0x101;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_e2 = 0xff;
  local_e0 = 0x3dcccccd;
  local_dc = 0x3ca3d70a;
  local_d8 = 1;
  local_d6 = 1;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  pUVar6 = local_140;
  lVar15 = local_res20;
  iVar5 = local_150._4_4_;
  pTVar16 = &local_128;
  if ((TVector2<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector2<double>_u_0 *)0x0) {
    pTVar16 = (TVector2<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  local_c8._4_4_ = local_150._4_4_;
  local_b8.DebugPtr = local_140;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c8._0_4_ = (int)local_150;
  local_c8._8_4_ = local_148.ComparisonIndex.Value;
  local_c8._12_4_ = local_148.Number;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_140 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_140);
  }
  pUVar3 = local_168;
  if (lVar15 == 0) {
    ::FName::FName(local_res10,"PIE");
    pFVar7 = FMessageLog::FMessageLog((FMessageLog *)local_c8,local_res10);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_198,L"Automation",L"CameraRequired",
                        L"A camera is required to TakeAutomationScreenshotAtCamera");
    FMessageLog::Error(pFVar7,&local_178,pFVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_178.SharedReferenceCount.ReferenceController._4_4_,
                        local_178.SharedReferenceCount.ReferenceController._0_4_));
    if (local_198.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog((FMessageLog *)local_c8);
  }
  else {
    pUVar9 = AutomationCommon::GetAnyGameViewportClient();
    if (pUVar9 == (UGameViewportClient *)0x0) {
      ::FName::FName(local_res10,"PIE");
      pFVar7 = FMessageLog::FMessageLog((FMessageLog *)local_c8,local_res10);
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_198,L"Automation",L"GameViewportRequired",
                          L"No game viewport found in World to TakeAutomationScreenshotAtCamera. Use a delay or change Net mode to Standalone."
                         );
      FMessageLog::Error(pFVar7,&local_178,pFVar8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_178.SharedReferenceCount.ReferenceController._4_4_,
                          local_178.SharedReferenceCount.ReferenceController._0_4_));
      if (local_198.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
      }
      FMessageLog::~FMessageLog((FMessageLog *)local_c8);
    }
    else {
      pUVar10 = (UObject *)(**(code **)(pUVar9->_padding_ + 0x180))(pUVar9);
      pAVar11 = UGameplayStatics::GetPlayerController(pUVar10,0);
      if (pAVar11 == (APlayerController *)0x0) {
        ::FName::FName(local_res10,"PIE");
        pFVar7 = FMessageLog::FMessageLog((FMessageLog *)local_c8,local_res10);
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_198,L"Automation",L"PlayerRequired",
                            L"A player controller is required to TakeAutomationScreenshotAtCamera");
        FMessageLog::Error(pFVar7,&local_178,pFVar8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)
                   CONCAT44(local_178.SharedReferenceCount.ReferenceController._4_4_,
                            local_178.SharedReferenceCount.ReferenceController._0_4_));
        if (local_198.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
        }
        FMessageLog::~FMessageLog((FMessageLog *)local_c8);
      }
      else {
        local_178.SharedReferenceCount.ReferenceController._4_4_ = local_198._12_4_ & 0xfffffffe;
        pAVar11->bAutoManageActiveCameraTarget = false;
        pIVar2 = (ITextData *)
                 CONCAT35((int3)((ulonglong)local_198.TextData.Reference >> 0x28),0x100000000);
        local_198._12_4_ = local_178.SharedReferenceCount.ReferenceController._4_4_;
        local_198.Flags = 0x40000000;
        local_198.TextData.Reference._4_4_ = (undefined4)((ulonglong)pIVar2 >> 0x20);
        local_178.Object._0_4_ = 0;
        local_178.Object._4_4_ = local_198.TextData.Reference._4_4_;
        local_178.SharedReferenceCount.ReferenceController._0_4_ = 0x40000000;
        local_198.TextData.Reference = pIVar2;
        (**(code **)(pAVar11->_padding_ + 0xef8))(pAVar11,lVar15,&local_178);
        local_res10[0] = *(FName *)(lVar15 + 0x18);
        ::FName::ToString(local_res10,&local_188);
        _Src = local_160;
        uVar4 = (uint)local_158;
        lVar15 = (longlong)(int)(uint)local_158;
        if (1 < (int)(uint)local_158) {
          local_188.Data.ArrayNum = (uint)local_158;
          if (((uint)local_158 == 0) && (local_188.Data.ArrayMax == 0)) {
            local_188.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,(uint)local_158,local_188.Data.ArrayMax,(ForAnyElementType *)&local_188,
                       (uint)local_158,&local_188.Data.ArrayMax);
            if (uVar4 != 0) {
              memcpy(local_188.Data.AllocatorInstance.Data,_Src,lVar15 * 2);
            }
          }
        }
        this = UEngine::GetWorldFromContextObject(GEngine,pUVar3,LogAndReturnNull);
        if (this != (UWorld *)0x0) {
          local_res10[0] = (FName)this->_padding_;
          ::FName::ToString(local_res10,(FString *)&local_178);
          ::FString::PrintfImpl((FString *)&local_198,L"%s_%s");
          if ((ITextData *)local_188.Data.AllocatorInstance.Data != (ITextData *)0x0) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
          }
          local_188.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)local_198.TextData.Reference;
          local_188.Data.ArrayNum = local_198.Flags;
          local_188.Data.ArrayMax = local_198._12_4_;
          local_198.Flags = 0;
          local_198._12_4_ = 0;
          local_198.TextData.Reference = (ITextData *)0x0;
          if ((void *)CONCAT44(local_178.Object._4_4_,local_178.Object._0_4_) != (void *)0x0) {
            FMemory::Free((void *)CONCAT44(local_178.Object._4_4_,local_178.Object._0_4_));
          }
          this_00 = UWorld::GetLatentActionManager(this);
          pFVar12 = FLatentActionManager::
                    FindExistingActionWithPredicate<FTakeScreenshotAfterTimeLatentAction,_FLatentActionManager::FindExistingAction<FTakeScreenshotAfterTimeLatentAction>_::__l2::FFirstItemPredicate>
                              (this_00,pUVar6,iVar5,(FFirstItemPredicate *)local_res10);
          if (pFVar12 == (FTakeScreenshotAfterTimeLatentAction *)0x0) {
            pFVar12 = ::operator_new(0xa0);
            if (pFVar12 != (FTakeScreenshotAfterTimeLatentAction *)0x0) {
              pFVar13 = FAutomationScreenshotOptions::FAutomationScreenshotOptions
                                  (&local_98,(FAutomationScreenshotOptions *)&pTVar16->_s_0);
              pFVar14 = FTakeScreenshotAfterTimeLatentAction::FTakeScreenshotAfterTimeLatentAction
                                  (pFVar12,(FLatentActionInfo *)local_c8,&local_188,&local_138,
                                   pFVar13);
            }
            FLatentActionManager::AddNewAction(this_00,pUVar6,iVar5,(FPendingLatentAction *)pFVar14)
            ;
          }
        }
        if ((ITextData *)local_188.Data.AllocatorInstance.Data != (ITextData *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (local_160 != (void *)0x0) {
    FMemory::Free(local_160);
  }
  return;
}

// execTakeAutomationScreenshotOfUI @ 148cab2b0

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
UAutomationBlueprintFunctionLibrary::execTakeAutomationScreenshotOfUI
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  UObject *pUVar6;
  bool bVar7;
  UWorld *this;
  FLatentActionManager *this_00;
  FTakeScreenshotAfterTimeLatentAction *pFVar8;
  pmf_a438a6a3 pVar9;
  FAutomationTestFramework *pFVar10;
  TVector2<double>_u_0 *pTVar11;
  UObject *local_res10 [2];
  UObject *local_res20;
  undefined8 local_c8;
  undefined8 local_c0;
  UObject *local_b8;
  FString local_b0;
  TVector2<double>_u_0 local_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_48;
  undefined1 local_46;
  
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
  local_c8 = 0xffffffffffffffff;
  local_c0 = 0;
  local_b8 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.Data.ArrayNum = 0;
  local_b0.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_88 = 0x3e4ccccd;
  local_78 = 0;
  local_98._s_0.X = 0.0;
  local_98._s_0.Y = 0.0;
  local_84 = 5;
  local_80 = 0;
  local_70 = 0x101;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_54 = 0;
  local_52 = 0xff;
  local_50 = 0x3dcccccd;
  local_4c = 0x3ca3d70a;
  local_48 = 1;
  local_46 = 1;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pUVar6 = local_b8;
  uVar5 = local_c0;
  uVar3 = (undefined4)local_c8;
  iVar4 = local_c8._4_4_;
  pTVar11 = &local_98;
  if ((TVector2<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector2<double>_u_0 *)0x0) {
    pTVar11 = (TVector2<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_b8);
  }
  pUVar2 = local_res20;
  bVar7 = TakeAutomationScreenshotOfUI_Immediate
                    (local_res20,&local_b0,(FAutomationScreenshotOptions *)&pTVar11->_s_0);
  if (bVar7) {
    this = (UWorld *)(**(code **)(*(longlong *)pUVar2 + 0x180))(pUVar2);
    this_00 = UWorld::GetLatentActionManager(this);
    pFVar8 = FLatentActionManager::
             FindExistingActionWithPredicate<FTakeScreenshotAfterTimeLatentAction,_FLatentActionManager::FindExistingAction<FTakeScreenshotAfterTimeLatentAction>_::__l2::FFirstItemPredicate>
                       (this_00,pUVar6,iVar4,(FFirstItemPredicate *)local_res10);
    if (pFVar8 == (FTakeScreenshotAfterTimeLatentAction *)0x0) {
      pVar9 = (pmf_a438a6a3)::operator_new(0x20);
      if (pVar9 == (pmf_a438a6a3)0x0) {
        pVar9 = (pmf_a438a6a3)0x0;
      }
      else {
        *(undefined8 *)((longlong)pVar9 + 8) = uVar5;
        *(undefined ***)pVar9 = &___7FWaitForScreenshotComparisonLatentAction__6B_;
        *(undefined4 *)((longlong)pVar9 + 0x10) = uVar3;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar6 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
        }
        *(undefined8 *)((longlong)pVar9 + 0x14) = 0;
        local_res10[0] = pUVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        FWeakObjectPtr::operator=
                  ((FWeakObjectPtr *)((longlong)pVar9 + 0x14),(FObjectPtr)local_res10);
        *(undefined1 *)((longlong)pVar9 + 0x1c) = 0;
        pFVar10 = FAutomationTestFramework::Get();
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        AddRaw<FWaitForScreenshotComparisonLatentAction>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &pFVar10->OnScreenshotTakenAndCompared,
                   (FWaitForScreenshotComparisonLatentAction *)local_res10,pVar9);
      }
      FLatentActionManager::AddNewAction(this_00,pUVar6,iVar4,(FPendingLatentAction *)pVar9);
    }
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  return;
}

// execTakeHighResScreenshot @ 148cab5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UAutomationBlueprintFunctionLibrary::execTakeHighResScreenshot
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *pvVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStackY_168 [32];
  undefined1 local_128 [4];
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110 [2];
  void *local_108;
  undefined8 local_100;
  void *local_f8;
  undefined8 local_f0;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  undefined8 local_c8;
  FGCObject local_c0;
  UObject *local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_124 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_124,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_124);
  }
  local_120 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_f8 = (void *)0x0;
  local_f0 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_c8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_11c = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_11c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_11c);
  }
  local_118 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_128[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
  }
  local_108 = (void *)0x0;
  local_100 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_114 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_114,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_114);
  }
  local_110[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_110,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_110);
  }
  pvVar2 = local_108;
  local_d8.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar6 = (longlong)(int)local_100;
  local_d0 = (int)local_100;
  if ((int)local_100 == 0) {
    local_cc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_100,0,&local_d8,(int)local_100,&local_cc);
    memcpy(local_d8.Data,pvVar2,lVar6 * 2);
  }
  pvVar2 = local_f8;
  lVar6 = (longlong)(int)local_f0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = (int)local_f0;
  if ((int)local_f0 == 0) {
    local_dc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_f0,0,&local_e8,(int)local_f0,&local_dc);
    memcpy(local_e8.Data,pvVar2,lVar6 * 2);
  }
  pUVar3 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = UAutomationEditorTask::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar4);
  local_a8._8_8_ = pUVar3;
  pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar5 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  local_c0.bCanMakeInitialReferences = false;
  local_c0.bReferenceAdded = false;
  local_c0._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject(&local_c0);
  local_c0._padding_ = (longlong)&___7__TGCObjectScopeGuard___CBVUObject____6B_;
  local_b0 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_c0._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject(&local_c0);
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  *(UObject **)param_3 = pUVar3;
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  return;
}

