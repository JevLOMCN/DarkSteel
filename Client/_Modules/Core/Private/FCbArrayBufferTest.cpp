// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 141a344c0

EAutomationTestFlags __thiscall FCbArrayBufferTest::GetTestFlags(FCbArrayBufferTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141a344d0

bool __thiscall FCbArrayBufferTest::IsStressTest(FCbArrayBufferTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a344e0

uint __thiscall FCbArrayBufferTest::GetRequiredDeviceNum(FCbArrayBufferTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a344f0

FString * __thiscall
FCbArrayBufferTest::GetTestSourceFileName(FCbArrayBufferTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tests\\Serialization\\CompactBinaryTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a34520

int __thiscall FCbArrayBufferTest::GetTestSourceFileLine(FCbArrayBufferTest *this)

{
  return 0x65f;
}

// GetTests @ 141a34530

/* WARNING: Removing unreachable block (ram,0x000141a3461d) */
/* WARNING: Removing unreachable block (ram,0x000141a346e8) */

void __thiscall
FCbArrayBufferTest::GetTests
          (FCbArrayBufferTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Serialization.CbArrayBuffer");
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

// RunTest @ 141a34710

bool __thiscall FCbArrayBufferTest::RunTest(FCbArrayBufferTest *this,FString *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FSharedBuffer FVar3;
  bool bVar4;
  TCbBuffer<FCbArrayView> local_28;
  
  FCbArrayView::FCbArrayView((FCbArrayView *)&local_28);
  local_28.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,L"FCbArray().IsOwned()",false);
  TCbBuffer<FCbArrayView>::MakeOwned(&local_28);
  if ((local_28.Buffer.Owner.Owner == (FBufferOwner *)0x0) ||
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_28.Buffer.Owner.Owner + 0x18) >>
       0x3c & 1) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbArray().MakeOwned().IsOwned()",bVar4);
  FVar3.Owner.Owner = local_28.Buffer.Owner.Owner;
  if (local_28.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_28.Buffer.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_28.Buffer.Owner.Owner + 0x10))(local_28.Buffer.Owner.Owner);
      *(void **)((longlong)FVar3.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar3.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar3.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar3.Owner.Owner)(FVar3.Owner.Owner,1);
      }
    }
  }
  return true;
}

// GetBeautifiedTestName @ 141a347f0

FString * __thiscall
FCbArrayBufferTest::GetBeautifiedTestName(FCbArrayBufferTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Serialization.CbArrayBuffer");
  return __return_storage_ptr__;
}

