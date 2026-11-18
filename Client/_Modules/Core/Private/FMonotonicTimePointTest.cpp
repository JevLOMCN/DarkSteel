// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141c5e040

EAutomationTestFlags __thiscall
UE::FMonotonicTimePointTest::GetTestFlags(FMonotonicTimePointTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141c5e060

bool __thiscall UE::FMonotonicTimePointTest::IsStressTest(FMonotonicTimePointTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141c5e070

uint __thiscall UE::FMonotonicTimePointTest::GetRequiredDeviceNum(FMonotonicTimePointTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141c5e090

FString * __thiscall
UE::FMonotonicTimePointTest::GetTestSourceFileName
          (FMonotonicTimePointTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\MonotonicTimeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141c5e0c0

int __thiscall UE::FMonotonicTimePointTest::GetTestSourceFileLine(FMonotonicTimePointTest *this)

{
  return 0x4f;
}

// GetTests @ 141c5e0e0

void __thiscall
UE::FMonotonicTimePointTest::GetTests
          (FMonotonicTimePointTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *this_00;
  FScriptContainerElement *pFVar4;
  FString *pFVar5;
  longlong lVar6;
  FString local_18;
  
  pFVar5 = &this->PrettyNameDotNotation;
  if (((param_1->AllocatorInstance).Data <= pFVar5) &&
     (pFVar5 < (param_1->AllocatorInstance).Data + (longlong)param_1->ArrayMax * 0x10)) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->ArrayNum == param_1->ArrayMax) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
    param_1->ArrayNum = iVar3;
  }
  iVar3 = param_1->ArrayNum;
  param_1->ArrayNum = param_1->ArrayNum + 1;
  this_00 = ::operator_new(0x10,(param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10);
  ::FString::FString(this_00,pFVar5);
  pFVar5 = &local_18;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&(pFVar5->Data).AllocatorInstance.Data = 0;
    pFVar5 = (FString *)((longlong)&(pFVar5->Data).AllocatorInstance.Data + 1);
  }
  pFVar4 = (FScriptContainerElement *)::FString::FString(&local_18);
  if (((param_2->AllocatorInstance).Data <= pFVar4) &&
     (pFVar4 < (param_2->AllocatorInstance).Data + (longlong)param_2->ArrayMax * 0x10)) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2->ArrayNum == param_2->ArrayMax) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    param_2->ArrayNum = iVar3;
  }
  iVar3 = param_2->ArrayNum;
  param_2->ArrayNum = param_2->ArrayNum + 1;
  pFVar5 = ::operator_new(0x10,(param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10);
  ::FString::FString(pFVar5,(FString *)pFVar4);
  ::FString::~FString(&local_18);
  return;
}

// RunTest @ 141c5e610

bool __thiscall UE::FMonotonicTimePointTest::RunTest(FMonotonicTimePointTest *this,FString *param_1)

{
  bool local_18;
  
  TestBody(this,param_1);
  local_18 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  local_18 = !local_18;
  return local_18;
}

// GetBeautifiedTestName @ 141c5e660

FString * __thiscall
UE::FMonotonicTimePointTest::GetBeautifiedTestName
          (FMonotonicTimePointTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FMonotonicTimePointTest @ 141c8d300

FMonotonicTimePointTest * __thiscall
UE::FMonotonicTimePointTest::FMonotonicTimePointTest(FMonotonicTimePointTest *this,FString *param_1)

{
  bool bVar1;
  EAutomationTestFlags EVar2;
  FString *pFVar3;
  FAutomationTestFramework *this_00;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  FAutomationTestBase::FAutomationTestBase((FAutomationTestBase *)this,param_1,false);
  this->_padding_ = (longlong)&___7FMonotonicTimePointTest_UE__6B_;
  ::FString::FString(&this->PrettyNameDotNotation);
  pFVar3 = ::FString::FString(&local_18,"[Core][Time][SmokeFilter]");
  EVar2 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar3);
  this->TestFlags = EVar2;
  pFVar3 = ::FString::FString(&local_28,"System::Core::Time::MonotonicTimePoint");
  pFVar3 = ::FString::Replace(pFVar3,&local_38,L"::",L".",IgnoreCase);
  ::FString::operator=(&this->PrettyNameDotNotation,pFVar3);
  ::FString::~FString(&local_38);
  ::FString::~FString(&local_28);
  EVar2 = ::operator&(this->TestFlags,
                      ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext);
  bVar1 = operator!(EVar2);
  if (bVar1) {
    operator|=(&this->TestFlags,
               ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext);
  }
  EVar2 = ::operator&(this->TestFlags,
                      NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)
  ;
  bVar1 = operator!(EVar2);
  if (bVar1) {
    operator|=(&this->TestFlags,EngineFilter);
  }
  this_00 = FAutomationTestFramework::Get();
  ::FString::FString(&local_48,"[Core][Time][SmokeFilter]");
  ::FString::FString(&local_58,&this->PrettyNameDotNotation);
  FAutomationTestFramework::RegisterAutomationTestTags(this_00,&local_58,&local_48,true);
  ::FString::~FString(&local_58);
  ::FString::~FString(&local_48);
  return this;
}

// TestBody @ 141caaff0

void __thiscall
UE::FMonotonicTimePointTest::TestBody(FMonotonicTimePointTest *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAutomationTestFramework *pFVar3;
  FAutomationTestBase *pFVar4;
  FMonotonicTimePoint FVar5;
  FMonotonicTimeSpan this_00;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50 [2];
  undefined1 local_28 [24];
  undefined1 local_10 [16];
  
  pFVar3 = FAutomationTestFramework::Get();
  pFVar4 = FAutomationTestFramework::GetCurrentTest(pFVar3);
  pcVar1 = *(code **)(pFVar4->_padding_ + 0x50);
  ::FString::FString(&local_c0,L"Constructors");
  (*pcVar1)(pFVar4,&local_c0,0,0);
  ::FString::~FString(&local_c0);
  pFVar3 = FAutomationTestFramework::Get();
  pFVar4 = FAutomationTestFramework::GetCurrentTest(pFVar3);
  pcVar1 = *(code **)(pFVar4->_padding_ + 0x50);
  ::FString::FString(&local_b0,L"Comparison");
  (*pcVar1)(pFVar4,&local_b0,0,0);
  ::FString::~FString(&local_b0);
  pFVar3 = FAutomationTestFramework::Get();
  pFVar4 = FAutomationTestFramework::GetCurrentTest(pFVar3);
  pcVar1 = *(code **)(pFVar4->_padding_ + 0x50);
  ::FString::FString(&local_a0,L"Infinity");
  (*pcVar1)(pFVar4,&local_a0,0,0);
  ::FString::~FString(&local_a0);
  pFVar3 = FAutomationTestFramework::Get();
  pFVar4 = FAutomationTestFramework::GetCurrentTest(pFVar3);
  pcVar1 = *(code **)(pFVar4->_padding_ + 0x50);
  ::FString::FString(&local_90,L"Addition");
  (*pcVar1)(pFVar4,&local_90,0,0);
  ::FString::~FString(&local_90);
  FVar5 = FMonotonicTimePoint::Infinity();
  this_00 = FMonotonicTimeSpan::Infinity();
  FMonotonicTimeSpan::operator-((FMonotonicTimeSpan *)this_00.Time);
  FVar5 = FMonotonicTimePoint::operator+(FVar5.Time,(FMonotonicTimeSpan)local_28);
  bVar2 = FMonotonicTimePoint::IsNaN((FMonotonicTimePoint *)FVar5.Time);
  if (!bVar2) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar4 = FAutomationTestFramework::GetCurrentTest(pFVar3);
    pcVar1 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_80,L"Condition failed");
    (*pcVar1)(pFVar4,&local_80,0);
    ::FString::~FString(&local_80);
  }
  pFVar3 = FAutomationTestFramework::Get();
  pFVar4 = FAutomationTestFramework::GetCurrentTest(pFVar3);
  pcVar1 = *(code **)(pFVar4->_padding_ + 0x50);
  ::FString::FString(&local_70,L"Subtraction");
  (*pcVar1)(pFVar4,&local_70,0,0);
  ::FString::~FString(&local_70);
  FVar5 = FMonotonicTimePoint::Infinity();
  FMonotonicTimeSpan::Infinity();
  FVar5 = FMonotonicTimePoint::operator-(FVar5.Time,(FMonotonicTimeSpan)local_10);
  bVar2 = FMonotonicTimePoint::IsNaN((FMonotonicTimePoint *)FVar5.Time);
  if (!bVar2) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar4 = FAutomationTestFramework::GetCurrentTest(pFVar3);
    pcVar1 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_60,L"Condition failed");
    (*pcVar1)(pFVar4,&local_60,0);
    ::FString::~FString(&local_60);
  }
  pFVar3 = FAutomationTestFramework::Get();
  pFVar4 = FAutomationTestFramework::GetCurrentTest(pFVar3);
  pcVar1 = *(code **)(pFVar4->_padding_ + 0x50);
  ::FString::FString(local_50,L"Span");
  (*pcVar1)(pFVar4,local_50,0,0);
  ::FString::~FString(local_50);
  return;
}

