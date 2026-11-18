// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cc00a0

EAutomationTestFlags __thiscall FCbWriterObjectTest::GetTestFlags(FCbWriterObjectTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cc00b0

bool __thiscall FCbWriterObjectTest::IsStressTest(FCbWriterObjectTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cc00c0

uint __thiscall FCbWriterObjectTest::GetRequiredDeviceNum(FCbWriterObjectTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cc00d0

FString * __thiscall
FCbWriterObjectTest::GetTestSourceFileName
          (FCbWriterObjectTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\CompactBinaryWriterTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cc0100

int __thiscall FCbWriterObjectTest::GetTestSourceFileLine(FCbWriterObjectTest *this)

{
  return 0x13;
}

// GetTests @ 141cc0110

/* WARNING: Removing unreachable block (ram,0x000141cc028e) */

void __thiscall
FCbWriterObjectTest::GetTests
          (FCbWriterObjectTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cc02b0

bool __thiscall FCbWriterObjectTest::RunTest(FCbWriterObjectTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cc02e0

FString * __thiscall
FCbWriterObjectTest::GetBeautifiedTestName
          (FCbWriterObjectTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FCbWriterObjectTest @ 141ce5f30

FCbWriterObjectTest * __thiscall
FCbWriterObjectTest::FCbWriterObjectTest(FCbWriterObjectTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FCbWriterObjectTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::CbWriter::Object");
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

// TestBody @ 141d15be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCbWriterObjectTest::TestBody(FCbWriterObjectTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar2;
  ECbValidateError EVar3;
  FCbFieldIterator *pFVar4;
  FCbFieldView *pFVar5;
  FCbFieldViewIterator *pFVar6;
  FCbWriter *pFVar7;
  FScriptContainerElement *pFVar8;
  FAutomationTestFramework *pFVar9;
  FCbWriterObjectTest *pFVar10;
  code *pcVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStack_1f8 [32];
  FCbFieldView local_1d8;
  undefined1 local_1c8 [12];
  int iStack_1bc;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1b8 [2];
  undefined1 local_1a8 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_198 [2];
  undefined1 local_188 [12];
  int iStack_17c;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_178 [2];
  FCbWriter local_168 [7];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  FCbWriter::FCbWriter(local_168,0x100);
  FCbWriter::Reset(local_168);
  FCbWriter::BeginObject(local_168);
  FCbWriter::EndObject(local_168);
  pFVar4 = FCbWriter::Save(local_168,(FCbFieldIterator *)local_1a8);
  pFVar12 = (FScriptContainerElement *)0x0;
  local_1c8._0_8_ = *(undefined8 *)pFVar4;
  unique0x10000979 = *(FScriptContainerElement **)&pFVar4->field_0x8;
  local_1b8[0].Owner = *(FBufferOwner **)&pFVar4->field_0x10;
  *(undefined8 *)&pFVar4->field_0x10 = 0;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_198);
  TVar2.Owner = local_1b8[0].Owner;
  pFVar13 = pFVar12;
  if (local_1b8[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_1b8[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_1b8[0].Owner)->_padding_ + 8))(local_1b8[0].Owner);
    }
    pFVar13 = (FScriptContainerElement *)(TVar2.Owner)->Size;
  }
  TVar2.Owner = local_1b8[0].Owner;
  local_1d8._0_8_ = pFVar12;
  if (local_1b8[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_1b8[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_1b8[0].Owner)->_padding_ + 8))(local_1b8[0].Owner);
    }
    local_1d8._0_8_ = (TVar2.Owner)->Data;
  }
  local_1d8.Value = pFVar13;
  EVar3 = ValidateCompactBinary((TMemoryView<void_const_> *)&local_1d8,All,HasFieldType);
  if (EVar3 == None) {
    if ((local_1c8[0] & CustomById) != Object) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar1 = pFVar9->CurrentTest;
      pcVar11 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)&local_1d8,L"FCbWriter(Object, Empty).IsObject()");
      (*pcVar11)(pFVar1,&local_1d8,0);
      if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1d8._0_8_);
      }
    }
    pFVar5 = (FCbFieldView *)
             FCbFieldView::AsObjectView((FCbFieldView *)local_1c8,(FCbObjectView *)local_188);
    pFVar6 = FCbFieldView::CreateViewIterator(pFVar5,(FCbFieldViewIterator *)local_1a8);
    if ((*(byte *)pFVar6 & 0x1f) != 0) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar10 = (FCbWriterObjectTest *)pFVar9->CurrentTest;
      pcVar11 = *(code **)(pFVar10->_padding_ + 0x28);
      ::FString::FString((FString *)&local_1d8,L"FCbWriter(Object, Empty).AsObjectView()");
      goto LAB_141d15d99;
    }
  }
  else {
    pcVar11 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_1d8,L"%s: The two values are not equal.");
    pFVar10 = this;
