// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 45

// StaticClass @ 148c70940

UClass * __cdecl UAutomationPerformaceHelper::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationPerformaceHelper.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"AutomationPerformaceHelper",
               &Z_Registration_Info_UClass_UAutomationPerformaceHelper.InnerSingleton,
               StaticRegisterNativesUAutomationPerformaceHelper,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAutomationPerformaceHelper>,
               InternalVTableHelperCtorCaller<UAutomationPerformaceHelper>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationPerformaceHelper.InnerSingleton;
}

// UAutomationPerformaceHelper @ 148c80040

UAutomationPerformaceHelper * __thiscall
UAutomationPerformaceHelper::UAutomationPerformaceHelper
          (UAutomationPerformaceHelper *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAutomationPerformaceHelper__6B_;
  (this->Records).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Records).ArrayNum = 0;
  (this->Records).ArrayMax = 0;
  this->ExternalProfiler = (FFunctionalTestExternalProfiler)0x0;
  (this->OutputFileBase).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputFileBase).Data.ArrayNum = 0;
  (this->OutputFileBase).Data.ArrayMax = 0;
  (this->StartOfTestingTime).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StartOfTestingTime).Data.ArrayNum = 0;
  (this->StartOfTestingTime).Data.ArrayMax = 0;
  return this;
}

// UAutomationPerformaceHelper @ 148c80090

UAutomationPerformaceHelper * __thiscall
UAutomationPerformaceHelper::UAutomationPerformaceHelper(UAutomationPerformaceHelper *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UAutomationPerformaceHelper__6B_;
  (this->Records).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Records).ArrayNum = 0;
  (this->Records).ArrayMax = 0;
  this->bRecordingBasicStats = false;
  this->bRecordingBaselineBasicStats = false;
  this->bRecordingCPUCapture = false;
  this->bRecordingStatsFile = false;
  this->bGPUTraceIfBelowBudget = false;
  this->ExternalProfiler = (FFunctionalTestExternalProfiler)0x0;
  (this->OutputFileBase).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputFileBase).Data.ArrayNum = 0;
  (this->OutputFileBase).Data.ArrayMax = 0;
  (this->StartOfTestingTime).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StartOfTestingTime).Data.ArrayNum = 0;
  (this->StartOfTestingTime).Data.ArrayMax = 0;
  return this;
}

// ~UAutomationPerformaceHelper @ 148c81170

void __thiscall
UAutomationPerformaceHelper::~UAutomationPerformaceHelper(UAutomationPerformaceHelper *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAutomationPerformaceHelper__6B_;
  pFVar1 = (this->StartOfTestingTime).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputFileBase).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPerfStatsRecord,int>
            ((FPerfStatsRecord *)(this->Records).AllocatorInstance.Data,(this->Records).ArrayNum);
  pFVar1 = (this->Records).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BeginRecording @ 148c899f0

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
UAutomationPerformaceHelper::BeginRecording
          (UAutomationPerformaceHelper *this,FString *param_1,float param_2,float param_3,
          float param_4)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  UWorld *this_00;
  UGameViewportClient *pUVar6;
  FPerfStatsRecord *pFVar7;
  FString *pFVar8;
  FPerfStatsRecord *pFVar9;
  FCommonViewportClient *pFVar10;
  bool bVar11;
  FString local_178;
  FString local_168;
  FPerfStatsRecord local_158;
  
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (this_00 == (UWorld *)0x0) goto LAB_148c89bfc;
  ::FString::FString(&local_178,L"Unit");
  pUVar6 = UWorld::GetGameViewport(this_00);
  pFVar10 = (FCommonViewportClient *)&pUVar6->_padding_;
  if (pUVar6 == (UGameViewportClient *)0x0) {
    pFVar10 = (FCommonViewportClient *)0x0;
  }
  UEngine::SetEngineStat(GEngine,this_00,pFVar10,&local_178,true);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  this->bRecordingBasicStats = true;
  this->bRecordingBaselineBasicStats = false;
  this->bGPUTraceIfBelowBudget = false;
  pFVar7 = GetCurrentRecord(this);
  if (pFVar7 == (FPerfStatsRecord *)0x0) {
LAB_148c89ac9:
    pFVar8 = ::FString::FString(&local_168,param_1);
    pFVar9 = FPerfStatsRecord::FPerfStatsRecord(&local_158,pFVar8);
    pFVar7 = (FPerfStatsRecord *)(this->Records).AllocatorInstance.Data;
    if ((pFVar7 <= pFVar9) && (pFVar9 < pFVar7 + (this->Records).ArrayMax)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar5 = (this->Records).ArrayNum;
    piVar1 = &(this->Records).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x130,8,&(this->Records).AllocatorInstance,piVar1);
    }
    (this->Records).ArrayNum = iVar5 + 1;
    FPerfStatsRecord::FPerfStatsRecord
              ((FPerfStatsRecord *)
               ((this->Records).AllocatorInstance.Data + (longlong)iVar5 * 0x130),pFVar9);
    if (local_158.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Name.Data.AllocatorInstance.Data);
    }
    pFVar7 = GetCurrentRecord(this);
    if (pFVar7 == (FPerfStatsRecord *)0x0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrRecord",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\FunctionalTest.cpp"
                          ,0x665,L"");
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  else {
    iVar5 = (pFVar7->Name).Data.ArrayNum;
    iVar2 = (param_1->Data).ArrayNum;
    if (iVar5 == iVar2) {
      if (1 < iVar5) {
        iVar5 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar7->Name).Data.AllocatorInstance.Data,
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar11 = iVar5 == 0;
        goto LAB_148c89abe;
      }
    }
    else {
      bVar11 = iVar2 + iVar5 == 1;
LAB_148c89abe:
      if (!bVar11) goto LAB_148c89ac9;
    }
  }
  pFVar7->GameThreadBudget = param_4;
  pFVar7->GPUBudget = param_2;
  pFVar7->RenderThreadBudget = param_3;
