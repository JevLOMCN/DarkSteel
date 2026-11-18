// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141c5b1d0

EAutomationTestFlags __thiscall FUniqueBufferTest::GetTestFlags(FUniqueBufferTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141c5b1e0

bool __thiscall FUniqueBufferTest::IsStressTest(FUniqueBufferTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141c5b1f0

uint __thiscall FUniqueBufferTest::GetRequiredDeviceNum(FUniqueBufferTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141c5b200

FString * __thiscall
FUniqueBufferTest::GetTestSourceFileName(FUniqueBufferTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Memory\\SharedBufferTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141c5b230

int __thiscall FUniqueBufferTest::GetTestSourceFileLine(FUniqueBufferTest *this)

{
  return 0x7f;
}

// GetTests @ 141c5b240

/* WARNING: Removing unreachable block (ram,0x000141c5b3be) */

void __thiscall
FUniqueBufferTest::GetTests
          (FUniqueBufferTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141c5b3e0

bool __thiscall FUniqueBufferTest::RunTest(FUniqueBufferTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141c5b410

FString * __thiscall
FUniqueBufferTest::GetBeautifiedTestName(FUniqueBufferTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FUniqueBufferTest @ 141c8e570

FUniqueBufferTest * __thiscall
FUniqueBufferTest::FUniqueBufferTest(FUniqueBufferTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FUniqueBufferTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Memory::UniqueBuffer");
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

// TestBody @ 141cae220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUniqueBufferTest::TestBody(FUniqueBufferTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FAutomationTestFramework *pFVar3;
  FBufferOwner *pFVar4;
  FBufferOwner *pFVar5;
  FUniqueBuffer FVar6;
  ulong64 uVar7;
  FBufferOwner *pFVar8;
  undefined1 auStack_158 [32];
  FUniqueBuffer local_138;
  char local_130 [8];
  FString local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  pFVar3 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual(pFVar3->CurrentTest,L"FUniqueBuffer().GetSize()",0,0);
  pFVar3 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual(pFVar3->CurrentTest,L"FUniqueBuffer().GetView().GetSize()",0,0);
  FAutomationTestFramework::Get();
  FUniqueBuffer::Alloc((ulong64)&local_138);
  if ((local_138.Owner.Owner != (FBufferOwner *)0x0) &&
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_138.Owner.Owner + 0x18) >> 0x3c & 1)
      == 0)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_128,L"FUniqueBuffer::Alloc().IsOwned()");
    (*pcVar2)(pFVar1,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = FAutomationTestFramework::Get();
  FVar6.Owner.Owner = local_138.Owner.Owner;
  pFVar8 = (FBufferOwner *)0x0;
  pFVar1 = pFVar3->CurrentTest;
  pFVar5 = pFVar8;
  if (local_138.Owner.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_138.Owner.Owner + 0x18) >> 0x3c &
        4) == 0) {
      (**(code **)(*(longlong *)local_138.Owner.Owner + 8))(local_138.Owner.Owner);
    }
    pFVar5 = *(FBufferOwner **)((longlong)FVar6.Owner.Owner + 0x10);
  }
  FAutomationTestBase::TestEqual(pFVar1,L"FUniqueBuffer::Alloc().GetSize()",(ulong64)pFVar5,0x40);
  pFVar3 = FAutomationTestFramework::Get();
  FVar6.Owner.Owner = local_138.Owner.Owner;
  pFVar1 = pFVar3->CurrentTest;
  if (local_138.Owner.Owner == (FBufferOwner *)0x0) {
    uVar7 = 0;
  }
  else {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_138.Owner.Owner + 0x18) >> 0x3c &
        4) == 0) {
      (**(code **)(*(longlong *)local_138.Owner.Owner + 8))(local_138.Owner.Owner);
    }
    uVar7 = *(ulong64 *)((longlong)FVar6.Owner.Owner + 0x10);
    if ((local_138.Owner.Owner != (FBufferOwner *)0x0) &&
       (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_138.Owner.Owner + 0x18) >> 0x3c &
        4) == 0)) {
      (**(code **)(*(longlong *)local_138.Owner.Owner + 8))();
    }
  }
  FAutomationTestBase::TestEqual(pFVar1,L"FUniqueBuffer::Alloc().GetView().GetSize()",uVar7,0x40);
  pFVar3 = FAutomationTestFramework::Get();
  FVar6.Owner.Owner = local_138.Owner.Owner;
  pFVar1 = pFVar3->CurrentTest;
  pFVar5 = pFVar8;
  if (local_138.Owner.Owner == (FBufferOwner *)0x0) {
    pFVar4 = (FBufferOwner *)0x0;
  }
  else {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_138.Owner.Owner + 0x18) >> 0x3c &
        4) == 0) {
      (**(code **)(*(longlong *)local_138.Owner.Owner + 8))(local_138.Owner.Owner);
    }
    pFVar4 = *(void **)((longlong)FVar6.Owner.Owner + 8);
    if (local_138.Owner.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_138.Owner.Owner + 0x18) >> 0x3c
          & 4) == 0) {
        (**(code **)(*(longlong *)local_138.Owner.Owner + 8))();
      }
      FVar6.Owner.Owner = local_138.Owner.Owner;
      if (local_138.Owner.Owner != (FBufferOwner *)0x0) {
        if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_138.Owner.Owner + 0x18) >>
             0x3c & 4) == 0) {
          (**(code **)(*(longlong *)local_138.Owner.Owner + 8))(local_138.Owner.Owner);
        }
        pFVar5 = *(void **)((longlong)FVar6.Owner.Owner + 8);
      }
    }
  }
  if (pFVar5 != pFVar4) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_138.Owner);
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  FUniqueBuffer::Clone(&local_138,(ulong64)&local_118);
  if ((local_138.Owner.Owner != (FBufferOwner *)0x0) &&
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_138.Owner.Owner + 0x18) >> 0x3c & 1)
      == 0)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_128,L"FUniqueBuffer::Clone().IsOwned()");
    (*pcVar2)(pFVar1,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = FAutomationTestFramework::Get();
  FVar6.Owner.Owner = local_138.Owner.Owner;
  pFVar1 = pFVar3->CurrentTest;
  pFVar5 = pFVar8;
  if (local_138.Owner.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_138.Owner.Owner + 0x18) >> 0x3c &
        4) == 0) {
      (**(code **)(*(longlong *)local_138.Owner.Owner + 8))(local_138.Owner.Owner);
    }
    pFVar5 = *(FBufferOwner **)((longlong)FVar6.Owner.Owner + 0x10);
  }
  FAutomationTestBase::TestEqual(pFVar1,L"FUniqueBuffer::Clone().GetSize()",(ulong64)pFVar5,0x40);
  pFVar3 = FAutomationTestFramework::Get();
  FVar6.Owner.Owner = local_138.Owner.Owner;
  pFVar1 = pFVar3->CurrentTest;
  if (local_138.Owner.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_138.Owner.Owner + 0x18) >> 0x3c &
        4) == 0) {
      (**(code **)(*(longlong *)local_138.Owner.Owner + 8))(local_138.Owner.Owner);
    }
    if (*(void **)((longlong)FVar6.Owner.Owner + 8) == &local_118) {
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_128,L"%s: The two values are equal.");
      (*pcVar2)(pFVar1,&local_128,0);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_138.Owner);
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUniqueBuffer::MakeView(&local_138,(ulong64)&local_d8);
  if ((local_138.Owner.Owner == (FBufferOwner *)0x0) ||
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_138.Owner.Owner + 0x18) >> 0x3c & 1)
      != 0)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_128,L"FUniqueBuffer::MakeView().IsOwned()");
    (*pcVar2)(pFVar1,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = FAutomationTestFramework::Get();
  FVar6.Owner.Owner = local_138.Owner.Owner;
  pFVar1 = pFVar3->CurrentTest;
  pFVar5 = pFVar8;
  if (local_138.Owner.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_138.Owner.Owner + 0x18) >> 0x3c &
        4) == 0) {
      (**(code **)(*(longlong *)local_138.Owner.Owner + 8))(local_138.Owner.Owner);
    }
    pFVar5 = *(FBufferOwner **)((longlong)FVar6.Owner.Owner + 0x10);
  }
  FAutomationTestBase::TestEqual(pFVar1,L"FUniqueBuffer::MakeView().GetSize()",(ulong64)pFVar5,0x40)
  ;
  pFVar3 = FAutomationTestFramework::Get();
  FVar6.Owner.Owner = local_138.Owner.Owner;
  pFVar1 = pFVar3->CurrentTest;
  if (local_138.Owner.Owner == (FBufferOwner *)0x0) {
LAB_141cae6b6:
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_138.Owner.Owner + 0x18) >> 0x3c &
        4) == 0) {
      (**(code **)(*(longlong *)local_138.Owner.Owner + 8))(local_138.Owner.Owner);
    }
    if (*(void **)((longlong)FVar6.Owner.Owner + 8) != &local_d8) goto LAB_141cae6b6;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_138.Owner);
  local_130[0] = '\0';
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  pFVar4 = ::operator_new(0x28);
  pFVar5 = pFVar8;
  if (pFVar4 != (FBufferOwner *)0x0) {
    pFVar4->ReferenceCountsAndFlags = (atomic<unsigned___int64>)0x0;
    pFVar4->Data = &local_98;
    pFVar4->_padding_ =
         (longlong)
         &UE::SharedBuffer::Private::
          TBufferOwnerDeleteFunction<`FUniqueBufferTest::TestBody'::`19'::<lambda_1>_>::_vftable_;
    pFVar4[1]._padding_ = (longlong)local_130;
    pFVar4->Size = 0x40;
    LOCK();
    pFVar4->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)((ulonglong)pFVar4->ReferenceCountsAndFlags | 0x4000000000000000)
    ;
    UNLOCK();
    LOCK();
    pFVar4->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)((ulonglong)pFVar4->ReferenceCountsAndFlags | 0x1000000000000000)
    ;
    UNLOCK();
    pFVar5 = pFVar4;
  }
  FUniqueBuffer::FUniqueBuffer(&local_138,pFVar5);
  if ((local_138.Owner.Owner != (FBufferOwner *)0x0) &&
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_138.Owner.Owner + 0x18) >> 0x3c & 1)
      == 0)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_128,L"FUniqueBuffer::TakeOwnership().IsOwned()");
    (*pcVar2)(pFVar1,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = FAutomationTestFramework::Get();
  FVar6.Owner.Owner = local_138.Owner.Owner;
  pFVar1 = pFVar3->CurrentTest;
  pFVar5 = pFVar8;
  if (local_138.Owner.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_138.Owner.Owner + 0x18) >> 0x3c &
        4) == 0) {
      (**(code **)(*(longlong *)local_138.Owner.Owner + 8))(local_138.Owner.Owner);
    }
    pFVar5 = *(FBufferOwner **)((longlong)FVar6.Owner.Owner + 0x10);
  }
  FAutomationTestBase::TestEqual
            (pFVar1,L"FUniqueBuffer::TakeOwnership().GetSize()",(ulong64)pFVar5,0x40);
  pFVar3 = FAutomationTestFramework::Get();
  FVar6.Owner.Owner = local_138.Owner.Owner;
  pFVar1 = pFVar3->CurrentTest;
  if (local_138.Owner.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_138.Owner.Owner + 0x18) >> 0x3c &
        4) == 0) {
      (**(code **)(*(longlong *)local_138.Owner.Owner + 8))(local_138.Owner.Owner);
    }
    if (*(void **)((longlong)FVar6.Owner.Owner + 8) == &local_98) goto LAB_141cae88b;
  }
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_128,L"%s: The two values are not equal.");
  (*pcVar2)(pFVar1,&local_128,0);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
