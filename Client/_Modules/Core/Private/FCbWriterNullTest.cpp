// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cc0b90

EAutomationTestFlags __thiscall FCbWriterNullTest::GetTestFlags(FCbWriterNullTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cc0ba0

bool __thiscall FCbWriterNullTest::IsStressTest(FCbWriterNullTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cc0bb0

uint __thiscall FCbWriterNullTest::GetRequiredDeviceNum(FCbWriterNullTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cc0bc0

FString * __thiscall
FCbWriterNullTest::GetTestSourceFileName(FCbWriterNullTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\CompactBinaryWriterTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cc0bf0

int __thiscall FCbWriterNullTest::GetTestSourceFileLine(FCbWriterNullTest *this)

{
  return 0xa1;
}

// GetTests @ 141cc0c00

/* WARNING: Removing unreachable block (ram,0x000141cc0d7e) */

void __thiscall
FCbWriterNullTest::GetTests
          (FCbWriterNullTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cc0da0

bool __thiscall FCbWriterNullTest::RunTest(FCbWriterNullTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cc0dd0

FString * __thiscall
FCbWriterNullTest::GetBeautifiedTestName(FCbWriterNullTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FCbWriterNullTest @ 141ce59c0

FCbWriterNullTest * __thiscall
FCbWriterNullTest::FCbWriterNullTest(FCbWriterNullTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FCbWriterNullTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::CbWriter::Null");
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

// TestBody @ 141d14e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCbWriterNullTest::TestBody(FCbWriterNullTest *this,FString *param_1)

{
  undefined1 auVar1 [16];
  FBufferOwner *pFVar2;
  FAutomationTestBase *pFVar3;
  byte bVar4;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar5;
  ECbValidateError EVar6;
  FCbFieldIterator *pFVar7;
  FScriptContainerElement *pFVar8;
  FCbWriter *pFVar9;
  FAutomationTestFramework *pFVar10;
  FCbWriterNullTest *pFVar11;
  undefined1 auVar12 [8];
  longlong lVar13;
  code *pcVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStack_1e8 [32];
  TMemoryView<void_const_> local_1c8;
  undefined1 local_1b8 [8];
  ulong64 uStack_1b0;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1a8 [2];
  undefined2 local_198;
  undefined1 local_196;
  undefined1 local_190 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_180 [3];
  FCbWriter local_168 [7];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  FCbWriter::FCbWriter(local_168,0x100);
  FCbWriter::Reset(local_168);
  FCbWriter::AddNull(local_168);
  pFVar7 = FCbWriter::Save(local_168,(FCbFieldIterator *)local_1b8);
  pFVar15 = (FScriptContainerElement *)0x0;
  bVar4 = *(byte *)pFVar7;
  local_190 = *(undefined1 (*) [16])pFVar7;
  pFVar2 = *(FBufferOwner **)&pFVar7->field_0x10;
  *(undefined8 *)&pFVar7->field_0x10 = 0;
  local_180[0].Owner = pFVar2;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_1a8);
  local_1c8.Data = pFVar15;
  local_1c8.Size = (ulong64)pFVar15;
  if (pFVar2 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar2->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar2->_padding_ + 8))(pFVar2);
    }
    pFVar16 = (FScriptContainerElement *)pFVar2->Size;
    if (((ulonglong)pFVar2->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar2->_padding_ + 8))(pFVar2);
    }
    local_1c8.Data = pFVar2->Data;
    local_1c8.Size = (ulong64)pFVar16;
  }
  EVar6 = ValidateCompactBinary(&local_1c8,All,HasFieldType);
  if (EVar6 == None) {
    if ((char)bVar4 < '\0') {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar3 = pFVar10->CurrentTest;
      pcVar14 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString((FString *)&local_1c8,L"FCbWriter(Null).HasName()");
      (*pcVar14)(pFVar3,&local_1c8,0);
      if (local_1c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data);
      }
    }
    if ((bVar4 & 0x1f) != 1) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar11 = (FCbWriterNullTest *)pFVar10->CurrentTest;
      pcVar14 = *(code **)(pFVar11->_padding_ + 0x28);
      ::FString::FString((FString *)&local_1c8,L"FCbWriter(Null).IsNull()");
      goto LAB_141d14fd9;
    }
  }
  else {
    pcVar14 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_1c8,L"%s: The two values are not equal.");
    pFVar11 = this;
LAB_141d14fd9:
    (*pcVar14)(pFVar11,&local_1c8,0);
    if (local_1c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_180);
  FCbWriter::Reset(local_168);
  local_1c8.Size = CONCAT44(local_1c8.Size._4_4_,4);
  local_1c8.Data = "Null";
  local_1b8 = (undefined1  [8])0x15073d434;
  uStack_1b0 = local_1c8.Size;
  FCbWriter::SetName(local_168,(TStringView<char8_t> *)local_1b8);
  FCbWriter::AddNull(local_168);
  pFVar7 = FCbWriter::Save(local_168,(FCbFieldIterator *)local_1b8);
  auVar1 = *(undefined1 (*) [16])pFVar7;
  pFVar2 = *(FBufferOwner **)&pFVar7->field_0x10;
  *(undefined8 *)&pFVar7->field_0x10 = 0;
  local_190 = auVar1;
  local_180[0].Owner = pFVar2;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_1a8);
  pFVar8 = pFVar15;
  pFVar16 = pFVar15;
  if (pFVar2 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar2->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar2->_padding_ + 8))(pFVar2);
    }
    pFVar16 = (FScriptContainerElement *)pFVar2->Size;
    if (((ulonglong)pFVar2->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar2->_padding_ + 8))(pFVar2);
    }
    pFVar8 = pFVar2->Data;
  }
  local_1c8.Data = pFVar8;
  local_1c8.Size = (ulong64)pFVar16;
  EVar6 = ValidateCompactBinary(&local_1c8,All,HasFieldType);
  if (EVar6 == None) {
    pFVar10 = FAutomationTestFramework::Get();
    local_1c8.Size = CONCAT44(local_1c8.Size._4_4_,4);
    local_1b8 = (undefined1  [8])(auVar1._8_8_ - (ulonglong)auVar1._4_4_);
    uStack_1b0 = CONCAT44(uStack_1b0._4_4_,auVar1._4_4_);
    local_1c8.Data = "Null";
    FAutomationTestBase::TestEqual
              (pFVar10->CurrentTest,L"FCbWriter(Null, Name).GetName()",
               (TStringView<char8_t> *)local_1b8,(TStringView<char8_t> *)&local_1c8);
    if (-1 < (char)auVar1[0]) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar3 = pFVar10->CurrentTest;
      pcVar14 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString((FString *)local_1b8,L"FCbWriter(Null, Name).HasName()");
      (*pcVar14)(pFVar3,local_1b8,0);
      if (local_1b8 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_1b8);
      }
    }
    if ((auVar1[0] & 0x1f) != 1) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar3 = pFVar10->CurrentTest;
      pcVar14 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString((FString *)local_1b8,L"FCbWriter(Null, Name).IsNull()");
      (*pcVar14)(pFVar3,local_1b8,0);
      auVar12 = local_1b8;
      goto LAB_141d151fa;
    }
  }
  else {
    pcVar14 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_1c8,L"%s: The two values are not equal.");
    (*pcVar14)(this,&local_1c8,0);
    auVar12 = (undefined1  [8])local_1c8.Data;
