// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cc0610

EAutomationTestFlags __thiscall FCbWriterArrayTest::GetTestFlags(FCbWriterArrayTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cc0620

bool __thiscall FCbWriterArrayTest::IsStressTest(FCbWriterArrayTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cc0630

uint __thiscall FCbWriterArrayTest::GetRequiredDeviceNum(FCbWriterArrayTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cc0640

FString * __thiscall
FCbWriterArrayTest::GetTestSourceFileName(FCbWriterArrayTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\CompactBinaryWriterTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cc0670

int __thiscall FCbWriterArrayTest::GetTestSourceFileLine(FCbWriterArrayTest *this)

{
  return 0x57;
}

// GetTests @ 141cc0680

/* WARNING: Removing unreachable block (ram,0x000141cc07fe) */

void __thiscall
FCbWriterArrayTest::GetTests
          (FCbWriterArrayTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cc0820

bool __thiscall FCbWriterArrayTest::RunTest(FCbWriterArrayTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cc0850

FString * __thiscall
FCbWriterArrayTest::GetBeautifiedTestName(FCbWriterArrayTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FCbWriterArrayTest @ 141ce45d0

FCbWriterArrayTest * __thiscall
FCbWriterArrayTest::FCbWriterArrayTest(FCbWriterArrayTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FCbWriterArrayTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::CbWriter::Array");
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

// TestBody @ 141d10be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCbWriterArrayTest::TestBody(FCbWriterArrayTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar2;
  ECbValidateError EVar3;
  FCbFieldIterator *pFVar4;
  FCbArrayView *pFVar5;
  ulong64 uVar6;
  void *pvVar7;
  FAutomationTestFramework *pFVar8;
  FCbFieldView *pFVar9;
  FCbWriterArrayTest *pFVar10;
  code *pcVar11;
  void *pvVar12;
  void *pvVar13;
  undefined1 auStack_1c8 [32];
  TMemoryView<void_const_> local_1a8;
  FCbFieldView local_198;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_188;
  undefined1 local_180 [40];
  FCbWriter local_158 [7];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  FCbWriter::FCbWriter(local_158,0x100);
  FCbWriter::Reset(local_158);
  FCbWriter::BeginArray(local_158);
  FCbWriter::EndArray(local_158);
  pFVar4 = FCbWriter::Save(local_158,(FCbFieldIterator *)local_180);
  pvVar12 = (void *)0x0;
  local_198.TypeWithFlags = pFVar4->field_0x0;
  local_198.Error = pFVar4->field_0x1;
  local_198._2_2_ = *(undefined2 *)&pFVar4->field_0x2;
  local_198.NameLen = *(uint *)&pFVar4->field_0x4;
  local_198.Value = *(void **)&pFVar4->field_0x8;
  local_188.Owner = *(FBufferOwner **)&pFVar4->field_0x10;
  *(undefined8 *)&pFVar4->field_0x10 = 0;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_180 + 0x10));
  TVar2.Owner = local_188.Owner;
  pvVar13 = pvVar12;
  if (local_188.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_188.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_188.Owner)->_padding_ + 8))(local_188.Owner);
    }
    pvVar13 = (void *)(TVar2.Owner)->Size;
  }
  TVar2.Owner = local_188.Owner;
  local_1a8.Data = pvVar12;
  if (local_188.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_188.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_188.Owner)->_padding_ + 8))(local_188.Owner);
    }
    local_1a8.Data = (TVar2.Owner)->Data;
  }
  local_1a8.Size = (ulong64)pvVar13;
  EVar3 = ValidateCompactBinary(&local_1a8,All,HasFieldType);
  if (EVar3 == None) {
    if ((local_198.TypeWithFlags & CustomById) != Array) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar1 = pFVar8->CurrentTest;
      pcVar11 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)&local_1a8,L"FCbWriter(Array, Empty).IsArray()");
      (*pcVar11)(pFVar1,&local_1a8,0);
      if (local_1a8.Data != (void *)0x0) {
        FMemory::Free(local_1a8.Data);
      }
    }
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pFVar5 = FCbFieldView::AsArrayView(&local_198,(FCbArrayView *)&local_1a8);
    uVar6 = FCbArrayView::Num(pFVar5);
    FAutomationTestBase::TestEqual(pFVar1,L"FCbWriter(Array, Empty).AsArrayView()",uVar6,0);
  }
  else {
    pcVar11 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_1a8,L"%s: The two values are not equal.");
    (*pcVar11)(this,&local_1a8,0);
    if (local_1a8.Data != (void *)0x0) {
      FMemory::Free(local_1a8.Data);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_188);
  FCbWriter::Reset(local_158);
  local_1a8.Size = CONCAT44(local_1a8.Size._4_4_,5);
  local_1a8.Data = "Array";
  FCbWriter::SetName(local_158,(TStringView<char8_t> *)&local_1a8);
  FCbWriter::BeginArray(local_158);
  FCbWriter::EndArray(local_158);
  pFVar4 = FCbWriter::Save(local_158,(FCbFieldIterator *)local_180);
  local_198.TypeWithFlags = pFVar4->field_0x0;
  local_198.Error = pFVar4->field_0x1;
  local_198._2_2_ = *(undefined2 *)&pFVar4->field_0x2;
  local_198.NameLen = *(uint *)&pFVar4->field_0x4;
  local_198.Value = *(void **)&pFVar4->field_0x8;
  local_188.Owner = *(FBufferOwner **)&pFVar4->field_0x10;
  *(undefined8 *)&pFVar4->field_0x10 = 0;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_180 + 0x10));
  TVar2.Owner = local_188.Owner;
  pvVar13 = pvVar12;
  if (local_188.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_188.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_188.Owner)->_padding_ + 8))(local_188.Owner);
    }
    pvVar13 = (void *)(TVar2.Owner)->Size;
  }
  TVar2.Owner = local_188.Owner;
  pvVar7 = pvVar12;
  if (local_188.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_188.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_188.Owner)->_padding_ + 8))(local_188.Owner);
    }
    pvVar7 = (TVar2.Owner)->Data;
  }
  local_1a8.Data = pvVar7;
  local_1a8.Size = (ulong64)pvVar13;
  EVar3 = ValidateCompactBinary(&local_1a8,All,HasFieldType);
  if (EVar3 == None) {
    if ((local_198.TypeWithFlags & CustomById) != Array) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar1 = pFVar8->CurrentTest;
      pcVar11 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)&local_1a8,L"FCbWriter(Array, Empty, Name).IsArray()");
      (*pcVar11)(pFVar1,&local_1a8,0);
      if (local_1a8.Data != (void *)0x0) {
        FMemory::Free(local_1a8.Data);
      }
    }
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pFVar5 = FCbFieldView::AsArrayView(&local_198,(FCbArrayView *)&local_1a8);
    uVar6 = FCbArrayView::Num(pFVar5);
    FAutomationTestBase::TestEqual(pFVar1,L"FCbWriter(Array, Empty, Name).AsArrayView()",uVar6,0);
  }
  else {
    pcVar11 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_1a8,L"%s: The two values are not equal.");
    (*pcVar11)(this,&local_1a8,0);
    if (local_1a8.Data != (void *)0x0) {
      FMemory::Free(local_1a8.Data);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_188);
  FCbWriter::Reset(local_158);
  FCbWriter::BeginArray(local_158);
  FCbWriter::AddInteger(local_158,0);
  FCbWriter::AddFloat(local_158,0.0);
  FCbWriter::EndArray(local_158);
  pFVar4 = FCbWriter::Save(local_158,(FCbFieldIterator *)local_180);
  local_198.TypeWithFlags = pFVar4->field_0x0;
  local_198.Error = pFVar4->field_0x1;
  local_198._2_2_ = *(undefined2 *)&pFVar4->field_0x2;
  local_198.NameLen = *(uint *)&pFVar4->field_0x4;
  local_198.Value = *(void **)&pFVar4->field_0x8;
  local_188.Owner = *(FBufferOwner **)&pFVar4->field_0x10;
  *(undefined8 *)&pFVar4->field_0x10 = 0;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_180 + 0x10));
  TVar2.Owner = local_188.Owner;
  pvVar13 = pvVar12;
  if (local_188.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_188.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_188.Owner)->_padding_ + 8))(local_188.Owner);
    }
    pvVar13 = (void *)(TVar2.Owner)->Size;
  }
  TVar2.Owner = local_188.Owner;
  pvVar7 = pvVar12;
  if (local_188.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_188.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_188.Owner)->_padding_ + 8))(local_188.Owner);
    }
    pvVar7 = (TVar2.Owner)->Data;
  }
  local_1a8.Data = pvVar7;
  local_1a8.Size = (ulong64)pvVar13;
  EVar3 = ValidateCompactBinary(&local_1a8,All,HasFieldType);
  if (EVar3 == None) {
    if ((local_198.TypeWithFlags & CustomById) != Array) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar1 = pFVar8->CurrentTest;
      pcVar11 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)&local_1a8,L"FCbWriter(Array, Basic).IsArray()");
      (*pcVar11)(pFVar1,&local_1a8,0);
      if (local_1a8.Data != (void *)0x0) {
        FMemory::Free(local_1a8.Data);
      }
    }
    pFVar9 = (FCbFieldView *)FCbFieldView::AsArrayView(&local_198,(FCbArrayView *)&local_1a8);
    FCbFieldView::CreateViewIterator(pFVar9,(FCbFieldViewIterator *)local_180);
    if ((local_180[0] & 0x1e) != 8) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar1 = pFVar8->CurrentTest;
      pcVar11 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)&local_1a8,L"FCbWriter(Array, Basic).AsArrayView()[Integer]");
      (*pcVar11)(pFVar1,&local_1a8,0);
      if (local_1a8.Data != (void *)0x0) {
        FMemory::Free(local_1a8.Data);
      }
    }
    TCbFieldIterator<FCbFieldView>::operator++((TCbFieldIterator<FCbFieldView> *)local_180);
    if ((local_180[0] & 0x1c) != 8) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar1 = pFVar8->CurrentTest;
      pcVar11 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)&local_1a8,L"FCbWriter(Array, Basic).AsArrayView()[Float]");
      (*pcVar11)(pFVar1,&local_1a8,0);
      if (local_1a8.Data != (void *)0x0) {
        FMemory::Free(local_1a8.Data);
      }
    }
    TCbFieldIterator<FCbFieldView>::operator++((TCbFieldIterator<FCbFieldView> *)local_180);
    if ((local_180[0] & 0x1f) != 0) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar10 = (FCbWriterArrayTest *)pFVar8->CurrentTest;
      pcVar11 = *(code **)(pFVar10->_padding_ + 0x28);
      ::FString::FString((FString *)&local_1a8,L"FCbWriter(Array, Basic).AsArrayView()[End]");
      goto LAB_141d111ab;
    }
  }
  else {
    pcVar11 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_1a8,L"%s: The two values are not equal.");
    pFVar10 = this;
