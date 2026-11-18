// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 11

// GetTestFlags @ 141e02fb0

EAutomationTestFlags __thiscall
FProjectsLoadingRapidJsonPluginLoading::GetTestFlags(FProjectsLoadingRapidJsonPluginLoading *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141e02fc0

bool __thiscall
FProjectsLoadingRapidJsonPluginLoading::IsStressTest(FProjectsLoadingRapidJsonPluginLoading *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141e02fd0

uint __thiscall
FProjectsLoadingRapidJsonPluginLoading::GetRequiredDeviceNum
          (FProjectsLoadingRapidJsonPluginLoading *this)

{
  return 1;
}

// GetTestSourceFileName @ 141e02fe0

FString * __thiscall
FProjectsLoadingRapidJsonPluginLoading::GetTestSourceFileName
          (FProjectsLoadingRapidJsonPluginLoading *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\Tests\\RapidJsonPluginLoadingTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141e03010

int __thiscall
FProjectsLoadingRapidJsonPluginLoading::GetTestSourceFileLine
          (FProjectsLoadingRapidJsonPluginLoading *this)

{
  return 0x12;
}

// GetTests @ 141e03020

/* WARNING: Removing unreachable block (ram,0x000141e0319e) */

void __thiscall
FProjectsLoadingRapidJsonPluginLoading::GetTests
          (FProjectsLoadingRapidJsonPluginLoading *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  pFVar1 = &this->PrettyNameDotNotation;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar1)
  ;
  pFVar5 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = local_18;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar5 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 141e031c0

bool __thiscall
FProjectsLoadingRapidJsonPluginLoading::RunTest
          (FProjectsLoadingRapidJsonPluginLoading *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141e031f0

FString * __thiscall
FProjectsLoadingRapidJsonPluginLoading::GetBeautifiedTestName
          (FProjectsLoadingRapidJsonPluginLoading *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FProjectsLoadingRapidJsonPluginLoading @ 141e0e610

FProjectsLoadingRapidJsonPluginLoading * __thiscall
FProjectsLoadingRapidJsonPluginLoading::FProjectsLoadingRapidJsonPluginLoading
          (FProjectsLoadingRapidJsonPluginLoading *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  EAutomationTestFlags EVar3;
  FString *pFVar4;
  FAutomationTestFramework *this_00;
  longlong lVar5;
  FString local_28;
  FString local_18;
  
  FAutomationTestBase::FAutomationTestBase((FAutomationTestBase *)this,param_1,false);
  this->_padding_ = (longlong)&___7FProjectsLoadingRapidJsonPluginLoading__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Engine::Projects::Loading::RapidJsonPluginLoading")
  ;
  pFVar4 = ::FString::Replace(pFVar4,&local_18,L"::",L".",IgnoreCase);
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrettyNameDotNotation).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->PrettyNameDotNotation).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar3 = this->TestFlags;
  if ((EVar3 & (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext)) == None
     ) {
    EVar3 = EVar3 | (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext);
    this->TestFlags = EVar3;
  }
  if ((EVar3 & (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)) ==
      None) {
    this->TestFlags = EVar3 | EngineFilter;
  }
  this_00 = FAutomationTestFramework::Get();
  ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,lVar5 * 2);
  }
  FAutomationTestFramework::RegisterAutomationTestTags(this_00,&local_28,&local_18,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// operator() @ 141e114f0

void __thiscall
`FProjectsLoadingRapidJsonPluginLoading::TestBody'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1)

{
  longlong *plVar1;
  FAutomationTestBase *pFVar2;
  FJsonValue *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  size_t sVar10;
  FAutomationTestFramework *pFVar11;
  FJsonObject *pFVar12;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  TSharedPtr<FJsonValue,1> *pTVar13;
  int iVar14;
  TReferenceControllerBase<1> *pTVar15;
  wchar_t *pwVar16;
  bool local_res8 [8];
  bool local_res10 [8];
  int local_res18 [2];
  uint local_res20 [2];
  int local_308;
  uint local_304;
  FString local_300;
  FString local_2f0;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  TSharedPtr<FJsonObject,1> *local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  TOptional<rapidjson::GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_228;
  FString local_218;
  FString local_208;
  wchar_t *local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  FString local_1e8;
  FString local_1d8;
  wchar_t *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  FString local_1b8;
  FString local_1a8;
  wchar_t *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  FString local_188;
  FString local_178;
  wchar_t *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  FString local_158;
  FString local_148;
  wchar_t *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  FString local_128;
  FString local_118;
  wchar_t *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FString local_f8;
  wchar_t *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FString local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  
  plVar1 = *(longlong **)this;
  pwVar16 = L"";
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  iVar14 = 0;
  local_res18[0] = 0;
  local_308 = 0;
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iStack_1f0 = iVar14;
  local_1f8 = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar10 = wcslen(param_1);
    iStack_1f0 = (int)sVar10;
  }
  local_c8._12_4_ = uStack_1ec;
  local_c8.Size = iStack_1f0;
  local_c8.DataPtr = local_1f8;
  bVar5 = FJsonObject::TryGetNumberField((FJsonObject *)*plVar1,&local_c8,local_res18);
  local_2d8 = *(undefined8 *)((longlong)this + 8);
  bVar6 = UE::Projects::Private::TryGetIntHelper<int>
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_2d8,param_1,L"int32",&local_308);
  if (bVar5 != bVar6) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_298,L"%s: int32 Parse Mismatch: %d vs %d");
    if (local_298.Data.ArrayNum != 0) {
      pwVar16 = (wchar_t *)local_298.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_1e8,pwVar16);
    (*pcVar4)(pFVar2,&local_1e8,0);
    local_178.Data.AllocatorInstance.Data = local_298.Data.AllocatorInstance.Data;
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      local_178.Data.AllocatorInstance.Data = local_298.Data.AllocatorInstance.Data;
    }
    goto LAB_141e11e46;
  }
  if (local_res18[0] != local_308) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_288,L"%s: int32 Mismatch: %d vs %d");
    if (local_288.Data.ArrayNum != 0) {
      pwVar16 = (wchar_t *)local_288.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_1d8,pwVar16);
    (*pcVar4)(pFVar2,&local_1d8,0);
    local_178.Data.AllocatorInstance.Data = local_288.Data.AllocatorInstance.Data;
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      local_178.Data.AllocatorInstance.Data = local_288.Data.AllocatorInstance.Data;
    }
    goto LAB_141e11e46;
  }
  plVar1 = *(longlong **)this;
  local_res20[0] = 0;
  local_304 = 0;
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_1c8 = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar10 = wcslen(param_1);
    iVar14 = (int)sVar10;
  }
  local_b8._12_4_ = uStack_1bc;
  local_b8.Size = iVar14;
  local_b8.DataPtr = local_1c8;
  iStack_1c0 = iVar14;
  bVar5 = FJsonObject::TryGetNumberField((FJsonObject *)*plVar1,&local_b8,local_res20);
  local_2d0 = *(undefined8 *)((longlong)this + 8);
  bVar6 = UE::Projects::Private::TryGetIntHelper<unsigned_int>
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_2d0,param_1,L"uint32",&local_304);
  if (bVar5 != bVar6) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_278,L"%s: uint32 Parse Mismatch: %d vs %d");
    if (local_278.Data.ArrayNum != 0) {
      pwVar16 = (wchar_t *)local_278.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_1b8,pwVar16);
    (*pcVar4)(pFVar2,&local_1b8,0);
    local_178.Data.AllocatorInstance.Data = local_278.Data.AllocatorInstance.Data;
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      local_178.Data.AllocatorInstance.Data = local_278.Data.AllocatorInstance.Data;
    }
    goto LAB_141e11e46;
  }
  if (local_res20[0] != local_304) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_268,L"%s: uint32 Mismatch: %u vs %u");
    if (local_268.Data.ArrayNum != 0) {
      pwVar16 = (wchar_t *)local_268.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_1a8,pwVar16);
    (*pcVar4)(pFVar2,&local_1a8,0);
    local_178.Data.AllocatorInstance.Data = local_268.Data.AllocatorInstance.Data;
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      local_178.Data.AllocatorInstance.Data = local_268.Data.AllocatorInstance.Data;
    }
    goto LAB_141e11e46;
  }
  local_res10[0] = false;
  local_res8[0] = false;
  pFVar12 = TSharedPtr<FJsonObject,1>::operator->(*(TSharedPtr<FJsonObject,1> **)this);
  iVar14 = 0;
  iStack_190 = iVar14;
  local_198 = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar10 = wcslen(param_1);
    iStack_190 = (int)sVar10;
  }
  local_a8._12_4_ = uStack_18c;
  local_a8.Size = iStack_190;
  local_a8.DataPtr = local_198;
  bVar5 = FJsonObject::TryGetBoolField(pFVar12,&local_a8,local_res10);
  local_2c8 = *(undefined8 *)((longlong)this + 8);
  bVar6 = UE::Projects::Private::TryGetBoolField
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_2c8,param_1,local_res8);
  if (bVar5 != bVar6) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_258,L"%s: Bool Parse Mismatch: %d vs %d");
    if (local_258.Data.ArrayNum != 0) {
      pwVar16 = (wchar_t *)local_258.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_188,pwVar16);
    (*pcVar4)(pFVar2,&local_188,0);
    local_178.Data.AllocatorInstance.Data = local_258.Data.AllocatorInstance.Data;
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
      local_178.Data.AllocatorInstance.Data = local_258.Data.AllocatorInstance.Data;
    }
    goto LAB_141e11e46;
  }
  if (local_res10[0] != local_res8[0]) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_178,L"Bool Mismatch");
    (*pcVar4)(pFVar2,&local_178,0);
    goto LAB_141e11e46;
  }
  local_300.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_300.Data.ArrayNum = 0;
  local_300.Data.ArrayMax = 0;
  local_2f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f0.Data.ArrayNum = 0;
  local_2f0.Data.ArrayMax = 0;
  pFVar12 = TSharedPtr<FJsonObject,1>::operator->(*(TSharedPtr<FJsonObject,1> **)this);
  iStack_160 = iVar14;
  local_168 = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar10 = wcslen(param_1);
    iStack_160 = (int)sVar10;
  }
  local_98._12_4_ = uStack_15c;
  local_98.Size = iStack_160;
  local_98.DataPtr = local_168;
  bVar5 = FJsonObject::TryGetStringField(pFVar12,&local_98,&local_300);
  local_2a0 = *(undefined8 *)((longlong)this + 8);
  bVar6 = UE::Projects::Private::TryGetStringField
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_2a0,param_1,&local_2f0);
  if (bVar5 == bVar6) {
    if (local_300.Data.ArrayNum == local_2f0.Data.ArrayNum) {
      if (1 < local_300.Data.ArrayNum) {
        iVar7 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_300.Data.AllocatorInstance.Data,
                           (wchar_t *)local_2f0.Data.AllocatorInstance.Data);
        bVar5 = iVar7 == 0;
        goto LAB_141e11a86;
      }
    }
    else {
      bVar5 = local_300.Data.ArrayNum + local_2f0.Data.ArrayNum == 1;
LAB_141e11a86:
      if (!bVar5) {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar2 = pFVar11->CurrentTest;
        pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_148,L"String Mismatch");
        (*pcVar4)(pFVar2,&local_148,0);
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        goto LAB_141e11e32;
      }
    }
    local_2c0 = *(undefined8 *)((longlong)this + 8);
    local_2e0 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)0x0;
    UE::Json::GetArrayField
              (&local_228,
               (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_2c0,param_1);
    pFVar12 = TSharedPtr<FJsonObject,1>::operator->(*(TSharedPtr<FJsonObject,1> **)this);
    iStack_130 = iVar14;
    local_138 = param_1;
    if (param_1 != (wchar_t *)0x0) {
      sVar10 = wcslen(param_1);
      iStack_130 = (int)sVar10;
    }
    bVar5 = local_228.bIsSet;
    local_88._12_4_ = uStack_12c;
    local_88.Size = iStack_130;
    local_88.DataPtr = local_138;
    bVar6 = FJsonObject::TryGetArrayField(pFVar12,&local_88,&local_2e0);
    if (bVar6 == bVar5) {
      if (((local_2e0 == (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)0x0) ||
          (local_228.bIsSet == false)) ||
         (uVar9 = local_2e0->ArrayNum,
         uVar8 = rapidjson::
                 GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                 ::Size(&local_228.TypedValue), uVar9 == uVar8)) {
        local_2b8 = *(undefined8 *)((longlong)this + 8);
        local_2b0 = (TSharedPtr<FJsonObject,1> *)0x0;
        UE::Json::GetObjectField
                  (&local_78,
                   (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_2b8,param_1);
        pFVar12 = TSharedPtr<FJsonObject,1>::operator->(*(TSharedPtr<FJsonObject,1> **)this);
        iStack_100 = iVar14;
        local_108 = param_1;
        if (param_1 != (wchar_t *)0x0) {
          sVar10 = wcslen(param_1);
          iStack_100 = (int)sVar10;
        }
        local_68._12_4_ = uStack_fc;
        local_68.Size = iStack_100;
        local_68.DataPtr = local_108;
        bVar5 = FJsonObject::TryGetObjectField(pFVar12,&local_68,&local_2b0);
        if (bVar5 == local_78.bIsSet) {
          this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                     *)TSharedPtr<FJsonObject,1>::operator->(*(TSharedPtr<FJsonObject,1> **)this);
          local_e8 = param_1;
          if (param_1 != (wchar_t *)0x0) {
            sVar10 = wcslen(param_1);
            iVar14 = (int)sVar10;
          }
          local_58._12_4_ = uStack_dc;
          local_58.Size = iVar14;
          local_58.DataPtr = local_e8;
          iStack_e0 = iVar14;
          uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,param_1);
          pTVar13 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    ::FindByHash<TStringView<wchar_t>_>(this_00,uVar9,&local_58);
          if ((pTVar13 == (TSharedPtr<FJsonValue,1> *)0x0) ||
             (pFVar3 = pTVar13->Object, pFVar3 == (FJsonValue *)0x0)) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            bVar5 = false;
          }
          else {
            pTVar15 = (pTVar13->SharedReferenceCount).ReferenceController;
            if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
              UNLOCK();
              if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar15->SharedReferenceCount =
                     (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
                UNLOCK();
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar15);
            bVar5 = pFVar3->Type == Null;
          }
          local_2a8 = *(undefined8 *)((longlong)this + 8);
          bVar6 = UE::Json::HasNullField
                            ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                              *)&local_2a8,param_1);
          if (bVar5 != bVar6) {
            pFVar11 = FAutomationTestFramework::Get();
            pFVar2 = pFVar11->CurrentTest;
            pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
            ::FString::PrintfImpl(&local_208,L"%s: Null Type Parse Mismatch");
            if (local_208.Data.ArrayNum != 0) {
              pwVar16 = (wchar_t *)local_208.Data.AllocatorInstance.Data;
            }
            ::FString::FString(&local_d8,pwVar16);
            (*pcVar4)(pFVar2,&local_d8,0);
            if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            }
            if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_208.Data.AllocatorInstance.Data);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar15);
        }
        else {
          pFVar11 = FAutomationTestFramework::Get();
          pFVar2 = pFVar11->CurrentTest;
          pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::PrintfImpl(&local_218,L"%s: Object Parse Mismatch");
          if (local_218.Data.ArrayNum != 0) {
            pwVar16 = (wchar_t *)local_218.Data.AllocatorInstance.Data;
          }
          ::FString::FString(&local_f8,pwVar16);
          (*pcVar4)(pFVar2,&local_f8,0);
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
          if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar2 = pFVar11->CurrentTest;
        pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_118,L"Array Size Mismatch");
        (*pcVar4)(pFVar2,&local_118,0);
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar2 = pFVar11->CurrentTest;
      pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_238,L"%s: Array Parse Mismatch");
      if (local_238.Data.ArrayNum != 0) {
        pwVar16 = (wchar_t *)local_238.Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_128,pwVar16);
      (*pcVar4)(pFVar2,&local_128,0);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_248,L"%s: String Parse Mismatch: %d vs %d");
    if (local_248.Data.ArrayNum != 0) {
      pwVar16 = (wchar_t *)local_248.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_158,pwVar16);
    (*pcVar4)(pFVar2,&local_158,0);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
  }
LAB_141e11e32:
  local_178.Data.AllocatorInstance.Data = local_300.Data.AllocatorInstance.Data;
  if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
    local_178.Data.AllocatorInstance.Data = local_300.Data.AllocatorInstance.Data;
  }
LAB_141e11e46:
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  return;
}

// TestBody @ 141e3b7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FProjectsLoadingRapidJsonPluginLoading::TestBody
          (FProjectsLoadingRapidJsonPluginLoading *this,FString *param_1)

{
  undefined8 uVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  bool bVar11;
  bool bVar12;
  longlong lVar13;
  TJsonStringReader<wchar_t> *this_00;
  FAutomationTestFramework *pFVar14;
  size_t sVar15;
  FString *pFVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  TJsonStringReader<wchar_t> *pTVar19;
  ulonglong uVar20;
  undefined1 auStack_498 [32];
  TSharedPtr<FJsonObject,1> *local_478;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_470;
  FString local_468;
  TRawPtrProxy<TJsonStringReader<wchar_t>_> local_458;
  StackState local_450;
  FScriptContainerElement *local_418;
  int local_410;
  int local_40c;
  TSharedPtr<FJsonObject,1> local_408;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_3f8;
  FString local_3e8;
  wchar_t *local_3d8;
  int iStack_3d0;
  undefined4 uStack_3cc;
  wchar_t *local_3c8;
  int iStack_3c0;
  undefined4 uStack_3bc;
  FString local_3b8;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_3a8;
  TStringView<wchar_t> local_398;
  TStringView<wchar_t> local_388;
  FString local_378;
  FString local_368;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  local_358;
  wchar_t local_2e8 [352];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_498;
  pTVar19 = (TJsonStringReader<wchar_t> *)0x0;
  local_458.Object = local_458.Object & 0xffffffff00000000;
  lVar13 = 5;
  pwVar9 = local_2e8;
  pwVar10 = 
  L"\n{\n\t\"zero\": 0,\n\t\"min_int32\": -2147483648,\n\t\"max_int32\":  2147483647,\n\t\"max_uint32\": 4294967295,\n\t\"round_down\": 1.1,\n\t\"round_up\" : 1.9,\n\t\"negative_round_down\": -1.9,\n\t\"negative_round_up\" : -1.1,\n\t\"string\": \"hello world\",\n\t\"on\": true,\n\t\"off\": false,\n\t\"object\": {\n\t\t\"value\": 42\n\t},\n\t\"array\": [\n\t\t\"aaa\",\n\t\t\"bbb\",\n\t\t\"ccc\",\n\t\t\"ddd\"\n\t],\t\n\t\"null\": null\n}\n\n"
  ;
  do {
    pwVar18 = pwVar10;
    pwVar17 = pwVar9;
    uVar1 = *(undefined8 *)(pwVar18 + 4);
    uVar4 = *(undefined8 *)(pwVar18 + 8);
    uVar5 = *(undefined8 *)(pwVar18 + 0xc);
    *(undefined8 *)pwVar17 = *(undefined8 *)pwVar18;
    *(undefined8 *)(pwVar17 + 4) = uVar1;
    uVar1 = *(undefined8 *)(pwVar18 + 0x10);
    uVar6 = *(undefined8 *)(pwVar18 + 0x14);
    *(undefined8 *)(pwVar17 + 8) = uVar4;
    *(undefined8 *)(pwVar17 + 0xc) = uVar5;
    uVar4 = *(undefined8 *)(pwVar18 + 0x18);
    uVar5 = *(undefined8 *)(pwVar18 + 0x1c);
    *(undefined8 *)(pwVar17 + 0x10) = uVar1;
    *(undefined8 *)(pwVar17 + 0x14) = uVar6;
    uVar1 = *(undefined8 *)(pwVar18 + 0x20);
    uVar6 = *(undefined8 *)(pwVar18 + 0x24);
    *(undefined8 *)(pwVar17 + 0x18) = uVar4;
    *(undefined8 *)(pwVar17 + 0x1c) = uVar5;
    uVar4 = *(undefined8 *)(pwVar18 + 0x28);
    uVar5 = *(undefined8 *)(pwVar18 + 0x2c);
    *(undefined8 *)(pwVar17 + 0x20) = uVar1;
    *(undefined8 *)(pwVar17 + 0x24) = uVar6;
    uVar1 = *(undefined8 *)(pwVar18 + 0x30);
    uVar6 = *(undefined8 *)(pwVar18 + 0x34);
    *(undefined8 *)(pwVar17 + 0x28) = uVar4;
    *(undefined8 *)(pwVar17 + 0x2c) = uVar5;
    uVar4 = *(undefined8 *)(pwVar18 + 0x38);
    uVar5 = *(undefined8 *)(pwVar18 + 0x3c);
    *(undefined8 *)(pwVar17 + 0x30) = uVar1;
    *(undefined8 *)(pwVar17 + 0x34) = uVar6;
    *(undefined8 *)(pwVar17 + 0x38) = uVar4;
    *(undefined8 *)(pwVar17 + 0x3c) = uVar5;
    lVar13 = lVar13 + -1;
    pwVar9 = pwVar17 + 0x40;
    pwVar10 = pwVar18 + 0x40;
  } while (lVar13 != 0);
  uVar4 = *(undefined8 *)(pwVar18 + 0x44);
  uVar1 = *(undefined8 *)(pwVar18 + 0x58);
  uVar5 = *(undefined8 *)(pwVar18 + 0x48);
  uVar6 = *(undefined8 *)(pwVar18 + 0x4c);
  *(undefined8 *)(pwVar17 + 0x40) = *(undefined8 *)(pwVar18 + 0x40);
  *(undefined8 *)(pwVar17 + 0x44) = uVar4;
  uVar4 = *(undefined8 *)(pwVar18 + 0x50);
  uVar7 = *(undefined8 *)(pwVar18 + 0x54);
  *(undefined8 *)(pwVar17 + 0x48) = uVar5;
  *(undefined8 *)(pwVar17 + 0x4c) = uVar6;
  *(undefined8 *)(pwVar17 + 0x50) = uVar4;
  *(undefined8 *)(pwVar17 + 0x54) = uVar7;
  *(undefined8 *)(pwVar17 + 0x58) = uVar1;
  pwVar17[0x5c] = pwVar18[0x5c];
  ::FString::FString(&local_468,local_2e8);
  this_00 = ::operator_new(0x88);
  bVar8 = true;
  bVar12 = false;
  if (this_00 != (TJsonStringReader<wchar_t> *)0x0) {
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    *(undefined4 *)&this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 1;
    *(undefined2 *)&this_00->_padding_ = 0;
    this_00->_padding_ = (longlong)&___7__TJsonStringReader__W__6B_;
    (this_00->Content).Data.AllocatorInstance.Data = local_468.Data.AllocatorInstance.Data;
    local_468.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->Content).Data.ArrayNum = local_468.Data.ArrayNum;
    (this_00->Content).Data.ArrayMax = local_468.Data.ArrayMax;
    local_468.Data.ArrayNum = 0;
    local_468.Data.ArrayMax = 0;
    (this_00->Reader).Ptr = (FBufferReader *)0x0;
    TJsonStringReader<wchar_t>::InitReader(this_00);
    pTVar19 = this_00;
  }
  local_458.Object = pTVar19;
  TSharedRef<TJsonStringReader<wchar_t>,1>::
  TSharedRef<TJsonStringReader<wchar_t>,1><TJsonStringReader<wchar_t>_>(&local_3f8,&local_458);
  if (local_3f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3f8.SharedReferenceCount.ReferenceController);
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  local_450.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_450.Identifier.Data.ArrayNum = 0;
  local_450.Identifier.Data.ArrayMax = 0;
  local_408.Object = (FJsonObject *)0x0;
  local_408.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_450.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_450.Object.Object = (FJsonObject *)0x0;
  local_450.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_450.Array.ArrayNum = 0;
  local_450.Array.ArrayMax = 0;
  bVar11 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                     ((TJsonReader<wchar_t> *)local_3f8.Object,&local_450,None);
  if (bVar11) {
    bVar11 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_450,&local_408);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_450.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_450.Array.AllocatorInstance.Data,
               local_450.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_450.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_450.Array.AllocatorInstance.Data);
    }
    if (local_450.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_450.Identifier.Data.AllocatorInstance.Data);
    }
    if (bVar11) {
      local_3d8 = local_2e8;
      sVar15 = wcslen(local_2e8);
      iStack_3d0 = (int)sVar15;
      local_398._12_4_ = uStack_3cc;
      local_398.Size = iStack_3d0;
      local_398.DataPtr = local_3d8;
      UE::Json::Parse(&local_358,&local_398);
      uVar20 = (ulonglong)local_358.Variant.TypeIndex;
      if ((2 < uVar20) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0x12f,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar20) == '\0') {
        pFVar16 = ::FString::FString(&local_378,L"No Error");
        bVar8 = false;
        bVar12 = true;
      }
      else {
        if ((local_358.Variant.TypeIndex != 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index == TypeIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                ,0x97,L""), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_3c8 = local_2e8;
        sVar15 = wcslen(local_2e8);
        iStack_3c0 = (int)sVar15;
        local_388._12_4_ = uStack_3bc;
        local_388.Size = iStack_3c0;
        local_388.DataPtr = local_3c8;
        pFVar16 = UE::Json::FParseError::CreateMessage
                            ((FParseError *)&local_358,&local_368,&local_388);
      }
      local_418 = (pFVar16->Data).AllocatorInstance.Data;
      (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_410 = (pFVar16->Data).ArrayNum;
      local_40c = (pFVar16->Data).ArrayMax;
      (pFVar16->Data).ArrayNum = 0;
      (pFVar16->Data).ArrayMax = 0;
      if ((bVar12) && (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_378.Data.AllocatorInstance.Data);
      }
      if ((bVar8) && (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_368.Data.AllocatorInstance.Data);
      }
      uVar20 = (ulonglong)local_358.Variant.TypeIndex;
      if ((2 < uVar20) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0x12f,L""), bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar20 + 4) == '\0') {
        pFVar14 = FAutomationTestFramework::Get();
        (**(code **)(pFVar14->CurrentTest->_padding_ + 0x28))(pFVar14->CurrentTest,&local_418,0);
      }
      else {
        if ((local_358.Variant.TypeIndex != 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index == TypeIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                ,0x97,L""), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UE::Json::GetRootObject
                  (&local_3a8,
                   (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                    *)&local_358);
        if (local_3a8.bIsSet == false) {
          pFVar14 = FAutomationTestFramework::Get();
          pFVar2 = pFVar14->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_3b8,L"Required condition failed, interrupting test");
          (*pcVar3)(pFVar2,&local_3b8,0);
          if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
          }
        }
        else {
          local_478 = &local_408;
          local_470 = local_3a8.TypedValue.value_;
          `FProjectsLoadingRapidJsonPluginLoading::TestBody'::__l2::<lambda_1>::operator()
                    (&local_478,L"zero");
          `FProjectsLoadingRapidJsonPluginLoading::TestBody'::__l2::<lambda_1>::operator()
                    (&local_478,L"min_int32");
          `FProjectsLoadingRapidJsonPluginLoading::TestBody'::__l2::<lambda_1>::operator()
                    (&local_478,L"max_int32");
          `FProjectsLoadingRapidJsonPluginLoading::TestBody'::__l2::<lambda_1>::operator()
                    (&local_478,L"max_uint32");
          `FProjectsLoadingRapidJsonPluginLoading::TestBody'::__l2::<lambda_1>::operator()
                    (&local_478,L"round_down");
          `FProjectsLoadingRapidJsonPluginLoading::TestBody'::__l2::<lambda_1>::operator()
                    (&local_478,L"round_up");
          `FProjectsLoadingRapidJsonPluginLoading::TestBody'::__l2::<lambda_1>::operator()
                    (&local_478,L"negative_round_down");
          `FProjectsLoadingRapidJsonPluginLoading::TestBody'::__l2::<lambda_1>::operator()
                    (&local_478,L"negative_round_up");
          `FProjectsLoadingRapidJsonPluginLoading::TestBody'::__l2::<lambda_1>::operator()
                    (&local_478,L"string");
          `FProjectsLoadingRapidJsonPluginLoading::TestBody'::__l2::<lambda_1>::operator()
                    (&local_478,L"on");
          `FProjectsLoadingRapidJsonPluginLoading::TestBody'::__l2::<lambda_1>::operator()
                    (&local_478,L"off");
          `FProjectsLoadingRapidJsonPluginLoading::TestBody'::__l2::<lambda_1>::operator()
                    (&local_478,L"object");
          `FProjectsLoadingRapidJsonPluginLoading::TestBody'::__l2::<lambda_1>::operator()
                    (&local_478,L"array");
          `FProjectsLoadingRapidJsonPluginLoading::TestBody'::__l2::<lambda_1>::operator()
                    (&local_478,L"null");
        }
      }
      if (local_418 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_418);
      }
      if ((2 < local_358.Variant.TypeIndex) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_358.Variant.TypeIndex])(&local_358);
      goto LAB_141e3bde3;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_450.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_450.Array.AllocatorInstance.Data,
               local_450.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_450.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_450.Array.AllocatorInstance.Data);
    }
    if (local_450.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_450.Identifier.Data.AllocatorInstance.Data);
    }
  }
  pFVar14 = FAutomationTestFramework::Get();
  pFVar2 = pFVar14->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString(&local_3e8,L"Required condition failed, interrupting test");
  (*pcVar3)(pFVar2,&local_3e8,0);
  if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
  }
LAB_141e3bde3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_408.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3f8.SharedReferenceCount.ReferenceController);
  return;
}

