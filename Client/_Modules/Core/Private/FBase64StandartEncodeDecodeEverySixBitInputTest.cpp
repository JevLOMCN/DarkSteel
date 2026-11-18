// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cb9b90

EAutomationTestFlags __thiscall
FBase64StandartEncodeDecodeEverySixBitInputTest::GetTestFlags
          (FBase64StandartEncodeDecodeEverySixBitInputTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cb9ba0

bool __thiscall
FBase64StandartEncodeDecodeEverySixBitInputTest::IsStressTest
          (FBase64StandartEncodeDecodeEverySixBitInputTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cb9bb0

uint __thiscall
FBase64StandartEncodeDecodeEverySixBitInputTest::GetRequiredDeviceNum
          (FBase64StandartEncodeDecodeEverySixBitInputTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cb9bc0

FString * __thiscall
FBase64StandartEncodeDecodeEverySixBitInputTest::GetTestSourceFileName
          (FBase64StandartEncodeDecodeEverySixBitInputTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\Base64Test.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cb9bf0

int __thiscall
FBase64StandartEncodeDecodeEverySixBitInputTest::GetTestSourceFileLine
          (FBase64StandartEncodeDecodeEverySixBitInputTest *this)

{
  return 0x4e;
}

// GetTests @ 141cb9c50

/* WARNING: Removing unreachable block (ram,0x000141cb9dce) */

void __thiscall
FBase64StandartEncodeDecodeEverySixBitInputTest::GetTests
          (FBase64StandartEncodeDecodeEverySixBitInputTest *this,
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

// RunTest @ 141cb9df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FBase64StandartEncodeDecodeEverySixBitInputTest::RunTest
          (FBase64StandartEncodeDecodeEverySixBitInputTest *this,FString *param_1)

{
  bool bVar1;
  undefined1 auStack_78 [32];
  TBase64Test<48> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58.EncodeInput[0] = '\0';
  local_58.EncodeInput[1] = '\x10';
  local_58.EncodeInput[2] = 0x83;
  local_58.EncodeInput[3] = '\x10';
  local_58.EncodeInput[4] = 'Q';
  local_58.EncodeInput[5] = 0x87;
  local_58.EncodeInput[6] = ' ';
  local_58.EncodeInput[7] = 0x92;
  local_58.EncodeInput[8] = 0x8b;
  local_58.EncodeInput[9] = '0';
  local_58.EncodeInput[10] = 0xd3;
  local_58.EncodeInput[0xb] = 0x8f;
  local_58.EncodeInput[0xc] = 'A';
  local_58.EncodeInput[0xd] = '\x14';
  local_58.EncodeInput[0xe] = 0x93;
  local_58.EncodeInput[0xf] = 'Q';
  local_58.EncodeInput[0x10] = 'U';
  local_58.EncodeInput[0x11] = 0x97;
  local_58.EncodeInput[0x12] = 'a';
  local_58.EncodeInput[0x13] = 0x96;
  local_58.EncodeInput[0x14] = 0x9b;
  local_58.EncodeInput[0x15] = 'q';
  local_58.EncodeInput[0x16] = 0xd7;
  local_58.EncodeInput[0x17] = 0x9f;
  local_58.EncodeInput[0x18] = 0x82;
  local_58.EncodeInput[0x19] = '\x18';
  local_58.EncodeInput[0x1a] = 0xa3;
  local_58.EncodeInput[0x1b] = 0x92;
  local_58.EncodeInput[0x1c] = 'Y';
  local_58.EncodeInput[0x1d] = 0xa7;
  local_58.EncodeInput[0x1e] = 0xa2;
  local_58.EncodeInput[0x1f] = 0x9a;
  local_58.EncodeInput[0x20] = 0xab;
  local_58.EncodeInput[0x21] = 0xb2;
  local_58.EncodeInput[0x22] = 0xdb;
  local_58.EncodeInput[0x23] = 0xaf;
  local_58.EncodeInput[0x24] = 0xc3;
  local_58.EncodeInput[0x25] = '\x1c';
  local_58.EncodeInput[0x26] = 0xb3;
  local_58.EncodeInput[0x27] = 0xd3;
  local_58.EncodeInput[0x28] = ']';
  local_58.EncodeInput[0x29] = 0xb7;
  local_58.EncodeInput[0x2a] = 0xe3;
  local_58.EncodeInput[0x2b] = 0x9e;
  local_58.EncodeInput[0x2c] = 0xbb;
  local_58.EncodeInput[0x2d] = 0xf3;
  local_58.EncodeInput[0x2e] = 0xdf;
  local_58.EncodeInput[0x2f] = 0xbf;
  ::FString::FString(&local_58.EncodeOutput,
                     L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
  RunRoundTripSuccessfulBase64Tests<1,TBase64Test<48>_>((TBase64Test<48> (*) [1])&local_58,Standard)
  ;
  if (local_58.EncodeOutput.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.EncodeOutput.Data.AllocatorInstance.Data);
  }
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cb9ec0

FString * __thiscall
FBase64StandartEncodeDecodeEverySixBitInputTest::GetBeautifiedTestName
          (FBase64StandartEncodeDecodeEverySixBitInputTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FBase64StandartEncodeDecodeEverySixBitInputTest @ 141ce34c0

FBase64StandartEncodeDecodeEverySixBitInputTest * __thiscall
FBase64StandartEncodeDecodeEverySixBitInputTest::FBase64StandartEncodeDecodeEverySixBitInputTest
          (FBase64StandartEncodeDecodeEverySixBitInputTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FBase64StandartEncodeDecodeEverySixBitInputTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][base64][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Serialization::Base64::Standard encode/decode every 6 bit input"
                             );
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
  ::FString::FString(&local_18,"[Core][base64][SmokeFilter]");
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

// TestBody @ 141d040b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FBase64StandartEncodeDecodeEverySixBitInputTest::TestBody
          (FBase64StandartEncodeDecodeEverySixBitInputTest *this,FString *param_1)

{
  undefined1 auStack_78 [32];
  TBase64Test<48> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58.EncodeInput[0] = '\0';
  local_58.EncodeInput[1] = '\x10';
  local_58.EncodeInput[2] = 0x83;
  local_58.EncodeInput[3] = '\x10';
  local_58.EncodeInput[4] = 'Q';
  local_58.EncodeInput[5] = 0x87;
  local_58.EncodeInput[6] = ' ';
  local_58.EncodeInput[7] = 0x92;
  local_58.EncodeInput[8] = 0x8b;
  local_58.EncodeInput[9] = '0';
  local_58.EncodeInput[10] = 0xd3;
  local_58.EncodeInput[0xb] = 0x8f;
  local_58.EncodeInput[0xc] = 'A';
  local_58.EncodeInput[0xd] = '\x14';
  local_58.EncodeInput[0xe] = 0x93;
  local_58.EncodeInput[0xf] = 'Q';
  local_58.EncodeInput[0x10] = 'U';
  local_58.EncodeInput[0x11] = 0x97;
  local_58.EncodeInput[0x12] = 'a';
  local_58.EncodeInput[0x13] = 0x96;
  local_58.EncodeInput[0x14] = 0x9b;
  local_58.EncodeInput[0x15] = 'q';
  local_58.EncodeInput[0x16] = 0xd7;
  local_58.EncodeInput[0x17] = 0x9f;
  local_58.EncodeInput[0x18] = 0x82;
  local_58.EncodeInput[0x19] = '\x18';
  local_58.EncodeInput[0x1a] = 0xa3;
  local_58.EncodeInput[0x1b] = 0x92;
  local_58.EncodeInput[0x1c] = 'Y';
  local_58.EncodeInput[0x1d] = 0xa7;
  local_58.EncodeInput[0x1e] = 0xa2;
  local_58.EncodeInput[0x1f] = 0x9a;
  local_58.EncodeInput[0x20] = 0xab;
  local_58.EncodeInput[0x21] = 0xb2;
  local_58.EncodeInput[0x22] = 0xdb;
  local_58.EncodeInput[0x23] = 0xaf;
  local_58.EncodeInput[0x24] = 0xc3;
  local_58.EncodeInput[0x25] = '\x1c';
  local_58.EncodeInput[0x26] = 0xb3;
  local_58.EncodeInput[0x27] = 0xd3;
  local_58.EncodeInput[0x28] = ']';
  local_58.EncodeInput[0x29] = 0xb7;
  local_58.EncodeInput[0x2a] = 0xe3;
  local_58.EncodeInput[0x2b] = 0x9e;
  local_58.EncodeInput[0x2c] = 0xbb;
  local_58.EncodeInput[0x2d] = 0xf3;
  local_58.EncodeInput[0x2e] = 0xdf;
  local_58.EncodeInput[0x2f] = 0xbf;
  ::FString::FString(&local_58.EncodeOutput,
                     L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
  RunRoundTripSuccessfulBase64Tests<1,TBase64Test<48>_>((TBase64Test<48> (*) [1])&local_58,Standard)
  ;
  if (local_58.EncodeOutput.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.EncodeOutput.Data.AllocatorInstance.Data);
  }
  return;
}