LAB_148c89bfc:
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// BeginRecordingBaseline @ 148c89c40

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
UAutomationPerformaceHelper::BeginRecordingBaseline
          (UAutomationPerformaceHelper *this,FString *param_1)

{
  int *piVar1;
  FPerfStatsRecord *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UWorld *this_00;
  FString *pFVar7;
  FPerfStatsRecord *pFVar8;
  UGameViewportClient *pUVar9;
  FCommonViewportClient *pFVar10;
  FString local_158;
  FString local_148;
  FPerfStatsRecord local_138;
  
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (this_00 != (UWorld *)0x0) {
    this->bRecordingBasicStats = true;
    this->bRecordingBaselineBasicStats = true;
    this->bGPUTraceIfBelowBudget = false;
    pFVar7 = ::FString::FString(&local_148,param_1);
    pFVar8 = FPerfStatsRecord::FPerfStatsRecord(&local_138,pFVar7);
    pFVar2 = (FPerfStatsRecord *)(this->Records).AllocatorInstance.Data;
    if ((pFVar2 <= pFVar8) && (pFVar8 < pFVar2 + (this->Records).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (this->Records).ArrayNum;
    piVar1 = &(this->Records).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x130,8,&(this->Records).AllocatorInstance,piVar1);
    }
    (this->Records).ArrayNum = iVar6 + 1;
    FPerfStatsRecord::FPerfStatsRecord
              ((FPerfStatsRecord *)
               ((this->Records).AllocatorInstance.Data + (longlong)iVar6 * 0x130),pFVar8);
    if (local_138.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Name.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_158,L"Unit");
    pUVar9 = UWorld::GetGameViewport(this_00);
    pFVar10 = (FCommonViewportClient *)&pUVar9->_padding_;
    if (pUVar9 == (UGameViewportClient *)0x0) {
      pFVar10 = (FCommonViewportClient *)0x0;
    }
    UEngine::SetEngineStat(GEngine,this_00,pFVar10,&local_158,true);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// BeginStatsFile @ 148c89de0

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
UAutomationPerformaceHelper::BeginStatsFile(UAutomationPerformaceHelper *this,FString *param_1)

{
  code *pcVar1;
  UEngine *pUVar2;
  UWorld *this_00;
  wchar_t *pwVar3;
  FOutputDeviceRedirector *pFVar4;
  ForAnyElementType FVar5;
  FString local_28;
  FString local_18;
  
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (this_00 != (UWorld *)0x0) {
    UWorld::GetMapName(this_00,&local_18);
    if ((param_1->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    ::FString::PrintfImpl(&local_28,L"Stat StartFile %s-%s/%s.uestats");
    pUVar2 = GEngine;
    pcVar1 = *(code **)(GEngine->_padding_ + 8);
    pFVar4 = GetGlobalLogSingleton();
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar5.Data = local_28.Data.AllocatorInstance.Data;
    }
    (*pcVar1)(&pUVar2->_padding_,this_00,FVar5.Data,pFVar4,pwVar3);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// EndRecording @ 148c8d8a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAutomationPerformaceHelper::EndRecording(UAutomationPerformaceHelper *this)

{
  FPerfStatsRecord *this_00;
  FString local_18;
  
  this_00 = GetCurrentRecord(this);
  if ((this_00 != (FPerfStatsRecord *)0x0) && (4 < (byte)LogFunctionalTest._0_1_)) {
    FPerfStatsRecord::GetReportString(this_00,&local_18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  this->bRecordingBasicStats = false;
  return;
}

// EndRecordingBaseline @ 148c8d910

void __thiscall UAutomationPerformaceHelper::EndRecordingBaseline(UAutomationPerformaceHelper *this)

{
  this->bRecordingBasicStats = false;
  this->bRecordingBaselineBasicStats = false;
  return;
}

// EndStatsFile @ 148c8d920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAutomationPerformaceHelper::EndStatsFile(UAutomationPerformaceHelper *this)

{
  code *pcVar1;
  UEngine *pUVar2;
  longlong lVar3;
  FOutputDeviceRedirector *pFVar4;
  
  lVar3 = (**(code **)(this->_padding_ + 0x180))();
  pUVar2 = GEngine;
  if (lVar3 != 0) {
    pcVar1 = *(code **)(GEngine->_padding_ + 8);
    pFVar4 = GetGlobalLogSingleton();
    (*pcVar1)(&pUVar2->_padding_,lVar3,L"Stat StopFile",pFVar4);
  }
  return;
}

// GetCurrentRecord @ 148c904f0

FPerfStatsRecord * __thiscall
UAutomationPerformaceHelper::GetCurrentRecord(UAutomationPerformaceHelper *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPerfStatsRecord *pFVar5;
  uint uVar6;
  
  iVar1 = (this->Records).ArrayNum;
  uVar6 = iVar1 - 1;
  if ((int)uVar6 < 0) {
    return (FPerfStatsRecord *)0x0;
  }
  uVar4 = 0;
  if ((int)uVar6 < iVar1) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPerfStatsRecord *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FPerfStatsRecord *)((this->Records).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x130)
  ;
}

// GetCurrentRecord @ 148c90580

FPerfStatsRecord * __thiscall
UAutomationPerformaceHelper::GetCurrentRecord(UAutomationPerformaceHelper *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPerfStatsRecord *pFVar5;
  uint uVar6;
  
  iVar1 = (this->Records).ArrayNum;
  uVar6 = iVar1 - 1;
  if ((int)uVar6 < 0) {
    return (FPerfStatsRecord *)0x0;
  }
  uVar4 = 0;
  if ((int)uVar6 < iVar1) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPerfStatsRecord *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FPerfStatsRecord *)((this->Records).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x130)
  ;
}

// GetPrivateStaticClass @ 148c918b0

UClass * __cdecl UAutomationPerformaceHelper::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationPerformaceHelper.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"AutomationPerformaceHelper",
               &Z_Registration_Info_UClass_UAutomationPerformaceHelper.InnerSingleton,
               StaticRegisterNativesUAutomationPerformaceHelper,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAutomationPerformaceHelper>,
               InternalVTableHelperCtorCaller<UAutomationPerformaceHelper>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationPerformaceHelper.InnerSingleton;
}

// GetWorld @ 148c92bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UAutomationPerformaceHelper::GetWorld(UAutomationPerformaceHelper *this)

{
  UWorld *pUVar1;
  
  pUVar1 = (UWorld *)(**(code **)(*(longlong *)this->_padding_ + 0x180))();
  if (pUVar1 == (UWorld *)0x0) {
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OuterWorld != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\FunctionalTest.cpp"
               ,0x63e);
  }
  return pUVar1;
}

// IsCurrentRecordWithinGPUBudget @ 148c93c50

bool __thiscall
UAutomationPerformaceHelper::IsCurrentRecordWithinGPUBudget(UAutomationPerformaceHelper *this)

{
  FPerfStatsRecord *pFVar1;
  
  pFVar1 = GetCurrentRecord(this);
  if (pFVar1 != (FPerfStatsRecord *)0x0) {
    return (pFVar1->Record).GPUTimeTracker.MaxValue - (pFVar1->Baseline).GPUTimeTracker.MaxValue <=
           (double)pFVar1->GPUBudget;
  }
  return true;
}

// IsCurrentRecordWithinGameThreadBudget @ 148c93ca0

bool __thiscall
UAutomationPerformaceHelper::IsCurrentRecordWithinGameThreadBudget
          (UAutomationPerformaceHelper *this)

{
  FPerfStatsRecord *pFVar1;
  
  pFVar1 = GetCurrentRecord(this);
  if (pFVar1 != (FPerfStatsRecord *)0x0) {
    return (pFVar1->Record).GameThreadTimeTracker.MaxValue -
           (pFVar1->Baseline).GameThreadTimeTracker.MaxValue <= (double)pFVar1->GameThreadBudget;
  }
  return true;
}

// IsCurrentRecordWithinRenderThreadBudget @ 148c93ce0

bool __thiscall
UAutomationPerformaceHelper::IsCurrentRecordWithinRenderThreadBudget
          (UAutomationPerformaceHelper *this)

{
  FPerfStatsRecord *pFVar1;
  
  pFVar1 = GetCurrentRecord(this);
  if (pFVar1 != (FPerfStatsRecord *)0x0) {
    return (pFVar1->Record).RenderThreadTimeTracker.MaxValue -
           (pFVar1->Baseline).RenderThreadTimeTracker.MaxValue <= (double)pFVar1->RenderThreadBudget
    ;
  }
  return true;
}

// IsRecording @ 148c940a0

bool __thiscall UAutomationPerformaceHelper::IsRecording(UAutomationPerformaceHelper *this)

{
  return this->bRecordingBasicStats;
}

// OnAllTestsComplete @ 148c95420

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAutomationPerformaceHelper::OnAllTestsComplete(UAutomationPerformaceHelper *this)

{
  int iVar1;
  FString local_28;
  FString local_18;
  
  if (this->bRecordingBaselineBasicStats != false) {
    this->bRecordingBasicStats = false;
    this->bRecordingBaselineBasicStats = false;
  }
  if (this->bRecordingBasicStats != false) {
    EndRecording(this);
  }
  if (this->bRecordingCPUCapture != false) {
    if (4 < (byte)LogFunctionalTest._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
    }
    FScopedExternalProfilerBase::StopScopedTimer
              ((FScopedExternalProfilerBase *)&this->ExternalProfiler);
  }
  if (this->bRecordingStatsFile != false) {
    EndStatsFile(this);
  }
  iVar1 = (this->Records).ArrayNum;
  this->bGPUTraceIfBelowBudget = false;
  if (0 < iVar1) {
    ::FString::FString(&local_18,L"perf.csv");
    ::FString::FString(&local_28,L"");
    WriteLogFile(this,&local_28,&local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnBeginTests @ 148c954f0

void __thiscall UAutomationPerformaceHelper::OnBeginTests(UAutomationPerformaceHelper *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FDateTime this_00;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,L"");
  pFVar3 = CreateProfileFilename(&local_18,&local_28,true);
  pFVar1 = &this->OutputFileBase;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->OutputFileBase).Data.ArrayNum = (pFVar3->Data).ArrayNum;
    (this->OutputFileBase).Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  this_00 = FDateTime::Now();
  pFVar3 = FDateTime::ToString((FDateTime *)this_00.Ticks,&local_18);
  pFVar1 = &this->StartOfTestingTime;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->StartOfTestingTime).Data.ArrayNum = (pFVar3->Data).ArrayNum;
    (this->StartOfTestingTime).Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Sample @ 148c9b380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAutomationPerformaceHelper::Sample(UAutomationPerformaceHelper *this,float param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UWorld *pUVar5;
  uint uVar6;
  
  pUVar5 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (pUVar5 != (UWorld *)0x0) {
    iVar1 = (this->Records).ArrayNum;
    uVar6 = iVar1 - 1;
    if ((-1 < (int)uVar6) && (this->bRecordingBasicStats != false)) {
      uVar4 = 0;
      if ((int)uVar6 < iVar1) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FPerfStatsRecord::Sample
                ((FPerfStatsRecord *)
                 ((this->Records).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x130),pUVar5,
                 param_1,this->bRecordingBaselineBasicStats);
    }
  }
  return;
}

// StartCPUProfiling @ 148c9cc70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAutomationPerformaceHelper::StartCPUProfiling(UAutomationPerformaceHelper *this)

{
  if (4 < (byte)LogFunctionalTest._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
  }
  FScopedExternalProfilerBase::StartScopedTimer
            ((FScopedExternalProfilerBase *)&this->ExternalProfiler,false);
  return;
}

// StaticRegisterNativesUAutomationPerformaceHelper @ 148c9d490

void __cdecl UAutomationPerformaceHelper::StaticRegisterNativesUAutomationPerformaceHelper(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x12;
  local_18.DataPtr = Z_Construct_UClass_UAutomationPerformaceHelper_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopCPUProfiling @ 148c9d600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAutomationPerformaceHelper::StopCPUProfiling(UAutomationPerformaceHelper *this)

{
  if (4 < (byte)LogFunctionalTest._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
  }
  FScopedExternalProfilerBase::StopScopedTimer
            ((FScopedExternalProfilerBase *)&this->ExternalProfiler);
  return;
}

// Tick @ 148c9e860

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAutomationPerformaceHelper::Tick(UAutomationPerformaceHelper *this,float param_1)

{
  ForAnyElementType _Src;
  int iVar1;
  FPerfStatsRecord *pFVar2;
  FString *pFVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (this->bRecordingBasicStats != false) {
    Sample(this,param_1);
  }
  if (this->bGPUTraceIfBelowBudget == false) {
    return;
  }
  pFVar2 = GetCurrentRecord(this);
  if (pFVar2 == (FPerfStatsRecord *)0x0) {
    return;
  }
  if ((pFVar2->Record).GPUTimeTracker.MaxValue - (pFVar2->Baseline).GPUTimeTracker.MaxValue <=
      (double)pFVar2->GPUBudget) {
    return;
  }
  FPaths::ProfilingDir(&local_48);
  ::FString::FString(&local_38,L".rtt");
  pFVar2 = GetCurrentRecord(this);
  pFVar3 = CreateProfileFilename(&local_28,&pFVar2->Name,&local_38,true);
  _Src.Data = local_48.Data.AllocatorInstance.Data;
  iVar5 = (pFVar3->Data).ArrayNum;
  iVar4 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar4 = 0;
  }
  iVar5 = local_48.Data.ArrayNum;
  if ((iVar5 == 0) && (iVar4 != -1)) {
    iVar1 = iVar4 + 2;
LAB_148c9e970:
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar1 == 0) {
      local_58.Data._8_8_ = local_48.Data._8_8_ & 0xffffffff;
      goto LAB_148c9e9c1;
    }
  }
  else {
    iVar1 = iVar4 + 1;
    if (iVar5 == 0) goto LAB_148c9e970;
  }
  local_58.Data.ArrayNum = iVar5;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar6 = iVar1 + iVar5;
  if ((int)uVar6 < iVar5) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar6,0,(ForAnyElementType *)&local_58,iVar5,&local_58.Data.ArrayMax);
  if (iVar5 != 0) {
    memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar5 * 2);
  }
LAB_148c9e9c1:
  ::FString::PathAppend(&local_58,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar4);
  if (GRHIGlobals.GPUTraceFileName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(GRHIGlobals.GPUTraceFileName.Data.AllocatorInstance.Data);
  }
  GRHIGlobals.GPUTraceFileName.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  GRHIGlobals.GPUTraceFileName.Data.ArrayNum = local_58.Data.ArrayNum;
  GRHIGlobals.GPUTraceFileName.Data.ArrayMax = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (4 < (byte)LogFunctionalTest._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
  }
  ::FString::FString(&local_38,L"Performed GPU Thred Trace!");
  UEngine::AddOnScreenDebugMessage
            (GEngine,-1,__real_40a00000,FColor::Red,&local_38,true,
             &UE::Math::TVector2<double>::UnitVector);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  this->bGPUTraceIfBelowBudget = false;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TriggerGPUTraceIfRecordFallsBelowBudget @ 148ca0b00

void __thiscall
UAutomationPerformaceHelper::TriggerGPUTraceIfRecordFallsBelowBudget
          (UAutomationPerformaceHelper *this)

{
  this->bGPUTraceIfBelowBudget = true;
  return;
}

// WriteLogFile @ 148ca1360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAutomationPerformaceHelper::WriteLogFile
          (UAutomationPerformaceHelper *this,FString *param_1,FString *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  IFileManager *pIVar3;
  FString *pFVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  FPerfStatsRecord *pFVar8;
  FPerfStatsRecord *this_00;
  int iVar9;
  undefined1 local_res10 [8];
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  TStringView<wchar_t> local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8 [7];
  
  FPaths::ProfilingDir(&local_1f8);
  if (1 < (param_1->Data).ArrayNum) {
    ::FString::ConcatFC(&local_198,param_1,L"/");
    ::FString::ConcatFF(&local_208,&local_1f8,&local_198);
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    local_1f8.Data.AllocatorInstance.Data = local_208.Data.AllocatorInstance.Data;
    local_1f8.Data.ArrayNum = local_208.Data.ArrayNum;
    local_1f8.Data.ArrayMax = local_208.Data.ArrayMax;
    local_208.Data.ArrayNum = 0;
    local_208.Data.ArrayMax = 0;
    local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    pIVar3 = IFileManager::Get();
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_1f8.Data.ArrayNum != 0) {
      FVar6.Data = local_1f8.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar3 + 0x60))(pIVar3,FVar6.Data,0);
  }
  local_1e8.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar7 = (longlong)local_1e8.Data.ArrayNum;
  _Src = (param_2->Data).AllocatorInstance.Data;
  local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_1e8.Data.ArrayNum == 0) {
    local_1e8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1e8.Data.ArrayNum,0,(ForAnyElementType *)&local_1e8,local_1e8.Data.ArrayNum
               ,&local_1e8.Data.ArrayMax);
    memcpy(local_1e8.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
  }
  if (local_1e8.Data.ArrayNum < 2) {
    ::FString::operator=(&local_1e8,L"perf.csv");
  }
  CreateProfileFilename(&local_e8,param_2,true);
  ::FString::ConcatFF(&local_188,&local_1f8,&local_e8);
  ::FString::FString(&local_128,
                     L"TestName, MaxRT, RT Budget, RT Frac, MaxGT, GT Budget, GT Frac, MaxGPU, GPU Budget, GPU Frac\n"
                    );
  local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.Data.ArrayNum = 0;
  local_1a8.Data.ArrayMax = 0;
  ::FString::FString(&local_138,
                     L"TestName,MinFrameTime,AvgFrameTime,MaxFrameTime,MinRT,AvgRT,MaxRT,MinGT,AvgGT,MaxGT,MinGPU,AvgGPU,MaxGPU\n"
                    );
  iVar2 = (this->Records).ArrayNum;
  this_00 = (FPerfStatsRecord *)(this->Records).AllocatorInstance.Data;
  local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.Data.ArrayNum = 0;
  local_1b8.Data.ArrayMax = 0;
  pFVar8 = this_00 + iVar2;
  local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.Data.ArrayNum = 0;
  local_1c8.Data.ArrayMax = 0;
  local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Data.ArrayNum = 0;
  local_1d8.Data.ArrayMax = 0;
  while( true ) {
    if ((this->Records).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPerfStatsRecord,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (this_00 == pFVar8) break;
    pFVar4 = ::FString::FString(&local_c8,L"\n");
    pFVar5 = FPerfStatsRecord::GetReportString(this_00,&local_d8);
    ::FString::ConcatFF(&local_208,pFVar5,pFVar4);
    iVar9 = local_208.Data.ArrayNum + -1;
    if (local_208.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    ::FString::AppendChars(&local_1b8,(wchar_t *)local_208.Data.AllocatorInstance.Data,iVar9);
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    pFVar4 = ::FString::FString(&local_b8,L"\n");
    ::FString::PrintfImpl
              (&local_108,L"%s,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f");
    ::FString::ConcatFF(&local_168,&local_108,pFVar4);
    iVar9 = local_168.Data.ArrayNum + -1;
    if (local_168.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    ::FString::AppendChars(&local_1c8,(wchar_t *)local_168.Data.AllocatorInstance.Data,iVar9);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    pFVar4 = ::FString::FString(local_a8,L"\n");
    ::FString::PrintfImpl
              (&local_f8,L"%s,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f");
    ::FString::ConcatFF(&local_158,&local_f8,pFVar4);
    iVar9 = local_158.Data.ArrayNum + -1;
    if (local_158.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    ::FString::AppendChars(&local_1d8,(wchar_t *)local_158.Data.AllocatorInstance.Data,iVar9);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_a8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8[0].Data.AllocatorInstance.Data);
    }
    if ((((double)this_00->GPUBudget <
          (this_00->Record).GPUTimeTracker.MaxValue - (this_00->Baseline).GPUTimeTracker.MaxValue)
        || ((double)this_00->RenderThreadBudget <
            (this_00->Record).RenderThreadTimeTracker.MaxValue -
            (this_00->Baseline).RenderThreadTimeTracker.MaxValue)) ||
       ((double)this_00->GameThreadBudget <
        (this_00->Record).GameThreadTimeTracker.MaxValue -
        (this_00->Baseline).GameThreadTimeTracker.MaxValue)) {
      pFVar4 = ::FString::FString((FString *)&local_118,L"\n");
      ::FString::PrintfImpl(&local_178,L"%s,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f");
      ::FString::ConcatFF(&local_198,&local_178,pFVar4);
      iVar9 = local_198.Data.ArrayNum + -1;
      if (local_198.Data.ArrayNum == 0) {
        iVar9 = 0;
      }
      ::FString::AppendChars(&local_1a8,(wchar_t *)local_198.Data.AllocatorInstance.Data,iVar9);
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      if (local_118.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_118.DataPtr);
      }
    }
    this_00 = this_00 + 1;
  }
  ::FString::PrintfImpl
            (&local_148,
             L"Over Budget Tests\n%s%s\nAdjusted Results\n%s%s\nRaw Results\n%s%s\nBaseline Results\n%s%s\n"
            );
  pIVar3 = IFileManager::Get();
  local_178.Data.AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_188.Data.ArrayNum != 0) {
    FVar6.Data = local_188.Data.AllocatorInstance.Data;
  }
  local_178.Data.ArrayNum = local_148.Data.ArrayNum + -1;
  if (local_148.Data.ArrayNum == 0) {
    local_178.Data.ArrayNum = 0;
  }
  local_118._12_4_ = local_178.Data.ArrayMax;
  local_118.Size = local_178.Data.ArrayNum;
  local_118.DataPtr = (wchar_t *)local_148.Data.AllocatorInstance.Data;
  FFileHelper::SaveStringToFile(&local_118,(wchar_t *)FVar6.Data,AutoDetect,pIVar3,0);
  if (3 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  DestructItems<FPerfStatsRecord,int>
            ((FPerfStatsRecord *)(this->Records).AllocatorInstance.Data,(this->Records).ArrayNum);
  piVar1 = &(this->Records).ArrayMax;
  (this->Records).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x130,8,0,&(this->Records).AllocatorInstance,0,piVar1);
  }
  this->bRecordingBasicStats = false;
  this->bRecordingBaselineBasicStats = false;
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  return;
}

