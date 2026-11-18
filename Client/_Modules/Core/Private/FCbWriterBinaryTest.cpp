// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cc1ad0

EAutomationTestFlags __thiscall FCbWriterBinaryTest::GetTestFlags(FCbWriterBinaryTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cc1ae0

bool __thiscall FCbWriterBinaryTest::IsStressTest(FCbWriterBinaryTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cc1af0

uint __thiscall FCbWriterBinaryTest::GetRequiredDeviceNum(FCbWriterBinaryTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cc1b00

FString * __thiscall
FCbWriterBinaryTest::GetTestSourceFileName
          (FCbWriterBinaryTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\CompactBinaryWriterTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cc1b30

int __thiscall FCbWriterBinaryTest::GetTestSourceFileLine(FCbWriterBinaryTest *this)

{
  return 0xf2;
}

// GetTests @ 141cc1b40

/* WARNING: Removing unreachable block (ram,0x000141cc1cbe) */

void __thiscall
FCbWriterBinaryTest::GetTests
          (FCbWriterBinaryTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cc1ce0

bool __thiscall FCbWriterBinaryTest::RunTest(FCbWriterBinaryTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cc1d10

FString * __thiscall
FCbWriterBinaryTest::GetBeautifiedTestName
          (FCbWriterBinaryTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FCbWriterBinaryTest @ 141ce4970

FCbWriterBinaryTest * __thiscall
FCbWriterBinaryTest::FCbWriterBinaryTest(FCbWriterBinaryTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FCbWriterBinaryTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::CbWriter::Binary");
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

// TestBody @ 141d11770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCbWriterBinaryTest::TestBody(FCbWriterBinaryTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  int *piVar2;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar3;
  ECbValidateError EVar4;
  FCbFieldIterator *pFVar5;
  FScriptContainerElement *pFVar6;
  FAutomationTestFramework *pFVar7;
  TMemoryView<void_const_> *pTVar8;
  FCbWriterBinaryTest *pFVar9;
  code *pcVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStack_1c8 [32];
  TMemoryView<void_const_> local_1a8;
  undefined1 local_198 [32];
  FCbFieldView local_178;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_168 [2];
  FCbWriter local_158 [7];
  int local_28;
  short local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  FCbWriter::FCbWriter(local_158,0x100);
  FCbWriter::Reset(local_158);
  FCbWriter::AddBinary(local_158,(void *)0x0,0);
  pFVar5 = FCbWriter::Save(local_158,(FCbFieldIterator *)local_198);
  pFVar6 = (FScriptContainerElement *)0x0;
  local_178._0_8_ = *(undefined8 *)pFVar5;
  local_178.Value = *(void **)&pFVar5->field_0x8;
  local_168[0].Owner = *(FBufferOwner **)&pFVar5->field_0x10;
  *(undefined8 *)&pFVar5->field_0x10 = 0;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_198 + 0x10));
  TVar3.Owner = local_168[0].Owner;
  pFVar11 = pFVar6;
  if (local_168[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_168[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_168[0].Owner)->_padding_ + 8))(local_168[0].Owner);
    }
    pFVar11 = (FScriptContainerElement *)(TVar3.Owner)->Size;
  }
  TVar3.Owner = local_168[0].Owner;
  local_1a8.Data = pFVar6;
  if (local_168[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_168[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_168[0].Owner)->_padding_ + 8))(local_168[0].Owner);
    }
    local_1a8.Data = (TVar3.Owner)->Data;
  }
  local_1a8.Size = (ulong64)pFVar11;
  EVar4 = ValidateCompactBinary(&local_1a8,All,HasFieldType);
  if (EVar4 == None) {
    if ((local_178._0_8_ & 0x80) != 0) {
      pFVar7 = FAutomationTestFramework::Get();
      pFVar1 = pFVar7->CurrentTest;
      pcVar10 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)&local_1a8,L"FCbWriter(Binary, Empty).HasName()");
      (*pcVar10)(pFVar1,&local_1a8,0);
      if (local_1a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data);
      }
    }
    if ((local_178.TypeWithFlags & CustomByName) != Binary) {
      pFVar7 = FAutomationTestFramework::Get();
      pFVar1 = pFVar7->CurrentTest;
      pcVar10 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)&local_1a8,L"FCbWriter(Binary, Empty).IsBinary()");
      (*pcVar10)(pFVar1,&local_1a8,0);
      if (local_1a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data);
      }
    }
    local_1a8.Data = (FScriptContainerElement *)0x0;
    local_1a8.Size = 0;
    pTVar8 = FCbFieldView::AsBinaryView(&local_178,(TMemoryView<void_const_> *)local_198,&local_1a8)
    ;
    if (pTVar8->Size != 0) {
      pFVar7 = FAutomationTestFramework::Get();
      pFVar9 = (FCbWriterBinaryTest *)pFVar7->CurrentTest;
      pcVar10 = *(code **)(pFVar9->_padding_ + 0x28);
      ::FString::FString((FString *)&local_1a8,L"FCbWriter(Binary, Empty).AsBinaryView()");
      goto LAB_141d11976;
    }
  }
  else {
    pcVar10 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_1a8,L"%s: The two values are not equal.");
    pFVar9 = this;
