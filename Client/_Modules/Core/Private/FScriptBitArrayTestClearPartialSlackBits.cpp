// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ac8a70

EAutomationTestFlags __thiscall
FScriptBitArrayTestClearPartialSlackBits::GetTestFlags
          (FScriptBitArrayTestClearPartialSlackBits *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ac8a80

bool __thiscall
FScriptBitArrayTestClearPartialSlackBits::IsStressTest
          (FScriptBitArrayTestClearPartialSlackBits *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ac8a90

uint __thiscall
FScriptBitArrayTestClearPartialSlackBits::GetRequiredDeviceNum
          (FScriptBitArrayTestClearPartialSlackBits *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ac8aa0

FString * __thiscall
FScriptBitArrayTestClearPartialSlackBits::GetTestSourceFileName
          (FScriptBitArrayTestClearPartialSlackBits *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\BitArrayTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ac8ad0

int __thiscall
FScriptBitArrayTestClearPartialSlackBits::GetTestSourceFileLine
          (FScriptBitArrayTestClearPartialSlackBits *this)

{
  return 0x913;
}

// GetTests @ 141ac8ae0

/* WARNING: Removing unreachable block (ram,0x000141ac8c5e) */

void __thiscall
FScriptBitArrayTestClearPartialSlackBits::GetTests
          (FScriptBitArrayTestClearPartialSlackBits *this,
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

// RunTest @ 141ac8cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FScriptBitArrayTestClearPartialSlackBits::RunTest
          (FScriptBitArrayTestClearPartialSlackBits *this,FString *param_1)

{
  bool bVar1;
  undefined1 auStack_58 [32];
  TBitArray<FDefaultBitArrayAllocator> local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_38.AllocatorInstance.InlineData[4] = 0xff;
  local_38.AllocatorInstance.InlineData[5] = 0xff;
  local_38.AllocatorInstance.InlineData[6] = 0xff;
  local_38.AllocatorInstance.InlineData[7] = 0xff;
  local_38.AllocatorInstance.InlineData[8] = 0xff;
  local_38.AllocatorInstance.InlineData[9] = 0xff;
  local_38.AllocatorInstance.InlineData[10] = 0xff;
  local_38.AllocatorInstance.InlineData[0xb] = 0xff;
  local_38.AllocatorInstance.InlineData[0xc] = 0xff;
  local_38.AllocatorInstance.InlineData[0xd] = 0xff;
  local_38.AllocatorInstance.InlineData[0xe] = 0xff;
  local_38.AllocatorInstance.InlineData[0xf] = 0xff;
  local_38.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_38.MaxBits = 0x80;
  local_38.NumBits = 1;
  local_38.AllocatorInstance.InlineData[0] = '\x01';
  local_38.AllocatorInstance.InlineData[1] = '\0';
  local_38.AllocatorInstance.InlineData[2] = '\0';
  local_38.AllocatorInstance.InlineData[3] = '\0';
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_38);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ac8d50

FString * __thiscall
FScriptBitArrayTestClearPartialSlackBits::GetBeautifiedTestName
          (FScriptBitArrayTestClearPartialSlackBits *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FScriptBitArrayTestClearPartialSlackBits @ 141b264d0

FScriptBitArrayTestClearPartialSlackBits * __thiscall
FScriptBitArrayTestClearPartialSlackBits::FScriptBitArrayTestClearPartialSlackBits
          (FScriptBitArrayTestClearPartialSlackBits *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FScriptBitArrayTestClearPartialSlackBits__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::BitArray::ScriptClearPartialSlackBits");
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

// TestBody @ 141b9a5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FScriptBitArrayTestClearPartialSlackBits::TestBody
          (FScriptBitArrayTestClearPartialSlackBits *this,FString *param_1)

{
  undefined1 auStack_58 [32];
  TBitArray<FDefaultBitArrayAllocator> local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_38.AllocatorInstance.InlineData[4] = 0xff;
  local_38.AllocatorInstance.InlineData[5] = 0xff;
  local_38.AllocatorInstance.InlineData[6] = 0xff;
  local_38.AllocatorInstance.InlineData[7] = 0xff;
  local_38.AllocatorInstance.InlineData[8] = 0xff;
  local_38.AllocatorInstance.InlineData[9] = 0xff;
  local_38.AllocatorInstance.InlineData[10] = 0xff;
  local_38.AllocatorInstance.InlineData[0xb] = 0xff;
  local_38.AllocatorInstance.InlineData[0xc] = 0xff;
  local_38.AllocatorInstance.InlineData[0xd] = 0xff;
  local_38.AllocatorInstance.InlineData[0xe] = 0xff;
  local_38.AllocatorInstance.InlineData[0xf] = 0xff;
  local_38.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_38.MaxBits = 0x80;
  local_38.NumBits = 1;
  local_38.AllocatorInstance.InlineData[0] = '\x01';
  local_38.AllocatorInstance.InlineData[1] = '\0';
  local_38.AllocatorInstance.InlineData[2] = '\0';
  local_38.AllocatorInstance.InlineData[3] = '\0';
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_38);
  return;
}

