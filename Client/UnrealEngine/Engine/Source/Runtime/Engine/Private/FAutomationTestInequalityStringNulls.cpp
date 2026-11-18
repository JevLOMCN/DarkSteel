// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487e7720

EAutomationTestFlags __thiscall
FAutomationTestInequalityStringNulls::GetTestFlags(FAutomationTestInequalityStringNulls *this)

{
  return NegativeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1487e7730

bool __thiscall
FAutomationTestInequalityStringNulls::IsStressTest(FAutomationTestInequalityStringNulls *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487e7740

uint __thiscall
FAutomationTestInequalityStringNulls::GetRequiredDeviceNum
          (FAutomationTestInequalityStringNulls *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487e7750

FString * __thiscall
FAutomationTestInequalityStringNulls::GetTestSourceFileName
          (FAutomationTestInequalityStringNulls *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487e7780

int __thiscall
FAutomationTestInequalityStringNulls::GetTestSourceFileLine
          (FAutomationTestInequalityStringNulls *this)

{
  return 0x512;
}

// GetTests @ 1487e7790

/* WARNING: Removing unreachable block (ram,0x0001487e787d) */
/* WARNING: Removing unreachable block (ram,0x0001487e7948) */

void __thiscall
FAutomationTestInequalityStringNulls::GetTests
          (FAutomationTestInequalityStringNulls *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"TestFramework.Validation.TestInequalityStringNulls");
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

// RunTest @ 1487e7970

bool __thiscall
FAutomationTestInequalityStringNulls::RunTest
          (FAutomationTestInequalityStringNulls *this,FString *param_1)

{
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"char* equal null null",(wchar_t *)0x0,(wchar_t *)0x0);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"char* equal null string",(wchar_t *)0x0,L"Forty-two");
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"char* equal string null",L"Forty-two",(wchar_t *)0x0);
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"char* unequal null null",(wchar_t *)0x0,(wchar_t *)0x0);
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"char* unequal null string",(wchar_t *)0x0,L"Forty-two");
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"char* unequal string null",L"Forty-two",(wchar_t *)0x0);
  FAutomationTestBase::TestEqualSensitive
            ((FAutomationTestBase *)this,L"char* equal(sensitive) null null",(wchar_t *)0x0,
             (wchar_t *)0x0);
  FAutomationTestBase::TestEqualSensitive
            ((FAutomationTestBase *)this,L"char* equal(sensitive) null string",(wchar_t *)0x0,
             L"Forty-two");
  FAutomationTestBase::TestEqualSensitive
            ((FAutomationTestBase *)this,L"char* equal(sensitive) string null",L"Forty-two",
             (wchar_t *)0x0);
  FAutomationTestBase::TestNotEqualSensitive
            ((FAutomationTestBase *)this,L"char* unequal(sensitive) null null",(wchar_t *)0x0,
             (wchar_t *)0x0);
  FAutomationTestBase::TestNotEqualSensitive
            ((FAutomationTestBase *)this,L"char* unequal(sensitive) null string",(wchar_t *)0x0,
             L"Forty-two");
  FAutomationTestBase::TestNotEqualSensitive
            ((FAutomationTestBase *)this,L"char* unequal(sensitive) string null",L"Forty-two",
             (wchar_t *)0x0);
  local_28._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.Size = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = (wchar_t *)0x0;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"stringview equal null null",&local_18,&local_28);
  local_28._12_4_ = local_18._12_4_;
  local_28.Size = 9;
  local_18.Size = 0;
  local_28.DataPtr = L"Forty-two";
  local_18.DataPtr = (wchar_t *)0x0;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"stringview equal null string",&local_18,&local_28);
  local_28._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.Size = 9;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = L"Forty-two";
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"stringview equal string null",&local_18,&local_28);
  local_28._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.Size = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = (wchar_t *)0x0;
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"stringview unequal null null",&local_18,&local_28);
  local_28._12_4_ = local_18._12_4_;
  local_28.Size = 9;
  local_18.Size = 0;
  local_28.DataPtr = L"Forty-two";
  local_18.DataPtr = (wchar_t *)0x0;
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"stringview unequal null string",&local_18,&local_28);
  local_28._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.Size = 9;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = L"Forty-two";
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"stringview unequal string null",&local_18,&local_28);
  local_28._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.Size = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = (wchar_t *)0x0;
  FAutomationTestBase::TestEqualSensitive
            ((FAutomationTestBase *)this,L"stringview equal(sensitive) null null",&local_18,
             &local_28);
  local_28._12_4_ = local_18._12_4_;
  local_28.Size = 9;
  local_18.Size = 0;
  local_28.DataPtr = L"Forty-two";
  local_18.DataPtr = (wchar_t *)0x0;
  FAutomationTestBase::TestEqualSensitive
            ((FAutomationTestBase *)this,L"stringview equal(sensitive) null string",&local_18,
             &local_28);
  local_28._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.Size = 9;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = L"Forty-two";
  FAutomationTestBase::TestEqualSensitive
            ((FAutomationTestBase *)this,L"stringview equal(sensitive) string null",&local_18,
             &local_28);
  local_28._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.Size = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = (wchar_t *)0x0;
  FAutomationTestBase::TestNotEqualSensitive
            ((FAutomationTestBase *)this,L"stringview unequal(sensitive) null null",&local_18,
             &local_28);
  local_28._12_4_ = local_18._12_4_;
  local_28.Size = 9;
  local_18.Size = 0;
  local_28.DataPtr = L"Forty-two";
  local_18.DataPtr = (wchar_t *)0x0;
  FAutomationTestBase::TestNotEqualSensitive
            ((FAutomationTestBase *)this,L"stringview unequal(sensitive) null string",&local_18,
             &local_28);
  local_28._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.Size = 9;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = L"Forty-two";
  FAutomationTestBase::TestNotEqualSensitive
            ((FAutomationTestBase *)this,L"stringview unequal(sensitive) string null",&local_18,
             &local_28);
  local_28._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.Size = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = (wchar_t *)0x0;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"stringview8 equal null null",
             (TStringView<char8_t> *)&local_18,(TStringView<char8_t> *)&local_28);
  local_28._12_4_ = local_18._12_4_;
  local_28.Size = 9;
  local_18.Size = 0;
  local_28.DataPtr = L"Forty-two";
  local_18.DataPtr = (wchar_t *)0x0;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"stringview8 equal null string",
             (TStringView<char8_t> *)&local_18,(TStringView<char8_t> *)&local_28);
  local_28._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.Size = 9;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = L"Forty-two";
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"stringview8 equal string null",
             (TStringView<char8_t> *)&local_18,(TStringView<char8_t> *)&local_28);
  local_28._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.Size = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = (wchar_t *)0x0;
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"stringview8 unequal null null",
             (TStringView<char8_t> *)&local_18,(TStringView<char8_t> *)&local_28);
  local_28._12_4_ = local_18._12_4_;
  local_28.Size = 9;
  local_18.Size = 0;
  local_28.DataPtr = L"Forty-two";
  local_18.DataPtr = (wchar_t *)0x0;
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"stringview8 unequal null string",
             (TStringView<char8_t> *)&local_18,(TStringView<char8_t> *)&local_28);
  local_28._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.Size = 9;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = L"Forty-two";
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"stringview8 unequal string null",
             (TStringView<char8_t> *)&local_18,(TStringView<char8_t> *)&local_28);
  local_28._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.Size = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = (wchar_t *)0x0;
  FAutomationTestBase::TestEqualSensitive
            ((FAutomationTestBase *)this,L"stringview8 equal(sensitive) null null",
             (TStringView<char8_t> *)&local_18,(TStringView<char8_t> *)&local_28);
  local_28._12_4_ = local_18._12_4_;
  local_28.Size = 9;
  local_18.Size = 0;
  local_28.DataPtr = L"Forty-two";
  local_18.DataPtr = (wchar_t *)0x0;
  FAutomationTestBase::TestEqualSensitive
            ((FAutomationTestBase *)this,L"stringview8 equal(sensitive) null string",
             (TStringView<char8_t> *)&local_18,(TStringView<char8_t> *)&local_28);
  local_28._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.Size = 9;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = L"Forty-two";
  FAutomationTestBase::TestEqualSensitive
            ((FAutomationTestBase *)this,L"stringview8 equal(sensitive) string null",
             (TStringView<char8_t> *)&local_18,(TStringView<char8_t> *)&local_28);
  local_28._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.Size = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = (wchar_t *)0x0;
  FAutomationTestBase::TestNotEqualSensitive
            ((FAutomationTestBase *)this,L"stringview8 unequal(sensitive) null null",
             (TStringView<char8_t> *)&local_18,(TStringView<char8_t> *)&local_28);
  local_28._12_4_ = local_18._12_4_;
  local_28.Size = 9;
  local_18.Size = 0;
  local_28.DataPtr = L"Forty-two";
  local_18.DataPtr = (wchar_t *)0x0;
  FAutomationTestBase::TestNotEqualSensitive
            ((FAutomationTestBase *)this,L"stringview8 unequal(sensitive) null string",
             (TStringView<char8_t> *)&local_18,(TStringView<char8_t> *)&local_28);
  local_28._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.Size = 9;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = L"Forty-two";
  FAutomationTestBase::TestNotEqualSensitive
            ((FAutomationTestBase *)this,L"stringview8 unequal(sensitive) string null",
             (TStringView<char8_t> *)&local_18,(TStringView<char8_t> *)&local_28);
  return true;
}

// GetBeautifiedTestName @ 1487e8090

FString * __thiscall
FAutomationTestInequalityStringNulls::GetBeautifiedTestName
          (FAutomationTestInequalityStringNulls *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"TestFramework.Validation.TestInequalityStringNulls");
  return __return_storage_ptr__;
}