LAB_141d11976:
    (*pcVar10)(pFVar9,&local_1a8,0);
    if (local_1a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_168);
  FCbWriter::Reset(local_158);
  local_1a8.Size = CONCAT44(local_1a8.Size._4_4_,6);
  local_1a8.Data = "Binary";
  local_198._0_8_ = "Binary";
  local_198._8_8_ = local_1a8.Size;
  local_28 = 0x4030201;
  local_24 = 0x605;
  FCbWriter::SetName(local_158,(TStringView<char8_t> *)local_198);
  FCbWriter::AddBinary(local_158,&local_28,6);
  pFVar5 = FCbWriter::Save(local_158,(FCbFieldIterator *)local_198);
  local_178._0_8_ = *(undefined8 *)pFVar5;
  local_178.Value = *(void **)&pFVar5->field_0x8;
  local_168[0].Owner = *(FBufferOwner **)&pFVar5->field_0x10;
  *(undefined8 *)&pFVar5->field_0x10 = 0;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_198 + 0x10));
  TVar3.Owner = local_168[0].Owner;
  pFVar11 = pFVar6;
  if (local_168[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_168[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_168[0].Owner)->_padding_ + 8))(local_168[0].Owner);
    }
    pFVar11 = (FScriptContainerElement *)(TVar3.Owner)->Size;
  }
  TVar3.Owner = local_168[0].Owner;
  if (local_168[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_168[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_168[0].Owner)->_padding_ + 8))(local_168[0].Owner);
    }
    pFVar6 = (TVar3.Owner)->Data;
  }
  local_1a8.Data = pFVar6;
  local_1a8.Size = (ulong64)pFVar11;
  EVar4 = ValidateCompactBinary(&local_1a8,All,HasFieldType);
  if (EVar4 == None) {
    pFVar7 = FAutomationTestFramework::Get();
    local_198._0_8_ = (longlong)local_178.Value - (ulonglong)local_178.NameLen;
    local_198._8_4_ = local_178.NameLen;
    local_1a8.Size = CONCAT44(local_1a8.Size._4_4_,6);
    local_1a8.Data = "Binary";
    FAutomationTestBase::TestEqual
              (pFVar7->CurrentTest,L"FCbWriter(Binary, Array).GetName()",
               (TStringView<char8_t> *)local_198,(TStringView<char8_t> *)&local_1a8);
    if ((local_178._0_8_ & 0x80) == 0) {
      pFVar7 = FAutomationTestFramework::Get();
      pFVar1 = pFVar7->CurrentTest;
      pcVar10 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)local_198,L"FCbWriter(Binary, Array).HasName()");
      (*pcVar10)(pFVar1,local_198,0);
      if ((FScriptContainerElement *)local_198._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_198._0_8_);
      }
    }
    if ((local_178.TypeWithFlags & CustomByName) != Binary) {
      pFVar7 = FAutomationTestFramework::Get();
      pFVar1 = pFVar7->CurrentTest;
      pcVar10 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)local_198,L"FCbWriter(Binary, Array).IsBinary()");
      (*pcVar10)(pFVar1,local_198,0);
      if ((FScriptContainerElement *)local_198._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_198._0_8_);
      }
    }
    local_198._0_8_ = (FScriptContainerElement *)0x0;
    local_198._8_8_ = 0;
    pTVar8 = FCbFieldView::AsBinaryView(&local_178,&local_1a8,(TMemoryView<void_const_> *)local_198)
    ;
    if ((pTVar8->Size == 6) &&
       ((piVar2 = pTVar8->Data, piVar2 == &local_28 ||
        ((*piVar2 == local_28 && ((short)piVar2[1] == local_24)))))) goto LAB_141d11c4a;
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar10 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_198,L"FCbWriter(Binary, Array).AsBinaryView()");
    (*pcVar10)(pFVar1,local_198,0);
    pFVar6 = (FScriptContainerElement *)local_198._0_8_;
  }
  else {
    pcVar10 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_1a8,L"%s: The two values are not equal.");
    (*pcVar10)(this,&local_1a8,0);
    pFVar6 = local_1a8.Data;
  }
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
LAB_141d11c4a:
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_168);
  FCbWriter::~FCbWriter(local_158);
  return;
}