LAB_141cae88b:
  FUniqueBuffer::Reset(&local_138);
  if (local_130[0] == '\0') {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_128,L"FUniqueBuffer::TakeOwnership() Deleted");
    (*pcVar2)(pFVar1,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_138.Owner);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FVar6 = FUniqueBuffer::MakeView(&local_128,(ulong64)&local_58);
  FUniqueBuffer::MakeOwned((FUniqueBuffer *)FVar6.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_128);
  if ((local_138.Owner.Owner != (FBufferOwner *)0x0) &&
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_138.Owner.Owner + 0x18) >> 0x3c & 1)
      == 0)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_128,L"FUniqueBuffer::MakeOwned(View).IsOwned()");
    (*pcVar2)(pFVar1,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = FAutomationTestFramework::Get();
  FVar6.Owner.Owner = local_138.Owner.Owner;
  pFVar1 = pFVar3->CurrentTest;
  pFVar5 = pFVar8;
  if (local_138.Owner.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_138.Owner.Owner + 0x18) >> 0x3c &
        4) == 0) {
      (**(code **)(*(longlong *)local_138.Owner.Owner + 8))(local_138.Owner.Owner);
    }
    pFVar5 = *(FBufferOwner **)((longlong)FVar6.Owner.Owner + 0x10);
  }
  FAutomationTestBase::TestEqual
            (pFVar1,L"FUniqueBuffer::MakeOwned(View).GetSize()",(ulong64)pFVar5,0x40);
  FVar6.Owner.Owner = local_138.Owner.Owner;
  pFVar5 = pFVar8;
  if (local_138.Owner.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_138.Owner.Owner + 0x18) >> 0x3c &
        4) == 0) {
      (**(code **)(*(longlong *)local_138.Owner.Owner + 8))(local_138.Owner.Owner);
    }
    if (*(void **)((longlong)FVar6.Owner.Owner + 8) == &local_58) {
      pFVar3 = FAutomationTestFramework::Get();
      pFVar1 = pFVar3->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_128,L"FUniqueBuffer::MakeOwned(View).GetData()");
      (*pcVar2)(pFVar1,&local_128,0);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
    }
    FVar6.Owner.Owner = local_138.Owner.Owner;
    if (local_138.Owner.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_138.Owner.Owner + 0x18) >> 0x3c
          & 4) == 0) {
        (**(code **)(*(longlong *)local_138.Owner.Owner + 8))(local_138.Owner.Owner);
      }
      pFVar5 = *(void **)((longlong)FVar6.Owner.Owner + 8);
    }
  }
  FVar6 = FUniqueBuffer::MakeOwned(&local_138);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
            (&local_138.Owner,
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)FVar6.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_128);
  if ((local_138.Owner.Owner != (FBufferOwner *)0x0) &&
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_138.Owner.Owner + 0x18) >> 0x3c & 1)
      == 0)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_128,L"FUniqueBuffer::MakeOwned(Owned).IsOwned()");
    (*pcVar2)(pFVar1,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = FAutomationTestFramework::Get();
  FVar6.Owner.Owner = local_138.Owner.Owner;
  pFVar1 = pFVar3->CurrentTest;
  pFVar4 = pFVar8;
  if (local_138.Owner.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_138.Owner.Owner + 0x18) >> 0x3c &
        4) == 0) {
      (**(code **)(*(longlong *)local_138.Owner.Owner + 8))(local_138.Owner.Owner);
    }
    pFVar4 = *(FBufferOwner **)((longlong)FVar6.Owner.Owner + 0x10);
  }
  FAutomationTestBase::TestEqual
            (pFVar1,L"FUniqueBuffer::MakeOwned(Owned).GetSize()",(ulong64)pFVar4,0x40);
  pFVar3 = FAutomationTestFramework::Get();
  pFVar1 = pFVar3->CurrentTest;
  if (local_138.Owner.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_138.Owner.Owner + 0x18) >> 0x3c &
        4) == 0) {
      (**(code **)(*(longlong *)local_138.Owner.Owner + 8))(local_138.Owner.Owner);
    }
    pFVar8 = *(void **)((longlong)local_138.Owner.Owner + 8);
  }
  if (pFVar8 != pFVar5) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_138.Owner);
  return;
}

