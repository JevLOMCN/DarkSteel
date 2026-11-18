// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cb8b70

EAutomationTestFlags __thiscall
FBase64EncodeDecodeRFCTestVectorsTest::GetTestFlags(FBase64EncodeDecodeRFCTestVectorsTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cb8b80

bool __thiscall
FBase64EncodeDecodeRFCTestVectorsTest::IsStressTest(FBase64EncodeDecodeRFCTestVectorsTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cb8b90

uint __thiscall
FBase64EncodeDecodeRFCTestVectorsTest::GetRequiredDeviceNum
          (FBase64EncodeDecodeRFCTestVectorsTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cb8ba0

FString * __thiscall
FBase64EncodeDecodeRFCTestVectorsTest::GetTestSourceFileName
          (FBase64EncodeDecodeRFCTestVectorsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\Base64Test.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cb8bd0

int __thiscall
FBase64EncodeDecodeRFCTestVectorsTest::GetTestSourceFileLine
          (FBase64EncodeDecodeRFCTestVectorsTest *this)

{
  return 0x3a;
}

// GetTests @ 141cb8c30

/* WARNING: Removing unreachable block (ram,0x000141cb8dae) */

void __thiscall
FBase64EncodeDecodeRFCTestVectorsTest::GetTests
          (FBase64EncodeDecodeRFCTestVectorsTest *this,
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

// RunTest @ 141cb8dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FBase64EncodeDecodeRFCTestVectorsTest::RunTest
          (FBase64EncodeDecodeRFCTestVectorsTest *this,FString *param_1)

{
  ulonglong *puVar1;
  bool bVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined1 auStack_118 [32];
  FBase64StringTest local_f8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_118;
  ::FString::FString(&local_f8.EncodeInput,L"");
  ::FString::FString(&local_f8.EncodeOutput,L"");
  ::FString::FString(&local_d8,L"f");
  ::FString::FString(&local_c8,L"Zg==");
  ::FString::FString(&local_b8,L"fo");
  ::FString::FString(&local_a8,L"Zm8=");
  ::FString::FString(&local_98,L"foo");
  ::FString::FString(&local_88,L"Zm9v");
  ::FString::FString(&local_78,L"foob");
  ::FString::FString(&local_68,L"Zm9vYg==");
  ::FString::FString(&local_58,L"fooba");
  ::FString::FString(&local_48,L"Zm9vYmE=");
  ::FString::FString(&local_38,L"foobar");
  ::FString::FString(&local_28,L"Zm9vYmFy");
  RunRoundTripSuccessfulBase64Tests<7,FBase64StringTest>
            ((FBase64StringTest (*) [7])&local_f8,Standard);
  RunRoundTripSuccessfulBase64Tests<7,FBase64StringTest>
            ((FBase64StringTest (*) [7])&local_f8,UrlSafe);
  puVar3 = local_18;
  lVar4 = 7;
  do {
    puVar1 = puVar3 + -2;
    puVar3 = puVar3 + -4;
    lVar4 = lVar4 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    if ((void *)*puVar3 != (void *)0x0) {
      FMemory::Free((void *)*puVar3);
    }
  } while (lVar4 != 0);
  bVar2 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar2;
}

// GetBeautifiedTestName @ 141cb8f90

FString * __thiscall
FBase64EncodeDecodeRFCTestVectorsTest::GetBeautifiedTestName
          (FBase64EncodeDecodeRFCTestVectorsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FBase64EncodeDecodeRFCTestVectorsTest @ 141ce3120

FBase64EncodeDecodeRFCTestVectorsTest * __thiscall
FBase64EncodeDecodeRFCTestVectorsTest::FBase64EncodeDecodeRFCTestVectorsTest
          (FBase64EncodeDecodeRFCTestVectorsTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FBase64EncodeDecodeRFCTestVectorsTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][base64][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Serialization::Base64::encode/decode RFC test vectors")
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

// TestBody @ 141d03e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FBase64EncodeDecodeRFCTestVectorsTest::TestBody
          (FBase64EncodeDecodeRFCTestVectorsTest *this,FString *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  FBase64StringTest local_f8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_118;
  ::FString::FString(&local_f8.EncodeInput,L"");
  ::FString::FString(&local_f8.EncodeOutput,L"");
  ::FString::FString(&local_d8,L"f");
  ::FString::FString(&local_c8,L"Zg==");
  ::FString::FString(&local_b8,L"fo");
  ::FString::FString(&local_a8,L"Zm8=");
  ::FString::FString(&local_98,L"foo");
  ::FString::FString(&local_88,L"Zm9v");
  ::FString::FString(&local_78,L"foob");
  ::FString::FString(&local_68,L"Zm9vYg==");
  ::FString::FString(&local_58,L"fooba");
  ::FString::FString(&local_48,L"Zm9vYmE=");
  ::FString::FString(&local_38,L"foobar");
  ::FString::FString(&local_28,L"Zm9vYmFy");
  RunRoundTripSuccessfulBase64Tests<7,FBase64StringTest>
            ((FBase64StringTest (*) [7])&local_f8,Standard);
  RunRoundTripSuccessfulBase64Tests<7,FBase64StringTest>
            ((FBase64StringTest (*) [7])&local_f8,UrlSafe);
  puVar2 = local_18;
  lVar3 = 7;
  do {
    puVar1 = puVar2 + -2;
    puVar2 = puVar2 + -4;
    lVar3 = lVar3 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    if ((void *)*puVar2 != (void *)0x0) {
      FMemory::Free((void *)*puVar2);
    }
  } while (lVar3 != 0);
  return;
}

