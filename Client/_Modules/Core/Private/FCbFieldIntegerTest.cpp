// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 141a380a0

EAutomationTestFlags __thiscall FCbFieldIntegerTest::GetTestFlags(FCbFieldIntegerTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141a380b0

bool __thiscall FCbFieldIntegerTest::IsStressTest(FCbFieldIntegerTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a380c0

uint __thiscall FCbFieldIntegerTest::GetRequiredDeviceNum(FCbFieldIntegerTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a380d0

FString * __thiscall
FCbFieldIntegerTest::GetTestSourceFileName
          (FCbFieldIntegerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tests\\Serialization\\CompactBinaryTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a38100

int __thiscall FCbFieldIntegerTest::GetTestSourceFileLine(FCbFieldIntegerTest *this)

{
  return 0x35c;
}

// GetTests @ 141a38110

/* WARNING: Removing unreachable block (ram,0x000141a381fd) */
/* WARNING: Removing unreachable block (ram,0x000141a382c8) */

void __thiscall
FCbFieldIntegerTest::GetTests
          (FCbFieldIntegerTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Serialization.CbField.Integer");
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

// RunTest @ 141a382f0

/* WARNING: Enum "EIntType": Some values do not have unique names */

bool __thiscall FCbFieldIntegerTest::RunTest(FCbFieldIntegerTest *this,FString *param_1)

{
  code *pcVar1;
  ECbFieldError EVar2;
  ulong64 uVar3;
  ForAnyElementType FVar4;
  ECbFieldType EVar5;
  bool bVar6;
  FCbFieldView local_38;
  FString local_28;
  FString local_18;
  
  FCbFieldIntegerTestBase::TestIntegerField((FCbFieldIntegerTestBase *)this,IntegerPositive,Pos7,0);
  FCbFieldIntegerTestBase::TestIntegerField
            ((FCbFieldIntegerTestBase *)this,IntegerPositive,Pos7,0x7f);
  FCbFieldIntegerTestBase::TestIntegerField
            ((FCbFieldIntegerTestBase *)this,IntegerPositive,Pos8,0x80);
  FCbFieldIntegerTestBase::TestIntegerField
            ((FCbFieldIntegerTestBase *)this,IntegerPositive,Pos8,0xff);
  FCbFieldIntegerTestBase::TestIntegerField
            ((FCbFieldIntegerTestBase *)this,IntegerPositive,Pos15,0x100);
  FCbFieldIntegerTestBase::TestIntegerField
            ((FCbFieldIntegerTestBase *)this,IntegerPositive,Pos15,0x7fff);
  FCbFieldIntegerTestBase::TestIntegerField
            ((FCbFieldIntegerTestBase *)this,IntegerPositive,Pos16,0x8000);
  FCbFieldIntegerTestBase::TestIntegerField
            ((FCbFieldIntegerTestBase *)this,IntegerPositive,Pos16,0xffff);
  FCbFieldIntegerTestBase::TestIntegerField
            ((FCbFieldIntegerTestBase *)this,IntegerPositive,Pos31,0x10000);
  FCbFieldIntegerTestBase::TestIntegerField
            ((FCbFieldIntegerTestBase *)this,IntegerPositive,Pos31,0x7fffffff);
  FCbFieldIntegerTestBase::TestIntegerField
            ((FCbFieldIntegerTestBase *)this,IntegerPositive,Pos32,0x80000000);
  FCbFieldIntegerTestBase::TestIntegerField
            ((FCbFieldIntegerTestBase *)this,IntegerPositive,Pos32,0xffffffff);
  FCbFieldIntegerTestBase::TestIntegerField
            ((FCbFieldIntegerTestBase *)this,IntegerPositive,Pos63,0x100000000);
  FCbFieldIntegerTestBase::TestIntegerField
            ((FCbFieldIntegerTestBase *)this,IntegerPositive,Pos63,0x7fffffffffffffff);
  FCbFieldIntegerTestBase::TestIntegerField
            ((FCbFieldIntegerTestBase *)this,IntegerPositive,Pos64,0x8000000000000000);
  FCbFieldIntegerTestBase::TestIntegerField
            ((FCbFieldIntegerTestBase *)this,IntegerPositive,Pos64,0xffffffffffffffff);
  FCbFieldIntegerTestBase::TestIntegerField((FCbFieldIntegerTestBase *)this,IntegerNegative,Neg7,1);
  FCbFieldIntegerTestBase::TestIntegerField
            ((FCbFieldIntegerTestBase *)this,IntegerNegative,Neg7,0x80);
  FCbFieldIntegerTestBase::TestIntegerField
            ((FCbFieldIntegerTestBase *)this,IntegerNegative,Neg15,0x81);
  FCbFieldIntegerTestBase::TestIntegerField
            ((FCbFieldIntegerTestBase *)this,IntegerNegative,Neg15,0x8000);
  FCbFieldIntegerTestBase::TestIntegerField
            ((FCbFieldIntegerTestBase *)this,IntegerNegative,Neg31,0x8001);
  FCbFieldIntegerTestBase::TestIntegerField
            ((FCbFieldIntegerTestBase *)this,IntegerNegative,Neg31,0x80000000);
  FCbFieldIntegerTestBase::TestIntegerField
            ((FCbFieldIntegerTestBase *)this,IntegerNegative,Int64,0x80000001);
  FCbFieldIntegerTestBase::TestIntegerField
            ((FCbFieldIntegerTestBase *)this,IntegerNegative,Int64,0x8000000000000000);
  FCbFieldIntegerTestBase::TestIntegerField
            ((FCbFieldIntegerTestBase *)this,IntegerNegative,None,0x8000000000000001);
  FCbFieldIntegerTestBase::TestIntegerField
            ((FCbFieldIntegerTestBase *)this,IntegerNegative,None,0xffffffffffffffff);
  local_38.TypeWithFlags = None;
  local_38.Error = None;
  local_38.NameLen = 0;
  local_38.Value = (void *)0x0;
  ::FString::PrintfImpl(&local_18,L"FCbFieldView::Is[Type](%s)");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  uVar3 = FCbFieldView::AsInteger(&local_38,8,(FIntegerParams)0x80);
  ::FString::PrintfImpl(&local_28,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar4.Data = local_28.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar4.Data,uVar3,8);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  bVar6 = local_38.Error == None;
  ::FString::PrintfImpl(&local_28,L"FCbFieldView::As[Type](%s) -> HasError()");
  if (bVar6) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar2 = local_38.Error;
  ::FString::PrintfImpl(&local_28,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != TypeError) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar5 = local_38.TypeWithFlags & CustomById;
  ::FString::PrintfImpl(&local_28,L"FCbFieldView::Is[Type](%s)");
  if (EVar5 == IntegerPositive) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  uVar3 = FCbFieldView::AsInteger(&local_38,8,(FIntegerParams)0x7f);
  ::FString::PrintfImpl(&local_28,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar4.Data = local_28.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar4.Data,uVar3,8);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  bVar6 = local_38.Error == None;
  ::FString::PrintfImpl(&local_28,L"FCbFieldView::As[Type](%s) -> HasError()");
  if (bVar6) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar2 = local_38.Error;
  ::FString::PrintfImpl(&local_28,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != TypeError) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 141a38840

FString * __thiscall
FCbFieldIntegerTest::GetBeautifiedTestName
          (FCbFieldIntegerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Serialization.CbField.Integer");
  return __return_storage_ptr__;
}

