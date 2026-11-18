// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FAutomationImageComparisonRequest @ 148805110

FAutomationImageComparisonRequest * __thiscall
AutomationCommon::FAutomationImageComparisonRequest::FAutomationImageComparisonRequest
          (FAutomationImageComparisonRequest *this,FString *param_1,FString *param_2,int param_3,
          int param_4,TArray<FColor,TSizedDefaultAllocator<32>_> *param_5,
          FAutomationComparisonToleranceAmount *param_6,FString *param_7)

{
  int *piVar1;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FAutomationTestBase *pFVar5;
  FAutomationTestFramework *pFVar6;
  FString *pFVar7;
  FAutomationScreenshotData *pFVar8;
  longlong lVar9;
  ForAnyElementType local_1a8;
  int local_1a0;
  int local_19c;
  FString local_198;
  FString local_188;
  FAutomationScreenshotData local_178;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAutomationImageComparisonRequest_AutomationCommon__6B_;
  FAutomationScreenshotData::FAutomationScreenshotData(&this->ComparisonParameters);
  pTVar2 = &this->ImageData;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_5->ArrayNum;
  pFVar4 = (param_5->AllocatorInstance).Data;
  piVar1 = &(this->ImageData).ArrayMax;
  (this->ImageData).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  this->Initiate = false;
  this->TaskCompleted = false;
  local_198.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar9 = (longlong)local_198.Data.ArrayNum;
  pFVar4 = (param_2->Data).AllocatorInstance.Data;
  local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_198.Data.ArrayNum == 0) {
    local_198.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_198.Data.ArrayNum,0,(ForAnyElementType *)&local_198,local_198.Data.ArrayNum
               ,&local_198.Data.ArrayMax);
    memcpy(local_198.Data.AllocatorInstance.Data,pFVar4,lVar9 * 2);
  }
  ::FString::FString(&local_188,L"");
  pFVar6 = FAutomationTestFramework::Get();
  pFVar5 = pFVar6->CurrentTest;
  if (pFVar5 != (FAutomationTestBase *)0x0) {
    pFVar7 = (FString *)(**(code **)(pFVar5->_padding_ + 0x18))(pFVar5,&local_1a8);
    if (&local_188 != pFVar7) {
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
      local_188.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_188.Data.ArrayNum = (pFVar7->Data).ArrayNum;
      local_188.Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_1a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data);
    }
    if (local_198.Data.ArrayNum < 2) {
      local_1a0 = (pFVar5->TestParameterContext).Data.ArrayNum;
      lVar9 = (longlong)local_1a0;
      pFVar4 = (pFVar5->TestParameterContext).Data.AllocatorInstance.Data;
      local_1a8.Data = (FScriptContainerElement *)0x0;
      if (local_1a0 == 0) {
        local_19c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1a0,0,&local_1a8,local_1a0,&local_19c);
        memcpy(local_1a8.Data,pFVar4,lVar9 * 2);
      }
      iVar3 = local_1a0;
      if (local_1a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data);
      }
      if (iVar3 < 2) {
        pFVar7 = (FString *)(**(code **)(pFVar5->_padding_ + 0x18))(pFVar5,&local_1a8);
        if (&local_198 != pFVar7) {
          if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
          }
          local_198.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
          (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_198.Data.ArrayNum = (pFVar7->Data).ArrayNum;
          local_198.Data.ArrayMax = (pFVar7->Data).ArrayMax;
          (pFVar7->Data).ArrayNum = 0;
          (pFVar7->Data).ArrayMax = 0;
        }
        if (local_1a8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data);
        }
      }
      else {
        local_1a0 = (pFVar5->TestParameterContext).Data.ArrayNum;
        lVar9 = (longlong)local_1a0;
        pFVar4 = (pFVar5->TestParameterContext).Data.AllocatorInstance.Data;
        local_1a8.Data = (FScriptContainerElement *)0x0;
        if (local_1a0 == 0) {
          local_19c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1a0,0,&local_1a8,local_1a0,&local_19c);
          memcpy(local_1a8.Data,pFVar4,lVar9 * 2);
        }
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        local_198.Data.AllocatorInstance.Data = local_1a8.Data;
        local_198.Data.ArrayNum = local_1a0;
        local_198.Data.ArrayMax = local_19c;
      }
    }
  }
  pFVar8 = BuildScreenshotData(&local_178,&local_198,&local_188,param_1,param_3,param_4);
  FAutomationScreenshotData::operator=(&this->ComparisonParameters,pFVar8);
  FAutomationScreenshotData::~FAutomationScreenshotData(&local_178);
  (this->ComparisonParameters).bHasComparisonRules = true;
  (this->ComparisonParameters).ToleranceRed = param_6->Red;
  (this->ComparisonParameters).ToleranceGreen = param_6->Green;
  (this->ComparisonParameters).ToleranceBlue = param_6->Blue;
  (this->ComparisonParameters).ToleranceAlpha = param_6->Alpha;
  (this->ComparisonParameters).ToleranceMinBrightness = param_6->MinBrightness;
  (this->ComparisonParameters).ToleranceMaxBrightness = param_6->MaxBrightness;
  (this->ComparisonParameters).bIgnoreAntiAliasing = true;
  (this->ComparisonParameters).bIgnoreColors = false;
  (this->ComparisonParameters).MaximumLocalError = 0.1;
  (this->ComparisonParameters).MaximumGlobalError = 0.02;
  ::FString::operator=(&(this->ComparisonParameters).Notes,param_7);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FAutomationImageComparisonRequest @ 14880bce0

