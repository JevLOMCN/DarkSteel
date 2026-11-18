// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Analytics
// Functions: 19

// GetTestFlags @ 14312d610

EAutomationTestFlags __thiscall
FAnalyticsPropertyStoreAutomationTest::GetTestFlags(FAnalyticsPropertyStoreAutomationTest *this)

{
  return EngineFilter|MediumPriority|EditorContext;
}

// IsStressTest @ 14312d620

bool __thiscall
FAnalyticsPropertyStoreAutomationTest::IsStressTest(FAnalyticsPropertyStoreAutomationTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14312d630

uint __thiscall
FAnalyticsPropertyStoreAutomationTest::GetRequiredDeviceNum
          (FAnalyticsPropertyStoreAutomationTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14312d640

FString * __thiscall
FAnalyticsPropertyStoreAutomationTest::GetTestSourceFileName
          (FAnalyticsPropertyStoreAutomationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14312d670

int __thiscall
FAnalyticsPropertyStoreAutomationTest::GetTestSourceFileLine
          (FAnalyticsPropertyStoreAutomationTest *this)

{
  return 0xe;
}

// GetTests @ 14312d680

/* WARNING: Removing unreachable block (ram,0x00014312d76d) */
/* WARNING: Removing unreachable block (ram,0x00014312d838) */

void __thiscall
FAnalyticsPropertyStoreAutomationTest::GetTests
          (FAnalyticsPropertyStoreAutomationTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Analytics.PropertyStore");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 14312d860

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014313112c) */

bool __thiscall
FAnalyticsPropertyStoreAutomationTest::RunTest
          (FAnalyticsPropertyStoreAutomationTest *this,FString *param_1)

{
  code *pcVar1;
  float fVar2;
  code cVar3;
  float fVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  EStatusCode EVar11;
  uint uVar12;
  int iVar13;
  IFileManager *pIVar14;
  FString *pFVar15;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar16;
  uint *puVar17;
  undefined8 *puVar18;
  void *pvVar19;
  FAnalyticsPropertyStore *this_00;
  FAnalyticsPropertyStore *pFVar20;
  FPlatformFileManager *this_01;
  IPlatformFile *pIVar21;
  longlong *plVar22;
  FAnalyticsPropertyStore *this_02;
  int iVar23;
  int iVar24;
  longlong lVar25;
  code **ppcVar26;
  undefined ***pppuVar27;
  wchar_t *pwVar28;
  ForAnyElementType FVar29;
  undefined1 auVar30 [16];
  undefined1 auStackY_1578 [32];
  undefined1 local_1548;
  undefined1 local_1547 [3];
  int local_1544;
  int local_1540;
  bool local_153c [4];
  undefined1 local_1538 [8];
  char local_1530;
  char local_152f;
  char local_152e;
  char local_152d;
  char local_152c;
  char local_152b;
  char local_152a;
  char local_1529;
  uchar local_1528 [8];
  float local_1520;
  uint local_151c;
  uint local_1518;
  float local_1514;
  void *local_1510;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1508;
  FString local_14f8;
  void *local_14e8;
  FString local_14e0;
  void *local_14d0;
  float local_14c8 [2];
  uchar local_14c0 [8];
  FString local_14b8;
  FString local_14a8;
  void *local_1498;
  double local_1490;
  undefined1 *local_1488;
  FDateTime local_1480;
  FDateTime local_1478;
  uint local_1470 [2];
  undefined1 local_1468 [40];
  undefined1 local_1440 [32];
  uchar local_1420 [8];
  float local_1418 [2];
  ForAnyElementType local_1410;
  FAnalyticsPropertyStore *local_1408;
  FAnalyticsPropertyStore *local_1400;
  FAnalyticsPropertyStore *local_13f8;
  void *local_13f0;
  undefined1 local_13e8 [64];
  void *local_13a8;
  long local_13a0 [2];
  FTimespan local_1398;
  FTimespan local_1390;
  FTimespan local_1388;
  int local_1380 [2];
  FTimespan local_1378;
  void *local_1370;
  undefined1 *local_1368;
  void *local_1360;
  void *local_1358;
  FString local_1350;
  FString local_1340;
  FString local_1330;
  FString local_1320;
  FString local_1310;
  FAnalyticsPropertyStore local_12f8;
  code *local_10e8;
  undefined **local_10d8;
  FString *local_10d0;
  FString *local_10c8;
  undefined ***local_10c0;
  code *local_10b8;
  undefined **local_10a8;
  undefined1 *local_10a0;
  undefined1 *local_1098;
  undefined ***local_1090;
  code *local_1088;
  undefined **local_1078;
  code *local_1070;
  undefined ***local_1060;
  code *local_1058;
  undefined **local_1048;
  code *local_1040;
  undefined ***local_1030;
  code *local_1028;
  undefined **local_1018;
  code *local_1010;
  undefined ***local_1000;
  code *local_ff8;
  undefined **local_fe8;
  code *local_fe0;
  undefined ***local_fd0;
  code *local_fc8;
  undefined **local_fb8;
  code *local_fb0;
  undefined ***local_fa0;
  code *local_f98;
  undefined **local_f88;
  code *local_f80;
  undefined ***local_f70;
  code *local_f68 [2];
  undefined **local_f58;
  code *local_f50;
  undefined ***local_f40;
  code *local_f38 [2];
  code *local_f28 [3];
  code **local_f10;
  code *local_f08 [2];
  undefined **local_ef8;
  code *local_ef0;
  undefined ***local_ee0;
  FAnalyticsPropertyStore local_ed8;
  FAnalyticsPropertyStore local_cc8;
  FAnalyticsPropertyStore local_ab8;
  FAnalyticsPropertyStore local_8a8;
  FAnalyticsPropertyStore local_698;
  FAnalyticsPropertyStore local_488;
  FAnalyticsPropertyStore local_278;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1578;
  lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar25 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&I32Key,L"MyInt32");
    atexit(`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l2::
           _dynamic_atexit_destructor_for__I32Key__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar25 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FString::FString(&U32Key,L"MyUInt32");
    atexit(`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l2::
           _dynamic_atexit_destructor_for__U32Key__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*(int *)(lVar25 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FString::FString(&I64Key,L"MyIint64");
    atexit(`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l2::
           _dynamic_atexit_destructor_for__I64Key__);
    _Init_thread_footer(&::_TSS2);
  }
  if ((*(int *)(lVar25 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FString::FString(&U64Key,L"MyUint64");
    atexit(`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l2::
           _dynamic_atexit_destructor_for__U64Key__);
    _Init_thread_footer(&::_TSS3);
  }
  if ((*(int *)(lVar25 + 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    ::FString::FString(&FltKey,L"MyFloat");
    atexit(`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l2::
           _dynamic_atexit_destructor_for__FltKey__);
    _Init_thread_footer(&::_TSS4);
  }
  if ((*(int *)(lVar25 + 0x9d4c) < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    ::FString::FString(&DblKey,L"MyDouble");
    atexit(`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l2::
           _dynamic_atexit_destructor_for__DblKey__);
    _Init_thread_footer(&::_TSS5);
  }
  if ((*(int *)(lVar25 + 0x9d4c) < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
    ::FString::FString(&BoolKey,L"MyBool");
    atexit(`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l2::
           _dynamic_atexit_destructor_for__BoolKey__);
    _Init_thread_footer(&::_TSS6);
  }
  if ((*(int *)(lVar25 + 0x9d4c) < ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
    ::FString::FString(&Str1Key,L"MyStr1");
    atexit(`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l2::
           _dynamic_atexit_destructor_for__Str1Key__);
    _Init_thread_footer(&::_TSS7);
  }
  if ((*(int *)(lVar25 + 0x9d4c) < ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
    ::FString::FString(&Str2Key,L"MyStr2");
    atexit(`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l2::
           _dynamic_atexit_destructor_for__Str2Key__);
    _Init_thread_footer(&::_TSS8);
  }
  if ((*(int *)(lVar25 + 0x9d4c) < ::_TSS9) && (_Init_thread_header(&::_TSS9), ::_TSS9 == -1)) {
    ::FString::FString(&DateKey,L"MyDate");
    atexit(`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l2::
           _dynamic_atexit_destructor_for__DateKey__);
    _Init_thread_footer(&::_TSS9);
  }
  fVar2 = __real_42480000;
  local_14e8 = __real_404e000000000000;
  local_1544 = 10;
  local_151c = 0x14;
  local_1510 = (void *)0x1e;
  local_1488 = &DAT_00000028;
  local_1520 = 50.0;
  local_1548 = (code)0x1;
  ::FString::FString(&local_14f8,"Hello World");
  ::FString::FString(&local_14a8,"Just Do It");
  FDateTime::UtcNow();
  this_02 = (FAnalyticsPropertyStore *)0x0;
  local_14e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_14e0.Data.ArrayNum = 0;
  local_14e0.Data.ArrayMax = 0;
  local_14b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_14b8.Data.ArrayNum = 0;
  local_14b8.Data.ArrayMax = 0;
  local_1478.Ticks = 0;
  pIVar14 = IFileManager::Get();
  pcVar1 = *(code **)((longlong)*pIVar14 + 0x60);
  pFVar15 = FPaths::AutomationTransientDir(&local_1320);
  if ((pFVar15->Data).ArrayNum == 0) {
    pwVar28 = L"";
  }
  else {
    pwVar28 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
  }
  (*pcVar1)(pIVar14,pwVar28);
  if (local_1320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1320.Data.AllocatorInstance.Data);
  }
  pTVar16 = &FPaths::AutomationTransientDir(&local_1310)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_1508,pTVar16,0x20 - (uint)(pTVar16->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_1508,L"AnalyticsPropertyStoreTest.bin",0x1e);
  if (local_1310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1310.Data.AllocatorInstance.Data);
  }
  FAnalyticsPropertyStore::FAnalyticsPropertyStore(&local_698);
  if ((local_698.FileHandle.Ptr != (IFileHandle *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x40,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&local_698.StoreLock);
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_698.StoreLock);
  if ((local_698.NameOffsetMap._8_4_ != local_698.NameOffsetMap._52_4_) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x41,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  FAnalyticsPropertyStore::~FAnalyticsPropertyStore(&local_698);
  FAnalyticsPropertyStore::FAnalyticsPropertyStore(&local_ab8);
  bVar8 = FAnalyticsPropertyStore::Create(&local_ab8,(FString *)&local_1508,0x800);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Create(TestStorePathname, 2 * 1024)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x47,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  if ((local_ab8.FileHandle.Ptr == (IFileHandle *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x48,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&local_ab8.StoreLock);
  uVar7 = local_ab8.NameOffsetMap._52_4_;
  uVar6 = local_ab8.NameOffsetMap._8_4_;
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_ab8.StoreLock);
  if ((uVar6 != uVar7) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x49,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  local_1378.Ticks = 0x7fffffffffffffff;
  FAnalyticsPropertyStore::Flush(&local_ab8,false,&local_1378);
  bVar8 = FAnalyticsPropertyStore::Load(&local_ab8,(FString *)&local_1508);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Load(TestStorePathname)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x4b,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  if ((local_ab8.FileHandle.Ptr == (IFileHandle *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x4c,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&local_ab8.StoreLock);
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_ab8.StoreLock);
  if ((local_ab8.NameOffsetMap._8_4_ != local_ab8.NameOffsetMap._52_4_) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x4d,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  FAnalyticsPropertyStore::~FAnalyticsPropertyStore(&local_ab8);
  FAnalyticsPropertyStore::FAnalyticsPropertyStore(&local_12f8);
  bVar8 = FAnalyticsPropertyStore::Create(&local_12f8,(FString *)&local_1508,0x800);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Create(TestStorePathname, 2 * 1024)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x53,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  if ((local_12f8.FileHandle.Ptr == (IFileHandle *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x54,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if ((local_12f8.NameOffsetMap._8_4_ != local_12f8.NameOffsetMap._52_4_) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x55,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  iVar13 = local_1544;
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  local_1440._16_4_ = iVar13;
  EVar11 = FAnalyticsPropertyStore::SetFixedSizeValueInternal
                     (&local_12f8,&I32Key,I32,local_1440 + 0x10,4);
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if ((EVar11 != Success) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Set(I32Key, Expected_I32) == IAnalyticsPropertyStore::EStatusCode::Success"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x58,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  uVar12 = local_151c;
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  local_1470[0] = uVar12;
  EVar11 = FAnalyticsPropertyStore::SetFixedSizeValueInternal
                     (&local_12f8,&U32Key,U32,(uchar *)local_1470,4);
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if ((EVar11 != Success) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Set(U32Key, Expected_U32) == IAnalyticsPropertyStore::EStatusCode::Success"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x59,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  pvVar19 = local_1510;
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  local_1370 = pvVar19;
  EVar11 = FAnalyticsPropertyStore::SetFixedSizeValueInternal
                     (&local_12f8,&I64Key,I64,(uchar *)&local_1370,8);
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if ((EVar11 != Success) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Set(I64Key, Expected_I64) == IAnalyticsPropertyStore::EStatusCode::Success"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x5a,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  puVar5 = local_1488;
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  local_1368 = puVar5;
  EVar11 = FAnalyticsPropertyStore::SetFixedSizeValueInternal
                     (&local_12f8,&U64Key,U64,(uchar *)&local_1368,8);
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if ((EVar11 != Success) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Set(U64Key, Expected_U64) == IAnalyticsPropertyStore::EStatusCode::Success"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x5b,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  fVar4 = local_1520;
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  local_1418[0] = fVar4;
  EVar11 = FAnalyticsPropertyStore::SetFixedSizeValueInternal
                     (&local_12f8,&FltKey,Flt,(uchar *)local_1418,4);
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if ((EVar11 != Success) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Set(FltKey, Expected_Flt) == IAnalyticsPropertyStore::EStatusCode::Success"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x5c,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  pvVar19 = local_14e8;
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  local_1360 = pvVar19;
  EVar11 = FAnalyticsPropertyStore::SetFixedSizeValueInternal
                     (&local_12f8,&DblKey,Dbl,(uchar *)&local_1360,8);
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if ((EVar11 != Success) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Set(DblKey, Expected_Dbl) == IAnalyticsPropertyStore::EStatusCode::Success"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x5d,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  cVar3 = local_1548;
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  local_1538[0] = cVar3;
  EVar11 = FAnalyticsPropertyStore::SetFixedSizeValueInternal
                     (&local_12f8,&BoolKey,Bool,local_1538,1);
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if ((EVar11 != Success) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Set(BoolKey, Expected_Bool) == IAnalyticsPropertyStore::EStatusCode::Success"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x5e,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  EVar11 = FAnalyticsPropertyStore::SetStringValueInternal(&local_12f8,&Str1Key,&local_14f8,0x19);
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if ((EVar11 != Success) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Set(Str1Key, Expected_Str1, 25) == IAnalyticsPropertyStore::EStatusCode::Success"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x5f,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  local_1358 = local_1498;
  EVar11 = FAnalyticsPropertyStore::SetFixedSizeValueInternal
                     (&local_12f8,&DateKey,Date,(uchar *)&local_1358,8);
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if ((EVar11 != Success) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Set(DateKey, Expected_Date) == IAnalyticsPropertyStore::EStatusCode::Success"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x60,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  EVar11 = FAnalyticsPropertyStore::SetStringValueInternal(&local_12f8,&Str2Key,&local_14a8,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if ((EVar11 != Success) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Set(Str2Key, Expected_Str2) == IAnalyticsPropertyStore::EStatusCode::Success"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x61,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  iVar13 = I32Key.Data.ArrayNum + -1;
  FVar29 = I32Key.Data.AllocatorInstance;
  if (I32Key.Data.ArrayNum == 0) {
    iVar13 = 0;
    FVar29.Data = (FScriptContainerElement *)L"";
  }
  uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)FVar29.Data);
  iVar13 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                       *)&local_12f8.NameOffsetMap,uVar12,&I32Key);
  if (iVar13 == -1) {
LAB_14312e26a:
    LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
LAB_14312e277:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Store.Get(I32Key, Actual_I32) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_I32 == Actual_I32"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                       ,100,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return (bool)uVar9;
    }
  }
  else {
    lVar25 = (longlong)iVar13 * 0x20 + local_12f8.NameOffsetMap._0_8_;
    pFVar20 = (FAnalyticsPropertyStore *)(lVar25 + 0x10);
    if (lVar25 == 0) {
      pFVar20 = this_02;
    }
    if (pFVar20 == (FAnalyticsPropertyStore *)0x0) goto LAB_14312e26a;
    local_12f8.StorageReader._padding_ = (longlong)(uint)pFVar20->_padding_;
    (**(code **)(local_12f8.StorageReader._padding_ + 0x188))
              (&local_12f8.StorageReader,&local_1530,1);
    if (local_1530 != '\0') goto LAB_14312e26a;
    (**(code **)(local_12f8.StorageReader._padding_ + 0x188))
              (&local_12f8.StorageReader,&local_1540,4);
    LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
    if (local_1544 != local_1540) goto LAB_14312e277;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  iVar13 = U32Key.Data.ArrayNum + -1;
  FVar29 = U32Key.Data.AllocatorInstance;
  if (U32Key.Data.ArrayNum == 0) {
    iVar13 = 0;
    FVar29.Data = (FScriptContainerElement *)L"";
  }
  uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)FVar29.Data);
  iVar13 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                       *)&local_12f8.NameOffsetMap,uVar12,&U32Key);
  if (iVar13 == -1) {
LAB_14312e366:
    LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
LAB_14312e373:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Store.Get(U32Key, Actual_U32) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_U32 == Actual_U32"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                       ,0x65,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return (bool)uVar9;
    }
  }
  else {
    lVar25 = (longlong)iVar13 * 0x20 + local_12f8.NameOffsetMap._0_8_;
    pFVar20 = (FAnalyticsPropertyStore *)(lVar25 + 0x10);
    if (lVar25 == 0) {
      pFVar20 = this_02;
    }
    if (pFVar20 == (FAnalyticsPropertyStore *)0x0) goto LAB_14312e366;
    local_12f8.StorageReader._padding_ = (longlong)(uint)pFVar20->_padding_;
    (**(code **)(local_12f8.StorageReader._padding_ + 0x188))
              (&local_12f8.StorageReader,&local_152f,1);
    if (local_152f != '\x01') goto LAB_14312e366;
    (**(code **)(local_12f8.StorageReader._padding_ + 0x188))
              (&local_12f8.StorageReader,&local_1518,4);
    LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
    if (local_151c != local_1518) goto LAB_14312e373;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  pwVar28 = L"";
  iVar13 = I64Key.Data.ArrayNum;
  if (iVar13 != 0) {
    pwVar28 = (wchar_t *)I64Key.Data.AllocatorInstance;
  }
  iVar23 = 0;
  iVar24 = iVar13 + -1;
  if (iVar13 == 0) {
    iVar24 = iVar23;
  }
  uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar24,pwVar28);
  iVar13 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                       *)&local_12f8.NameOffsetMap,uVar12,&I64Key);
  if (iVar13 == -1) {
LAB_14312e462:
    LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
LAB_14312e46f:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Store.Get(I64Key, Actual_I64) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_I64 == Actual_I64"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                       ,0x66,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return (bool)uVar9;
    }
  }
  else {
    lVar25 = (longlong)iVar13 * 0x20 + local_12f8.NameOffsetMap._0_8_;
    pFVar20 = (FAnalyticsPropertyStore *)(lVar25 + 0x10);
    if (lVar25 == 0) {
      pFVar20 = this_02;
    }
    if (pFVar20 == (FAnalyticsPropertyStore *)0x0) goto LAB_14312e462;
    local_12f8.StorageReader._padding_ = (longlong)(uint)pFVar20->_padding_;
    (**(code **)(local_12f8.StorageReader._padding_ + 0x188))
              (&local_12f8.StorageReader,&local_152e,1);
    if (local_152e != '\x02') goto LAB_14312e462;
    (**(code **)(local_12f8.StorageReader._padding_ + 0x188))
              (&local_12f8.StorageReader,&local_14d0,8);
    LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
    if (local_1510 != local_14d0) goto LAB_14312e46f;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  iVar13 = U64Key.Data.ArrayNum + -1;
  FVar29 = U64Key.Data.AllocatorInstance;
  if (U64Key.Data.ArrayNum == 0) {
    iVar13 = iVar23;
    FVar29.Data = (FScriptContainerElement *)L"";
  }
  uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)FVar29.Data);
  iVar13 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                       *)&local_12f8.NameOffsetMap,uVar12,&U64Key);
  if (iVar13 == -1) {
LAB_14312e55d:
    LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
LAB_14312e56a:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Store.Get(U64Key, Acutal_U64) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_U64 == Acutal_U64"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                       ,0x67,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return (bool)uVar9;
    }
  }
  else {
    lVar25 = (longlong)iVar13 * 0x20 + local_12f8.NameOffsetMap._0_8_;
    pFVar20 = (FAnalyticsPropertyStore *)(lVar25 + 0x10);
    if (lVar25 == 0) {
      pFVar20 = this_02;
    }
    if (pFVar20 == (FAnalyticsPropertyStore *)0x0) goto LAB_14312e55d;
    local_12f8.StorageReader._padding_ = (longlong)(uint)pFVar20->_padding_;
    (**(code **)(local_12f8.StorageReader._padding_ + 0x188))
              (&local_12f8.StorageReader,&local_152d,1);
    if (local_152d != '\x03') goto LAB_14312e55d;
    (**(code **)(local_12f8.StorageReader._padding_ + 0x188))
              (&local_12f8.StorageReader,local_1468 + 0x18,8);
    LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
    if (local_1488 != (undefined1 *)local_1468._24_8_) goto LAB_14312e56a;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  iVar13 = FltKey.Data.ArrayNum + -1;
  FVar29 = FltKey.Data.AllocatorInstance;
  if (FltKey.Data.ArrayNum == 0) {
    iVar13 = iVar23;
    FVar29.Data = (FScriptContainerElement *)L"";
  }
  uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)FVar29.Data);
  iVar13 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                       *)&local_12f8.NameOffsetMap,uVar12,&FltKey);
  if (iVar13 == -1) {
LAB_14312e65c:
    LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
LAB_14312e669:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Store.Get(FltKey, Actual_Flt) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_Flt == Actual_Flt"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                       ,0x68,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return (bool)uVar9;
    }
  }
  else {
    lVar25 = (longlong)iVar13 * 0x20 + local_12f8.NameOffsetMap._0_8_;
    pFVar20 = (FAnalyticsPropertyStore *)(lVar25 + 0x10);
    if (lVar25 == 0) {
      pFVar20 = this_02;
    }
    if (pFVar20 == (FAnalyticsPropertyStore *)0x0) goto LAB_14312e65c;
    local_12f8.StorageReader._padding_ = (longlong)(uint)pFVar20->_padding_;
    (**(code **)(local_12f8.StorageReader._padding_ + 0x188))
              (&local_12f8.StorageReader,&local_152c,1);
    if (local_152c != '\x04') goto LAB_14312e65c;
    (**(code **)(local_12f8.StorageReader._padding_ + 0x188))
              (&local_12f8.StorageReader,&local_1514,4);
    LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
    if (local_1520 != local_1514) goto LAB_14312e669;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  iVar13 = DblKey.Data.ArrayNum + -1;
  FVar29 = DblKey.Data.AllocatorInstance;
  if (DblKey.Data.ArrayNum == 0) {
    iVar13 = iVar23;
    FVar29.Data = (FScriptContainerElement *)L"";
  }
  uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)FVar29.Data);
  iVar13 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                       *)&local_12f8.NameOffsetMap,uVar12,&DblKey);
  if (iVar13 == -1) {
LAB_14312e759:
    LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
LAB_14312e766:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Store.Get(DblKey, Actual_Dbl) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_Dbl == Actual_Dbl"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                       ,0x69,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return (bool)uVar9;
    }
  }
  else {
    lVar25 = (longlong)iVar13 * 0x20 + local_12f8.NameOffsetMap._0_8_;
    pFVar20 = (FAnalyticsPropertyStore *)(lVar25 + 0x10);
    if (lVar25 == 0) {
      pFVar20 = this_02;
    }
    if (pFVar20 == (FAnalyticsPropertyStore *)0x0) goto LAB_14312e759;
    local_12f8.StorageReader._padding_ = (longlong)(uint)pFVar20->_padding_;
    (**(code **)(local_12f8.StorageReader._padding_ + 0x188))
              (&local_12f8.StorageReader,&local_152b,1);
    if (local_152b != '\x05') goto LAB_14312e759;
    (**(code **)(local_12f8.StorageReader._padding_ + 0x188))
              (&local_12f8.StorageReader,&local_1490,8);
    LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
    if ((double)local_14e8 != local_1490) goto LAB_14312e766;
  }
  EVar11 = FAnalyticsPropertyStore::Get(&local_12f8,&BoolKey,(bool *)local_1547);
  if (((EVar11 != Success) || (local_1548 != local_1547[0])) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Get(BoolKey, Actual_Bool) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_Bool == Actual_Bool"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x6a,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  EVar11 = FAnalyticsPropertyStore::GetStringValueInternal(&local_12f8,&Str1Key,&local_14e0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if (EVar11 == Success) {
    if (local_14f8.Data.ArrayNum == local_14e0.Data.ArrayNum) {
      if (1 < local_14f8.Data.ArrayNum) {
        iVar13 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)local_14f8.Data.AllocatorInstance.Data,
                            (wchar_t *)local_14e0.Data.AllocatorInstance.Data);
        bVar8 = iVar13 == 0;
        goto LAB_14312e82e;
      }
    }
    else {
      bVar8 = local_14f8.Data.ArrayNum + local_14e0.Data.ArrayNum == 1;
LAB_14312e82e:
      if (!bVar8) goto LAB_14312e835;
    }
  }
  else {
LAB_14312e835:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Store.Get(Str1Key, Actual_Str1) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_Str1 == Actual_Str1"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                       ,0x6b,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return (bool)uVar9;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  puVar17 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
            ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                    *)&local_12f8.NameOffsetMap,&DateKey);
  if (puVar17 == (uint *)0x0) {
LAB_14312e8ec:
    LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
LAB_14312e8f9:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Store.Get(DateKey, Actual_Date) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_Date == Actual_Date"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                       ,0x6c,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return (bool)uVar9;
    }
  }
  else {
    local_12f8.StorageReader._padding_ = (longlong)*puVar17;
    (**(code **)(local_12f8.StorageReader._padding_ + 0x188))
              (&local_12f8.StorageReader,&local_152a,1);
    if (local_152a != '\a') goto LAB_14312e8ec;
    (**(code **)(local_12f8.StorageReader._padding_ + 0x188))
              (&local_12f8.StorageReader,&local_13f0,8);
    local_1478.Ticks = (long64)local_13f0;
    LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
    if (local_1498 != local_13f0) goto LAB_14312e8f9;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  EVar11 = FAnalyticsPropertyStore::GetStringValueInternal(&local_12f8,&Str2Key,&local_14b8);
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if (EVar11 == Success) {
    if (local_14a8.Data.ArrayNum == local_14b8.Data.ArrayNum) {
      if (1 < local_14a8.Data.ArrayNum) {
        iVar13 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)local_14a8.Data.AllocatorInstance.Data,
                            (wchar_t *)local_14b8.Data.AllocatorInstance.Data);
        bVar8 = iVar13 == 0;
        goto LAB_14312e978;
      }
    }
    else {
      bVar8 = local_14a8.Data.ArrayNum + local_14b8.Data.ArrayNum == 1;
LAB_14312e978:
      if (!bVar8) goto LAB_14312e97f;
    }
  }
  else {
LAB_14312e97f:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Store.Get(Str2Key, Actual_Str2) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_Str2 == Actual_Str2"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                       ,0x6d,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return (bool)uVar9;
    }
  }
  ::FString::FString(&local_1350,L"ShouldNotFound");
  EVar11 = FAnalyticsPropertyStore::Get(&local_12f8,&local_1350,local_1380);
  if (local_1350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1350.Data.AllocatorInstance.Data);
  }
  if ((EVar11 != NotFound) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Get(L\"ShouldNotFound\", NotFoundDummy) == IAnalyticsPropertyStore::EStatusCode::NotFound"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x70,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EVar11 = FAnalyticsPropertyStore::Get(&local_12f8,&I32Key,&local_1518);
  if (((EVar11 != BadType) || (local_1518 != local_151c)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Get(I32Key, Actual_U32) == IAnalyticsPropertyStore::EStatusCode::BadType && Actual_U32 == Expected_U32"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x73,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EVar11 = FAnalyticsPropertyStore::Get(&local_12f8,&Str2Key,&local_1490);
  if (((EVar11 != BadType) || (local_1490 != (double)local_14e8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Get(Str2Key, Actual_Dbl) == IAnalyticsPropertyStore::EStatusCode::BadType && Actual_Dbl == Expected_Dbl"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x74,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_12f8,&I32Key);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Contains(I32Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x77,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_12f8,&U32Key);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Contains(U32Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x78,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_12f8,&I64Key);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Contains(I64Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x79,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_12f8,&U64Key);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Contains(U64Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x7a,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_12f8,&FltKey);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Contains(FltKey)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x7b,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_12f8,&DblKey);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Contains(DblKey)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x7c,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_12f8,&BoolKey);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Contains(BoolKey)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x7d,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_12f8,&Str1Key);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Contains(Str1Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x7e,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_12f8,&DateKey);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Contains(DateKey)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x7f,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_12f8,&Str2Key);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Contains(Str2Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x80,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  ::FString::FString(&local_1340,L"IDoNotExist");
  bVar8 = FAnalyticsPropertyStore::Contains(&local_12f8,&local_1340);
  if (local_1340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1340.Data.AllocatorInstance.Data);
  }
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(L\"IDoNotExist\")",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x81,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  local_1544 = 2000;
  EVar11 = FAnalyticsPropertyStore::Set(&local_12f8,&I32Key,2000);
  if ((EVar11 != Success) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Set(I32Key, Expected_I32) == IAnalyticsPropertyStore::EStatusCode::Success"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x85,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EVar11 = FAnalyticsPropertyStore::Get(&local_12f8,&I32Key,&local_1540);
  if ((EVar11 != Success) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Get(I32Key, Actual_I32) == IAnalyticsPropertyStore::EStatusCode::Success"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x86,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  if ((local_1544 != local_1540) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Expected_I32 == Actual_I32",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x87,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  ::FString::operator=(&local_14f8,L"Hello World Update");
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  EVar11 = FAnalyticsPropertyStore::SetStringValueInternal(&local_12f8,&Str1Key,&local_14f8,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if ((EVar11 != Success) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Set(Str1Key, Expected_Str1) == IAnalyticsPropertyStore::EStatusCode::Success"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x8b,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  EVar11 = FAnalyticsPropertyStore::GetStringValueInternal(&local_12f8,&Str1Key,&local_14e0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if (EVar11 == Success) {
    if (local_14e0.Data.ArrayNum == local_14f8.Data.ArrayNum) {
      if (1 < local_14e0.Data.ArrayNum) {
        iVar13 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)local_14e0.Data.AllocatorInstance.Data,
                            (wchar_t *)local_14f8.Data.AllocatorInstance.Data);
        bVar8 = iVar13 == 0;
        goto LAB_14312eeaf;
      }
    }
    else {
      bVar8 = local_14e0.Data.ArrayNum + local_14f8.Data.ArrayNum == 1;
LAB_14312eeaf:
      if (!bVar8) goto LAB_14312eeb6;
    }
  }
  else {
LAB_14312eeb6:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Store.Get(Str1Key, Actual_Str1) == IAnalyticsPropertyStore::EStatusCode::Success && Actual_Str1 == Expected_Str1"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                       ,0x8c,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return (bool)uVar9;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  EVar11 = FAnalyticsPropertyStore::GetStringValueInternal(&local_12f8,&Str2Key,&local_14b8);
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if (EVar11 == Success) {
    if (local_14a8.Data.ArrayNum == local_14b8.Data.ArrayNum) {
      if (1 < local_14a8.Data.ArrayNum) {
        iVar13 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)local_14a8.Data.AllocatorInstance.Data,
                            (wchar_t *)local_14b8.Data.AllocatorInstance.Data);
        bVar8 = iVar13 == 0;
        goto LAB_14312ef35;
      }
    }
    else {
      bVar8 = local_14a8.Data.ArrayNum + local_14b8.Data.ArrayNum == 1;
LAB_14312ef35:
      if (!bVar8) goto LAB_14312ef3c;
    }
  }
  else {
LAB_14312ef3c:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Store.Get(Str2Key, Actual_Str2) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_Str2 == Actual_Str2"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                       ,0x8d,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return (bool)uVar9;
    }
  }
  ::FString::operator=(&local_14a8,L"Hello World Extend");
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  EVar11 = FAnalyticsPropertyStore::SetStringValueInternal(&local_12f8,&Str2Key,&local_14a8,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if ((EVar11 != Success) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Set(Str2Key, Expected_Str2) == IAnalyticsPropertyStore::EStatusCode::Success"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x91,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  EVar11 = FAnalyticsPropertyStore::GetStringValueInternal(&local_12f8,&Str2Key,&local_14b8);
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if (EVar11 == Success) {
    if (local_14a8.Data.ArrayNum == local_14b8.Data.ArrayNum) {
      if (1 < local_14a8.Data.ArrayNum) {
        iVar13 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)local_14a8.Data.AllocatorInstance.Data,
                            (wchar_t *)local_14b8.Data.AllocatorInstance.Data);
        bVar8 = iVar13 == 0;
        goto LAB_14312f027;
      }
    }
    else {
      bVar8 = local_14a8.Data.ArrayNum + local_14b8.Data.ArrayNum == 1;
LAB_14312f027:
      if (!bVar8) goto LAB_14312f02e;
    }
  }
  else {
LAB_14312f02e:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Store.Get(Str2Key, Actual_Str2) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_Str2 == Actual_Str2"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                       ,0x92,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return (bool)uVar9;
    }
  }
  local_1544 = local_1544 + 1;
  local_f40 = (undefined ***)0x0;
  local_f58 = &___7__TFunction_OwnedObject_P6A_NPEBHAEBH_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_f50 = `FAnalyticsPropertyStoreAutomationTest::RunTest'::__l378::<lambda_1>::
              <lambda_invoker_cdecl>;
  local_f68[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<bool_(__cdecl*)(int_const_*,int_const_&),bool,int_const_*,int_const_&>
                 ::Call;
  EVar11 = FAnalyticsPropertyStore::Set
                     (&local_12f8,&I32Key,local_1544,
                      (TFunction<bool___cdecl(int_const_*,int_const_&)> *)local_f68);
  if (local_f68[0] != (code *)0x0) {
    pppuVar27 = &local_f58;
    if (local_f40 != (undefined ***)0x0) {
      pppuVar27 = local_f40;
    }
    (*(code *)(*pppuVar27)[2])();
  }
  if ((EVar11 != Success) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Set(I32Key, Expected_I32, [](const int32* Actual, const int32& Proposed) { return *Actual < Proposed; }) == IAnalyticsPropertyStore::EStatusCode::Success"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x96,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EVar11 = FAnalyticsPropertyStore::Get(&local_12f8,&I32Key,&local_1540);
  if (((EVar11 != Success) || (local_1544 != local_1540)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Get(I32Key, Actual_I32) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_I32 == Actual_I32"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x97,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  local_14c8[0] = local_1520 - fVar2;
  local_1078 = &___7__TFunction_OwnedObject_P6A_NPEBMAEBM_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_1060 = (undefined ***)0x0;
  local_1070 = `FAnalyticsPropertyStoreAutomationTest::RunTest'::__l392::<lambda_2>::
               <lambda_invoker_cdecl>;
  local_1088 = UE::Core::Private::Function::
               TFunctionRefCaller<bool_(__cdecl*)(float_const_*,float_const_&),bool,float_const_*,float_const_&>
               ::Call;
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  EVar11 = FAnalyticsPropertyStore::GetFixedSizeValueInternal(&local_12f8,&FltKey,Flt,local_1468,4);
  if (EVar11 < BadType) {
    local_1410.Data = (FScriptContainerElement *)local_1468;
    if (EVar11 == NotFound) {
      local_1410.Data = (FScriptContainerElement *)this_02;
    }
    UE::Core::Private::Function::CheckCallable(local_1088);
    pcVar1 = local_1088;
    pppuVar27 = &local_1078;
    if (local_1060 != (undefined ***)0x0) {
      pppuVar27 = local_1060;
    }
    puVar18 = (undefined8 *)(*(code *)(*pppuVar27)[1])();
    if (pcVar1 == UE::Core::Private::Function::
                  TFunctionRefCaller<bool_(__cdecl*)(float_const_*,float_const_&),bool,float_const_*,float_const_&>
                  ::Call) {
      cVar10 = (*(code *)*puVar18)(local_1410.Data,local_14c8);
    }
    else {
      cVar10 = (*pcVar1)(puVar18,&local_1410,local_14c8);
    }
    if (cVar10 == '\0') {
      EVar11 = Declined;
    }
    else {
      local_1440._24_4_ = local_14c8[0];
      EVar11 = FAnalyticsPropertyStore::SetFixedSizeValueInternal
                         (&local_12f8,&FltKey,Flt,local_1440 + 0x18,4);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if (local_1088 != (code *)0x0) {
    pppuVar27 = &local_1078;
    if (local_1060 != (undefined ***)0x0) {
      pppuVar27 = local_1060;
    }
    (*(code *)(*pppuVar27)[2])();
  }
  if ((EVar11 != Declined) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Set(FltKey, Expected_Flt - 50.0f, [](const float* Actual, const float& Proposed) { return *Actual < Proposed; }) == IAnalyticsPropertyStore::EStatusCode::Declined"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x9a,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EVar11 = FAnalyticsPropertyStore::Get(&local_12f8,&FltKey,&local_1514);
  if (((EVar11 != Success) || (local_1514 != local_1520)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Get(FltKey, Actual_Flt) == IAnalyticsPropertyStore::EStatusCode::Success && Actual_Flt == Expected_Flt"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x9b,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  local_1048 = &___7__TFunction_OwnedObject_P6A_NPEBNAEBN_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_1468._8_8_ = local_14e8;
  local_1040 = `FAnalyticsPropertyStoreAutomationTest::RunTest'::__l406::<lambda_3>::
               <lambda_invoker_cdecl>;
  local_1030 = (undefined ***)0x0;
  local_1058 = UE::Core::Private::Function::
               TFunctionRefCaller<bool_(__cdecl*)(double_const_*,double_const_&),bool,double_const_*,double_const_&>
               ::Call;
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  EVar11 = FAnalyticsPropertyStore::GetFixedSizeValueInternal(&local_12f8,&BoolKey,Dbl,local_13e8,8)
  ;
  if (EVar11 < BadType) {
    local_1408 = (FAnalyticsPropertyStore *)local_13e8;
    if (EVar11 == NotFound) {
      local_1408 = this_02;
    }
    UE::Core::Private::Function::CheckCallable(local_1058);
    pcVar1 = local_1058;
    pppuVar27 = &local_1048;
    if (local_1030 != (undefined ***)0x0) {
      pppuVar27 = local_1030;
    }
    puVar18 = (undefined8 *)(*(code *)(*pppuVar27)[1])();
    if (pcVar1 == UE::Core::Private::Function::
                  TFunctionRefCaller<bool_(__cdecl*)(double_const_*,double_const_&),bool,double_const_*,double_const_&>
                  ::Call) {
      cVar10 = (*(code *)*puVar18)(local_1408,local_1468 + 8);
    }
    else {
      cVar10 = (*pcVar1)(puVar18,&local_1408,local_1468 + 8);
    }
    if (cVar10 == '\0') {
      EVar11 = Declined;
    }
    else {
      local_13e8._8_8_ = local_1468._8_8_;
      EVar11 = FAnalyticsPropertyStore::SetFixedSizeValueInternal
                         (&local_12f8,&BoolKey,Dbl,local_13e8 + 8,8);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if (local_1058 != (code *)0x0) {
    pppuVar27 = &local_1048;
    if (local_1030 != (undefined ***)0x0) {
      pppuVar27 = local_1030;
    }
    (*(code *)(*pppuVar27)[2])();
  }
  if ((EVar11 != BadType) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Set(BoolKey, Expected_Dbl, [](const double* Actual, const double& Proposed) { { if((!!(!(false)))) { if (FDebug::CheckVerifyFailedImpl2(\"false\", \"C:\\\\Workspace\\\\UnrealEngine\\\\Engine\\\\Source\\\\Runtime\\\\Analytics\\\\Analytics\\\\Private\\\\Tests\\\\AnalyticsPropertyStoreTests.cpp\", 158, L\"\")) { (__nop(), __debugbreak()); } ((void)sizeof((bool)(false))); } }; return *Actual < Proposed; }) == IAnalyticsPropertyStore::EStatusCode::BadType"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x9e,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  ::FString::operator=(&local_14f8,L"Hi, this is Joe, how are you?");
  local_10c0 = (undefined ***)0x0;
  local_10d8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FAnalyticsPropertyStoreAutomationTest::RunTest'::`413'::<lambda_4>,0,0>
                ::_vftable_;
  local_10d0 = &local_14e0;
  local_10e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l413::<lambda_4>,bool,FString_const_*,FString_const_&>
               ::Call;
  local_10c8 = &local_14f8;
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  local_1440._0_8_ = (FScriptContainerElement *)0x0;
  local_1440._8_8_ = (FScriptContainerElement *)0x0;
  EVar11 = FAnalyticsPropertyStore::GetStringValueInternal
                     (&local_12f8,&Str1Key,(FString *)local_1440);
  if (EVar11 < BadType) {
    local_13f8 = (FAnalyticsPropertyStore *)local_1440;
    if (EVar11 == NotFound) {
      local_13f8 = this_02;
    }
    UE::Core::Private::Function::CheckCallable(local_10e8);
    pcVar1 = local_10e8;
    pppuVar27 = &local_10d8;
    if (local_10c0 != (undefined ***)0x0) {
      pppuVar27 = local_10c0;
    }
    pvVar19 = (void *)(*(code *)(*pppuVar27)[1])();
    if (pcVar1 == UE::Core::Private::Function::
                  TFunctionRefCaller<`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l413::<lambda_4>,bool,FString_const_*,FString_const_&>
                  ::Call) {
      cVar10 = `FAnalyticsPropertyStoreAutomationTest::RunTest'::__l413::<lambda_4>::operator()
                         (pvVar19,(FString *)local_13f8,&local_14f8);
    }
    else {
      cVar10 = (*pcVar1)(pvVar19,&local_13f8);
    }
    if (cVar10 != '\0') {
      EVar11 = FAnalyticsPropertyStore::SetStringValueInternal(&local_12f8,&Str1Key,&local_14f8,0);
      goto LAB_14312f563;
    }
    if ((FScriptContainerElement *)local_1440._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1440._0_8_);
    }
    EVar11 = Declined;
  }
  else {
LAB_14312f563:
    if ((FScriptContainerElement *)local_1440._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1440._0_8_);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if (local_10e8 != (code *)0x0) {
    pppuVar27 = &local_10d8;
    if (local_10c0 != (undefined ***)0x0) {
      pppuVar27 = local_10c0;
    }
    (*(code *)(*pppuVar27)[2])();
  }
  if ((EVar11 != Success) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Set(Str1Key, Expected_Str1, [&](const FString* Actual, const FString& Proposed) { { if((!!(!(*Actual == Actual_Str1)))) { if (FDebug::CheckVerifyFailedImpl2(\"*Actual == Actual_Str1\", \"C:\\\\Workspace\\\\UnrealEngine\\\\Engine\\\\Source\\\\Runtime\\\\Analytics\\\\Analytics\\\\Private\\\\Tests\\\\AnalyticsPropertyStoreTests.cpp\", 162, L\"\")) { (__nop(), __debugbreak()); } ((void)sizeof((bool)(false))); } }; { if((!!(!(Proposed == Expected_Str1)))) { if (FDebug::CheckVerifyFailedImpl2(\"Proposed == Expected_Str1\", \"C:\\\\Workspace\\\\UnrealEngine\\\\Engine\\\\Source\\\\Runtime\\\\Analytics\\\\Analytics\\\\Private\\\\Tests\\\\AnalyticsPropertyStoreTests.cpp\", 162, L\"\")) { (__nop(), __debugbreak()); } ((void)sizeof((bool)(false))); } }; return true; }) == IAnalyticsPropertyStore::EStatusCode::Success"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xa2,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  EVar11 = FAnalyticsPropertyStore::GetStringValueInternal(&local_12f8,&Str1Key,&local_14e0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if (EVar11 == Success) {
    if (local_14e0.Data.ArrayNum == local_14f8.Data.ArrayNum) {
      if (1 < local_14e0.Data.ArrayNum) {
        iVar13 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)local_14e0.Data.AllocatorInstance.Data,
                            (wchar_t *)local_14f8.Data.AllocatorInstance.Data);
        bVar8 = iVar13 == 0;
        goto LAB_14312f63a;
      }
    }
    else {
      bVar8 = local_14e0.Data.ArrayNum + local_14f8.Data.ArrayNum == 1;
LAB_14312f63a:
      if (!bVar8) goto LAB_14312f641;
    }
  }
  else {
LAB_14312f641:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Store.Get(Str1Key, Actual_Str1) == IAnalyticsPropertyStore::EStatusCode::Success && Actual_Str1 == Expected_Str1"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                       ,0xa3,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return (bool)uVar9;
    }
  }
  local_1510 = (void *)((longlong)local_1510 + 1);
  local_1018 = &___7__TFunction_OwnedObject_P6A_NAEA_J_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_1000 = (undefined ***)0x0;
  local_1010 = `FAnalyticsPropertyStoreAutomationTest::RunTest'::__l427::<lambda_5>::
               <lambda_invoker_cdecl>;
  local_1028 = UE::Core::Private::Function::
               TFunctionRefCaller<bool_(__cdecl*)(__int64_&),bool,__int64_&>::Call;
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  EVar11 = FAnalyticsPropertyStore::GetFixedSizeValueInternal
                     (&local_12f8,&I64Key,I64,local_1468 + 0x10,8);
  if (EVar11 == Success) {
    UE::Core::Private::Function::CheckCallable(local_1028);
    pcVar1 = local_1028;
    pppuVar27 = &local_1018;
    if (local_1000 != (undefined ***)0x0) {
      pppuVar27 = local_1000;
    }
    puVar18 = (undefined8 *)(*(code *)(*pppuVar27)[1])();
    if (pcVar1 == UE::Core::Private::Function::
                  TFunctionRefCaller<bool_(__cdecl*)(__int64_&),bool,__int64_&>::Call) {
      cVar10 = (*(code *)*puVar18)(local_1468 + 0x10);
    }
    else {
      cVar10 = (*pcVar1)(puVar18,local_1468 + 0x10);
    }
    if (cVar10 == '\0') {
      EVar11 = Declined;
    }
    else {
      local_13e8._16_8_ = local_1468._16_8_;
      EVar11 = FAnalyticsPropertyStore::SetFixedSizeValueInternal
                         (&local_12f8,&I64Key,I64,local_13e8 + 0x10,8);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if (local_1028 != (code *)0x0) {
    pppuVar27 = &local_1018;
    if (local_1000 != (undefined ***)0x0) {
      pppuVar27 = local_1000;
    }
    (*(code *)(*pppuVar27)[2])();
  }
  if ((EVar11 != Success) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Update(I64Key, [](int64& InOutStored) { ++InOutStored; return true; }) == IAnalyticsPropertyStore::EStatusCode::Success"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xa7,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EVar11 = FAnalyticsPropertyStore::Get(&local_12f8,&I64Key,(long64 *)&local_14d0);
  if (((EVar11 != Success) || (local_14d0 != local_1510)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Get(I64Key, Actual_I64) == IAnalyticsPropertyStore::EStatusCode::Success && Actual_I64 == Expected_I64"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xa8,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  local_fd0 = (undefined ***)0x0;
  local_fe8 = &
              ___7__TFunction_OwnedObject_P6A_NAEAUFDateTime___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_ff8 = UE::Core::Private::Function::
              TFunctionRefCaller<bool_(__cdecl*)(FDateTime_&),bool,FDateTime_&>::Call;
  local_fe0 = `FAnalyticsPropertyStoreAutomationTest::RunTest'::__l441::<lambda_6>::
              <lambda_invoker_cdecl>;
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  local_1480.Ticks = 0;
  EVar11 = FAnalyticsPropertyStore::GetDateTimeValueInternal(&local_12f8,&DateKey,&local_1480);
  if (EVar11 == Success) {
    UE::Core::Private::Function::CheckCallable(local_ff8);
    pcVar1 = local_ff8;
    pppuVar27 = &local_fe8;
    if (local_fd0 != (undefined ***)0x0) {
      pppuVar27 = local_fd0;
    }
    puVar18 = (undefined8 *)(*(code *)(*pppuVar27)[1])();
    if (pcVar1 == UE::Core::Private::Function::
                  TFunctionRefCaller<bool_(__cdecl*)(FDateTime_&),bool,FDateTime_&>::Call) {
      cVar10 = (*(code *)*puVar18)(&local_1480);
    }
    else {
      cVar10 = (*pcVar1)(puVar18,&local_1480);
    }
    if (cVar10 == '\0') {
      EVar11 = Declined;
    }
    else {
      local_13e8._24_8_ = local_1480.Ticks;
      EVar11 = FAnalyticsPropertyStore::SetFixedSizeValueInternal
                         (&local_12f8,&DateKey,Date,local_13e8 + 0x18,8);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if (local_ff8 != (code *)0x0) {
    pppuVar27 = &local_fe8;
    if (local_fd0 != (undefined ***)0x0) {
      pppuVar27 = local_fd0;
    }
    (*(code *)(*pppuVar27)[2])();
  }
  if ((EVar11 != Declined) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Update(DateKey, [](FDateTime& InOutStored) { InOutStored = FDateTime::UtcNow(); return false; }) == IAnalyticsPropertyStore::EStatusCode::Declined"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xab,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  puVar17 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
            ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                    *)&local_12f8.NameOffsetMap,&DateKey);
  if (puVar17 == (uint *)0x0) {
LAB_14312f9c9:
    LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
LAB_14312f9d6:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Store.Get(DateKey, Actual_Date) == IAnalyticsPropertyStore::EStatusCode::Success && Actual_Date == Expected_Date"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                       ,0xac,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return (bool)uVar9;
    }
  }
  else {
    local_12f8.StorageReader._padding_ = (longlong)*puVar17;
    (**(code **)(local_12f8.StorageReader._padding_ + 0x188))
              (&local_12f8.StorageReader,&local_1529,1);
    if (local_1529 != '\a') goto LAB_14312f9c9;
    (**(code **)(local_12f8.StorageReader._padding_ + 0x188))
              (&local_12f8.StorageReader,local_13e8 + 0x20,8);
    local_1478.Ticks = local_13e8._32_8_;
    LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
    if ((void *)local_13e8._32_8_ != local_1498) goto LAB_14312f9d6;
  }
  local_fa0 = (undefined ***)0x0;
  local_fb8 = &___7__TFunction_OwnedObject_P6A_NAEAI_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_fc8 = UE::Core::Private::Function::
              TFunctionRefCaller<bool_(__cdecl*)(unsigned_int_&),bool,unsigned_int_&>::Call;
  local_fb0 = `FAnalyticsPropertyStoreAutomationTest::RunTest'::__l455::<lambda_7>::
              <lambda_invoker_cdecl>;
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  EVar11 = FAnalyticsPropertyStore::GetFixedSizeValueInternal(&local_12f8,&Str1Key,U32,local_14c0,4)
  ;
  if (EVar11 == Success) {
    UE::Core::Private::Function::CheckCallable(local_fc8);
    pcVar1 = local_fc8;
    pppuVar27 = &local_fb8;
    if (local_fa0 != (undefined ***)0x0) {
      pppuVar27 = local_fa0;
    }
    puVar18 = (undefined8 *)(*(code *)(*pppuVar27)[1])();
    if (pcVar1 == UE::Core::Private::Function::
                  TFunctionRefCaller<bool_(__cdecl*)(unsigned_int_&),bool,unsigned_int_&>::Call) {
      cVar10 = (*(code *)*puVar18)(local_14c0);
    }
    else {
      cVar10 = (*pcVar1)(puVar18,local_14c0);
    }
    if (cVar10 == '\0') {
      EVar11 = Declined;
    }
    else {
      local_1420[0] = local_14c0[0];
      local_1420[1] = local_14c0[1];
      local_1420[2] = local_14c0[2];
      local_1420[3] = local_14c0[3];
      EVar11 = FAnalyticsPropertyStore::SetFixedSizeValueInternal
                         (&local_12f8,&Str1Key,U32,local_1420,4);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if (local_fc8 != (code *)0x0) {
    pppuVar27 = &local_fb8;
    if (local_fa0 != (undefined ***)0x0) {
      pppuVar27 = local_fa0;
    }
    (*(code *)(*pppuVar27)[2])();
  }
  if ((EVar11 != BadType) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Update(Str1Key, [](uint32& InOutStored) { { if((!!(!(false)))) { if (FDebug::CheckVerifyFailedImpl2(\"false\", \"C:\\\\Workspace\\\\UnrealEngine\\\\Engine\\\\Source\\\\Runtime\\\\Analytics\\\\Analytics\\\\Private\\\\Tests\\\\AnalyticsPropertyStoreTests.cpp\", 175, L\"\")) { (__nop(), __debugbreak()); } ((void)sizeof((bool)(false))); } }; return true; }) == IAnalyticsPropertyStore::EStatusCode::BadType"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xaf,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  local_1548 = (code)(local_1548 == (code)0x0);
  local_10a8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FAnalyticsPropertyStoreAutomationTest::RunTest'::`462'::<lambda_8>,0,0>
                ::_vftable_;
  local_10a0 = local_1547;
  local_1090 = (undefined ***)0x0;
  local_1098 = &local_1548;
  local_10b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l462::<lambda_8>,bool,bool_&>
               ::Call;
  EnterCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  EVar11 = FAnalyticsPropertyStore::GetFixedSizeValueInternal
                     (&local_12f8,&BoolKey,Bool,local_153c,1);
  if (EVar11 == Success) {
    UE::Core::Private::Function::CheckCallable(local_10b8);
    pcVar1 = local_10b8;
    pppuVar27 = &local_10a8;
    if (local_1090 != (undefined ***)0x0) {
      pppuVar27 = local_1090;
    }
    pvVar19 = (void *)(*(code *)(*pppuVar27)[1])();
    if (pcVar1 == UE::Core::Private::Function::
                  TFunctionRefCaller<`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l462::<lambda_8>,bool,bool_&>
                  ::Call) {
      cVar10 = `FAnalyticsPropertyStoreAutomationTest::RunTest'::__l462::<lambda_8>::operator()
                         (pvVar19,local_153c);
    }
    else {
      cVar10 = (*pcVar1)();
    }
    if (cVar10 == '\0') {
      EVar11 = Declined;
    }
    else {
      local_1528[0] = local_153c[0];
      EVar11 = FAnalyticsPropertyStore::SetFixedSizeValueInternal
                         (&local_12f8,&BoolKey,Bool,local_1528,1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_12f8.StoreLock);
  if (local_10b8 != (code *)0x0) {
    pppuVar27 = &local_10a8;
    if (local_1090 != (undefined ***)0x0) {
      pppuVar27 = local_1090;
    }
    (*(code *)(*pppuVar27)[2])();
  }
  if ((EVar11 != Success) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Update(BoolKey, [&](bool& InOutStored) { { if((!!(!(InOutStored == Actual_Bool)))) { if (FDebug::CheckVerifyFailedImpl2(\"InOutStored == Actual_Bool\", \"C:\\\\Workspace\\\\UnrealEngine\\\\Engine\\\\Source\\\\Runtime\\\\Analytics\\\\Analytics\\\\Private\\\\Tests\\\\AnalyticsPropertyStoreTests.cpp\", 179, L\"\")) { (__nop(), __debugbreak()); } ((void)sizeof((bool)(false))); } }; InOutStored = Expected_Bool; return true; }) == IAnalyticsPropertyStore::EStatusCode::Success"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xb3,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EVar11 = FAnalyticsPropertyStore::Get(&local_12f8,&BoolKey,(bool *)local_1547);
  if (((EVar11 != Success) || (local_1547[0] != local_1548)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Get(BoolKey, Actual_Bool) == IAnalyticsPropertyStore::EStatusCode::Success && Actual_Bool == Expected_Bool"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xb4,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  local_f38[0] = (code *)0x0;
  local_f10 = FMemory::Malloc(0x58,8);
  *local_f10 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FAnalyticsPropertyStoreAutomationTest::RunTest'::`61'::<lambda_9>,0,1>
                        ::_vftable_;
  local_f10[1] = (code *)&local_1544;
  local_f10[2] = (code *)&local_151c;
  local_f10[3] = (code *)&local_1510;
  local_f10[4] = (code *)&local_1488;
  local_f10[5] = (code *)&local_1520;
  local_f10[6] = (code *)&local_14e8;
  local_f10[7] = (code *)&local_1548;
  local_f10[8] = (code *)&local_14f8;
  local_f10[9] = (code *)&local_1498;
  local_f10[10] = (code *)&local_14a8;
  if (local_f10 + 1 != (code **)0x0) {
    local_f38[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l61::<lambda_9>,void,FAnalyticsEventAttribute_&&>
                   ::Call;
  }
  FAnalyticsPropertyStore::VisitAll
            (&local_12f8,(TFunction<void___cdecl(FAnalyticsEventAttribute_&&)> *)local_f38);
  if (local_f38[0] != (code *)0x0) {
    ppcVar26 = local_f38 + 2;
    if (local_f10 != (code **)0x0) {
      ppcVar26 = local_f10;
    }
    (**(code **)(*ppcVar26 + 0x10))();
  }
  local_13e8._40_8_ = (void *)0x7fffffffffffffff;
  FAnalyticsPropertyStore::Flush(&local_12f8,false,(FTimespan *)(local_13e8 + 0x28));
  FAnalyticsPropertyStore::~FAnalyticsPropertyStore(&local_12f8);
  FAnalyticsPropertyStore::FAnalyticsPropertyStore(&local_ed8);
  bVar8 = FAnalyticsPropertyStore::Load(&local_ed8,(FString *)&local_1508);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Load(TestStorePathname)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xee,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  if ((local_ed8.FileHandle.Ptr == (IFileHandle *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xef,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  uVar12 = FAnalyticsPropertyStore::Num(&local_ed8);
  if ((uVar12 != 10) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Num() == 10",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xf0,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EVar11 = FAnalyticsPropertyStore::Get(&local_ed8,&I32Key,&local_1540);
  if (((EVar11 != Success) || (local_1544 != local_1540)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Get(I32Key, Actual_I32) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_I32 == Actual_I32"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xf2,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EVar11 = FAnalyticsPropertyStore::Get(&local_ed8,&U32Key,&local_1518);
  if (((EVar11 != Success) || (local_151c != local_1518)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Get(U32Key, Actual_U32) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_U32 == Actual_U32"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xf3,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EVar11 = FAnalyticsPropertyStore::Get(&local_ed8,&I64Key,(long64 *)&local_14d0);
  if (((EVar11 != Success) || (local_1510 != local_14d0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Get(I64Key, Actual_I64) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_I64 == Actual_I64"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xf4,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EVar11 = FAnalyticsPropertyStore::Get(&local_ed8,&U64Key,(ulong64 *)(local_1468 + 0x18));
  if (((EVar11 != Success) || (local_1488 != (undefined1 *)local_1468._24_8_)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Get(U64Key, Acutal_U64) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_U64 == Acutal_U64"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xf5,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EVar11 = FAnalyticsPropertyStore::Get(&local_ed8,&FltKey,&local_1514);
  if (((EVar11 != Success) || (local_1520 != local_1514)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Get(FltKey, Actual_Flt) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_Flt == Actual_Flt"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xf6,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EVar11 = FAnalyticsPropertyStore::Get(&local_ed8,&DblKey,&local_1490);
  if (((EVar11 != Success) || ((double)local_14e8 != local_1490)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Get(DblKey, Actual_Dbl) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_Dbl == Actual_Dbl"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xf7,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EVar11 = FAnalyticsPropertyStore::Get(&local_ed8,&BoolKey,(bool *)local_1547);
  if (((EVar11 != Success) || (local_1548 != local_1547[0])) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Get(BoolKey, Actual_Bool) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_Bool == Actual_Bool"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xf8,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EVar11 = FAnalyticsPropertyStore::Get(&local_ed8,&Str1Key,&local_14e0);
  if (EVar11 == Success) {
    if (local_14f8.Data.ArrayNum == local_14e0.Data.ArrayNum) {
      if (1 < local_14f8.Data.ArrayNum) {
        iVar13 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)local_14f8.Data.AllocatorInstance.Data,
                            (wchar_t *)local_14e0.Data.AllocatorInstance.Data);
        bVar8 = iVar13 == 0;
        goto LAB_1431300a2;
      }
    }
    else {
      bVar8 = local_14f8.Data.ArrayNum + local_14e0.Data.ArrayNum == 1;
LAB_1431300a2:
      if (!bVar8) goto LAB_1431300a9;
    }
  }
  else {
LAB_1431300a9:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Store.Get(Str1Key, Actual_Str1) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_Str1 == Actual_Str1"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                       ,0xf9,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return (bool)uVar9;
    }
  }
  EVar11 = FAnalyticsPropertyStore::Get(&local_ed8,&DateKey,&local_1478);
  if (((EVar11 != Success) || (local_1498 != (void *)local_1478.Ticks)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Get(DateKey, Actual_Date) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_Date == Actual_Date"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xfa,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EVar11 = FAnalyticsPropertyStore::Get(&local_ed8,&Str2Key,&local_14b8);
  if (EVar11 == Success) {
    if (local_14a8.Data.ArrayNum == local_14b8.Data.ArrayNum) {
      if (local_14a8.Data.ArrayNum < 2) goto LAB_14313017c;
      iVar13 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)local_14a8.Data.AllocatorInstance.Data,
                          (wchar_t *)local_14b8.Data.AllocatorInstance.Data);
      bVar8 = iVar13 == 0;
    }
    else {
      bVar8 = local_14a8.Data.ArrayNum + local_14b8.Data.ArrayNum == 1;
    }
    if (bVar8) goto LAB_14313017c;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Store.Get(Str2Key, Actual_Str2) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_Str2 == Actual_Str2"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                     ,0xfb,L"");
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
LAB_14313017c:
  bVar8 = FAnalyticsPropertyStore::Remove(&local_ed8,&U32Key);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Remove(U32Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xfe,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Remove(&local_ed8,&I32Key);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Remove(I32Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xff,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Remove(&local_ed8,&Str1Key);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Remove(Str1Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x100,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Remove(&local_ed8,&I64Key);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Remove(I64Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x101,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Remove(&local_ed8,&I64Key);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Remove(I64Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x102,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Remove(&local_ed8,&U64Key);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Remove(U64Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x103,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Remove(&local_ed8,&DblKey);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Remove(DblKey)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x104,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Remove(&local_ed8,&FltKey);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Remove(FltKey)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x105,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Remove(&local_ed8,&BoolKey);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Remove(BoolKey)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x106,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Remove(&local_ed8,&Str2Key);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Remove(Str2Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x107,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Remove(&local_ed8,&Str2Key);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Remove(Str2Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x108,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Remove(&local_ed8,&DateKey);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Remove(DateKey)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x109,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  ::FString::FString(&local_1330,L"IDoNotExist");
  bVar8 = FAnalyticsPropertyStore::Remove(&local_ed8,&local_1330);
  if (local_1330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1330.Data.AllocatorInstance.Data);
  }
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Remove(L\"IDoNotExist\")",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x10a,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  uVar12 = FAnalyticsPropertyStore::Num(&local_ed8);
  if ((uVar12 != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x10c,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_ed8,&I32Key);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(I32Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x10f,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_ed8,&U32Key);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(U32Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x110,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_ed8,&I64Key);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(I64Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x111,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_ed8,&U64Key);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(U64Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x112,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_ed8,&FltKey);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(FltKey)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x113,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_ed8,&DblKey);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(DblKey)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x114,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_ed8,&BoolKey);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(BoolKey)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x115,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_ed8,&Str1Key);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(Str1Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x116,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_ed8,&DateKey);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(DateKey)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x117,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_ed8,&Str2Key);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(Str2Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x118,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  local_13e8._48_8_ = (FScriptContainerElement *)0x7fffffffffffffff;
  FAnalyticsPropertyStore::Flush(&local_ed8,false,(FTimespan *)(local_13e8 + 0x30));
  FAnalyticsPropertyStore::~FAnalyticsPropertyStore(&local_ed8);
  FAnalyticsPropertyStore::FAnalyticsPropertyStore(&local_cc8);
  bVar8 = FAnalyticsPropertyStore::Load(&local_cc8,(FString *)&local_1508);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Load(TestStorePathname)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x121,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  uVar12 = FAnalyticsPropertyStore::Num(&local_cc8);
  if ((uVar12 != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x122,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_cc8,&I32Key);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(I32Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x124,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_cc8,&U32Key);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(U32Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x125,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_cc8,&I64Key);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(I64Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x126,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_cc8,&U64Key);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(U64Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x127,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_cc8,&FltKey);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(FltKey)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x128,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_cc8,&DblKey);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(DblKey)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x129,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_cc8,&BoolKey);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(BoolKey)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x12a,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_cc8,&Str1Key);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(Str1Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,299,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_cc8,&DateKey);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(DateKey)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,300,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_cc8,&Str2Key);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(Str2Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x12d,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  local_f70 = (undefined ***)0x0;
  local_f88 = &___7__TFunction_OwnedObject_P6A_NPEB_JAEB_J_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_f98 = UE::Core::Private::Function::
              TFunctionRefCaller<bool_(__cdecl*)(__int64_const_*,__int64_const_&),bool,__int64_const_*,__int64_const_&>
              ::Call;
  local_f80 = `FAnalyticsPropertyStoreAutomationTest::RunTest'::__l821::<lambda_10>::
              <lambda_invoker_cdecl>;
  local_1468._32_8_ = local_1510;
  EnterCriticalSection((LPCRITICAL_SECTION)&local_cc8.StoreLock);
  EVar11 = FAnalyticsPropertyStore::GetFixedSizeValueInternal
                     (&local_cc8,&I64Key,I64,local_13e8 + 0x38,8);
  if (EVar11 < BadType) {
    local_1400 = (FAnalyticsPropertyStore *)(local_13e8 + 0x38);
    if (EVar11 == NotFound) {
      local_1400 = this_02;
    }
    UE::Core::Private::Function::CheckCallable(local_f98);
    pcVar1 = local_f98;
    pppuVar27 = &local_f88;
    if (local_f70 != (undefined ***)0x0) {
      pppuVar27 = local_f70;
    }
    puVar18 = (undefined8 *)(*(code *)(*pppuVar27)[1])();
    if (pcVar1 == UE::Core::Private::Function::
                  TFunctionRefCaller<bool_(__cdecl*)(__int64_const_*,__int64_const_&),bool,__int64_const_*,__int64_const_&>
                  ::Call) {
      cVar10 = (*(code *)*puVar18)(local_1400,local_1468 + 0x20);
    }
    else {
      cVar10 = (*pcVar1)(puVar18,&local_1400,local_1468 + 0x20);
    }
    if (cVar10 == '\0') {
      EVar11 = Declined;
    }
    else {
      local_13a8 = (void *)local_1468._32_8_;
      EVar11 = FAnalyticsPropertyStore::SetFixedSizeValueInternal
                         (&local_cc8,&I64Key,I64,(uchar *)&local_13a8,8);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_cc8.StoreLock);
  if (local_f98 != (code *)0x0) {
    pppuVar27 = &local_f88;
    if (local_f70 != (undefined ***)0x0) {
      pppuVar27 = local_f70;
    }
    (*(code *)(*pppuVar27)[2])();
  }
  if ((EVar11 != Success) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Set(I64Key, Expected_I64, [](const int64* Actual, const int64& Proposed) { return Actual == nullptr; }) == IAnalyticsPropertyStore::EStatusCode::Success"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x130,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EVar11 = FAnalyticsPropertyStore::Get(&local_cc8,&I64Key,(long64 *)&local_14d0);
  if (((EVar11 != Success) || (local_14d0 != local_1510)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Get(I64Key, Actual_I64) == IAnalyticsPropertyStore::EStatusCode::Success && Actual_I64 == Expected_I64"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x131,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  local_ef0 = `FAnalyticsPropertyStoreAutomationTest::RunTest'::__l835::<lambda_11>::
              <lambda_invoker_cdecl>;
  local_ee0 = (undefined ***)0x0;
  local_ef8 = &___7__TFunction_OwnedObject_P6A_NPEBHAEBH_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_f08[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<bool_(__cdecl*)(int_const_*,int_const_&),bool,int_const_*,int_const_&>
                 ::Call;
  EVar11 = FAnalyticsPropertyStore::Set
                     (&local_cc8,&I32Key,local_1544,
                      (TFunction<bool___cdecl(int_const_*,int_const_&)> *)local_f08);
  if (local_f08[0] != (code *)0x0) {
    pppuVar27 = &local_ef8;
    if (local_ee0 != (undefined ***)0x0) {
      pppuVar27 = local_ee0;
    }
    (*(code *)(*pppuVar27)[2])();
  }
  if ((EVar11 != Declined) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Set(I32Key, Expected_I32, [](const int32* Actual, const int32& Proposed) { return Actual != nullptr; }) == IAnalyticsPropertyStore::EStatusCode::Declined"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x134,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EVar11 = FAnalyticsPropertyStore::Get(&local_cc8,&I32Key,&local_1540);
  if (((EVar11 != NotFound) || (local_1540 != local_1544)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Get(I32Key, Actual_I32) == IAnalyticsPropertyStore::EStatusCode::NotFound && Actual_I32 == Expected_I32"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x135,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  uVar12 = FAnalyticsPropertyStore::Num(&local_cc8);
  if ((uVar12 != 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x137,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EVar11 = FAnalyticsPropertyStore::Set(&local_cc8,&Str2Key,&local_14a8,0);
  if ((EVar11 != Success) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Set(Str2Key, Expected_Str2) == IAnalyticsPropertyStore::EStatusCode::Success"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x139,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EVar11 = FAnalyticsPropertyStore::Set(&local_cc8,&DblKey,(double)local_14e8);
  if ((EVar11 != Success) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Set(DblKey, Expected_Dbl) == IAnalyticsPropertyStore::EStatusCode::Success"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x13a,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EVar11 = FAnalyticsPropertyStore::Set(&local_cc8,&BoolKey,(bool)local_1548);
  if ((EVar11 != Success) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Set(BoolKey, Expected_Bool) == IAnalyticsPropertyStore::EStatusCode::Success"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x13b,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&local_cc8.StoreLock);
  TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
           *)&local_cc8.NameOffsetMap);
  local_cc8.StorageReader._padding_ = 0;
  local_cc8.StorageWriter._144_8_ = 0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Empty
            (&local_cc8.StorageBuf,local_cc8.StorageBuf.ArrayNum);
  local_cc8.bFragmented = false;
  LeaveCriticalSection((LPCRITICAL_SECTION)&local_cc8.StoreLock);
  uVar12 = FAnalyticsPropertyStore::Num(&local_cc8);
  if ((uVar12 != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x13f,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_cc8,&I64Key);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(I64Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x140,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_cc8,&DblKey);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(DblKey)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x141,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_cc8,&Str2Key);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(Str2Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x142,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_cc8,&BoolKey);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(BoolKey)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x143,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  FAnalyticsPropertyStore::~FAnalyticsPropertyStore(&local_cc8);
  this_00 = ::operator_new(0x208);
  pFVar20 = this_02;
  if (this_00 != (FAnalyticsPropertyStore *)0x0) {
    pFVar20 = FAnalyticsPropertyStore::FAnalyticsPropertyStore(this_00);
  }
  bVar8 = FAnalyticsPropertyStore::Create(pFVar20,(FString *)&local_1508,0x800);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store->Create(TestStorePathname, 2 * 1024)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x149,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  (**(code **)(pFVar20->_padding_ + 0xb0))(pFVar20,&I32Key,local_1544);
  (**(code **)(pFVar20->_padding_ + 0xa8))(pFVar20,&U32Key,local_151c);
  (**(code **)(pFVar20->_padding_ + 0xa0))(pFVar20,&I64Key,local_1510);
  (**(code **)(pFVar20->_padding_ + 0x98))(pFVar20,&U64Key,local_1488);
  (**(code **)(pFVar20->_padding_ + 0x90))(pFVar20,&FltKey,local_1520);
  (**(code **)(pFVar20->_padding_ + 0x88))(pFVar20,&DblKey,local_14e8);
  (**(code **)(pFVar20->_padding_ + 0x80))(pFVar20,&BoolKey,local_1548);
  (**(code **)(pFVar20->_padding_ + 0x78))(pFVar20,&Str1Key,&local_14f8,0x19);
  (**(code **)(pFVar20->_padding_ + 0x70))(pFVar20,&DateKey,&local_1498);
  (**(code **)(pFVar20->_padding_ + 0x78))(pFVar20,&Str2Key,&local_14a8,0);
  local_13a0[0] = 0xffffffff;
  local_13a0[1] = 0x7fffffff;
  (**(code **)(pFVar20->_padding_ + 0x150))(pFVar20,0,local_13a0);
  (**(code **)pFVar20->_padding_)(pFVar20,1);
  this_01 = FPlatformFileManager::Get();
  pIVar21 = FPlatformFileManager::GetPlatformFile(this_01);
  FVar29.Data = (FScriptContainerElement *)L"";
  if (local_1508.ArrayNum != 0) {
    FVar29.Data = local_1508.AllocatorInstance.Data;
  }
  plVar22 = (longlong *)(**(code **)((longlong)*pIVar21 + 0x110))(pIVar21,FVar29.Data,1);
  (**(code **)(*plVar22 + 0x10))(plVar22,0x37);
  local_68 = 0x42;
  local_64 = 99;
  local_60 = 1;
  local_5c = 7;
  local_58 = 0x2c;
  local_54 = 0x22b8;
  (**(code **)(*plVar22 + 0x30))(plVar22,&local_68,0x18);
  if (plVar22 != (longlong *)0x0) {
    (**(code **)*plVar22)(plVar22,1);
  }
  pFVar20 = ::operator_new(0x208);
  if (pFVar20 != (FAnalyticsPropertyStore *)0x0) {
    this_02 = FAnalyticsPropertyStore::FAnalyticsPropertyStore(pFVar20);
  }
  bVar8 = FAnalyticsPropertyStore::Load(this_02,(FString *)&local_1508);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store->Load(TestStorePathname)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x15f,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  if (this_02 != (FAnalyticsPropertyStore *)0x0) {
    (**(code **)this_02->_padding_)(this_02,1);
  }
  FAnalyticsPropertyStore::FAnalyticsPropertyStore(&local_8a8);
  bVar8 = FAnalyticsPropertyStore::Create(&local_8a8,(FString *)&local_1508,0x800);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Create(TestStorePathname, 2 * 1024)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x166,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  FAnalyticsPropertyStore::Set(&local_8a8,&I32Key,local_1544);
  local_1398.Ticks = 0x7fffffffffffffff;
  FAnalyticsPropertyStore::Flush(&local_8a8,false,&local_1398);
  bVar8 = FAnalyticsPropertyStore::Load(&local_8a8,(FString *)&local_1508);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Load(TestStorePathname)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x16b,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EVar11 = FAnalyticsPropertyStore::Get(&local_8a8,&I32Key,&local_1540);
  if (((EVar11 != Success) || (local_1544 != local_1540)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Get(I32Key, Actual_I32) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_I32 == Actual_I32"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x16c,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Create(&local_8a8,(FString *)&local_1508,0x800);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Create(TestStorePathname, 2 * 1024)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x16f,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EVar11 = FAnalyticsPropertyStore::Get(&local_8a8,&I32Key,&local_1540);
  if ((EVar11 != NotFound) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Get(I32Key, Actual_I32) == IAnalyticsPropertyStore::EStatusCode::NotFound"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x170,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  bVar8 = FAnalyticsPropertyStore::Contains(&local_8a8,&I32Key);
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Store.Contains(I32Key)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x171,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  FAnalyticsPropertyStore::~FAnalyticsPropertyStore(&local_8a8);
  FAnalyticsPropertyStore::FAnalyticsPropertyStore(&local_488);
  bVar8 = FAnalyticsPropertyStore::Create(&local_488,(FString *)&local_1508,0x800);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Create(TestStorePathname, 2 * 1024)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x178,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  FAnalyticsPropertyStore::Set(&local_488,&I32Key,local_1544);
  local_1390.Ticks = 0x7fffffffffffffff;
  FAnalyticsPropertyStore::Flush(&local_488,true,&local_1390);
  bVar8 = FAnalyticsPropertyStore::Load(&local_488,(FString *)&local_1508);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Load(TestStorePathname)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x17d,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EVar11 = FAnalyticsPropertyStore::Get(&local_488,&I32Key,&local_1540);
  if (((EVar11 != Success) || (local_1544 != local_1540)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Get(I32Key, Actual_I32) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_I32 == Actual_I32"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x17e,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  FAnalyticsPropertyStore::~FAnalyticsPropertyStore(&local_488);
  FAnalyticsPropertyStore::FAnalyticsPropertyStore(&local_278);
  bVar8 = FAnalyticsPropertyStore::Create(&local_278,(FString *)&local_1508,0x800);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Create(TestStorePathname, 2 * 1024)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x185,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  FAnalyticsPropertyStore::Set(&local_278,&I32Key,local_1544);
  auVar30._8_8_ = 0;
  auVar30._0_8_ = __real_412e848100000000;
  auVar30 = roundpd(auVar30,auVar30,1);
  local_1388.Ticks = (long64)auVar30._0_8_;
  FAnalyticsPropertyStore::Flush(&local_278,true,&local_1388);
  bVar8 = FAnalyticsPropertyStore::Load(&local_278,(FString *)&local_1508);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Load(TestStorePathname)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x18a,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  EVar11 = FAnalyticsPropertyStore::Get(&local_278,&I32Key,&local_1540);
  if (((EVar11 != Success) || (local_1544 != local_1540)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Get(I32Key, Actual_I32) == IAnalyticsPropertyStore::EStatusCode::Success && Expected_I32 == Actual_I32"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0x18b,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  FAnalyticsPropertyStore::~FAnalyticsPropertyStore(&local_278);
  pIVar14 = IFileManager::Get();
  FVar29.Data = (FScriptContainerElement *)L"";
  if (local_1508.ArrayNum != 0) {
    FVar29.Data = local_1508.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar14 + 0x38))(pIVar14,FVar29.Data,0,0);
  if (local_1508.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1508.AllocatorInstance.Data);
  }
  if (local_14b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_14b8.Data.AllocatorInstance.Data);
  }
  if (local_14e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_14e0.Data.AllocatorInstance.Data);
  }
  if (local_14a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_14a8.Data.AllocatorInstance.Data);
  }
  if (local_14f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_14f8.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 1431318c0

FString * __thiscall
FAnalyticsPropertyStoreAutomationTest::GetBeautifiedTestName
          (FAnalyticsPropertyStoreAutomationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Analytics.PropertyStore");
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 143131930

bool __cdecl
`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l821::<lambda_10>::<lambda_invoker_cdecl>
          (long64 *param_1,long64 *param_2)

{
  return param_1 == (long64 *)0x0;
}

// <lambda_invoker_cdecl> @ 143131940

bool __cdecl
`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l835::<lambda_11>::<lambda_invoker_cdecl>
          (int *param_1,int *param_2)

{
  return param_1 != (int *)0x0;
}

// <lambda_invoker_cdecl> @ 143131950

bool __cdecl
`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l378::<lambda_1>::<lambda_invoker_cdecl>
          (int *param_1,int *param_2)

{
  return *param_1 < *param_2;
}

// <lambda_invoker_cdecl> @ 143131960

bool __cdecl
`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l392::<lambda_2>::<lambda_invoker_cdecl>
          (float *param_1,float *param_2)

{
  return *param_1 < *param_2;
}

// <lambda_invoker_cdecl> @ 143131980

bool __cdecl
`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l406::<lambda_3>::<lambda_invoker_cdecl>
          (double *param_1,double *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                     ,0x9e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return *param_1 < *param_2;
}

// <lambda_invoker_cdecl> @ 1431319e0

bool __cdecl
`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l427::<lambda_5>::<lambda_invoker_cdecl>
          (long64 *param_1)

{
  *param_1 = *param_1 + 1;
  return true;
}

// <lambda_invoker_cdecl> @ 1431319f0

bool __cdecl
`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l441::<lambda_6>::<lambda_invoker_cdecl>
          (FDateTime *param_1)

{
  FDateTime FVar1;
  
  FVar1 = FDateTime::UtcNow();
                    /* WARNING: Load size is inaccurate */
  param_1->Ticks = *FVar1.Ticks;
  return false;
}

// <lambda_invoker_cdecl> @ 143131a20

bool __cdecl
`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l455::<lambda_7>::<lambda_invoker_cdecl>
          (uint *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                     ,0xaf,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return true;
}

// operator() @ 1431342f0

bool __thiscall
`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l413::<lambda_4>::operator()
          (void *this,FString *param_1,FString *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = (param_1->Data).ArrayNum;
  iVar1 = *(int *)(*(undefined8 **)this + 1);
  if (iVar4 == iVar1) {
    if (iVar4 < 2) goto LAB_14313435a;
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                       (wchar_t *)**(undefined8 **)this);
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar4 + iVar1 == 1;
  }
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("*Actual == Actual_Str1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xa2,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return (bool)uVar3;
  }
LAB_14313435a:
  iVar4 = (param_2->Data).ArrayNum;
  iVar1 = *(int *)(*(undefined8 **)((longlong)this + 8) + 1);
  if (iVar4 == iVar1) {
    if (iVar4 < 2) {
      return true;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_2->Data).AllocatorInstance.Data,
                       (wchar_t *)**(undefined8 **)((longlong)this + 8));
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar4 + iVar1 == 1;
  }
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Proposed == Expected_Str1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xa2,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return (bool)uVar3;
  }
  return true;
}

// operator() @ 1431343d0

bool __thiscall
`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l462::<lambda_8>::operator()
          (void *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (*param_1 != (bool)**(char **)this) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOutStored == Actual_Bool",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                       ,0xb3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  *param_1 = (bool)**(undefined1 **)((longlong)this + 8);
  return true;
}

// operator() @ 143134430

void __thiscall
`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l61::<lambda_9>::operator()
          (void *this,FAnalyticsEventAttribute *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  FString *pFVar4;
  char *pcVar5;
  wchar_t *pwVar6;
  bool bVar7;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  iVar3 = (param_1->AttrName).Data.ArrayNum;
  if (iVar3 == I32Key.Data.ArrayNum) {
    if (1 < iVar3) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->AttrName).Data.AllocatorInstance.Data,
                         (wchar_t *)I32Key.Data.AllocatorInstance.Data);
      bVar7 = iVar3 == 0;
      goto LAB_14313447c;
    }
LAB_143134b23:
    ::FString::PrintfImpl(&local_48,L"%d");
    iVar3 = (param_1->AttrValueString).Data.ArrayNum;
    if (iVar3 == local_48.Data.ArrayNum) {
      if (iVar3 < 2) {
        bVar7 = false;
      }
      else {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_1->AttrValueString).Data.AllocatorInstance.Data,
                           (wchar_t *)local_48.Data.AllocatorInstance.Data);
        bVar7 = iVar3 != 0;
      }
    }
    else {
      bVar7 = iVar3 + local_48.Data.ArrayNum != 1;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (!bVar7) {
      return;
    }
    iVar3 = 0xbb;
    pcVar5 = "Attr.GetValue() == LexToString(Expected_I32)";
  }
  else {
    bVar7 = iVar3 + I32Key.Data.ArrayNum == 1;
LAB_14313447c:
    if (bVar7) goto LAB_143134b23;
    iVar3 = (param_1->AttrName).Data.ArrayNum;
    if (iVar3 == U32Key.Data.ArrayNum) {
      if (1 < iVar3) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_1->AttrName).Data.AllocatorInstance.Data,
                           (wchar_t *)U32Key.Data.AllocatorInstance.Data);
        bVar7 = iVar3 == 0;
        goto LAB_1431344b6;
      }
LAB_143134aa0:
      ::FString::PrintfImpl(&local_58,L"%u");
      iVar3 = (param_1->AttrValueString).Data.ArrayNum;
      if (iVar3 == local_58.Data.ArrayNum) {
        if (iVar3 < 2) {
          bVar7 = false;
        }
        else {
          iVar3 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(param_1->AttrValueString).Data.AllocatorInstance.Data,
                             (wchar_t *)local_58.Data.AllocatorInstance.Data);
          bVar7 = iVar3 != 0;
        }
      }
      else {
        bVar7 = iVar3 + local_58.Data.ArrayNum != 1;
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (!bVar7) {
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Attr.GetValue() == LexToString(Expected_U32)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xbf,L"");
      if (!bVar7) {
        return;
      }
      goto code_r0x000143134ba0;
    }
    bVar7 = iVar3 + U32Key.Data.ArrayNum == 1;
LAB_1431344b6:
    if (bVar7) goto LAB_143134aa0;
    iVar3 = (param_1->AttrName).Data.ArrayNum;
    if (iVar3 == I64Key.Data.ArrayNum) {
      if (1 < iVar3) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_1->AttrName).Data.AllocatorInstance.Data,
                           (wchar_t *)I64Key.Data.AllocatorInstance.Data);
        bVar7 = iVar3 == 0;
        goto LAB_1431344f0;
      }
LAB_143134a16:
      ::FString::PrintfImpl(&local_68,L"%lld");
      iVar3 = (param_1->AttrValueString).Data.ArrayNum;
      if (iVar3 == local_68.Data.ArrayNum) {
        if (iVar3 < 2) {
          bVar7 = false;
        }
        else {
          iVar3 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(param_1->AttrValueString).Data.AllocatorInstance.Data,
                             (wchar_t *)local_68.Data.AllocatorInstance.Data);
          bVar7 = iVar3 != 0;
        }
      }
      else {
        bVar7 = iVar3 + local_68.Data.ArrayNum != 1;
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (!bVar7) {
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Attr.GetValue() == LexToString(Expected_I64)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xc3,L"");
      if (!bVar7) {
        return;
      }
      goto code_r0x000143134ba0;
    }
    bVar7 = iVar3 + I64Key.Data.ArrayNum == 1;
LAB_1431344f0:
    if (bVar7) goto LAB_143134a16;
    iVar3 = (param_1->AttrName).Data.ArrayNum;
    if (iVar3 == U64Key.Data.ArrayNum) {
      if (1 < iVar3) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_1->AttrName).Data.AllocatorInstance.Data,
                           (wchar_t *)U64Key.Data.AllocatorInstance.Data);
        bVar7 = iVar3 == 0;
        goto LAB_14313452a;
      }
LAB_14313498c:
      ::FString::PrintfImpl(&local_78,L"%llu");
      iVar3 = (param_1->AttrValueString).Data.ArrayNum;
      if (iVar3 == local_78.Data.ArrayNum) {
        if (iVar3 < 2) {
          bVar7 = false;
        }
        else {
          iVar3 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(param_1->AttrValueString).Data.AllocatorInstance.Data,
                             (wchar_t *)local_78.Data.AllocatorInstance.Data);
          bVar7 = iVar3 != 0;
        }
      }
      else {
        bVar7 = iVar3 + local_78.Data.ArrayNum != 1;
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (!bVar7) {
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Attr.GetValue() == LexToString(Expected_U64)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,199,L"");
      if (!bVar7) {
        return;
      }
      goto code_r0x000143134ba0;
    }
    bVar7 = iVar3 + U64Key.Data.ArrayNum == 1;
LAB_14313452a:
    if (bVar7) goto LAB_14313498c;
    iVar3 = (param_1->AttrName).Data.ArrayNum;
    if (iVar3 == FltKey.Data.ArrayNum) {
      if (1 < iVar3) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_1->AttrName).Data.AllocatorInstance.Data,
                           (wchar_t *)FltKey.Data.AllocatorInstance.Data);
        bVar7 = iVar3 == 0;
        goto LAB_143134564;
      }
LAB_143134900:
      pFVar4 = ::FString::SanitizeFloat(&local_18,(double)**(float **)((longlong)this + 0x20),1);
      iVar3 = (param_1->AttrValueString).Data.ArrayNum;
      iVar1 = (pFVar4->Data).ArrayNum;
      if (iVar3 == iVar1) {
        if (iVar3 < 2) {
          bVar7 = false;
        }
        else {
          iVar3 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(param_1->AttrValueString).Data.AllocatorInstance.Data,
                             (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
          bVar7 = iVar3 != 0;
        }
      }
      else {
        bVar7 = iVar1 + iVar3 != 1;
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (!bVar7) {
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Attr.GetValue() == FString::SanitizeFloat(Expected_Flt)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xcb,L"");
      if (!bVar7) {
        return;
      }
      goto code_r0x000143134ba0;
    }
    bVar7 = iVar3 + FltKey.Data.ArrayNum == 1;
LAB_143134564:
    if (bVar7) goto LAB_143134900;
    iVar3 = (param_1->AttrName).Data.ArrayNum;
    if (iVar3 == DblKey.Data.ArrayNum) {
      if (1 < iVar3) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_1->AttrName).Data.AllocatorInstance.Data,
                           (wchar_t *)DblKey.Data.AllocatorInstance.Data);
        bVar7 = iVar3 == 0;
        goto LAB_14313459e;
      }
LAB_143134877:
      pFVar4 = ::FString::SanitizeFloat(&local_28,**(double **)((longlong)this + 0x28),1);
      iVar3 = (param_1->AttrValueString).Data.ArrayNum;
      iVar1 = (pFVar4->Data).ArrayNum;
      if (iVar3 == iVar1) {
        if (iVar3 < 2) {
          bVar7 = false;
        }
        else {
          iVar3 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(param_1->AttrValueString).Data.AllocatorInstance.Data,
                             (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
          bVar7 = iVar3 != 0;
        }
      }
      else {
        bVar7 = iVar1 + iVar3 != 1;
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (!bVar7) {
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Attr.GetValue() == FString::SanitizeFloat(Expected_Dbl)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xcf,L"");
      if (!bVar7) {
        return;
      }
      goto code_r0x000143134ba0;
    }
    bVar7 = iVar3 + DblKey.Data.ArrayNum == 1;
LAB_14313459e:
    if (bVar7) goto LAB_143134877;
    iVar3 = (param_1->AttrName).Data.ArrayNum;
    if (iVar3 == BoolKey.Data.ArrayNum) {
      if (1 < iVar3) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_1->AttrName).Data.AllocatorInstance.Data,
                           (wchar_t *)BoolKey.Data.AllocatorInstance.Data);
        bVar7 = iVar3 == 0;
        goto LAB_1431345d8;
      }
LAB_1431347e2:
      pwVar6 = L"true";
      if (**(char **)((longlong)this + 0x30) == '\0') {
        pwVar6 = L"false";
      }
      ::FString::FString(&local_88,pwVar6);
      iVar3 = (param_1->AttrValueString).Data.ArrayNum;
      if (iVar3 == local_88.Data.ArrayNum) {
        if (iVar3 < 2) {
          bVar7 = false;
        }
        else {
          iVar3 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(param_1->AttrValueString).Data.AllocatorInstance.Data,
                             (wchar_t *)local_88.Data.AllocatorInstance.Data);
          bVar7 = iVar3 != 0;
        }
      }
      else {
        bVar7 = iVar3 + local_88.Data.ArrayNum != 1;
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (!bVar7) {
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Attr.GetValue() == LexToString(Expected_Bool)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xd3,L"");
      if (!bVar7) {
        return;
      }
      goto code_r0x000143134ba0;
    }
    bVar7 = iVar3 + BoolKey.Data.ArrayNum == 1;
LAB_1431345d8:
    if (bVar7) goto LAB_1431347e2;
    iVar3 = (param_1->AttrName).Data.ArrayNum;
    if (iVar3 == Str1Key.Data.ArrayNum) {
      if (1 < iVar3) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_1->AttrName).Data.AllocatorInstance.Data,
                           (wchar_t *)Str1Key.Data.AllocatorInstance.Data);
        bVar7 = iVar3 == 0;
        goto LAB_143134612;
      }
LAB_14313477e:
      iVar3 = (param_1->AttrValueString).Data.ArrayNum;
      iVar1 = *(int *)(*(undefined8 **)((longlong)this + 0x38) + 1);
      if (iVar3 == iVar1) {
        if (iVar3 < 2) {
          return;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_1->AttrValueString).Data.AllocatorInstance.Data,
                           (wchar_t *)**(undefined8 **)((longlong)this + 0x38));
        bVar7 = iVar3 == 0;
      }
      else {
        bVar7 = iVar3 + iVar1 == 1;
      }
      if (bVar7) {
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Attr.GetValue() == Expected_Str1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xd7,L"");
      if (!bVar7) {
        return;
      }
      goto code_r0x000143134ba0;
    }
    bVar7 = iVar3 + Str1Key.Data.ArrayNum == 1;
LAB_143134612:
    if (bVar7) goto LAB_14313477e;
    iVar3 = (param_1->AttrName).Data.ArrayNum;
    if (iVar3 == DateKey.Data.ArrayNum) {
      if (1 < iVar3) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_1->AttrName).Data.AllocatorInstance.Data,
                           (wchar_t *)DateKey.Data.AllocatorInstance.Data);
        bVar7 = iVar3 == 0;
        goto LAB_14313464c;
      }
LAB_1431346ff:
      pFVar4 = FDateTime::ToIso8601(*(FDateTime **)((longlong)this + 0x40),&local_38);
      iVar3 = (param_1->AttrValueString).Data.ArrayNum;
      iVar1 = (pFVar4->Data).ArrayNum;
      if (iVar3 == iVar1) {
        if (iVar3 < 2) {
          bVar7 = false;
        }
        else {
          iVar3 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(param_1->AttrValueString).Data.AllocatorInstance.Data,
                             (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
          bVar7 = iVar3 != 0;
        }
      }
      else {
        bVar7 = iVar1 + iVar3 != 1;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (!bVar7) {
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Attr.GetValue() == Expected_Date.ToIso8601()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xdb,L"");
      if (!bVar7) {
        return;
      }
      goto code_r0x000143134ba0;
    }
    bVar7 = iVar3 + DateKey.Data.ArrayNum == 1;
LAB_14313464c:
    if (bVar7) goto LAB_1431346ff;
    iVar3 = (param_1->AttrName).Data.ArrayNum;
    if (iVar3 == Str2Key.Data.ArrayNum) {
      if (1 < iVar3) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_1->AttrName).Data.AllocatorInstance.Data,
                           (wchar_t *)Str2Key.Data.AllocatorInstance.Data);
        bVar7 = iVar3 == 0;
        goto LAB_143134682;
      }
LAB_14313469b:
      iVar3 = (param_1->AttrValueString).Data.ArrayNum;
      iVar1 = *(int *)(*(undefined8 **)((longlong)this + 0x48) + 1);
      if (iVar3 == iVar1) {
        if (iVar3 < 2) {
          return;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_1->AttrValueString).Data.AllocatorInstance.Data,
                           (wchar_t *)**(undefined8 **)((longlong)this + 0x48));
        bVar7 = iVar3 == 0;
      }
      else {
        bVar7 = iVar3 + iVar1 == 1;
      }
      if (bVar7) {
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Attr.GetValue() == Expected_Str2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xdf,L"");
      if (!bVar7) {
        return;
      }
      goto code_r0x000143134ba0;
    }
    bVar7 = iVar3 + Str2Key.Data.ArrayNum == 1;
LAB_143134682:
    if (bVar7) goto LAB_14313469b;
    iVar3 = 0xe3;
    pcVar5 = "false";
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar5,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                     ,iVar3,L"");
  if (!bVar7) {
    return;
  }
code_r0x000143134ba0:
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

