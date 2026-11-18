// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cc6500

EAutomationTestFlags __thiscall
FCbWriterObjectAttachmentTest::GetTestFlags(FCbWriterObjectAttachmentTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cc6510

bool __thiscall FCbWriterObjectAttachmentTest::IsStressTest(FCbWriterObjectAttachmentTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cc6520

uint __thiscall
FCbWriterObjectAttachmentTest::GetRequiredDeviceNum(FCbWriterObjectAttachmentTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cc6530

FString * __thiscall
FCbWriterObjectAttachmentTest::GetTestSourceFileName
          (FCbWriterObjectAttachmentTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\CompactBinaryWriterTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cc6560

int __thiscall
FCbWriterObjectAttachmentTest::GetTestSourceFileLine(FCbWriterObjectAttachmentTest *this)

{
  return 0x21b;
}

// GetTests @ 141cc6570

/* WARNING: Removing unreachable block (ram,0x000141cc66ee) */

void __thiscall
FCbWriterObjectAttachmentTest::GetTests
          (FCbWriterObjectAttachmentTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cc6710

bool __thiscall
FCbWriterObjectAttachmentTest::RunTest(FCbWriterObjectAttachmentTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cc6740

FString * __thiscall
FCbWriterObjectAttachmentTest::GetBeautifiedTestName
          (FCbWriterObjectAttachmentTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FCbWriterObjectAttachmentTest @ 141ce5b90

FCbWriterObjectAttachmentTest * __thiscall
FCbWriterObjectAttachmentTest::FCbWriterObjectAttachmentTest
          (FCbWriterObjectAttachmentTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FCbWriterObjectAttachmentTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::CbWriter::ObjectAttachment");
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

// TestBody @ 141d155f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCbWriterObjectAttachmentTest::TestBody(FCbWriterObjectAttachmentTest *this,FString *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  code *pcVar3;
  FAutomationTestBase *pFVar4;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar5;
  ECbValidateError EVar6;
  FAutomationTestFramework *pFVar7;
  FIoHash *pFVar8;
  FIoHash *pFVar9;
  void *pvVar10;
  undefined1 auStack_238 [32];
  TMemoryView<void_const_> local_218;
  TCbFieldIterator<FCbField> local_208;
  undefined1 local_1e8 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1d8 [2];
  FCbFieldView local_1c8;
  FString local_1b8;
  FIoHash local_1a8;
  FIoHash local_194;
  FCbWriter local_178 [7];
  FIoHash local_48;
  undefined8 local_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_238;
  FCbWriter::FCbWriter(local_178,0x100);
  pFVar9 = &local_48;
  uStack_28 = 0x100f0e0d;
  uStack_24 = 0x14131211;
  local_48.Hash[0] = '\0';
  local_48.Hash[1] = '\0';
  local_48.Hash[2] = '\0';
  local_48.Hash[3] = '\0';
  local_48.Hash[4] = '\0';
  local_48.Hash[5] = '\0';
  local_48.Hash[6] = '\0';
  local_48.Hash[7] = '\0';
  local_48.Hash[8] = '\0';
  local_48.Hash[9] = '\0';
  local_48.Hash[10] = '\0';
  local_48.Hash[0xb] = '\0';
  local_48.Hash[0xc] = '\0';
  local_48.Hash[0xd] = '\0';
  local_48.Hash[0xe] = '\0';
  local_48.Hash[0xf] = '\0';
  local_48.Hash[0x10] = '\0';
  local_48.Hash[0x11] = '\0';
  local_48.Hash[0x12] = '\0';
  local_48.Hash[0x13] = '\0';
  local_34 = 0x807060504030201;
  uStack_2c = 0xc0b0a09;
  do {
    FCbWriter::AddObjectAttachment(local_178,pFVar9);
    pFVar9 = pFVar9 + 1;
  } while (pFVar9 != (FIoHash *)&local_20);
  FCbWriter::Save(local_178,(FCbFieldIterator *)local_1e8);
  TVar5.Owner = local_1d8[0].Owner;
  local_218.Data = (void *)0x0;
  pvVar10 = local_218.Data;
  if (local_1d8[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_1d8[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_1d8[0].Owner)->_padding_ + 8))(local_1d8[0].Owner);
    }
    pvVar10 = (void *)(TVar5.Owner)->Size;
  }
  TVar5.Owner = local_1d8[0].Owner;
  if (local_1d8[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_1d8[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_1d8[0].Owner)->_padding_ + 8))(local_1d8[0].Owner);
    }
    local_218.Data = (TVar5.Owner)->Data;
  }
  local_218.Size = (ulong64)pvVar10;
  EVar6 = ValidateCompactBinaryRange(&local_218,All);
  if (EVar6 == None) {
    pFVar9 = &local_48;
    local_208._padding_ = local_1e8._0_8_;
    if (local_1d8[0].Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &(local_1d8[0].Owner)->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        (local_1d8[0].Owner)->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)(local_1d8[0].Owner)->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
      }
    }
    while ((local_208._padding_ & 0x1fU) != 0) {
      local_1c8._0_8_ = local_208._padding_;
      pFVar7 = FAutomationTestFramework::Get();
      pFVar4 = pFVar7->CurrentTest;
      local_1a8.Hash[0x10] = '\0';
      local_1a8.Hash[0x11] = '\0';
      local_1a8.Hash[0x12] = '\0';
      local_1a8.Hash[0x13] = '\0';
      local_1a8.Hash[0] = '\0';
      local_1a8.Hash[1] = '\0';
      local_1a8.Hash[2] = '\0';
      local_1a8.Hash[3] = '\0';
      local_1a8.Hash[4] = '\0';
      local_1a8.Hash[5] = '\0';
      local_1a8.Hash[6] = '\0';
      local_1a8.Hash[7] = '\0';
      local_1a8.Hash[8] = '\0';
      local_1a8.Hash[9] = '\0';
      local_1a8.Hash[10] = '\0';
      local_1a8.Hash[0xb] = '\0';
      local_1a8.Hash[0xc] = '\0';
      local_1a8.Hash[0xd] = '\0';
      local_1a8.Hash[0xe] = '\0';
      local_1a8.Hash[0xf] = '\0';
      pFVar8 = FCbFieldView::AsObjectAttachment(&local_1c8,&local_194,&local_1a8);
      if (((*(longlong *)pFVar8->Hash != *(longlong *)pFVar9->Hash) ||
          (*(longlong *)(pFVar8->Hash + 8) != *(longlong *)(pFVar9->Hash + 8))) ||
         (*(int *)(pFVar8->Hash + 0x10) != *(int *)(pFVar9->Hash + 0x10))) {
        pcVar3 = *(code **)(pFVar4->_padding_ + 0x28);
        ::FString::PrintfImpl((FString *)&local_218,L"%s: The two values are not equal.");
        (*pcVar3)(pFVar4,&local_218,0);
        if (local_218.Data != (void *)0x0) {
          FMemory::Free(local_218.Data);
        }
      }
      if (local_1c8.Error != None) {
        pFVar7 = FAutomationTestFramework::Get();
        pFVar4 = pFVar7->CurrentTest;
        pcVar3 = *(code **)(pFVar4->_padding_ + 0x28);
        ::FString::FString(&local_1b8,L"FCbWriter(ObjectAttachment) Error");
        (*pcVar3)(pFVar4,&local_1b8,0);
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
      }
      TCbFieldIterator<FCbField>::operator++(&local_208);
      pFVar9 = pFVar9 + 1;
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_208._padding_);
  }
  else {
    pcVar3 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_218,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_218,0);
    if (local_218.Data != (void *)0x0) {
      FMemory::Free(local_218.Data);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_1d8);
  FCbWriter::~FCbWriter(local_178);
  return;
}

