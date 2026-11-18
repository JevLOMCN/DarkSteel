// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141c5b750

EAutomationTestFlags __thiscall FSharedBufferTest::GetTestFlags(FSharedBufferTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141c5b760

bool __thiscall FSharedBufferTest::IsStressTest(FSharedBufferTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141c5b770

uint __thiscall FSharedBufferTest::GetRequiredDeviceNum(FSharedBufferTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141c5b780

FString * __thiscall
FSharedBufferTest::GetTestSourceFileName(FSharedBufferTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Memory\\SharedBufferTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141c5b7b0

int __thiscall FSharedBufferTest::GetTestSourceFileLine(FSharedBufferTest *this)

{
  return 0xc5;
}

// GetTests @ 141c5b7c0

/* WARNING: Removing unreachable block (ram,0x000141c5b93e) */

void __thiscall
FSharedBufferTest::GetTests
          (FSharedBufferTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141c5b960

bool __thiscall FSharedBufferTest::RunTest(FSharedBufferTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141c5b990

FString * __thiscall
FSharedBufferTest::GetBeautifiedTestName(FSharedBufferTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FSharedBufferTest @ 141c8de30

FSharedBufferTest * __thiscall
FSharedBufferTest::FSharedBufferTest(FSharedBufferTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FSharedBufferTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Memory::SharedBuffer");
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

// TestBody @ 141cac2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FSharedBufferTest::TestBody(FSharedBufferTest *this,FString *param_1)

{
  ulonglong *puVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  atomic<unsigned___int64> *paVar4;
  ulonglong uVar5;
  atomic<unsigned___int64> aVar6;
  code *pcVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  void *pvVar11;
  ForAnyElementType FVar12;
  void *pvVar13;
  int iVar14;
  FAutomationTestFramework *pFVar15;
  FSharedBuffer FVar16;
  FUniqueBuffer FVar17;
  FBufferOwner *pFVar18;
  FBufferOwner *pFVar19;
  TMemoryView<void> *pTVar20;
  TMemoryView<void_const_> *pTVar21;
  undefined8 *puVar22;
  FAutomationTestBase *pFVar23;
  FBufferOwner *pFVar24;
  undefined1 auStack_338 [32];
  char local_318 [8];
  TMemoryView<void_const_> local_310;
  FString local_300;
  TMemoryView<void> local_2e8;
  TMemoryView<void_const_> local_2d8;
  TMemoryView<void_const_> local_2c8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
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
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_338;
  pFVar15 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual(pFVar15->CurrentTest,L"FSharedBuffer().GetSize()",0,0);
  pFVar15 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual(pFVar15->CurrentTest,L"FSharedBuffer().GetView().GetSize()",0,0);
  FAutomationTestFramework::Get();
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  FSharedBuffer::Clone(&local_310,(ulong64)&local_2b8);
  if ((local_310.Data != (longlong *)0x0) &&
     ((*(ulonglong *)((longlong)local_310.Data + 0x18) >> 0x3c & 1) == 0)) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::FString(&local_300,L"FSharedBuffer::Clone().IsOwned()");
    (*pcVar7)(pFVar23,&local_300,0);
    if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Data.AllocatorInstance.Data);
    }
  }
  pFVar15 = FAutomationTestFramework::Get();
  pvVar11 = local_310.Data;
  pFVar24 = (FBufferOwner *)0x0;
  pFVar23 = pFVar15->CurrentTest;
  pFVar19 = pFVar24;
  if (local_310.Data != (longlong *)0x0) {
    if ((*(ulonglong *)((longlong)local_310.Data + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_310.Data + 8))(local_310.Data);
    }
    pFVar19 = *(FBufferOwner **)((longlong)pvVar11 + 0x10);
  }
  FAutomationTestBase::TestEqual(pFVar23,L"FSharedBuffer::Clone().GetSize()",(ulong64)pFVar19,0x40);
  pFVar15 = FAutomationTestFramework::Get();
  pvVar11 = local_310.Data;
  pFVar23 = pFVar15->CurrentTest;
  if (local_310.Data != (longlong *)0x0) {
    if ((*(ulonglong *)((longlong)local_310.Data + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_310.Data + 8))(local_310.Data);
    }
    if (*(undefined8 **)((longlong)pvVar11 + 8) == &local_2b8) {
      pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_300,L"%s: The two values are equal.");
      (*pcVar7)(pFVar23,&local_300,0);
      if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_300.Data.AllocatorInstance.Data);
      }
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_310);
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  FSharedBuffer::MakeView(&local_310,(ulong64)&local_278);
  if ((local_310.Data == (longlong *)0x0) ||
     ((*(ulonglong *)((longlong)local_310.Data + 0x18) >> 0x3c & 1) != 0)) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::FString(&local_300,L"FSharedBuffer::MakeView().IsOwned()");
    (*pcVar7)(pFVar23,&local_300,0);
    if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Data.AllocatorInstance.Data);
    }
  }
  pFVar15 = FAutomationTestFramework::Get();
  pvVar11 = local_310.Data;
  pFVar23 = pFVar15->CurrentTest;
  pFVar19 = pFVar24;
  if (local_310.Data != (longlong *)0x0) {
    if ((*(ulonglong *)((longlong)local_310.Data + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_310.Data + 8))(local_310.Data);
    }
    pFVar19 = *(FBufferOwner **)((longlong)pvVar11 + 0x10);
  }
  FAutomationTestBase::TestEqual
            (pFVar23,L"FSharedBuffer::MakeView().GetSize()",(ulong64)pFVar19,0x40);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar23 = pFVar15->CurrentTest;
  if (local_310.Data == (longlong *)0x0) {
LAB_141cac58d:
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_300,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar23,&local_300,0);
    if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Data.AllocatorInstance.Data);
    }
  }
  else {
    if ((*(ulonglong *)((longlong)local_310.Data + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_310.Data + 8))(local_310.Data);
    }
    if (*(undefined8 **)((longlong)local_310.Data + 8) != &local_278) goto LAB_141cac58d;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_310);
  local_310.Data = (FBufferOwner *)0x0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  FSharedBuffer::MakeView(&local_2d8,(ulong64)&local_238);
  pvVar11 = local_2d8.Data;
  pFVar19 = pFVar24;
  if (local_2d8.Data != (longlong *)0x0) {
    if ((*(ulonglong *)((longlong)local_2d8.Data + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_2d8.Data + 8))(local_2d8.Data);
    }
    pFVar19 = *(FBufferOwner **)((longlong)pvVar11 + 0x10);
  }
  pvVar11 = local_2d8.Data;
  pFVar18 = pFVar24;
  if (local_2d8.Data != (longlong *)0x0) {
    if ((*(ulonglong *)((longlong)local_2d8.Data + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_2d8.Data + 8))(local_2d8.Data);
    }
    pFVar18 = *(FBufferOwner **)((longlong)pvVar11 + 8);
  }
  FVar16 = FSharedBuffer::MakeView
                     (&local_300,(ulong64)pFVar18,(FSharedBuffer *)((ulonglong)pFVar19 >> 1));
  plVar8 = *(longlong **)FVar16.Owner.Owner;
  *(undefined8 *)FVar16.Owner.Owner = 0;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_300);
  FWeakSharedBuffer::operator=((FWeakSharedBuffer *)&local_310,(FSharedBuffer *)&local_2d8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_2d8);
  if ((plVar8 == (longlong *)0x0) || (((ulonglong)plVar8[3] >> 0x3c & 1) != 0)) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::FString(&local_300,L"FSharedBuffer::MakeView(OuterView).IsOwned()");
    (*pcVar7)(pFVar23,&local_300);
    if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Data.AllocatorInstance.Data);
    }
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    if (plVar8 != (longlong *)0x0) goto LAB_141cac6fe;
    FAutomationTestBase::TestEqual(pFVar23,L"FSharedBuffer::MakeView(OuterView).GetSize()",0,0x20);
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
LAB_141cac77f:
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_300,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar23,&local_300,0);
    if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