LAB_141d151fa:
    if (auVar12 != (undefined1  [8])0x0) {
      FMemory::Free((void *)auVar12);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_180);
  FCbWriter::Reset(local_168);
  FCbWriter::BeginArray(local_168);
  FCbWriter::AddNull(local_168);
  FCbWriter::AddNull(local_168);
  FCbWriter::AddNull(local_168);
  FCbWriter::EndArray(local_168);
  FCbWriter::BeginObject(local_168);
  uStack_1b0._0_4_ = 2;
  local_1b8 = (undefined1  [8])0x1507908e0;
  pFVar9 = FCbWriter::SetName(local_168,(TStringView<char8_t> *)local_1b8);
  FCbWriter::AddNull(pFVar9);
  uStack_1b0._0_4_ = 2;
  local_1b8 = (undefined1  [8])0x1507908e4;
  pFVar9 = FCbWriter::SetName(local_168,(TStringView<char8_t> *)local_1b8);
  FCbWriter::AddNull(pFVar9);
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,2);
  local_1b8 = (undefined1  [8])0x1507908e8;
  pFVar9 = FCbWriter::SetName(local_168,(TStringView<char8_t> *)local_1b8);
  FCbWriter::AddNull(pFVar9);
  FCbWriter::EndObject(local_168);
  FCbWriter::Save(local_168,(FCbFieldIterator *)local_190);
  pFVar10 = FAutomationTestFramework::Get();
  TVar5.Owner = local_180[0].Owner;
  pFVar3 = pFVar10->CurrentTest;
  pFVar16 = pFVar15;
  if (local_180[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_180[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_180[0].Owner)->_padding_ + 8))(local_180[0].Owner);
    }
    pFVar16 = (FScriptContainerElement *)(TVar5.Owner)->Size;
  }
  TVar5.Owner = local_180[0].Owner;
  if (local_180[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_180[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_180[0].Owner)->_padding_ + 8))(local_180[0].Owner);
    }
    pFVar15 = (TVar5.Owner)->Data;
  }
  local_1b8 = (undefined1  [8])pFVar15;
  uStack_1b0 = (ulong64)pFVar16;
  EVar6 = ValidateCompactBinaryRange((TMemoryView<void_const_> *)local_1b8,All);
  if (EVar6 != None) {
    pcVar14 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)local_1b8,L"%s: The two values are not equal.");
    (*pcVar14)(pFVar3,local_1b8,0);
    if (local_1b8 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_1b8);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_180);
  FCbWriter::Reset(local_168);
  lVar13 = 3;
  do {
    FCbWriter::AddNull(local_168);
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  uStack_1b0 = 3;
  local_198 = 0;
  local_196 = 0;
  local_1b8 = (undefined1  [8])&local_198;
  FCbWriter::Save(local_168,(FCbFieldViewIterator *)local_190,(TMemoryView<void> *)local_1b8);
  local_1b8 = (undefined1  [8])&local_198;
  uStack_1b0 = 3;
  EVar6 = ValidateCompactBinaryRange((TMemoryView<void_const_> *)local_1b8,All);
  if (EVar6 == None) {
    if ((local_190[0] & 0x1f) != 1) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar3 = pFVar10->CurrentTest;
      pcVar14 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString((FString *)&local_1c8,L"FCbWriter(Null, Memory) IsNull");
      (*pcVar14)(pFVar3,&local_1c8,0);
      if (local_1c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data);
      }
    }
    TCbFieldIterator<FCbFieldView>::operator++((TCbFieldIterator<FCbFieldView> *)local_190);
    if ((local_190[0] & 0x1f) != 1) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar3 = pFVar10->CurrentTest;
      pcVar14 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString((FString *)&local_1c8,L"FCbWriter(Null, Memory) IsNull");
      (*pcVar14)(pFVar3,&local_1c8,0);
      if (local_1c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data);
      }
    }
    TCbFieldIterator<FCbFieldView>::operator++((TCbFieldIterator<FCbFieldView> *)local_190);
    if ((local_190[0] & 0x1f) != 1) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar3 = pFVar10->CurrentTest;
      pcVar14 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString((FString *)&local_1c8,L"FCbWriter(Null, Memory) IsNull");
      (*pcVar14)(pFVar3,&local_1c8,0);
      if (local_1c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data);
      }
    }
    TCbFieldIterator<FCbFieldView>::operator++((TCbFieldIterator<FCbFieldView> *)local_190);
    if ((local_190[0] & 0x1f) == 0) goto LAB_141d155a3;
    pFVar10 = FAutomationTestFramework::Get();
    this = (FCbWriterNullTest *)pFVar10->CurrentTest;
    pcVar14 = *(code **)(this->_padding_ + 0x28);
    ::FString::FString((FString *)local_1b8,L"FCbWriter(Null, Memory) HasValue");
  }
  else {
    pcVar14 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)local_1b8,L"%s: The two values are not equal.");
  }
  (*pcVar14)(this,local_1b8,0);
  if (local_1b8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_1b8);
  }
LAB_141d155a3:
  FCbWriter::~FCbWriter(local_168);
  return;
}