LAB_141d15d99:
    (*pcVar11)(pFVar10,&local_1d8,0);
    if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1d8._0_8_);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_1b8);
  FCbWriter::Reset(local_168);
  local_1d8.Value = (void *)CONCAT44(local_1d8.Value._4_4_,6);
  local_1d8._0_8_ = "Object";
  local_1c8._0_8_ = "Object";
  stack0xfffffffffffffe40 = local_1d8.Value;
  FCbWriter::SetName(local_168,(TStringView<char8_t> *)local_1c8);
  FCbWriter::BeginObject(local_168);
  FCbWriter::EndObject(local_168);
  pFVar4 = FCbWriter::Save(local_168,(FCbFieldIterator *)local_188);
  local_1a8._0_8_ = *(undefined8 *)pFVar4;
  local_1a8._8_8_ = *(undefined8 *)&pFVar4->field_0x8;
  local_198[0].Owner = *(FBufferOwner **)&pFVar4->field_0x10;
  *(undefined8 *)&pFVar4->field_0x10 = 0;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_178);
  TVar2.Owner = local_198[0].Owner;
  pFVar13 = pFVar12;
  if (local_198[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_198[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_198[0].Owner)->_padding_ + 8))(local_198[0].Owner);
    }
    pFVar13 = (FScriptContainerElement *)(TVar2.Owner)->Size;
  }
  TVar2.Owner = local_198[0].Owner;
  pFVar8 = pFVar12;
  if (local_198[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_198[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_198[0].Owner)->_padding_ + 8))(local_198[0].Owner);
    }
    pFVar8 = (TVar2.Owner)->Data;
  }
  local_1d8._0_8_ = pFVar8;
  local_1d8.Value = pFVar13;
  EVar3 = ValidateCompactBinary((TMemoryView<void_const_> *)&local_1d8,All,HasFieldType);
  if (EVar3 == None) {
    if ((local_1a8[0] & CustomById) != Object) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar1 = pFVar9->CurrentTest;
      pcVar11 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)&local_1d8,L"FCbWriter(Object, Empty, Name).IsObject()");
      (*pcVar11)(pFVar1,&local_1d8,0);
      if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1d8._0_8_);
      }
    }
    pFVar5 = (FCbFieldView *)
             FCbFieldView::AsObjectView((FCbFieldView *)local_1a8,(FCbObjectView *)local_188);
    pFVar6 = FCbFieldView::CreateViewIterator(pFVar5,(FCbFieldViewIterator *)local_1c8);
    if ((*(byte *)pFVar6 & 0x1f) != 0) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar10 = (FCbWriterObjectTest *)pFVar9->CurrentTest;
      pcVar11 = *(code **)(pFVar10->_padding_ + 0x28);
      ::FString::FString((FString *)&local_1d8,L"FCbWriter(Object, Empty, Name).AsObjectView()");
      goto LAB_141d15f5c;
    }
  }
  else {
    pcVar11 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_1d8,L"%s: The two values are not equal.");
    pFVar10 = this;
