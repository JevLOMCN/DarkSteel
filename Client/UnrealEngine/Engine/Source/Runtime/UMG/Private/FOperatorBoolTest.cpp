// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 8

// GetTestFlags @ 1468d6470

EAutomationTestFlags __thiscall FOperatorBoolTest::GetTestFlags(FOperatorBoolTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1468d6480

bool __thiscall FOperatorBoolTest::IsStressTest(FOperatorBoolTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1468d64d0

uint __thiscall FOperatorBoolTest::GetRequiredDeviceNum(FOperatorBoolTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1468d64e0

FString * __thiscall
FOperatorBoolTest::GetTestSourceFileName(FOperatorBoolTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Binding\\States\\Tests\\WidgetStateBitfieldTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1468d6510

int __thiscall FOperatorBoolTest::GetTestSourceFileLine(FOperatorBoolTest *this)

{
  return 0x1d;
}

// GetTests @ 1468d6520

/* WARNING: Removing unreachable block (ram,0x0001468d660d) */
/* WARNING: Removing unreachable block (ram,0x0001468d66d8) */

void __thiscall
FOperatorBoolTest::GetTests
          (FOperatorBoolTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Slate.WidgetState.OperatorBoolTest");
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

// RunTest @ 1468d6710

bool __thiscall FOperatorBoolTest::RunTest(FOperatorBoolTest *this,FString *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  UClass *pUVar6;
  byte *pbVar7;
  ulonglong uVar8;
  FName local_res18;
  FString local_28;
  
  bVar3 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Unset is false",0,0);
  pFVar5 = ::FName::FName(&local_res18,"Pressed");
  FVar1 = *pFVar5;
  pUVar6 = UWidgetStateSettings::StaticClass();
  if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar6);
  }
  pbVar7 = TMapBase<FName,unsigned_char,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
           ::FindChecked((TMapBase<FName,unsigned_char,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                          *)&(pUVar6->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10,FVar1);
  uVar8 = 1L << ((ulonglong)*pbVar7 & 0x3f);
  bVar4 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Any binary is true",(uint)(uVar8 != 0),1);
  bVar4 = bVar4 && bVar3;
  if (uVar8 == 0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_28,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    bVar4 = false;
  }
  pFVar5 = ::FName::FName(&local_res18,"Pressed");
  FVar1 = *pFVar5;
  pUVar6 = UWidgetStateSettings::StaticClass();
  if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar6);
  }
  pbVar7 = TMapBase<FName,unsigned_char,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
           ::FindChecked((TMapBase<FName,unsigned_char,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                          *)&(pUVar6->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10,FVar1);
  uVar8 = uVar8 & ~(1L << ((ulonglong)*pbVar7 & 0x3f));
  bVar3 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"No binary is false",(uint)(uVar8 != 0),0);
  bVar3 = (bool)(bVar3 & bVar4);
  if (uVar8 != 0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_28,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  return bVar3;
}

// GetBeautifiedTestName @ 1468d68d0

FString * __thiscall
FOperatorBoolTest::GetBeautifiedTestName(FOperatorBoolTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Slate.WidgetState.OperatorBoolTest");
  return __return_storage_ptr__;
}

