// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// GetTestFlags @ 141c5d140

EAutomationTestFlags __thiscall
FMemoryCompositeBufferTest::GetTestFlags(FMemoryCompositeBufferTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141c5d150

bool __thiscall FMemoryCompositeBufferTest::IsStressTest(FMemoryCompositeBufferTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141c5d160

uint __thiscall FMemoryCompositeBufferTest::GetRequiredDeviceNum(FMemoryCompositeBufferTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141c5d170

FString * __thiscall
FMemoryCompositeBufferTest::GetTestSourceFileName
          (FMemoryCompositeBufferTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Memory\\CompositeBufferTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141c5d1a0

int __thiscall FMemoryCompositeBufferTest::GetTestSourceFileLine(FMemoryCompositeBufferTest *this)

{
  return 0xb;
}

// GetTests @ 141c5d1b0

/* WARNING: Removing unreachable block (ram,0x000141c5d32e) */

void __thiscall
FMemoryCompositeBufferTest::GetTests
          (FMemoryCompositeBufferTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141c5d350

bool __thiscall
FMemoryCompositeBufferTest::RunTest(FMemoryCompositeBufferTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141c5d380

FString * __thiscall
FMemoryCompositeBufferTest::GetBeautifiedTestName
          (FMemoryCompositeBufferTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FMemoryCompositeBufferTest @ 141c8cd90

FMemoryCompositeBufferTest * __thiscall
FMemoryCompositeBufferTest::FMemoryCompositeBufferTest
          (FMemoryCompositeBufferTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FMemoryCompositeBufferTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][Memory][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Memory::CompositeBuffer");
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
  ::FString::FString(&local_18,"[Core][Memory][SmokeFilter]");
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

// operator() @ 141c900d0

void __thiscall
`FMemoryCompositeBufferTest::TestBody'::__l159::<lambda_6>::operator()
          (void *this,ulong64 param_1,ulong64 param_2,TMemoryView<void_const_> *param_3,
          FSharedBuffer *param_4)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar5;
  FAutomationTestFramework *pFVar6;
  FString *pFVar7;
  int local_res8 [2];
  ulong64 local_res10;
  ulong64 local_res18;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res20;
  void *local_68;
  ulong64 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *local_38;
  
  local_48._0_8_ = local_res8;
  local_48._8_8_ = &local_68;
  local_res8[0] = 0;
  local_38 = &local_res20;
  local_68 = (void *)0x0;
  local_58._8_8_ = local_48;
  local_60 = 0;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``FMemoryCompositeBufferTest::TestBody'::__l159::<lambda_6>::operator()'::__l2::<lambda_1>,void,TMemoryView<void_const_>,FSharedBuffer_const_&>
       ::Call;
  local_res20.Owner = (FBufferOwner *)0x0;
  local_res10 = param_1;
  local_res18 = param_2;
  FCompositeBuffer::IterateRange
            (*(FCompositeBuffer **)this,param_1,param_2,
             (TFunctionRef<void___cdecl(TMemoryView<void_const_>,FSharedBuffer_const_&)> *)local_58)
  ;
  pFVar6 = FAutomationTestFramework::Get();
  pFVar3 = pFVar6->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString((FString *)local_58,"Offset, Size");
  pFVar7 = CaptureExpressionsAndValues<unsigned___int64_&,unsigned___int64_&>
                     ((FString *)local_48,(FString *)local_58,&local_res10,&local_res18);
  (*pcVar4)(pFVar3,pFVar7,0,0);
  if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_48._0_8_);
  }
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  if (local_res8[0] != 1) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar3 = pFVar6->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)local_58,L"Condition failed");
    (*pcVar4)(pFVar3,local_58,0);
    if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_58._0_8_);
    }
  }
  if ((local_60 != param_3->Size) || ((local_60 != 0 && (local_68 != param_3->Data)))) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar3 = pFVar6->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)local_58,L"Condition failed");
    (*pcVar4)(pFVar3,local_58,0);
    if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_58._0_8_);
    }
  }
  if (local_res20.Owner != (param_4->Owner).Owner) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar3 = pFVar6->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)local_58,L"Condition failed");
    (*pcVar4)(pFVar3,local_58,0);
    if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_58._0_8_);
    }
  }
  TVar5.Owner = local_res20.Owner;
  if (local_res20.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &(local_res20.Owner)->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)((local_res20.Owner)->_padding_ + 0x10))(local_res20.Owner);
      (TVar5.Owner)->Data = (void *)0x0;
      (TVar5.Owner)->Size = 0;
      LOCK();
      paVar1 = &(TVar5.Owner)->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)(TVar5.Owner)->_padding_)(TVar5.Owner,1);
      }
    }
  }
  return;
}

// TestBody @ 141ca6830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
FMemoryCompositeBufferTest::TestBody(FMemoryCompositeBufferTest *this,FString *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  FUniqueBuffer FVar9;
  bool bVar10;
  FAutomationTestFramework *pFVar11;
  FCompositeBuffer *pFVar12;
  FSharedBuffer FVar13;
  ulong64 uVar14;
  TMemoryView<void_const_> *pTVar15;
  FSharedBuffer *pFVar16;
  void *pvVar17;
  TMemoryView<void_const_> *pTVar18;
  undefined1 *puVar19;
  FSharedBuffer FVar20;
  FSharedBuffer FVar21;
  longlong lVar22;
  ulonglong uVar23;
  ForElementType<FSharedBuffer> FVar24;
  undefined1 *puVar25;
  longlong lVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  uint uVar29;
  void *pvVar30;
  undefined1 *puVar32;
  uint uVar33;
  int iVar34;
  undefined1 auStackY_d88 [32];
  undefined1 local_d48;
  undefined1 local_d47 [7];
  TMemoryView<void_const_> local_d40;
  FUniqueBuffer local_d30;
  FSharedBuffer local_d28;
  undefined1 local_d20 [16];
  int local_d10;
  int local_d0c;
  int local_d08;
  int local_d04;
  int local_d00 [2];
  FSharedBuffer local_cf8;
  TArray<FSharedBuffer,TSizedDefaultAllocator<32>_> local_cf0;
  FCompositeBuffer *local_ce0;
  TArray<FSharedBuffer,TSizedDefaultAllocator<32>_> local_cd8;
  int local_cc8 [2];
  FSharedBuffer local_cc0;
  FUniqueBuffer local_cb8;
  FUniqueBuffer local_cb0;
  FUniqueBuffer local_ca8;
  FUniqueBuffer local_ca0;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_c98;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_c90;
  FSharedBuffer local_c88;
  FSharedBuffer local_c80;
  FSharedBuffer local_c78;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_c70;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_c68;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_c60;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_c58;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_c50;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_c48;
  int *local_c40;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_c38;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_c30;
  int *local_c28;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_c20;
  int *local_c18;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_c10;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_c08;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_c00;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_bf8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_bf0;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_be8;
  int *local_be0;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_bd8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_bd0;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_bc8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_bc0;
  int *local_bb8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_bb0;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_ba8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_ba0;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_b98;
  FString local_b90;
  FString local_b80;
  FString local_b70;
  FString local_b60;
  FString local_b50;
  FString local_b40;
  FString local_b30;
  FString local_b20;
  FString local_b10;
  FString local_b00;
  FString local_af0;
  FString local_ae0;
  FString local_ad0;
  FString local_ac0;
  TMemoryView<void> local_aa8;
  code *local_a98;
  int **local_a90;
  FString local_a88;
  FString local_a78;
  FString local_a68;
  FString local_a58;
  FString local_a48;
  FString local_a38;
  FString local_a28;
  FString local_a18;
  FString local_a08;
  FString local_9f8;
  FString local_9e8;
  FString local_9d8;
  FString local_9c8;
  TArrayView<FSharedBuffer_const_,int> local_9b8;
  FString local_9a8;
  FString local_998;
  FString local_988;
  TMemoryView<void> local_978;
  code *local_968;
  int **local_960;
  FString local_958;
  FString local_948;
  FString local_938;
  FString local_928;
  FString local_918;
  TArrayView<FSharedBuffer_const_,int> local_908;
  FString local_8f8;
  TArrayView<FSharedBuffer_const_,int> local_8e8;
  FString local_8d8;
  FString local_8c8;
  FString local_8b8;
  TMemoryView<void> local_8a8;
  code *local_898;
  int **local_890;
  FString local_888;
  FString local_878;
  undefined4 *local_868;
  undefined8 local_860;
  FString local_858;
  FString local_848;
  FString local_838;
  FString local_828;
  FString local_818;
  FString local_808;
  FString local_7f8;
  FString local_7e8;
  FString local_7d8;
  FString local_7c8;
  FString local_7b8;
  FString local_7a8;
  FString local_798;
  FString local_788;
  FString local_778;
  FString local_768;
  TMemoryView<void> local_758;
  FString local_748;
  code *local_738;
  int **local_730;
  FString local_728;
  FString local_718;
  undefined2 *local_708;
  undefined8 local_700;
  undefined2 *local_6f8;
  undefined8 local_6f0;
  FString local_6e8;
  FString local_6d8;
  FString local_6c8;
  FString local_6b8;
  FString local_6a8;
  FString local_698;
  FString local_688;
  FString local_678;
  FString local_668;
  FString local_658;
  TArrayView<FSharedBuffer_const_,int> local_648;
  FString local_638;
  TArrayView<FSharedBuffer_const_,int> local_628;
  FString local_618;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  TMemoryView<void> local_568;
  FString local_558;
  code *local_548;
  int **local_540;
  FString local_538;
  TMemoryView<void_const_> local_528;
  TMemoryView<void_const_> local_518;
  TMemoryView<void_const_> local_508;
  TMemoryView<void_const_> local_4f8;
  FString local_4e8;
  TMemoryView<void_const_> local_4d8;
  TMemoryView<void_const_> local_4c8;
  TMemoryView<void_const_> local_4b8;
  TMemoryView<void_const_> local_4a8;
  TMemoryView<void_const_> local_498;
  TMemoryView<void_const_> local_488;
  TMemoryView<void_const_> local_478;
  void *local_468;
  ulong64 uStack_460;
  TMemoryView<void_const_> local_458;
  TMemoryView<void_const_> local_448;
  TMemoryView<void_const_> local_438;
  void *local_428;
  ulong64 uStack_420;
  TMemoryView<void_const_> local_418;
  TMemoryView<void_const_> local_408;
  TMemoryView<void_const_> local_3f8;
  TMemoryView<void_const_> local_3e8;
  TMemoryView<void_const_> local_3d8;
  void *local_3c8;
  ulong64 uStack_3c0;
  TMemoryView<void_const_> local_3b8;
  TMemoryView<void_const_> local_3a8;
  TMemoryView<void_const_> local_398;
  TMemoryView<void_const_> local_388;
  TMemoryView<void_const_> local_378;
  TMemoryView<void_const_> local_368;
  TMemoryView<void_const_> local_358;
  TMemoryView<void_const_> local_348;
  TMemoryView<void_const_> local_338;
  FCompositeBuffer local_328;
  FCompositeBuffer local_310;
  FCompositeBuffer local_2f8;
  FCompositeBuffer local_2e0;
  FCompositeBuffer local_2c8;
  FCompositeBuffer local_2b0;
  FCompositeBuffer local_298;
  FCompositeBuffer local_280;
  FCompositeBuffer local_268;
  FCompositeBuffer local_250;
  FCompositeBuffer local_238;
  FCompositeBuffer local_220;
  FCompositeBuffer local_208;
  FCompositeBuffer local_1f0;
  FCompositeBuffer local_1d8;
  FCompositeBuffer local_1c0;
  FCompositeBuffer local_1a8;
  FCompositeBuffer local_190;
  FCompositeBuffer local_178;
  FCompositeBuffer local_160;
  FCompositeBuffer local_148;
  FCompositeBuffer local_130;
  FCompositeBuffer local_118;
  FCompositeBuffer local_100;
  FCompositeBuffer local_e8;
  FCompositeBuffer local_d0;
  FCompositeBuffer local_b8;
  FCompositeBuffer local_a0;
  FCompositeBuffer local_88;
  FCompositeBuffer local_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  char local_3c;
  ulonglong local_38;
  void *pvVar31;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d88;
  pFVar11 = FAutomationTestFramework::Get();
  pFVar3 = pFVar11->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&local_b50,L"Static");
  (*pcVar4)(pFVar3,&local_b50);
  if (local_b50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b50.Data.AllocatorInstance.Data);
  }
  pFVar11 = FAutomationTestFramework::Get();
  pFVar3 = pFVar11->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&local_b40,L"Null");
  (*pcVar4)(pFVar3,&local_b40);
  if (local_b40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b40.Data.AllocatorInstance.Data);
  }
  pvVar31 = (void *)0x0;
  local_2c8.Segments.ArrayMax = 1;
  local_2c8.Segments.AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
  local_2c8.Segments.ArrayNum = 0;
  bVar10 = FCompositeBuffer::IsOwned(&local_2c8);
  if (!bVar10) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_b30,L"Condition failed");
    (*pcVar4)(pFVar3,&local_b30);
    if (local_b30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b30.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FCompositeBuffer::MakeOwned(&local_2c8,&local_178);
  iVar34 = (pFVar12->Segments).ArrayNum;
  FCompositeBuffer::~FCompositeBuffer(&local_178);
  if (iVar34 != 0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_b20,L"Condition failed");
    (*pcVar4)(pFVar3,&local_b20);
    if (local_b20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b20.Data.AllocatorInstance.Data);
    }
  }
  FVar13 = FCompositeBuffer::ToShared(&local_2c8);
  lVar22 = *(longlong *)FVar13.Owner.Owner;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c48);
  if (lVar22 != 0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_b10,L"Condition failed");
    (*pcVar4)(pFVar3,&local_b10);
    if (local_b10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b10.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FCompositeBuffer::Mid(&local_2c8,&local_160,0,0);
  iVar34 = (pFVar12->Segments).ArrayNum;
  FCompositeBuffer::~FCompositeBuffer(&local_160);
  if (iVar34 != 0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_b00,L"Condition failed");
    (*pcVar4)(pFVar3,&local_b00);
    if (local_b00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b00.Data.AllocatorInstance.Data);
    }
  }
  uVar14 = FCompositeBuffer::GetSize(&local_2c8);
  if (uVar14 != 0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_af0,L"Condition failed");
    (*pcVar4)(pFVar3,&local_af0);
    if (local_af0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_af0.Data.AllocatorInstance.Data);
    }
  }
  if (local_2c8.Segments.ArrayNum < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_141ca6b35:
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_ae0,L"Condition failed");
    (*pcVar4)(pFVar3,&local_ae0);
    if (local_ae0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ae0.Data.AllocatorInstance.Data);
    }
  }
  else if (local_2c8.Segments.ArrayNum != 0) goto LAB_141ca6b35;
  local_cb0.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  pTVar15 = FCompositeBuffer::ViewOrCopyRange(&local_2c8,&local_488,0,0,&local_cb0);
  if (pTVar15->Size != 0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_ad0,L"Condition failed");
    (*pcVar4)(pFVar3,&local_ad0);
    if (local_ad0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ad0.Data.AllocatorInstance.Data);
    }
  }
  if (local_cb0.Owner.Owner != (FBufferOwner *)0x0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_ac0,L"Condition failed");
    (*pcVar4)(pFVar3,&local_ac0);
    if (local_ac0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ac0.Data.AllocatorInstance.Data);
    }
  }
  local_aa8.Data = (void *)0x0;
  local_aa8.Size = 0;
  FCompositeBuffer::CopyTo(&local_2c8,&local_aa8,0);
  local_c40 = &local_d10;
  local_d10 = 0;
  local_a90 = &local_c40;
  local_a98 = UE::Core::Private::Function::
              TFunctionRefCaller<`FMemoryCompositeBufferTest::TestBody'::__l4::<lambda_1>,void,TMemoryView<void_const_>_>
              ::Call;
  FCompositeBuffer::IterateRange
            (&local_2c8,0,0,(TFunctionRef<void___cdecl(TMemoryView<void_const_>)> *)&local_a98);
  if (local_d10 != 0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_a88,L"Condition failed");
    (*pcVar4)(pFVar3,&local_a88,0);
    if (local_a88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a88.Data.AllocatorInstance.Data);
    }
  }
  FVar9.Owner.Owner = local_cb0.Owner.Owner;
  if (local_cb0.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_cb0.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_cb0.Owner.Owner + 0x10))(local_cb0.Owner.Owner);
      *(void **)((longlong)FVar9.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar9.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar9.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar9.Owner.Owner)(FVar9.Owner.Owner,1);
      }
    }
  }
  FCompositeBuffer::~FCompositeBuffer(&local_2c8);
  pFVar11 = FAutomationTestFramework::Get();
  pFVar3 = pFVar11->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&local_a78,L"Null Remove");
  (*pcVar4)(pFVar3,&local_a78,0);
  if (local_a78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a78.Data.AllocatorInstance.Data);
  }
  local_c80.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_cd8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_cd8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_cd8.AllocatorInstance,1,&local_cd8.ArrayMax);
  ConstructItems<FSharedBuffer,FSharedBuffer,int>(local_cd8.AllocatorInstance.Data,&local_c80,1);
  local_298.Segments.AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
  local_298.Segments.ArrayNum = 0;
  local_298.Segments.ArrayMax = 1;
  local_c88.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  FCompositeBuffer::
  FCompositeBuffer<FSharedBuffer,FCompositeBuffer,TArray<FSharedBuffer,TSizedDefaultAllocator<32>_>,0>
            (&local_268,&local_c88,&local_298,&local_cd8);
  FVar13.Owner.Owner = local_c88.Owner.Owner;
  if (local_c88.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_c88.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_c88.Owner.Owner + 0x10))(local_c88.Owner.Owner);
      *(void **)((longlong)FVar13.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar13.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar13.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar13.Owner.Owner)(FVar13.Owner.Owner,1);
      }
    }
  }
  FCompositeBuffer::~FCompositeBuffer(&local_298);
  DestructItems<FSharedBuffer,int>
            ((FSharedBuffer *)local_cd8.AllocatorInstance.Data,local_cd8.ArrayNum);
  if (local_cd8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cd8.AllocatorInstance.Data);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c80.Owner);
  if (local_268.Segments.ArrayNum != 0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_a68,L"Condition failed");
    (*pcVar4)(pFVar3,&local_a68);
    if (local_a68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a68.Data.AllocatorInstance.Data);
    }
  }
  if (local_268.Segments.ArrayNum < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_141ca6f2c:
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_a58,L"Condition failed");
    (*pcVar4)(pFVar3,&local_a58);
    if (local_a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a58.Data.AllocatorInstance.Data);
    }
  }
  else if (local_268.Segments.ArrayNum != 0) goto LAB_141ca6f2c;
  FCompositeBuffer::~FCompositeBuffer(&local_268);
  pFVar11 = FAutomationTestFramework::Get();
  pFVar3 = pFVar11->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&local_a48,L"Empty");
  (*pcVar4)(pFVar3,&local_a48);
  if (local_a48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a48.Data.AllocatorInstance.Data);
  }
  local_d40.Size._0_1_ = 0;
  FSharedBuffer::MakeView(&local_d28,(ulong64)&local_d40.Size);
  FCompositeBuffer::FCompositeBuffer<FSharedBuffer_const_&,0>(&local_2e0,&local_d28);
  if (local_2e0.Segments.ArrayNum == 0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_a38,L"Condition expected to return false but returned true");
    (*pcVar4)(pFVar3,&local_a38);
    if (local_a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a38.Data.AllocatorInstance.Data);
    }
  }
  bVar10 = FCompositeBuffer::IsOwned(&local_2e0);
  if (bVar10) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_a28,L"Condition expected to return false but returned true");
    (*pcVar4)(pFVar3,&local_a28);
    if (local_a28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a28.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FCompositeBuffer::MakeOwned(&local_2e0,&local_148);
  iVar34 = (pFVar12->Segments).ArrayNum;
  FCompositeBuffer::~FCompositeBuffer(&local_148);
  if (iVar34 == 0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_a18,L"Condition expected to return false but returned true");
    (*pcVar4)(pFVar3,&local_a18);
    if (local_a18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a18.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FCompositeBuffer::MakeOwned(&local_2e0,&local_130);
  bVar10 = FCompositeBuffer::IsOwned(pFVar12);
  FCompositeBuffer::~FCompositeBuffer(&local_130);
  if (!bVar10) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_a08,L"Condition failed");
    (*pcVar4)(pFVar3,&local_a08);
    if (local_a08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a08.Data.AllocatorInstance.Data);
    }
  }
  FVar13 = FCompositeBuffer::ToShared(&local_2e0);
                    /* WARNING: Load size is inaccurate */
  bVar10 = (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)*FVar13.Owner.Owner !=
           local_d28.Owner.Owner;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c38);
  if (bVar10) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_9f8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_9f8);
    if (local_9f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9f8.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FCompositeBuffer::Mid(&local_2e0,&local_118,0,0);
  FVar13 = FCompositeBuffer::ToShared(pFVar12);
                    /* WARNING: Load size is inaccurate */
  bVar10 = (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)*FVar13.Owner.Owner !=
           local_d28.Owner.Owner;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c30);
  FCompositeBuffer::~FCompositeBuffer(&local_118);
  if (bVar10) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_9e8,L"Condition failed");
    (*pcVar4)(pFVar3);
    if (local_9e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9e8.Data.AllocatorInstance.Data);
    }
  }
  uVar14 = FCompositeBuffer::GetSize(&local_2e0);
  if (uVar14 != 0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_9d8,L"Condition failed");
    (*pcVar4)(pFVar3);
    if (local_9d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9d8.Data.AllocatorInstance.Data);
    }
  }
  if (local_2e0.Segments.ArrayNum < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_141ca7305:
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_9c8,L"Condition failed");
    (*pcVar4)(pFVar3);
    if (local_9c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9c8.Data.AllocatorInstance.Data);
    }
  }
  else if (local_2e0.Segments.ArrayNum != 1) goto LAB_141ca7305;
  local_9b8.DataPtr = (FSharedBuffer *)&local_2e0;
  if (local_2e0.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
    local_9b8.DataPtr = (FSharedBuffer *)local_2e0.Segments.AllocatorInstance.SecondaryData;
  }
  if ((local_2e0.Segments.ArrayNum < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_9b8.ArrayNum = local_2e0.Segments.ArrayNum;
  pFVar16 = TArrayView<FSharedBuffer_const_,int>::operator[](&local_9b8,0);
  if ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(pFVar16->Owner).Owner !=
      local_d28.Owner.Owner) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_9a8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_9a8);
    if (local_9a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9a8.Data.AllocatorInstance.Data);
    }
  }
  local_ca8.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  pTVar15 = FCompositeBuffer::ViewOrCopyRange(&local_2e0,&local_478,0,0,&local_ca8);
  FVar13.Owner.Owner = local_d28.Owner.Owner;
  pvVar17 = pvVar31;
  pvVar30 = pvVar31;
  if (local_d28.Owner.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_d28.Owner.Owner + 0x18) >> 0x3c &
        4) == 0) {
      (**(code **)(*(longlong *)local_d28.Owner.Owner + 8))(local_d28.Owner.Owner);
    }
    pvVar30 = *(void **)((longlong)FVar13.Owner.Owner + 0x10);
    if (local_d28.Owner.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_d28.Owner.Owner + 0x18) >> 0x3c
          & 4) == 0) {
        (**(code **)(*(longlong *)local_d28.Owner.Owner + 8))(local_d28.Owner.Owner);
      }
      pvVar17 = *(void **)((longlong)local_d28.Owner.Owner + 8);
    }
  }
  if (((void *)pTVar15->Size != pvVar30) ||
     (((void *)pTVar15->Size != (void *)0x0 && (pTVar15->Data != pvVar17)))) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_998,L"Condition failed");
    (*pcVar4)(pFVar3,&local_998);
    if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_998.Data.AllocatorInstance.Data);
    }
  }
  if (local_ca8.Owner.Owner != (FBufferOwner *)0x0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_988,L"Condition failed");
    (*pcVar4)(pFVar3,&local_988);
    if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_988.Data.AllocatorInstance.Data);
    }
  }
  local_978.Data = (void *)0x0;
  local_978.Size = 0;
  FCompositeBuffer::CopyTo(&local_2e0,&local_978,0);
  local_c28 = &local_d0c;
  local_d0c = 0;
  local_960 = &local_c28;
  local_968 = UE::Core::Private::Function::
              TFunctionRefCaller<`FMemoryCompositeBufferTest::TestBody'::__l42::<lambda_2>,void,TMemoryView<void_const_>_>
              ::Call;
  FCompositeBuffer::IterateRange
            (&local_2e0,0,0,(TFunctionRef<void___cdecl(TMemoryView<void_const_>)> *)&local_968);
  if (local_d0c != 1) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_958,L"Condition failed");
    (*pcVar4)(pFVar3,&local_958,0);
    if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_958.Data.AllocatorInstance.Data);
    }
  }
  FVar9.Owner.Owner = local_ca8.Owner.Owner;
  if (local_ca8.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_ca8.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_ca8.Owner.Owner + 0x10))(local_ca8.Owner.Owner);
      *(void **)((longlong)FVar9.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar9.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar9.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar9.Owner.Owner)(FVar9.Owner.Owner,1);
      }
    }
  }
  FCompositeBuffer::~FCompositeBuffer(&local_2e0);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_d28.Owner);
  pFVar11 = FAutomationTestFramework::Get();
  pFVar3 = pFVar11->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&local_948,L"Empty Concatenation");
  (*pcVar4)(pFVar3,&local_948,0);
  if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_948.Data.AllocatorInstance.Data);
  }
  local_d48 = 0;
  FSharedBuffer::MakeView(&local_cf8,(ulong64)&local_d48);
  FSharedBuffer::MakeView(&local_cc0,(ulong64)local_d47);
  pFVar12 = FCompositeBuffer::FCompositeBuffer<FSharedBuffer_const_&,0>(&local_100,&local_cc0);
  if (local_cf8.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_cf8.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
      LOCK();
      *(atomic<unsigned___int64> *)((longlong)local_cf8.Owner.Owner + 0x18) =
           (atomic<unsigned___int64>)
           ((longlong)*(atomic<unsigned___int64> *)((longlong)local_cf8.Owner.Owner + 0x18) +
           0x40000000);
      UNLOCK();
    }
  }
  local_c78.Owner.Owner = local_cf8.Owner.Owner;
  local_cf0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_cf0.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_cf0.AllocatorInstance,1,&local_cf0.ArrayMax);
  ConstructItems<FSharedBuffer,FSharedBuffer,int>(local_cf0.AllocatorInstance.Data,&local_c78,1);
  local_310.Segments.AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
  local_310.Segments.ArrayNum = 0;
  local_310.Segments.ArrayMax = 1;
  uVar33 = (pFVar12->Segments).ArrayNum + local_cf0.ArrayNum;
  if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar33);
  }
  if (1 < (int)uVar33) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
              (8,8,uVar33,(ForElementType<FSharedBuffer> *)&local_310,0,&local_310.Segments.ArrayMax
              );
  }
  FCompositeBuffer::AppendBuffers<TArray<FSharedBuffer,TSizedDefaultAllocator<32>_>,0>
            (&local_310,&local_cf0);
  FCompositeBuffer::AppendBuffers(&local_310,pFVar12);
  lVar22 = (longlong)local_310.Segments.ArrayNum;
  if (local_310.Segments.ArrayNum != 0) {
    FVar24 = (ForElementType<FSharedBuffer>)&local_310;
    if (local_310.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
      FVar24 = local_310.Segments.AllocatorInstance.SecondaryData;
    }
    bVar10 = *(longlong *)FVar24 != 0;
    lVar26 = 0;
    pvVar30 = pvVar31;
    do {
      uVar29 = (uint)pvVar31;
      uVar33 = uVar29;
      do {
        lVar26 = lVar26 + 1;
        uVar33 = uVar33 + 1;
        pvVar31 = (void *)(ulonglong)uVar33;
        if (lVar22 <= lVar26) break;
      } while (bVar10 == (*(longlong *)((longlong)FVar24 + lVar26 * 8) != 0));
      iVar34 = uVar33 - uVar29;
      if (bVar10 == false) {
        DestructItems<FSharedBuffer,int>
                  ((FSharedBuffer *)((longlong)FVar24 + (longlong)(int)uVar29 * 8),iVar34);
      }
      else {
        uVar33 = (uint)pvVar30;
        if (uVar33 != uVar29) {
          memmove((longlong *)((longlong)FVar24 + (longlong)(int)uVar33 * 8),
                  (longlong *)((longlong)FVar24 + (longlong)(int)uVar29 * 8),(longlong)iVar34 << 3);
        }
        pvVar30 = (void *)(ulonglong)(uVar33 + iVar34);
      }
      bVar10 = (bool)(bVar10 ^ 1);
    } while (lVar26 < lVar22);
    local_310.Segments.ArrayNum = (int)pvVar30;
  }
  puVar32 = (undefined1 *)0x0;
  DestructItems<FSharedBuffer,int>
            ((FSharedBuffer *)local_cf0.AllocatorInstance.Data,local_cf0.ArrayNum);
  if (local_cf0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cf0.AllocatorInstance.Data);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c78.Owner);
  FCompositeBuffer::~FCompositeBuffer(&local_100);
  pFVar12 = FCompositeBuffer::Mid(&local_310,&local_e8,0,0);
  FVar13 = FCompositeBuffer::ToShared(pFVar12);
                    /* WARNING: Load size is inaccurate */
  bVar10 = (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)*FVar13.Owner.Owner !=
           local_cf8.Owner.Owner;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c20);
  FCompositeBuffer::~FCompositeBuffer(&local_e8);
  if (bVar10) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_938,L"Condition failed");
    (*pcVar4)(pFVar3);
    if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_938.Data.AllocatorInstance.Data);
    }
  }
  uVar14 = FCompositeBuffer::GetSize(&local_310);
  if (uVar14 != 0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_928,L"Condition failed");
    (*pcVar4)(pFVar3);
    if (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_928.Data.AllocatorInstance.Data);
    }
  }
  if (local_310.Segments.ArrayNum < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_141ca79b4:
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_918,L"Condition failed");
    (*pcVar4)(pFVar3);
    if (local_918.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_918.Data.AllocatorInstance.Data);
    }
  }
  else if (local_310.Segments.ArrayNum != 2) goto LAB_141ca79b4;
  iVar34 = local_310.Segments.ArrayNum;
  local_908.DataPtr = (FSharedBuffer *)&local_310;
  if (local_310.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
    local_908.DataPtr = (FSharedBuffer *)local_310.Segments.AllocatorInstance.SecondaryData;
  }
  if ((local_310.Segments.ArrayNum < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_908.ArrayNum = iVar34;
  pFVar16 = TArrayView<FSharedBuffer_const_,int>::operator[](&local_908,0);
  if ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(pFVar16->Owner).Owner !=
      local_cf8.Owner.Owner) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_8f8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_8f8);
    if (local_8f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8f8.Data.AllocatorInstance.Data);
    }
  }
  iVar34 = local_310.Segments.ArrayNum;
  local_8e8.DataPtr = (FSharedBuffer *)&local_310;
  if (local_310.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
    local_8e8.DataPtr = (FSharedBuffer *)local_310.Segments.AllocatorInstance.SecondaryData;
  }
  if ((local_310.Segments.ArrayNum < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_8e8.ArrayNum = iVar34;
  pFVar16 = TArrayView<FSharedBuffer_const_,int>::operator[](&local_8e8,1);
  if ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(pFVar16->Owner).Owner !=
      local_cc0.Owner.Owner) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_8d8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_8d8);
    if (local_8d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
    }
  }
  local_ca0.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  pTVar15 = FCompositeBuffer::ViewOrCopyRange(&local_310,&local_4d8,0,0,&local_ca0);
  pTVar18 = FSharedBuffer::GetView(&local_cf8,&local_458);
  if ((pTVar15->Size != pTVar18->Size) || ((pTVar15->Size != 0 && (pTVar15->Data != pTVar18->Data)))
     ) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_8c8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_8c8);
    if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
    }
  }
  if (local_ca0.Owner.Owner != (FBufferOwner *)0x0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_8b8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_8b8);
    if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
    }
  }
  local_8a8.Data = (void *)0x0;
  local_8a8.Size = 0;
  FCompositeBuffer::CopyTo(&local_310,&local_8a8,0);
  local_c18 = &local_d08;
  local_d08 = 0;
  local_890 = &local_c18;
  local_898 = UE::Core::Private::Function::
              TFunctionRefCaller<`FMemoryCompositeBufferTest::TestBody'::__l79::<lambda_3>,void,TMemoryView<void_const_>_>
              ::Call;
  FCompositeBuffer::IterateRange
            (&local_310,0,0,(TFunctionRef<void___cdecl(TMemoryView<void_const_>)> *)&local_898);
  if (local_d08 != 1) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_888,L"Condition failed");
    (*pcVar4)(pFVar3,&local_888);
    if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_888.Data.AllocatorInstance.Data);
    }
  }
  FVar9.Owner.Owner = local_ca0.Owner.Owner;
  if (local_ca0.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_ca0.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_ca0.Owner.Owner + 0x10))(local_ca0.Owner.Owner);
      *(void **)((longlong)FVar9.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar9.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar9.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar9.Owner.Owner)(FVar9.Owner.Owner,1);
      }
    }
  }
  FCompositeBuffer::~FCompositeBuffer(&local_310);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_cc0.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_cf8.Owner);
  pFVar11 = FAutomationTestFramework::Get();
  pFVar3 = pFVar11->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&local_878,L"Flat");
  (*pcVar4)(pFVar3,&local_878,0,0);
  if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_878.Data.AllocatorInstance.Data);
  }
  local_868 = &local_48;
  local_48 = 0x4030201;
  local_44 = 0x8070605;
  local_860 = 8;
  FSharedBuffer::Clone(&local_d40);
  FCompositeBuffer::FCompositeBuffer<FSharedBuffer_const_&,0>
            (&local_2f8,(FSharedBuffer *)&local_d40);
  if (local_2f8.Segments.ArrayNum == 0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_858,L"Condition expected to return false but returned true");
    (*pcVar4)(pFVar3,&local_858);
    if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_858.Data.AllocatorInstance.Data);
    }
  }
  bVar10 = FCompositeBuffer::IsOwned(&local_2f8);
  if (!bVar10) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_848,L"Condition failed");
    (*pcVar4)(pFVar3,&local_848);
    if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_848.Data.AllocatorInstance.Data);
    }
  }
  FVar13 = FCompositeBuffer::ToShared(&local_2f8);
  bVar10 = *(longlong **)FVar13.Owner.Owner != local_d40.Data;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c10);
  if (bVar10) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_838,L"Condition failed");
    (*pcVar4)(pFVar3,&local_838);
    if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_838.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FCompositeBuffer::MakeOwned(&local_2f8,&local_d0);
  FVar13 = FCompositeBuffer::ToShared(pFVar12);
  bVar10 = *(longlong **)FVar13.Owner.Owner != local_d40.Data;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c08);
  FCompositeBuffer::~FCompositeBuffer(&local_d0);
  if (bVar10) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_828,L"Condition failed");
    (*pcVar4)(pFVar3,&local_828);
    if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_828.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FCompositeBuffer::Mid(&local_2f8,&local_b8,0,0xffffffffffffffff);
  FVar13 = FCompositeBuffer::ToShared(pFVar12);
  bVar10 = *(longlong **)FVar13.Owner.Owner != local_d40.Data;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c00);
  FCompositeBuffer::~FCompositeBuffer(&local_b8);
  if (bVar10) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_818,L"Condition failed");
    (*pcVar4)(pFVar3,&local_818,0);
    if (local_818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_818.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FCompositeBuffer::Mid(&local_2f8,&local_208,4,0xffffffffffffffff);
  FVar13 = FCompositeBuffer::ToShared(pFVar12);
  pTVar15 = FSharedBuffer::GetView((FSharedBuffer *)FVar13.Owner.Owner,&local_448);
  pTVar18 = FSharedBuffer::GetView((FSharedBuffer *)&local_d40,&local_438);
  uVar5 = pTVar18->Size;
  local_428 = pTVar18->Data;
  uStack_420 = pTVar18->Size;
  uVar23 = 4;
  if (uVar5 < 4) {
    uVar23 = uVar5;
  }
  uVar14 = 0xffffffffffffffff;
  if (uVar5 - uVar23 != 0xffffffffffffffff) {
    uVar14 = uVar5 - uVar23;
  }
  if ((pTVar15->Size == uVar14) &&
     ((pTVar15->Size == 0 || (pTVar15->Data == (void *)((longlong)local_428 + uVar23))))) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c70);
    FCompositeBuffer::~FCompositeBuffer(&local_208);
  }
  else {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c70);
    FCompositeBuffer::~FCompositeBuffer(&local_208);
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_808,L"Condition failed");
    (*pcVar4)(pFVar3,&local_808,0);
    if (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_808.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FCompositeBuffer::Mid(&local_2f8,&local_1f0,8,0xffffffffffffffff);
  FVar13 = FCompositeBuffer::ToShared(pFVar12);
  pTVar15 = FSharedBuffer::GetView((FSharedBuffer *)FVar13.Owner.Owner,&local_418);
  pTVar18 = FSharedBuffer::GetView((FSharedBuffer *)&local_d40,&local_408);
  uVar5 = pTVar18->Size;
  local_468 = pTVar18->Data;
  uStack_460 = pTVar18->Size;
  uVar23 = 8;
  if (uVar5 < 8) {
    uVar23 = uVar5;
  }
  uVar14 = 0xffffffffffffffff;
  if (uVar5 - uVar23 != 0xffffffffffffffff) {
    uVar14 = uVar5 - uVar23;
  }
  if ((pTVar15->Size == uVar14) &&
     ((pTVar15->Size == 0 || (pTVar15->Data == (void *)((longlong)local_468 + uVar23))))) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c68);
    FCompositeBuffer::~FCompositeBuffer(&local_1f0);
  }
  else {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c68);
    FCompositeBuffer::~FCompositeBuffer(&local_1f0);
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_7f8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_7f8,0);
    if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FCompositeBuffer::Mid(&local_2f8,&local_220,4,2);
  FVar13 = FCompositeBuffer::ToShared(pFVar12);
  pTVar15 = FSharedBuffer::GetView((FSharedBuffer *)FVar13.Owner.Owner,&local_3e8);
  pTVar18 = FSharedBuffer::GetView((FSharedBuffer *)&local_d40,&local_3d8);
  uVar5 = pTVar18->Size;
  local_3c8 = pTVar18->Data;
  uStack_3c0 = pTVar18->Size;
  uVar23 = 4;
  if (uVar5 < 4) {
    uVar23 = uVar5;
  }
  uVar14 = 2;
  if (uVar5 - uVar23 < 2) {
    uVar14 = uVar5 - uVar23;
  }
  if ((pTVar15->Size == uVar14) &&
     ((pTVar15->Size == 0 || (pTVar15->Data == (void *)((longlong)local_3c8 + uVar23))))) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c60);
    FCompositeBuffer::~FCompositeBuffer(&local_220);
  }
  else {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c60);
    FCompositeBuffer::~FCompositeBuffer(&local_220);
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_7e8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_7e8,0);
    if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FCompositeBuffer::Mid(&local_2f8,&local_a0,8,0xffffffffffffffff);
  FVar13 = FCompositeBuffer::ToShared(pFVar12);
  pTVar15 = FSharedBuffer::GetView((FSharedBuffer *)FVar13.Owner.Owner,&local_3b8);
  pvVar31 = pTVar15->Data;
  pTVar15 = FSharedBuffer::GetView((FSharedBuffer *)&local_d40,&local_3a8);
  local_280.Segments.AllocatorInstance.InlineData = (uchar  [8])pTVar15->Data;
  local_280.Segments.AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)pTVar15->Size;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_bf8);
  FCompositeBuffer::~FCompositeBuffer(&local_a0);
  FVar24 = (ForElementType<FSharedBuffer>)0x8;
  if ((ulonglong)local_280.Segments.AllocatorInstance.SecondaryData < 8) {
    FVar24 = local_280.Segments.AllocatorInstance.SecondaryData;
  }
  if (pvVar31 !=
      (void *)((longlong)FVar24 + (longlong)local_280.Segments.AllocatorInstance.InlineData)) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_7d8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_7d8,0);
    if (local_7d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7d8.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FCompositeBuffer::Mid(&local_2f8,&local_280,4,2);
  FVar13 = FCompositeBuffer::ToShared(pFVar12);
  plVar6 = *(longlong **)FVar13.Owner.Owner;
  if ((plVar6 != (longlong *)0x0) && (((ulonglong)plVar6[3] >> 0x3c & 4) == 0)) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = *(longlong **)FVar13.Owner.Owner;
  puVar28 = puVar32;
  if (plVar6 != (longlong *)0x0) {
    if (((ulonglong)plVar6[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    puVar28 = (undefined1 *)plVar6[1];
  }
  pvVar31 = local_d40.Data;
  puVar25 = puVar32;
  if (local_d40.Data != (longlong *)0x0) {
    if ((*(ulonglong *)((longlong)local_d40.Data + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_d40.Data + 8))(local_d40.Data);
    }
    puVar25 = *(undefined1 **)((longlong)pvVar31 + 0x10);
  }
  pvVar31 = local_d40.Data;
  puVar27 = puVar32;
  if (local_d40.Data != (longlong *)0x0) {
    if ((*(ulonglong *)((longlong)local_d40.Data + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_d40.Data + 8))(local_d40.Data);
    }
    puVar27 = *(undefined1 **)((longlong)pvVar31 + 8);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_bf0);
  FCompositeBuffer::~FCompositeBuffer(&local_280);
  puVar19 = &DAT_00000004;
  if (puVar25 < &DAT_00000004) {
    puVar19 = puVar25;
  }
  if (puVar28 != puVar19 + (longlong)puVar27) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_7c8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_7c8,0);
    if (local_7c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7c8.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FCompositeBuffer::Mid(&local_2f8,&local_88,8,0);
  FVar13 = FCompositeBuffer::ToShared(pFVar12);
  plVar6 = *(longlong **)FVar13.Owner.Owner;
  if ((plVar6 != (longlong *)0x0) && (((ulonglong)plVar6[3] >> 0x3c & 4) == 0)) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = *(longlong **)FVar13.Owner.Owner;
  puVar28 = puVar32;
  if (plVar6 != (longlong *)0x0) {
    if (((ulonglong)plVar6[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    puVar28 = (undefined1 *)plVar6[1];
  }
  pvVar31 = local_d40.Data;
  puVar25 = puVar32;
  if (local_d40.Data != (longlong *)0x0) {
    if ((*(ulonglong *)((longlong)local_d40.Data + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_d40.Data + 8))(local_d40.Data);
    }
    puVar25 = *(undefined1 **)((longlong)pvVar31 + 0x10);
  }
  pvVar31 = local_d40.Data;
  puVar27 = puVar32;
  if (local_d40.Data != (longlong *)0x0) {
    if ((*(ulonglong *)((longlong)local_d40.Data + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_d40.Data + 8))(local_d40.Data);
    }
    puVar27 = *(undefined1 **)((longlong)pvVar31 + 8);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_be8);
  FCompositeBuffer::~FCompositeBuffer(&local_88);
  puVar19 = &DAT_00000008;
  if (puVar25 < &DAT_00000008) {
    puVar19 = puVar25;
  }
  if (puVar28 != puVar19 + (longlong)puVar27) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_7b8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_7b8);
    if (local_7b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7b8.Data.AllocatorInstance.Data);
    }
  }
  uVar14 = FCompositeBuffer::GetSize(&local_2f8);
  if (uVar14 != 8) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_7a8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_7a8);
    if (local_7a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7a8.Data.AllocatorInstance.Data);
    }
  }
  if (local_2f8.Segments.ArrayNum < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_141ca8716:
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_798,L"Condition failed");
    (*pcVar4)(pFVar3,&local_798);
    if (local_798.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_798.Data.AllocatorInstance.Data);
    }
  }
  else if (local_2f8.Segments.ArrayNum != 1) goto LAB_141ca8716;
  FVar24 = (ForElementType<FSharedBuffer>)&local_2f8;
  if (local_2f8.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
    FVar24 = local_2f8.Segments.AllocatorInstance.SecondaryData;
  }
  if (local_2f8.Segments.ArrayNum < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_141ca87a6:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (local_2f8.Segments.ArrayNum < 1) goto LAB_141ca87a6;
  if (*(longlong **)FVar24 != local_d40.Data) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_788,L"Condition failed");
    (*pcVar4)(pFVar3,&local_788);
    if (local_788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_788.Data.AllocatorInstance.Data);
    }
  }
  local_cb8.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  pTVar15 = FCompositeBuffer::ViewOrCopyRange(&local_2f8,&local_398,0,8,&local_cb8);
  pvVar31 = local_d40.Data;
  puVar25 = puVar32;
  puVar28 = puVar32;
  if (local_d40.Data != (longlong *)0x0) {
    if ((*(ulonglong *)((longlong)local_d40.Data + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_d40.Data + 8))(local_d40.Data);
    }
    puVar28 = *(undefined1 **)((longlong)pvVar31 + 0x10);
    if (local_d40.Data != (longlong *)0x0) {
      if ((*(ulonglong *)((longlong)local_d40.Data + 0x18) >> 0x3c & 4) == 0) {
        (**(code **)(*(longlong *)local_d40.Data + 8))(local_d40.Data);
      }
      puVar25 = *(undefined1 **)((longlong)local_d40.Data + 8);
    }
  }
  if (((undefined1 *)pTVar15->Size != puVar28) ||
     (((undefined1 *)pTVar15->Size != (undefined1 *)0x0 && (pTVar15->Data != puVar25)))) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_778,L"Condition failed");
    (*pcVar4)(pFVar3,&local_778,0);
    if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_778.Data.AllocatorInstance.Data);
    }
  }
  if (local_cb8.Owner.Owner != (FBufferOwner *)0x0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_768,L"Condition failed");
    (*pcVar4)(pFVar3,&local_768,0);
    if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_768.Data.AllocatorInstance.Data);
    }
  }
  local_758.Data = &local_40;
  local_758.Size = 5;
  FCompositeBuffer::CopyTo(&local_2f8,&local_758,3);
  if ((local_40 != CONCAT31((undefined3)local_44,local_48._3_1_)) || (local_3c != local_44._3_1_)) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_748,L"Condition failed");
    (*pcVar4)(pFVar3,&local_748,0);
    if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_748.Data.AllocatorInstance.Data);
    }
  }
  local_be0 = &local_d04;
  local_d04 = 0;
  local_730 = &local_be0;
  local_738 = UE::Core::Private::Function::
              TFunctionRefCaller<`FMemoryCompositeBufferTest::TestBody'::__l104::<lambda_4>,void,TMemoryView<void_const_>_>
              ::Call;
  FCompositeBuffer::IterateRange
            (&local_2f8,0,8,(TFunctionRef<void___cdecl(TMemoryView<void_const_>)> *)&local_738);
  if (local_d04 != 1) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_728,L"Condition failed");
    (*pcVar4)(pFVar3,&local_728,0);
    if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_728.Data.AllocatorInstance.Data);
    }
  }
  FVar9.Owner.Owner = local_cb8.Owner.Owner;
  if (local_cb8.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_cb8.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_cb8.Owner.Owner + 0x10))(local_cb8.Owner.Owner);
      *(void **)((longlong)FVar9.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar9.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar9.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar9.Owner.Owner)(FVar9.Owner.Owner,1);
      }
    }
  }
  FCompositeBuffer::~FCompositeBuffer(&local_2f8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_d40);
  pFVar11 = FAutomationTestFramework::Get();
  pFVar3 = pFVar11->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&local_718,L"Composite");
  (*pcVar4)(pFVar3,&local_718,0,0);
  if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_718.Data.AllocatorInstance.Data);
  }
  local_708 = (undefined2 *)&local_58;
  local_58._0_2_ = 0x201;
  local_58._2_2_ = 0x403;
  local_58._4_2_ = 0x605;
  local_58._6_2_ = 0x807;
  local_700 = 4;
  FSharedBuffer::MakeView((TMemoryView<void_const_> *)(local_d20 + 8));
  local_6f8 = (undefined2 *)((longlong)&local_58 + 4);
  local_6f0 = 4;
  FSharedBuffer::MakeView((TMemoryView<void_const_> *)local_d20);
  local_328.Segments.AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
  local_328.Segments.ArrayNum = 0;
  local_328.Segments.ArrayMax = 1;
  UE::Core::Private::
  ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
            (8,8,2,(ForElementType<FSharedBuffer> *)&local_328,0,&local_328.Segments.ArrayMax);
  FCompositeBuffer::AppendBuffers(&local_328,(FSharedBuffer *)(local_d20 + 8));
  FCompositeBuffer::AppendBuffers(&local_328,(FSharedBuffer *)local_d20);
  lVar22 = (longlong)local_328.Segments.ArrayNum;
  if (local_328.Segments.ArrayNum == 0) {
LAB_141ca8ca5:
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_6e8,L"Condition expected to return false but returned true");
    (*pcVar4)(pFVar3,&local_6e8,0);
    if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
    }
  }
  else {
    FVar24 = (ForElementType<FSharedBuffer>)&local_328;
    if (local_328.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
      FVar24 = local_328.Segments.AllocatorInstance.SecondaryData;
    }
    bVar10 = *(longlong *)FVar24 != 0;
    lVar26 = 0;
    puVar28 = puVar32;
    do {
      uVar29 = (uint)puVar32;
      uVar33 = uVar29;
      do {
        lVar26 = lVar26 + 1;
        uVar33 = uVar33 + 1;
        puVar32 = (undefined1 *)(ulonglong)uVar33;
        if (lVar22 <= lVar26) break;
      } while (bVar10 == (*(longlong *)((longlong)FVar24 + lVar26 * 8) != 0));
      iVar34 = uVar33 - uVar29;
      if (bVar10 == false) {
        DestructItems<FSharedBuffer,int>
                  ((FSharedBuffer *)((longlong)FVar24 + (longlong)(int)uVar29 * 8),iVar34);
      }
      else {
        uVar33 = (uint)puVar28;
        if (uVar33 != uVar29) {
          memmove((longlong *)((longlong)FVar24 + (longlong)(int)uVar33 * 8),
                  (longlong *)((longlong)FVar24 + (longlong)(int)uVar29 * 8),(longlong)iVar34 << 3);
        }
        puVar28 = (undefined1 *)(ulonglong)(uVar33 + iVar34);
      }
      bVar10 = (bool)(bVar10 ^ 1);
    } while (lVar26 < lVar22);
    local_328.Segments.ArrayNum = (int)puVar28;
    if (local_328.Segments.ArrayNum == 0) goto LAB_141ca8ca5;
  }
  bVar10 = FCompositeBuffer::IsOwned(&local_328);
  if (bVar10) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_6d8,L"Condition expected to return false but returned true");
    (*pcVar4)(pFVar3,&local_6d8,0);
    if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
    }
  }
  FVar13 = FCompositeBuffer::ToShared(&local_328);
  pTVar15 = FSharedBuffer::GetView((FSharedBuffer *)FVar13.Owner.Owner,&local_388);
  if ((pTVar15->Size == 8) &&
     ((pTVar15->Data == &local_58 ||
      (*(longlong *)pTVar15->Data ==
       CONCAT26(local_58._6_2_,
                CONCAT24(local_58._4_2_,CONCAT22(local_58._2_2_,(undefined2)local_58))))))) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c98);
  }
  else {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c98);
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_6c8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_6c8,0);
    if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FCompositeBuffer::Mid(&local_328,&local_1d8,2,4);
  FVar13 = FCompositeBuffer::ToShared(pFVar12);
  pTVar15 = FSharedBuffer::GetView((FSharedBuffer *)FVar13.Owner.Owner,&local_378);
  if ((pTVar15->Size == 4) &&
     ((pTVar15->Data == (undefined2 *)((longlong)&local_58 + 2U) ||
      (iVar34 = memcmp(pTVar15->Data,(undefined2 *)((longlong)&local_58 + 2),4), iVar34 == 0)))) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c90);
    FCompositeBuffer::~FCompositeBuffer(&local_1d8);
  }
  else {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c90);
    FCompositeBuffer::~FCompositeBuffer(&local_1d8);
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_6b8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_6b8);
    if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FCompositeBuffer::Mid(&local_328,&local_70,0,4);
  FVar13 = FCompositeBuffer::ToShared(pFVar12);
  bVar10 = *(FBufferOwner **)FVar13.Owner.Owner != (FBufferOwner *)local_d20._8_8_;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_bd8);
  FCompositeBuffer::~FCompositeBuffer(&local_70);
  if (bVar10) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_6a8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_6a8,0);
    if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FCompositeBuffer::Mid(&local_328,&local_1c0,4,4);
  FVar13 = FCompositeBuffer::ToShared(pFVar12);
                    /* WARNING: Load size is inaccurate */
  bVar10 = *FVar13.Owner.Owner != (FBufferOwner *)local_d20._0_8_;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_bd0);
  FCompositeBuffer::~FCompositeBuffer(&local_1c0);
  if (bVar10) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_698,L"Condition failed");
    (*pcVar4)(pFVar3,&local_698,0);
    if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_698.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FCompositeBuffer::Mid(&local_328,&local_1a8,4,0);
  FVar13 = FCompositeBuffer::ToShared(pFVar12);
  pTVar15 = FSharedBuffer::GetView((FSharedBuffer *)FVar13.Owner.Owner,&local_368);
  puVar7 = pTVar15->Data;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_bc8);
  FCompositeBuffer::~FCompositeBuffer(&local_1a8);
  if (puVar7 != (undefined2 *)((longlong)&local_58 + 4U)) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_688,L"Condition failed");
    (*pcVar4)(pFVar3,&local_688,0);
    if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_688.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FCompositeBuffer::Mid(&local_328,&local_190,8,0);
  FVar13 = FCompositeBuffer::ToShared(pFVar12);
  pTVar15 = FSharedBuffer::GetView((FSharedBuffer *)FVar13.Owner.Owner,&local_358);
  puVar8 = pTVar15->Data;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_bc0);
  FCompositeBuffer::~FCompositeBuffer(&local_190);
  if (puVar8 != &local_50) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_678,L"Condition failed");
    (*pcVar4)(pFVar3);
    if (local_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_678.Data.AllocatorInstance.Data);
    }
  }
  uVar14 = FCompositeBuffer::GetSize(&local_328);
  if (uVar14 != 8) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_668,L"Condition failed");
    (*pcVar4)(pFVar3);
    if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_668.Data.AllocatorInstance.Data);
    }
  }
  if (local_328.Segments.ArrayNum < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_141ca91cc:
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_658,L"Condition failed");
    (*pcVar4)(pFVar3);
    if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_658.Data.AllocatorInstance.Data);
    }
  }
  else if (local_328.Segments.ArrayNum != 2) goto LAB_141ca91cc;
  iVar34 = local_328.Segments.ArrayNum;
  local_648.DataPtr = (FSharedBuffer *)&local_328;
  if (local_328.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
    local_648.DataPtr = (FSharedBuffer *)local_328.Segments.AllocatorInstance.SecondaryData;
  }
  if ((local_328.Segments.ArrayNum < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_648.ArrayNum = iVar34;
  pFVar16 = TArrayView<FSharedBuffer_const_,int>::operator[](&local_648,0);
  if ((pFVar16->Owner).Owner != (FBufferOwner *)local_d20._8_8_) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_638,L"Condition failed");
    (*pcVar4)(pFVar3,&local_638);
    if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_638.Data.AllocatorInstance.Data);
    }
  }
  iVar34 = local_328.Segments.ArrayNum;
  local_628.DataPtr = (FSharedBuffer *)&local_328;
  if (local_328.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
    local_628.DataPtr = (FSharedBuffer *)local_328.Segments.AllocatorInstance.SecondaryData;
  }
  if ((local_328.Segments.ArrayNum < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_628.ArrayNum = iVar34;
  pFVar16 = TArrayView<FSharedBuffer_const_,int>::operator[](&local_628,1);
  if ((pFVar16->Owner).Owner != (FBufferOwner *)local_d20._0_8_) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_618,L"Condition failed");
    (*pcVar4)(pFVar3,&local_618);
    if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_618.Data.AllocatorInstance.Data);
    }
  }
  local_d30.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  pTVar15 = FCompositeBuffer::ViewOrCopyRange(&local_328,&local_348,0,4,&local_d30);
  pTVar18 = FSharedBuffer::GetView((FSharedBuffer *)(local_d20 + 8),&local_338);
  if ((pTVar15->Size != pTVar18->Size) || ((pTVar15->Size != 0 && (pTVar15->Data != pTVar18->Data)))
     ) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_608,L"Condition failed");
    (*pcVar4)(pFVar3,&local_608,0);
    if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_608.Data.AllocatorInstance.Data);
    }
  }
  if (local_d30.Owner.Owner != (FBufferOwner *)0x0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_5f8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_5f8,0);
    if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
    }
  }
  pTVar15 = FCompositeBuffer::ViewOrCopyRange(&local_328,&local_4c8,4,4,&local_d30);
  pTVar18 = FSharedBuffer::GetView((FSharedBuffer *)local_d20,&local_4b8);
  if ((pTVar15->Size != pTVar18->Size) || ((pTVar15->Size != 0 && (pTVar15->Data != pTVar18->Data)))
     ) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_5e8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_5e8,0);
    if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
    }
  }
  if (local_d30.Owner.Owner != (FBufferOwner *)0x0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_5d8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_5d8,0);
    if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
    }
  }
  pTVar15 = FCompositeBuffer::ViewOrCopyRange(&local_328,&local_4a8,3,2,&local_d30);
  if ((pTVar15->Size != 2) ||
     ((pTVar15->Data != (void *)((longlong)&local_58 + 3U) &&
      (iVar34 = memcmp(pTVar15->Data,(void *)((longlong)&local_58 + 3),2), iVar34 != 0)))) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_5c8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_5c8,0);
    if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
    }
  }
  FVar9.Owner.Owner = local_d30.Owner.Owner;
  if (local_d30.Owner.Owner == (FBufferOwner *)0x0) {
LAB_141ca9601:
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_5b8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_5b8,0);
    if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_d30.Owner.Owner + 0x18) >> 0x3c &
        4) == 0) {
      (**(code **)(*(longlong *)local_d30.Owner.Owner + 8))(local_d30.Owner.Owner);
    }
    if (*(ulong64 *)((longlong)FVar9.Owner.Owner + 0x10) != 2) goto LAB_141ca9601;
  }
  pTVar15 = FCompositeBuffer::ViewOrCopyRange(&local_328,&local_498,1,6,&local_d30);
  if ((pTVar15->Size != 6) ||
     ((pTVar15->Data != (void *)((longlong)&local_58 + 1) &&
      (iVar34 = memcmp(pTVar15->Data,(void *)((longlong)&local_58 + 1),6), iVar34 != 0)))) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_5a8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_5a8,0);
    if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
    }
  }
  FVar9.Owner.Owner = local_d30.Owner.Owner;
  if (local_d30.Owner.Owner == (FBufferOwner *)0x0) {
LAB_141ca9706:
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_598,L"Condition failed");
    (*pcVar4)(pFVar3,&local_598,0);
    if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_d30.Owner.Owner + 0x18) >> 0x3c &
        4) == 0) {
      (**(code **)(*(longlong *)local_d30.Owner.Owner + 8))(local_d30.Owner.Owner);
    }
    if (*(ulong64 *)((longlong)FVar9.Owner.Owner + 0x10) != 6) goto LAB_141ca9706;
  }
  pTVar15 = FCompositeBuffer::ViewOrCopyRange(&local_328,&local_3f8,2,4,&local_d30);
  if ((pTVar15->Size != 4) ||
     ((pTVar15->Data != (undefined2 *)((longlong)&local_58 + 2U) &&
      (iVar34 = memcmp(pTVar15->Data,(undefined2 *)((longlong)&local_58 + 2),4), iVar34 != 0)))) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_588,L"Condition failed");
    (*pcVar4)(pFVar3,&local_588,0);
    if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.Data.AllocatorInstance.Data);
    }
  }
  FVar9.Owner.Owner = local_d30.Owner.Owner;
  if (local_d30.Owner.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_d30.Owner.Owner + 0x18) >> 0x3c &
        4) == 0) {
      (**(code **)(*(longlong *)local_d30.Owner.Owner + 8))(local_d30.Owner.Owner);
    }
    if (*(ulong64 *)((longlong)FVar9.Owner.Owner + 0x10) == 6) goto LAB_141ca9851;
  }
  pFVar11 = FAutomationTestFramework::Get();
  pFVar3 = pFVar11->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
  ::FString::FString(&local_578,L"Condition failed");
  (*pcVar4)(pFVar3,&local_578,0);
  if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_578.Data.AllocatorInstance.Data);
  }
LAB_141ca9851:
  local_568.Data = local_cc8;
  local_568.Size = 4;
  FCompositeBuffer::CopyTo(&local_328,&local_568,2);
  if (local_cc8[0] != CONCAT22(local_58._4_2_,local_58._2_2_)) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_558,L"Condition failed");
    (*pcVar4)(pFVar3,&local_558,0);
    if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.Data.AllocatorInstance.Data);
    }
  }
  local_bb8 = local_d00;
  local_d00[0] = 0;
  local_540 = &local_bb8;
  local_548 = UE::Core::Private::Function::
              TFunctionRefCaller<`FMemoryCompositeBufferTest::TestBody'::__l159::<lambda_5>,void,TMemoryView<void_const_>_>
              ::Call;
  FCompositeBuffer::IterateRange
            (&local_328,0,8,(TFunctionRef<void___cdecl(TMemoryView<void_const_>)> *)&local_548);
  if (local_d00[0] != 2) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_538,L"Condition failed");
    (*pcVar4)(pFVar3,&local_538,0);
    if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.Data.AllocatorInstance.Data);
    }
  }
  local_ce0 = &local_328;
  local_528.Size = 4;
  local_528.Data = &local_58;
  `FMemoryCompositeBufferTest::TestBody'::__l159::<lambda_6>::operator()
            (&local_ce0,0,4,&local_528,(FSharedBuffer *)(local_d20 + 8));
  local_518.Data = (void *)((longlong)&local_58 + 4);
  local_518.Size = 0;
  `FMemoryCompositeBufferTest::TestBody'::__l159::<lambda_6>::operator()
            (&local_ce0,4,0,&local_518,(FSharedBuffer *)(local_d20 + 8));
  local_508.Data = (void *)((longlong)&local_58 + 4);
  local_508.Size = 4;
  `FMemoryCompositeBufferTest::TestBody'::__l159::<lambda_6>::operator()
            (&local_ce0,4,4,&local_508,(FSharedBuffer *)local_d20);
  local_4f8.Data = &local_50;
  local_4f8.Size = 0;
  `FMemoryCompositeBufferTest::TestBody'::__l159::<lambda_6>::operator()
            (&local_ce0,8,0,&local_4f8,(FSharedBuffer *)local_d20);
  FVar9.Owner.Owner = local_d30.Owner.Owner;
  if (local_d30.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_d30.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_d30.Owner.Owner + 0x10))(local_d30.Owner.Owner);
      *(void **)((longlong)FVar9.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar9.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar9.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar9.Owner.Owner)(FVar9.Owner.Owner,1);
      }
    }
  }
  FCompositeBuffer::~FCompositeBuffer(&local_328);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)local_d20);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_d20 + 8));
  pFVar11 = FAutomationTestFramework::Get();
  pFVar3 = pFVar11->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&local_4e8,L"EqualBytes");
  (*pcVar4)(pFVar3,&local_4e8,0,0);
  if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
  }
  local_50 = 0x4030201;
  local_4c = 0x8070605;
  FVar13 = FSharedBuffer::MakeView(&local_ba8,(ulong64)&local_4c);
  FVar20 = FSharedBuffer::MakeView(&local_bb0,(ulong64)&local_50);
  FCompositeBuffer::FCompositeBuffer<FSharedBuffer,FSharedBuffer,0>
            (&local_2b0,(FSharedBuffer *)FVar20.Owner.Owner,(FSharedBuffer *)FVar13.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_bb0);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_ba8);
  FVar13 = FSharedBuffer::MakeView(&local_c58,(longlong)&local_4c + 2);
  FVar20 = FSharedBuffer::MakeView(&local_b98,(longlong)&local_50 + 2);
  FVar21 = FSharedBuffer::MakeView(&local_ba0,(ulong64)&local_50);
  FCompositeBuffer::FCompositeBuffer<FSharedBuffer,FSharedBuffer,FSharedBuffer,0>
            (&local_238,(FSharedBuffer *)FVar21.Owner.Owner,(FSharedBuffer *)FVar20.Owner.Owner,
             (FSharedBuffer *)FVar13.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_ba0);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_b98);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c58);
  FVar13 = FSharedBuffer::MakeView(&local_c50,(ulong64)&local_50);
  FCompositeBuffer::FCompositeBuffer<FSharedBuffer,0>
            (&local_250,(FSharedBuffer *)FVar13.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c50);
  bVar10 = FCompositeBuffer::EqualBytes(&local_2b0,&local_238);
  if (!bVar10) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_b90,L"Condition failed");
    (*pcVar4)(pFVar3,&local_b90,0);
    if (local_b90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b90.Data.AllocatorInstance.Data);
    }
  }
  bVar10 = FCompositeBuffer::EqualBytes(&local_238,&local_2b0);
  if (!bVar10) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_b80,L"Condition failed");
    (*pcVar4)(pFVar3,&local_b80,0);
    if (local_b80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b80.Data.AllocatorInstance.Data);
    }
  }
  bVar10 = FCompositeBuffer::EqualBytes(&local_2b0,&local_250);
  if (bVar10) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_b70,L"Condition expected to return false but returned true");
    (*pcVar4)(pFVar3,&local_b70,0);
    if (local_b70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b70.Data.AllocatorInstance.Data);
    }
  }
  bVar10 = FCompositeBuffer::EqualBytes(&local_250,&local_2b0);
  if (bVar10) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_b60,L"Condition expected to return false but returned true");
    (*pcVar4)(pFVar3,&local_b60,0);
    if (local_b60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b60.Data.AllocatorInstance.Data);
    }
  }
  FCompositeBuffer::~FCompositeBuffer(&local_250);
  FCompositeBuffer::~FCompositeBuffer(&local_238);
  FCompositeBuffer::~FCompositeBuffer(&local_2b0);
  return;
}

