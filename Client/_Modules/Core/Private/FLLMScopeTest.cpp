// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 14166bf70

EAutomationTestFlags __thiscall FLLMScopeTest::GetTestFlags(FLLMScopeTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 14166bf80

bool __thiscall FLLMScopeTest::IsStressTest(FLLMScopeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14166bf90

uint __thiscall FLLMScopeTest::GetRequiredDeviceNum(FLLMScopeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14166bfa0

FString * __thiscall
FLLMScopeTest::GetTestSourceFileName(FLLMScopeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\LowLevelMemTrackerTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14166bfd0

int __thiscall FLLMScopeTest::GetTestSourceFileLine(FLLMScopeTest *this)

{
  return 0x12;
}

// GetTests @ 14166bfe0

/* WARNING: Removing unreachable block (ram,0x00014166c0cd) */
/* WARNING: Removing unreachable block (ram,0x00014166c198) */

void __thiscall
FLLMScopeTest::GetTests
          (FLLMScopeTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.LLM.Scope");
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

// RunTest @ 14166c1c0

bool __thiscall FLLMScopeTest::RunTest(FLLMScopeTest *this,FString *param_1)

{
  FLLMTracker *pFVar1;
  FName FVar2;
  bool bVar3;
  FLowLevelMemTracker *pFVar4;
  FLowLevelMemTracker *pFVar5;
  FTagData *pFVar6;
  FLLMThreadState *pFVar7;
  FName *pFVar8;
  void *pvVar9;
  void *pvVar10;
  FTagData *pFVar11;
  ELLMTagSet EVar12;
  int *piVar13;
  ulonglong uVar14;
  ELLMTagSet EVar15;
  FName local_res18;
  FName local_res20;
  ELLMTagSet local_78;
  FMemScope local_70;
  FMemScope local_68;
  FName local_60;
  FMemScope local_58;
  FMemScope local_50;
  void *local_48;
  void *local_40;
  
  pFVar4 = FLowLevelMemTracker::Get();
  local_res18.ComparisonIndex.Value._0_1_ = FLowLevelMemTracker::EnabledState != Disabled;
  piVar13 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar13 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name29,L"LLMTestParentTag/LLMTestChildTag1");
    _Init_thread_footer(&::_TSS0);
  }
  FVar2 = LLMScope_Name29;
  bVar3 = false;
  pFVar11 = (FTagData *)0x0;
  EVar15 = (ELLMTagSet)local_res18.ComparisonIndex.Value;
  EVar12 = (ELLMTagSet)local_res18.ComparisonIndex.Value;
  if ((((FLowLevelMemTracker::EnabledState != Disabled) &&
       (pFVar5 = FLowLevelMemTracker::Get(), EVar15 = (ELLMTagSet)local_res18.ComparisonIndex.Value,
       EVar12 = (ELLMTagSet)local_res18.ComparisonIndex.Value,
       FLowLevelMemTracker::EnabledState != Disabled)) &&
      (FLowLevelMemTracker::BootstrapInitialise(pFVar5),
      EVar15 = (ELLMTagSet)local_res18.ComparisonIndex.Value,
      EVar12 = (ELLMTagSet)local_res18.ComparisonIndex.Value,
      FLowLevelMemTracker::EnabledState != Disabled)) &&
     (FLowLevelMemTracker::BootstrapInitialise(pFVar5),
     EVar15 = (ELLMTagSet)local_res18.ComparisonIndex.Value,
     EVar12 = (ELLMTagSet)local_res18.ComparisonIndex.Value, pFVar5->ActiveSets[0] != false)) {
    pFVar1 = pFVar5->Trackers[1];
    bVar3 = true;
    pFVar6 = FLowLevelMemTracker::FindOrAddTagData(pFVar1->LLMRef,FVar2,None,(FName)0x0,Scope);
    pFVar7 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar1);
    UE::LLMPrivate::FLLMThreadState::PushTag(pFVar7,pFVar6,None);
    EVar15 = Assets;
    EVar12 = None;
  }
  FMemScope::FMemScope(&local_70,&LLMScope_Name29,true);
  local_48 = operator_new__(0x28);
  if ((ELLMTagSet)local_res18.ComparisonIndex.Value != None) {
    pFVar8 = ::FName::FName(&local_res20,L"LLMTestParentTag_LLMTestChildTag1");
    FVar2 = *pFVar8;
    pFVar6 = pFVar11;
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      FLowLevelMemTracker::BootstrapInitialise(pFVar4);
      pFVar7 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar4->Trackers[1]);
      pFVar6 = UE::LLMPrivate::FLLMThreadState::GetTopTag(pFVar7,None);
    }
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,L"NameExisting has proper name",pFVar6->Name,FVar2);
    pFVar8 = ::FName::FName(&local_res20,L"LLMTestParentTag");
    FVar2 = *pFVar8;
    pFVar6 = pFVar11;
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      FLowLevelMemTracker::BootstrapInitialise(pFVar4);
      pFVar7 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar4->Trackers[1]);
      pFVar6 = UE::LLMPrivate::FLLMThreadState::GetTopTag(pFVar7,None);
    }
    pFVar6 = UE::LLMPrivate::FTagData::GetParent(pFVar6);
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,L"NameExisting has proper parent",pFVar6->Name,FVar2);
  }
  FMemScope::~FMemScope(&local_70);
  if (bVar3) {
    pFVar5 = FLowLevelMemTracker::Get();
    UE::LLMPrivate::FLLMTracker::PopTag(pFVar5->Trackers[EVar15],EVar12);
  }
  if ((*piVar13 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&LLMScope_Name38,L"LLMTestParentTag/LLMTestChildTag4");
    _Init_thread_footer(&::_TSS1);
  }
  FVar2 = LLMScope_Name38;
  bVar3 = false;
  if (((FLowLevelMemTracker::EnabledState == Disabled) ||
      (pFVar5 = FLowLevelMemTracker::Get(), FLowLevelMemTracker::EnabledState == Disabled)) ||
     ((FLowLevelMemTracker::BootstrapInitialise(pFVar5),
      FLowLevelMemTracker::EnabledState == Disabled ||
      (FLowLevelMemTracker::BootstrapInitialise(pFVar5), pFVar5->ActiveSets[0] == false)))) {
    uVar14 = (ulonglong)(ELLMTagSet)local_res18.ComparisonIndex.Value;
    EVar15 = (ELLMTagSet)local_res18.ComparisonIndex.Value;
  }
  else {
    pFVar1 = pFVar5->Trackers[1];
    bVar3 = true;
    uVar14 = 1;
    pFVar6 = FLowLevelMemTracker::FindOrAddTagData(pFVar1->LLMRef,FVar2,None,(FName)0x0,Scope);
    pFVar7 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar1);
    UE::LLMPrivate::FLLMThreadState::PushTag(pFVar7,pFVar6,None);
    EVar15 = None;
  }
  FMemScope::FMemScope(&local_68,&LLMScope_Name38,true);
  local_40 = operator_new__(0x28);
  if ((ELLMTagSet)local_res18.ComparisonIndex.Value != None) {
    pFVar8 = ::FName::FName(&local_res20,L"LLMTestParentTag_LLMTestChildTag4");
    FVar2 = *pFVar8;
    pFVar6 = pFVar11;
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      FLowLevelMemTracker::BootstrapInitialise(pFVar4);
      pFVar7 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar4->Trackers[1]);
      pFVar6 = UE::LLMPrivate::FLLMThreadState::GetTopTag(pFVar7,None);
    }
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,L"NameNew has proper name",pFVar6->Name,FVar2);
    pFVar8 = ::FName::FName(&local_res20,L"LLMTestParentTag");
    FVar2 = *pFVar8;
    pFVar6 = pFVar11;
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      FLowLevelMemTracker::BootstrapInitialise(pFVar4);
      pFVar7 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar4->Trackers[1]);
      pFVar6 = UE::LLMPrivate::FLLMThreadState::GetTopTag(pFVar7,None);
    }
    pFVar6 = UE::LLMPrivate::FTagData::GetParent(pFVar6);
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,L"NameNew has proper parent",pFVar6->Name,FVar2);
  }
  FMemScope::~FMemScope(&local_68);
  if (bVar3) {
    pFVar5 = FLowLevelMemTracker::Get();
    UE::LLMPrivate::FLLMTracker::PopTag(pFVar5->Trackers[uVar14],EVar15);
  }
  FVar2 = LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag2.UniqueName;
  bVar3 = false;
  if ((((FLowLevelMemTracker::EnabledState != Disabled) &&
       (pFVar5 = FLowLevelMemTracker::Get(), FLowLevelMemTracker::EnabledState != Disabled)) &&
      (FLowLevelMemTracker::BootstrapInitialise(pFVar5),
      FLowLevelMemTracker::EnabledState != Disabled)) &&
     (FLowLevelMemTracker::BootstrapInitialise(pFVar5), pFVar5->ActiveSets[0] != false)) {
    pFVar1 = pFVar5->Trackers[1];
    bVar3 = true;
    local_res20.ComparisonIndex.Value._0_1_ = Assets;
    local_78 = None;
    pFVar6 = FLowLevelMemTracker::FindOrAddTagData(pFVar1->LLMRef,FVar2,None,(FName)0x0,Scope);
    pFVar7 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar1);
    UE::LLMPrivate::FLLMThreadState::PushTag(pFVar7,pFVar6,None);
  }
  local_60 = LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag2.UniqueName;
  FMemScope::FMemScope(&local_58,&local_60,true);
  pvVar9 = operator_new__(0x28);
  EVar15 = (ELLMTagSet)local_res18.ComparisonIndex.Value;
  if ((ELLMTagSet)local_res18.ComparisonIndex.Value != None) {
    pFVar8 = ::FName::FName(&local_res18,L"LLMTestParentTag_LLMTestChildTag2");
    FVar2 = *pFVar8;
    pFVar6 = pFVar11;
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      FLowLevelMemTracker::BootstrapInitialise(pFVar4);
      pFVar7 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar4->Trackers[1]);
      pFVar6 = UE::LLMPrivate::FLLMThreadState::GetTopTag(pFVar7,None);
    }
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,L"ByTag has proper name",pFVar6->Name,FVar2);
    pFVar8 = ::FName::FName(&local_res18,L"LLMTestParentTag");
    FVar2 = *pFVar8;
    pFVar6 = pFVar11;
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      FLowLevelMemTracker::BootstrapInitialise(pFVar4);
      pFVar7 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar4->Trackers[1]);
      pFVar6 = UE::LLMPrivate::FLLMThreadState::GetTopTag(pFVar7,None);
    }
    pFVar6 = UE::LLMPrivate::FTagData::GetParent(pFVar6);
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,L"ByTag has proper parent",pFVar6->Name,FVar2);
  }
  FMemScope::~FMemScope(&local_58);
  if (bVar3) {
    pFVar5 = FLowLevelMemTracker::Get();
    UE::LLMPrivate::FLLMTracker::PopTag
              (pFVar5->Trackers[(ELLMTagSet)local_res20.ComparisonIndex.Value],local_78);
  }
  FVar2 = LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag3.UniqueName;
  bVar3 = false;
  if (((FLowLevelMemTracker::EnabledState != Disabled) &&
      (pFVar5 = FLowLevelMemTracker::Get(), FLowLevelMemTracker::EnabledState != Disabled)) &&
     ((FLowLevelMemTracker::BootstrapInitialise(pFVar5),
      FLowLevelMemTracker::EnabledState != Disabled &&
      (FLowLevelMemTracker::BootstrapInitialise(pFVar5), pFVar5->ActiveSets[0] != false)))) {
    pFVar1 = pFVar5->Trackers[1];
    bVar3 = true;
    local_res18.ComparisonIndex.Value._0_1_ = Assets;
    local_res20.ComparisonIndex.Value._0_1_ = None;
    pFVar6 = FLowLevelMemTracker::FindOrAddTagData(pFVar1->LLMRef,FVar2,None,(FName)0x0,Scope);
    pFVar7 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar1);
    UE::LLMPrivate::FLLMThreadState::PushTag(pFVar7,pFVar6,None);
  }
  local_60 = LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag3.UniqueName;
  FMemScope::FMemScope(&local_50,&local_60,true);
  pvVar10 = operator_new__(0x28);
  if (EVar15 != None) {
    pFVar8 = ::FName::FName(&local_60,L"LLMTestParentTag_LLMTestChildTag3");
    FVar2 = *pFVar8;
    pFVar6 = pFVar11;
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      FLowLevelMemTracker::BootstrapInitialise(pFVar4);
      pFVar7 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar4->Trackers[1]);
      pFVar6 = UE::LLMPrivate::FLLMThreadState::GetTopTag(pFVar7,None);
    }
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,L"Parsed parent tag has proper name",pFVar6->Name,FVar2);
    pFVar8 = ::FName::FName(&local_60,L"LLMTestParentTag");
    FVar2 = *pFVar8;
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      FLowLevelMemTracker::BootstrapInitialise(pFVar4);
      pFVar7 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar4->Trackers[1]);
      pFVar11 = UE::LLMPrivate::FLLMThreadState::GetTopTag(pFVar7,None);
    }
    pFVar11 = UE::LLMPrivate::FTagData::GetParent(pFVar11);
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,L"Parsed parent tag has proper parent",pFVar11->Name,
               FVar2);
  }
  FMemScope::~FMemScope(&local_50);
  if (bVar3) {
    pFVar4 = FLowLevelMemTracker::Get();
    UE::LLMPrivate::FLLMTracker::PopTag
              (pFVar4->Trackers[(ELLMTagSet)local_res18.ComparisonIndex.Value],
               (ELLMTagSet)local_res20.ComparisonIndex.Value);
  }
  operator_delete__(local_48);
  operator_delete__(local_40);
  operator_delete__(pvVar9);
  operator_delete__(pvVar10);
  return true;
}

// GetBeautifiedTestName @ 14166c990

FString * __thiscall
FLLMScopeTest::GetBeautifiedTestName(FLLMScopeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.LLM.Scope");
  return __return_storage_ptr__;
}

