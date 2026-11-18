// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cc53d0

EAutomationTestFlags __thiscall FCbWriterFloatTest::GetTestFlags(FCbWriterFloatTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cc53f0

bool __thiscall FCbWriterFloatTest::IsStressTest(FCbWriterFloatTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cc5410

uint __thiscall FCbWriterFloatTest::GetRequiredDeviceNum(FCbWriterFloatTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cc5430

FString * __thiscall
FCbWriterFloatTest::GetTestSourceFileName(FCbWriterFloatTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\CompactBinaryWriterTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cc5490

int __thiscall FCbWriterFloatTest::GetTestSourceFileLine(FCbWriterFloatTest *this)

{
  return 0x1c1;
}

// GetTests @ 141cc54b0

/* WARNING: Removing unreachable block (ram,0x000141cc562e) */

void __thiscall
FCbWriterFloatTest::GetTests
          (FCbWriterFloatTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cc57f0

bool __thiscall FCbWriterFloatTest::RunTest(FCbWriterFloatTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cc5840

FString * __thiscall
FCbWriterFloatTest::GetBeautifiedTestName(FCbWriterFloatTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FCbWriterFloatTest @ 141ce5450

FCbWriterFloatTest * __thiscall
FCbWriterFloatTest::FCbWriterFloatTest(FCbWriterFloatTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FCbWriterFloatTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::CbWriter::Float");
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

// TestBody @ 141d14400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FCbWriterFloatTest::TestBody(FCbWriterFloatTest *this,FString *param_1)

{
  atomic<unsigned___int64> *paVar1;
  float fVar2;
  atomic<unsigned___int64> aVar3;
  double dVar4;
  code *pcVar5;
  FAutomationTestBase *pFVar6;
  ForAnyElementType FVar7;
  float fVar8;
  double dVar9;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  ECbValidateError EVar13;
  FAutomationTestFramework *pFVar14;
  double *pdVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  float fVar18;
  double dVar19;
  undefined1 auStackY_268 [32];
  undefined8 local_238;
  void *pvStack_230;
  undefined8 local_228;
  void *pvStack_220;
  TCbFieldIterator<FCbField> local_218;
  void *local_1f8;
  void *pvStack_1f0;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1e8 [2];
  FCbWriter local_1d8 [7];
  double local_a8;
  undefined8 uStack_a0;
  double local_98 [8];
  double local_58 [6];
  
  local_58[0] = (double)(__security_cookie.value ^ (ulonglong)auStackY_268);
  FCbWriter::FCbWriter(local_1d8,0x100);
  FCbWriter::Reset(local_1d8);
  pdVar15 = &local_a8;
  local_a8 = ___xmm_40490fdbbf8000003f80000000000000;
  uStack_a0 = _UNK_150796388;
  do {
    FCbWriter::AddFloat(local_1d8,*(float *)pdVar15);
    pdVar15 = (double *)((longlong)pdVar15 + 4);
  } while (pdVar15 != local_98);
  FCbWriter::Save(local_1d8,(FCbFieldIterator *)&local_1f8);
  TVar10.Owner = local_1e8[0].Owner;
  pFVar16 = (FScriptContainerElement *)0x0;
  pFVar17 = pFVar16;
  if (local_1e8[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_1e8[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_1e8[0].Owner)->_padding_ + 8))(local_1e8[0].Owner);
    }
    pFVar17 = (FScriptContainerElement *)(TVar10.Owner)->Size;
  }
  TVar10.Owner = local_1e8[0].Owner;
  local_238 = pFVar16;
  if (local_1e8[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_1e8[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_1e8[0].Owner)->_padding_ + 8))(local_1e8[0].Owner);
    }
    local_238 = (TVar10.Owner)->Data;
  }
  pvStack_230 = pFVar17;
  EVar13 = ValidateCompactBinaryRange((TMemoryView<void_const_> *)&local_238,All);
  if (EVar13 == None) {
    pdVar15 = &local_a8;
    pFVar11 = local_1f8;
    pFVar12 = pvStack_1f0;
    fVar2 = __real_38d1b717;
    FVar7.Data = local_238;
    pFVar17 = pvStack_230;
    if (local_1e8[0].Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &(local_1e8[0].Owner)->ReferenceCountsAndFlags;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      pFVar11 = local_1f8;
      pFVar12 = pvStack_1f0;
      fVar2 = __real_38d1b717;
      if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
        LOCK();
        (local_1e8[0].Owner)->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)(local_1e8[0].Owner)->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
        pFVar11 = local_1f8;
        pFVar12 = pvStack_1f0;
        fVar2 = __real_38d1b717;
      }
    }
    while (pvStack_230 = pFVar12, local_238 = pFVar11, fVar8 = __real_38d1b717,
          __real_38d1b717 = fVar2, ((ulonglong)local_238 & 0x1f) != 0) {
      local_218._padding_ = (longlong)local_238;
      local_218._padding_ = (longlong)pvStack_230;
      pFVar14 = FAutomationTestFramework::Get();
      fVar2 = *(float *)pdVar15;
      pdVar15 = (double *)((longlong)pdVar15 + 4);
      pFVar6 = pFVar14->CurrentTest;
      fVar18 = FCbFieldView::AsFloat((FCbFieldView *)&local_238,0.0);
      FAutomationTestBase::TestEqual
                (pFVar6,L"FCbWriter(Float, Single).AsFloat()",fVar18,fVar2,fVar8);
      if (local_238._1_1_ != None) {
        pFVar14 = FAutomationTestFramework::Get();
        pFVar6 = pFVar14->CurrentTest;
        pcVar5 = *(code **)(pFVar6->_padding_ + 0x28);
        ::FString::FString((FString *)&local_228,L"FCbWriter(Float, Single) Error");
        (*pcVar5)(pFVar6,&local_228,0);
        if (local_228 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228);
        }
      }
      TCbFieldIterator<FCbField>::operator++(&local_218);
      pFVar11 = (FScriptContainerElement *)local_218._padding_;
      pFVar12 = (FScriptContainerElement *)local_218._padding_;
      fVar2 = __real_38d1b717;
      FVar7.Data = local_238;
      pFVar17 = pvStack_230;
      __real_38d1b717 = fVar8;
    }
    local_238 = FVar7.Data;
    pvStack_230 = pFVar17;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_218._padding_);
  }
  else {
    pcVar5 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_238,L"%s: The two values are not equal.");
    (*pcVar5)(this,&local_238,0);
    if (local_238 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_1e8);
  FCbWriter::Reset(local_1d8);
  pdVar15 = local_98;
  local_98[0] = ___xmm_3ff00000000000000000000000000000;
  local_98[1] = (double)_UNK_15061cbc8;
  local_98[2] = (double)___xmm_400921fb60000000bff0000000000000;
  local_98[3] = (double)_UNK_150796378;
  local_98[4] = (double)___xmm_3ffffffff00000003fffffffe0000000;
  local_98[5] = (double)_UNK_150796368;
  local_98[6] = (double)___xmm_47ffffffe000000047efffffe0000000;
  local_98[7] = (double)_UNK_150796398;
  do {
    FCbWriter::AddFloat(local_1d8,*pdVar15);
    pdVar15 = pdVar15 + 1;
  } while (pdVar15 != local_58);
  FCbWriter::Save(local_1d8,(FCbFieldIterator *)&local_1f8);
  TVar10.Owner = local_1e8[0].Owner;
  pFVar17 = pFVar16;
  if (local_1e8[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_1e8[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_1e8[0].Owner)->_padding_ + 8))(local_1e8[0].Owner);
    }
    pFVar17 = (FScriptContainerElement *)(TVar10.Owner)->Size;
  }
  TVar10.Owner = local_1e8[0].Owner;
  if (local_1e8[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_1e8[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_1e8[0].Owner)->_padding_ + 8))(local_1e8[0].Owner);
    }
    pFVar16 = (TVar10.Owner)->Data;
  }
  local_228 = pFVar16;
  pvStack_220 = pFVar17;
  EVar13 = ValidateCompactBinaryRange((TMemoryView<void_const_> *)&local_228,All);
  if (EVar13 == None) {
    pdVar15 = local_98;
    pFVar17 = local_1f8;
    pFVar11 = pvStack_1f0;
    dVar4 = __real_3f1a36e2e0000000;
    FVar7.Data = local_228;
    pFVar16 = pvStack_220;
    if (local_1e8[0].Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &(local_1e8[0].Owner)->ReferenceCountsAndFlags;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      pFVar17 = local_1f8;
      pFVar11 = pvStack_1f0;
      dVar4 = __real_3f1a36e2e0000000;
      if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
        LOCK();
        (local_1e8[0].Owner)->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)(local_1e8[0].Owner)->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
        pFVar17 = local_1f8;
        pFVar11 = pvStack_1f0;
        dVar4 = __real_3f1a36e2e0000000;
      }
    }
    while (pvStack_220 = pFVar11, local_228 = pFVar17, dVar9 = __real_3f1a36e2e0000000,
          __real_3f1a36e2e0000000 = dVar4, ((ulonglong)local_228 & 0x1f) != 0) {
      local_218._padding_ = (longlong)local_228;
      local_218._padding_ = (longlong)pvStack_220;
      pFVar14 = FAutomationTestFramework::Get();
      dVar4 = *pdVar15;
      pdVar15 = pdVar15 + 1;
      pFVar6 = pFVar14->CurrentTest;
      dVar19 = FCbFieldView::AsDouble((FCbFieldView *)&local_228,0.0);
      FAutomationTestBase::TestEqual
                (pFVar6,L"FCbWriter(Float, Double).AsDouble()",dVar19,dVar4,dVar9);
      if (local_228._1_1_ != None) {
        pFVar14 = FAutomationTestFramework::Get();
        pFVar6 = pFVar14->CurrentTest;
        pcVar5 = *(code **)(pFVar6->_padding_ + 0x28);
        ::FString::FString((FString *)&local_238,L"FCbWriter(Float, Double) Error");
        (*pcVar5)(pFVar6,&local_238,0);
        if (local_238 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238);
        }
      }
      TCbFieldIterator<FCbField>::operator++(&local_218);
      pFVar17 = (FScriptContainerElement *)local_218._padding_;
      pFVar11 = (FScriptContainerElement *)local_218._padding_;
      dVar4 = __real_3f1a36e2e0000000;
      FVar7.Data = local_228;
      pFVar16 = pvStack_220;
      __real_3f1a36e2e0000000 = dVar9;
    }
    local_228 = FVar7.Data;
    pvStack_220 = pFVar16;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_218._padding_);
  }
  else {
    pcVar5 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_228,L"%s: The two values are not equal.");
    (*pcVar5)(this,&local_228,0);
    if (local_228 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_1e8);
  FCbWriter::~FCbWriter(local_1d8);
  return;
}

