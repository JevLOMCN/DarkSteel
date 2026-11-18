// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141c5c380

EAutomationTestFlags __thiscall FBufferOwnerTest::GetTestFlags(FBufferOwnerTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141c5c390

bool __thiscall FBufferOwnerTest::IsStressTest(FBufferOwnerTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141c5c3a0

uint __thiscall FBufferOwnerTest::GetRequiredDeviceNum(FBufferOwnerTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141c5c3b0

FString * __thiscall
FBufferOwnerTest::GetTestSourceFileName(FBufferOwnerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Memory\\SharedBufferTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141c5c3e0

int __thiscall FBufferOwnerTest::GetTestSourceFileLine(FBufferOwnerTest *this)

{
  return 0x16e;
}

// GetTests @ 141c5c3f0

/* WARNING: Removing unreachable block (ram,0x000141c5c56e) */

void __thiscall
FBufferOwnerTest::GetTests
          (FBufferOwnerTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141c5c590

bool __thiscall FBufferOwnerTest::RunTest(FBufferOwnerTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141c5c5c0

FString * __thiscall
FBufferOwnerTest::GetBeautifiedTestName(FBufferOwnerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FBufferOwnerTest @ 141c8a780

FBufferOwnerTest * __thiscall
FBufferOwnerTest::FBufferOwnerTest(FBufferOwnerTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FBufferOwnerTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Memory::BufferOwner");
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
  ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
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

// TestBody @ 141c99c30

void __thiscall FBufferOwnerTest::TestBody(FBufferOwnerTest *this,FString *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  FBufferOwner *pFVar5;
  FAutomationTestFramework *pFVar6;
  FSharedBuffer *pFVar7;
  FBufferOwner *pFVar8;
  FBufferOwner *pFVar9;
  char local_res18 [8];
  char local_res20 [8];
  char local_58 [8];
  FSharedBuffer local_50;
  FWeakSharedBuffer local_48;
  FString local_40;
  
  local_res18[0] = '\0';
  local_58[0] = '\0';
  local_res20[0] = '\0';
  pFVar5 = ::operator_new(0x38);
  pFVar9 = (FBufferOwner *)0x0;
  pFVar8 = pFVar9;
  if (pFVar5 != (FBufferOwner *)0x0) {
    pFVar5->Data = (void *)0x0;
    pFVar5[1]._padding_ = (longlong)local_res18;
    pFVar5[1].Data = local_58;
    pFVar5[1].Size = (ulong64)local_res20;
    pFVar5->Size = 0;
    pFVar5->ReferenceCountsAndFlags = (atomic<unsigned___int64>)0x0;
    pFVar5->_padding_ = (longlong)&`FBufferOwnerTest::TestBody'::`2'::FTestBufferOwner::_vftable_;
    LOCK();
    pFVar5->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)((ulonglong)pFVar5->ReferenceCountsAndFlags | 0x1000000000000000)
    ;
    UNLOCK();
    pFVar8 = pFVar5;
  }
  FSharedBuffer::FSharedBuffer(&local_50,pFVar8);
  if (local_res18[0] != '\0') {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar3 = pFVar6->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_40,L"FSharedBuffer(BufferOwner)->!Materialized");
    (*pcVar4)(pFVar3,&local_40,0);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  if (local_58[0] != '\0') {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar3 = pFVar6->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_40,L"FSharedBuffer(BufferOwner)->!Freed");
    (*pcVar4)(pFVar3,&local_40,0);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  if (local_res20[0] != '\0') {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar3 = pFVar6->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_40,L"FSharedBuffer(BufferOwner)->!Deleted");
    (*pcVar4)(pFVar3,&local_40,0);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  if ((local_50.Owner.Owner != (FBufferOwner *)0x0) &&
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_50.Owner.Owner + 0x18) >> 0x3c & 4)
      == 0)) {
    (**(code **)(*(longlong *)local_50.Owner.Owner + 8))();
  }
  if (local_res18[0] == '\0') {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar3 = pFVar6->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_40,L"FSharedBuffer(BufferOwner)->GetData()->Materialized");
    (*pcVar4)(pFVar3,&local_40,0);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  local_res18[0] = '\0';
  if (local_50.Owner.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_50.Owner.Owner + 0x18) >> 0x3c & 4
        ) == 0) {
      (**(code **)(*(longlong *)local_50.Owner.Owner + 8))();
    }
    if (local_res18[0] != '\0') {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar3 = pFVar6->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_40,L"FSharedBuffer(BufferOwner)->GetData()->!Materialized");
      (*pcVar4)(pFVar3,&local_40,0);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
  }
  local_res18[0] = '\0';
  pFVar5 = ::operator_new(0x38);
  pFVar8 = pFVar9;
  if (pFVar5 != (FBufferOwner *)0x0) {
    pFVar5->Data = (void *)0x0;
    pFVar5[1]._padding_ = (longlong)local_res18;
    pFVar5[1].Data = local_58;
    pFVar5[1].Size = (ulong64)local_res20;
    pFVar5->Size = 0;
    pFVar5->ReferenceCountsAndFlags = (atomic<unsigned___int64>)0x0;
    pFVar5->_padding_ = (longlong)&`FBufferOwnerTest::TestBody'::`2'::FTestBufferOwner::_vftable_;
    LOCK();
    pFVar5->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)((ulonglong)pFVar5->ReferenceCountsAndFlags | 0x1000000000000000)
    ;
    UNLOCK();
    pFVar8 = pFVar5;
  }
  pFVar7 = FSharedBuffer::FSharedBuffer((FSharedBuffer *)&local_40,pFVar8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
            (&local_50.Owner,&pFVar7->Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_40);
  if (local_res18[0] != '\0') {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar3 = pFVar6->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_40,L"FSharedBuffer(BufferOwner)->Assign(FSharedBuffer)->!Materialized"
                      );
    (*pcVar4)(pFVar3,&local_40,0);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  if (local_58[0] == '\0') {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar3 = pFVar6->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_40,L"FSharedBuffer(BufferOwner)->Assign(FSharedBuffer)->Freed");
    (*pcVar4)(pFVar3,&local_40,0);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  if (local_res20[0] == '\0') {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar3 = pFVar6->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_40,L"FSharedBuffer(BufferOwner)->Assign(FSharedBuffer)->Deleted");
    (*pcVar4)(pFVar3,&local_40,0);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  local_58[0] = '\0';
  local_res20[0] = '\0';
  if ((local_50.Owner.Owner != (FBufferOwner *)0x0) &&
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_50.Owner.Owner + 0x18) >> 0x3c & 4)
      == 0)) {
    (**(code **)(*(longlong *)local_50.Owner.Owner + 8))();
  }
  if (local_res18[0] == '\0') {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar3 = pFVar6->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_40,L"FSharedBuffer(BufferOwner)->GetSize()->Materialized");
    (*pcVar4)(pFVar3,&local_40,0);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  local_res18[0] = '\0';
  if (local_50.Owner.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_50.Owner.Owner + 0x18) >> 0x3c & 4
        ) == 0) {
      (**(code **)(*(longlong *)local_50.Owner.Owner + 8))();
    }
    if (local_res18[0] != '\0') {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar3 = pFVar6->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_40,L"FSharedBuffer(BufferOwner)->GetSize()->!Materialized");
      (*pcVar4)(pFVar3,&local_40,0);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
  }
  local_res18[0] = '\0';
  FWeakSharedBuffer::FWeakSharedBuffer(&local_48,&local_50);
  FSharedBuffer::Reset(&local_50);
  if (local_58[0] == '\0') {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar3 = pFVar6->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_40,L"FSharedBuffer(BufferOwner)->Reset(Shared)->Freed");
    (*pcVar4)(pFVar3,&local_40,0);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  if (local_res20[0] != '\0') {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar3 = pFVar6->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_40,L"FSharedBuffer(BufferOwner)->Reset(Shared)->!Deleted");
    (*pcVar4)(pFVar3,&local_40,0);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  FWeakSharedBuffer::Reset(&local_48);
  if (local_res20[0] == '\0') {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar3 = pFVar6->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_40,L"FSharedBuffer(BufferOwner)->Reset(Weak)->Deleted");
    (*pcVar4)(pFVar3,&local_40,0);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  local_res18[0] = '\0';
  local_58[0] = '\0';
  local_res20[0] = '\0';
  pFVar5 = ::operator_new(0x38);
  pFVar8 = pFVar9;
  if (pFVar5 != (FBufferOwner *)0x0) {
    pFVar5->Data = (void *)0x0;
    pFVar5[1]._padding_ = (longlong)local_res18;
    pFVar5[1].Data = local_58;
    pFVar5[1].Size = (ulong64)local_res20;
    pFVar5->Size = 0;
    pFVar5->ReferenceCountsAndFlags = (atomic<unsigned___int64>)0x0;
    pFVar5->_padding_ = (longlong)&`FBufferOwnerTest::TestBody'::`2'::FTestBufferOwner::_vftable_;
    LOCK();
    pFVar5->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)((ulonglong)pFVar5->ReferenceCountsAndFlags | 0x1000000000000000)
    ;
    UNLOCK();
    pFVar8 = pFVar5;
  }
  pFVar7 = FSharedBuffer::FSharedBuffer((FSharedBuffer *)&local_40,pFVar8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
            (&local_50.Owner,&pFVar7->Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_40);
  if ((local_50.Owner.Owner == (FBufferOwner *)0x0) ||
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_50.Owner.Owner + 0x18) >> 0x3c & 4)
      != 0)) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar3 = pFVar6->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_40,L"FSharedBuffer(BufferOwner)->IsMaterialized()");
    (*pcVar4)(pFVar3,&local_40,0);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  FSharedBuffer::Materialize(&local_50);
  if ((local_50.Owner.Owner != (FBufferOwner *)0x0) &&
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_50.Owner.Owner + 0x18) >> 0x3c & 4)
      == 0)) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar3 = pFVar6->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_40,L"FSharedBuffer(BufferOwner)->Materialize()->IsMaterialized()");
    (*pcVar4)(pFVar3,&local_40,0);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  if (local_res18[0] == '\0') {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar3 = pFVar6->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_40,L"FSharedBuffer(BufferOwner)->Materialize()->Materialized");
    (*pcVar4)(pFVar3,&local_40,0);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  local_res18[0] = '\0';
  FSharedBuffer::Materialize(&local_50);
  if (local_res18[0] != '\0') {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar3 = pFVar6->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_40,L"FSharedBuffer(BufferOwner)->Materialize()->!Materialized");
    (*pcVar4)(pFVar3,&local_40,0);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  local_res18[0] = '\0';
  FSharedBuffer::Reset(&local_50);
  local_58[0] = '\0';
  local_res20[0] = '\0';
  pFVar8 = ::operator_new(0x38);
  if (pFVar8 != (FBufferOwner *)0x0) {
    pFVar8->Data = (void *)0x0;
    pFVar8[1]._padding_ = (longlong)local_res18;
    pFVar8[1].Data = local_58;
    pFVar8[1].Size = (ulong64)local_res20;
    pFVar8->Size = 0;
    pFVar8->ReferenceCountsAndFlags = (atomic<unsigned___int64>)0x0;
    pFVar8->_padding_ = (longlong)&`FBufferOwnerTest::TestBody'::`2'::FTestBufferOwner::_vftable_;
    LOCK();
    pFVar8->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)((ulonglong)pFVar8->ReferenceCountsAndFlags | 0x1000000000000000)
    ;
    UNLOCK();
    pFVar9 = pFVar8;
  }
  pFVar7 = FSharedBuffer::FSharedBuffer((FSharedBuffer *)&local_40,pFVar9);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
            (&local_50.Owner,&pFVar7->Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_40);
  FSharedBuffer::Reset(&local_50);
  if (local_res18[0] != '\0') {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar3 = pFVar6->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_40,L"FSharedBuffer(BufferOwner)->Reset(!Materialized)->!Materialized")
    ;
    (*pcVar4)(pFVar3,&local_40,0);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  if (local_58[0] == '\0') {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar3 = pFVar6->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_40,L"FSharedBuffer(BufferOwner)->Reset(!Materialized)->Freed");
    (*pcVar4)(pFVar3,&local_40,0);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  if (local_res20[0] == '\0') {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar3 = pFVar6->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_40,L"FSharedBuffer(BufferOwner)->Reset(!Materialized)->Deleted");
    (*pcVar4)(pFVar3,&local_40,0);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_48.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
    UNLOCK();
    if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
      (*(code *)**(undefined8 **)local_48.Owner.Owner)(local_48.Owner.Owner,1);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_50.Owner);
  return;
}