LAB_141d15f5c:
    (*pcVar11)(pFVar10,&local_1d8,0);
    if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1d8._0_8_);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_198);
  FCbWriter::Reset(local_168);
  FCbWriter::BeginObject(local_168);
  local_1d8.Value._0_4_ = 7;
  local_1d8._0_8_ = "Integer";
  local_1c8._0_8_ = "Integer";
  local_1c8._8_4_ = 7;
  iStack_1bc = local_1d8.Value._4_4_;
  pFVar7 = FCbWriter::SetName(local_168,(TStringView<char8_t> *)local_1c8);
  FCbWriter::AddInteger(pFVar7,0);
  local_1d8.Value = (void *)CONCAT44(local_1d8.Value._4_4_,5);
  local_1d8._0_8_ = "Float";
  local_1c8._0_8_ = "Float";
  stack0xfffffffffffffe40 = local_1d8.Value;
  pFVar7 = FCbWriter::SetName(local_168,(TStringView<char8_t> *)local_1c8);
  FCbWriter::AddFloat(pFVar7,0.0);
  FCbWriter::EndObject(local_168);
  pFVar4 = FCbWriter::Save(local_168,(FCbFieldIterator *)local_188);
  local_1a8._0_8_ = *(undefined8 *)pFVar4;
  local_1a8._8_8_ = *(undefined8 *)&pFVar4->field_0x8;
  local_198[0].Owner = *(FBufferOwner **)&pFVar4->field_0x10;
  *(undefined8 *)&pFVar4->field_0x10 = 0;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_178);
  TVar2.Owner = local_198[0].Owner;
  pFVar13 = pFVar12;
  if (local_198[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_198[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_198[0].Owner)->_padding_ + 8))(local_198[0].Owner);
    }
    pFVar13 = (FScriptContainerElement *)(TVar2.Owner)->Size;
  }
  TVar2.Owner = local_198[0].Owner;
  pFVar8 = pFVar12;
  if (local_198[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_198[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_198[0].Owner)->_padding_ + 8))(local_198[0].Owner);
    }
    pFVar8 = (TVar2.Owner)->Data;
  }
  local_1d8._0_8_ = pFVar8;
  local_1d8.Value = pFVar13;
  EVar3 = ValidateCompactBinary((TMemoryView<void_const_> *)&local_1d8,All,HasFieldType);
  if (EVar3 == None) {
    if ((local_1a8[0] & CustomById) != Object) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar1 = pFVar9->CurrentTest;
      pcVar11 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)&local_1d8,L"FCbWriter(Object, Basic).IsObject()");
      (*pcVar11)(pFVar1,&local_1d8,0);
      if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1d8._0_8_);
      }
    }
    FCbFieldView::AsObjectView((FCbFieldView *)local_1a8,(FCbObjectView *)local_1c8);
    local_1d8.Value = (void *)CONCAT44(local_1d8.Value._4_4_,7);
    local_1d8._0_8_ = "Integer";
    FCbObjectView::FindView
              ((FCbObjectView *)local_1c8,(FCbFieldView *)local_188,
               (TStringView<char8_t> *)&local_1d8);
    if ((local_188[0] & CustomById) != IntegerPositive) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar1 = pFVar9->CurrentTest;
      pcVar11 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)&local_1d8,L"FCbWriter(Object, Basic).AsObjectView()[Integer]");
      (*pcVar11)(pFVar1,&local_1d8,0);
      if ((char *)local_1d8._0_8_ != (char *)0x0) {
        FMemory::Free((void *)local_1d8._0_8_);
      }
    }
    local_1d8._0_8_ = "Float";
    local_1d8.Value = (void *)CONCAT44(local_1d8.Value._4_4_,5);
    local_188._0_8_ = "Float";
    stack0xfffffffffffffe80 = local_1d8.Value;
    FCbObjectView::FindView((FCbObjectView *)local_1c8,&local_1d8,(TStringView<char8_t> *)local_188)
    ;
    if ((local_1d8.TypeWithFlags & (Hash|BoolFalse)) != IntegerPositive) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar10 = (FCbWriterObjectTest *)pFVar9->CurrentTest;
      pcVar11 = *(code **)(pFVar10->_padding_ + 0x28);
      ::FString::FString((FString *)&local_1d8,L"FCbWriter(Object, Basic).AsObjectView()[Float]");
      goto LAB_141d161fd;
    }
  }
  else {
    pcVar11 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_1d8,L"%s: The two values are not equal.");
    pFVar10 = this;