LAB_141d111ab:
    (*pcVar11)(pFVar10,&local_1a8,0);
    if (local_1a8.Data != (void *)0x0) {
      FMemory::Free(local_1a8.Data);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_188);
  FCbWriter::Reset(local_158);
  FCbWriter::BeginArray(local_158);
  FCbWriter::AddInteger(local_158,0);
  FCbWriter::AddInteger(local_158,1);
  FCbWriter::EndArray(local_158);
  pFVar4 = FCbWriter::Save(local_158,(FCbFieldIterator *)local_180);
  local_198.TypeWithFlags = pFVar4->field_0x0;
  local_198.Error = pFVar4->field_0x1;
  local_198._2_2_ = *(undefined2 *)&pFVar4->field_0x2;
  local_198.NameLen = *(uint *)&pFVar4->field_0x4;
  local_198.Value = *(void **)&pFVar4->field_0x8;
  local_188.Owner = *(FBufferOwner **)&pFVar4->field_0x10;
  *(undefined8 *)&pFVar4->field_0x10 = 0;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_180 + 0x10));
  TVar2.Owner = local_188.Owner;
  pvVar13 = pvVar12;
  if (local_188.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_188.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_188.Owner)->_padding_ + 8))(local_188.Owner);
    }
    pvVar13 = (void *)(TVar2.Owner)->Size;
  }
  TVar2.Owner = local_188.Owner;
  if (local_188.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_188.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_188.Owner)->_padding_ + 8))(local_188.Owner);
    }
    pvVar12 = (TVar2.Owner)->Data;
  }
  local_1a8.Data = pvVar12;
  local_1a8.Size = (ulong64)pvVar13;
  EVar3 = ValidateCompactBinary(&local_1a8,All,HasFieldType);
  if (EVar3 == None) {
    if ((local_198.TypeWithFlags & CustomById) != Array) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar1 = pFVar8->CurrentTest;
      pcVar11 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)&local_1a8,L"FCbWriter(Array, Uniform).IsArray()");
      (*pcVar11)(pFVar1,&local_1a8,0);
      if (local_1a8.Data != (void *)0x0) {
        FMemory::Free(local_1a8.Data);
      }
    }
    pFVar9 = (FCbFieldView *)FCbFieldView::AsArrayView(&local_198,(FCbArrayView *)&local_1a8);
    FCbFieldView::CreateViewIterator(pFVar9,(FCbFieldViewIterator *)local_180);
    if ((local_180[0] & 0x1e) != 8) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar1 = pFVar8->CurrentTest;
      pcVar11 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)&local_1a8,L"FCbWriter(Array, Basic).AsArrayView()[Field1]");
      (*pcVar11)(pFVar1,&local_1a8,0);
      if (local_1a8.Data != (void *)0x0) {
        FMemory::Free(local_1a8.Data);
      }
    }
    TCbFieldIterator<FCbFieldView>::operator++((TCbFieldIterator<FCbFieldView> *)local_180);
    if ((local_180[0] & 0x1e) != 8) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar1 = pFVar8->CurrentTest;
      pcVar11 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)&local_1a8,L"FCbWriter(Array, Basic).AsArrayView()[Field2]");
      (*pcVar11)(pFVar1,&local_1a8,0);
      if (local_1a8.Data != (void *)0x0) {
        FMemory::Free(local_1a8.Data);
      }
    }
    TCbFieldIterator<FCbFieldView>::operator++((TCbFieldIterator<FCbFieldView> *)local_180);
    if ((local_180[0] & 0x1f) == 0) goto LAB_141d11421;
    pFVar8 = FAutomationTestFramework::Get();
    this = (FCbWriterArrayTest *)pFVar8->CurrentTest;
    pcVar11 = *(code **)(this->_padding_ + 0x28);
    ::FString::FString((FString *)&local_1a8,L"FCbWriter(Array, Basic).AsArrayView()[End]");
  }
  else {
    pcVar11 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_1a8,L"%s: The two values are not equal.");
  }
  (*pcVar11)(this,&local_1a8,0);
  if (local_1a8.Data != (void *)0x0) {
    FMemory::Free(local_1a8.Data);
  }
LAB_141d11421:
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_188);
  FCbWriter::~FCbWriter(local_158);
  return;
}

