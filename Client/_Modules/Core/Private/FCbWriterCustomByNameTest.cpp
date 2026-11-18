// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ccc770

EAutomationTestFlags __thiscall
FCbWriterCustomByNameTest::GetTestFlags(FCbWriterCustomByNameTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ccc780

bool __thiscall FCbWriterCustomByNameTest::IsStressTest(FCbWriterCustomByNameTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ccc790

uint __thiscall FCbWriterCustomByNameTest::GetRequiredDeviceNum(FCbWriterCustomByNameTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ccc7a0

FString * __thiscall
FCbWriterCustomByNameTest::GetTestSourceFileName
          (FCbWriterCustomByNameTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\CompactBinaryWriterTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ccc7d0

int __thiscall FCbWriterCustomByNameTest::GetTestSourceFileLine(FCbWriterCustomByNameTest *this)

{
  return 0x2ef;
}

// GetTests @ 141ccc7e0

/* WARNING: Removing unreachable block (ram,0x000141ccc95e) */

void __thiscall
FCbWriterCustomByNameTest::GetTests
          (FCbWriterCustomByNameTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ccc980

bool __thiscall FCbWriterCustomByNameTest::RunTest(FCbWriterCustomByNameTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ccc9b0

FString * __thiscall
FCbWriterCustomByNameTest::GetBeautifiedTestName
          (FCbWriterCustomByNameTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FCbWriterCustomByNameTest @ 141ce50b0

FCbWriterCustomByNameTest * __thiscall
FCbWriterCustomByNameTest::FCbWriterCustomByNameTest
          (FCbWriterCustomByNameTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FCbWriterCustomByNameTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::CbWriter::CustomByName");
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

// TestBody @ 141d13d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCbWriterCustomByNameTest::TestBody(FCbWriterCustomByNameTest *this,FString *param_1)

{
  ForElementType<unsigned_char> *pFVar1;
  atomic<unsigned___int64> *paVar2;
  atomic<unsigned___int64> aVar3;
  code *pcVar4;
  FAutomationTestBase *pFVar5;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar6;
  ECbValidateError EVar7;
  int iVar8;
  void *pvVar9;
  TMemoryView<void_const_> *pTVar10;
  FAutomationTestFramework *pFVar11;
  ForElementType<unsigned_char> FVar12;
  ForElementType<unsigned_char> *pFVar13;
  void *pvVar14;
  undefined1 auStackY_2a8 [32];
  undefined2 local_268;
  undefined1 local_266;
  TMemoryView<void_const_> local_258;
  undefined1 local_248 [16];
  TCbFieldIterator<FCbField> local_238;
  undefined1 local_218 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_208;
  void *local_200;
  FString local_1f8;
  FCbFieldView local_1e8;
  undefined1 local_1d8 [16];
  TMemoryView<void_const_> local_1c8;
  FCbWriter local_1b8 [7];
  char *local_88;
  undefined4 uStack_80;
  ForElementType<unsigned_char> local_78;
  undefined4 local_60;
  int local_5c;
  char *local_58;
  undefined4 local_50;
  ForElementType<unsigned_char> local_48;
  undefined4 local_30;
  int local_2c;
  ForElementType<unsigned_char> local_28 [2];
  
  local_28[0] = (ForElementType<unsigned_char>)(__security_cookie.value ^ (ulonglong)auStackY_2a8);
  FCbWriter::FCbWriter(local_1b8,0x100);
  uStack_80 = 5;
  local_268 = 0x201;
  local_88 = "Type1";
  local_266 = 3;
  pvVar9 = (void *)0x0;
  local_78.SecondaryData = (ForElementType<unsigned_char>)0x0;
  local_60 = 3;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
            (1,1,3,0,&local_78,3,&local_5c);
  FVar12 = (ForElementType<unsigned_char>)&local_78;
  if (local_78.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FVar12 = local_78.SecondaryData;
  }
  memcpy((void *)FVar12,&local_268,3);
  local_50 = 5;
  local_58 = "Type2";
  local_268 = 0x504;
  local_266 = 6;
  local_48.SecondaryData = (ForElementType<unsigned_char>)0x0;
  local_30 = 3;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
            (1,1,3,0,&local_48,3,&local_2c);
  FVar12 = (ForElementType<unsigned_char>)&local_48;
  if (local_48.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FVar12 = local_48.SecondaryData;
  }
  memcpy((void *)FVar12,&local_268,3);
  pFVar13 = &local_78.SecondaryData;
  do {
    local_258.Size = (ulong64)*(int *)(pFVar13 + 1);
    local_248._0_8_ = pFVar13[-4];
    local_248._8_8_ = pFVar13[-3];
    local_258.Data = (void *)*pFVar13;
    if (*pFVar13 == (ForElementType<unsigned_char>)0x0) {
      local_258.Data = pFVar13 + -2;
    }
    FCbWriter::AddCustom(local_1b8,(TStringView<char8_t> *)local_248,&local_258);
    pFVar1 = pFVar13 + 2;
    pFVar13 = pFVar13 + 6;
  } while (pFVar1 != local_28);
  FCbWriter::Save(local_1b8,(FCbFieldIterator *)local_218);
  TVar6.Owner = local_208.Owner;
  pvVar14 = pvVar9;
  if (local_208.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_208.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_208.Owner)->_padding_ + 8))(local_208.Owner);
    }
    pvVar14 = (void *)(TVar6.Owner)->Size;
  }
  TVar6.Owner = local_208.Owner;
  if (local_208.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_208.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_208.Owner)->_padding_ + 8))(local_208.Owner);
    }
    pvVar9 = (TVar6.Owner)->Data;
  }
  local_258.Data = pvVar9;
  local_258.Size = (ulong64)pvVar14;
  EVar7 = ValidateCompactBinaryRange(&local_258,All);
  if (EVar7 == None) {
    local_238._padding_ = local_218._0_8_;
    local_238._padding_ = local_218._8_8_;
    if (local_208.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar2 = &(local_208.Owner)->ReferenceCountsAndFlags;
      aVar3 = *paVar2;
      *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + 1);
      UNLOCK();
      if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
        LOCK();
        (local_208.Owner)->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)(local_208.Owner)->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
      }
    }
    local_238._padding_ = (longlong)local_208.Owner;
    local_238.FieldsEnd = local_200;
    if ((local_218._0_8_ & 0x1f) != 0) {
      pFVar13 = &local_78.SecondaryData;
      do {
        local_258.Data = (void *)0x0;
        local_258.Size = 0;
        local_1e8.TypeWithFlags = (undefined1)local_238._padding_;
        local_1e8.Error = local_238._padding_._1_1_;
        local_1e8._2_2_ = local_238._padding_._2_2_;
        local_1e8.NameLen = local_238._padding_._4_4_;
        local_1e8.Value = (void *)local_238._padding_;
        local_1d8._0_8_ = pFVar13[-4];
        local_1d8._8_8_ = pFVar13[-3];
        pTVar10 = FCbFieldView::AsCustom
                            (&local_1e8,&local_1c8,(TStringView<char8_t> *)local_1d8,&local_258);
        FVar12 = *pFVar13;
        if (*pFVar13 == (ForElementType<unsigned_char>)0x0) {
          FVar12 = (ForElementType<unsigned_char>)(pFVar13 + -2);
        }
        if ((pTVar10->Size != (longlong)*(int *)(pFVar13 + 1)) ||
           (((ForElementType<unsigned_char>)pTVar10->Data != FVar12 &&
            (iVar8 = memcmp(pTVar10->Data,(void *)FVar12,pTVar10->Size), iVar8 != 0)))) {
          pFVar11 = FAutomationTestFramework::Get();
          pFVar5 = pFVar11->CurrentTest;
          pcVar4 = *(code **)(pFVar5->_padding_ + 0x28);
          ::FString::FString(&local_1f8,L"FCbWriter(CustomByName).AsCustom()");
          (*pcVar4)(pFVar5,&local_1f8,0);
          if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
          }
        }
        if (local_1e8.Error != None) {
          pFVar11 = FAutomationTestFramework::Get();
          pFVar5 = pFVar11->CurrentTest;
          pcVar4 = *(code **)(pFVar5->_padding_ + 0x28);
          ::FString::FString((FString *)local_248,L"FCbWriter(CustomByName) Error");
          (*pcVar4)(pFVar5,local_248,0);
          if ((ForElementType<unsigned_char>)local_248._0_8_ != (ForElementType<unsigned_char>)0x0)
          {
            FMemory::Free((void *)local_248._0_8_);
          }
        }
        pFVar13 = pFVar13 + 6;
        TCbFieldIterator<FCbField>::operator++(&local_238);
      } while ((local_238._padding_ & 0x1fU) != 0);
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_238._padding_);
  }
  else {
    pcVar4 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_258,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_258,0);
    if (local_258.Data != (void *)0x0) {
      FMemory::Free(local_258.Data);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_208);
  if (local_48.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_48.SecondaryData);
  }
  if (local_78.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_78.SecondaryData);
  }
  FCbWriter::~FCbWriter(local_1b8);
  return;
}

