// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cbf550

EAutomationTestFlags __thiscall FMemoryWriterTest::GetTestFlags(FMemoryWriterTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cbf560

bool __thiscall FMemoryWriterTest::IsStressTest(FMemoryWriterTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cbf5c0

uint __thiscall FMemoryWriterTest::GetRequiredDeviceNum(FMemoryWriterTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cbf5d0

FString * __thiscall
FMemoryWriterTest::GetTestSourceFileName(FMemoryWriterTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cbf600

int __thiscall FMemoryWriterTest::GetTestSourceFileLine(FMemoryWriterTest *this)

{
  return 0x42;
}

// GetTests @ 141cbf610

/* WARNING: Removing unreachable block (ram,0x000141cbf78e) */

void __thiscall
FMemoryWriterTest::GetTests
          (FMemoryWriterTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cbf7b0

bool __thiscall FMemoryWriterTest::RunTest(FMemoryWriterTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cbf7e0

FString * __thiscall
FMemoryWriterTest::GetBeautifiedTestName(FMemoryWriterTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FMemoryWriterTest @ 141ce7a60

FMemoryWriterTest * __thiscall
FMemoryWriterTest::FMemoryWriterTest(FMemoryWriterTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FMemoryWriterTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::MemoryWriter");
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

// TestBody @ 141d23a20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMemoryWriterTest::TestBody(FMemoryWriterTest *this,FString *param_1)

{
  uint *puVar1;
  code *pcVar2;
  double dVar3;
  float fVar4;
  ForAnyElementType _Src;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStackY_1608 [32];
  char local_15c8 [8];
  char local_15c0 [8];
  char local_15b8 [8];
  char local_15b0 [8];
  undefined1 local_15a8;
  undefined1 local_15a7;
  undefined1 local_15a6;
  ushort local_15a0 [4];
  ushort local_1598 [4];
  FScriptContainerElement local_1590;
  FScriptContainerElement local_1588;
  FScriptContainerElement local_1580;
  ushort local_1578 [4];
  ushort local_1570 [4];
  undefined2 local_1568;
  undefined2 local_1564;
  uint local_1560 [2];
  uint local_1558 [2];
  float local_1550 [2];
  uint local_1548;
  uint local_1544;
  short local_1540;
  short local_1538;
  uint local_1530 [2];
  uint local_1528 [2];
  float local_1520 [2];
  undefined4 local_1518;
  undefined4 local_1514;
  float local_1510;
  FString local_1508;
  FString local_14f8;
  ulong64 local_14e8;
  ulong64 local_14e0;
  double local_14d8;
  FString local_14d0;
  int local_14c0;
  int local_14b8;
  int local_14b0;
  uint local_14a8;
  uint local_14a4;
  uint local_14a0;
  uint local_149c;
  ulong64 local_1498;
  ulong64 local_1490;
  double local_1488;
  uint *local_1480;
  undefined8 local_1478;
  uint *local_1470;
  undefined8 local_1468;
  uint *local_1460;
  undefined8 local_1458;
  uint *local_1450;
  undefined8 local_1448;
  undefined8 local_1440;
  double local_1438;
  undefined8 local_1430;
  undefined8 local_1428;
  undefined8 local_1420;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1418;
  undefined8 local_1408;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1400;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_13f0;
  undefined8 local_13e0;
  longlong local_13d8;
  longlong local_13d0;
  longlong local_13c8;
  FArchiveState local_13b8;
  undefined8 local_1328;
  uint **local_1320;
  undefined8 local_1318;
  FArchiveState local_1308;
  undefined8 local_1278;
  uint **local_1270;
  undefined8 local_1268;
  FArchiveState local_1258;
  undefined8 local_11c8;
  uint **local_11c0;
  undefined8 local_11b8;
  FArchiveState local_11a8;
  undefined8 local_1118;
  uint **local_1110;
  undefined8 local_1108;
  undefined1 local_10f8 [24];
  ulonglong *local_10e0;
  byte local_10c0;
  byte local_10be;
  undefined1 local_1038 [24];
  ulonglong *local_1020;
  byte local_1000;
  undefined1 local_f78 [24];
  longlong *local_f60;
  byte local_f3e;
  undefined1 local_eb8 [24];
  longlong *local_ea0;
  byte local_e7e;
  undefined1 local_df8 [24];
  longlong *local_de0;
  byte local_dbe;
  undefined1 local_d38 [24];
  longlong *local_d20;
  byte local_cfe;
  undefined1 local_c78 [24];
  longlong *local_c60;
  byte local_c3e;
  undefined1 local_bb8 [24];
  longlong *local_ba0;
  byte local_b7e;
  undefined1 local_af8 [24];
  longlong *local_ae0;
  byte local_abe;
  undefined1 local_a38 [24];
  longlong *local_a20;
  byte local_9fe;
  undefined1 local_978 [24];
  longlong *local_960;
  byte local_93e;
  undefined1 local_8b8 [24];
  longlong *local_8a0;
  byte local_87e;
  undefined1 local_7f8 [24];
  longlong *local_7e0;
  byte local_7be;
  undefined1 local_738 [24];
  longlong *local_720;
  byte local_6fe;
  undefined1 local_678 [24];
  longlong *local_660;
  byte local_63e;
  undefined1 local_5b8 [24];
  longlong *local_5a0;
  byte local_57e;
  undefined1 local_4f8 [24];
  longlong *local_4e0;
  byte local_4be;
  undefined1 local_438 [24];
  longlong *local_420;
  byte local_3fe;
  undefined1 local_378 [24];
  longlong *local_360;
  byte local_33e;
  undefined1 local_2b8 [24];
  longlong *local_2a0;
  byte local_27e;
  undefined1 local_1f8 [24];
  longlong *local_1e0;
  undefined1 local_138 [24];
  longlong *local_120;
  wchar_t local_78 [4];
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1608;
  MemoryWriterTestUtil::MemoryWriterTester::MemoryWriterTester((MemoryWriterTester *)local_1f8);
  local_15c8[0] = '\x12';
  local_15a8 = 0x12;
  if ((char *)local_1e0[1] < (char *)*local_1e0 + 1) {
    (**(code **)(local_1f8._16_8_ + 0x188))(local_1f8 + 0x10,local_15c8,1);
  }
  else {
    local_15c8[0] = *(char *)*local_1e0;
    *local_1e0 = *local_1e0 + 1;
  }
  if ((local_1f8._8_4_ != 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WrittenCount == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x37,L"Unexpected number of bytes written by the writer"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_15c8[0] != '\x12') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value == Original",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x1e,L"The writer unexpectedly modified the input value"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(FScriptContainerElement *)local_1f8._0_8_ != (FScriptContainerElement)0x12) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &Original, sizeof(Original)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x1f,L"The written value doesn\'t match the expected one."), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::~FArchive((FArchive *)(local_1f8 + 0x10));
  if ((FScriptContainerElement *)local_1f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1f8._0_8_);
  }
  MemoryWriterTestUtil::MemoryWriterTester::MemoryWriterTester((MemoryWriterTester *)local_138);
  local_15c0[0] = '4';
  local_15a7 = 0x34;
  if ((char *)local_120[1] < (char *)*local_120 + 1) {
    (**(code **)(local_138._16_8_ + 0x188))(local_138 + 0x10,local_15c0,1);
  }
  else {
    local_15c0[0] = *(char *)*local_120;
    *local_120 = *local_120 + 1;
  }
  if ((local_138._8_4_ != 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WrittenCount == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x37,L"Unexpected number of bytes written by the writer"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_15c0[0] != '4') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value == Original",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x1e,L"The writer unexpectedly modified the input value"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement)0x34) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &Original, sizeof(Original)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x1f,L"The written value doesn\'t match the expected one."), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::~FArchive((FArchive *)(local_138 + 0x10));
  if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_138._0_8_);
  }
  MemoryWriterTestUtil::MemoryWriterTester::MemoryWriterTester((MemoryWriterTester *)local_f78);
  local_15a0[0] = 0x1122;
  local_1568 = 0x1122;
  if ((ushort *)local_f60[1] < (ushort *)*local_f60 + 1) {
    if ((local_f3e & 1) == 0) {
      (**(code **)(local_f78._16_8_ + 0x188))((FArchive *)(local_f78 + 0x10),local_15a0,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)(local_f78 + 0x10),local_15a0);
    }
  }
  else {
    local_15a0[0] = *(ushort *)*local_f60;
    *local_f60 = *local_f60 + 2;
  }
  if ((local_f78._8_4_ != 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WrittenCount == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x37,L"Unexpected number of bytes written by the writer"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_15a0[0] != 0x1122) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value == Original",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x1e,L"The writer unexpectedly modified the input value"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(short *)local_f78._0_8_ != 0x1122) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &Original, sizeof(Original)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x1f,L"The written value doesn\'t match the expected one."), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::~FArchive((FArchive *)(local_f78 + 0x10));
  if ((FScriptContainerElement *)local_f78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f78._0_8_);
  }
  MemoryWriterTestUtil::MemoryWriterTester::MemoryWriterTester((MemoryWriterTester *)local_eb8);
  local_1598[0] = 0x3344;
  local_1564 = 0x3344;
  if ((ushort *)local_ea0[1] < (ushort *)*local_ea0 + 1) {
    if ((local_e7e & 1) == 0) {
      (**(code **)(local_eb8._16_8_ + 0x188))((FArchive *)(local_eb8 + 0x10),local_1598,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)(local_eb8 + 0x10),local_1598);
    }
  }
  else {
    local_1598[0] = *(ushort *)*local_ea0;
    *local_ea0 = *local_ea0 + 2;
  }
  if ((local_eb8._8_4_ != 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WrittenCount == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x37,L"Unexpected number of bytes written by the writer"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_1598[0] != 0x3344) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value == Original",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x1e,L"The writer unexpectedly modified the input value"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(short *)local_eb8._0_8_ != 0x3344) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &Original, sizeof(Original)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x1f,L"The written value doesn\'t match the expected one."), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::~FArchive((FArchive *)(local_eb8 + 0x10));
  if ((FScriptContainerElement *)local_eb8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_eb8._0_8_);
  }
  MemoryWriterTestUtil::MemoryWriterTester::MemoryWriterTester((MemoryWriterTester *)local_df8);
  local_1560[0] = 0x11223344;
  local_1518 = 0x11223344;
  if ((uint *)local_de0[1] < (uint *)*local_de0 + 1) {
    if ((local_dbe & 1) == 0) {
      (**(code **)(local_df8._16_8_ + 0x188))((FArchive *)(local_df8 + 0x10),local_1560,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)(local_df8 + 0x10),local_1560);
    }
  }
  else {
    local_1560[0] = *(uint *)*local_de0;
    *local_de0 = *local_de0 + 4;
  }
  if ((local_df8._8_4_ != 4) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WrittenCount == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x37,L"Unexpected number of bytes written by the writer"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_1560[0] != 0x11223344) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value == Original",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x1e,L"The writer unexpectedly modified the input value"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(int *)local_df8._0_8_ != 0x11223344) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &Original, sizeof(Original)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x1f,L"The written value doesn\'t match the expected one."), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::~FArchive((FArchive *)(local_df8 + 0x10));
  if ((FScriptContainerElement *)local_df8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_df8._0_8_);
  }
  MemoryWriterTestUtil::MemoryWriterTester::MemoryWriterTester((MemoryWriterTester *)local_d38);
  local_1558[0] = 0x55667788;
  local_1514 = 0x55667788;
  if ((uint *)local_d20[1] < (uint *)*local_d20 + 1) {
    if ((local_cfe & 1) == 0) {
      (**(code **)(local_d38._16_8_ + 0x188))((FArchive *)(local_d38 + 0x10),local_1558,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)(local_d38 + 0x10),local_1558);
    }
  }
  else {
    local_1558[0] = *(uint *)*local_d20;
    *local_d20 = *local_d20 + 4;
  }
  if ((local_d38._8_4_ != 4) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WrittenCount == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x37,L"Unexpected number of bytes written by the writer"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_1558[0] != 0x55667788) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value == Original",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x1e,L"The writer unexpectedly modified the input value"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(int *)local_d38._0_8_ != 0x55667788) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &Original, sizeof(Original)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x1f,L"The written value doesn\'t match the expected one."), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::~FArchive((FArchive *)(local_d38 + 0x10));
  if ((FScriptContainerElement *)local_d38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d38._0_8_);
  }
  MemoryWriterTestUtil::MemoryWriterTester::MemoryWriterTester((MemoryWriterTester *)local_c78);
  local_14e8 = 0x1122334455667788;
  local_13e0 = 0x1122334455667788;
  if ((ulong64 *)local_c60[1] < (ulong64 *)*local_c60 + 1) {
    if ((local_c3e & 1) == 0) {
      (**(code **)(local_c78._16_8_ + 0x188))((FArchive *)(local_c78 + 0x10),&local_14e8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)(local_c78 + 0x10),&local_14e8);
    }
  }
  else {
    local_14e8 = *(ulong64 *)*local_c60;
    *local_c60 = *local_c60 + 8;
  }
  if ((local_c78._8_4_ != 8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WrittenCount == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x37,L"Unexpected number of bytes written by the writer"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_14e8 != 0x1122334455667788) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value == Original",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x1e,L"The writer unexpectedly modified the input value"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(longlong *)local_c78._0_8_ != 0x1122334455667788) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &Original, sizeof(Original)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x1f,L"The written value doesn\'t match the expected one."), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::~FArchive((FArchive *)(local_c78 + 0x10));
  if ((FScriptContainerElement *)local_c78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c78._0_8_);
  }
  MemoryWriterTestUtil::MemoryWriterTester::MemoryWriterTester((MemoryWriterTester *)local_bb8);
  local_14e0 = 0x99aabbccddeeff00;
  local_1408 = 0x99aabbccddeeff00;
  if ((ulong64 *)local_ba0[1] < (ulong64 *)*local_ba0 + 1) {
    if ((local_b7e & 1) == 0) {
      (**(code **)(local_bb8._16_8_ + 0x188))((FArchive *)(local_bb8 + 0x10),&local_14e0,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)(local_bb8 + 0x10),&local_14e0);
    }
  }
  else {
    local_14e0 = *(ulong64 *)*local_ba0;
    *local_ba0 = *local_ba0 + 8;
  }
  if ((local_bb8._8_4_ != 8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WrittenCount == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x37,L"Unexpected number of bytes written by the writer"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_14e0 != 0x99aabbccddeeff00) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value == Original",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x1e,L"The writer unexpectedly modified the input value"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(longlong *)local_bb8._0_8_ != -0x6655443322110100) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &Original, sizeof(Original)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x1f,L"The written value doesn\'t match the expected one."), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::~FArchive((FArchive *)(local_bb8 + 0x10));
  if ((FScriptContainerElement *)local_bb8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_bb8._0_8_);
  }
  MemoryWriterTestUtil::MemoryWriterTester::MemoryWriterTester((MemoryWriterTester *)local_af8);
  fVar4 = __real_43008000;
  local_1550[0] = 128.5;
  local_1510 = __real_43008000;
  if ((float *)local_ae0[1] < (float *)*local_ae0 + 1) {
    if ((local_abe & 1) == 0) {
      (**(code **)(local_af8._16_8_ + 0x188))((FArchive *)(local_af8 + 0x10),local_1550,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)(local_af8 + 0x10),(uint *)local_1550);
    }
  }
  else {
    local_1550[0] = *(float *)*local_ae0;
    *local_ae0 = *local_ae0 + 4;
  }
  if ((local_af8._8_4_ != 4) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WrittenCount == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x37,L"Unexpected number of bytes written by the writer"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_1550[0] != fVar4) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value == Original",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x1e,L"The writer unexpectedly modified the input value"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(float *)local_af8._0_8_ != local_1510) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &Original, sizeof(Original)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x1f,L"The written value doesn\'t match the expected one."), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::~FArchive((FArchive *)(local_af8 + 0x10));
  if ((FScriptContainerElement *)local_af8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_af8._0_8_);
  }
  MemoryWriterTestUtil::MemoryWriterTester::MemoryWriterTester((MemoryWriterTester *)local_a38);
  dVar3 = __real_4070080000000000;
  local_14d8 = __real_4070080000000000;
  local_1438 = __real_4070080000000000;
  if ((double *)local_a20[1] < (double *)*local_a20 + 1) {
    if ((local_9fe & 1) == 0) {
      (**(code **)(local_a38._16_8_ + 0x188))((FArchive *)(local_a38 + 0x10),&local_14d8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)(local_a38 + 0x10),(ulong64 *)&local_14d8);
    }
  }
  else {
    local_14d8 = *(double *)*local_a20;
    *local_a20 = *local_a20 + 8;
  }
  if ((local_a38._8_4_ != 8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WrittenCount == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x37,L"Unexpected number of bytes written by the writer"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_14d8 != dVar3) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value == Original",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x1e,L"The writer unexpectedly modified the input value"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(double *)local_a38._0_8_ != local_1438) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &Original, sizeof(Original)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x1f,L"The written value doesn\'t match the expected one."), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::~FArchive((FArchive *)(local_a38 + 0x10));
  if ((FScriptContainerElement *)local_a38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a38._0_8_);
  }
  MemoryWriterTestUtil::MemoryWriterTester::MemoryWriterTester((MemoryWriterTester *)local_1038);
  bVar5 = true;
  local_15a6 = 1;
  puVar1 = (uint *)*local_1020 + 1;
  if ((uint *)local_1020[1] < puVar1) {
    local_1548 = (uint)((local_1000 & 1) == 0);
    (**(code **)(local_1038._16_8_ + 0x188))(local_1038 + 0x10,&local_1548,4);
    if (1 < local_1548) {
      FArchiveState::SetError((FArchiveState *)(local_1038 + 0x10));
    }
    uVar9 = local_1548;
    if ((local_1000 & 1) != 0) goto LAB_141d2461f;
  }
  else {
    uVar9 = *(uint *)*local_1020;
    *local_1020 = (ulonglong)puVar1;
LAB_141d2461f:
    bVar5 = uVar9 != 0;
  }
  if ((local_1038._8_4_ != 4) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("WrittenCount == sizeof(int32)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x33,L"Unexpected number of bytes written by the writer"), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value == Original",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x1e,L"The writer unexpectedly modified the input value"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(FScriptContainerElement *)local_1038._0_8_ != (FScriptContainerElement)0x1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &Original, sizeof(Original)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x1f,L"The written value doesn\'t match the expected one."), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::~FArchive((FArchive *)(local_1038 + 0x10));
  if ((FScriptContainerElement *)local_1038._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1038._0_8_);
  }
  MemoryWriterTestUtil::MemoryWriterTester::MemoryWriterTester((MemoryWriterTester *)local_978);
  local_93e = local_93e | 1;
  local_15b8[0] = '\x12';
  local_1590 = (FScriptContainerElement)0x12;
  if ((char *)local_960[1] < (char *)*local_960 + 1) {
    (**(code **)(local_978._16_8_ + 0x188))(local_978 + 0x10,local_15b8,1);
  }
  else {
    local_15b8[0] = *(char *)*local_960;
    *local_960 = *local_960 + 1;
  }
  if ((local_978._8_4_ != 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WrittenCount == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x37,L"Unexpected number of bytes written by the writer"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_15b8[0] != '\x12') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value == Original",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x29,L"The writer unexpectedly modified the input value"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(FScriptContainerElement *)local_978._0_8_ != local_1590) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &Swapped, sizeof(Swapped)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x2a,L"The written value doesn\'t match the swapped value."), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::~FArchive((FArchive *)(local_978 + 0x10));
  if ((FScriptContainerElement *)local_978._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_978._0_8_);
  }
  MemoryWriterTestUtil::MemoryWriterTester::MemoryWriterTester((MemoryWriterTester *)local_8b8);
  local_87e = local_87e | 1;
  local_15b0[0] = '4';
  local_1588 = (FScriptContainerElement)0x34;
  if ((char *)local_8a0[1] < (char *)*local_8a0 + 1) {
    (**(code **)(local_8b8._16_8_ + 0x188))(local_8b8 + 0x10,local_15b0,1);
  }
  else {
    local_15b0[0] = *(char *)*local_8a0;
    *local_8a0 = *local_8a0 + 1;
  }
  if ((local_8b8._8_4_ != 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WrittenCount == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x37,L"Unexpected number of bytes written by the writer"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_15b0[0] != '4') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value == Original",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x29,L"The writer unexpectedly modified the input value"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(FScriptContainerElement *)local_8b8._0_8_ != local_1588) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &Swapped, sizeof(Swapped)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x2a,L"The written value doesn\'t match the swapped value."), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::~FArchive((FArchive *)(local_8b8 + 0x10));
  if ((FScriptContainerElement *)local_8b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_8b8._0_8_);
  }
  MemoryWriterTestUtil::MemoryWriterTester::MemoryWriterTester((MemoryWriterTester *)local_738);
  local_6fe = local_6fe | 1;
  local_1578[0] = 0x1122;
  local_1538 = 0x2211;
  if ((ushort *)local_720[1] < (ushort *)*local_720 + 1) {
    FArchive::SerializeByteOrderSwapped((FArchive *)(local_738 + 0x10),local_1578);
  }
  else {
    local_1578[0] = *(ushort *)*local_720;
    *local_720 = *local_720 + 2;
  }
  if ((local_738._8_4_ != 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WrittenCount == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x37,L"Unexpected number of bytes written by the writer"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_1578[0] != 0x1122) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value == Original",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x29,L"The writer unexpectedly modified the input value"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(short *)local_738._0_8_ != local_1538) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &Swapped, sizeof(Swapped)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x2a,L"The written value doesn\'t match the swapped value."), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::~FArchive((FArchive *)(local_738 + 0x10));
  if ((FScriptContainerElement *)local_738._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_738._0_8_);
  }
  MemoryWriterTestUtil::MemoryWriterTester::MemoryWriterTester((MemoryWriterTester *)local_678);
  local_63e = local_63e | 1;
  local_1570[0] = 0x3344;
  local_1540 = 0x4433;
  if ((ushort *)local_660[1] < (ushort *)*local_660 + 1) {
    FArchive::SerializeByteOrderSwapped((FArchive *)(local_678 + 0x10),local_1570);
  }
  else {
    local_1570[0] = *(ushort *)*local_660;
    *local_660 = *local_660 + 2;
  }
  if ((local_678._8_4_ != 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WrittenCount == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x37,L"Unexpected number of bytes written by the writer"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_1570[0] != 0x3344) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value == Original",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x29,L"The writer unexpectedly modified the input value"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(short *)local_678._0_8_ != local_1540) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &Swapped, sizeof(Swapped)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x2a,L"The written value doesn\'t match the swapped value."), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::~FArchive((FArchive *)(local_678 + 0x10));
  if ((FScriptContainerElement *)local_678._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_678._0_8_);
  }
  MemoryWriterTestUtil::MemoryWriterTester::MemoryWriterTester((MemoryWriterTester *)local_5b8);
  local_57e = local_57e | 1;
  local_1530[0] = 0x11223344;
  local_14c0 = 0x44332211;
  if ((uint *)local_5a0[1] < (uint *)*local_5a0 + 1) {
    FArchive::SerializeByteOrderSwapped((FArchive *)(local_5b8 + 0x10),local_1530);
  }
  else {
    local_1530[0] = *(uint *)*local_5a0;
    *local_5a0 = *local_5a0 + 4;
  }
  if ((local_5b8._8_4_ != 4) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WrittenCount == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x37,L"Unexpected number of bytes written by the writer"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_1530[0] != 0x11223344) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value == Original",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x29,L"The writer unexpectedly modified the input value"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(int *)local_5b8._0_8_ != local_14c0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &Swapped, sizeof(Swapped)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x2a,L"The written value doesn\'t match the swapped value."), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::~FArchive((FArchive *)(local_5b8 + 0x10));
  if ((FScriptContainerElement *)local_5b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_5b8._0_8_);
  }
  MemoryWriterTestUtil::MemoryWriterTester::MemoryWriterTester((MemoryWriterTester *)local_4f8);
  local_4be = local_4be | 1;
  local_1528[0] = 0x55667788;
  local_14b8 = -0x778899ab;
  if ((uint *)local_4e0[1] < (uint *)*local_4e0 + 1) {
    FArchive::SerializeByteOrderSwapped((FArchive *)(local_4f8 + 0x10),local_1528);
  }
  else {
    local_1528[0] = *(uint *)*local_4e0;
    *local_4e0 = *local_4e0 + 4;
  }
  if ((local_4f8._8_4_ != 4) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WrittenCount == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x37,L"Unexpected number of bytes written by the writer"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_1528[0] != 0x55667788) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value == Original",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x29,L"The writer unexpectedly modified the input value"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(int *)local_4f8._0_8_ != local_14b8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &Swapped, sizeof(Swapped)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x2a,L"The written value doesn\'t match the swapped value."), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::~FArchive((FArchive *)(local_4f8 + 0x10));
  if ((FScriptContainerElement *)local_4f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_4f8._0_8_);
  }
  MemoryWriterTestUtil::MemoryWriterTester::MemoryWriterTester((MemoryWriterTester *)local_7f8);
  local_7be = local_7be | 1;
  local_1498 = 0x1122334455667788;
  local_13d8 = -0x778899aabbccddef;
  if ((ulong64 *)local_7e0[1] < (ulong64 *)*local_7e0 + 1) {
    FArchive::SerializeByteOrderSwapped((FArchive *)(local_7f8 + 0x10),&local_1498);
  }
  else {
    local_1498 = *(ulong64 *)*local_7e0;
    *local_7e0 = *local_7e0 + 8;
  }
  if ((local_7f8._8_4_ != 8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WrittenCount == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x37,L"Unexpected number of bytes written by the writer"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_1498 != 0x1122334455667788) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value == Original",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x29,L"The writer unexpectedly modified the input value"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(longlong *)local_7f8._0_8_ != local_13d8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &Swapped, sizeof(Swapped)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x2a,L"The written value doesn\'t match the swapped value."), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::~FArchive((FArchive *)(local_7f8 + 0x10));
  if ((FScriptContainerElement *)local_7f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_7f8._0_8_);
  }
  MemoryWriterTestUtil::MemoryWriterTester::MemoryWriterTester((MemoryWriterTester *)local_438);
  local_3fe = local_3fe | 1;
  local_1490 = 0x99aabbccddeeff00;
  local_13d0 = 0xffeeddccbbaa99;
  if ((ulong64 *)local_420[1] < (ulong64 *)*local_420 + 1) {
    FArchive::SerializeByteOrderSwapped((FArchive *)(local_438 + 0x10),&local_1490);
  }
  else {
    local_1490 = *(ulong64 *)*local_420;
    *local_420 = *local_420 + 8;
  }
  if ((local_438._8_4_ != 8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WrittenCount == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x37,L"Unexpected number of bytes written by the writer"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_1490 != 0x99aabbccddeeff00) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value == Original",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x29,L"The writer unexpectedly modified the input value"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(longlong *)local_438._0_8_ != local_13d0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &Swapped, sizeof(Swapped)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x2a,L"The written value doesn\'t match the swapped value."), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::~FArchive((FArchive *)(local_438 + 0x10));
  if ((FScriptContainerElement *)local_438._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_438._0_8_);
  }
  MemoryWriterTestUtil::MemoryWriterTester::MemoryWriterTester((MemoryWriterTester *)local_378);
  local_33e = local_33e | 1;
  local_1520[0] = 128.5;
  local_14b0 = 0x800043;
  if ((float *)local_360[1] < (float *)*local_360 + 1) {
    FArchive::SerializeByteOrderSwapped((FArchive *)(local_378 + 0x10),(uint *)local_1520);
  }
  else {
    local_1520[0] = *(float *)*local_360;
    *local_360 = *local_360 + 4;
  }
  if ((local_378._8_4_ != 4) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WrittenCount == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x37,L"Unexpected number of bytes written by the writer"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_1520[0] != fVar4) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value == Original",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x29,L"The writer unexpectedly modified the input value"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(int *)local_378._0_8_ != local_14b0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &Swapped, sizeof(Swapped)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x2a,L"The written value doesn\'t match the swapped value."), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::~FArchive((FArchive *)(local_378 + 0x10));
  if ((FScriptContainerElement *)local_378._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_378._0_8_);
  }
  MemoryWriterTestUtil::MemoryWriterTester::MemoryWriterTester((MemoryWriterTester *)local_2b8);
  local_27e = local_27e | 1;
  local_1488 = dVar3;
  local_13c8 = 0x87040;
  if ((double *)local_2a0[1] < (double *)*local_2a0 + 1) {
    FArchive::SerializeByteOrderSwapped((FArchive *)(local_2b8 + 0x10),(ulong64 *)&local_1488);
  }
  else {
    local_1488 = *(double *)*local_2a0;
    *local_2a0 = *local_2a0 + 8;
  }
  if ((local_2b8._8_4_ != 8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WrittenCount == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x37,L"Unexpected number of bytes written by the writer"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_1488 != dVar3) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value == Original",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x29,L"The writer unexpectedly modified the input value"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(longlong *)local_2b8._0_8_ != local_13c8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &Swapped, sizeof(Swapped)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x2a,L"The written value doesn\'t match the swapped value."), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::~FArchive((FArchive *)(local_2b8 + 0x10));
  if ((FScriptContainerElement *)local_2b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2b8._0_8_);
  }
  MemoryWriterTestUtil::MemoryWriterTester::MemoryWriterTester((MemoryWriterTester *)local_10f8);
  bVar5 = true;
  local_10be = local_10be | 1;
  local_1580 = (FScriptContainerElement)0x1;
  puVar1 = (uint *)*local_10e0 + 1;
  if ((uint *)local_10e0[1] < puVar1) {
    local_1544 = (uint)((local_10c0 & 1) == 0);
    (**(code **)(local_10f8._16_8_ + 0x188))(local_10f8 + 0x10,&local_1544,4);
    if (1 < local_1544) {
      FArchiveState::SetError((FArchiveState *)(local_10f8 + 0x10));
    }
    uVar9 = local_1544;
    if ((local_10c0 & 1) != 0) goto LAB_141d25193;
  }
  else {
    uVar9 = *(uint *)*local_10e0;
    *local_10e0 = (ulonglong)puVar1;
LAB_141d25193:
    bVar5 = uVar9 != 0;
  }
  if ((local_10f8._8_4_ != 4) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("WrittenCount == sizeof(int32)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x33,L"Unexpected number of bytes written by the writer"), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value == Original",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x29,L"The writer unexpectedly modified the input value"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(FScriptContainerElement *)local_10f8._0_8_ != local_1580) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &Swapped, sizeof(Swapped)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x2a,L"The written value doesn\'t match the swapped value."), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::~FArchive((FArchive *)(local_10f8 + 0x10));
  if ((FScriptContainerElement *)local_10f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_10f8._0_8_);
  }
  ::FString::FString(&local_14f8,L"Joe");
  local_1480 = (uint *)0x0;
  local_1478 = 0;
  local_1430 = 0;
  local_11a8._padding_ = 0;
  local_11a8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  uVar9 = local_14f8.Data.ArrayNum;
  if (local_14f8.Data.ArrayNum == 0) {
    uVar9 = 1;
  }
  local_14a4 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
  local_11a8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_11a8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_11a8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_11a8._40_8_ = 0;
  local_11a8.ArSerializingDefaults = 0;
  local_11a8.ArPortFlags = 0;
  local_11a8.ArMaxSerializeSize = 0;
  local_11a8.ArUEVer.FileVersionUE4 = 0;
  local_11a8.ArUEVer.FileVersionUE5 = 0;
  local_11a8.ArLicenseeUEVer = 0;
  local_11a8.ArEngineVer.Major = 0;
  local_11a8.ArEngineVer.Minor = 0;
  local_11a8.ArEngineVer.Patch = 0;
  local_11a8.ArEngineVer._6_2_ = 0;
  local_11a8.ArEngineVer.Changelist = 0;
  local_11a8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_11a8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_11a8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_11a8.SerializedProperty = (FProperty *)0x0;
  local_11a8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_11a8.bCustomVersionsAreReset = false;
  local_11a8._129_7_ = 0;
  local_11a8.NextProxy = (FArchiveState *)0x0;
  local_14a8 = uVar9;
  FArchiveState::FArchiveState(&local_11a8);
  local_1110 = &local_1480;
  local_1118 = 0;
  local_11a8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_1108 = 0;
  FArchiveState::SetIsSaving(&local_11a8,true);
  (**(code **)(local_11a8._padding_ + 0x108))(&local_11a8,0);
  iVar7 = local_14f8.Data.ArrayNum;
  _Src.Data = local_14f8.Data.AllocatorInstance.Data;
  local_14d0.Data.ArrayNum = local_14f8.Data.ArrayNum;
  local_11a8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  local_14d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_14f8.Data.ArrayNum == 0) {
    local_14d0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_14f8.Data.ArrayNum,0,(ForAnyElementType *)&local_14d0,
               local_14f8.Data.ArrayNum,&local_14d0.Data.ArrayMax);
    memcpy(local_14d0.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar7 * 2);
  }
  ::operator<<((FArchive *)&local_11a8,&local_14d0);
  if (local_14d0.Data.ArrayNum == local_14f8.Data.ArrayNum) {
    if (1 < local_14d0.Data.ArrayNum) {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_14d0.Data.AllocatorInstance.Data,
                         (wchar_t *)local_14f8.Data.AllocatorInstance.Data);
      bVar5 = iVar7 == 0;
      goto LAB_141d253b9;
    }
  }
  else {
    bVar5 = local_14d0.Data.ArrayNum + local_14f8.Data.ArrayNum == 1;
LAB_141d253b9:
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("WriteValue == TestString",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                           ,0xd4,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((*local_1480 != uVar9) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &CharCountInBuffer, sizeof(int32)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0xd5,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar7 = memcmp(local_1480 + 1,"Joe",(longlong)(int)uVar9);
  if ((iVar7 != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData() + sizeof(int32), RawStrBytes, StrByteCount) == 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0xd6,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_14d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_14d0.Data.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_11a8);
  if (local_1480 != (uint *)0x0) {
    FMemory::Free(local_1480);
  }
  local_1470 = (uint *)0x0;
  local_1468 = 0;
  local_13b8._padding_ = 0;
  local_13b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_1428 = 0;
  local_13b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_13b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_13b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_13b8._40_8_ = 0;
  local_13b8.ArSerializingDefaults = 0;
  local_13b8.ArPortFlags = 0;
  local_13b8.ArMaxSerializeSize = 0;
  local_13b8.ArUEVer.FileVersionUE4 = 0;
  local_13b8.ArUEVer.FileVersionUE5 = 0;
  local_13b8.ArLicenseeUEVer = 0;
  local_13b8.ArEngineVer.Major = 0;
  local_13b8.ArEngineVer.Minor = 0;
  local_13b8.ArEngineVer.Patch = 0;
  local_13b8.ArEngineVer._6_2_ = 0;
  local_13b8.ArEngineVer.Changelist = 0;
  local_13b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_13b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_13b8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_13b8.SerializedProperty = (FProperty *)0x0;
  local_13b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_13b8.bCustomVersionsAreReset = false;
  local_13b8._129_7_ = 0;
  local_13b8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_13b8);
  local_1320 = &local_1470;
  local_1328 = 0;
  local_13b8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_1318 = 0;
  FArchiveState::SetIsSaving(&local_13b8,true);
  (**(code **)(local_13b8._padding_ + 0x108))(&local_13b8,0);
  local_13b8.ArForceByteSwapping = '\x01';
  local_13b8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  local_1400.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_1400,(wchar_t *)local_14f8.Data.AllocatorInstance.Data,local_14f8.Data.ArrayNum,
             0);
  ::operator<<((FArchive *)&local_13b8,(FString *)&local_1400);
  if (local_1400.ArrayNum == local_14f8.Data.ArrayNum) {
    if (1 < local_1400.ArrayNum) {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_1400.AllocatorInstance.Data,
                         (wchar_t *)local_14f8.Data.AllocatorInstance.Data);
      bVar5 = iVar7 == 0;
      goto LAB_141d255a5;
    }
  }
  else {
    bVar5 = local_1400.ArrayNum + local_14f8.Data.ArrayNum == 1;
LAB_141d255a5:
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("WriteValue == TestString",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                           ,0xe1,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((*local_1470 != local_14a4) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &CharCountInBufferSwapped, sizeof(int32)) == 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0xe2,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar7 = memcmp(local_1470 + 1,"Joe",(longlong)(int)uVar9);
  if ((iVar7 != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData() + sizeof(int32), RawStrBytes, StrByteCount) == 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0xe3,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_1400.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1400.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_13b8);
  if (local_1470 != (uint *)0x0) {
    FMemory::Free(local_1470);
  }
  if (local_14f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_14f8.Data.AllocatorInstance.Data);
  }
  builtin_wcsncpy(local_78,L"ЄЀ사",4);
  local_70 = 0x40404;
  local_6c = 0xacc0;
  ::FString::FString(&local_1508,local_78);
  iVar7 = local_1508.Data.ArrayNum;
  local_1460 = (uint *)0x0;
  local_1458 = 0;
  local_1420 = 0;
  local_1258._padding_ = 0;
  local_1258.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  uVar9 = -local_1508.Data.ArrayNum;
  if (local_1508.Data.ArrayNum == 0) {
    uVar9 = 0xffffffff;
  }
  local_14a0 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
  local_1258.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_1258.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_1258.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_1258._40_8_ = 0;
  local_1258.ArSerializingDefaults = 0;
  local_1258.ArPortFlags = 0;
  local_1258.ArMaxSerializeSize = 0;
  local_1258.ArUEVer.FileVersionUE4 = 0;
  local_1258.ArUEVer.FileVersionUE5 = 0;
  local_1258.ArLicenseeUEVer = 0;
  local_1258.ArEngineVer.Major = 0;
  local_1258.ArEngineVer.Minor = 0;
  local_1258.ArEngineVer.Patch = 0;
  local_1258.ArEngineVer._6_2_ = 0;
  local_1258.ArEngineVer.Changelist = 0;
  local_1258.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_1258.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_1258.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_1258.SerializedProperty = (FProperty *)0x0;
  local_1258.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_1258.bCustomVersionsAreReset = false;
  local_1258._129_7_ = 0;
  local_1258.NextProxy = (FArchiveState *)0x0;
  local_149c = uVar9;
  FArchiveState::FArchiveState(&local_1258);
  local_11c0 = &local_1460;
  local_11c8 = 0;
  local_1258._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_11b8 = 0;
  FArchiveState::SetIsSaving(&local_1258,true);
  (**(code **)(local_1258._padding_ + 0x108))(&local_1258,0);
  local_1258._padding_ = (longlong)&___7FMemoryWriter__6B_;
  local_13f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_13f0,(wchar_t *)local_1508.Data.AllocatorInstance.Data,local_1508.Data.ArrayNum,
             0);
  ::operator<<((FArchive *)&local_1258,(FString *)&local_13f0);
  if (local_13f0.ArrayNum == local_1508.Data.ArrayNum) {
    if (1 < local_13f0.ArrayNum) {
      iVar8 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_13f0.AllocatorInstance.Data,
                         (wchar_t *)local_1508.Data.AllocatorInstance.Data);
      bVar5 = iVar8 == 0;
      goto LAB_141d257eb;
    }
  }
  else {
    bVar5 = local_13f0.ArrayNum + local_1508.Data.ArrayNum == 1;
LAB_141d257eb:
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("WriteValue == TestString",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                           ,0xfd,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((*local_1460 != uVar9) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &CharCountInBuffer, sizeof(int32)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0xfe,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar8 = iVar7 * 2;
  if (iVar7 == 0) {
    iVar8 = 2;
  }
  iVar7 = memcmp(local_1460 + 1,local_78,(longlong)iVar8);
  if ((iVar7 != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData() + sizeof(int32), RawStrBytes, StrByteCount) == 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0xff,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_13f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_13f0.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_1258);
  if (local_1460 != (uint *)0x0) {
    FMemory::Free(local_1460);
  }
  local_1450 = (uint *)0x0;
  local_1448 = 0;
  local_1308._padding_ = 0;
  local_1308.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_1440 = 0;
  local_1308.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_1308.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_1308.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_1308._40_8_ = 0;
  local_1308.ArSerializingDefaults = 0;
  local_1308.ArPortFlags = 0;
  local_1308.ArMaxSerializeSize = 0;
  local_1308.ArUEVer.FileVersionUE4 = 0;
  local_1308.ArUEVer.FileVersionUE5 = 0;
  local_1308.ArLicenseeUEVer = 0;
  local_1308.ArEngineVer.Major = 0;
  local_1308.ArEngineVer.Minor = 0;
  local_1308.ArEngineVer.Patch = 0;
  local_1308.ArEngineVer._6_2_ = 0;
  local_1308.ArEngineVer.Changelist = 0;
  local_1308.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_1308.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_1308.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_1308.SerializedProperty = (FProperty *)0x0;
  local_1308.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_1308.bCustomVersionsAreReset = false;
  local_1308._129_7_ = 0;
  local_1308.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_1308);
  local_1270 = &local_1450;
  local_1278 = 0;
  local_1308._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_1268 = 0;
  FArchiveState::SetIsSaving(&local_1308,true);
  (**(code **)(local_1308._padding_ + 0x108))(&local_1308,0);
  local_1308.ArForceByteSwapping = '\x01';
  local_1308._padding_ = (longlong)&___7FMemoryWriter__6B_;
  local_1418.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_1418,(wchar_t *)local_1508.Data.AllocatorInstance.Data,local_1508.Data.ArrayNum,
             0);
  ::operator<<((FArchive *)&local_1308,(FString *)&local_1418);
  if (local_1418.ArrayNum == local_1508.Data.ArrayNum) {
    if (local_1418.ArrayNum < 2) goto LAB_141d25a14;
    iVar7 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)local_1418.AllocatorInstance.Data,
                       (wchar_t *)local_1508.Data.AllocatorInstance.Data);
    bVar5 = iVar7 == 0;
  }
  else {
    bVar5 = local_1418.ArrayNum + local_1508.Data.ArrayNum == 1;
  }
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WriteValue == TestString",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x10a,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_141d25a14:
  if ((*local_1450 != local_14a0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData(), &CharCountInBufferSwapped, sizeof(int32)) == 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x10b,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar7 = memcmp(local_1450 + 1,&local_70,(longlong)iVar8);
  if ((iVar7 != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(Bytes.GetData() + sizeof(int32), RawStrBytesSwapped, StrByteCount) == 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\MemoryWriterTest.cpp"
                         ,0x10c,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_1418.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1418.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_1308);
  if (local_1450 != (uint *)0x0) {
    FMemory::Free(local_1450);
  }
  if (local_1508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1508.Data.AllocatorInstance.Data);
  }
  return;
}

