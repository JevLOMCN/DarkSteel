// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141d5a1c0

EAutomationTestFlags __thiscall
FTemplatesValueOrErrorTest::GetTestFlags(FTemplatesValueOrErrorTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141d5a1d0

bool __thiscall FTemplatesValueOrErrorTest::IsStressTest(FTemplatesValueOrErrorTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141d5a1e0

uint __thiscall FTemplatesValueOrErrorTest::GetRequiredDeviceNum(FTemplatesValueOrErrorTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141d5a1f0

FString * __thiscall
FTemplatesValueOrErrorTest::GetTestSourceFileName
          (FTemplatesValueOrErrorTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Templates\\ValueOrErrorTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141d5a220

int __thiscall FTemplatesValueOrErrorTest::GetTestSourceFileLine(FTemplatesValueOrErrorTest *this)

{
  return 0xb;
}

// GetTests @ 141d5a230

/* WARNING: Removing unreachable block (ram,0x000141d5a3ae) */

void __thiscall
FTemplatesValueOrErrorTest::GetTests
          (FTemplatesValueOrErrorTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141d5a3d0

bool __thiscall
FTemplatesValueOrErrorTest::RunTest(FTemplatesValueOrErrorTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141d5a400

FString * __thiscall
FTemplatesValueOrErrorTest::GetBeautifiedTestName
          (FTemplatesValueOrErrorTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTemplatesValueOrErrorTest @ 141d6cac0

FTemplatesValueOrErrorTest * __thiscall
FTemplatesValueOrErrorTest::FTemplatesValueOrErrorTest
          (FTemplatesValueOrErrorTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTemplatesValueOrErrorTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][Templates][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Templates::ValueOrError");
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
  ::FString::FString(&local_18,"[Core][Templates][SmokeFilter]");
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

// TestBody @ 141d8ae70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141d8ca6d) */
/* WARNING: Removing unreachable block (ram,0x000141d8ca92) */
/* WARNING: Removing unreachable block (ram,0x000141d8c9de) */
/* WARNING: Removing unreachable block (ram,0x000141d8ca03) */
/* WARNING: Removing unreachable block (ram,0x000141d8caff) */
/* WARNING: Removing unreachable block (ram,0x000141d8cb24) */
/* WARNING: Removing unreachable block (ram,0x000141d8ca0b) */
/* WARNING: Removing unreachable block (ram,0x000141d8ca46) */
/* WARNING: Removing unreachable block (ram,0x000141d8cb2c) */
/* WARNING: Removing unreachable block (ram,0x000141d8cb67) */
/* WARNING: Removing unreachable block (ram,0x000141d8ca9a) */
/* WARNING: Removing unreachable block (ram,0x000141d8cad5) */

void __thiscall
FTemplatesValueOrErrorTest::TestBody(FTemplatesValueOrErrorTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int *piVar3;
  bool bVar4;
  FAutomationTestFramework *pFVar5;
  ulonglong uVar6;
  int *piVar7;
  undefined1 auStack_558 [32];
  undefined8 local_538;
  FString local_530 [4];
  FString local_4f0;
  FString local_4e0;
  FString local_4d0;
  FString local_4c0;
  FString local_4b0;
  FString local_4a0;
  FString local_490;
  FString local_480;
  FString local_470;
  FString local_460;
  FString local_450;
  FString local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0 [2];
  int local_b0;
  byte local_ac;
  int local_a8;
  byte local_a4;
  int local_a0;
  byte local_9c;
  int local_98;
  byte local_94;
  int local_90;
  byte local_8c;
  int local_88;
  byte local_84;
  int local_80;
  byte local_7c;
  TValueOrError<_protected:_void___cdecl_FTemplatesValueOrErrorTest::TestBody(FString_const_&)_::_2_::FTestValue,_protected:_void___cdecl_FTemplatesValueOrErrorTest::TestBody(FString_const_&)_::_2_::FTestError>
  local_78;
  TValueOrError<_protected:_void___cdecl_FTemplatesValueOrErrorTest::TestBody(FString_const_&)_::_2_::FTestValue,_protected:_void___cdecl_FTemplatesValueOrErrorTest::TestBody(FString_const_&)_::_2_::FTestError>
  local_70;
  TValueOrError<_protected:_void___cdecl_FTemplatesValueOrErrorTest::TestBody(FString_const_&)_::_2_::FTestValue,_protected:_void___cdecl_FTemplatesValueOrErrorTest::TestBody(FString_const_&)_::_2_::FTestError>
  local_68;
  TValueOrError<_protected:_void___cdecl_FTemplatesValueOrErrorTest::TestBody(FString_const_&)_::_2_::FTestValue,_protected:_void___cdecl_FTemplatesValueOrErrorTest::TestBody(FString_const_&)_::_2_::FTestError>
  local_60;
  TValueOrError<_protected:_void___cdecl_FTemplatesValueOrErrorTest::TestBody(FString_const_&)_::_2_::FTestValue,_protected:_void___cdecl_FTemplatesValueOrErrorTest::TestBody(FString_const_&)_::_2_::FTestError>
  local_58;
  undefined4 local_50;
  uint uStack_4c;
  undefined4 local_48;
  undefined1 uStack_44;
  undefined3 uStack_43;
  undefined4 local_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_558;
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_440,L"Static");
  (*pcVar2)(pFVar1,&local_440,0,0);
  if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_440.Data.AllocatorInstance.Data);
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_430,L"MakeValue Move");
  (*pcVar2)(pFVar1,&local_430,0,0);
  if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_430.Data.AllocatorInstance.Data);
  }
  ValueCount = ValueCount + 1;
  local_a4 = 0;
  local_a8 = ValueCount;
  if (ValueCount != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_420,L"Condition failed");
    (*pcVar2)(pFVar1,&local_420,0);
    if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_420.Data.AllocatorInstance.Data);
    }
  }
  piVar7 = (int *)0x0;
  piVar3 = &local_a8;
  if ((local_a4 != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), piVar3 = piVar7, bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (piVar3 != &local_a8) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_410,L"Condition failed");
    (*pcVar2)(pFVar1,&local_410,0);
    if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_410.Data.AllocatorInstance.Data);
    }
  }
  if ((local_a4 != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_a8 != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_400,L"Condition failed");
    (*pcVar2)(pFVar1,&local_400,0);
    if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_400.Data.AllocatorInstance.Data);
    }
  }
  uVar6 = (ulonglong)local_a4;
  if ((2 < uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((&DAT_1507a3444)[uVar6] == '\0') {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3f0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_3f0,0);
    if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
    }
  }
  if (local_a4 == 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_530,L"Condition failed");
    (*pcVar2)(pFVar1,local_530,0);
    if (local_530[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_530[0].Data.AllocatorInstance.Data);
    }
  }
  uVar6 = (ulonglong)local_a4;
  if ((2 < uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((&DAT_1507a3440)[uVar6] != '\0') {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3d0,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_3d0,0);
    if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
    }
  }
  uVar6 = (ulonglong)local_a4;
  if ((2 < local_a4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&PTR_Destruct_1507a3040)[uVar6] ==
      UE::Core::Private::TDestructorCaller<`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestValue>
      ::Destruct) {
    ValueCount = ValueCount + -1;
  }
  else {
    (*(code *)(&PTR_Destruct_1507a3040)[uVar6])(&local_a8);
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_3c0,L"MakeValue Proxy");
  (*pcVar2)(pFVar1,&local_3c0,0,0);
  if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
  }
  ValueCount = ValueCount + 1;
  local_a0 = 0x10;
  local_9c = 0;
  if (ValueCount != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3b0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_3b0,0);
    if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
    }
  }
  piVar3 = &local_a0;
  if ((local_9c != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), piVar3 = piVar7, bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (piVar3 != &local_a0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3a0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_3a0,0);
    if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
    }
  }
  if ((local_9c != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_a0 != 0x10) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_390,L"Condition failed");
    (*pcVar2)(pFVar1,&local_390,0);
    if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_390.Data.AllocatorInstance.Data);
    }
  }
  uVar6 = (ulonglong)local_9c;
  if ((2 < uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((&DAT_1507a3444)[uVar6] == '\0') {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_380,L"Condition failed");
    (*pcVar2)(pFVar1,&local_380,0);
    if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_380.Data.AllocatorInstance.Data);
    }
  }
  if (local_9c == 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_370,L"Condition failed");
    (*pcVar2)(pFVar1,&local_370,0);
    if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_370.Data.AllocatorInstance.Data);
    }
  }
  uVar6 = (ulonglong)local_9c;
  if ((2 < uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((&DAT_1507a3440)[uVar6] != '\0') {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_360,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_360,0);
    if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_360.Data.AllocatorInstance.Data);
    }
  }
  uVar6 = (ulonglong)local_9c;
  if ((2 < local_9c) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&PTR_Destruct_1507a3040)[uVar6] ==
      UE::Core::Private::TDestructorCaller<`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestValue>
      ::Destruct) {
    ValueCount = ValueCount + -1;
  }
  else {
    (*(code *)(&PTR_Destruct_1507a3040)[uVar6])(&local_a0);
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_350,L"StealValue");
  (*pcVar2)(pFVar1,&local_350,0,0);
  if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.Data.AllocatorInstance.Data);
  }
  ValueCount = ValueCount + 1;
  local_84 = 2;
  local_88 = ValueCount;
  if (ValueCount != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_340,L"Condition failed");
    (*pcVar2)(pFVar1,&local_340,0);
    if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_340.Data.AllocatorInstance.Data);
    }
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_330,L"Condition failed");
    (*pcVar2)(pFVar1,&local_330,0);
    if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_330.Data.AllocatorInstance.Data);
    }
  }
  uVar6 = (ulonglong)local_84;
  if ((2 < uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((&DAT_1507a3440)[uVar6] != '\0') {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_320,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_320,0);
    if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_320.Data.AllocatorInstance.Data);
    }
  }
  uVar6 = (ulonglong)local_84;
  if ((2 < uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((&DAT_1507a3444)[uVar6] != '\0') {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_310,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_310,0);
    if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.Data.AllocatorInstance.Data);
    }
  }
  ValueCount = ValueCount + -1;
  uVar6 = (ulonglong)local_84;
  if ((2 < local_84) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&PTR_Destruct_1507a3040)[uVar6] !=
      UE::Core::Private::
      TDestructorCaller<TValueOrError<`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestValue,`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestError>::FEmptyType>
      ::Destruct) {
    (*(code *)(&PTR_Destruct_1507a3040)[uVar6])(&local_88);
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_300,L"MakeError Move");
  (*pcVar2)(pFVar1,&local_300,0,0);
  if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data.AllocatorInstance.Data);
  }
  ErrorCount = ErrorCount + 1;
  local_94 = 1;
  local_98 = ErrorCount;
  if (ErrorCount != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_2f0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2f0,0);
    if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
    }
  }
  piVar3 = &local_98;
  if ((local_94 != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), piVar3 = piVar7, bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (piVar3 != &local_98) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_2e0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2e0,0);
    if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
    }
  }
  if ((local_94 != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_98 != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_2d0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2d0,0);
    if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
    }
  }
  uVar6 = (ulonglong)local_94;
  if ((2 < uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((&DAT_1507a3440)[uVar6] == '\0') {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_2c0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2c0,0);
    if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
    }
  }
  if (local_94 == 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_2b0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2b0,0);
    if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
    }
  }
  uVar6 = (ulonglong)local_94;
  if ((2 < uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((&DAT_1507a3444)[uVar6] != '\0') {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_2a0,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_2a0,0);
    if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
    }
  }
  uVar6 = (ulonglong)local_94;
  if ((2 < local_94) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&PTR_Destruct_1507a3040)[uVar6] ==
      UE::Core::Private::
      TDestructorCaller<TValueOrError<`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestValue,`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestError>::FWrapErrorType>
      ::Destruct) {
    ErrorCount = ErrorCount + -1;
  }
  else {
    (*(code *)(&PTR_Destruct_1507a3040)[uVar6])(&local_98);
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_290,L"MakeError Proxy");
  (*pcVar2)(pFVar1,&local_290,0,0);
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  ErrorCount = ErrorCount + 1;
  local_90 = 0x10;
  local_8c = 1;
  if (ErrorCount != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_490,L"Condition failed");
    (*pcVar2)(pFVar1,&local_490,0);
    if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_490.Data.AllocatorInstance.Data);
    }
  }
  piVar3 = &local_90;
  if ((local_8c != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), piVar3 = piVar7, bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (piVar3 != &local_90) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_270,L"Condition failed");
    (*pcVar2)(pFVar1,&local_270,0);
    if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.Data.AllocatorInstance.Data);
    }
  }
  if ((local_8c != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_90 != 0x10) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_260,L"Condition failed");
    (*pcVar2)(pFVar1,&local_260,0);
    if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.Data.AllocatorInstance.Data);
    }
  }
  uVar6 = (ulonglong)local_8c;
  if ((2 < uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((&DAT_1507a3440)[uVar6] == '\0') {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_250,L"Condition failed");
    (*pcVar2)(pFVar1,&local_250,0);
    if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Data.AllocatorInstance.Data);
    }
  }
  if (local_8c == 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_240,L"Condition failed");
    (*pcVar2)(pFVar1,&local_240,0);
    if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Data.AllocatorInstance.Data);
    }
  }
  uVar6 = (ulonglong)local_8c;
  if ((2 < uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((&DAT_1507a3444)[uVar6] != '\0') {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_230,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_230,0);
    if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.Data.AllocatorInstance.Data);
    }
  }
  uVar6 = (ulonglong)local_8c;
  if ((2 < local_8c) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&PTR_Destruct_1507a3040)[uVar6] ==
      UE::Core::Private::
      TDestructorCaller<TValueOrError<`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestValue,`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestError>::FWrapErrorType>
      ::Destruct) {
    ErrorCount = ErrorCount + -1;
  }
  else {
    (*(code *)(&PTR_Destruct_1507a3040)[uVar6])(&local_90);
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_220,L"StealError");
  (*pcVar2)(pFVar1,&local_220,0,0);
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
  ErrorCount = ErrorCount + 1;
  local_7c = 2;
  local_80 = ErrorCount;
  if (ErrorCount != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_210,L"Condition failed");
    (*pcVar2)(pFVar1,&local_210,0);
    if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.Data.AllocatorInstance.Data);
    }
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_200,L"Condition failed");
    (*pcVar2)(pFVar1,&local_200,0);
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
  }
  uVar6 = (ulonglong)local_7c;
  if ((2 < uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((&DAT_1507a3444)[uVar6] != '\0') {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1f0,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1f0,0);
    if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
    }
  }
  uVar6 = (ulonglong)local_7c;
  if ((2 < uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((&DAT_1507a3440)[uVar6] != '\0') {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1e0,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1e0,0);
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
  }
  ErrorCount = ErrorCount + -1;
  uVar6 = (ulonglong)local_7c;
  if ((2 < local_7c) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&PTR_Destruct_1507a3040)[uVar6] !=
      UE::Core::Private::
      TDestructorCaller<TValueOrError<`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestValue,`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestError>::FEmptyType>
      ::Destruct) {
    (*(code *)(&PTR_Destruct_1507a3040)[uVar6])(&local_80);
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_1d0,L"Assignment");
  (*pcVar2)(pFVar1,&local_1d0,0,0);
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  local_b0 = ValueCount + 1;
  local_ac = 0;
  ValueCount = ValueCount + 2;
  local_78.Variant.TypeIndex = 0;
  local_78.Variant._padding_ = ValueCount;
  TValueOrError<`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestValue,`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestError>
  ::operator=(&local_b0,&local_78);
  uVar6 = (ulonglong)local_78.Variant.TypeIndex;
  if ((2 < local_78.Variant.TypeIndex) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&PTR_Destruct_1507a3040)[uVar6] ==
      UE::Core::Private::TDestructorCaller<`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestValue>
      ::Destruct) {
    ValueCount = ValueCount + -1;
  }
  else {
    (*(code *)(&PTR_Destruct_1507a3040)[uVar6])(&local_78);
  }
  if (ValueCount != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1c0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1c0,0);
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
  }
  if ((local_ac != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_b0 != 2) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1b0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1b0,0);
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
  }
  if (ErrorCount != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1a0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1a0,0);
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
  }
  ErrorCount = ErrorCount + 1;
  local_70.Variant.TypeIndex = 1;
  local_70.Variant._padding_ = ErrorCount;
  TValueOrError<`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestValue,`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestError>
  ::operator=(&local_b0,&local_70);
  uVar6 = (ulonglong)local_70.Variant.TypeIndex;
  if ((2 < local_70.Variant.TypeIndex) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&PTR_Destruct_1507a3040)[uVar6] ==
      UE::Core::Private::
      TDestructorCaller<TValueOrError<`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestValue,`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestError>::FWrapErrorType>
      ::Destruct) {
    ErrorCount = ErrorCount + -1;
  }
  else {
    (*(code *)(&PTR_Destruct_1507a3040)[uVar6])(&local_70);
  }
  if (ValueCount != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_190,L"Condition failed");
    (*pcVar2)(pFVar1,&local_190,0);
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
  }
  if (ErrorCount != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_180,L"Condition failed");
    (*pcVar2)(pFVar1,&local_180,0);
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
  }
  ErrorCount = ErrorCount + 1;
  local_68.Variant.TypeIndex = 1;
  local_68.Variant._padding_ = ErrorCount;
  TValueOrError<`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestValue,`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestError>
  ::operator=(&local_b0,&local_68);
  uVar6 = (ulonglong)local_68.Variant.TypeIndex;
  if ((2 < local_68.Variant.TypeIndex) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&PTR_Destruct_1507a3040)[uVar6] ==
      UE::Core::Private::
      TDestructorCaller<TValueOrError<`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestValue,`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestError>::FWrapErrorType>
      ::Destruct) {
    ErrorCount = ErrorCount + -1;
  }
  else {
    (*(code *)(&PTR_Destruct_1507a3040)[uVar6])(&local_68);
  }
  if (ValueCount != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_170,L"Condition failed");
    (*pcVar2)(pFVar1,&local_170,0);
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
  }
  if ((local_ac != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_b0 != 2) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_160,L"Condition failed");
    (*pcVar2)(pFVar1,&local_160,0);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
  }
  if (ErrorCount != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_150,L"Condition failed");
    (*pcVar2)(pFVar1,&local_150,0);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
  }
  ValueCount = ValueCount + 1;
  local_58.Variant.TypeIndex = 0;
  local_58.Variant._padding_ = ValueCount;
  TValueOrError<`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestValue,`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestError>
  ::operator=(&local_b0,&local_58);
  uVar6 = (ulonglong)local_58.Variant.TypeIndex;
  if ((2 < local_58.Variant.TypeIndex) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&PTR_Destruct_1507a3040)[uVar6] ==
      UE::Core::Private::TDestructorCaller<`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestValue>
      ::Destruct) {
    ValueCount = ValueCount + -1;
  }
  else {
    (*(code *)(&PTR_Destruct_1507a3040)[uVar6])(&local_58);
  }
  if (ValueCount != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_140,L"Condition failed");
    (*pcVar2)(pFVar1,&local_140,0);
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
  }
  if (ErrorCount != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_130,L"Condition failed");
    (*pcVar2)(pFVar1,&local_130,0);
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
  }
  local_60.Variant._padding_ = ValueCount + 1;
  local_60.Variant.TypeIndex = 2;
  TValueOrError<`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestValue,`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestError>
  ::operator=(&local_b0,&local_60);
  if (ValueCount != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_120,L"Condition failed");
    (*pcVar2)(pFVar1,&local_120,0);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
  }
  if (ErrorCount != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_110,L"Condition failed");
    (*pcVar2)(pFVar1,&local_110,0);
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
  }
  uVar6 = (ulonglong)local_ac;
  if ((2 < uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((&DAT_1507a3444)[uVar6] != '\0') {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_100,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_100,0);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
  }
  uVar6 = (ulonglong)local_ac;
  if ((2 < uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((&DAT_1507a3440)[uVar6] != '\0') {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f0,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_f0,0);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
  }
  uVar6 = (ulonglong)local_60.Variant.TypeIndex;
  if ((2 < local_60.Variant.TypeIndex) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&PTR_Destruct_1507a3040)[uVar6] !=
      UE::Core::Private::
      TDestructorCaller<TValueOrError<`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestValue,`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestError>::FEmptyType>
      ::Destruct) {
    (*(code *)(&PTR_Destruct_1507a3040)[uVar6])(&local_60);
  }
  uVar6 = (ulonglong)local_ac;
  if ((2 < local_ac) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (*(code *)(&PTR_Destruct_1507a3040)[uVar6])(&local_b0);
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_e0,L"Move-Only Value/Error");
  (*pcVar2)(pFVar1,&local_e0,0,0);
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(local_d0,L"Integer Value/Error");
  (*pcVar2)(pFVar1,local_d0,0,0);
  if (local_d0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0[0].Data.AllocatorInstance.Data);
  }
  uStack_4c = uStack_4c & 0xffffff00;
  _uStack_44 = CONCAT31(uStack_43,1);
  local_48 = 0;
  local_50 = 1;
  uStack_3c = CONCAT31(uStack_3c._1_3_,1);
  local_538 = CONCAT44(uStack_3c,1);
  local_40 = 1;
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_280,L"Value/Void Value");
  (*pcVar2)(pFVar1,&local_280,0,0);
  if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
  }
  ValueCount = ValueCount + 1;
  if (ValueCount != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_4f0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_4f0,0);
    if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
    }
  }
  ValueCount = ValueCount + -1;
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_4e0,L"Value/Void Error");
  (*pcVar2)(pFVar1,&local_4e0,0,0);
  if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
  }
  if (ValueCount != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_4d0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_4d0,0);
    if (local_4d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4d0.Data.AllocatorInstance.Data);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_4c0,L"Void/Error Value");
  (*pcVar2)(pFVar1,&local_4c0,0,0);
  if (local_4c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
  }
  if (ErrorCount != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_4b0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_4b0,0);
    if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_4a0,L"Void/Error Error");
  (*pcVar2)(pFVar1,&local_4a0,0,0);
  if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
  }
  ErrorCount = ErrorCount + 1;
  if (ErrorCount != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_480,L"Condition failed");
    (*pcVar2)(pFVar1,&local_480,0);
    if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_480.Data.AllocatorInstance.Data);
    }
  }
  ErrorCount = ErrorCount + -1;
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_470,L"Void/Void Value");
  (*pcVar2)(pFVar1,&local_470,0,0);
  if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_470.Data.AllocatorInstance.Data);
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_460,L"Void/Void Error");
  (*pcVar2)(pFVar1,&local_460,0,0);
  if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_460.Data.AllocatorInstance.Data);
  }
  if (ValueCount != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_450,L"Condition failed");
    (*pcVar2)(pFVar1,&local_450,0);
    if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_450.Data.AllocatorInstance.Data);
    }
  }
  if (ErrorCount != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_3e0,0);
    if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
    }
  }
  return;
}