// execBeginRecording @ 148ca7a70

void __cdecl
UAutomationPerformaceHelper::execBeginRecording(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *_Src;
  longlong lVar5;
  float local_res10 [2];
  float local_res20 [2];
  float local_78 [2];
  void *local_70;
  undefined8 local_68;
  FString local_60 [4];
  
  local_70 = (void *)0x0;
  local_68 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_78[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
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
  _Src = local_70;
  fVar4 = local_78[0];
  fVar3 = local_res20[0];
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)local_68;
  local_60[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60[0].Data.ArrayNum = (int)local_68;
  if ((int)local_68 == 0) {
    local_60[0].Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_68,0,(ForAnyElementType *)local_60,(int)local_68,
               &local_60[0].Data.ArrayMax);
    memcpy(local_60[0].Data.AllocatorInstance.Data,_Src,lVar5 * 2);
  }
  BeginRecording((UAutomationPerformaceHelper *)param_1,local_60,fVar4,fVar3,fVar2);
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  return;
}

// execBeginRecordingBaseline @ 148ca7c60

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
UAutomationPerformaceHelper::execBeginRecordingBaseline
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  FProperty *pFVar2;
  code *pcVar3;
  void *_Src;
  bool bVar4;
  int iVar5;
  UWorld *this;
  FString *pFVar6;
  FPerfStatsRecord *pFVar7;
  UGameViewportClient *pUVar8;
  longlong lVar9;
  FCommonViewportClient *pFVar10;
  FString local_178;
  void *local_168;
  undefined8 local_160;
  FString local_158;
  FString local_148;
  FPerfStatsRecord local_138;
  
  local_168 = (void *)0x0;
  local_160 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  _Src = local_168;
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar9 = (longlong)(int)local_160;
  local_178.Data.ArrayNum = (int)local_160;
  if ((int)local_160 == 0) {
    local_178.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_160,0,(ForAnyElementType *)&local_178,(int)local_160,
               &local_178.Data.ArrayMax);
    memcpy(local_178.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
  }
  this = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
  if (this != (UWorld *)0x0) {
    *(undefined2 *)&param_1[1].field_0x10 = 0x101;
    param_1[1].field_0x14 = 0;
    pUVar1 = param_1 + 1;
    pFVar6 = ::FString::FString(&local_148,&local_178);
    pFVar7 = FPerfStatsRecord::FPerfStatsRecord(&local_138,pFVar6);
    if ((*(FScriptContainerElement **)pUVar1 <= pFVar7) &&
       (pFVar7 < (FPerfStatsRecord *)
                 (*(FScriptContainerElement **)pUVar1 +
                 (longlong)*(int *)&param_1[1].field_0xc * 0x130))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)&param_1[1].field_0x8;
    if (iVar5 == *(int *)&param_1[1].field_0xc) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x130,8,(ForAnyElementType *)pUVar1,(int *)&param_1[1].field_0xc);
    }
    *(int *)&param_1[1].field_0x8 = iVar5 + 1;
    FPerfStatsRecord::FPerfStatsRecord
              ((FPerfStatsRecord *)(*(FScriptContainerElement **)pUVar1 + (longlong)iVar5 * 0x130),
               pFVar7);
    if (local_138.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Name.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_158,L"Unit");
    pUVar8 = UWorld::GetGameViewport(this);
    pFVar10 = (FCommonViewportClient *)&pUVar8->_padding_;
    if (pUVar8 == (UGameViewportClient *)0x0) {
      pFVar10 = (FCommonViewportClient *)0x0;
    }
    UEngine::SetEngineStat(GEngine,this,pFVar10,&local_158,true);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_168 != (void *)0x0) {
    FMemory::Free(local_168);
  }
  return;
}

