// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141bc85c0

EAutomationTestFlags __thiscall FIoStatusOrTest::GetTestFlags(FIoStatusOrTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bc85d0

bool __thiscall FIoStatusOrTest::IsStressTest(FIoStatusOrTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bc85e0

uint __thiscall FIoStatusOrTest::GetRequiredDeviceNum(FIoStatusOrTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bc85f0

FString * __thiscall
FIoStatusOrTest::GetTestSourceFileName(FIoStatusOrTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\IO\\IoStatusOrTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bc8620

int __thiscall FIoStatusOrTest::GetTestSourceFileLine(FIoStatusOrTest *this)

{
  return 0x22;
}

// GetTests @ 141bc8630

/* WARNING: Removing unreachable block (ram,0x000141bc87ae) */

void __thiscall
FIoStatusOrTest::GetTests
          (FIoStatusOrTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bc87d0

bool __thiscall FIoStatusOrTest::RunTest(FIoStatusOrTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bc8800

FString * __thiscall
FIoStatusOrTest::GetBeautifiedTestName(FIoStatusOrTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FIoStatusOrTest @ 141be4400

FIoStatusOrTest * __thiscall
FIoStatusOrTest::FIoStatusOrTest(FIoStatusOrTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FIoStatusOrTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::IO::IoStatusOr");
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

// TestBody @ 141c176a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FIoStatusOrTest::TestBody(FIoStatusOrTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  EIoErrorCode EVar3;
  ForAnyElementType FVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  FAutomationTestFramework *pFVar10;
  FString *pFVar11;
  FIoStatus *pFVar12;
  undefined1 auStackY_518 [32];
  ForAnyElementType local_4d8;
  undefined8 local_4d0;
  ForAnyElementType local_4c8;
  undefined8 local_4c0;
  ForAnyElementType local_4b8;
  int local_4b0;
  int local_4ac;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FIoStatus local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FIoStatus local_418;
  FString local_408;
  FString local_3f8;
  FIoStatus local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FIoStatus local_2c8;
  FIoStatus local_2b8;
  FIoStatus local_2a8;
  FIoStatus local_298;
  FScriptContainerElement *local_288;
  int local_280;
  undefined4 local_27c;
  FIoStatus local_278;
  FScriptContainerElement *local_268;
  undefined8 local_260;
  FIoStatus local_258;
  void *local_248;
  undefined4 local_240;
  undefined4 local_23c;
  FIoStatus local_238;
  FString local_228;
  FIoStatus local_218;
  void *local_208;
  undefined8 local_200;
  FIoStatus local_1f8;
  FString local_1e8;
  FIoStatus local_1d8;
  FScriptContainerElement *local_1c8;
  int local_1c0;
  int local_1bc;
  FIoStatus local_1b8;
  FScriptContainerElement *local_1a8;
  int local_1a0;
  int local_19c;
  FIoStatus local_198;
  FString local_188;
  FIoStatus local_178;
  FString local_168;
  undefined1 local_158 [24];
  int local_140;
  FIoStatus local_138;
  void *local_128;
  FIoStatus local_118;
  FString local_108;
  FIoStatus local_f8;
  FString local_e8;
  FIoStatus local_d8;
  FString local_c8;
  FIoStatus local_b8;
  FString local_a8;
  undefined1 local_98 [32];
  FIoStatus local_78;
  void *local_68;
  undefined1 local_58 [16];
  FString local_48;
  FIoStatus local_38;
  void *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_518;
  local_78.ErrorMessage.Chars = FIoStatus::Unknown.ErrorMessage.Chars;
  if (FIoStatus::Unknown.ErrorMessage.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) =
         *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) + 1;
    UNLOCK();
  }
  local_78.ErrorCode = FIoStatus::Unknown.ErrorCode;
  local_78.SystemErrorCode = FIoStatus::Unknown.SystemErrorCode;
  bVar8 = FIoStatus::operator==(&local_78,&FIoStatus::Unknown);
  if (!bVar8) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3d8,"Default IoStatus is Unknown");
    (*pcVar2)(pFVar1,&local_3d8,0);
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
  }
  EVar3 = local_78.ErrorCode;
  FIoStatus::operator=(&local_78,Unknown);
  if ((EVar3 == Ok) && (local_68 != (void *)0x0)) {
    FMemory::Free(local_68);
  }
  FIoStatus::~FIoStatus(&local_78);
  local_d8.ErrorMessage.Chars = FIoStatus::Unknown.ErrorMessage.Chars;
  if (FIoStatus::Unknown.ErrorMessage.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) =
         *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) + 1;
    UNLOCK();
  }
  local_d8.ErrorCode = FIoStatus::Unknown.ErrorCode;
  local_d8.SystemErrorCode = FIoStatus::Unknown.SystemErrorCode;
  FIoStatus::FIoStatus(&local_f8);
  FIoStatus::operator=(&local_f8,&local_d8);
  if (local_f8.ErrorCode == Ok) {
    ::FString::FString(&local_e8,&local_c8);
  }
  bVar8 = FIoStatus::operator==(&local_f8,&FIoStatus::Unknown);
  if (!bVar8) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3c8,"Copy construct");
    (*pcVar2)(pFVar1,&local_3c8,0);
    if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
    }
  }
  FIoStatus::operator=(&local_f8,Unknown);
  if ((local_f8.ErrorCode == Ok) &&
     (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  FIoStatus::~FIoStatus(&local_f8);
  EVar3 = local_d8.ErrorCode;
  FIoStatus::operator=(&local_d8,Unknown);
  if ((EVar3 == Ok) && (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  FIoStatus::~FIoStatus(&local_d8);
  FIoStatus::FIoStatus(&local_418,InvalidCode);
  local_478.ErrorMessage.Chars = local_418.ErrorMessage.Chars;
  if (local_418.ErrorMessage.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)(local_418.ErrorMessage.Chars + -4) = *(int *)(local_418.ErrorMessage.Chars + -4) + 1;
    UNLOCK();
  }
  local_478.ErrorCode = local_418.ErrorCode;
  local_478.SystemErrorCode = local_418.SystemErrorCode;
  FIoStatus::FIoStatus(&local_38);
  if (local_478.ErrorCode == Ok) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FIoStatus::operator=(&local_38,&local_478);
  FIoStatus::~FIoStatus(&local_478);
  if (local_38.ErrorCode != InvalidCode) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3b8,"Construct with status");
    (*pcVar2)(pFVar1,&local_3b8,0);
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
  }
  FIoStatus::operator=(&local_38,Unknown);
  if ((local_38.ErrorCode == Ok) && (local_28 != (void *)0x0)) {
    FMemory::Free(local_28);
  }
  FIoStatus::~FIoStatus(&local_38);
  FIoStatus::~FIoStatus(&local_418);
  ::FString::FString(&local_468,"Unreal");
  iVar9 = local_468.Data.ArrayNum;
  FVar4.Data = local_468.Data.AllocatorInstance.Data;
  local_4a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_468.Data.ArrayNum == 0) {
    local_4a8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_468.Data.ArrayNum,0,(ForAnyElementType *)&local_4a8,local_468.Data.ArrayNum
               ,&local_4a8.Data.ArrayMax);
    memcpy(local_4a8.Data.AllocatorInstance.Data,FVar4.Data,(longlong)iVar9 * 2);
  }
  FIoStatus::FIoStatus(&local_118);
  FIoStatus::operator=(&local_118,&FIoStatus::Ok);
  ::FString::FString(&local_108,&local_4a8);
  if (local_118.ErrorCode != Ok) {
    StatusOrCrash(&local_118);
  }
  if (local_108.Data.ArrayNum == local_468.Data.ArrayNum) {
    if (1 < local_108.Data.ArrayNum) {
      iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_108.Data.AllocatorInstance.Data,
                         (wchar_t *)local_468.Data.AllocatorInstance.Data);
      bVar8 = iVar9 == 0;
      goto LAB_141c17a9f;
    }
  }
  else {
    bVar8 = local_108.Data.ArrayNum + local_468.Data.ArrayNum == 1;
LAB_141c17a9f:
    if (!bVar8) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar1 = pFVar10->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_3a8,"Construct with value");
      (*pcVar2)(pFVar1,&local_3a8,0);
      if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
      }
    }
  }
  FIoStatus::operator=(&local_118,Unknown);
  if ((local_118.ErrorCode == Ok) &&
     (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  FIoStatus::~FIoStatus(&local_118);
  if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
  }
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_3f8,"Unreal");
  ::FString::FString(&local_498,"Unreal");
  FVar4.Data = local_498.Data.AllocatorInstance.Data;
  iVar9 = local_498.Data.ArrayNum;
  iVar5 = local_498.Data.ArrayMax;
  local_498.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_498.Data.ArrayNum = 0;
  local_498.Data.ArrayMax = 0;
  FIoStatus::FIoStatus(&local_1d8);
  FIoStatus::operator=(&local_1d8,&FIoStatus::Ok);
  local_1c8 = FVar4.Data;
  local_1c0 = iVar9;
  local_1bc = iVar5;
  if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.Data.AllocatorInstance.Data);
  }
  if (local_1d8.ErrorCode != Ok) {
    StatusOrCrash(&local_1d8);
  }
  if (local_1c0 == local_3f8.Data.ArrayNum) {
    if (1 < local_1c0) {
      iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_1c8,(wchar_t *)local_3f8.Data.AllocatorInstance.Data);
      bVar8 = iVar9 == 0;
      goto LAB_141c17bf1;
    }
  }
  else {
    bVar8 = local_3f8.Data.ArrayNum + local_1c0 == 1;
LAB_141c17bf1:
    if (!bVar8) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar1 = pFVar10->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_398,"Construct with temporary value");
      (*pcVar2)(pFVar1,&local_398,0);
      if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_398.Data.AllocatorInstance.Data);
      }
    }
  }
  FIoStatus::operator=(&local_1d8,Unknown);
  if ((local_1d8.ErrorCode == Ok) && (local_1c8 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_1c8);
  }
  FIoStatus::~FIoStatus(&local_1d8);
  if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
  }
  pFVar11 = ::FString::FString(&local_2e8,"Unreal");
  FIoStatus::FIoStatus(&local_1b8);
  FIoStatus::operator=(&local_1b8,&FIoStatus::Ok);
  local_1a8 = (pFVar11->Data).AllocatorInstance.Data;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0 = (pFVar11->Data).ArrayNum;
  local_19c = (pFVar11->Data).ArrayMax;
  (pFVar11->Data).ArrayNum = 0;
  (pFVar11->Data).ArrayMax = 0;
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
  pFVar11 = ::FString::FString(&local_2d8,"Unreal");
  if (local_1b8.ErrorCode != Ok) {
    StatusOrCrash(&local_1b8);
  }
  iVar9 = (pFVar11->Data).ArrayNum;
  if (local_1a0 == iVar9) {
    if (local_1a0 < 2) {
      bVar8 = false;
    }
    else {
      iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_1a8,(wchar_t *)(pFVar11->Data).AllocatorInstance.Data);
      bVar8 = iVar9 != 0;
    }
  }
  else {
    bVar8 = local_1a0 + iVar9 != 1;
  }
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  if (bVar8) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_388,"Construct with value arguments");
    (*pcVar2)(pFVar1,&local_388,0);
    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data.AllocatorInstance.Data);
    }
  }
  FIoStatus::operator=(&local_1b8,Unknown);
  if ((local_1b8.ErrorCode == Ok) && (local_1a8 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_1a8);
  }
  FIoStatus::~FIoStatus(&local_1b8);
  pFVar12 = FIoStatus::FIoStatus(&local_2b8,InvalidCode);
  FIoStatus::FIoStatus(&local_b8);
  if (pFVar12->ErrorCode == Ok) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FIoStatus::operator=(&local_b8,pFVar12);
  FIoStatus::~FIoStatus(pFVar12);
  local_198.ErrorMessage.Chars = FIoStatus::Unknown.ErrorMessage.Chars;
  if (FIoStatus::Unknown.ErrorMessage.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) =
         *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) + 1;
    UNLOCK();
  }
  EVar3 = FIoStatus::Unknown.ErrorCode;
  local_198.ErrorCode = FIoStatus::Unknown.ErrorCode;
  local_198.SystemErrorCode = FIoStatus::Unknown.SystemErrorCode;
  FIoStatus::operator=(&local_198,Unknown);
  if ((EVar3 == Ok) && (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_b8.ErrorCode == Ok) {
    ::FString::FString(&local_188,&local_a8);
    FIoStatus::operator=(&local_198,Ok);
  }
  else {
    FIoStatus::operator=(&local_198,&local_b8);
  }
  if (local_198.ErrorCode != InvalidCode) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_378,"Assign IoStatusOr with status");
    (*pcVar2)(pFVar1,&local_378,0);
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
  }
  EVar3 = local_198.ErrorCode;
  FIoStatus::operator=(&local_198,Unknown);
  if ((EVar3 == Ok) && (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  FIoStatus::~FIoStatus(&local_198);
  FIoStatus::operator=(&local_b8,Unknown);
  if ((local_b8.ErrorCode == Ok) &&
     (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  FIoStatus::~FIoStatus(&local_b8);
  local_258.ErrorMessage.Chars = FIoStatus::Unknown.ErrorMessage.Chars;
  if (FIoStatus::Unknown.ErrorMessage.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) =
         *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) + 1;
    UNLOCK();
  }
  local_258.ErrorCode = FIoStatus::Unknown.ErrorCode;
  local_258.SystemErrorCode = FIoStatus::Unknown.SystemErrorCode;
  pFVar12 = FIoStatus::FIoStatus(&local_2a8,InvalidCode);
  FIoStatus::FIoStatus(&local_218);
  if (pFVar12->ErrorCode == Ok) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FIoStatus::operator=(&local_218,pFVar12);
  FIoStatus::~FIoStatus(pFVar12);
  EVar3 = local_258.ErrorCode;
  FIoStatus::operator=(&local_258,Unknown);
  if ((EVar3 == Ok) && (local_248 != (void *)0x0)) {
    FMemory::Free(local_248);
  }
  if (local_218.ErrorCode == Ok) {
    local_248 = local_208;
    local_240 = (undefined4)local_200;
    local_23c = local_200._4_4_;
    local_200 = 0;
    local_208 = (void *)0x0;
    FIoStatus::operator=(&local_218,Unknown);
    FIoStatus::operator=(&local_258,Ok);
  }
  else {
    FIoStatus::operator=(&local_258,&local_218);
  }
  FIoStatus::operator=(&local_218,Unknown);
  if ((local_218.ErrorCode == Ok) && (local_208 != (void *)0x0)) {
    FMemory::Free(local_208);
  }
  FIoStatus::~FIoStatus(&local_218);
  if (local_258.ErrorCode != InvalidCode) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_368,"Assign temporary IoStatusOr with status");
    (*pcVar2)(pFVar1,&local_368,0);
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
  }
  EVar3 = local_258.ErrorCode;
  FIoStatus::operator=(&local_258,Unknown);
  if ((EVar3 == Ok) && (local_248 != (void *)0x0)) {
    FMemory::Free(local_248);
  }
  FIoStatus::~FIoStatus(&local_258);
  ::FString::FString(&local_458,"Unreal");
  FVar4.Data = local_458.Data.AllocatorInstance.Data;
  local_4c8.Data = (FScriptContainerElement *)0x0;
  iVar9 = local_458.Data.ArrayNum;
  local_4c0 = CONCAT44(local_4c0._4_4_,iVar9);
  local_458.Data.ArrayNum = iVar9;
  if (iVar9 == 0) {
    local_4c0 = local_458.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar9,0,&local_4c8,iVar9,(int *)((longlong)&local_4c0 + 4));
    memcpy(local_4c8.Data,FVar4.Data,(longlong)iVar9 * 2);
  }
  FIoStatus::FIoStatus(&local_178);
  FIoStatus::operator=(&local_178,&FIoStatus::Ok);
  local_168.Data.AllocatorInstance.Data = local_4c8.Data;
  local_168.Data.ArrayNum = (int)local_4c0;
  local_168.Data.ArrayMax = local_4c0._4_4_;
  local_4c8.Data = (FScriptContainerElement *)0x0;
  local_4c0 = 0;
  local_238.ErrorMessage.Chars = FIoStatus::Unknown.ErrorMessage.Chars;
  if (FIoStatus::Unknown.ErrorMessage.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) =
         *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) + 1;
    UNLOCK();
  }
  EVar3 = FIoStatus::Unknown.ErrorCode;
  local_238.ErrorCode = FIoStatus::Unknown.ErrorCode;
  local_238.SystemErrorCode = FIoStatus::Unknown.SystemErrorCode;
  FIoStatus::operator=(&local_238,Unknown);
  if ((EVar3 == Ok) && (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if (local_178.ErrorCode == Ok) {
    ::FString::FString(&local_228,&local_168);
    FIoStatus::operator=(&local_238,Ok);
  }
  else {
    FIoStatus::operator=(&local_238,&local_178);
  }
  if (local_238.ErrorCode != Ok) {
    StatusOrCrash(&local_238);
  }
  if (local_228.Data.ArrayNum == local_458.Data.ArrayNum) {
    if (1 < local_228.Data.ArrayNum) {
      iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_228.Data.AllocatorInstance.Data,
                         (wchar_t *)local_458.Data.AllocatorInstance.Data);
      bVar8 = iVar9 == 0;
      goto LAB_141c1830c;
    }
  }
  else {
    bVar8 = local_228.Data.ArrayNum + local_458.Data.ArrayNum == 1;
LAB_141c1830c:
    if (!bVar8) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar1 = pFVar10->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_358,"Assign IoStatusOr with value");
      (*pcVar2)(pFVar1,&local_358,0);
      if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_358.Data.AllocatorInstance.Data);
      }
    }
  }
  EVar3 = local_238.ErrorCode;
  FIoStatus::operator=(&local_238,Unknown);
  if ((EVar3 == Ok) && (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  FIoStatus::~FIoStatus(&local_238);
  FIoStatus::operator=(&local_178,Unknown);
  if ((local_178.ErrorCode == Ok) &&
     (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  FIoStatus::~FIoStatus(&local_178);
  if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_408,"Unreal");
  local_158._0_8_ = FIoStatus::Unknown.ErrorMessage.Chars;
  if (FIoStatus::Unknown.ErrorMessage.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) =
         *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) + 1;
    UNLOCK();
  }
  local_158._8_4_ = FIoStatus::Unknown.ErrorCode;
  local_158._12_4_ = FIoStatus::Unknown.SystemErrorCode;
  FIoStatus::FIoStatus((FIoStatus *)local_58);
  FIoStatus::operator=((FIoStatus *)local_58,&FIoStatus::Ok);
  ::FString::FString(&local_48,&local_408);
  TIoStatusOr<FIoStatusTestType>::operator=
            ((TIoStatusOr<FIoStatusTestType> *)local_158,(TIoStatusOr<FIoStatusTestType> *)local_58)
  ;
  FIoStatus::operator=((FIoStatus *)local_58,Unknown);
  if ((local_58._8_4_ == Ok) &&
     (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FIoStatus::~FIoStatus((FIoStatus *)local_58);
  if (local_158._8_4_ != Ok) {
    StatusOrCrash((FIoStatus *)local_158);
  }
  if (local_140 == local_408.Data.ArrayNum) {
    if (1 < local_140) {
      iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_158._16_8_,
                         (wchar_t *)local_408.Data.AllocatorInstance.Data);
      bVar8 = iVar9 == 0;
      goto LAB_141c184d1;
    }
  }
  else {
    bVar8 = local_140 + local_408.Data.ArrayNum == 1;
LAB_141c184d1:
    if (!bVar8) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar1 = pFVar10->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_348,"Assign temporary IoStatusOr with value");
      (*pcVar2)(pFVar1,&local_348,0);
      if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_348.Data.AllocatorInstance.Data);
      }
    }
  }
  uVar7 = local_158._8_4_;
  FIoStatus::operator=((FIoStatus *)local_158,Unknown);
  if ((uVar7 == Ok) && ((wchar_t *)local_158._16_8_ != (wchar_t *)0x0)) {
    FMemory::Free((void *)local_158._16_8_);
  }
  FIoStatus::~FIoStatus((FIoStatus *)local_158);
  if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Data.AllocatorInstance.Data);
  }
  FIoStatus::FIoStatus(&local_3e8,InvalidCode);
  local_138.ErrorMessage.Chars = FIoStatus::Unknown.ErrorMessage.Chars;
  if (FIoStatus::Unknown.ErrorMessage.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) =
         *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) + 1;
    UNLOCK();
  }
  local_138.ErrorCode = FIoStatus::Unknown.ErrorCode;
  local_138.SystemErrorCode = FIoStatus::Unknown.SystemErrorCode;
  if (local_3e8.ErrorCode == Ok) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!OtherStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x15f,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar3 = local_138.ErrorCode;
  FIoStatus::operator=(&local_138,Unknown);
  if ((EVar3 == Ok) && (local_128 != (void *)0x0)) {
    FMemory::Free(local_128);
  }
  FIoStatus::operator=(&local_138,&local_3e8);
  if (local_138.ErrorCode != InvalidCode) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_338,"Assign status");
    (*pcVar2)(pFVar1,&local_338,0);
    if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data.AllocatorInstance.Data);
    }
  }
  EVar3 = local_138.ErrorCode;
  FIoStatus::operator=(&local_138,Unknown);
  if ((EVar3 == Ok) && (local_128 != (void *)0x0)) {
    FMemory::Free(local_128);
  }
  FIoStatus::~FIoStatus(&local_138);
  FIoStatus::~FIoStatus(&local_3e8);
  local_98._0_8_ = FIoStatus::Unknown.ErrorMessage.Chars;
  if (FIoStatus::Unknown.ErrorMessage.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) =
         *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) + 1;
    UNLOCK();
  }
  local_98._8_4_ = FIoStatus::Unknown.ErrorCode;
  local_98._12_4_ = FIoStatus::Unknown.SystemErrorCode;
  pFVar12 = FIoStatus::FIoStatus(&local_2c8,InvalidCode);
  TIoStatusOr<FIoStatusTestType>::operator=((TIoStatusOr<FIoStatusTestType> *)local_98,pFVar12);
  FIoStatus::~FIoStatus(&local_2c8);
  if (local_98._8_4_ != InvalidCode) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_328,"Assign temporary status");
    (*pcVar2)(pFVar1,&local_328,0);
    if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.Data.AllocatorInstance.Data);
    }
  }
  uVar7 = local_98._8_4_;
  FIoStatus::operator=((FIoStatus *)local_98,Unknown);
  if ((uVar7 == Ok) && ((void *)local_98._16_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_98._16_8_);
  }
  FIoStatus::~FIoStatus((FIoStatus *)local_98);
  ::FString::FString(&local_448,"Unreal");
  iVar9 = local_448.Data.ArrayNum;
  FVar4.Data = local_448.Data.AllocatorInstance.Data;
  local_488.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_448.Data.ArrayNum == 0) {
    local_488.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_448.Data.ArrayNum,0,(ForAnyElementType *)&local_488,local_448.Data.ArrayNum
               ,&local_488.Data.ArrayMax);
    memcpy(local_488.Data.AllocatorInstance.Data,FVar4.Data,(longlong)iVar9 * 2);
  }
  local_1f8.ErrorMessage.Chars = FIoStatus::Unknown.ErrorMessage.Chars;
  if (FIoStatus::Unknown.ErrorMessage.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) =
         *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) + 1;
    UNLOCK();
  }
  EVar3 = FIoStatus::Unknown.ErrorCode;
  local_1f8.ErrorCode = FIoStatus::Unknown.ErrorCode;
  local_1f8.SystemErrorCode = FIoStatus::Unknown.SystemErrorCode;
  FIoStatus::operator=(&local_1f8,Unknown);
  if ((EVar3 == Ok) && (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1e8,&local_488);
  FIoStatus::operator=(&local_1f8,Ok);
  if (local_1f8.ErrorCode != Ok) {
    StatusOrCrash(&local_1f8);
  }
  if (local_1e8.Data.ArrayNum == local_448.Data.ArrayNum) {
    if (1 < local_1e8.Data.ArrayNum) {
      iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_1e8.Data.AllocatorInstance.Data,
                         (wchar_t *)local_448.Data.AllocatorInstance.Data);
      bVar8 = iVar9 == 0;
      goto LAB_141c18892;
    }
  }
  else {
    bVar8 = local_1e8.Data.ArrayNum + local_448.Data.ArrayNum == 1;
LAB_141c18892:
    if (!bVar8) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar1 = pFVar10->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_318,"Assign value");
      (*pcVar2)(pFVar1,&local_318,0);
      if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_318.Data.AllocatorInstance.Data);
      }
    }
  }
  EVar3 = local_1f8.ErrorCode;
  FIoStatus::operator=(&local_1f8,Unknown);
  if ((EVar3 == Ok) && (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  FIoStatus::~FIoStatus(&local_1f8);
  if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Data.AllocatorInstance.Data);
  }
  if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_438,"Unreal");
  FVar4.Data = local_438.Data.AllocatorInstance.Data;
  iVar9 = local_438.Data.ArrayNum;
  local_298.ErrorMessage.Chars = FIoStatus::Unknown.ErrorMessage.Chars;
  if (FIoStatus::Unknown.ErrorMessage.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) =
         *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) + 1;
    UNLOCK();
  }
  local_298.ErrorCode = FIoStatus::Unknown.ErrorCode;
  local_298.SystemErrorCode = FIoStatus::Unknown.SystemErrorCode;
  local_4d8.Data = (FScriptContainerElement *)0x0;
  local_4d0 = CONCAT44(local_4d0._4_4_,local_438.Data.ArrayNum);
  if (local_438.Data.ArrayNum == 0) {
    local_4d0 = local_438.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_438.Data.ArrayNum,0,&local_4d8,local_438.Data.ArrayNum,
               (int *)((longlong)&local_4d0 + 4));
    memcpy(local_4d8.Data,FVar4.Data,(longlong)iVar9 * 2);
  }
  EVar3 = local_298.ErrorCode;
  FIoStatus::operator=(&local_298,Unknown);
  if ((EVar3 == Ok) && (local_288 != (void *)0x0)) {
    FMemory::Free(local_288);
  }
  local_288 = local_4d8.Data;
  local_280 = (int)local_4d0;
  local_27c = local_4d0._4_4_;
  local_4d0 = 0;
  local_4d8.Data = (FScriptContainerElement *)0x0;
  FIoStatus::operator=(&local_298,Ok);
  if (local_4d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.Data);
  }
  if (local_298.ErrorCode != Ok) {
    StatusOrCrash(&local_298);
  }
  if (local_280 == local_438.Data.ArrayNum) {
    if (1 < local_280) {
      iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_288,(wchar_t *)local_438.Data.AllocatorInstance.Data);
      bVar8 = iVar9 == 0;
      goto LAB_141c18a7f;
    }
  }
  else {
    bVar8 = local_280 + local_438.Data.ArrayNum == 1;
LAB_141c18a7f:
    if (!bVar8) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar1 = pFVar10->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_308,"Assign temporary value");
      (*pcVar2)(pFVar1,&local_308,0);
      if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.Data.AllocatorInstance.Data);
      }
    }
  }
  EVar3 = local_298.ErrorCode;
  FIoStatus::operator=(&local_298,Unknown);
  if ((EVar3 == Ok) && (local_288 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_288);
  }
  FIoStatus::~FIoStatus(&local_298);
  if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_428,"Unreal");
  iVar9 = local_428.Data.ArrayNum;
  FVar4.Data = local_428.Data.AllocatorInstance.Data;
  local_4b8.Data = (FScriptContainerElement *)0x0;
  local_4b0 = local_428.Data.ArrayNum;
  if (local_428.Data.ArrayNum == 0) {
    local_4ac = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_428.Data.ArrayNum,0,&local_4b8,local_428.Data.ArrayNum,&local_4ac);
    memcpy(local_4b8.Data,FVar4.Data,(longlong)iVar9 * 2);
  }
  FIoStatus::FIoStatus(&local_278);
  FIoStatus::operator=(&local_278,&FIoStatus::Ok);
  local_268 = local_4b8.Data;
  local_260 = CONCAT44(local_4ac,local_4b0);
  if (local_278.ErrorCode != Ok) {
    StatusOrCrash(&local_278);
  }
  FIoStatus::operator=(&local_278,&FIoStatus::Unknown);
  pFVar6 = local_268;
  iVar9 = (int)local_260;
  local_268 = (void *)0x0;
  local_260 = 0;
  if (iVar9 == local_428.Data.ArrayNum) {
    if (iVar9 < 2) goto LAB_141c18c6c;
    iVar9 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)pFVar6,(wchar_t *)local_428.Data.AllocatorInstance.Data);
    bVar8 = iVar9 == 0;
  }
  else {
    bVar8 = iVar9 + local_428.Data.ArrayNum == 1;
  }
  if (!bVar8) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_2f8,"Consume value or die with valid value");
    (*pcVar2)(pFVar1,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
LAB_141c18c6c:
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  FIoStatus::operator=(&local_278,Unknown);
  if ((local_278.ErrorCode == Ok) && (local_268 != (void *)0x0)) {
    FMemory::Free(local_268);
  }
  FIoStatus::~FIoStatus(&local_278);
  if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.Data.AllocatorInstance.Data);
  }
  return;
}

