// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cc2840

EAutomationTestFlags __thiscall FCbWriterStringTest::GetTestFlags(FCbWriterStringTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cc2850

bool __thiscall FCbWriterStringTest::IsStressTest(FCbWriterStringTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cc2860

uint __thiscall FCbWriterStringTest::GetRequiredDeviceNum(FCbWriterStringTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cc2870

FString * __thiscall
FCbWriterStringTest::GetTestSourceFileName
          (FCbWriterStringTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\CompactBinaryWriterTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cc28a0

int __thiscall FCbWriterStringTest::GetTestSourceFileLine(FCbWriterStringTest *this)

{
  return 0x116;
}

// GetTests @ 141cc2900

/* WARNING: Removing unreachable block (ram,0x000141cc2a7e) */

void __thiscall
FCbWriterStringTest::GetTests
          (FCbWriterStringTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cc2aa0

bool __thiscall FCbWriterStringTest::RunTest(FCbWriterStringTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cc2ad0

FString * __thiscall
FCbWriterStringTest::GetBeautifiedTestName
          (FCbWriterStringTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FCbWriterStringTest @ 141ce6670

FCbWriterStringTest * __thiscall
FCbWriterStringTest::FCbWriterStringTest(FCbWriterStringTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FCbWriterStringTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::CbWriter::String");
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

// TestBody @ 141d170e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCbWriterStringTest::TestBody(FCbWriterStringTest *this,FString *param_1)

{
  longlong *plVar1;
  atomic<unsigned___int64> *paVar2;
  ulonglong uVar3;
  atomic<unsigned___int64> aVar4;
  code *pcVar5;
  FAutomationTestBase *pFVar6;
  void *pvVar7;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar8;
  void *pvVar9;
  ECbValidateError EVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FCbWriter *pFVar14;
  FString *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  FAutomationTestFramework *pFVar18;
  TStringView<char8_t> *pTVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  undefined1 auStack_3b8 [32];
  TMemoryView<void_const_> local_398;
  TMemoryView<void_const_> local_388;
  TMemoryView<void_const_> local_378;
  undefined1 local_368 [8];
  undefined8 uStack_360;
  TCbFieldIterator<FCbField> local_358;
  undefined8 local_338;
  FScriptContainerElement *pFStack_330;
  undefined4 local_328 [2];
  FScriptContainerElement *local_320;
  FScriptContainerElement *pFStack_318;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_310 [3];
  ForAnyElementType local_2f8;
  FScriptContainerElement *pFStack_2f0;
  undefined1 local_2e8 [16];
  FString local_2d8;
  FScriptContainerElement *local_2c8;
  void *pvStack_2c0;
  TCbFieldIterator<FCbField> local_2b8;
  TStringBuilderBase<char8_t> local_298;
  FScriptContainerElement local_278 [257];
  FScriptContainerElement local_177 [15];
  FCbWriter local_168 [7];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  FCbWriter::FCbWriter(local_168,0x100);
  FCbWriter::Reset(local_168);
  pFVar17 = (FScriptContainerElement *)0x0;
  local_388.Data = (void *)0x0;
  local_388.Size = (ulonglong)local_388.Size._4_4_ << 0x20;
  local_398.Data = (void *)0x0;
  local_398.Size = local_388.Size;
  FCbWriter::AddString(local_168,(TStringView<char8_t> *)&local_398);
  pFStack_330 = (FScriptContainerElement *)0x0;
  local_338 = (FScriptContainerElement *)0x0;
  local_398.Data = (void *)0x0;
  local_398.Size = 0;
  FCbWriter::AddString(local_168,(TStringView<wchar_t> *)&local_398);
  FCbWriter::Save(local_168,(FCbFieldIterator *)&local_358);
  lVar20 = local_358._padding_;
  pFVar21 = pFVar17;
  if ((longlong *)local_358._padding_ != (longlong *)0x0) {
    if (((ulonglong)*(longlong *)(local_358._padding_ + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_358._padding_ + 8))(local_358._padding_);
    }
    pFVar21 = *(FScriptContainerElement **)(lVar20 + 0x10);
  }
  lVar20 = local_358._padding_;
  pFVar16 = pFVar17;
  if ((longlong *)local_358._padding_ != (longlong *)0x0) {
    if (((ulonglong)*(longlong *)(local_358._padding_ + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_358._padding_ + 8))(local_358._padding_);
    }
    pFVar16 = *(FScriptContainerElement **)(lVar20 + 8);
  }
  local_388.Data = pFVar16;
  local_388.Size = (ulong64)pFVar21;
  EVar10 = ValidateCompactBinaryRange(&local_388,All);
  if (EVar10 == None) {
    if ((longlong *)local_358._padding_ != (longlong *)0x0) {
      LOCK();
      plVar1 = (longlong *)(local_358._padding_ + 0x18);
      uVar3 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 0) {
        LOCK();
        *(longlong *)(local_358._padding_ + 0x18) =
             *(longlong *)(local_358._padding_ + 0x18) + 0x40000000;
        UNLOCK();
      }
    }
    local_2b8._padding_._0_4_ = (uint)local_358._padding_;
    pFVar16 = (FScriptContainerElement *)local_358._padding_;
    pvVar9 = (void *)local_358._padding_;
    uVar11 = (uint)local_2b8._padding_;
    pFVar21 = local_2c8;
    pvVar7 = pvStack_2c0;
    while (pvStack_2c0 = pvVar9, local_2c8 = pFVar16, ((ulonglong)local_2c8 & 0x1f) != 0) {
      local_2b8._padding_ = (longlong)local_2c8;
      local_2b8._padding_ = (longlong)pvStack_2c0;
      if ((char)uVar11 < '\0') {
        pFVar18 = FAutomationTestFramework::Get();
        pFVar6 = pFVar18->CurrentTest;
        pcVar5 = *(code **)(pFVar6->_padding_ + 0x28);
        ::FString::FString((FString *)&local_388,L"FCbWriter(String, Empty).HasName()");
        (*pcVar5)(pFVar6,&local_388,0);
        if (local_388.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_388.Data);
        }
      }
      if (((ECbFieldType)local_2c8 & CustomByName) != String) {
        pFVar18 = FAutomationTestFramework::Get();
        pFVar6 = pFVar18->CurrentTest;
        pcVar5 = *(code **)(pFVar6->_padding_ + 0x28);
        ::FString::FString(&local_2d8,L"FCbWriter(String, Empty).IsString()");
        (*pcVar5)(pFVar6,&local_2d8,0);
        if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
        }
      }
      pFStack_330 = (FScriptContainerElement *)0x0;
      local_338 = (FScriptContainerElement *)0x0;
      local_398.Data = (void *)0x0;
      local_398.Size = 0;
      pTVar19 = FCbFieldView::AsString
                          ((FCbFieldView *)&local_2c8,(TStringView<char8_t> *)local_368,
                           (TStringView<char8_t> *)&local_398);
      if (pTVar19->Size != 0) {
        pFVar18 = FAutomationTestFramework::Get();
        pFVar6 = pFVar18->CurrentTest;
        pcVar5 = *(code **)(pFVar6->_padding_ + 0x28);
        ::FString::FString((FString *)&local_378,L"FCbWriter(String, Empty).AsString()");
        (*pcVar5)(pFVar6,&local_378);
        if (local_378.Data != (void *)0x0) {
          FMemory::Free(local_378.Data);
        }
      }
      TCbFieldIterator<FCbField>::operator++(&local_2b8);
      uVar11 = (uint)(byte)local_2b8._padding_;
      pFVar16 = (FScriptContainerElement *)local_2b8._padding_;
      pvVar9 = (void *)local_2b8._padding_;
      pFVar21 = local_2c8;
      pvVar7 = pvStack_2c0;
    }
    local_2c8 = pFVar21;
    pvStack_2c0 = pvVar7;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_2b8._padding_);
  }
  else {
    pcVar5 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_388,L"%s: The two values are not equal.");
    (*pcVar5)(this,&local_388,0);
    if (local_388.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_358._padding_);
  FCbWriter::Reset(local_168);
  local_378.Size._0_4_ = 6;
  local_378.Data = "String";
  local_398.Data = "String";
  local_398.Size._0_4_ = 6;
  local_398.Size._4_4_ = local_378.Size._4_4_;
  pFVar14 = FCbWriter::SetName(local_168,(TStringView<char8_t> *)&local_398);
  local_378.Size._0_4_ = 5;
  local_378.Data = "Value";
  local_398.Data = "Value";
  local_398.Size._0_4_ = 5;
  local_398.Size._4_4_ = local_378.Size._4_4_;
  FCbWriter::AddString(pFVar14,(TStringView<char8_t> *)&local_398);
  local_378.Data = "String";
  local_378.Size._0_4_ = 6;
  local_398.Data = "String";
  local_398.Size._0_4_ = 6;
  local_398.Size._4_4_ = local_378.Size._4_4_;
  pFVar14 = FCbWriter::SetName(local_168,(TStringView<char8_t> *)&local_398);
  local_378.Size = CONCAT44(local_378.Size._4_4_,5);
  local_378.Data = L"Value";
  local_398.Data = L"Value";
  local_398.Size = local_378.Size;
  FCbWriter::AddString(pFVar14,(TStringView<wchar_t> *)&local_398);
  FCbWriter::Save(local_168,(FCbFieldIterator *)&local_320);
  TVar8.Owner = local_310[0].Owner;
  pFVar21 = pFVar17;
  if (local_310[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_310[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_310[0].Owner)->_padding_ + 8))(local_310[0].Owner);
    }
    pFVar21 = (FScriptContainerElement *)(TVar8.Owner)->Size;
  }
  TVar8.Owner = local_310[0].Owner;
  pFVar16 = pFVar17;
  if (local_310[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_310[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_310[0].Owner)->_padding_ + 8))(local_310[0].Owner);
    }
    pFVar16 = (TVar8.Owner)->Data;
  }
  local_378.Data = pFVar16;
  local_378.Size = (ulong64)pFVar21;
  EVar10 = ValidateCompactBinaryRange(&local_378,All);
  if (EVar10 == None) {
    local_358._padding_ = (longlong)local_320;
    local_358._padding_ = (longlong)pFStack_318;
    if (local_310[0].Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar2 = &(local_310[0].Owner)->ReferenceCountsAndFlags;
      aVar4 = *paVar2;
      *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + 1);
      UNLOCK();
      if (((ulonglong)aVar4 & 0x3fffffff) == 0) {
        LOCK();
        (local_310[0].Owner)->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)(local_310[0].Owner)->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
      }
    }
    while ((local_358._padding_ & 0x1fU) != 0) {
      local_338 = (FScriptContainerElement *)local_358._padding_;
      pFStack_330 = (FScriptContainerElement *)local_358._padding_;
      pFVar18 = FAutomationTestFramework::Get();
      local_368 = (undefined1  [8])(pFStack_330 + -(ulonglong)local_338._4_4_);
      pvStack_2c0 = (void *)CONCAT44(pvStack_2c0._4_4_,local_338._4_4_);
      local_378.Data = "String";
      local_378.Size = CONCAT44(local_378.Size._4_4_,6);
      uStack_360 = pvStack_2c0;
      local_2f8.Data = (FScriptContainerElement *)0x15073d460;
      pFStack_2f0 = (FScriptContainerElement *)local_378.Size;
      local_2c8 = (FScriptContainerElement *)local_368;
      FAutomationTestBase::TestEqual
                (pFVar18->CurrentTest,L"FCbWriter(String, Basic).GetName()",
                 (TStringView<char8_t> *)local_368,(TStringView<char8_t> *)&local_2f8);
      if (((ulonglong)local_338 & 0x80) == 0) {
        pFVar18 = FAutomationTestFramework::Get();
        pFVar6 = pFVar18->CurrentTest;
        pcVar5 = *(code **)(pFVar6->_padding_ + 0x28);
        ::FString::FString(&local_2d8,L"FCbWriter(String, Basic).HasName()");
        (*pcVar5)(pFVar6,&local_2d8,0);
        if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
        }
      }
      if (((ECbFieldType)local_338 & CustomByName) != String) {
        pFVar18 = FAutomationTestFramework::Get();
        pFVar6 = pFVar18->CurrentTest;
        pcVar5 = *(code **)(pFVar6->_padding_ + 0x28);
        ::FString::FString((FString *)local_2e8,L"FCbWriter(String, Basic).IsString()");
        (*pcVar5)(pFVar6,local_2e8,0);
        if ((FScriptContainerElement *)local_2e8._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_2e8._0_8_);
        }
      }
      local_388.Size = 0;
      local_388.Data = (FScriptContainerElement *)0x0;
      local_368 = (undefined1  [8])0x0;
      uStack_360._0_4_ = 0;
      uStack_360._4_4_ = 0;
      pTVar19 = FCbFieldView::AsString
                          ((FCbFieldView *)&local_338,(TStringView<char8_t> *)&local_2b8,
                           (TStringView<char8_t> *)local_368);
      if ((pTVar19->Size != 5) ||
         (iVar12 = FGenericPlatformStricmp::Strnicmp(pTVar19->DataPtr,(uchar *)"Value",5),
         iVar12 != 0)) {
        pFVar18 = FAutomationTestFramework::Get();
        pFVar6 = pFVar18->CurrentTest;
        pcVar5 = *(code **)(pFVar6->_padding_ + 0x28);
        ::FString::FString((FString *)&local_398,L"FCbWriter(String, Basic).AsString()");
        (*pcVar5)(pFVar6,&local_398,0);
        if (local_398.Data != (wchar_t *)0x0) {
          FMemory::Free(local_398.Data);
        }
      }
      TCbFieldIterator<FCbField>::operator++(&local_358);
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_358._padding_);
  }
  else {
    pcVar5 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_378,L"%s: The two values are not equal.");
    (*pcVar5)(this,&local_378,0);
    if (local_378.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_310);
  FCbWriter::Reset(local_168);
  local_298.Base = (uchar *)local_278;
  local_298.bIsDynamic = false;
  local_298.bIsExternal = false;
  local_298.CurPos = (uchar *)local_278;
  local_298.End = (uchar *)local_177;
  lVar20 = 0x100;
  do {
    if (local_298.End < (FScriptContainerElement *)(local_298.CurPos + 1)) {
      TStringBuilderBase<char8_t>::Extend(&local_298,1);
    }
    *local_298.CurPos = '.';
    local_298.CurPos = local_298.CurPos + 1;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  uStack_360._0_4_ = (int)local_298.CurPos - (int)local_298.Base;
  local_398.Data = local_298.Base;
  local_368 = (undefined1  [8])local_298.Base;
  uStack_360._4_4_ = local_398.Size._4_4_;
  local_398.Size._0_4_ = (int)uStack_360;
  FCbWriter::AddString(local_168,(TStringView<char8_t> *)local_368);
  pFVar15 = ::FString::ChrN((FString *)&local_2f8,0x100,L'.');
  local_398.Data = (pFVar15->Data).AllocatorInstance.Data;
  iVar12 = (pFVar15->Data).ArrayNum;
  iVar13 = iVar12 + -1;
  if (iVar12 == 0) {
    iVar13 = 0;
  }
  local_398.Size = CONCAT44(local_398.Size._4_4_,iVar13);
  uStack_360 = (void *)local_398.Size;
  local_368 = (undefined1  [8])local_398.Data;
  FCbWriter::AddString(local_168,(TStringView<wchar_t> *)local_368);
  if (local_2f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data);
  }
  FCbWriter::Save(local_168,(FCbFieldIterator *)&local_320);
  TVar8.Owner = local_310[0].Owner;
  pFVar21 = pFVar17;
  if (local_310[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_310[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_310[0].Owner)->_padding_ + 8))(local_310[0].Owner);
    }
    pFVar21 = (FScriptContainerElement *)(TVar8.Owner)->Size;
  }
  TVar8.Owner = local_310[0].Owner;
  pFVar16 = pFVar17;
  if (local_310[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_310[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_310[0].Owner)->_padding_ + 8))(local_310[0].Owner);
    }
    pFVar16 = (TVar8.Owner)->Data;
  }
  local_398.Data = pFVar16;
  local_398.Size = (ulong64)pFVar21;
  EVar10 = ValidateCompactBinaryRange(&local_398,All);
  if (EVar10 == None) {
    local_358._padding_ = (longlong)local_320;
    local_358._padding_ = (longlong)pFStack_318;
    if (local_310[0].Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar2 = &(local_310[0].Owner)->ReferenceCountsAndFlags;
      aVar4 = *paVar2;
      *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + 1);
      UNLOCK();
      if (((ulonglong)aVar4 & 0x3fffffff) == 0) {
        LOCK();
        (local_310[0].Owner)->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)(local_310[0].Owner)->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
      }
    }
    while ((local_358._padding_ & 0x1fU) != 0) {
      local_2f8.Data = (FScriptContainerElement *)local_358._padding_;
      pFStack_2f0 = (FScriptContainerElement *)local_358._padding_;
      pFVar18 = FAutomationTestFramework::Get();
      local_398.Data = local_298.Base;
      local_388.Size = 0;
      pFVar6 = pFVar18->CurrentTest;
      local_388.Data = (FScriptContainerElement *)0x0;
      local_398.Size = CONCAT44(local_398.Size._4_4_,(int)local_298.CurPos - (int)local_298.Base);
      local_2e8._0_8_ = local_298.Base;
      local_2e8._8_8_ = local_398.Size;
      local_368 = (undefined1  [8])0x0;
      uStack_360._0_4_ = 0;
      uStack_360._4_4_ = 0;
      pTVar19 = FCbFieldView::AsString
                          ((FCbFieldView *)&local_2f8,(TStringView<char8_t> *)&local_2b8,
                           (TStringView<char8_t> *)local_368);
      local_368 = (undefined1  [8])pTVar19->DataPtr;
      uStack_360 = *(void **)&pTVar19->Size;
      FAutomationTestBase::TestEqual
                (pFVar6,L"FCbWriter(String, Long).AsString()",(TStringView<char8_t> *)local_368,
                 (TStringView<char8_t> *)local_2e8);
      TCbFieldIterator<FCbField>::operator++(&local_358);
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_358._padding_);
  }
  else {
    pcVar5 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_398,L"%s: The two values are not equal.");
    (*pcVar5)(this,&local_398,0);
    if (local_398.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_310);
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_298);
  FCbWriter::Reset(local_168);
  local_398.Size._0_4_ = 4;
  local_398.Data = ::s___;
  local_368 = (undefined1  [8])::s___;
  uStack_360._0_4_ = 4;
  uStack_360._4_4_ = local_398.Size._4_4_;
  local_328[0] = 0xde00d83d;
  FCbWriter::AddString(local_168,(TStringView<char8_t> *)local_368);
  local_398.Data = local_328;
  local_398.Size = CONCAT44(local_398.Size._4_4_,2);
  uStack_360 = (void *)local_398.Size;
  local_368 = (undefined1  [8])local_398.Data;
  FCbWriter::AddString(local_168,(TStringView<wchar_t> *)local_368);
  FCbWriter::Save(local_168,(FCbFieldIterator *)&local_320);
  TVar8.Owner = local_310[0].Owner;
  pFVar21 = pFVar17;
  if (local_310[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_310[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_310[0].Owner)->_padding_ + 8))(local_310[0].Owner);
    }
    pFVar21 = (FScriptContainerElement *)(TVar8.Owner)->Size;
  }
  TVar8.Owner = local_310[0].Owner;
  if (local_310[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_310[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_310[0].Owner)->_padding_ + 8))(local_310[0].Owner);
    }
    pFVar17 = (TVar8.Owner)->Data;
  }
  local_398.Data = pFVar17;
  local_398.Size = (ulong64)pFVar21;
  EVar10 = ValidateCompactBinaryRange(&local_398,All);
  if (EVar10 == None) {
    local_358._padding_ = (longlong)local_320;
    local_358._padding_ = (longlong)pFStack_318;
    if (local_310[0].Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar2 = &(local_310[0].Owner)->ReferenceCountsAndFlags;
      aVar4 = *paVar2;
      *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + 1);
      UNLOCK();
      if (((ulonglong)aVar4 & 0x3fffffff) == 0) {
        LOCK();
        (local_310[0].Owner)->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)(local_310[0].Owner)->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
      }
    }
    while ((local_358._padding_ & 0x1fU) != 0) {
      local_2f8.Data = (FScriptContainerElement *)local_358._padding_;
      pFStack_2f0 = (FScriptContainerElement *)local_358._padding_;
      pFVar18 = FAutomationTestFramework::Get();
      local_398.Data = ::s___;
      local_398.Size = CONCAT44(local_398.Size._4_4_,4);
      pFVar6 = pFVar18->CurrentTest;
      local_388.Size = 0;
      local_388.Data = (FScriptContainerElement *)0x0;
      local_368 = (undefined1  [8])0x0;
      uStack_360._0_4_ = 0;
      uStack_360._4_4_ = 0;
      local_2e8._0_8_ = ::s___;
      local_2e8._8_8_ = local_398.Size;
      pTVar19 = FCbFieldView::AsString
                          ((FCbFieldView *)&local_2f8,(TStringView<char8_t> *)&local_2b8,
                           (TStringView<char8_t> *)local_368);
      local_368 = (undefined1  [8])pTVar19->DataPtr;
      uStack_360 = *(void **)&pTVar19->Size;
      FAutomationTestBase::TestEqual
                (pFVar6,L"FCbWriter(String, Unicode).AsString()",(TStringView<char8_t> *)local_368,
                 (TStringView<char8_t> *)local_2e8);
      TCbFieldIterator<FCbField>::operator++(&local_358);
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_358._padding_);
  }
  else {
    pcVar5 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_398,L"%s: The two values are not equal.");
    (*pcVar5)(this,&local_398,0);
    if (local_398.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_310);
  FCbWriter::~FCbWriter(local_168);
  return;
}

