// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cbdfb0

EAutomationTestFlags __thiscall FMemoryReaderTest::GetTestFlags(FMemoryReaderTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cbdfc0

bool __thiscall FMemoryReaderTest::IsStressTest(FMemoryReaderTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cbdfd0

uint __thiscall FMemoryReaderTest::GetRequiredDeviceNum(FMemoryReaderTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cbdfe0

FString * __thiscall
FMemoryReaderTest::GetTestSourceFileName(FMemoryReaderTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryReaderTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cbe010

int __thiscall FMemoryReaderTest::GetTestSourceFileLine(FMemoryReaderTest *this)

{
  return 10;
}

// GetTests @ 141cbe020

/* WARNING: Removing unreachable block (ram,0x000141cbe19e) */

void __thiscall
FMemoryReaderTest::GetTests
          (FMemoryReaderTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cbe1c0

bool __thiscall FMemoryReaderTest::RunTest(FMemoryReaderTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cbe1f0

FString * __thiscall
FMemoryReaderTest::GetBeautifiedTestName(FMemoryReaderTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FMemoryReaderTest @ 141ce7890

FMemoryReaderTest * __thiscall
FMemoryReaderTest::FMemoryReaderTest(FMemoryReaderTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FMemoryReaderTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::MemoryReader");
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

// TestBody @ 141d21b60

void __thiscall FMemoryReaderTest::TestBody(FMemoryReaderTest *this,FString *param_1)

{
  uint *puVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  ulonglong uVar4;
  double dVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  int iVar8;
  FAutomationTestFramework *pFVar9;
  uint uVar10;
  char cVar11;
  char cVar12;
  bool bVar13;
  ulong64 local_res18;
  undefined1 local_res20 [8];
  FString local_2f8;
  ushort local_2e8 [2];
  ushort local_2e4 [2];
  undefined2 local_2e0 [2];
  char local_2dc;
  char local_2db;
  char local_2da;
  char local_2d9;
  ushort local_2d8 [2];
  ushort local_2d4 [2];
  short local_2d0 [2];
  ushort local_2cc [2];
  ushort local_2c8 [2];
  uint local_2c4;
  uint local_2c0;
  uint local_2bc;
  short local_2b8 [2];
  uint local_2b4;
  uint local_2b0;
  float local_2ac;
  uint local_2a8;
  uint local_2a4;
  float local_2a0 [2];
  ulong64 local_298;
  ulong64 local_290;
  double local_288 [2];
  FMemoryReader local_278;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_1c8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_118;
  ulong64 local_108;
  ulong64 local_100;
  double local_f8;
  ulong64 local_f0;
  ulong64 local_e8;
  FString local_e0;
  FString local_d0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,8,&local_118.AllocatorInstance,&local_118.ArrayNum,&local_118.ArrayMax);
  *(undefined8 *)local_118.AllocatorInstance.Data = 0x8877665544332211;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_278);
  local_278._padding_ = 0;
  local_278._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_278.Bytes = &local_118;
  local_278.LimitSize = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading((FArchiveState *)&local_278,true);
  (**(code **)(local_278._padding_ + 0x108))(&local_278,0);
  local_278._padding_ = local_278._padding_ | 0x10000;
  if (*(ulong64 **)(local_278._padding_ + 8) < *(ulong64 **)local_278._padding_ + 1) {
    FArchive::SerializeByteOrderSwapped((FArchive *)&local_278,&local_res18);
  }
  else {
    local_res18 = **(ulong64 **)local_278._padding_;
    *(longlong *)local_278._padding_ = *(longlong *)local_278._padding_ + 8;
  }
  if (local_res18 != 0x1122334455667788) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c0,"Test reading uint64 in swapped byte order.");
    (*pcVar3)(pFVar2,&local_c0,0);
    if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.AllocatorInstance.Data);
    }
  }
  FArchive::~FArchive((FArchive *)&local_278);
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a0,L"Joe");
  ::FString::FString(&local_b0,L"서울사람");
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_1c8);
  local_1c8._padding_ = 0;
  local_1c8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_1c8.Bytes = &local_c0;
  local_1c8.ArchiveName.ComparisonIndex.Value = 0;
  local_1c8.ArchiveName.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&local_1c8,true);
  (**(code **)(local_1c8._padding_ + 0x108))(&local_1c8,0);
  iVar8 = local_a0.Data.ArrayNum;
  FVar6.Data = local_a0.Data.AllocatorInstance.Data;
  dVar5 = __real_4070080000000000;
  local_1c8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  local_2e8[0] = 0x3344;
  local_290 = 0x99aabbccddeeff00;
  local_2e0[0] = 0xf2;
  local_288[0] = __real_4070080000000000;
  local_res18 = CONCAT71(local_res18._1_7_,0x12);
  local_res20[0] = 0x34;
  local_2e4[0] = 0x1122;
  local_2c4 = 0x11223344;
  local_2c0 = 0x55667788;
  local_298 = 0x1122334455667788;
  local_2bc = 0x43008000;
  local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_a0.Data.ArrayNum == 0) {
    local_e0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a0.Data.ArrayNum,0,(ForAnyElementType *)&local_e0,local_a0.Data.ArrayNum,
               &local_e0.Data.ArrayMax);
    memcpy(local_e0.Data.AllocatorInstance.Data,FVar6.Data,(longlong)iVar8 * 2);
  }
  iVar8 = local_b0.Data.ArrayNum;
  FVar6.Data = local_b0.Data.AllocatorInstance.Data;
  local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_b0.Data.ArrayNum == 0) {
    local_d0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_b0.Data.ArrayNum,0,(ForAnyElementType *)&local_d0,local_b0.Data.ArrayNum,
               &local_d0.Data.ArrayMax);
    memcpy(local_d0.Data.AllocatorInstance.Data,FVar6.Data,(longlong)iVar8 * 2);
  }
  if (*(undefined1 **)(local_1c8._padding_ + 8) < *(undefined1 **)local_1c8._padding_ + 1) {
    if (*(code **)(local_1c8._padding_ + 0x188) ==
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,&local_res18,1);
    }
    else {
      (**(code **)(local_1c8._padding_ + 0x188))();
    }
  }
  else {
    local_res18 = CONCAT71(local_res18._1_7_,**(undefined1 **)local_1c8._padding_);
    *(ulonglong *)local_1c8._padding_ = *(ulonglong *)local_1c8._padding_ + 1;
  }
  if (*(ushort **)(local_1c8._padding_ + 8) < *(ushort **)local_1c8._padding_ + 1) {
    if ((local_1c8._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_1c8._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,local_2e4,2);
      }
      else {
        (**(code **)(local_1c8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1c8,local_2e4);
    }
  }
  else {
    local_2e4[0] = **(ushort **)local_1c8._padding_;
    *(ulonglong *)local_1c8._padding_ = *(ulonglong *)local_1c8._padding_ + 2;
  }
  if (*(uint **)(local_1c8._padding_ + 8) < *(uint **)local_1c8._padding_ + 1) {
    if ((local_1c8._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_1c8._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,&local_2c4,4);
      }
      else {
        (**(code **)(local_1c8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1c8,&local_2c4);
    }
  }
  else {
    local_2c4 = **(uint **)local_1c8._padding_;
    *(ulonglong *)local_1c8._padding_ = *(ulonglong *)local_1c8._padding_ + 4;
  }
  if (*(ulong64 **)(local_1c8._padding_ + 8) < *(ulong64 **)local_1c8._padding_ + 1) {
    if ((local_1c8._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_1c8._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,&local_298,8);
      }
      else {
        (**(code **)(local_1c8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1c8,&local_298);
    }
  }
  else {
    local_298 = **(ulong64 **)local_1c8._padding_;
    *(ulonglong *)local_1c8._padding_ = *(ulonglong *)local_1c8._padding_ + 8;
  }
  if (*(undefined1 **)(local_1c8._padding_ + 8) < *(undefined1 **)local_1c8._padding_ + 1) {
    if (*(code **)(local_1c8._padding_ + 0x188) ==
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,local_res20,1);
    }
    else {
      (**(code **)(local_1c8._padding_ + 0x188))();
    }
  }
  else {
    local_res20[0] = **(undefined1 **)local_1c8._padding_;
    *(ulonglong *)local_1c8._padding_ = *(ulonglong *)local_1c8._padding_ + 1;
  }
  if (*(ushort **)(local_1c8._padding_ + 8) < *(ushort **)local_1c8._padding_ + 1) {
    if ((local_1c8._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_1c8._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,local_2e8,2);
      }
      else {
        (**(code **)(local_1c8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1c8,local_2e8);
    }
  }
  else {
    local_2e8[0] = **(ushort **)local_1c8._padding_;
    *(ulonglong *)local_1c8._padding_ = *(ulonglong *)local_1c8._padding_ + 2;
  }
  if (*(uint **)(local_1c8._padding_ + 8) < *(uint **)local_1c8._padding_ + 1) {
    if ((local_1c8._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_1c8._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,&local_2c0,4);
      }
      else {
        (**(code **)(local_1c8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1c8,&local_2c0);
    }
  }
  else {
    local_2c0 = **(uint **)local_1c8._padding_;
    *(ulonglong *)local_1c8._padding_ = *(ulonglong *)local_1c8._padding_ + 4;
  }
  if (*(ulong64 **)(local_1c8._padding_ + 8) < *(ulong64 **)local_1c8._padding_ + 1) {
    if ((local_1c8._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_1c8._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,&local_290,8);
      }
      else {
        (**(code **)(local_1c8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1c8,&local_290);
    }
  }
  else {
    local_290 = **(ulong64 **)local_1c8._padding_;
    *(ulonglong *)local_1c8._padding_ = *(ulonglong *)local_1c8._padding_ + 8;
  }
  if (*(uint **)(local_1c8._padding_ + 8) < *(uint **)local_1c8._padding_ + 1) {
    if ((local_1c8._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_1c8._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,&local_2bc,4);
      }
      else {
        (**(code **)(local_1c8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1c8,&local_2bc);
    }
  }
  else {
    local_2bc = **(uint **)local_1c8._padding_;
    *(ulonglong *)local_1c8._padding_ = *(ulonglong *)local_1c8._padding_ + 4;
  }
  if (*(double **)(local_1c8._padding_ + 8) < *(double **)local_1c8._padding_ + 1) {
    if ((local_1c8._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_1c8._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,local_288,8);
      }
      else {
        (**(code **)(local_1c8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1c8,(ulong64 *)local_288);
    }
  }
  else {
    local_288[0] = **(double **)local_1c8._padding_;
    *(ulonglong *)local_1c8._padding_ = *(ulonglong *)local_1c8._padding_ + 8;
  }
  puVar1 = *(uint **)local_1c8._padding_ + 1;
  if (*(uint **)(local_1c8._padding_ + 8) < puVar1) {
    uVar4 = (ulonglong)local_2f8.Data.AllocatorInstance.Data >> 0x20;
    local_2f8.Data.AllocatorInstance.Data =
         local_2f8.Data.AllocatorInstance.Data & 0xffffffff00000000;
    if ((local_1c8._padding_ & 1U) == 0) {
      local_2f8.Data.AllocatorInstance.Data._4_4_ = (int)uVar4;
      local_2f8.Data.AllocatorInstance.Data._0_4_ = 1;
    }
    if (*(code **)(local_1c8._padding_ + 0x188) ==
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,&local_2f8,4);
    }
    else {
      (**(code **)(local_1c8._padding_ + 0x188))();
    }
    uVar7 = (uint)local_2f8.Data.AllocatorInstance.Data;
    if (1 < (uint)local_2f8.Data.AllocatorInstance.Data) {
      FArchiveState::SetError((FArchiveState *)&local_1c8);
      uVar7 = (uint)local_2f8.Data.AllocatorInstance.Data;
    }
    uVar10 = 1;
    if ((local_1c8._padding_ & 1U) != 0) goto LAB_141d222d4;
  }
  else {
    uVar7 = **(uint **)local_1c8._padding_;
    *(uint **)local_1c8._padding_ = puVar1;
LAB_141d222d4:
    uVar10 = (uint)(uVar7 != 0);
  }
  if (*(undefined2 **)(local_1c8._padding_ + 8) < *(undefined2 **)local_1c8._padding_ + 1) {
    if ((local_1c8._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_1c8._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,local_2e0,2);
      }
      else {
        (**(code **)(local_1c8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1c8,local_2e0,2);
    }
  }
  else {
    local_2e0[0] = **(undefined2 **)local_1c8._padding_;
    *(ulonglong *)local_1c8._padding_ = *(ulonglong *)local_1c8._padding_ + 2;
  }
  ::operator<<((FArchive *)&local_1c8,&local_e0);
  ::operator<<((FArchive *)&local_1c8,&local_d0);
  local_1c8._padding_ = local_1c8._padding_ | 0x10000;
  if (*(undefined1 **)(local_1c8._padding_ + 8) < *(undefined1 **)local_1c8._padding_ + 1) {
    if (*(code **)(local_1c8._padding_ + 0x188) ==
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,&local_res18,1);
    }
    else {
      (**(code **)(local_1c8._padding_ + 0x188))();
    }
  }
  else {
    local_res18 = CONCAT71(local_res18._1_7_,**(undefined1 **)local_1c8._padding_);
    *(ulonglong *)local_1c8._padding_ = *(ulonglong *)local_1c8._padding_ + 1;
  }
  if (*(ushort **)(local_1c8._padding_ + 8) < *(ushort **)local_1c8._padding_ + 1) {
    if ((local_1c8._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_1c8._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,local_2e4,2);
      }
      else {
        (**(code **)(local_1c8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1c8,local_2e4);
    }
  }
  else {
    local_2e4[0] = **(ushort **)local_1c8._padding_;
    *(ulonglong *)local_1c8._padding_ = *(ulonglong *)local_1c8._padding_ + 2;
  }
  if (*(uint **)(local_1c8._padding_ + 8) < *(uint **)local_1c8._padding_ + 1) {
    if ((local_1c8._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_1c8._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,&local_2c4,4);
      }
      else {
        (**(code **)(local_1c8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1c8,&local_2c4);
    }
  }
  else {
    local_2c4 = **(uint **)local_1c8._padding_;
    *(ulonglong *)local_1c8._padding_ = *(ulonglong *)local_1c8._padding_ + 4;
  }
  if (*(ulong64 **)(local_1c8._padding_ + 8) < *(ulong64 **)local_1c8._padding_ + 1) {
    if ((local_1c8._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_1c8._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,&local_298,8);
      }
      else {
        (**(code **)(local_1c8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1c8,&local_298);
    }
  }
  else {
    local_298 = **(ulong64 **)local_1c8._padding_;
    *(ulonglong *)local_1c8._padding_ = *(ulonglong *)local_1c8._padding_ + 8;
  }
  if (*(undefined1 **)(local_1c8._padding_ + 8) < *(undefined1 **)local_1c8._padding_ + 1) {
    if (*(code **)(local_1c8._padding_ + 0x188) ==
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,local_res20,1);
    }
    else {
      (**(code **)(local_1c8._padding_ + 0x188))();
    }
  }
  else {
    local_res20[0] = **(undefined1 **)local_1c8._padding_;
    *(ulonglong *)local_1c8._padding_ = *(ulonglong *)local_1c8._padding_ + 1;
  }
  if (*(ushort **)(local_1c8._padding_ + 8) < *(ushort **)local_1c8._padding_ + 1) {
    if ((local_1c8._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_1c8._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,local_2e8,2);
      }
      else {
        (**(code **)(local_1c8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1c8,local_2e8);
    }
  }
  else {
    local_2e8[0] = **(ushort **)local_1c8._padding_;
    *(ulonglong *)local_1c8._padding_ = *(ulonglong *)local_1c8._padding_ + 2;
  }
  if (*(uint **)(local_1c8._padding_ + 8) < *(uint **)local_1c8._padding_ + 1) {
    if ((local_1c8._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_1c8._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,&local_2c0,4);
      }
      else {
        (**(code **)(local_1c8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1c8,&local_2c0);
    }
  }
  else {
    local_2c0 = **(uint **)local_1c8._padding_;
    *(ulonglong *)local_1c8._padding_ = *(ulonglong *)local_1c8._padding_ + 4;
  }
  if (*(ulong64 **)(local_1c8._padding_ + 8) < *(ulong64 **)local_1c8._padding_ + 1) {
    if ((local_1c8._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_1c8._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,&local_290,8);
      }
      else {
        (**(code **)(local_1c8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1c8,&local_290);
    }
  }
  else {
    local_290 = **(ulong64 **)local_1c8._padding_;
    *(ulonglong *)local_1c8._padding_ = *(ulonglong *)local_1c8._padding_ + 8;
  }
  if (*(uint **)(local_1c8._padding_ + 8) < *(uint **)local_1c8._padding_ + 1) {
    if ((local_1c8._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_1c8._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,&local_2bc,4);
      }
      else {
        (**(code **)(local_1c8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1c8,&local_2bc);
    }
  }
  else {
    local_2bc = **(uint **)local_1c8._padding_;
    *(ulonglong *)local_1c8._padding_ = *(ulonglong *)local_1c8._padding_ + 4;
  }
  if (*(double **)(local_1c8._padding_ + 8) < *(double **)local_1c8._padding_ + 1) {
    if ((local_1c8._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_1c8._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,local_288,8);
      }
      else {
        (**(code **)(local_1c8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1c8,(ulong64 *)local_288);
    }
  }
  else {
    local_288[0] = **(double **)local_1c8._padding_;
    *(ulonglong *)local_1c8._padding_ = *(ulonglong *)local_1c8._padding_ + 8;
  }
  if (*(ulonglong *)(local_1c8._padding_ + 8) < *(ulonglong *)local_1c8._padding_ + 4) {
    uVar4 = (ulonglong)local_2f8.Data.AllocatorInstance.Data >> 0x20;
    local_2f8.Data.AllocatorInstance.Data =
         local_2f8.Data.AllocatorInstance.Data & 0xffffffff00000000;
    if ((local_1c8._padding_ & 1U) == 0) {
      local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)CONCAT44((int)uVar4,uVar10)
      ;
    }
    if (*(code **)(local_1c8._padding_ + 0x188) ==
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,&local_2f8,4);
    }
    else {
      (**(code **)(local_1c8._padding_ + 0x188))();
    }
    if (1 < (uint)local_2f8.Data.AllocatorInstance.Data) {
      FArchiveState::SetError((FArchiveState *)&local_1c8);
    }
  }
  else {
    *(ulonglong *)local_1c8._padding_ = *(ulonglong *)local_1c8._padding_ + 4;
  }
  if (*(undefined2 **)(local_1c8._padding_ + 8) < *(undefined2 **)local_1c8._padding_ + 1) {
    if ((local_1c8._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_1c8._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,local_2e0,2);
      }
      else {
        (**(code **)(local_1c8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1c8,local_2e0,2);
    }
  }
  else {
    local_2e0[0] = **(undefined2 **)local_1c8._padding_;
    *(ulonglong *)local_1c8._padding_ = *(ulonglong *)local_1c8._padding_ + 2;
  }
  ::operator<<((FArchive *)&local_1c8,&local_e0);
  ::operator<<((FArchive *)&local_1c8,&local_d0);
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.Data.ArrayNum = 0;
  local_70.Data.ArrayMax = 0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_80.Data.ArrayNum = 0;
  local_80.Data.ArrayMax = 0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_60[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_60[0].Data.ArrayNum = 0;
  local_60[0].Data.ArrayMax = 0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_90.Data.ArrayNum = 0;
  local_90.Data.ArrayMax = 0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  local_278._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_278);
  local_278._padding_ = 0;
  local_278._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_278.Bytes = &local_c0;
  local_278.LimitSize = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading((FArchiveState *)&local_278,true);
  (**(code **)(local_278._padding_ + 0x108))(&local_278,0);
  if (*(char **)(local_278._padding_ + 8) < *(char **)local_278._padding_ + 1) {
    if (*(code **)(local_278._padding_ + 0x188) == FMemoryReader::Serialize) {
      FMemoryReader::Serialize(&local_278,&local_2d9,1);
    }
    else {
      (**(code **)(local_278._padding_ + 0x188))();
    }
  }
  else {
    local_2d9 = **(char **)local_278._padding_;
    *(ulonglong *)local_278._padding_ = *(ulonglong *)local_278._padding_ + 1;
  }
  if (*(ushort **)(local_278._padding_ + 8) < *(ushort **)local_278._padding_ + 1) {
    if ((local_278._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_278._padding_ + 0x188) == FMemoryReader::Serialize) {
        FMemoryReader::Serialize(&local_278,local_2d8,2);
      }
      else {
        (**(code **)(local_278._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_278,local_2d8);
    }
  }
  else {
    local_2d8[0] = **(ushort **)local_278._padding_;
    *(ulonglong *)local_278._padding_ = *(ulonglong *)local_278._padding_ + 2;
  }
  if (*(uint **)(local_278._padding_ + 8) < *(uint **)local_278._padding_ + 1) {
    if ((local_278._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_278._padding_ + 0x188) == FMemoryReader::Serialize) {
        FMemoryReader::Serialize(&local_278,&local_2b4,4);
      }
      else {
        (**(code **)(local_278._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_278,&local_2b4);
    }
  }
  else {
    local_2b4 = **(uint **)local_278._padding_;
    *(ulonglong *)local_278._padding_ = *(ulonglong *)local_278._padding_ + 4;
  }
  if (*(ulong64 **)(local_278._padding_ + 8) < *(ulong64 **)local_278._padding_ + 1) {
    if ((local_278._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_278._padding_ + 0x188) == FMemoryReader::Serialize) {
        FMemoryReader::Serialize(&local_278,&local_108,8);
      }
      else {
        (**(code **)(local_278._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_278,&local_108);
    }
  }
  else {
    local_108 = **(ulong64 **)local_278._padding_;
    *(ulonglong *)local_278._padding_ = *(ulonglong *)local_278._padding_ + 8;
  }
  if (*(char **)(local_278._padding_ + 8) < *(char **)local_278._padding_ + 1) {
    if (*(code **)(local_278._padding_ + 0x188) == FMemoryReader::Serialize) {
      FMemoryReader::Serialize(&local_278,&local_2dc,1);
    }
    else {
      (**(code **)(local_278._padding_ + 0x188))();
    }
  }
  else {
    local_2dc = **(char **)local_278._padding_;
    *(ulonglong *)local_278._padding_ = *(ulonglong *)local_278._padding_ + 1;
  }
  if (*(ushort **)(local_278._padding_ + 8) < *(ushort **)local_278._padding_ + 1) {
    if ((local_278._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_278._padding_ + 0x188) == FMemoryReader::Serialize) {
        FMemoryReader::Serialize(&local_278,local_2d4,2);
      }
      else {
        (**(code **)(local_278._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_278,local_2d4);
    }
  }
  else {
    local_2d4[0] = **(ushort **)local_278._padding_;
    *(ulonglong *)local_278._padding_ = *(ulonglong *)local_278._padding_ + 2;
  }
  if (*(uint **)(local_278._padding_ + 8) < *(uint **)local_278._padding_ + 1) {
    if ((local_278._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_278._padding_ + 0x188) == FMemoryReader::Serialize) {
        FMemoryReader::Serialize(&local_278,&local_2b0,4);
      }
      else {
        (**(code **)(local_278._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_278,&local_2b0);
    }
  }
  else {
    local_2b0 = **(uint **)local_278._padding_;
    *(ulonglong *)local_278._padding_ = *(ulonglong *)local_278._padding_ + 4;
  }
  if (*(ulong64 **)(local_278._padding_ + 8) < *(ulong64 **)local_278._padding_ + 1) {
    if ((local_278._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_278._padding_ + 0x188) == FMemoryReader::Serialize) {
        FMemoryReader::Serialize(&local_278,&local_100,8);
      }
      else {
        (**(code **)(local_278._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_278,&local_100);
    }
  }
  else {
    local_100 = **(ulong64 **)local_278._padding_;
    *(ulonglong *)local_278._padding_ = *(ulonglong *)local_278._padding_ + 8;
  }
  if (*(float **)(local_278._padding_ + 8) < *(float **)local_278._padding_ + 1) {
    if ((local_278._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_278._padding_ + 0x188) == FMemoryReader::Serialize) {
        FMemoryReader::Serialize(&local_278,&local_2ac,4);
      }
      else {
        (**(code **)(local_278._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_278,(uint *)&local_2ac);
    }
  }
  else {
    local_2ac = **(float **)local_278._padding_;
    *(ulonglong *)local_278._padding_ = *(ulonglong *)local_278._padding_ + 4;
  }
  if (*(double **)(local_278._padding_ + 8) < *(double **)local_278._padding_ + 1) {
    if ((local_278._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_278._padding_ + 0x188) == FMemoryReader::Serialize) {
        FMemoryReader::Serialize(&local_278,&local_f8,8);
      }
      else {
        (**(code **)(local_278._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_278,(ulong64 *)&local_f8);
    }
  }
  else {
    local_f8 = **(double **)local_278._padding_;
    *(ulonglong *)local_278._padding_ = *(ulonglong *)local_278._padding_ + 8;
  }
  puVar1 = *(uint **)local_278._padding_ + 1;
  if (*(uint **)(local_278._padding_ + 8) < puVar1) {
    cVar11 = (char)local_res18;
    uVar4 = (ulonglong)local_2f8.Data.AllocatorInstance.Data >> 0x20;
    local_2f8.Data.AllocatorInstance.Data =
         local_2f8.Data.AllocatorInstance.Data & 0xffffffff00000000;
    if ((local_278._padding_ & 1U) == 0) {
      local_2f8.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)CONCAT44((int)uVar4,(uint)((char)local_res18 != '\0'));
    }
    if (*(code **)(local_278._padding_ + 0x188) == FMemoryReader::Serialize) {
      FMemoryReader::Serialize(&local_278,&local_2f8,4);
    }
    else {
      (**(code **)(local_278._padding_ + 0x188))();
    }
    if (1 < (uint)local_2f8.Data.AllocatorInstance.Data) {
      FArchiveState::SetError((FArchiveState *)&local_278);
    }
    uVar7 = (uint)local_2f8.Data.AllocatorInstance.Data;
    if ((local_278._padding_ & 1U) != 0) goto LAB_141d22be4;
  }
  else {
    uVar7 = **(uint **)local_278._padding_;
    *(uint **)local_278._padding_ = puVar1;
LAB_141d22be4:
    cVar11 = uVar7 != 0;
  }
  if (*(short **)(local_278._padding_ + 8) < *(short **)local_278._padding_ + 1) {
    if ((local_278._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_278._padding_ + 0x188) == FMemoryReader::Serialize) {
        FMemoryReader::Serialize(&local_278,local_2d0,2);
      }
      else {
        (**(code **)(local_278._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_278,local_2d0,2);
    }
  }
  else {
    local_2d0[0] = **(short **)local_278._padding_;
    *(ulonglong *)local_278._padding_ = *(ulonglong *)local_278._padding_ + 2;
  }
  ::operator<<((FArchive *)&local_278,&local_70);
  ::operator<<((FArchive *)&local_278,local_60);
  local_278._padding_ = local_278._padding_ | 0x10000;
  if (*(char **)(local_278._padding_ + 8) < *(char **)local_278._padding_ + 1) {
    if (*(code **)(local_278._padding_ + 0x188) == FMemoryReader::Serialize) {
      FMemoryReader::Serialize(&local_278,&local_2db,1);
    }
    else {
      (**(code **)(local_278._padding_ + 0x188))();
    }
  }
  else {
    local_2db = **(char **)local_278._padding_;
    *(ulonglong *)local_278._padding_ = *(ulonglong *)local_278._padding_ + 1;
  }
  if (*(ushort **)(local_278._padding_ + 8) < *(ushort **)local_278._padding_ + 1) {
    if ((local_278._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_278._padding_ + 0x188) == FMemoryReader::Serialize) {
        FMemoryReader::Serialize(&local_278,local_2cc,2);
      }
      else {
        (**(code **)(local_278._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_278,local_2cc);
    }
  }
  else {
    local_2cc[0] = **(ushort **)local_278._padding_;
    *(ulonglong *)local_278._padding_ = *(ulonglong *)local_278._padding_ + 2;
  }
  if (*(uint **)(local_278._padding_ + 8) < *(uint **)local_278._padding_ + 1) {
    if ((local_278._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_278._padding_ + 0x188) == FMemoryReader::Serialize) {
        FMemoryReader::Serialize(&local_278,&local_2a8,4);
      }
      else {
        (**(code **)(local_278._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_278,&local_2a8);
    }
  }
  else {
    local_2a8 = **(uint **)local_278._padding_;
    *(ulonglong *)local_278._padding_ = *(ulonglong *)local_278._padding_ + 4;
  }
  if (*(ulong64 **)(local_278._padding_ + 8) < *(ulong64 **)local_278._padding_ + 1) {
    if ((local_278._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_278._padding_ + 0x188) == FMemoryReader::Serialize) {
        FMemoryReader::Serialize(&local_278,&local_f0,8);
      }
      else {
        (**(code **)(local_278._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_278,&local_f0);
    }
  }
  else {
    local_f0 = **(ulong64 **)local_278._padding_;
    *(ulonglong *)local_278._padding_ = *(ulonglong *)local_278._padding_ + 8;
  }
  if (*(char **)(local_278._padding_ + 8) < *(char **)local_278._padding_ + 1) {
    if (*(code **)(local_278._padding_ + 0x188) == FMemoryReader::Serialize) {
      FMemoryReader::Serialize(&local_278,&local_2da,1);
    }
    else {
      (**(code **)(local_278._padding_ + 0x188))();
    }
  }
  else {
    local_2da = **(char **)local_278._padding_;
    *(ulonglong *)local_278._padding_ = *(ulonglong *)local_278._padding_ + 1;
  }
  if (*(ushort **)(local_278._padding_ + 8) < *(ushort **)local_278._padding_ + 1) {
    if ((local_278._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_278._padding_ + 0x188) == FMemoryReader::Serialize) {
        FMemoryReader::Serialize(&local_278,local_2c8,2);
      }
      else {
        (**(code **)(local_278._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_278,local_2c8);
    }
  }
  else {
    local_2c8[0] = **(ushort **)local_278._padding_;
    *(ulonglong *)local_278._padding_ = *(ulonglong *)local_278._padding_ + 2;
  }
  if (*(uint **)(local_278._padding_ + 8) < *(uint **)local_278._padding_ + 1) {
    if ((local_278._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_278._padding_ + 0x188) == FMemoryReader::Serialize) {
        FMemoryReader::Serialize(&local_278,&local_2a4,4);
      }
      else {
        (**(code **)(local_278._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_278,&local_2a4);
    }
  }
  else {
    local_2a4 = **(uint **)local_278._padding_;
    *(ulonglong *)local_278._padding_ = *(ulonglong *)local_278._padding_ + 4;
  }
  if (*(ulong64 **)(local_278._padding_ + 8) < *(ulong64 **)local_278._padding_ + 1) {
    if ((local_278._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_278._padding_ + 0x188) == FMemoryReader::Serialize) {
        FMemoryReader::Serialize(&local_278,&local_e8,8);
      }
      else {
        (**(code **)(local_278._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_278,&local_e8);
    }
  }
  else {
    local_e8 = **(ulong64 **)local_278._padding_;
    *(ulonglong *)local_278._padding_ = *(ulonglong *)local_278._padding_ + 8;
  }
  if (*(float **)(local_278._padding_ + 8) < *(float **)local_278._padding_ + 1) {
    if ((local_278._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_278._padding_ + 0x188) == FMemoryReader::Serialize) {
        FMemoryReader::Serialize(&local_278,local_2a0,4);
      }
      else {
        (**(code **)(local_278._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_278,(uint *)local_2a0);
    }
  }
  else {
    local_2a0[0] = **(float **)local_278._padding_;
    *(ulonglong *)local_278._padding_ = *(ulonglong *)local_278._padding_ + 4;
  }
  if (*(undefined8 **)(local_278._padding_ + 8) < *(undefined8 **)local_278._padding_ + 1) {
    if ((local_278._padding_ & 0x10000U) == 0) {
      (**(code **)(local_278._padding_ + 0x188))(&local_278,&local_118,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_278,(ulong64 *)&local_118);
    }
  }
  else {
    local_118.AllocatorInstance.Data =
         (FScriptContainerElement *)**(undefined8 **)local_278._padding_;
    *(ulonglong *)local_278._padding_ = *(ulonglong *)local_278._padding_ + 8;
  }
  puVar1 = *(uint **)local_278._padding_ + 1;
  if (*(uint **)(local_278._padding_ + 8) < puVar1) {
    cVar12 = (char)local_res18;
    uVar4 = (ulonglong)local_2f8.Data.AllocatorInstance.Data >> 0x20;
    local_2f8.Data.AllocatorInstance.Data =
         local_2f8.Data.AllocatorInstance.Data & 0xffffffff00000000;
    if ((local_278._padding_ & 1U) == 0) {
      local_2f8.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)CONCAT44((int)uVar4,(uint)((char)local_res18 != '\0'));
    }
    (**(code **)(local_278._padding_ + 0x188))(&local_278,&local_2f8,4);
    if (1 < (uint)local_2f8.Data.AllocatorInstance.Data) {
      FArchiveState::SetError((FArchiveState *)&local_278);
    }
    uVar7 = (uint)local_2f8.Data.AllocatorInstance.Data;
    if ((local_278._padding_ & 1U) != 0) goto LAB_141d22ff9;
  }
  else {
    uVar7 = **(uint **)local_278._padding_;
    *(uint **)local_278._padding_ = puVar1;
LAB_141d22ff9:
    cVar12 = uVar7 != 0;
  }
  if (*(short **)(local_278._padding_ + 8) < *(short **)local_278._padding_ + 1) {
    if ((local_278._padding_ & 0x10000U) == 0) {
      (**(code **)(local_278._padding_ + 0x188))(&local_278,local_2b8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_278,local_2b8,2);
    }
  }
  else {
    local_2b8[0] = **(short **)local_278._padding_;
    *(ulonglong *)local_278._padding_ = *(ulonglong *)local_278._padding_ + 2;
  }
  ::operator<<((FArchive *)&local_278,&local_80);
  ::operator<<((FArchive *)&local_278,&local_90);
  if (local_2d9 != '\x12') {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Test reading \'u8\' from byte stream");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_2d8[0] != 0x1122) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Test reading \'u16\' from byte stream");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_2b4 != 0x11223344) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Test reading \'u32\' from byte stream");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_108 != 0x1122334455667788) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Test reading \'u64\' from byte stream");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_2dc != '4') {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Test reading \'s8\' from byte stream");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_2d4[0] != 0x3344) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Test reading \'s16\' from byte stream");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_2b0 != 0x55667788) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Test reading \'s32\' from byte stream");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_100 != 0x99aabbccddeeff00) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Test reading \'s64\' from byte stream");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_2ac != __real_43008000) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Test reading \'foat\' from byte stream");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_f8 != dVar5) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Test reading \'double\' from byte stream");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (cVar11 != '\x01') {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Test reading \'bool\' from byte stream");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_2d0[0] != 0xf2) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Test reading \'wchar\' from byte stream");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_70.Data.ArrayNum == local_a0.Data.ArrayNum) {
    if (1 < local_70.Data.ArrayNum) {
      iVar8 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_70.Data.AllocatorInstance.Data,
                         (wchar_t *)local_a0.Data.AllocatorInstance.Data);
      bVar13 = iVar8 == 0;
      goto LAB_141d2341a;
    }
  }
  else {
    bVar13 = local_a0.Data.ArrayNum + local_70.Data.ArrayNum == 1;
LAB_141d2341a:
    if (!bVar13) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar2 = pFVar9->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_2f8,"Test reading \'ansi str\' from byte stream");
      (*pcVar3)(pFVar2,&local_2f8,0);
      if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_60[0].Data.ArrayNum == local_b0.Data.ArrayNum) {
    if (1 < local_60[0].Data.ArrayNum) {
      iVar8 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_60[0].Data.AllocatorInstance.Data,
                         (wchar_t *)local_b0.Data.AllocatorInstance.Data);
      bVar13 = iVar8 == 0;
      goto LAB_141d23493;
    }
  }
  else {
    bVar13 = local_b0.Data.ArrayNum + local_60[0].Data.ArrayNum == 1;
LAB_141d23493:
    if (!bVar13) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar2 = pFVar9->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_2f8,"Test reading \'utf16 str\' from byte stream");
      (*pcVar3)(pFVar2,&local_2f8,0);
      if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_2db != '\x12') {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Test reading \'u8-swapped\' from byte stream");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_2cc[0] != 0x1122) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Test reading \'u16-swapped\' from byte stream");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_2a8 != 0x11223344) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Test reading \'u32-swapped\' from byte stream");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_f0 != 0x1122334455667788) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Test reading \'u64-swapped\' from byte stream");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_2da != '4') {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Test reading \'s8-swapped\' from byte stream");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_2c8[0] != 0x3344) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Test reading \'s16\'-swapped\' from byte stream");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_2a4 != 0x55667788) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Test reading \'s32-swapped\' from byte stream");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_e8 != 0x99aabbccddeeff00) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Test reading \'s64-swapped\' from byte stream");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_2a0[0] != __real_43008000) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Test reading \'float-swapped\' from byte stream");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if ((double)local_118.AllocatorInstance.Data != dVar5) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Test reading \'double-swapped\' from byte stream");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (cVar12 != '\x01') {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Test reading \'bool-swapped\' from byte stream");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_2b8[0] != 0xf2) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Test reading \'wchar-swapped\' from byte stream");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_80.Data.ArrayNum == local_a0.Data.ArrayNum) {
    if (1 < local_80.Data.ArrayNum) {
      iVar8 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_80.Data.AllocatorInstance.Data,
                         (wchar_t *)local_a0.Data.AllocatorInstance.Data);
      bVar13 = iVar8 == 0;
      goto LAB_141d23881;
    }
  }
  else {
    bVar13 = local_a0.Data.ArrayNum + local_80.Data.ArrayNum == 1;
LAB_141d23881:
    if (!bVar13) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar2 = pFVar9->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_2f8,"Test reading \'ansi-swapped\' from byte stream");
      (*pcVar3)(pFVar2,&local_2f8,0);
      if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_90.Data.ArrayNum == local_b0.Data.ArrayNum) {
    if (local_90.Data.ArrayNum < 2) goto LAB_141d23941;
    iVar8 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)local_90.Data.AllocatorInstance.Data,
                       (wchar_t *)local_b0.Data.AllocatorInstance.Data);
    bVar13 = iVar8 == 0;
  }
  else {
    bVar13 = local_b0.Data.ArrayNum + local_90.Data.ArrayNum == 1;
  }
  if (!bVar13) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Test reading \'utf16-swapped\' from byte stream");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
LAB_141d23941:
  FArchive::~FArchive((FArchive *)&local_278);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_1c8);
  if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  return;
}

