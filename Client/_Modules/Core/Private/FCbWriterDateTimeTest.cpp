// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cc83d0

EAutomationTestFlags __thiscall FCbWriterDateTimeTest::GetTestFlags(FCbWriterDateTimeTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cc83e0

bool __thiscall FCbWriterDateTimeTest::IsStressTest(FCbWriterDateTimeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cc83f0

uint __thiscall FCbWriterDateTimeTest::GetRequiredDeviceNum(FCbWriterDateTimeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cc8400

FString * __thiscall
FCbWriterDateTimeTest::GetTestSourceFileName
          (FCbWriterDateTimeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\CompactBinaryWriterTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cc8430

int __thiscall FCbWriterDateTimeTest::GetTestSourceFileLine(FCbWriterDateTimeTest *this)

{
  return 0x284;
}

// GetTests @ 141cc8440

/* WARNING: Removing unreachable block (ram,0x000141cc85be) */

void __thiscall
FCbWriterDateTimeTest::GetTests
          (FCbWriterDateTimeTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cc85e0

bool __thiscall FCbWriterDateTimeTest::RunTest(FCbWriterDateTimeTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cc8610

FString * __thiscall
FCbWriterDateTimeTest::GetBeautifiedTestName
          (FCbWriterDateTimeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FCbWriterDateTimeTest @ 141ce5280

FCbWriterDateTimeTest * __thiscall
FCbWriterDateTimeTest::FCbWriterDateTimeTest(FCbWriterDateTimeTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FCbWriterDateTimeTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::CbWriter::DateTime");
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

// TestBody @ 141d14150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall FCbWriterDateTimeTest::TestBody(FCbWriterDateTimeTest *this,FString *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  code *pcVar3;
  FAutomationTestBase *pFVar4;
  longlong *plVar5;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar6;
  ECbValidateError EVar7;
  FAutomationTestFramework *pFVar8;
  FDateTime FVar9;
  long64 *plVar10;
  void *pvVar11;
  void *pvVar12;
  undefined1 auStackY_228 [32];
  TMemoryView<void_const_> local_1e8;
  long64 local_1d8;
  FDateTime local_1d0;
  TCbFieldIterator<FCbField> local_1c8;
  undefined1 local_1a8 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_198 [2];
  FString local_188;
  FCbFieldView local_178;
  FString local_168;
  FCbWriter local_158 [7];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_228;
  FCbWriter::FCbWriter(local_158,0x100);
  pvVar12 = (void *)0x0;
  local_1d8 = 0;
  FDateTime::FDateTime(&local_1d0,0x7e4,5,0xd,0xf,10,0,0);
  plVar10 = &local_1d8;
  do {
    FCbWriter::AddDateTime(local_158,(FDateTime)*plVar10);
    plVar10 = plVar10 + 1;
  } while ((TCbFieldIterator<FCbField> *)plVar10 != &local_1c8);
  FCbWriter::Save(local_158,(FCbFieldIterator *)local_1a8);
  TVar6.Owner = local_198[0].Owner;
  pvVar11 = pvVar12;
  if (local_198[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_198[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_198[0].Owner)->_padding_ + 8))(local_198[0].Owner);
    }
    pvVar11 = (void *)(TVar6.Owner)->Size;
  }
  TVar6.Owner = local_198[0].Owner;
  if (local_198[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_198[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_198[0].Owner)->_padding_ + 8))(local_198[0].Owner);
    }
    pvVar12 = (TVar6.Owner)->Data;
  }
  local_1e8.Data = pvVar12;
  local_1e8.Size = (ulong64)pvVar11;
  EVar7 = ValidateCompactBinaryRange(&local_1e8,All);
  if (EVar7 == None) {
    plVar5 = &local_1d8;
    local_1c8._padding_ = local_1a8._0_8_;
    if (local_198[0].Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &(local_198[0].Owner)->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        (local_198[0].Owner)->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)(local_198[0].Owner)->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
      }
    }
    while ((local_1c8._padding_ & 0x1fU) != 0) {
      local_178._0_8_ = local_1c8._padding_;
      pFVar8 = FAutomationTestFramework::Get();
      pFVar4 = pFVar8->CurrentTest;
      FVar9 = FCbFieldView::AsDateTime(&local_178);
      if (*(longlong *)FVar9.Ticks != *plVar5) {
        pcVar3 = *(code **)(pFVar4->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_188,L"%s: The two values are not equal.");
        (*pcVar3)(pFVar4,&local_188,0);
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
      }
      if (local_178.Error != None) {
        pFVar8 = FAutomationTestFramework::Get();
        pFVar4 = pFVar8->CurrentTest;
        pcVar3 = *(code **)(pFVar4->_padding_ + 0x28);
        ::FString::FString(&local_168,L"FCbWriter(DateTime) Error");
        (*pcVar3)(pFVar4,&local_168,0);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
      }
      TCbFieldIterator<FCbField>::operator++(&local_1c8);
      plVar5 = plVar5 + 1;
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_1c8._padding_);
  }
  else {
    pcVar3 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_1e8,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_1e8,0);
    if (local_1e8.Data != (void *)0x0) {
      FMemory::Free(local_1e8.Data);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_198);
  FCbWriter::~FCbWriter(local_158);
  return;
}

