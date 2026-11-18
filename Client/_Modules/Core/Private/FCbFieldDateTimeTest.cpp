// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 141a3dc00

EAutomationTestFlags __thiscall FCbFieldDateTimeTest::GetTestFlags(FCbFieldDateTimeTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141a3dc10

bool __thiscall FCbFieldDateTimeTest::IsStressTest(FCbFieldDateTimeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a3dc20

uint __thiscall FCbFieldDateTimeTest::GetRequiredDeviceNum(FCbFieldDateTimeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a3dc30

FString * __thiscall
FCbFieldDateTimeTest::GetTestSourceFileName
          (FCbFieldDateTimeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tests\\Serialization\\CompactBinaryTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a3dc60

int __thiscall FCbFieldDateTimeTest::GetTestSourceFileLine(FCbFieldDateTimeTest *this)

{
  return 0x477;
}

// GetTests @ 141a3dc70

/* WARNING: Removing unreachable block (ram,0x000141a3dd5d) */
/* WARNING: Removing unreachable block (ram,0x000141a3de28) */

void __thiscall
FCbFieldDateTimeTest::GetTests
          (FCbFieldDateTimeTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Serialization.CbField.DateTime");
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

// RunTest @ 141a3de50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FCbFieldDateTimeTest::RunTest(FCbFieldDateTimeTest *this,FString *param_1)

{
  code *pcVar1;
  ECbFieldError EVar2;
  FDateTime FVar3;
  long64 lVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  undefined1 auStackY_b8 [32];
  TCbFieldTypeAccessors<18> local_78 [16];
  FString local_68;
  TArrayView<unsigned_char_const_,int> local_58;
  ForAnyElementType local_48;
  FCbFieldView local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)&local_38;
  local_68.Data.ArrayNum = 8;
  local_58._12_4_ = local_68.Data.ArrayMax;
  local_58.ArrayNum = 8;
  local_38.TypeWithFlags = None;
  local_38.Error = None;
  local_38._2_2_ = 0;
  local_38.NameLen = 0;
  local_58.DataPtr = (uchar *)local_68.Data.AllocatorInstance.Data;
  FCbFieldTestBase::TestFieldBytes<18,__int64,TCbFieldTypeAccessors<18>_>
            ((FCbFieldTestBase *)this,L"DateTime, Zero",&local_58,0,0,None,local_78);
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)&local_38;
  local_68.Data.ArrayNum = 8;
  local_58._12_4_ = local_68.Data.ArrayMax;
  local_58.ArrayNum = 8;
  local_38.TypeWithFlags = Hash;
  local_38.Error = 0x20;
  local_38._2_2_ = 0x4030;
  local_38.NameLen = 0x80706050;
  local_58.DataPtr = (uchar *)local_68.Data.AllocatorInstance.Data;
  FCbFieldTestBase::TestFieldBytes<18,__int64,TCbFieldTypeAccessors<18>_>
            ((FCbFieldTestBase *)this,L"DateTime, NonZero",&local_58,0x1020304050607080,0,None,
             local_78);
  local_38.TypeWithFlags = None;
  local_38.Error = None;
  local_38._2_2_ = 0;
  local_38.NameLen = 0;
  FCbFieldView::FCbFieldView((FCbFieldView *)&local_48,&local_38,DateTime);
  FVar3 = FCbFieldView::AsDateTime((FCbFieldView *)&local_48);
  if (*(longlong *)FVar3.Ticks != 0) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_58,0);
    if ((FCbFieldView *)local_58.DataPtr != (FCbFieldView *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
  }
  local_38._0_8_ = ((ulonglong)local_38._0_8_ >> 0x10 & 0xffff) << 0x10;
  local_38.Value = (void *)0x0;
  ::FString::PrintfImpl((FString *)&local_48,L"FCbFieldView::Is[Type](%s)");
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  lVar4 = FCbFieldView::AsDateTimeTicks(&local_38,0);
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar5.Data = local_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,lVar4,0);
  if ((FCbFieldView *)local_68.Data.AllocatorInstance.Data != (FCbFieldView *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  bVar6 = local_38.Error == None;
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::As[Type](%s) -> HasError()");
  if (bVar6) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_58,0);
    if ((FCbFieldView *)local_58.DataPtr != (FCbFieldView *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
  }
  if ((FCbFieldView *)local_68.Data.AllocatorInstance.Data != (FCbFieldView *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  EVar2 = local_38.Error;
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != TypeError) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_58,0);
    if ((FCbFieldView *)local_58.DataPtr != (FCbFieldView *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
  }
  if ((FCbFieldView *)local_68.Data.AllocatorInstance.Data != (FCbFieldView *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  FVar3 = FCbFieldView::AsDateTime(&local_38,(FDateTime)&local_68);
  if (*(longlong *)FVar3.Ticks != 0x1020304050607080) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_58,0);
    if ((FCbFieldView *)local_58.DataPtr != (FCbFieldView *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
  }
  return true;
}

// GetBeautifiedTestName @ 141a3e160

FString * __thiscall
FCbFieldDateTimeTest::GetBeautifiedTestName
          (FCbFieldDateTimeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Serialization.CbField.DateTime");
  return __return_storage_ptr__;
}

