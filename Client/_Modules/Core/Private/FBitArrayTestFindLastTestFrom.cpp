// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// GetTestFlags @ 141ac6f40

EAutomationTestFlags __thiscall
FBitArrayTestFindLastTestFrom::GetTestFlags(FBitArrayTestFindLastTestFrom *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ac6f50

bool __thiscall FBitArrayTestFindLastTestFrom::IsStressTest(FBitArrayTestFindLastTestFrom *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ac6f60

uint __thiscall
FBitArrayTestFindLastTestFrom::GetRequiredDeviceNum(FBitArrayTestFindLastTestFrom *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ac6f70

FString * __thiscall
FBitArrayTestFindLastTestFrom::GetTestSourceFileName
          (FBitArrayTestFindLastTestFrom *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\BitArrayTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ac6fa0

int __thiscall
FBitArrayTestFindLastTestFrom::GetTestSourceFileLine(FBitArrayTestFindLastTestFrom *this)

{
  return 0x88d;
}

// GetTests @ 141ac6fb0

/* WARNING: Removing unreachable block (ram,0x000141ac712e) */

void __thiscall
FBitArrayTestFindLastTestFrom::GetTests
          (FBitArrayTestFindLastTestFrom *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ac7150

bool __thiscall
FBitArrayTestFindLastTestFrom::RunTest(FBitArrayTestFindLastTestFrom *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ac7180

FString * __thiscall
FBitArrayTestFindLastTestFrom::GetBeautifiedTestName
          (FBitArrayTestFindLastTestFrom *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FBitArrayTestFindLastTestFrom @ 141b1b1b0

FBitArrayTestFindLastTestFrom * __thiscall
FBitArrayTestFindLastTestFrom::FBitArrayTestFindLastTestFrom
          (FBitArrayTestFindLastTestFrom *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FBitArrayTestFindLastTestFrom__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::BitArray::FindLastFrom");
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

// operator() @ 141b2fe80

void __thiscall
`FBitArrayTestFindLastTestFrom::TestBody'::__l78::<lambda_1>::operator()
          (void *this,bool param_1,wchar_t *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  FAutomationTestFramework *pFVar4;
  FString local_28;
  
  this_00 = *(TBitArray<FDefaultBitArrayAllocator> **)this;
  iVar3 = TBitArray<FDefaultBitArrayAllocator>::FindLastFromImpl(this_00,param_1,0x20);
  if (iVar3 != 0x1c) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"Find last %s in an array starting from %i");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar3 = TBitArray<FDefaultBitArrayAllocator>::FindLastFromImpl(this_00,param_1,0x1d);
  if (iVar3 != 0x1c) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"Find last %s in an array starting from %i");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar3 = TBitArray<FDefaultBitArrayAllocator>::FindLastFromImpl(this_00,param_1,0x1c);
  if (iVar3 != 7) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"Find last %s in an array starting from %i");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar3 = TBitArray<FDefaultBitArrayAllocator>::FindLastFromImpl(this_00,param_1,8);
  if (iVar3 != 7) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"Find last %s in an array starting from %i");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar3 = TBitArray<FDefaultBitArrayAllocator>::FindLastFromImpl(this_00,param_1,5);
  if (iVar3 != 4) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"Find last %s in an array starting from %i");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar3 = TBitArray<FDefaultBitArrayAllocator>::FindLastFromImpl(this_00,param_1,4);
  if (iVar3 != 2) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"Find last %s in an array starting from %i");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar3 = TBitArray<FDefaultBitArrayAllocator>::FindLastFromImpl(this_00,param_1,2);
  if (iVar3 != -1) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"Find last %s in an array starting from %i");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar3 = TBitArray<FDefaultBitArrayAllocator>::FindLastFromImpl(this_00,param_1,1);
  if (iVar3 != -1) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"Find last %s in an array starting from %i");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar3 = TBitArray<FDefaultBitArrayAllocator>::FindLastFromImpl(this_00,param_1,0x21);
  if (iVar3 != 0x20) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"Find last %s in an array starting from %i");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar3 = TBitArray<FDefaultBitArrayAllocator>::FindLastFromImpl(this_00,param_1,0x22);
  if (iVar3 != 0x20) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"Find last %s in an array starting from %i");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar3 = TBitArray<FDefaultBitArrayAllocator>::FindLastFromImpl(this_00,param_1,0x38);
  if (iVar3 != 0x20) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"Find last %s in an array starting from %i");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar3 = TBitArray<FDefaultBitArrayAllocator>::FindLastFromImpl(this_00,param_1,0x39);
  if (iVar3 != 0x38) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"Find last %s in an array starting from %i");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar3 = TBitArray<FDefaultBitArrayAllocator>::FindLastFromImpl(this_00,param_1,0x3a);
  if (iVar3 != 0x38) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"Find last %s in an array starting from %i");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar3 = TBitArray<FDefaultBitArrayAllocator>::FindLastFromImpl(this_00,param_1,0x3f);
  if (iVar3 != 0x38) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"Find last %s in an array starting from %i");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar3 = TBitArray<FDefaultBitArrayAllocator>::FindLastFromImpl(this_00,param_1,0x40);
  if (iVar3 != 0x3f) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"Find last %s in an array starting from %i");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar3 = TBitArray<FDefaultBitArrayAllocator>::FindLastFromImpl(this_00,param_1,0x41);
  if (iVar3 != 0x3f) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"Find last %s in an array starting from %i");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar3 = TBitArray<FDefaultBitArrayAllocator>::FindLastFromImpl(this_00,param_1,0x42);
  if (iVar3 != 0x41) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"Find last %s in an array starting from %i");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar3 = TBitArray<FDefaultBitArrayAllocator>::FindLastFromImpl(this_00,param_1,0x60);
  if (iVar3 != 0x41) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"Find last %s in an array starting from %i");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// TestBody @ 141b64da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141b65992) */
/* WARNING: Removing unreachable block (ram,0x000141b659b7) */
/* WARNING: Removing unreachable block (ram,0x000141b659b8) */
/* WARNING: Removing unreachable block (ram,0x000141b659cd) */

void __thiscall
FBitArrayTestFindLastTestFrom::TestBody(FBitArrayTestFindLastTestFrom *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  longlong lVar3;
  FAutomationTestFramework *pFVar4;
  uint uVar5;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined1 auStackY_2a8 [32];
  TBitArray<FDefaultBitArrayAllocator> *local_278;
  undefined4 local_270;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  int local_250;
  int local_24c;
  int local_248;
  int local_244;
  int local_240;
  int local_23c;
  int local_238;
  int local_234;
  int local_230;
  FString local_228;
  FCheckScope local_218;
  FCheckScope local_208;
  FCheckScope local_1f8;
  FCheckScope local_1e8;
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
  FString local_118;
  FString local_108;
  FString local_f8;
  uint local_e8 [4];
  uint *local_d8;
  int local_d0;
  undefined4 local_cc;
  uint local_c8 [4];
  uint *local_b8;
  int local_b0;
  undefined4 local_ac;
  uint local_a8 [4];
  uint *local_98;
  int local_90;
  undefined4 local_8c;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68 [4];
  undefined4 *local_58;
  int local_50;
  undefined4 local_4c;
  uint local_48 [4];
  ulonglong local_38;
  ulonglong uVar6;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  FCheckScope::FCheckScope(&local_218);
  FCheckScope::GetCount(&local_218);
  FCheckScope::~FCheckScope(&local_218);
  FCheckScope::FCheckScope(&local_208);
  FCheckScope::GetCount(&local_208);
  FCheckScope::~FCheckScope(&local_208);
  uVar13 = 1;
  local_4c = 0x80;
  local_50 = 1;
  local_58 = (undefined4 *)0x0;
  local_68[0] = 1;
  FCheckScope::FCheckScope(&local_1f8);
  FCheckScope::GetCount(&local_1f8);
  FCheckScope::~FCheckScope(&local_1f8);
  FCheckScope::FCheckScope(&local_1e8);
  uVar11 = 0xffffffff;
  if (local_50 != 0) {
    puVar12 = local_68;
    if (local_58 != (undefined4 *)0x0) {
      puVar12 = local_58;
    }
    uVar5 = local_50 + 0x21U >> 5;
    uVar6 = (ulonglong)uVar5;
    uVar9 = 0xffffffff >> (-((char)local_50 + '\x02') & 0x1fU);
    if (uVar5 != 0) {
LAB_141b64ed0:
      uVar5 = (int)uVar6 - 1;
      uVar6 = (ulonglong)uVar5;
      if ((uVar9 & puVar12[uVar6]) == 0) goto code_r0x000141b64ed8;
      uVar6 = (ulonglong)(uVar9 & puVar12[uVar6]) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      local_270 = (undefined4)lVar3;
    }
  }
LAB_141b64ef0:
  FCheckScope::GetCount(&local_1e8);
  FCheckScope::~FCheckScope(&local_1e8);
  if (local_58 != (undefined4 *)0x0) {
    FMemory::Free(local_58);
  }
  local_d8 = (uint *)0x0;
  local_cc = 0x80;
  local_d0 = 0x20;
  local_e8[0] = 0xffffffff;
  uVar5 = 0xffffffff;
  uVar6 = 1;
  uVar9 = 1;
  while( true ) {
    uVar8 = (int)uVar6 - 1;
    uVar6 = (ulonglong)uVar8;
    if ((uVar9 & local_e8[uVar6]) != 0) break;
    uVar9 = uVar5;
    if (uVar8 == 0) goto LAB_141b64f7a;
  }
  uVar6 = (ulonglong)(uVar9 & local_e8[uVar6]) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar6 != 0) {
    for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  local_26c = (int)lVar3;
  if (local_26c + -1 + uVar8 * 0x20 != 0) {
LAB_141b64f7a:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Find last true in an array containing 32 true, starting from 0")
    ;
    (*pcVar2)(pFVar1,&local_1d8,0);
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  if (local_d0 == 0) {
LAB_141b6500e:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1c8,
                       L"Find last true in an array containing 32 true, starting from the middle");
    (*pcVar2)(pFVar1,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
  }
  else {
    uVar6 = 1;
    puVar7 = local_e8;
    uVar9 = 0x1ffff;
    if (local_d8 != (uint *)0x0) {
      puVar7 = local_d8;
      uVar9 = 0x1ffff;
    }
    while( true ) {
      uVar8 = (int)uVar6 - 1;
      uVar6 = (ulonglong)uVar8;
      if ((uVar9 & puVar7[uVar6]) != 0) break;
      uVar9 = uVar5;
      if (uVar8 == 0) goto LAB_141b6500e;
    }
    uVar6 = (ulonglong)(uVar9 & puVar7[uVar6]) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_268 = (int)lVar3;
    if (local_268 + -1 + uVar8 * 0x20 != 0x10) goto LAB_141b6500e;
  }
  if (local_d0 == 0) {
LAB_141b6509d:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1b8,
                       L"Find last true in an array containing 32 true, starting from the end");
    (*pcVar2)(pFVar1,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
  }
  else {
    uVar6 = 1;
    puVar7 = local_e8;
    if (local_d8 != (uint *)0x0) {
      puVar7 = local_d8;
    }
    while( true ) {
      uVar9 = (int)uVar6 - 1;
      uVar6 = (ulonglong)uVar9;
      if (puVar7[uVar6] != 0) break;
      if (uVar9 == 0) goto LAB_141b6509d;
    }
    uVar6 = (ulonglong)puVar7[uVar6] * 2 + 1;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_264 = (int)lVar3;
    if (local_264 + -1 + uVar9 * 0x20 != 0x1f) goto LAB_141b6509d;
  }
  if (local_d0 != 0) {
    uVar10 = 1;
    uVar6 = 1;
    puVar7 = local_e8;
    if (local_d8 != (uint *)0x0) {
      puVar7 = local_d8;
    }
LAB_141b65102:
    uVar9 = (int)uVar6 - 1;
    uVar6 = (ulonglong)uVar9;
    if (((uint)uVar10 & puVar7[uVar6]) == (uint)uVar10) goto code_r0x000141b65112;
    uVar6 = (~puVar7[uVar6] & uVar10) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_260 = (int)lVar3;
    if (local_260 + -1 + uVar9 * 0x20 != -1) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_1a8,
                         L"Find last false in an array containing 32 true, starting from 0");
      (*pcVar2)(pFVar1,&local_1a8,0);
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
    }
LAB_141b65184:
    if (local_d0 == 0) goto LAB_141b652c3;
    uVar10 = 0x1ffff;
    uVar6 = 1;
    puVar7 = local_e8;
    if (local_d8 != (uint *)0x0) {
      puVar7 = local_d8;
    }
LAB_141b651b0:
    uVar9 = (int)uVar6 - 1;
    uVar6 = (ulonglong)uVar9;
    if (((uint)uVar10 & puVar7[uVar6]) == (uint)uVar10) goto code_r0x000141b651c0;
    uVar6 = (~puVar7[uVar6] & uVar10) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_25c = (int)lVar3;
    if (local_25c + -1 + uVar9 * 0x20 != -1) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_198,
                         L"Find last false in an array containing 32 true, starting from the middle"
                        );
      (*pcVar2)(pFVar1,&local_198,0);
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
    }
LAB_141b65232:
    if (local_d0 == 0) goto LAB_141b652c3;
    uVar6 = 1;
    puVar7 = local_e8;
    if (local_d8 != (uint *)0x0) {
      puVar7 = local_d8;
    }
LAB_141b65250:
    uVar9 = (int)uVar6 - 1;
    uVar6 = (ulonglong)uVar9;
    if (puVar7[uVar6] == 0xffffffff) goto code_r0x000141b6525a;
    uVar6 = (ulonglong)~puVar7[uVar6] * 2 + 1;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_258 = (int)lVar3;
    if (local_258 + -1 + uVar9 * 0x20 != -1) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_188,
                         L"Find last false in an array containing 32 true, starting from the end");
      (*pcVar2)(pFVar1,&local_188,0);
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_141b652c3:
  if (local_d8 != (uint *)0x0) {
    FMemory::Free(local_d8);
  }
  local_b8 = (uint *)0x0;
  local_ac = 0x80;
  local_b0 = 0x20;
  local_c8[0] = 0;
  uVar10 = 1;
  uVar6 = 1;
LAB_141b65310:
  uVar9 = (int)uVar6 - 1;
  uVar6 = (ulonglong)uVar9;
  if (((uint)uVar10 & local_c8[uVar6]) == (uint)uVar10) goto code_r0x000141b65320;
  uVar6 = (~local_c8[uVar6] & uVar10) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar6 != 0) {
    for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  local_254 = (int)lVar3;
  if (local_254 + -1 + uVar9 * 0x20 != 0) goto LAB_141b6534b;
  goto LAB_141b6538f;
code_r0x000141b64ed8:
  uVar9 = uVar11;
  if (uVar5 == 0) goto LAB_141b64ef0;
  goto LAB_141b64ed0;
code_r0x000141b65112:
  uVar10 = 0xffffffff;
  if (uVar9 == 0) goto LAB_141b65184;
  goto LAB_141b65102;
code_r0x000141b651c0:
  uVar10 = 0xffffffff;
  if (uVar9 == 0) goto LAB_141b65232;
  goto LAB_141b651b0;
code_r0x000141b6525a:
  if (uVar9 == 0) goto LAB_141b652c3;
  goto LAB_141b65250;
code_r0x000141b65320:
  uVar10 = 0xffffffff;
  if (uVar9 == 0) goto LAB_141b6534b;
  goto LAB_141b65310;
code_r0x000141b654ec:
  uVar9 = 0xffffffff;
  if (uVar8 == 0) goto LAB_141b65555;
  goto LAB_141b654e4;
code_r0x000141b6557b:
  uVar9 = 0xffffffff;
  if (uVar8 == 0) goto LAB_141b655e5;
  goto LAB_141b65573;
code_r0x000141b6560d:
  if (uVar9 == 0) goto LAB_141b6567d;
  goto LAB_141b65603;
code_r0x000141b65778:
  uVar9 = uVar11;
  if (uVar8 == 0) goto LAB_141b657ea;
  goto LAB_141b65770;
LAB_141b6534b:
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_178,L"Find last false in an array containing 32 false, starting from 0")
  ;
  (*pcVar2)(pFVar1,&local_178,0);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
LAB_141b6538f:
  if (local_b0 == 0) {
LAB_141b653ee:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_168,
                       L"Find last false in an array containing 32 false, starting from the middle")
    ;
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  else {
    uVar10 = 1;
    uVar6 = 0x1ffff;
    puVar7 = local_c8;
    if (local_b8 != (uint *)0x0) {
      uVar6 = 0x1ffff;
      puVar7 = local_b8;
    }
    while( true ) {
      uVar9 = (int)uVar10 - 1;
      uVar10 = (ulonglong)uVar9;
      if (((uint)uVar6 & puVar7[uVar10]) != (uint)uVar6) break;
      uVar6 = 0xffffffff;
      if (uVar9 == 0) goto LAB_141b653ee;
    }
    uVar6 = (~puVar7[uVar10] & uVar6) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_250 = (int)lVar3;
    if (local_250 + -1 + uVar9 * 0x20 != 0x10) goto LAB_141b653ee;
  }
  if (local_b0 == 0) {
LAB_141b6547f:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_158,
                       L"Find last false in an array containing 32 false, starting from the end");
    (*pcVar2)(pFVar1,&local_158,0);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  else {
    uVar6 = 1;
    puVar7 = local_c8;
    if (local_b8 != (uint *)0x0) {
      puVar7 = local_b8;
    }
    while( true ) {
      uVar9 = (int)uVar6 - 1;
      uVar6 = (ulonglong)uVar9;
      if (puVar7[uVar6] != 0xffffffff) break;
      if (uVar9 == 0) goto LAB_141b6547f;
    }
    uVar6 = (ulonglong)~puVar7[uVar6] * 2 + 1;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_24c = (int)lVar3;
    if (local_24c + -1 + uVar9 * 0x20 != 0x1f) goto LAB_141b6547f;
  }
  if (local_b0 != 0) {
    uVar9 = 1;
    uVar6 = 1;
    puVar7 = local_c8;
    if (local_b8 != (uint *)0x0) {
      puVar7 = local_b8;
    }
LAB_141b654e4:
    uVar8 = (int)uVar6 - 1;
    uVar6 = (ulonglong)uVar8;
    if ((uVar9 & puVar7[uVar6]) == 0) goto code_r0x000141b654ec;
    uVar6 = (ulonglong)(uVar9 & puVar7[uVar6]) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_248 = (int)lVar3;
    if (local_248 + -1 + uVar8 * 0x20 != -1) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_148,
                         L"Find last true in an array containing 32 false, starting from 0");
      (*pcVar2)(pFVar1,&local_148,0);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
LAB_141b65555:
    if (local_b0 == 0) goto LAB_141b6567d;
    uVar6 = 1;
    puVar7 = local_c8;
    uVar9 = 0x1ffff;
    if (local_b8 != (uint *)0x0) {
      puVar7 = local_b8;
    }
LAB_141b65573:
    uVar8 = (int)uVar6 - 1;
    uVar6 = (ulonglong)uVar8;
    if ((uVar9 & puVar7[uVar6]) == 0) goto code_r0x000141b6557b;
    uVar6 = (ulonglong)(uVar9 & puVar7[uVar6]) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_244 = (int)lVar3;
    if (local_244 + -1 + uVar8 * 0x20 != -1) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_138,
                         L"Find last true in an array containing 32 false, starting from the middle"
                        );
      (*pcVar2)(pFVar1,&local_138,0);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
    }
LAB_141b655e5:
    if (local_b0 == 0) goto LAB_141b6567d;
    uVar6 = 1;
    puVar7 = local_c8;
    if (local_b8 != (uint *)0x0) {
      puVar7 = local_b8;
    }
LAB_141b65603:
    uVar9 = (int)uVar6 - 1;
    uVar6 = (ulonglong)uVar9;
    if (puVar7[uVar6] == 0) goto code_r0x000141b6560d;
    uVar6 = (ulonglong)puVar7[uVar6] * 2 + 1;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_240 = (int)lVar3;
    if (local_240 + -1 + uVar9 * 0x20 != -1) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_128,
                         L"Find last true in an array containing 32 false, starting from the end");
      (*pcVar2)(pFVar1,&local_128,0);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_141b6567d:
  if (local_b8 != (uint *)0x0) {
    FMemory::Free(local_b8);
  }
  local_98 = (uint *)0x0;
  local_8c = 0x80;
  local_90 = 4;
  local_a8[0] = 0xc;
  uVar9 = 1;
  uVar6 = 1;
  while( true ) {
    uVar8 = (int)uVar6 - 1;
    uVar6 = (ulonglong)uVar8;
    if ((uVar9 & local_a8[uVar6]) != 0) break;
    uVar9 = 0xffffffff;
    if (uVar8 == 0) goto LAB_141b6574d;
  }
  uVar6 = (ulonglong)(uVar9 & local_a8[uVar6]) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar6 != 0) {
    for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  local_23c = (int)lVar3;
  if (local_23c + -1 + uVar8 * 0x20 != -1) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_118,
                       L"Find last true in an array containing 32 false, starting from the end");
    (*pcVar2)(pFVar1,&local_118,0);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
LAB_141b6574d:
  if (local_90 != 0) {
    uVar6 = 1;
    puVar7 = local_a8;
    uVar9 = 3;
    if (local_98 != (uint *)0x0) {
      puVar7 = local_98;
    }
LAB_141b65770:
    uVar8 = (int)uVar6 - 1;
    uVar6 = (ulonglong)uVar8;
    if ((uVar9 & puVar7[uVar6]) == 0) goto code_r0x000141b65778;
    uVar6 = (ulonglong)(uVar9 & puVar7[uVar6]) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_238 = (int)lVar3;
    if (local_238 + -1 + uVar8 * 0x20 != -1) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_108,
                         L"Find last true in an array containing 32 false, starting from the end");
      (*pcVar2)(pFVar1,&local_108,0);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
    }
LAB_141b657ea:
    if (local_90 == 0) goto LAB_141b6583d;
    uVar6 = 1;
    puVar7 = local_a8;
    uVar9 = 7;
    if (local_98 != (uint *)0x0) {
      puVar7 = local_98;
    }
    while( true ) {
      uVar8 = (int)uVar6 - 1;
      uVar6 = (ulonglong)uVar8;
      if ((uVar9 & puVar7[uVar6]) != 0) break;
      uVar9 = uVar11;
      if (uVar8 == 0) goto LAB_141b6583d;
    }
    uVar6 = (ulonglong)(uVar9 & puVar7[uVar6]) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_234 = (int)lVar3;
    if (local_234 + -1 + uVar8 * 0x20 != 2) goto LAB_141b6583d;
    goto LAB_141b6588a;
  }
LAB_141b6583d:
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_f8,
                     L"Find last true in an array containing 32 false, starting from the end");
  (*pcVar2)(pFVar1,&local_f8,0);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
LAB_141b6588a:
  if (local_90 != 0) {
    puVar7 = local_a8;
    uVar11 = 0xf;
    if (local_98 != (uint *)0x0) {
      puVar7 = local_98;
    }
    do {
      uVar9 = (int)uVar13 - 1;
      uVar13 = (ulonglong)uVar9;
      if ((uVar11 & puVar7[uVar13]) != 0) {
        uVar13 = (ulonglong)(uVar11 & puVar7[uVar13]) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        local_230 = (int)lVar3;
        if (uVar9 * 0x20 + local_230 == 4) goto LAB_141b65919;
        break;
      }
      uVar11 = uVar5;
    } while (uVar9 != 0);
  }
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_228,
                     L"Find last true in an array containing 32 false, starting from the end");
  (*pcVar2)(pFVar1,&local_228,0);
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
LAB_141b65919:
  if (local_98 != (uint *)0x0) {
    FMemory::Free(local_98);
  }
  local_48[0] = 0x100000f4;
  local_48[1] = 0x81000001;
  local_48[2] = 2;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.MaxBits = 0x80;
  local_88.NumBits = 0x60;
  local_88.AllocatorInstance.InlineData[0] = '\0';
  local_88.AllocatorInstance.InlineData[1] = '\0';
  local_88.AllocatorInstance.InlineData[2] = '\0';
  local_88.AllocatorInstance.InlineData[3] = '\0';
  local_88.AllocatorInstance.InlineData[4] = '\0';
  local_88.AllocatorInstance.InlineData[5] = '\0';
  local_88.AllocatorInstance.InlineData[6] = '\0';
  local_88.AllocatorInstance.InlineData[7] = '\0';
  local_88.AllocatorInstance.InlineData[8] = '\0';
  local_88.AllocatorInstance.InlineData[9] = '\0';
  local_88.AllocatorInstance.InlineData[10] = '\0';
  local_88.AllocatorInstance.InlineData[0xb] = '\0';
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)&local_88,0,local_48,0,0x60);
  local_278 = &local_88;
  `FBitArrayTestFindLastTestFrom::TestBody'::__l78::<lambda_1>::operator()(&local_278,true,L"true");
  TBitArray<FDefaultBitArrayAllocator>::BitwiseNOT(&local_88);
  `FBitArrayTestFindLastTestFrom::TestBody'::__l78::<lambda_1>::operator()
            (&local_278,false,L"false");
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
  }
  return;
}

