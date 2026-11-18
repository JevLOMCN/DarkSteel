// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ccad00

EAutomationTestFlags __thiscall FCbWriterCustomByIdTest::GetTestFlags(FCbWriterCustomByIdTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ccad10

bool __thiscall FCbWriterCustomByIdTest::IsStressTest(FCbWriterCustomByIdTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ccad20

uint __thiscall FCbWriterCustomByIdTest::GetRequiredDeviceNum(FCbWriterCustomByIdTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ccad30

FString * __thiscall
FCbWriterCustomByIdTest::GetTestSourceFileName
          (FCbWriterCustomByIdTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\CompactBinaryWriterTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ccad60

int __thiscall FCbWriterCustomByIdTest::GetTestSourceFileLine(FCbWriterCustomByIdTest *this)

{
  return 0x2cc;
}

// GetTests @ 141ccad80

/* WARNING: Removing unreachable block (ram,0x000141ccaefe) */

void __thiscall
FCbWriterCustomByIdTest::GetTests
          (FCbWriterCustomByIdTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ccaf80

bool __thiscall FCbWriterCustomByIdTest::RunTest(FCbWriterCustomByIdTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ccafb0

FString * __thiscall
FCbWriterCustomByIdTest::GetBeautifiedTestName
          (FCbWriterCustomByIdTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FCbWriterCustomByIdTest @ 141ce4ee0

FCbWriterCustomByIdTest * __thiscall
FCbWriterCustomByIdTest::FCbWriterCustomByIdTest(FCbWriterCustomByIdTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FCbWriterCustomByIdTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::CbWriter::CustomById");
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

// TestBody @ 141d13930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCbWriterCustomByIdTest::TestBody(FCbWriterCustomByIdTest *this,FString *param_1)

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
  undefined1 auStackY_288 [32];
  undefined2 local_248;
  undefined1 local_246;
  TMemoryView<void_const_> local_238;
  TCbFieldIterator<FCbField> local_228;
  undefined1 local_208 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1f8;
  void *local_1f0;
  FString local_1e8;
  FCbFieldView local_1d8;
  FString local_1c8;
  TMemoryView<void_const_> local_1b8;
  FCbWriter local_1a8 [7];
  undefined8 local_78;
  ForElementType<unsigned_char> local_70;
  undefined4 local_58;
  int local_54 [3];
  ForElementType<unsigned_char> local_48;
  undefined4 local_30;
  int local_2c;
  ForElementType<unsigned_char> local_28 [2];
  
  local_28[0] = (ForElementType<unsigned_char>)(__security_cookie.value ^ (ulonglong)auStackY_288);
  FCbWriter::FCbWriter(local_1a8,0x100);
  local_248 = 0x201;
  local_78 = 1;
  local_246 = 3;
  pvVar9 = (void *)0x0;
  local_70.SecondaryData = (ForElementType<unsigned_char>)0x0;
  local_58 = 3;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
            (1,1,3,0,&local_70,3,local_54);
  FVar12 = (ForElementType<unsigned_char>)&local_70;
  if (local_70.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FVar12 = local_70.SecondaryData;
  }
  memcpy((void *)FVar12,&local_248,3);
  local_54[1] = -1;
  local_54[2] = -1;
  local_248 = 0x504;
  local_246 = 6;
  local_48.SecondaryData = (ForElementType<unsigned_char>)0x0;
  local_30 = 3;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
            (1,1,3,0,&local_48,3,&local_2c);
  FVar12 = (ForElementType<unsigned_char>)&local_48;
  if (local_48.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FVar12 = local_48.SecondaryData;
  }
  memcpy((void *)FVar12,&local_248,3);
  pFVar13 = &local_70.SecondaryData;
  do {
    local_238.Size = (ulong64)*(int *)(pFVar13 + 1);
    local_238.Data = (void *)*pFVar13;
    if (*pFVar13 == (ForElementType<unsigned_char>)0x0) {
      local_238.Data = pFVar13 + -2;
    }
    FCbWriter::AddCustom(local_1a8,(ulong64)pFVar13[-3],&local_238);
    pFVar1 = pFVar13 + 2;
    pFVar13 = pFVar13 + 5;
  } while (pFVar1 != local_28);
  FCbWriter::Save(local_1a8,(FCbFieldIterator *)local_208);
  TVar6.Owner = local_1f8.Owner;
  pvVar14 = pvVar9;
  if (local_1f8.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_1f8.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_1f8.Owner)->_padding_ + 8))(local_1f8.Owner);
    }
    pvVar14 = (void *)(TVar6.Owner)->Size;
  }
  TVar6.Owner = local_1f8.Owner;
  if (local_1f8.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_1f8.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_1f8.Owner)->_padding_ + 8))(local_1f8.Owner);
    }
    pvVar9 = (TVar6.Owner)->Data;
  }
  local_238.Data = pvVar9;
  local_238.Size = (ulong64)pvVar14;
  EVar7 = ValidateCompactBinaryRange(&local_238,All);
  if (EVar7 == None) {
    local_228._padding_ = local_208._0_8_;
    local_228._padding_ = local_208._8_8_;
    if (local_1f8.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar2 = &(local_1f8.Owner)->ReferenceCountsAndFlags;
      aVar3 = *paVar2;
      *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + 1);
      UNLOCK();
      if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
        LOCK();
        (local_1f8.Owner)->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)(local_1f8.Owner)->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
      }
    }
    local_228._padding_ = (longlong)local_1f8.Owner;
    local_228.FieldsEnd = local_1f0;
    if ((local_208._0_8_ & 0x1f) != 0) {
      pFVar13 = &local_70.SecondaryData;
      do {
        local_238.Data = (void *)0x0;
        local_238.Size = 0;
        local_1d8.TypeWithFlags = (undefined1)local_228._padding_;
        local_1d8.Error = local_228._padding_._1_1_;
        local_1d8._2_2_ = local_228._padding_._2_2_;
        local_1d8.NameLen = local_228._padding_._4_4_;
        local_1d8.Value = (void *)local_228._padding_;
        pTVar10 = FCbFieldView::AsCustom(&local_1d8,&local_1b8,(ulong64)pFVar13[-3],&local_238);
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
          ::FString::FString(&local_1e8,L"FCbWriter(CustomById).AsCustom()");
          (*pcVar4)(pFVar5,&local_1e8,0);
          if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
          }
        }
        if (local_1d8.Error != None) {
          pFVar11 = FAutomationTestFramework::Get();
          pFVar5 = pFVar11->CurrentTest;
          pcVar4 = *(code **)(pFVar5->_padding_ + 0x28);
          ::FString::FString(&local_1c8,L"FCbWriter(CustomById) Error");
          (*pcVar4)(pFVar5,&local_1c8,0);
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
        }
        pFVar13 = pFVar13 + 5;
        TCbFieldIterator<FCbField>::operator++(&local_228);
      } while ((local_228._padding_ & 0x1fU) != 0);
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_228._padding_);
  }
  else {
    pcVar4 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_238,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_238,0);
    if (local_238.Data != (void *)0x0) {
      FMemory::Free(local_238.Data);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1f8);
  if (local_48.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_48.SecondaryData);
  }
  if (local_70.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_70.SecondaryData);
  }
  FCbWriter::~FCbWriter(local_1a8);
  return;
}