// execBeginStatsFile @ 148ca7ec0

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
UAutomationPerformaceHelper::execBeginStatsFile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UEngine *pUVar3;
  UWorld *this;
  FOutputDeviceRedirector *pFVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  wchar_t *local_38;
  undefined8 local_30;
  FString local_28;
  FString local_18;
  
  local_38 = (wchar_t *)0x0;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
  if (this != (UWorld *)0x0) {
    UWorld::GetMapName(this,&local_18);
    pwVar5 = L"";
    if ((int)local_30 != 0) {
      pwVar5 = local_38;
    }
    ::FString::PrintfImpl(&local_28,L"Stat StartFile %s-%s/%s.uestats");
    pUVar3 = GEngine;
    pcVar2 = *(code **)(GEngine->_padding_ + 8);
    pFVar4 = GetGlobalLogSingleton();
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar6.Data = local_28.Data.AllocatorInstance.Data;
    }
    (*pcVar2)(&pUVar3->_padding_,this,FVar6.Data,pFVar4,pwVar5);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execEndRecording @ 148ca84c0

void __cdecl
UAutomationPerformaceHelper::execEndRecording(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EndRecording((UAutomationPerformaceHelper *)param_1);
  return;
}

// execEndRecordingBaseline @ 148ca84e0

void __cdecl
UAutomationPerformaceHelper::execEndRecordingBaseline
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined2 *)&param_1[1].field_0x10 = 0;
  return;
}

