// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487e5b00

EAutomationTestFlags __thiscall
FAutomationTestInequalityString::GetTestFlags(FAutomationTestInequalityString *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1487e5b10

bool __thiscall FAutomationTestInequalityString::IsStressTest(FAutomationTestInequalityString *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487e5b30

uint __thiscall
FAutomationTestInequalityString::GetRequiredDeviceNum(FAutomationTestInequalityString *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487e5b50

FString * __thiscall
FAutomationTestInequalityString::GetTestSourceFileName
          (FAutomationTestInequalityString *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487e5b90

int __thiscall
FAutomationTestInequalityString::GetTestSourceFileLine(FAutomationTestInequalityString *this)

{
  return 0x4db;
}

// GetTests @ 1487e5be0

/* WARNING: Removing unreachable block (ram,0x0001487e5ccd) */
/* WARNING: Removing unreachable block (ram,0x0001487e5d98) */

void __thiscall
FAutomationTestInequalityString::GetTests
          (FAutomationTestInequalityString *this,
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
  
  ::FString::FString(&local_18,"TestFramework.Validation.TestInequalityString");
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

// RunTest @ 1487e5fa0

bool __thiscall
FAutomationTestInequalityString::RunTest(FAutomationTestInequalityString *this,FString *param_1)

{
  ForAnyElementType FVar1;
  ForAnyElementType FVar2;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_78,"Forty-two");
  ::FString::FString(&local_48,"Forty-two");
  ::FString::FString(&local_28,"forty-two");
  ::FString::FString(&local_38,"FORTY-TWO");
  ::FString::FString(&local_58,"");
  ::FString::FString(&local_68,"42");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar2.Data = local_78.Data.AllocatorInstance.Data;
  }
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar1.Data = local_48.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"String identity equal",(wchar_t *)FVar1.Data,
             (wchar_t *)FVar2.Data);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"char* identity equal",L"Forty-two",L"Forty-two");
  ::FString::FString(&local_18,L"Forty-two");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar1.Data = local_78.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"String equals char*",(wchar_t *)FVar1.Data,
             (wchar_t *)FVar2.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"Forty-two");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar2.Data = local_78.Data.AllocatorInstance.Data;
  }
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar1.Data = local_18.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"char* equals string",(wchar_t *)FVar1.Data,
             (wchar_t *)FVar2.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar1.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"String equals char* empty",(wchar_t *)FVar1.Data,
             (wchar_t *)FVar2.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar2.Data = local_58.Data.AllocatorInstance.Data;
  }
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar1.Data = local_18.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"char* equals string empty",(wchar_t *)FVar1.Data,
             (wchar_t *)FVar2.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar2.Data = local_78.Data.AllocatorInstance.Data;
  }
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar1.Data = local_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"String unequal",(wchar_t *)FVar1.Data,
             (wchar_t *)FVar2.Data);
  FAutomationTestBase::TestNotEqual((FAutomationTestBase *)this,L"char* unequal",L"42",L"Forty-two")
  ;
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar2.Data = local_78.Data.AllocatorInstance.Data;
  }
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar1.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"String unequal empty",(wchar_t *)FVar1.Data,
             (wchar_t *)FVar2.Data);
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"char* unequal empty",L"",L"Forty-two");
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"char* unequal null",(wchar_t *)0x0,L"Forty-two");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar2.Data = local_78.Data.AllocatorInstance.Data;
  }
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar1.Data = local_48.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"String insensitive equal identity",(wchar_t *)FVar1.Data,
             (wchar_t *)FVar2.Data);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"char* insensitive equal identity",L"Forty-two",
             L"Forty-two");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar2.Data = local_78.Data.AllocatorInstance.Data;
  }
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar1.Data = local_28.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"String insensitive equal lower",(wchar_t *)FVar1.Data,
             (wchar_t *)FVar2.Data);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"char* insensitive equal lower",L"forty-two",L"Forty-two")
  ;
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar2.Data = local_78.Data.AllocatorInstance.Data;
  }
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar1.Data = local_38.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"String insensitive equal upper",(wchar_t *)FVar1.Data,
             (wchar_t *)FVar2.Data);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"char* insensitive equal upper",L"FORTY-TWO",L"Forty-two")
  ;
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar2.Data = local_78.Data.AllocatorInstance.Data;
  }
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar1.Data = local_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"String insensitive unequal",(wchar_t *)FVar1.Data,
             (wchar_t *)FVar2.Data);
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"char* insensitive unequal",L"42",L"Forty-two");
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"char* insensitive unequal null",(wchar_t *)0x0,
             L"Forty-two");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar2.Data = local_78.Data.AllocatorInstance.Data;
  }
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar1.Data = local_48.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqualSensitive
            ((FAutomationTestBase *)this,L"String sensitive equal identity",(wchar_t *)FVar1.Data,
             (wchar_t *)FVar2.Data);
  FAutomationTestBase::TestEqualSensitive
            ((FAutomationTestBase *)this,L"char* sensitive equal identity",L"Forty-two",L"Forty-two"
            );
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar2.Data = local_78.Data.AllocatorInstance.Data;
  }
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar1.Data = local_28.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestNotEqualSensitive
            ((FAutomationTestBase *)this,L"String sensitive unequal lower",(wchar_t *)FVar1.Data,
             (wchar_t *)FVar2.Data);
  FAutomationTestBase::TestNotEqualSensitive
            ((FAutomationTestBase *)this,L"char* sensitive unequal lower",L"forty-two",L"Forty-two")
  ;
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar2.Data = local_78.Data.AllocatorInstance.Data;
  }
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar1.Data = local_38.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestNotEqualSensitive
            ((FAutomationTestBase *)this,L"String sensitive unequal upper",(wchar_t *)FVar1.Data,
             (wchar_t *)FVar2.Data);
  FAutomationTestBase::TestNotEqualSensitive
            ((FAutomationTestBase *)this,L"char* sensitive unequal upper",L"FORTY-TWO",L"Forty-two")
  ;
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar2.Data = local_78.Data.AllocatorInstance.Data;
  }
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar1.Data = local_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestNotEqualSensitive
            ((FAutomationTestBase *)this,L"String sensitive unequal",(wchar_t *)FVar1.Data,
             (wchar_t *)FVar2.Data);
  FAutomationTestBase::TestNotEqualSensitive
            ((FAutomationTestBase *)this,L"char* sensitive unequal",L"42",L"Forty-two");
  FAutomationTestBase::TestNotEqualSensitive
            ((FAutomationTestBase *)this,L"char* sensitive unequal null",(wchar_t *)0x0,L"Forty-two"
            );
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 1487e64e0

FString * __thiscall
FAutomationTestInequalityString::GetBeautifiedTestName
          (FAutomationTestInequalityString *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"TestFramework.Validation.TestInequalityString");
  return __return_storage_ptr__;
}

