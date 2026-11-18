// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// GetTestFlags @ 141cbbb60

EAutomationTestFlags __thiscall FBase64NegativeTest::GetTestFlags(FBase64NegativeTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cbbb70

bool __thiscall FBase64NegativeTest::IsStressTest(FBase64NegativeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cbbb80

uint __thiscall FBase64NegativeTest::GetRequiredDeviceNum(FBase64NegativeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cbbb90

FString * __thiscall
FBase64NegativeTest::GetTestSourceFileName
          (FBase64NegativeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\Base64Test.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cbbbc0

int __thiscall FBase64NegativeTest::GetTestSourceFileLine(FBase64NegativeTest *this)

{
  return 0x8b;
}

// GetTests @ 141cbbbd0

/* WARNING: Removing unreachable block (ram,0x000141cbbd4e) */

void __thiscall
FBase64NegativeTest::GetTests
          (FBase64NegativeTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cbbd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FBase64NegativeTest::RunTest(FBase64NegativeTest *this,FString *param_1)

{
  bool bVar1;
  undefined ***pppuVar2;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_20 = (undefined ***)0x0;
  local_30 = `FBase64NegativeTest::TestBody'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_38 = &___7__TFunction_OwnedObject_P6A_NH_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_48[0] = UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(int),bool,int>::Call
  ;
  RunNegativeDecodeBase64Test(Standard,(TFunction<bool___cdecl(int)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar2 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar2 = local_20;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_20 = (undefined ***)0x0;
  local_30 = `FBase64NegativeTest::TestBody'::__l2::<lambda_2>::<lambda_invoker_cdecl>;
  local_38 = &___7__TFunction_OwnedObject_P6A_NH_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_48[0] = UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(int),bool,int>::Call
  ;
  RunNegativeDecodeBase64Test(UrlSafe,(TFunction<bool___cdecl(int)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar2 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar2 = local_20;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cbbe60

FString * __thiscall
FBase64NegativeTest::GetBeautifiedTestName
          (FBase64NegativeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 141ccd6f0

bool __cdecl `FBase64NegativeTest::TestBody'::__l2::<lambda_1>::<lambda_invoker_cdecl>(int param_1)

{
  if (((0x2f < param_1 - 0x2bU) ||
      ((0xffffffc07ff1U >> ((ulonglong)(param_1 - 0x2bU) & 0x3f) & 1) == 0)) &&
     (0x19 < param_1 - 0x61U)) {
    return false;
  }
  return true;
}

// <lambda_invoker_cdecl> @ 141ccd740

bool __cdecl `FBase64NegativeTest::TestBody'::__l2::<lambda_2>::<lambda_invoker_cdecl>(int param_1)

{
  if (((0x32 < param_1 - 0x2dU) ||
      ((0x43ffffff01ff9U >> ((ulonglong)(param_1 - 0x2dU) & 0x3f) & 1) == 0)) &&
     (0x19 < param_1 - 0x61U)) {
    return false;
  }
  return true;
}

// FBase64NegativeTest @ 141ce32f0

FBase64NegativeTest * __thiscall
FBase64NegativeTest::FBase64NegativeTest(FBase64NegativeTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FBase64NegativeTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][base64][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::Base64::Negative");
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

// TestBody @ 141d03fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FBase64NegativeTest::TestBody(FBase64NegativeTest *this,FString *param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_20 = (undefined ***)0x0;
  local_30 = `FBase64NegativeTest::TestBody'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_38 = &___7__TFunction_OwnedObject_P6A_NH_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_48[0] = UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(int),bool,int>::Call
  ;
  RunNegativeDecodeBase64Test(Standard,(TFunction<bool___cdecl(int)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_20 = (undefined ***)0x0;
  local_30 = `FBase64NegativeTest::TestBody'::__l2::<lambda_2>::<lambda_invoker_cdecl>;
  local_38 = &___7__TFunction_OwnedObject_P6A_NH_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_48[0] = UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(int),bool,int>::Call
  ;
  RunNegativeDecodeBase64Test(UrlSafe,(TFunction<bool___cdecl(int)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

