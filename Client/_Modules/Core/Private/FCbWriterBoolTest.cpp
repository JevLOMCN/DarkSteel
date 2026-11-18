// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cc5cd0

EAutomationTestFlags __thiscall FCbWriterBoolTest::GetTestFlags(FCbWriterBoolTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cc5ce0

bool __thiscall FCbWriterBoolTest::IsStressTest(FCbWriterBoolTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cc5cf0

uint __thiscall FCbWriterBoolTest::GetRequiredDeviceNum(FCbWriterBoolTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cc5d00

FString * __thiscall
FCbWriterBoolTest::GetTestSourceFileName(FCbWriterBoolTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\CompactBinaryWriterTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cc5d30

int __thiscall FCbWriterBoolTest::GetTestSourceFileLine(FCbWriterBoolTest *this)

{
  return 0x1f0;
}

// GetTests @ 141cc5d40

/* WARNING: Removing unreachable block (ram,0x000141cc5ebe) */

void __thiscall
FCbWriterBoolTest::GetTests
          (FCbWriterBoolTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cc5ee0

bool __thiscall FCbWriterBoolTest::RunTest(FCbWriterBoolTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cc5f10

FString * __thiscall
FCbWriterBoolTest::GetBeautifiedTestName(FCbWriterBoolTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FCbWriterBoolTest @ 141ce4b40

FCbWriterBoolTest * __thiscall
FCbWriterBoolTest::FCbWriterBoolTest(FCbWriterBoolTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FCbWriterBoolTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::CbWriter::Bool");
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

// TestBody @ 141d11c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCbWriterBoolTest::TestBody(FCbWriterBoolTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  longlong lVar2;
  bool bVar3;
  ECbValidateError EVar4;
  FCbWriter *pFVar5;
  FAutomationTestFramework *pFVar6;
  code *pcVar7;
  longlong *plVar8;
  void *pvVar9;
  void *pvVar10;
  undefined1 auStack_1a8 [32];
  TMemoryView<void_const_> local_188;
  TCbFieldIterator<FCbField> local_178;
  FCbWriter local_158 [7];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  FCbWriter::FCbWriter(local_158,0x100);
  FCbWriter::AddBool(local_158,true);
  FCbWriter::AddBool(local_158,false);
  FCbWriter::Save(local_158,(FCbFieldIterator *)&local_178);
  lVar2 = local_178._padding_;
  pvVar9 = (void *)0x0;
  pvVar10 = pvVar9;
  if ((longlong *)local_178._padding_ != (longlong *)0x0) {
    if (((ulonglong)*(longlong *)(local_178._padding_ + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_178._padding_ + 8))(local_178._padding_);
    }
    pvVar10 = *(void **)(lVar2 + 0x10);
  }
  lVar2 = local_178._padding_;
  local_188.Data = pvVar9;
  if ((longlong *)local_178._padding_ != (longlong *)0x0) {
    if (((ulonglong)*(longlong *)(local_178._padding_ + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_178._padding_ + 8))(local_178._padding_);
    }
    local_188.Data = *(void **)(lVar2 + 8);
  }
  local_188.Size = (ulong64)pvVar10;
  EVar4 = ValidateCompactBinaryRange(&local_188,All);
  if (EVar4 == None) {
    bVar3 = FCbFieldView::AsBool((FCbFieldView *)&local_178,false);
    if (!bVar3) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar7 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)&local_188,L"FCbWriter(Bool).AsBool()");
      (*pcVar7)(pFVar1,&local_188,0);
      if (local_188.Data != (void *)0x0) {
        FMemory::Free(local_188.Data);
      }
    }
    if (local_178._padding_._1_1_ != '\0') {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar7 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)&local_188,L"FCbWriter(Bool) Error");
      (*pcVar7)(pFVar1,&local_188,0);
      if (local_188.Data != (void *)0x0) {
        FMemory::Free(local_188.Data);
      }
    }
    TCbFieldIterator<FCbField>::operator++(&local_178);
    bVar3 = FCbFieldView::AsBool((FCbFieldView *)&local_178,false);
    if (bVar3) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar7 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)&local_188,L"FCbWriter(Bool).AsBool()");
      (*pcVar7)(pFVar1,&local_188,0);
      if (local_188.Data != (void *)0x0) {
        FMemory::Free(local_188.Data);
      }
    }
    if (local_178._padding_._1_1_ == '\0') goto LAB_141d11ec7;
    pFVar6 = FAutomationTestFramework::Get();
    this = (FCbWriterBoolTest *)pFVar6->CurrentTest;
    pcVar7 = *(code **)(this->_padding_ + 0x28);
    ::FString::FString((FString *)&local_188,L"FCbWriter(Bool) Error");
  }
  else {
    pcVar7 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_188,L"%s: The two values are not equal.");
  }
  (*pcVar7)(this,&local_188,0);
  if (local_188.Data != (void *)0x0) {
    FMemory::Free(local_188.Data);
  }
LAB_141d11ec7:
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_178._padding_);
  FCbWriter::Reset(local_158);
  FCbWriter::BeginArray(local_158);
  FCbWriter::AddBool(local_158,false);
  FCbWriter::AddBool(local_158,false);
  FCbWriter::AddBool(local_158,false);
  FCbWriter::EndArray(local_158);
  FCbWriter::BeginObject(local_158);
  local_188.Size._0_4_ = 2;
  local_188.Data = "B1";
  pFVar5 = FCbWriter::SetName(local_158,(TStringView<char8_t> *)&local_188);
  FCbWriter::AddBool(pFVar5,false);
  local_188.Size._0_4_ = 2;
  local_188.Data = "B2";
  pFVar5 = FCbWriter::SetName(local_158,(TStringView<char8_t> *)&local_188);
  FCbWriter::AddBool(pFVar5,false);
  local_188.Size = CONCAT44(local_188.Size._4_4_,2);
  local_188.Data = "B3";
  pFVar5 = FCbWriter::SetName(local_158,(TStringView<char8_t> *)&local_188);
  FCbWriter::AddBool(pFVar5,false);
  FCbWriter::EndObject(local_158);
  FCbWriter::Save(local_158,(FCbFieldIterator *)&local_178);
  pFVar6 = FAutomationTestFramework::Get();
  lVar2 = local_178._padding_;
  pFVar1 = pFVar6->CurrentTest;
  plVar8 = (longlong *)local_178._padding_;
  pvVar10 = pvVar9;
  if ((longlong *)local_178._padding_ != (longlong *)0x0) {
    if (((ulonglong)*(longlong *)(local_178._padding_ + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_178._padding_ + 8))(local_178._padding_);
    }
    plVar8 = (longlong *)local_178._padding_;
    pvVar10 = *(void **)(lVar2 + 0x10);
  }
  if (plVar8 != (longlong *)0x0) {
    if (((ulonglong)plVar8[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
    pvVar9 = (void *)plVar8[1];
  }
  local_188.Data = pvVar9;
  local_188.Size = (ulong64)pvVar10;
  EVar4 = ValidateCompactBinaryRange(&local_188,All);
  if (EVar4 != None) {
    pcVar7 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_188,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar1,&local_188,0);
    if (local_188.Data != (void *)0x0) {
      FMemory::Free(local_188.Data);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_178._padding_);
  FCbWriter::~FCbWriter(local_158);
  return;
}