void __thiscall
AutomationCommon::FAutomationImageComparisonRequest::~FAutomationImageComparisonRequest
          (FAutomationImageComparisonRequest *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  FAutomationTestFramework *pFVar5;
  
  this->_padding_ = (longlong)&___7FAutomationImageComparisonRequest_AutomationCommon__6B_;
  pFVar5 = FAutomationTestFramework::Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar5->OnScreenshotCompared,
             this);
  pFVar3 = (this->ImageData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FAutomationScreenshotData::~FAutomationScreenshotData(&this->ComparisonParameters);
  this->_padding_ = (longlong)&___7IAutomationLatentCommand__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014880bd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// OnComparisonComplete @ 14884b8c0

void __thiscall
AutomationCommon::FAutomationImageComparisonRequest::OnComparisonComplete
          (FAutomationImageComparisonRequest *this,FAutomationScreenshotCompareResults *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FAutomationTestFramework *pFVar3;
  FAutomationEvent *pFVar4;
  FAutomationEvent local_48;
  
  pFVar3 = FAutomationTestFramework::Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar3->OnScreenshotCompared,
             this);
  pFVar3 = FAutomationTestFramework::Get();
  pFVar1 = pFVar3->CurrentTest;
  if (pFVar1 != (FAutomationTestBase *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x58);
    pFVar4 = FAutomationScreenshotCompareResults::ToAutomationEvent(param_1,&local_48);
    (*pcVar2)(pFVar1,pFVar4,0,0);
    if (local_48.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Context.Data.AllocatorInstance.Data);
    }
    if (local_48.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Message.Data.AllocatorInstance.Data);
    }
  }
  this->TaskCompleted = true;
  return;
}

// Update @ 14885ef80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AutomationCommon::FAutomationImageComparisonRequest::Update(FAutomationImageComparisonRequest *this)

{
  FAutomationTestFramework *pFVar1;
  TDelegate<void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  
  if (this->Initiate == false) {
    pFVar1 = FAutomationTestFramework::Get();
    this_00 = FAutomationTestFramework::OnScreenshotCaptured(pFVar1);
    TDelegate<void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
    ::ExecuteIfBound(this_00,&this->ImageData,&this->ComparisonParameters);
    if (4 < (byte)LogEditorAutomationTests._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_AutomationCommon::FAutomationImageComparisonRequest::Update(void)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogEditorAutomationTests);
    }
    pFVar1 = FAutomationTestFramework::Get();
    TMulticastDelegateRegistration<void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
    ::AddRaw<AutomationCommon::FAutomationImageComparisonRequest>
              ((TMulticastDelegateRegistration<void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
                *)&pFVar1->OnScreenshotCompared,
               (FAutomationImageComparisonRequest *)&stack0x00000008,(pmf_55f4bf5c *)this);
    this->Initiate = true;
    return this->TaskCompleted;
  }
  return this->TaskCompleted;
}