// execEndStatsFile @ 148ca8510

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
UAutomationPerformaceHelper::execEndStatsFile(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  UEngine *pUVar2;
  longlong lVar3;
  FOutputDeviceRedirector *pFVar4;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = (**(code **)(*(longlong *)param_1 + 0x180))();
  pUVar2 = GEngine;
  if (lVar3 != 0) {
    pcVar1 = *(code **)(GEngine->_padding_ + 8);
    pFVar4 = GetGlobalLogSingleton();
    (*pcVar1)(&pUVar2->_padding_,lVar3,L"Stat StopFile",pFVar4);
  }
  return;
}

// execIsCurrentRecordWithinGPUBudget @ 148ca8ed0

void __cdecl
UAutomationPerformaceHelper::execIsCurrentRecordWithinGPUBudget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FPerfStatsRecord *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetCurrentRecord((UAutomationPerformaceHelper *)param_1);
  if (pFVar1 != (FPerfStatsRecord *)0x0) {
    *(bool *)param_3 =
         (pFVar1->Record).GPUTimeTracker.MaxValue - (pFVar1->Baseline).GPUTimeTracker.MaxValue <=
         (double)pFVar1->GPUBudget;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execIsCurrentRecordWithinGameThreadBudget @ 148ca8f40

void __cdecl
UAutomationPerformaceHelper::execIsCurrentRecordWithinGameThreadBudget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FPerfStatsRecord *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetCurrentRecord((UAutomationPerformaceHelper *)param_1);
  if (pFVar1 != (FPerfStatsRecord *)0x0) {
    *(bool *)param_3 =
         (pFVar1->Record).GameThreadTimeTracker.MaxValue -
         (pFVar1->Baseline).GameThreadTimeTracker.MaxValue <= (double)pFVar1->GameThreadBudget;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execIsCurrentRecordWithinRenderThreadBudget @ 148ca8fa0

void __cdecl
UAutomationPerformaceHelper::execIsCurrentRecordWithinRenderThreadBudget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FPerfStatsRecord *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetCurrentRecord((UAutomationPerformaceHelper *)param_1);
  if (pFVar1 != (FPerfStatsRecord *)0x0) {
    *(bool *)param_3 =
         (pFVar1->Record).RenderThreadTimeTracker.MaxValue -
         (pFVar1->Baseline).RenderThreadTimeTracker.MaxValue <= (double)pFVar1->RenderThreadBudget;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execIsRecording @ 148ca91e0

void __cdecl
UAutomationPerformaceHelper::execIsRecording(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[1].field_0x10;
  return;
}

// execOnAllTestsComplete @ 148ca9400

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAutomationPerformaceHelper::execOnAllTestsComplete(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_28;
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[1].field_0x11 != '\0') {
    *(undefined2 *)&param_1[1].field_0x10 = 0;
  }
  if (param_1[1].field_0x10 != '\0') {
    EndRecording((UAutomationPerformaceHelper *)param_1);
  }
  if (param_1[1].field_0x12 != '\0') {
    if (4 < (byte)LogFunctionalTest._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
    }
    FScopedExternalProfilerBase::StopScopedTimer
              ((FScopedExternalProfilerBase *)&param_1[1].field_0x15);
  }
  if (param_1[1].field_0x13 != '\0') {
    EndStatsFile((UAutomationPerformaceHelper *)param_1);
  }
  param_1[1].field_0x14 = 0;
  if (0 < *(int *)&param_1[1].field_0x8) {
    ::FString::FString(&local_18,L"perf.csv");
    ::FString::FString(&local_28,L"");
    WriteLogFile((UAutomationPerformaceHelper *)param_1,&local_28,&local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// execOnBeginTests @ 148ca94e0

void __cdecl
UAutomationPerformaceHelper::execOnBeginTests(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  UObject *pUVar2;
  FString *pFVar3;
  FDateTime this;
  UObject *pUVar4;
  FString local_28;
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::FString(&local_28,L"");
  pFVar3 = CreateProfileFilename(&local_18,&local_28,true);
  puVar1 = &param_1[1].field_0x18;
  if ((FString *)puVar1 != pFVar3) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&param_1[1].field_0x20 = (pFVar3->Data).ArrayNum;
    *(int *)&param_1[1].field_0x24 = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  this = FDateTime::Now();
  pUVar4 = (UObject *)FDateTime::ToString((FDateTime *)this.Ticks,&local_18);
  pUVar2 = param_1 + 2;
  if (pUVar2 != pUVar4) {
    if (*(void **)pUVar2 != (void *)0x0) {
      FMemory::Free(*(void **)pUVar2);
    }
    *(undefined8 *)pUVar2 = *(undefined8 *)pUVar4;
    *(undefined8 *)pUVar4 = 0;
    *(int *)&param_1[2].field_0x8 = *(int *)&pUVar4->field_0x8;
    *(int *)&param_1[2].field_0xc = *(int *)&pUVar4->field_0xc;
    *(undefined8 *)&pUVar4->field_0x8 = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSample @ 148ca9930

void __cdecl UAutomationPerformaceHelper::execSample(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Sample((UAutomationPerformaceHelper *)param_1,local_res10[0]);
  return;
}

// execStartCPUProfiling @ 148caa7c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAutomationPerformaceHelper::execStartCPUProfiling(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (4 < (byte)LogFunctionalTest._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
  }
  FScopedExternalProfilerBase::StartScopedTimer
            ((FScopedExternalProfilerBase *)&param_1[1].field_0x15,false);
  return;
}

// execStopCPUProfiling @ 148caa810

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAutomationPerformaceHelper::execStopCPUProfiling(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (4 < (byte)LogFunctionalTest._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
  }
  FScopedExternalProfilerBase::StopScopedTimer
            ((FScopedExternalProfilerBase *)&param_1[1].field_0x15);
  return;
}

// execTick @ 148caba60

void __cdecl UAutomationPerformaceHelper::execTick(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Tick((UAutomationPerformaceHelper *)param_1,local_res10[0]);
  return;
}

// execTriggerGPUTraceIfRecordFallsBelowBudget @ 148cac200

void __cdecl
UAutomationPerformaceHelper::execTriggerGPUTraceIfRecordFallsBelowBudget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[1].field_0x14 = 1;
  return;
}

// execWriteLogFile @ 148cac220

void __cdecl
UAutomationPerformaceHelper::execWriteLogFile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  WriteLogFile((UAutomationPerformaceHelper *)param_1,&local_18,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

