// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 141a3a920

EAutomationTestFlags __thiscall FCbFieldBoolTest::GetTestFlags(FCbFieldBoolTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141a3a930

bool __thiscall FCbFieldBoolTest::IsStressTest(FCbFieldBoolTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a3a940

uint __thiscall FCbFieldBoolTest::GetRequiredDeviceNum(FCbFieldBoolTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a3a950

FString * __thiscall
FCbFieldBoolTest::GetTestSourceFileName(FCbFieldBoolTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tests\\Serialization\\CompactBinaryTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a3a980

int __thiscall FCbFieldBoolTest::GetTestSourceFileLine(FCbFieldBoolTest *this)

{
  return 0x3f7;
}

// GetTests @ 141a3a990

/* WARNING: Removing unreachable block (ram,0x000141a3aa7d) */
/* WARNING: Removing unreachable block (ram,0x000141a3ab48) */

void __thiscall
FCbFieldBoolTest::GetTests
          (FCbFieldBoolTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Serialization.CbField.Bool");
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

// RunTest @ 141a3ab90

bool __thiscall FCbFieldBoolTest::RunTest(FCbFieldBoolTest *this,FString *param_1)

{
  code *pcVar1;
  ECbFieldError EVar2;
  bool bVar3;
  ECbFieldType EVar4;
  TCbFieldTypeAccessors<12> local_res18 [8];
  FCbFieldView local_38;
  FString local_28;
  TArrayView<unsigned_char_const_,int> local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_18._8_8_ = (ulonglong)(uint)local_28.Data.ArrayMax << 0x20;
  local_18.DataPtr = (uchar *)0x0;
  FCbFieldTestBase::TestFieldBytes<12,bool,TCbFieldTypeAccessors<12>_>
            ((FCbFieldTestBase *)this,L"Bool, False",&local_18,false,true,None,local_res18);
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_18._8_8_ = (ulonglong)(uint)local_28.Data.ArrayMax << 0x20;
  local_18.DataPtr = (uchar *)0x0;
  FCbFieldTestBase::TestFieldBytes<13,bool,TCbFieldTypeAccessors<13>_>
            ((FCbFieldTestBase *)this,L"Bool, True",&local_18,true,false,None,
             (TCbFieldTypeAccessors<13> *)local_res18);
  local_38.TypeWithFlags = None;
  local_38.Error = None;
  local_38.NameLen = 0;
  local_38.Value = (void *)0x0;
  ::FString::PrintfImpl((FString *)&local_18,L"FCbFieldView::Is[Type](%s)");
  if (local_18.DataPtr != (uchar *)0x0) {
    FMemory::Free(local_18.DataPtr);
  }
  bVar3 = FCbFieldView::AsBool(&local_38,false);
  ::FString::PrintfImpl(&local_28,L"FCbFieldView::As[Type](%s) -> Equal");
  if (bVar3) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  bVar3 = local_38.Error == None;
  ::FString::PrintfImpl(&local_28,L"FCbFieldView::As[Type](%s) -> HasError()");
  if (bVar3) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar2 = local_38.Error;
  ::FString::PrintfImpl(&local_28,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != TypeError) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar4 = local_38.TypeWithFlags & CustomById;
  ::FString::PrintfImpl(&local_28,L"FCbFieldView::Is[Type](%s)");
  if (EVar4 == BoolFalse) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  bVar3 = FCbFieldView::AsBool(&local_38,true);
  ::FString::PrintfImpl(&local_28,L"FCbFieldView::As[Type](%s) -> Equal");
  if (!bVar3) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  bVar3 = local_38.Error == None;
  ::FString::PrintfImpl(&local_28,L"FCbFieldView::As[Type](%s) -> HasError()");
  if (bVar3) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar2 = local_38.Error;
  ::FString::PrintfImpl(&local_28,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != TypeError) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 141a3afa0

FString * __thiscall
FCbFieldBoolTest::GetBeautifiedTestName(FCbFieldBoolTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Serialization.CbField.Bool");
  return __return_storage_ptr__;
}

