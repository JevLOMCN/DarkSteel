// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 141a43150

EAutomationTestFlags __thiscall FCbFieldNullTest::GetTestFlags(FCbFieldNullTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141a43160

bool __thiscall FCbFieldNullTest::IsStressTest(FCbFieldNullTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a43170

uint __thiscall FCbFieldNullTest::GetRequiredDeviceNum(FCbFieldNullTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a43180

FString * __thiscall
FCbFieldNullTest::GetTestSourceFileName(FCbFieldNullTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tests\\Serialization\\CompactBinaryTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a431b0

int __thiscall FCbFieldNullTest::GetTestSourceFileLine(FCbFieldNullTest *this)

{
  return 0x126;
}

// GetTests @ 141a431c0

/* WARNING: Removing unreachable block (ram,0x000141a432ad) */
/* WARNING: Removing unreachable block (ram,0x000141a43378) */

void __thiscall
FCbFieldNullTest::GetTests
          (FCbFieldNullTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Serialization.CbField.Null");
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

// RunTest @ 141a433a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FCbFieldNullTest::RunTest(FCbFieldNullTest *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  ulong64 uVar3;
  FBlake3Hash *pFVar4;
  FIoHash *pFVar5;
  undefined1 auStack_98 [32];
  FScriptContainerElement local_78 [16];
  TMemoryView<void_const_> local_68;
  FCbFieldView local_58;
  FIoHash local_48;
  FBlake3Hash local_34;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_98;
  FCbFieldView::FCbFieldView(&local_58,(void *)0x0,Null);
  uVar3 = FCbFieldView::GetSize(&local_58);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldView(Null)::GetSize() == 1",uVar3,1);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbFieldView(Null)::IsNull()",
             (local_58.TypeWithFlags & CustomByName) == Null);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbFieldView(Null)::HasValue()",
             (local_58.TypeWithFlags & CustomByName) != None);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"!FCbFieldView(Null)::HasError()",local_58.Error != None);
  if (local_58.Error != None) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_68,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_68);
    if (local_68.Data != (void *)0x0) {
      FMemory::Free(local_68.Data);
    }
  }
  local_68.Data = local_78;
  local_78[0] = (FScriptContainerElement)0x1;
  local_68.Size = 1;
  pFVar4 = FBlake3::HashBuffer(&local_34,&local_68);
  local_68.Data = *(void **)pFVar4->Hash;
  local_68.Size = *(ulong64 *)(pFVar4->Hash + 8);
  iVar1 = *(int *)(pFVar4->Hash + 0x10);
  pFVar5 = FCbFieldView::GetHash(&local_58,&local_48);
  if (((*(void **)pFVar5->Hash != local_68.Data) ||
      (*(ulong64 *)(pFVar5->Hash + 8) != local_68.Size)) || (*(int *)(pFVar5->Hash + 0x10) != iVar1)
     ) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_68,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_68);
    if (local_68.Data != (void *)0x0) {
      FMemory::Free(local_68.Data);
    }
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,L"FCbFieldView(None)::IsNull()",false);
  return true;
}

// GetBeautifiedTestName @ 141a43560

FString * __thiscall
FCbFieldNullTest::GetBeautifiedTestName(FCbFieldNullTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Serialization.CbField.Null");
  return __return_storage_ptr__;
}