LAB_141cac6fe:
    if (((ulonglong)plVar8[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
    FAutomationTestBase::TestEqual
              (pFVar23,L"FSharedBuffer::MakeView(OuterView).GetSize()",plVar8[2],0x20);
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    if (((ulonglong)plVar8[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
    if ((undefined8 *)plVar8[1] != &local_238) goto LAB_141cac77f;
  }
  FVar16 = FWeakSharedBuffer::Pin((FWeakSharedBuffer *)&local_310);
  lVar9 = *(longlong *)FVar16.Owner.Owner;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_300);
  if (lVar9 == 0) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::FString(&local_300,L"FSharedBuffer::MakeView(OuterView) Outer Not Null");
    (*pcVar7)(pFVar23,&local_300,0);
    if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Data.AllocatorInstance.Data);
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 3;
    lVar9 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (((uint)lVar9 & 0x3fffffff) == 1) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      plVar8[1] = 0;
      plVar8[2] = 0;
      LOCK();
      puVar1 = (ulonglong *)(plVar8 + 3);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar5 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar8)(plVar8,1);
      }
    }
  }
  FVar16 = FWeakSharedBuffer::Pin((FWeakSharedBuffer *)&local_310);
  lVar9 = *(longlong *)FVar16.Owner.Owner;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_300);
  if (lVar9 != 0) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::FString(&local_300,L"FSharedBuffer::MakeView(OuterView) Outer Null");
    (*pcVar7)(pFVar23,&local_300,0);
    if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Data.AllocatorInstance.Data);
    }
  }
  if (local_310.Data != (FBufferOwner *)0x0) {
    LOCK();
    paVar4 = (atomic<unsigned___int64> *)((longlong)local_310.Data + 0x18);
    aVar6 = *paVar4;
    *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + -0x40000000);
    UNLOCK();
    if (((uint)((ulonglong)aVar6 >> 0x1e) & 0x3fffffff) == 1) {
      (*(code *)**(undefined8 **)local_310.Data)(local_310.Data,1);
    }
  }
  local_300.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar17 = FUniqueBuffer::Alloc((ulong64)&local_310);
  FUniqueBuffer::MoveToShared((FUniqueBuffer *)FVar17.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_310);
  pvVar11 = local_2d8.Data;
  pFVar18 = pFVar24;
  pFVar19 = pFVar24;
  if (local_2d8.Data != (longlong *)0x0) {
    if ((*(ulonglong *)((longlong)local_2d8.Data + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_2d8.Data + 8))(local_2d8.Data);
    }
    pvVar13 = local_2d8.Data;
    pFVar19 = *(FBufferOwner **)((longlong)pvVar11 + 0x10);
    if (local_2d8.Data != (longlong *)0x0) {
      if ((*(ulonglong *)((longlong)local_2d8.Data + 0x18) >> 0x3c & 4) == 0) {
        (**(code **)(*(longlong *)local_2d8.Data + 8))(local_2d8.Data);
      }
      pFVar18 = *(FBufferOwner **)((longlong)pvVar13 + 8);
    }
  }
  FVar16 = FSharedBuffer::MakeView(&local_310,(ulong64)pFVar18,(FSharedBuffer *)pFVar19);
  plVar8 = *(longlong **)FVar16.Owner.Owner;
  *(undefined8 *)FVar16.Owner.Owner = 0;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_310);
  pFVar15 = FAutomationTestFramework::Get();
  if (plVar8 != local_2d8.Data) {
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_310,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar23,&local_310,0);
    if (local_310.Data != (FBufferOwner *)0x0) {
      FMemory::Free(local_310.Data);
    }
  }
  pvVar11 = local_2d8.Data;
  pFVar19 = pFVar24;
  if (local_2d8.Data != (longlong *)0x0) {
    if ((*(ulonglong *)((longlong)local_2d8.Data + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_2d8.Data + 8))(local_2d8.Data);
    }
    pFVar19 = *(FBufferOwner **)((longlong)pvVar11 + 0x10);
  }
  pvVar11 = local_2d8.Data;
  pFVar18 = pFVar24;
  if (local_2d8.Data != (longlong *)0x0) {
    if ((*(ulonglong *)((longlong)local_2d8.Data + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_2d8.Data + 8))(local_2d8.Data);
    }
    pFVar18 = *(FBufferOwner **)((longlong)pvVar11 + 8);
  }
  FVar16 = FSharedBuffer::MakeView
                     (&local_310,(ulong64)pFVar18,(FSharedBuffer *)((ulonglong)pFVar19 >> 1));
  plVar10 = *(longlong **)FVar16.Owner.Owner;
  *(undefined8 *)FVar16.Owner.Owner = 0;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 3;
    lVar9 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (((uint)lVar9 & 0x3fffffff) == 1) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      plVar8[1] = 0;
      plVar8[2] = 0;
      LOCK();
      plVar2 = plVar8 + 3;
      uVar5 = *plVar2;
      *plVar2 = *plVar2 + -0x40000000;
      UNLOCK();
      if (((uint)(uVar5 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar8)(plVar8,1);
      }
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_310);
  FWeakSharedBuffer::operator=((FWeakSharedBuffer *)&local_300,(FSharedBuffer *)&local_2d8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_2d8);
  if ((plVar10 == (longlong *)0x0) || (((byte)((ulonglong)plVar10[3] >> 0x3c) & 1) != 0)) {
LAB_141cacb2d:
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pFVar19 = pFVar24;
    if (plVar10 != (longlong *)0x0) goto LAB_141cacb3e;
  }
  else {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::FString((FString *)&local_310,L"FSharedBuffer::MakeView(OuterOwned).IsOwned()");
    (*pcVar7)(pFVar23,&local_310,0);
    if (local_310.Data == (FBufferOwner *)0x0) goto LAB_141cacb2d;
    FMemory::Free(local_310.Data);
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
LAB_141cacb3e:
    if (((ulonglong)plVar10[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    pFVar19 = (FBufferOwner *)plVar10[2];
  }
  FAutomationTestBase::TestEqual
            (pFVar23,L"FSharedBuffer::MakeView(OuterOwned).GetSize()",(ulong64)pFVar19,0x20);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar23 = pFVar15->CurrentTest;
  FVar16 = FWeakSharedBuffer::Pin((FWeakSharedBuffer *)&local_300);
  plVar8 = *(longlong **)FVar16.Owner.Owner;
  pFVar19 = pFVar24;
  if (plVar8 != (longlong *)0x0) {
    if (((ulonglong)plVar8[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
    pFVar19 = (FBufferOwner *)plVar8[1];
  }
  pFVar18 = pFVar24;
  if (plVar10 != (longlong *)0x0) {
    if (((ulonglong)plVar10[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    pFVar18 = (FBufferOwner *)plVar10[1];
  }
  if (pFVar18 != pFVar19) {
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_2d8,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar23,&local_2d8,0);
    if (local_2d8.Data != (longlong *)0x0) {
      FMemory::Free(local_2d8.Data);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_310);
  FVar16 = FWeakSharedBuffer::Pin((FWeakSharedBuffer *)&local_300);
  lVar9 = *(longlong *)FVar16.Owner.Owner;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_310);
  if (lVar9 == 0) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::FString((FString *)&local_310,L"FSharedBuffer::MakeView(OuterOwned) Outer Not Null");
    (*pcVar7)(pFVar23,&local_310,0);
    if (local_310.Data != (FBufferOwner *)0x0) {
      FMemory::Free(local_310.Data);
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar10 + 3;
    lVar9 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (((uint)lVar9 & 0x3fffffff) == 1) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      plVar10[1] = 0;
      plVar10[2] = 0;
      LOCK();
      puVar1 = (ulonglong *)(plVar10 + 3);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar5 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar10)(plVar10,1);
      }
    }
  }
  FVar16 = FWeakSharedBuffer::Pin((FWeakSharedBuffer *)&local_300);
  lVar9 = *(longlong *)FVar16.Owner.Owner;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_310);
  if (lVar9 != 0) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::FString((FString *)&local_310,L"FSharedBuffer::MakeView(OuterOwned) Outer  Null");
    (*pcVar7)(pFVar23,&local_310,0);
    if (local_310.Data != (FBufferOwner *)0x0) {
      FMemory::Free(local_310.Data);
    }
  }
  if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    LOCK();
    pFVar3 = local_300.Data.AllocatorInstance.Data + 0x18;
    uVar5 = *(ulonglong *)pFVar3;
    *(ulonglong *)pFVar3 = *(ulonglong *)pFVar3 - 0x40000000;
    UNLOCK();
    if (((uint)(uVar5 >> 0x1e) & 0x3fffffff) == 1) {
      (*(code *)**(undefined8 **)local_300.Data.AllocatorInstance.Data)
                (local_300.Data.AllocatorInstance.Data,1);
    }
  }
  local_318[0] = '\0';
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  pFVar18 = ::operator_new(0x28);
  pFVar19 = pFVar24;
  if (pFVar18 != (FBufferOwner *)0x0) {
    pFVar18->ReferenceCountsAndFlags = (atomic<unsigned___int64>)0x0;
    pFVar18->Data = &local_1f8;
    pFVar18->Size = 0x40;
    pFVar18[1]._padding_ = (longlong)local_318;
    pFVar18->_padding_ =
         (longlong)
         &UE::SharedBuffer::Private::
          TBufferOwnerDeleteFunction<`FSharedBufferTest::TestBody'::`39'::<lambda_1>_>::_vftable_;
    LOCK();
    pFVar18->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)
         ((ulonglong)pFVar18->ReferenceCountsAndFlags | 0x4000000000000000);
    UNLOCK();
    LOCK();
    pFVar18->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)
         ((ulonglong)pFVar18->ReferenceCountsAndFlags | 0x1000000000000000);
    UNLOCK();
    pFVar18->_padding_ =
         (longlong)
         &UE::SharedBuffer::Private::
          TBufferOwnerDeleteFunction<`FSharedBufferTest::TestBody'::`39'::<lambda_1>_>::_vftable_;
    LOCK();
    pFVar18->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)
         ((ulonglong)pFVar18->ReferenceCountsAndFlags | 0x2000000000000000);
    UNLOCK();
    pFVar19 = pFVar18;
  }
  FSharedBuffer::FSharedBuffer((FSharedBuffer *)&local_300,pFVar19);
  if ((local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) &&
     (((byte)((ulonglong)*(longlong *)(local_300.Data.AllocatorInstance.Data + 0x18) >> 0x3c) & 1)
      == 0)) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::FString((FString *)&local_310,L"FSharedBuffer::TakeOwnership().IsOwned()");
    (*pcVar7)(pFVar23,&local_310,0);
    if (local_310.Data != (FBufferOwner *)0x0) {
      FMemory::Free(local_310.Data);
    }
  }
  pFVar15 = FAutomationTestFramework::Get();
  FVar12.Data = local_300.Data.AllocatorInstance.Data;
  pFVar23 = pFVar15->CurrentTest;
  pFVar19 = pFVar24;
  if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if ((*(ulonglong *)(local_300.Data.AllocatorInstance.Data + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_300.Data.AllocatorInstance.Data + 8))
                (local_300.Data.AllocatorInstance.Data);
    }
    pFVar19 = *(FBufferOwner **)(FVar12.Data + 0x10);
  }
  FAutomationTestBase::TestEqual
            (pFVar23,L"FSharedBuffer::TakeOwnership().GetSize()",(ulong64)pFVar19,0x40);
  pFVar15 = FAutomationTestFramework::Get();
  FVar12.Data = local_300.Data.AllocatorInstance.Data;
  pFVar23 = pFVar15->CurrentTest;
  if (local_300.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
LAB_141cacebf:
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_310,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar23,&local_310,0);
    if (local_310.Data != (FBufferOwner *)0x0) {
      FMemory::Free(local_310.Data);
    }
  }
  else {
    if ((*(ulonglong *)(local_300.Data.AllocatorInstance.Data + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_300.Data.AllocatorInstance.Data + 8))
                (local_300.Data.AllocatorInstance.Data);
    }
    if (*(undefined8 **)(FVar12.Data + 8) != &local_1f8) goto LAB_141cacebf;
  }
  FSharedBuffer::Reset((FSharedBuffer *)&local_300);
  if (local_318[0] == '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::FString((FString *)&local_310,L"FSharedBuffer::TakeOwnership() Deleted");
    (*pcVar7)(pFVar23,&local_310,0);
    if (local_310.Data != (FBufferOwner *)0x0) {
      FMemory::Free(local_310.Data);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_300);
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  FVar16 = FSharedBuffer::MakeView(&local_300,(ulong64)&local_1b8);
  FSharedBuffer::MakeOwned((FSharedBuffer *)FVar16.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_300);
  if ((local_2d8.Data != (longlong *)0x0) &&
     (((byte)((ulonglong)*(longlong *)((longlong)local_2d8.Data + 0x18) >> 0x3c) & 1) == 0)) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::FString(&local_300,L"FSharedBuffer::MakeOwned(View).IsOwned()");
    (*pcVar7)(pFVar23,&local_300,0);
    if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Data.AllocatorInstance.Data);
    }
  }
  pFVar15 = FAutomationTestFramework::Get();
  pvVar11 = local_2d8.Data;
  pFVar23 = pFVar15->CurrentTest;
  pFVar19 = pFVar24;
  if (local_2d8.Data != (longlong *)0x0) {
    if ((*(ulonglong *)((longlong)local_2d8.Data + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_2d8.Data + 8))(local_2d8.Data);
    }
    pFVar19 = *(FBufferOwner **)((longlong)pvVar11 + 0x10);
  }
  FAutomationTestBase::TestEqual
            (pFVar23,L"FSharedBuffer::MakeOwned(View).GetSize()",(ulong64)pFVar19,0x40);
  pvVar11 = local_2d8.Data;
  if (local_2d8.Data != (longlong *)0x0) {
    if ((*(ulonglong *)((longlong)local_2d8.Data + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_2d8.Data + 8))(local_2d8.Data);
    }
    if (*(undefined8 **)((longlong)pvVar11 + 8) == &local_1b8) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar23 = pFVar15->CurrentTest;
      pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
      ::FString::FString(&local_300,L"FSharedBuffer::MakeOwned(View).GetData()");
      (*pcVar7)(pFVar23,&local_300,0);
      if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_300.Data.AllocatorInstance.Data);
      }
    }
  }
  FSharedBuffer::MakeOwned((FSharedBuffer *)&local_2d8);
  if ((local_310.Data != (FBufferOwner *)0x0) &&
     ((SUB81(*(atomic<unsigned___int64> *)((longlong)local_310.Data + 0x18),7) >> 4 & 1) == 0)) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::FString(&local_300,L"FSharedBuffer::MakeOwned(Owned).IsOwned()");
    (*pcVar7)(pFVar23,&local_300,0);
    if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Data.AllocatorInstance.Data);
    }
  }
  pFVar15 = FAutomationTestFramework::Get();
  pvVar11 = local_310.Data;
  pFVar23 = pFVar15->CurrentTest;
  pFVar19 = pFVar24;
  if (local_310.Data != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_310.Data + 0x18) >> 0x3c & 4) == 0
       ) {
      (**(code **)(*(longlong *)local_310.Data + 8))(local_310.Data);
    }
    pFVar19 = *(FBufferOwner **)((longlong)pvVar11 + 0x10);
  }
  FAutomationTestBase::TestEqual
            (pFVar23,L"FSharedBuffer::MakeOwned(Owned).GetSize()",(ulong64)pFVar19,0x40);
  pFVar15 = FAutomationTestFramework::Get();
  pvVar11 = local_2d8.Data;
  pFVar23 = pFVar15->CurrentTest;
  pFVar19 = pFVar24;
  if (local_2d8.Data != (longlong *)0x0) {
    if ((*(ulonglong *)((longlong)local_2d8.Data + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_2d8.Data + 8))(local_2d8.Data);
    }
    pFVar19 = *(FBufferOwner **)((longlong)pvVar11 + 8);
  }
  pvVar11 = local_310.Data;
  pFVar18 = pFVar24;
  if (local_310.Data != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_310.Data + 0x18) >> 0x3c & 4) == 0
       ) {
      (**(code **)(*(longlong *)local_310.Data + 8))(local_310.Data);
    }
    pFVar18 = *(void **)((longlong)pvVar11 + 8);
  }
  if (pFVar18 != pFVar19) {
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_300,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar23,&local_300,0);
    if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Data.AllocatorInstance.Data);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_310);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_2d8);
  local_300.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FSharedBuffer::MoveToUnique((FSharedBuffer *)&local_300);
  FVar12.Data = local_300.Data.AllocatorInstance.Data;
  if ((FBufferOwner *)local_300.Data.AllocatorInstance.Data != (FBufferOwner *)0x0) {
    LOCK();
    paVar4 = (atomic<unsigned___int64> *)(local_300.Data.AllocatorInstance.Data + 0x18);
    aVar6 = *paVar4;
    *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + -1);
    UNLOCK();
    if ((aVar6._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_300.Data.AllocatorInstance.Data + 0x10))
                (local_300.Data.AllocatorInstance.Data);
      *(void **)(FVar12.Data + 8) = (void *)0x0;
      *(ulong64 *)(FVar12.Data + 0x10) = 0;
      LOCK();
      paVar4 = (atomic<unsigned___int64> *)(FVar12.Data + 0x18);
      aVar6 = *paVar4;
      *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar6 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar12.Data)(FVar12.Data,1);
      }
    }
  }
  if ((local_310.Data != (FBufferOwner *)0x0) &&
     ((SUB81(*(atomic<unsigned___int64> *)((longlong)local_310.Data + 0x18),7) >> 4 & 1) == 0)) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::FString(&local_300,L"FSharedBuffer::MoveToUnique(Null).IsOwned()");
    (*pcVar7)(pFVar23,&local_300,0);
    if ((FBufferOwner *)local_300.Data.AllocatorInstance.Data != (FBufferOwner *)0x0) {
      FMemory::Free(local_300.Data.AllocatorInstance.Data);
    }
  }
  pFVar15 = FAutomationTestFramework::Get();
  pFVar23 = pFVar15->CurrentTest;
  pFVar19 = pFVar24;
  if (local_310.Data != (FBufferOwner *)0x0) {
    pFVar19 = (FBufferOwner *)FBufferOwner::GetSize(local_310.Data);
  }
  FAutomationTestBase::TestEqual
            (pFVar23,L"FSharedBuffer::MoveToUnique(Null).GetSize()",(ulong64)pFVar19,0);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_310);
  local_2e8.Data = &local_2d8;
  local_2d8.Data = (void *)CONCAT44(local_2d8.Data._4_4_,0x4030201);
  local_2e8.Size = 4;
  FSharedBuffer::Clone(&local_310);
  if (local_310.Data != (FBufferOwner *)0x0) {
    LOCK();
    paVar4 = (atomic<unsigned___int64> *)((longlong)local_310.Data + 0x18);
    aVar6 = *paVar4;
    *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + 1);
    UNLOCK();
    if (((ulonglong)aVar6 & 0x3fffffff) == 0) {
      LOCK();
      *(atomic<unsigned___int64> *)((longlong)local_310.Data + 0x18) =
           (atomic<unsigned___int64>)
           ((longlong)*(atomic<unsigned___int64> *)((longlong)local_310.Data + 0x18) + 0x40000000);
      UNLOCK();
    }
  }
  local_2d8.Data = local_310.Data;
  FSharedBuffer::MoveToUnique((FSharedBuffer *)&local_2d8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_2d8);
  if (((FBufferOwner *)local_300.Data.AllocatorInstance.Data != (FBufferOwner *)0x0) &&
     (((ulonglong)*(atomic<unsigned___int64> *)(local_300.Data.AllocatorInstance.Data + 0x18) >>
       0x3c & 1) == 0)) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"FSharedBuffer::MoveToUnique(Shared).IsOwned()");
    (*pcVar7)(pFVar23,&local_2e8,0);
    if (local_2e8.Data != (TMemoryView<void_const_> *)0x0) {
      FMemory::Free(local_2e8.Data);
    }
  }
  pFVar15 = FAutomationTestFramework::Get();
  pFVar23 = pFVar15->CurrentTest;
  pFVar19 = pFVar24;
  if (local_310.Data != (FBufferOwner *)0x0) {
    pFVar19 = (FBufferOwner *)FBufferOwner::GetSize(local_310.Data);
  }
  pFVar18 = pFVar24;
  if ((FBufferOwner *)local_300.Data.AllocatorInstance.Data != (FBufferOwner *)0x0) {
    pFVar18 = (FBufferOwner *)
              FBufferOwner::GetSize((FBufferOwner *)local_300.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::TestEqual
            (pFVar23,L"FSharedBuffer::MoveToUnique(Shared).GetSize()",(ulong64)pFVar18,
             (ulong64)pFVar19);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar23 = pFVar15->CurrentTest;
  pFVar19 = pFVar24;
  if (local_310.Data != (FBufferOwner *)0x0) {
    pFVar19 = FBufferOwner::GetData(local_310.Data);
  }
  pFVar18 = pFVar24;
  if ((FBufferOwner *)local_300.Data.AllocatorInstance.Data != (FBufferOwner *)0x0) {
    pFVar18 = FBufferOwner::GetData((FBufferOwner *)local_300.Data.AllocatorInstance.Data);
  }
  if (pFVar18 == pFVar19) {
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_2e8,L"%s: The two values are equal.");
    (*pcVar7)(pFVar23,&local_2e8,0);
    if (local_2e8.Data != (TMemoryView<void_const_> *)0x0) {
      FMemory::Free(local_2e8.Data);
    }
  }
  pTVar20 = FUniqueBuffer::GetView((FUniqueBuffer *)&local_300,&local_2e8);
  pTVar21 = FSharedBuffer::GetView((FSharedBuffer *)&local_310,&local_2d8);
  if (pTVar20->Size == pTVar21->Size) {
    if ((pTVar20->Data == pTVar21->Data) ||
       (iVar14 = memcmp(pTVar20->Data,pTVar21->Data,pTVar20->Size), iVar14 == 0))
    goto LAB_141cad50d;
  }
  pFVar15 = FAutomationTestFramework::Get();
  pFVar23 = pFVar15->CurrentTest;
  pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
  ::FString::FString((FString *)&local_2e8,L"FSharedBuffer::MoveToUnique(Shared)->Equal");
  (*pcVar7)(pFVar23,&local_2e8,0);
  if (local_2e8.Data != (TMemoryView<void_const_> *)0x0) {
    FMemory::Free(local_2e8.Data);
  }
LAB_141cad50d:
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_300);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_310);
  local_318[0] = '\0';
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  pFVar18 = ::operator_new(0x28);
  pFVar19 = pFVar24;
  if (pFVar18 != (FBufferOwner *)0x0) {
    pFVar18->ReferenceCountsAndFlags = (atomic<unsigned___int64>)0x0;
    pFVar18->Data = &local_178;
    pFVar18->_padding_ =
         (longlong)
         &UE::SharedBuffer::Private::
          TBufferOwnerDeleteFunction<`FUniqueBuffer::TakeOwnership<`FSharedBufferTest::TestBody'::`67'::<lambda_2>,0>'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar18[1]._padding_ = (longlong)local_318;
    pFVar18->Size = 0x40;
    LOCK();
    pFVar18->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)
         ((ulonglong)pFVar18->ReferenceCountsAndFlags | 0x4000000000000000);
    UNLOCK();
    LOCK();
    pFVar18->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)
         ((ulonglong)pFVar18->ReferenceCountsAndFlags | 0x1000000000000000);
    UNLOCK();
    pFVar19 = pFVar18;
  }
  FUniqueBuffer::FUniqueBuffer((FUniqueBuffer *)&local_2d8,pFVar19);
  FUniqueBuffer::MoveToShared((FUniqueBuffer *)&local_2d8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_2d8);
  FSharedBuffer::MoveToUnique((FSharedBuffer *)&local_300);
  if ((FBufferOwner *)local_300.Data.AllocatorInstance.Data != (FBufferOwner *)0x0) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"FSharedBuffer::MoveToUnique(Owned).IsNull()");
    (*pcVar7)(pFVar23,&local_2e8,0);
    if (local_2e8.Data != (TMemoryView<void_const_> *)0x0) {
      FMemory::Free(local_2e8.Data);
    }
  }
  if ((local_310.Data != (FBufferOwner *)0x0) &&
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_310.Data + 0x18) >> 0x3c & 1) == 0))
  {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"FSharedBuffer::MoveToUnique(Owned).IsOwned()");
    (*pcVar7)(pFVar23,&local_2e8,0);
    if (local_2e8.Data != (TMemoryView<void_const_> *)0x0) {
      FMemory::Free(local_2e8.Data);
    }
  }
  pFVar15 = FAutomationTestFramework::Get();
  pFVar23 = pFVar15->CurrentTest;
  pFVar19 = pFVar24;
  if (local_310.Data != (FBufferOwner *)0x0) {
    pFVar19 = (FBufferOwner *)FBufferOwner::GetSize(local_310.Data);
  }
  FAutomationTestBase::TestEqual
            (pFVar23,L"FSharedBuffer::MoveToUnique(Owned).GetSize()",(ulong64)pFVar19,0x40);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar23 = pFVar15->CurrentTest;
  if ((local_310.Data == (FBufferOwner *)0x0) ||
     (puVar22 = FBufferOwner::GetData(local_310.Data), puVar22 != &local_178)) {
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_2e8,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar23,&local_2e8,0);
    if (local_2e8.Data != (TMemoryView<void_const_> *)0x0) {
      FMemory::Free(local_2e8.Data);
    }
  }
  FUniqueBuffer::Reset((FUniqueBuffer *)&local_310);
  if (local_318[0] == '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"FSharedBuffer::MoveToUnique(Owned) Deleted");
    (*pcVar7)(pFVar23,&local_2e8,0);
    if (local_2e8.Data != (TMemoryView<void_const_> *)0x0) {
      FMemory::Free(local_2e8.Data);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_310);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_300);
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  pFVar18 = ::operator_new(0x28);
  pFVar19 = pFVar24;
  if (pFVar18 != (FBufferOwner *)0x0) {
    pFVar18->ReferenceCountsAndFlags = (atomic<unsigned___int64>)0x0;
    pFVar18->Data = &local_138;
    *(char *)&pFVar18[1]._padding_ = local_318[0];
    pFVar18->Size = 0x40;
    pFVar18->_padding_ =
         (longlong)
         &UE::SharedBuffer::Private::
          TBufferOwnerDeleteFunction<`FSharedBuffer::TakeOwnership<`FSharedBufferTest::TestBody'::`77'::<lambda_3>,0>'::`2'::<lambda_1>_>
          ::_vftable_;
    LOCK();
    pFVar18->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)
         ((ulonglong)pFVar18->ReferenceCountsAndFlags | 0x4000000000000000);
    UNLOCK();
    LOCK();
    pFVar18->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)
         ((ulonglong)pFVar18->ReferenceCountsAndFlags | 0x1000000000000000);
    UNLOCK();
    pFVar18->_padding_ =
         (longlong)
         &UE::SharedBuffer::Private::
          TBufferOwnerDeleteFunction<`FSharedBuffer::TakeOwnership<`FSharedBufferTest::TestBody'::`77'::<lambda_3>,0>'::`2'::<lambda_1>_>
          ::_vftable_;
    LOCK();
    pFVar18->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)
         ((ulonglong)pFVar18->ReferenceCountsAndFlags | 0x2000000000000000);
    UNLOCK();
    pFVar19 = pFVar18;
  }
  FSharedBuffer::FSharedBuffer((FSharedBuffer *)&local_300,pFVar19);
  FSharedBuffer::MoveToUnique((FSharedBuffer *)&local_300);
  if ((FBufferOwner *)local_300.Data.AllocatorInstance.Data != (FBufferOwner *)0x0) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"FSharedBuffer::MoveToUnique(ImmutableOwned).IsNull()"
                      );
    (*pcVar7)(pFVar23,&local_2e8,0);
    if (local_2e8.Data != (TMemoryView<void_const_> *)0x0) {
      FMemory::Free(local_2e8.Data);
    }
  }
  if ((local_310.Data != (FBufferOwner *)0x0) &&
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_310.Data + 0x18) >> 0x3c & 1) == 0))
  {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,
                       L"FSharedBuffer::MoveToUnique(ImmutableOwned).IsOwned()");
    (*pcVar7)(pFVar23,&local_2e8,0);
    if (local_2e8.Data != (TMemoryView<void_const_> *)0x0) {
      FMemory::Free(local_2e8.Data);
    }
  }
  pFVar15 = FAutomationTestFramework::Get();
  pFVar23 = pFVar15->CurrentTest;
  pFVar19 = pFVar24;
  if (local_310.Data != (FBufferOwner *)0x0) {
    pFVar19 = (FBufferOwner *)FBufferOwner::GetSize(local_310.Data);
  }
  FAutomationTestBase::TestEqual
            (pFVar23,L"FSharedBuffer::MoveToUnique(ImmutableOwned).GetSize()",(ulong64)pFVar19,0x40)
  ;
  pFVar15 = FAutomationTestFramework::Get();
  pvVar11 = local_310.Data;
  pFVar23 = pFVar15->CurrentTest;
  if (local_310.Data != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_310.Data + 0x18) >> 0x3c & 4) == 0
       ) {
      (**(code **)(*(longlong *)local_310.Data + 8))(local_310.Data);
    }
    if (*(void **)((longlong)pvVar11 + 8) == &local_138) {
      pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
      ::FString::PrintfImpl((FString *)&local_2e8,L"%s: The two values are equal.");
      (*pcVar7)(pFVar23,&local_2e8,0);
      if (local_2e8.Data != (TMemoryView<void_const_> *)0x0) {
        FMemory::Free(local_2e8.Data);
      }
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_310);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_300);
  local_2e8.Size = 0x40;
  local_2e8.Data = &local_f8;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FVar17 = FUniqueBuffer::MakeView((TMemoryView<void> *)&local_2d8);
  FUniqueBuffer::MoveToShared((FUniqueBuffer *)FVar17.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_2d8);
  FSharedBuffer::MoveToUnique((FSharedBuffer *)&local_300);
  if ((FBufferOwner *)local_300.Data.AllocatorInstance.Data != (FBufferOwner *)0x0) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"FSharedBuffer::MoveToUnique(View).IsNull()");
    (*pcVar7)(pFVar23,&local_2e8,0);
    if (local_2e8.Data != (undefined8 *)0x0) {
      FMemory::Free(local_2e8.Data);
    }
  }
  if ((local_310.Data != (FBufferOwner *)0x0) &&
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_310.Data + 0x18) >> 0x3c & 1) == 0))
  {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"FSharedBuffer::MoveToUnique(View).IsOwned()");
    (*pcVar7)(pFVar23,&local_2e8,0);
    if (local_2e8.Data != (undefined8 *)0x0) {
      FMemory::Free(local_2e8.Data);
    }
  }
  pFVar15 = FAutomationTestFramework::Get();
  pvVar11 = local_310.Data;
  pFVar23 = pFVar15->CurrentTest;
  pFVar19 = pFVar24;
  if (local_310.Data != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_310.Data + 0x18) >> 0x3c & 4) == 0
       ) {
      (**(code **)(*(longlong *)local_310.Data + 8))(local_310.Data);
    }
    pFVar19 = *(FBufferOwner **)((longlong)pvVar11 + 0x10);
  }
  FAutomationTestBase::TestEqual
            (pFVar23,L"FSharedBuffer::MoveToUnique(View).GetSize()",(ulong64)pFVar19,0x40);
  pFVar15 = FAutomationTestFramework::Get();
  pvVar11 = local_310.Data;
  pFVar23 = pFVar15->CurrentTest;
  if (local_310.Data != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_310.Data + 0x18) >> 0x3c & 4) == 0
       ) {
      (**(code **)(*(longlong *)local_310.Data + 8))(local_310.Data);
    }
    if (*(void **)((longlong)pvVar11 + 8) == &local_f8) {
      pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
      ::FString::PrintfImpl((FString *)&local_2e8,L"%s: The two values are equal.");
      (*pcVar7)(pFVar23,&local_2e8,0);
      if (local_2e8.Data != (undefined8 *)0x0) {
        FMemory::Free(local_2e8.Data);
      }
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_310);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_300);
  local_2e8.Size = 0x40;
  local_2e8.Data = &local_b8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FSharedBuffer::MakeView(&local_2d8);
  FSharedBuffer::MoveToUnique((FSharedBuffer *)&local_2d8);
  if (local_2d8.Data != (FBufferOwner *)0x0) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"FSharedBuffer::MoveToUnique(ImmutableView).IsNull()")
    ;
    (*pcVar7)(pFVar23,&local_2e8,0);
    if (local_2e8.Data != (undefined8 *)0x0) {
      FMemory::Free(local_2e8.Data);
    }
  }
  if ((local_310.Data != (FBufferOwner *)0x0) &&
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_310.Data + 0x18) >> 0x3c & 1) == 0))
  {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"FSharedBuffer::MoveToUnique(ImmutableView).IsOwned()"
                      );
    (*pcVar7)(pFVar23,&local_2e8,0);
    if (local_2e8.Data != (undefined8 *)0x0) {
      FMemory::Free(local_2e8.Data);
    }
  }
  pFVar15 = FAutomationTestFramework::Get();
  pvVar11 = local_310.Data;
  pFVar23 = pFVar15->CurrentTest;
  pFVar19 = pFVar24;
  if (local_310.Data != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_310.Data + 0x18) >> 0x3c & 4) == 0
       ) {
      (**(code **)(*(longlong *)local_310.Data + 8))(local_310.Data);
    }
    pFVar19 = *(FBufferOwner **)((longlong)pvVar11 + 0x10);
  }
  FAutomationTestBase::TestEqual
            (pFVar23,L"FSharedBuffer::MoveToUnique(ImmutableView).GetSize()",(ulong64)pFVar19,0x40);
  pFVar15 = FAutomationTestFramework::Get();
  pvVar11 = local_310.Data;
  pFVar23 = pFVar15->CurrentTest;
  if (local_310.Data != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_310.Data + 0x18) >> 0x3c & 4) == 0
       ) {
      (**(code **)(*(longlong *)local_310.Data + 8))(local_310.Data);
    }
    if (*(void **)((longlong)pvVar11 + 8) == &local_b8) {
      pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
      ::FString::PrintfImpl((FString *)&local_2e8,L"%s: The two values are equal.");
      (*pcVar7)(pFVar23,&local_2e8,0);
      if (local_2e8.Data != (undefined8 *)0x0) {
        FMemory::Free(local_2e8.Data);
      }
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_310);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_2d8);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  pFVar18 = ::operator_new(0x28);
  pFVar19 = pFVar24;
  if (pFVar18 != (FBufferOwner *)0x0) {
    pFVar18->ReferenceCountsAndFlags = (atomic<unsigned___int64>)0x0;
    pFVar18->Data = &local_78;
    pFVar18->_padding_ =
         (longlong)
         &UE::SharedBuffer::Private::
          TBufferOwnerDeleteFunction<`FUniqueBuffer::TakeOwnership<`FSharedBufferTest::TestBody'::`98'::<lambda_4>,0>'::`2'::<lambda_1>_>
          ::_vftable_;
    *(char *)&pFVar18[1]._padding_ = local_318[0];
    pFVar18->Size = 0x40;
    LOCK();
    pFVar18->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)
         ((ulonglong)pFVar18->ReferenceCountsAndFlags | 0x4000000000000000);
    UNLOCK();
    LOCK();
    pFVar18->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)
         ((ulonglong)pFVar18->ReferenceCountsAndFlags | 0x1000000000000000);
    UNLOCK();
    pFVar19 = pFVar18;
  }
  FUniqueBuffer::FUniqueBuffer((FUniqueBuffer *)&local_2d8,pFVar19);
  FUniqueBuffer::MoveToShared((FUniqueBuffer *)&local_2d8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_2d8);
  pTVar21 = FSharedBuffer::GetView((FSharedBuffer *)&local_300,&local_2c8);
  local_2e8.Data = pTVar21->Data;
  local_2e8.Size = 0x20;
  if (pTVar21->Size < 0x20) {
    local_2e8.Size = pTVar21->Size;
  }
  FVar16 = FSharedBuffer::MakeView(&local_2d8,(FSharedBuffer *)&local_2e8);
  FSharedBuffer::MoveToUnique((FSharedBuffer *)FVar16.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_2d8);
  if ((FBufferOwner *)local_300.Data.AllocatorInstance.Data == (FBufferOwner *)0x0) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"FSharedBuffer::MoveToUnique(OwnedView).IsNull()");
    (*pcVar7)(pFVar23,&local_2e8,0);
    if (local_2e8.Data != (void *)0x0) {
      FMemory::Free(local_2e8.Data);
    }
  }
  if ((local_310.Data != (FBufferOwner *)0x0) &&
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_310.Data + 0x18) >> 0x3c & 1) == 0))
  {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar23 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"FSharedBuffer::MoveToUnique(OwnedView).IsOwned()");
    (*pcVar7)(pFVar23,&local_2e8,0);
    if (local_2e8.Data != (void *)0x0) {
      FMemory::Free(local_2e8.Data);
    }
  }
  pFVar15 = FAutomationTestFramework::Get();
  pvVar11 = local_310.Data;
  pFVar23 = pFVar15->CurrentTest;
  if (local_310.Data != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_310.Data + 0x18) >> 0x3c & 4) == 0
       ) {
      (**(code **)(*(longlong *)local_310.Data + 8))(local_310.Data);
    }
    pFVar24 = *(FBufferOwner **)((longlong)pvVar11 + 0x10);
  }
  FAutomationTestBase::TestEqual
            (pFVar23,L"FSharedBuffer::MoveToUnique(OwnedView).GetSize()",(ulong64)pFVar24,0x20);
  pFVar15 = FAutomationTestFramework::Get();
  pvVar11 = local_310.Data;
  pFVar23 = pFVar15->CurrentTest;
  if (local_310.Data != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_310.Data + 0x18) >> 0x3c & 4) == 0
       ) {
      (**(code **)(*(longlong *)local_310.Data + 8))(local_310.Data);
    }
    if (*(void **)((longlong)pvVar11 + 8) == &local_78) {
      pcVar7 = *(code **)(pFVar23->_padding_ + 0x28);
      ::FString::PrintfImpl((FString *)&local_2e8,L"%s: The two values are equal.");
      (*pcVar7)(pFVar23,&local_2e8,0);
      if (local_2e8.Data != (void *)0x0) {
        FMemory::Free(local_2e8.Data);
      }
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_310);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_300);
  return;
}