LAB_141d161fd:
    (*pcVar11)(pFVar10,&local_1d8,0);
    if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1d8._0_8_);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_198);
  FCbWriter::Reset(local_168);
  FCbWriter::BeginObject(local_168);
  local_1c8._8_4_ = 6;
  local_1c8._0_8_ = "Field1";
  local_188._0_8_ = "Field1";
  local_188._8_4_ = 6;
  iStack_17c = iStack_1bc;
  pFVar7 = FCbWriter::SetName(local_168,(TStringView<char8_t> *)local_188);
  FCbWriter::AddInteger(pFVar7,0);
  stack0xfffffffffffffe40 = (FScriptContainerElement *)CONCAT44(iStack_1bc,6);
  local_1c8._0_8_ = "Field2";
  local_188._0_8_ = "Field2";
  stack0xfffffffffffffe80 = stack0xfffffffffffffe40;
  pFVar7 = FCbWriter::SetName(local_168,(TStringView<char8_t> *)local_188);
  FCbWriter::AddInteger(pFVar7,1);
  FCbWriter::EndObject(local_168);
  pFVar4 = FCbWriter::Save(local_168,(FCbFieldIterator *)local_188);
  local_1a8._0_8_ = *(undefined8 *)pFVar4;
  local_1a8._8_8_ = *(undefined8 *)&pFVar4->field_0x8;
  local_198[0].Owner = *(FBufferOwner **)&pFVar4->field_0x10;
  *(undefined8 *)&pFVar4->field_0x10 = 0;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_178);
  TVar2.Owner = local_198[0].Owner;
  pFVar13 = pFVar12;
  if (local_198[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_198[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_198[0].Owner)->_padding_ + 8))(local_198[0].Owner);
    }
    pFVar13 = (FScriptContainerElement *)(TVar2.Owner)->Size;
  }
  TVar2.Owner = local_198[0].Owner;
  if (local_198[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_198[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_198[0].Owner)->_padding_ + 8))(local_198[0].Owner);
    }
    pFVar12 = (TVar2.Owner)->Data;
  }
  local_1c8._0_8_ = pFVar12;
  unique0x10001164 = pFVar13;
  EVar3 = ValidateCompactBinary((TMemoryView<void_const_> *)local_1c8,All,HasFieldType);
  if (EVar3 == None) {
    if ((local_1a8[0] & CustomById) != Object) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar1 = pFVar9->CurrentTest;
      pcVar11 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)local_1c8,L"FCbWriter(Object, Uniform).IsObject()");
      (*pcVar11)(pFVar1,local_1c8,0);
      if ((FScriptContainerElement *)local_1c8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1c8._0_8_);
      }
    }
    FCbFieldView::AsObjectView((FCbFieldView *)local_1a8,(FCbObjectView *)&local_1d8);
    local_1c8._0_8_ = "Field1";
    stack0xfffffffffffffe40 = (FScriptContainerElement *)CONCAT44(iStack_1bc,6);
    local_188._0_8_ = "Field1";
    stack0xfffffffffffffe80 = stack0xfffffffffffffe40;
    FCbObjectView::FindView
              ((FCbObjectView *)&local_1d8,(FCbFieldView *)local_1c8,
               (TStringView<char8_t> *)local_188);
    if ((local_1c8[0] & CustomById) != IntegerPositive) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar1 = pFVar9->CurrentTest;
      pcVar11 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)local_1c8,L"FCbWriter(Object, Uniform).AsObjectView()[Field1]");
      (*pcVar11)(pFVar1,local_1c8,0);
      if ((FScriptContainerElement *)local_1c8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1c8._0_8_);
      }
    }
    local_1c8._0_8_ = "Field2";
    stack0xfffffffffffffe40 = (FScriptContainerElement *)CONCAT44(iStack_1bc,6);
    local_188._0_8_ = "Field2";
    stack0xfffffffffffffe80 = stack0xfffffffffffffe40;
    FCbObjectView::FindView
              ((FCbObjectView *)&local_1d8,(FCbFieldView *)local_1c8,
               (TStringView<char8_t> *)local_188);
    if ((local_1c8[0] & CustomById) == IntegerPositive) goto LAB_141d164b4;
    pFVar9 = FAutomationTestFramework::Get();
    this = (FCbWriterObjectTest *)pFVar9->CurrentTest;
    pcVar11 = *(code **)(this->_padding_ + 0x28);
    ::FString::FString((FString *)local_1c8,L"FCbWriter(Object, Uniform).AsObjectView()[Field2]");
  }
  else {
    pcVar11 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)local_1c8,L"%s: The two values are not equal.");
  }
  (*pcVar11)(this,local_1c8,0);
  if ((FScriptContainerElement *)local_1c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1c8._0_8_);
  }
LAB_141d164b4:
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_198);
  FCbWriter::~FCbWriter(local_168);
  return;
}

