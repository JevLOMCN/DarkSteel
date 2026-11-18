// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141bc5c10

EAutomationTestFlags __thiscall FConsoleManagerTest::GetTestFlags(FConsoleManagerTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bc5c50

bool __thiscall FConsoleManagerTest::IsStressTest(FConsoleManagerTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bc5c70

uint __thiscall FConsoleManagerTest::GetRequiredDeviceNum(FConsoleManagerTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bc5c80

FString * __thiscall
FConsoleManagerTest::GetTestSourceFileName
          (FConsoleManagerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\HAL\\ConsoleManagerTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bc5cb0

int __thiscall FConsoleManagerTest::GetTestSourceFileLine(FConsoleManagerTest *this)

{
  return 0x18;
}

// GetTests @ 141bc5e60

/* WARNING: Removing unreachable block (ram,0x000141bc5fde) */

void __thiscall
FConsoleManagerTest::GetTests
          (FConsoleManagerTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bc6060

bool __thiscall FConsoleManagerTest::RunTest(FConsoleManagerTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bc6090

FString * __thiscall
FConsoleManagerTest::GetBeautifiedTestName
          (FConsoleManagerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FConsoleManagerTest @ 141be1e90

FConsoleManagerTest * __thiscall
FConsoleManagerTest::FConsoleManagerTest(FConsoleManagerTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FConsoleManagerTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][Core]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::HAL::ConsoleManager");
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
  ::FString::FString(&local_18,"[ApplicationContextMask][Core]");
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

// TestBody @ 141c0ffa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FConsoleManagerTest::TestBody(FConsoleManagerTest *this,FString *param_1)

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  TConsoleVariableData<int> *pTVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  FConsoleManager *this_00;
  FAutomationTestFramework *pFVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  ForAnyElementType FVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  code *pcVar21;
  FString *pFVar22;
  undefined8 uVar23;
  longlong lVar24;
  longlong *plVar25;
  longlong *plVar26;
  float fVar27;
  undefined1 auStackY_b28 [32];
  FString local_ae0;
  FOutputDevice local_ad0;
  longlong *local_ac0;
  FString local_ab8;
  uint local_aa8;
  FOutputDevice local_aa0;
  float local_a90;
  int local_a8c;
  int local_a88;
  FAutoConsoleCommandDeprecated local_a84 [4];
  int local_a80;
  FAutoConsoleVariableDeprecated local_a7c [4];
  FString local_a78;
  FString local_a68;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a58;
  FDelegateAllocation local_a50;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a40;
  FDelegateAllocation local_a38;
  undefined1 local_a28 [8];
  ForAnyElementType local_a20;
  ulonglong local_a18;
  longlong *local_a10;
  undefined4 local_a08;
  undefined4 local_a04;
  uint ****local_a00;
  undefined8 local_9f8;
  undefined8 local_9f0;
  undefined8 local_9e8;
  undefined8 local_9e0;
  undefined8 local_9d8;
  undefined8 local_9d0;
  undefined8 local_9c8;
  undefined8 local_9c0;
  undefined8 local_9b8;
  undefined8 local_9b0;
  undefined8 local_9a8;
  undefined8 local_9a0;
  undefined4 local_998;
  undefined1 local_994;
  undefined8 local_990;
  undefined1 local_988;
  undefined4 local_984;
  undefined4 local_980;
  undefined4 local_97c;
  undefined1 local_978;
  undefined8 local_974;
  undefined1 local_96c;
  undefined4 local_968;
  undefined4 local_964;
  undefined8 local_960;
  undefined4 local_958;
  undefined1 local_954;
  undefined8 local_950;
  undefined1 local_948;
  undefined4 local_944;
  undefined4 local_940;
  undefined4 local_93c;
  undefined1 local_938;
  undefined8 local_934;
  undefined1 local_92c;
  undefined4 local_928;
  undefined4 local_924;
  undefined4 local_920;
  undefined1 local_91c;
  undefined8 local_918;
  undefined1 local_910;
  undefined4 local_90c;
  undefined4 local_908;
  undefined4 local_904;
  undefined1 local_900;
  undefined8 local_8fc;
  undefined1 local_8f4;
  undefined4 local_8f0;
  undefined4 local_8ec;
  undefined4 local_8e8;
  undefined1 local_8e4;
  undefined8 local_8e0;
  undefined1 local_8d8;
  undefined4 local_8d4;
  undefined4 local_8d0;
  undefined4 local_8cc;
  undefined1 local_8c8;
  undefined8 local_8c4;
  undefined1 local_8bc;
  undefined4 local_8b8;
  undefined4 local_8b4;
  IConsoleThreadPropagation *local_8b0;
  undefined4 local_8a8;
  undefined1 local_8a4;
  undefined8 local_8a0;
  undefined1 local_898;
  undefined4 local_894;
  undefined4 local_890;
  FString local_888;
  undefined4 local_878;
  undefined1 local_874;
  undefined8 local_870;
  undefined1 local_868;
  undefined4 local_864;
  undefined4 local_860;
  undefined4 local_85c;
  undefined1 local_858;
  undefined8 local_854;
  undefined1 local_84c;
  undefined4 local_848;
  undefined4 local_844;
  undefined4 local_840;
  undefined1 local_83c;
  undefined8 local_838;
  undefined1 local_830;
  undefined4 local_82c;
  undefined4 local_828;
  FString local_820;
  FString local_810;
  FString local_800;
  FString local_7f0;
  FString local_7e0;
  FString local_7d0;
  FString local_7c0;
  FString local_7b0;
  FString local_7a0;
  FString local_790;
  FString local_780;
  FString local_770;
  FString local_760;
  FString local_750;
  FString local_740;
  FString local_730;
  FString local_720;
  FString local_710;
  FString local_700;
  FString local_6f0;
  FString local_6e0;
  FString local_6d0;
  FString local_6c0;
  FString local_6b0;
  FString local_6a0;
  FString local_690;
  FString local_680;
  FString local_670;
  FString local_660;
  FString local_650;
  FString local_640;
  FString local_630;
  FString local_620;
  FString local_610;
  FString local_600;
  FString local_5f0;
  FString local_5e0;
  FString local_5d0;
  FString local_5c0;
  FString local_5b0;
  FString local_5a0;
  FString local_590;
  FString local_580;
  FString local_570;
  FString local_560;
  FString local_550;
  FString local_540;
  FString local_530;
  FString local_520;
  FString local_510;
  FString local_500;
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
  FDestructionSentinel local_410;
  FDestructionSentinel local_3f8;
  FDestructionSentinel local_3e0;
  FDestructionSentinel local_3c8;
  FDelegateAllocation *local_3b0;
  FDestructionSentinel local_3a8;
  FDelegateAllocation *local_390;
  FString local_388;
  void *local_378 [2];
  FString local_368;
  void *local_358 [2];
  FString local_348;
  void *local_338 [2];
  void *local_328 [2];
  FString local_318;
  void *local_308 [2];
  FString local_2f8;
  void *local_2e8 [2];
  FString local_2d8;
  void *local_2c8 [2];
  FString local_2b8;
  void *local_2a8 [2];
  FString local_298;
  void *local_288 [2];
  FString local_278;
  void *local_268 [2];
  FString local_258;
  FAutoConsoleObject local_248;
  FAutoConsoleObject local_238;
  FString local_228;
  void *local_218 [2];
  FString local_208;
  FString local_1f8;
  void *local_1e8 [2];
  FString local_1d8;
  void *local_1c8 [2];
  void *local_1b8 [2];
  undefined1 local_1a8 [12];
  undefined1 local_19c [12];
  undefined1 local_190 [12];
  undefined1 local_184 [12];
  undefined1 local_178 [12];
  undefined1 local_16c [12];
  undefined1 local_160 [12];
  undefined1 local_154 [12];
  undefined1 local_148 [12];
  undefined1 local_13c [12];
  undefined1 local_130 [12];
  undefined1 local_124 [12];
  wchar_t local_118 [48];
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_b28;
  this_00 = (FConsoleManager *)IConsoleManager::Get();
  local_ab8.Data.AllocatorInstance.Data = (FScriptContainerElement *)this_00;
  local_8b0 = FConsoleManager::GetThreadPropagationCallback(this_00);
  (**(code **)(this_00->_padding_ + 0x108))(this_00,0,0);
  fVar10 = __real_40466666;
  fVar9 = __real_40066666;
  fVar8 = __real_3f9d70a4;
  fVar7 = __real_3f99999a;
  fVar6 = __real_40000000;
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar4 = __real_3f800000;
  fVar3 = __real_38d1b717;
  local_a00 = (uint ****)&local_a08;
  local_a08 = 0;
  local_9c0 = 0;
  local_9e8 = 0;
  local_9e0 = 0;
  local_9d8 = 0;
  local_9d0 = 0;
  local_9b8 = 0;
  local_9b0 = 0;
  local_9a8 = 0;
  local_9a0 = 0;
  local_9f8 = 0;
  local_9f0 = 0;
  local_a04 = 0x20;
  do {
    local_aa8 = *(uint *)local_a00;
    local_a80 = 2;
    local_a90 = 2.1;
    local_a68.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0x18))
                   (local_ab8.Data.AllocatorInstance.Data,L"TestNameA",1,L"TestHelpA");
    local_a78.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0x10))
                   (local_ab8.Data.AllocatorInstance.Data,L"TestNameB",fVar7,L"TestHelpB");
    local_aa0._padding_ =
         (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0x40))
                   (local_ab8.Data.AllocatorInstance.Data,L"TestNameD",&local_a80,L"TestHelpD");
    local_ad0._padding_ =
         (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0x38))
                   (local_ab8.Data.AllocatorInstance.Data,L"TestNameE",&local_a90,L"TestHelpE");
    pFVar15 = FAutomationTestFramework::Get();
    local_ae0.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar15->CurrentTest;
    pcVar21 = *(code **)(((FAutomationTestBase *)local_ae0.Data.AllocatorInstance.Data)->_padding_ +
                        0x50);
    ::FString::FString(&local_440,L"Console Variable Sinks");
    (*pcVar21)(local_ae0.Data.AllocatorInstance.Data,&local_440,0,0);
    if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_440.Data.AllocatorInstance.Data);
    }
    (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0x58))();
    local_a8c = 0;
    local_a40.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_a38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a38.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_a40,(FWriteAccessScope *)&local_3a8);
    local_390 = &local_a38;
    puVar16 = UE::Core::Private::DelegateAllocate(0x20,&local_a38);
    if (puVar16 != (undefined8 *)0x0) {
      *puVar16 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar17 = FDelegateHandle::GenerateNewID();
      puVar16[2] = uVar17;
      *puVar16 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::`7'::<lambda_2>_>
                  ::_vftable_;
      puVar16[3] = &local_a8c;
    }
    if (local_3a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a8.Accessor,&local_3a8);
    }
    (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0x60))
              (local_ab8.Data.AllocatorInstance.Data,&local_960,&local_a40);
    local_a10 = (longlong *)
                (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0x18))
                          (local_ab8.Data.AllocatorInstance.Data,L"TestNameX",1,L"TestHelpX");
    (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0x58))();
    if (local_a8c != 0) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_430,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_430,0);
      if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_430.Data.AllocatorInstance.Data);
      }
    }
    local_8e8 = 0xe000000;
    local_8e4 = 0;
    local_8e0 = 0;
    local_8d8 = 0;
    local_8d4 = 0xf000000;
    local_8d0 = 0x1000000;
    ::FString::PrintfImpl(&local_888,L"%d");
    FVar18.Data = (FScriptContainerElement *)L"";
    if (local_888.Data.ArrayNum != 0) {
      FVar18.Data = local_888.Data.AllocatorInstance.Data;
    }
    local_ae0.Data.AllocatorInstance.Data = (FScriptContainerElement *)*local_a10;
    (**(code **)(local_ae0.Data.AllocatorInstance.Data + 0xa8))(local_a10,local_13c,&local_8e8);
    (**(code **)(local_ae0.Data.AllocatorInstance.Data + 0xb0))(local_a10,FVar18.Data);
    if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_888.Data.AllocatorInstance.Data);
    }
    (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0x58))();
    if (local_a8c != 1) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_420,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_420);
      if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_420.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0x58))();
    if (local_a8c != 1) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_820,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_820);
      if (local_820.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_820.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0xb8))
              (local_ab8.Data.AllocatorInstance.Data,local_a10);
    (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0x68))
              (local_ab8.Data.AllocatorInstance.Data,local_960);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_a40,(FWriteAccessScope *)&local_410);
    if ((local_a38.DelegateSize != 0) &&
       (local_a38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a38.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a38,0,0,0x10);
      local_a38.DelegateSize = 0;
    }
    if (local_410.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_410.Accessor,&local_410);
    }
    if (local_a38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a38.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a40.AccessDetector);
    local_a88 = 0;
    local_a58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_a50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_a58,(FWriteAccessScope *)&local_3c8);
    local_3b0 = &local_a50;
    puVar16 = UE::Core::Private::DelegateAllocate(0x20,&local_a50);
    if (puVar16 != (undefined8 *)0x0) {
      *puVar16 = &
                 ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar17 = FDelegateHandle::GenerateNewID();
      puVar16[2] = uVar17;
      *puVar16 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::`6'::<lambda_5>_>
                  ::_vftable_;
      puVar16[3] = &local_a88;
    }
    if (local_3c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c8.Accessor,&local_3c8);
    }
    (**(code **)(*(longlong *)local_a78.Data.AllocatorInstance.Data + 0xe0))
              (local_a78.Data.AllocatorInstance.Data,&local_a58);
    if (local_a88 != 0) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_810,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_810,0);
      if (local_810.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_810.Data.AllocatorInstance.Data);
      }
    }
    pFVar15 = FAutomationTestFramework::Get();
    pFVar2 = pFVar15->CurrentTest;
    local_ae0.Data.AllocatorInstance.Data = *(FScriptContainerElement **)(pFVar2->_padding_ + 0x50);
    ::FString::FString(&local_800,L"Register variables");
    (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_800,0,0);
    if (local_800.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_800.Data.AllocatorInstance.Data);
    }
    uVar19 = (**(code **)(*(longlong *)local_a68.Data.AllocatorInstance.Data + 0x18))();
    if ((uVar19 & 0xff000000) != 0) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_7f0,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_7f0,0);
      if (local_7f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7f0.Data.AllocatorInstance.Data);
      }
    }
    pFVar20 = (FScriptContainerElement *)
              (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0xc0))
                        (local_ab8.Data.AllocatorInstance.Data,L"TestNameA",1);
    if (local_a68.Data.AllocatorInstance.Data != pFVar20) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_7e0,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_7e0,0);
      if (local_7e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7e0.Data.AllocatorInstance.Data);
      }
    }
    pFVar20 = (FScriptContainerElement *)
              (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0xc0))
                        (local_ab8.Data.AllocatorInstance.Data,L"TestNameB",1);
    if (local_a78.Data.AllocatorInstance.Data != pFVar20) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_7d0,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_7d0,0);
      if (local_7d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7d0.Data.AllocatorInstance.Data);
      }
    }
    pcVar21 = (code *)(**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0xc0))
                                (local_ab8.Data.AllocatorInstance.Data,L"TestNameD",1);
    if ((code *)local_aa0._padding_ != pcVar21) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_7c0,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_7c0,0);
      if (local_7c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7c0.Data.AllocatorInstance.Data);
      }
    }
    pcVar21 = (code *)(**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0xc0))
                                (local_ab8.Data.AllocatorInstance.Data,L"TestNameE",1);
    if ((code *)local_ad0._padding_ != pcVar21) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_7b0,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_7b0,0);
      if (local_7b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7b0.Data.AllocatorInstance.Data);
      }
    }
    pFVar15 = FAutomationTestFramework::Get();
    pFVar2 = pFVar15->CurrentTest;
    local_ae0.Data.AllocatorInstance.Data = *(FScriptContainerElement **)(pFVar2->_padding_ + 0x50);
    ::FString::FString(&local_7a0,L"Get variable values");
    (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_7a0,0,0);
    if (local_7a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7a0.Data.AllocatorInstance.Data);
    }
    iVar13 = (**(code **)(*(longlong *)local_a68.Data.AllocatorInstance.Data + 200))();
    if (iVar13 != 1) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_790,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_790,0);
      if (local_790.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_790.Data.AllocatorInstance.Data);
      }
    }
    fVar27 = (float)(**(code **)(*(longlong *)local_a68.Data.AllocatorInstance.Data + 0xd0))();
    if (fVar27 != fVar4) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_780,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_780,0);
      if (local_780.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_780.Data.AllocatorInstance.Data);
      }
    }
    pFVar22 = ::FString::FString(&local_1d8,L"1");
    puVar16 = (undefined8 *)
              (**(code **)(*(longlong *)local_a68.Data.AllocatorInstance.Data + 0xd8))
                        (local_a68.Data.AllocatorInstance.Data,local_1e8);
    iVar13 = *(int *)(puVar16 + 1);
    iVar1 = (pFVar22->Data).ArrayNum;
    if (iVar13 == iVar1) {
      if (iVar13 < 2) {
        local_ae0.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)
             ((ulonglong)local_ae0.Data.AllocatorInstance.Data._4_4_ << 0x20);
      }
      else {
        iVar13 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)*puVar16,(wchar_t *)(pFVar22->Data).AllocatorInstance.Data);
        local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar13 != 0);
      }
    }
    else {
      local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar1 + iVar13 != 1);
    }
    if (local_1e8[0] != (void *)0x0) {
      FMemory::Free(local_1e8[0]);
    }
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if ((char)local_ae0.Data.AllocatorInstance.Data != '\0') {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_770,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_770,0);
      if (local_770.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_770.Data.AllocatorInstance.Data);
      }
    }
    iVar13 = (**(code **)(*(longlong *)local_a78.Data.AllocatorInstance.Data + 200))();
    if (iVar13 != 1) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_760,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_760,0);
      if (local_760.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_760.Data.AllocatorInstance.Data);
      }
    }
    fVar27 = (float)(**(code **)(*(longlong *)local_a78.Data.AllocatorInstance.Data + 0xd0))();
    if (fVar3 < (float)((uint)(fVar27 - fVar7) & uVar5)) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_750,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_750,0);
      if (local_750.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_750.Data.AllocatorInstance.Data);
      }
    }
    pFVar22 = ::FString::FString(&local_228,L"1.2");
    puVar16 = (undefined8 *)
              (**(code **)(*(longlong *)local_a78.Data.AllocatorInstance.Data + 0xd8))
                        (local_a78.Data.AllocatorInstance.Data,local_1c8);
    iVar13 = *(int *)(puVar16 + 1);
    iVar1 = (pFVar22->Data).ArrayNum;
    if (iVar13 == iVar1) {
      if (iVar13 < 2) {
        local_ae0.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)
             ((ulonglong)local_ae0.Data.AllocatorInstance.Data._4_4_ << 0x20);
      }
      else {
        iVar13 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)*puVar16,(wchar_t *)(pFVar22->Data).AllocatorInstance.Data);
        local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar13 != 0);
      }
    }
    else {
      local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar1 + iVar13 != 1);
    }
    if (local_1c8[0] != (void *)0x0) {
      FMemory::Free(local_1c8[0]);
    }
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    if ((char)local_ae0.Data.AllocatorInstance.Data != '\0') {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_740,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_740,0);
      if (local_740.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_740.Data.AllocatorInstance.Data);
      }
    }
    if (local_a80 != 2) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_730,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_730,0);
      if (local_730.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_730.Data.AllocatorInstance.Data);
      }
    }
    iVar13 = (**(code **)(*(longlong *)local_aa0._padding_ + 200))();
    if (iVar13 != 2) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_720,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_720,0);
      if (local_720.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_720.Data.AllocatorInstance.Data);
      }
    }
    fVar27 = (float)(**(code **)(*(longlong *)local_aa0._padding_ + 0xd0))();
    if (fVar27 != fVar6) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_710,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_710,0);
      if (local_710.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_710.Data.AllocatorInstance.Data);
      }
    }
    pFVar22 = ::FString::FString(&local_208,L"2");
    puVar16 = (undefined8 *)
              (**(code **)(*(longlong *)local_aa0._padding_ + 0xd8))(local_aa0._padding_,local_218);
    iVar13 = *(int *)(puVar16 + 1);
    iVar1 = (pFVar22->Data).ArrayNum;
    if (iVar13 == iVar1) {
      if (iVar13 < 2) {
        local_ae0.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)
             ((ulonglong)local_ae0.Data.AllocatorInstance.Data._4_4_ << 0x20);
      }
      else {
        iVar13 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)*puVar16,(wchar_t *)(pFVar22->Data).AllocatorInstance.Data);
        local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar13 != 0);
      }
    }
    else {
      local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar1 + iVar13 != 1);
    }
    if (local_218[0] != (void *)0x0) {
      FMemory::Free(local_218[0]);
    }
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    if ((char)local_ae0.Data.AllocatorInstance.Data != '\0') {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_700,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_700,0);
      if (local_700.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_700.Data.AllocatorInstance.Data);
      }
    }
    if (fVar3 < (float)((uint)(local_a90 - fVar9) & uVar5)) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_6f0,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_6f0,0);
      if (local_6f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6f0.Data.AllocatorInstance.Data);
      }
    }
    local_ae0.Data.AllocatorInstance.Data._0_4_ = (int)local_a90;
    iVar13 = (**(code **)(*(longlong *)local_ad0._padding_ + 200))();
    if (iVar13 != (uint)local_ae0.Data.AllocatorInstance.Data) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_6e0,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_6e0,0);
      if (local_6e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6e0.Data.AllocatorInstance.Data);
      }
    }
    fVar27 = (float)(**(code **)(*(longlong *)local_ad0._padding_ + 0xd0))();
    if (fVar27 != local_a90) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_6d0,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_6d0,0);
      if (local_6d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6d0.Data.AllocatorInstance.Data);
      }
    }
    pFVar22 = ::FString::FString(&local_388,L"2.1");
    puVar16 = (undefined8 *)
              (**(code **)(*(longlong *)local_ad0._padding_ + 0xd8))(local_ad0._padding_,local_1b8);
    iVar13 = *(int *)(puVar16 + 1);
    iVar1 = (pFVar22->Data).ArrayNum;
    if (iVar13 == iVar1) {
      if (iVar13 < 2) {
        local_ae0.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)
             ((ulonglong)local_ae0.Data.AllocatorInstance.Data._4_4_ << 0x20);
      }
      else {
        iVar13 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)*puVar16,(wchar_t *)(pFVar22->Data).AllocatorInstance.Data);
        local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar13 != 0);
      }
    }
    else {
      local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar1 + iVar13 != 1);
    }
    if (local_1b8[0] != (void *)0x0) {
      FMemory::Free(local_1b8[0]);
    }
    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data.AllocatorInstance.Data);
    }
    if ((char)local_ae0.Data.AllocatorInstance.Data != '\0') {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_6c0,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_6c0,0);
      if (local_6c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6c0.Data.AllocatorInstance.Data);
      }
    }
    pFVar15 = FAutomationTestFramework::Get();
    pFVar2 = pFVar15->CurrentTest;
    local_ae0.Data.AllocatorInstance.Data = *(FScriptContainerElement **)(pFVar2->_padding_ + 0x50);
    ::FString::FString(&local_6b0,L"Set variable values (string)");
    (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_6b0,0,0);
    if (local_6b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b0.Data.AllocatorInstance.Data);
    }
    local_8fc = local_9e8;
    local_904 = 0xa000000;
    lVar24 = *(longlong *)local_a68.Data.AllocatorInstance.Data;
    local_900 = 0;
    local_8f4 = 0;
    local_8f0 = 0xf000000;
    local_8ec = 0x1000000;
    uVar23 = (**(code **)(lVar24 + 0xa8))
                       (local_a68.Data.AllocatorInstance.Data,local_124,&local_904);
    (**(code **)(lVar24 + 0xb0))(local_a68.Data.AllocatorInstance.Data,&u_3_1,uVar23);
    local_918 = local_9e0;
    local_920 = 0xa000000;
    lVar24 = *(longlong *)local_a78.Data.AllocatorInstance.Data;
    local_91c = 0;
    local_910 = 0;
    local_90c = 0xf000000;
    local_908 = 0x1000000;
    uVar23 = (**(code **)(lVar24 + 0xa8))
                       (local_a78.Data.AllocatorInstance.Data,local_154,&local_920);
    (**(code **)(lVar24 + 0xb0))(local_a78.Data.AllocatorInstance.Data,&u_3_1,uVar23);
    local_934 = local_9d8;
    local_93c = 0xa000000;
    lVar24 = *(longlong *)local_aa0._padding_;
    local_938 = 0;
    local_92c = 0;
    local_928 = 0xf000000;
    local_924 = 0x1000000;
    uVar23 = (**(code **)(lVar24 + 0xa8))(local_aa0._padding_,local_160,&local_93c);
    (**(code **)(lVar24 + 0xb0))(local_aa0._padding_,&u_3_1,uVar23);
    local_950 = local_9d0;
    local_958 = 0xa000000;
    lVar24 = *(longlong *)local_ad0._padding_;
    local_954 = 0;
    local_948 = 0;
    local_944 = 0xf000000;
    local_940 = 0x1000000;
    uVar23 = (**(code **)(lVar24 + 0xa8))(local_ad0._padding_,local_16c,&local_958);
    (**(code **)(lVar24 + 0xb0))(local_ad0._padding_,&u_3_1,uVar23);
    if (local_a88 != 1) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_6a0,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_6a0,0);
      if (local_6a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6a0.Data.AllocatorInstance.Data);
      }
    }
    pFVar22 = ::FString::FString(&local_368,L"3");
    puVar16 = (undefined8 *)
              (**(code **)(*(longlong *)local_a68.Data.AllocatorInstance.Data + 0xd8))
                        (local_a68.Data.AllocatorInstance.Data,local_378);
    iVar13 = *(int *)(puVar16 + 1);
    iVar1 = (pFVar22->Data).ArrayNum;
    if (iVar13 == iVar1) {
      if (iVar13 < 2) {
        local_ae0.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)
             ((ulonglong)local_ae0.Data.AllocatorInstance.Data._4_4_ << 0x20);
      }
      else {
        iVar13 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)*puVar16,(wchar_t *)(pFVar22->Data).AllocatorInstance.Data);
        local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar13 != 0);
      }
    }
    else {
      local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar1 + iVar13 != 1);
    }
    if (local_378[0] != (void *)0x0) {
      FMemory::Free(local_378[0]);
    }
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
    if ((char)local_ae0.Data.AllocatorInstance.Data != '\0') {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_690,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_690,0);
      if (local_690.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_690.Data.AllocatorInstance.Data);
      }
    }
    pFVar22 = ::FString::FString(&local_348,L"3.1");
    puVar16 = (undefined8 *)
              (**(code **)(*(longlong *)local_a78.Data.AllocatorInstance.Data + 0xd8))
                        (local_a78.Data.AllocatorInstance.Data,local_358);
    iVar13 = *(int *)(puVar16 + 1);
    iVar1 = (pFVar22->Data).ArrayNum;
    if (iVar13 == iVar1) {
      if (iVar13 < 2) {
        local_ae0.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)
             ((ulonglong)local_ae0.Data.AllocatorInstance.Data._4_4_ << 0x20);
      }
      else {
        iVar13 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)*puVar16,(wchar_t *)(pFVar22->Data).AllocatorInstance.Data);
        local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar13 != 0);
      }
    }
    else {
      local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar1 + iVar13 != 1);
    }
    if (local_358[0] != (void *)0x0) {
      FMemory::Free(local_358[0]);
    }
    if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.Data.AllocatorInstance.Data);
    }
    if ((char)local_ae0.Data.AllocatorInstance.Data != '\0') {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ae0.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_680,L"Condition failed");
      (*(code *)local_ae0.Data.AllocatorInstance.Data)(pFVar2,&local_680,0);
      if (local_680.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_680.Data.AllocatorInstance.Data);
      }
    }
    pFVar22 = ::FString::FString(&local_1f8,L"3");
    puVar16 = (undefined8 *)
              (**(code **)(*(longlong *)local_aa0._padding_ + 0xd8))(local_aa0._padding_,local_338);
    iVar13 = *(int *)(puVar16 + 1);
    iVar1 = (pFVar22->Data).ArrayNum;
    if (iVar13 == iVar1) {
      if (iVar13 < 2) {
        local_ae0.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)
             ((ulonglong)local_ae0.Data.AllocatorInstance.Data._4_4_ << 0x20);
      }
      else {
        iVar13 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)*puVar16,(wchar_t *)(pFVar22->Data).AllocatorInstance.Data);
        local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar13 != 0);
      }
    }
    else {
      local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar1 + iVar13 != 1);
    }
    if (local_338[0] != (void *)0x0) {
      FMemory::Free(local_338[0]);
    }
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    if ((char)local_ae0.Data.AllocatorInstance.Data != '\0') {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_aa0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_670,L"Condition failed");
      (*(code *)local_aa0._padding_)(pFVar2,&local_670,0);
      if (local_670.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_670.Data.AllocatorInstance.Data);
      }
    }
    pFVar22 = ::FString::FString(&local_318,L"3.1");
    puVar16 = (undefined8 *)
              (**(code **)(*(longlong *)local_ad0._padding_ + 0xd8))(local_ad0._padding_,local_328);
    iVar13 = *(int *)(puVar16 + 1);
    iVar1 = (pFVar22->Data).ArrayNum;
    if (iVar13 == iVar1) {
      if (iVar13 < 2) {
        local_ae0.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)
             ((ulonglong)local_ae0.Data.AllocatorInstance.Data._4_4_ << 0x20);
      }
      else {
        iVar13 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)*puVar16,(wchar_t *)(pFVar22->Data).AllocatorInstance.Data);
        local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar13 != 0);
      }
    }
    else {
      local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar1 + iVar13 != 1);
    }
    if (local_328[0] != (void *)0x0) {
      FMemory::Free(local_328[0]);
    }
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
    if ((char)local_ae0.Data.AllocatorInstance.Data != '\0') {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_660,L"Condition failed");
      (*(code *)local_ad0._padding_)(pFVar2,&local_660,0);
      if (local_660.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_660.Data.AllocatorInstance.Data);
      }
    }
    if (local_a80 != 3) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_650,L"Condition failed");
      (*(code *)local_ad0._padding_)(pFVar2,&local_650,0);
      if (local_650.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_650.Data.AllocatorInstance.Data);
      }
    }
    if (local_a90 != fVar10) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_640,L"Condition failed");
      (*(code *)local_ad0._padding_)(pFVar2,&local_640,0);
      if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_640.Data.AllocatorInstance.Data);
      }
    }
    local_8cc = 0xa000000;
    local_8c8 = 0;
    local_8c4 = 0;
    lVar24 = *(longlong *)local_a78.Data.AllocatorInstance.Data;
    local_8bc = 0;
    local_8b8 = 0xf000000;
    local_8b4 = 0x1000000;
    uVar23 = (**(code **)(lVar24 + 0xa8))
                       (local_a78.Data.AllocatorInstance.Data,local_178,&local_8cc);
    (**(code **)(lVar24 + 0xb0))(local_a78.Data.AllocatorInstance.Data,&u_3_1,uVar23);
    if (local_a88 != 2) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_630,L"Condition failed");
      (*(code *)local_ad0._padding_)(pFVar2,&local_630,0);
      if (local_630.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_630.Data.AllocatorInstance.Data);
      }
    }
    if ((local_aa8 & 0x20) == 0) {
      local_aa0._padding_ =
           (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 8))
                     (local_ab8.Data.AllocatorInstance.Data,L"TestNameC",L"1.23",L"TestHelpC");
      pcVar21 = (code *)(**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0xc0))
                                  (local_ab8.Data.AllocatorInstance.Data,L"TestNameC",1);
      if ((code *)local_aa0._padding_ != pcVar21) {
        pFVar15 = FAutomationTestFramework::Get();
        pFVar2 = pFVar15->CurrentTest;
        local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_620,L"Condition failed");
        (*(code *)local_ad0._padding_)(pFVar2,&local_620,0);
        if (local_620.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_620.Data.AllocatorInstance.Data);
        }
      }
      iVar13 = (**(code **)(*(longlong *)local_aa0._padding_ + 200))(local_aa0._padding_);
      if (iVar13 != 1) {
        pFVar15 = FAutomationTestFramework::Get();
        pFVar2 = pFVar15->CurrentTest;
        local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_610,L"Condition failed");
        (*(code *)local_ad0._padding_)(pFVar2,&local_610,0);
        if (local_610.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_610.Data.AllocatorInstance.Data);
        }
      }
      fVar27 = (float)(**(code **)(*(longlong *)local_aa0._padding_ + 0xd0))();
      if (fVar3 < (float)((uint)(fVar27 - fVar8) & uVar5)) {
        pFVar15 = FAutomationTestFramework::Get();
        pFVar2 = pFVar15->CurrentTest;
        local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_600,L"Condition failed");
        (*(code *)local_ad0._padding_)(pFVar2,&local_600,0);
        if (local_600.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_600.Data.AllocatorInstance.Data);
        }
      }
      pFVar22 = ::FString::FString(&local_2f8,L"1.23");
      puVar16 = (undefined8 *)
                (**(code **)(*(longlong *)local_aa0._padding_ + 0xd8))
                          (local_aa0._padding_,local_308);
      iVar13 = *(int *)(puVar16 + 1);
      iVar1 = (pFVar22->Data).ArrayNum;
      if (iVar13 == iVar1) {
        if (iVar13 < 2) {
          local_ae0.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)
               ((ulonglong)local_ae0.Data.AllocatorInstance.Data._4_4_ << 0x20);
        }
        else {
          iVar13 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)*puVar16,(wchar_t *)(pFVar22->Data).AllocatorInstance.Data)
          ;
          local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar13 != 0);
        }
      }
      else {
        local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar1 + iVar13 != 1);
      }
      if (local_308[0] != (void *)0x0) {
        FMemory::Free(local_308[0]);
      }
      if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
      }
      if ((char)local_ae0.Data.AllocatorInstance.Data != '\0') {
        pFVar15 = FAutomationTestFramework::Get();
        pFVar2 = pFVar15->CurrentTest;
        local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_5f0,L"Condition failed");
        (*(code *)local_ad0._padding_)(pFVar2,&local_5f0,0);
        if (local_5f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5f0.Data.AllocatorInstance.Data);
        }
      }
      local_97c = 0xf000000;
      local_9c8 = 0;
      local_978 = 0;
      local_974 = 0;
      local_96c = 0;
      lVar24 = *(longlong *)local_aa0._padding_;
      local_968 = 0xf000000;
      local_964 = 0x1000000;
      uVar23 = (**(code **)(lVar24 + 0xa8))(local_aa0._padding_,local_184,&local_97c);
      (**(code **)(lVar24 + 0xb0))(local_aa0._padding_,&u_3_1,uVar23);
      pFVar22 = ::FString::FString(&local_2d8,L"3.1");
      puVar16 = (undefined8 *)
                (**(code **)(*(longlong *)local_aa0._padding_ + 0xd8))
                          (local_aa0._padding_,local_2e8);
      iVar13 = *(int *)(puVar16 + 1);
      iVar1 = (pFVar22->Data).ArrayNum;
      if (iVar13 == iVar1) {
        if (iVar13 < 2) {
          local_ae0.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)
               ((ulonglong)local_ae0.Data.AllocatorInstance.Data._4_4_ << 0x20);
        }
        else {
          iVar13 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)*puVar16,(wchar_t *)(pFVar22->Data).AllocatorInstance.Data)
          ;
          local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar13 != 0);
        }
      }
      else {
        local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar1 + iVar13 != 1);
      }
      if (local_2e8[0] != (void *)0x0) {
        FMemory::Free(local_2e8[0]);
      }
      if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
      }
      if ((char)local_ae0.Data.AllocatorInstance.Data != '\0') {
        pFVar15 = FAutomationTestFramework::Get();
        pFVar2 = pFVar15->CurrentTest;
        local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_5e0,L"Condition failed");
        (*(code *)local_ad0._padding_)(pFVar2,&local_5e0,0);
        if (local_5e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5e0.Data.AllocatorInstance.Data);
        }
      }
      (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0xb0))
                (local_ab8.Data.AllocatorInstance.Data,L"TestNameC",0);
      lVar24 = (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0xc0))
                         (local_ab8.Data.AllocatorInstance.Data,L"TestNameC",1);
      if (lVar24 != 0) {
        pFVar15 = FAutomationTestFramework::Get();
        pFVar2 = pFVar15->CurrentTest;
        local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_5d0,L"Condition failed");
        (*(code *)local_ad0._padding_)(pFVar2,&local_5d0,0);
        if (local_5d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5d0.Data.AllocatorInstance.Data);
        }
      }
    }
    (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0xb8))
              (local_ab8.Data.AllocatorInstance.Data,local_a68.Data.AllocatorInstance.Data,1);
    (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0xb8))
              (local_ab8.Data.AllocatorInstance.Data,local_a78.Data.AllocatorInstance.Data,0);
    (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0xb0))
              (local_ab8.Data.AllocatorInstance.Data,L"TestNameD",0);
    (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0xb0))
              (local_ab8.Data.AllocatorInstance.Data,L"TestNameE",0);
    pFVar15 = FAutomationTestFramework::Get();
    pFVar2 = pFVar15->CurrentTest;
    local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x50);
    ::FString::FString(&local_5c0,L"Unregister variables");
    (*(code *)local_ad0._padding_)(pFVar2,&local_5c0,0,0);
    if (local_5c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c0.Data.AllocatorInstance.Data);
    }
    lVar24 = (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0xc0))
                       (local_ab8.Data.AllocatorInstance.Data,L"TestNameA",1);
    if (lVar24 != 0) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_5b0,L"Condition failed");
      (*(code *)local_ad0._padding_)(pFVar2,&local_5b0,0);
      if (local_5b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5b0.Data.AllocatorInstance.Data);
      }
    }
    lVar24 = (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0xc0))
                       (local_ab8.Data.AllocatorInstance.Data,L"TestNameB",1);
    if (lVar24 != 0) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_5a0,L"Condition failed");
      (*(code *)local_ad0._padding_)(pFVar2,&local_5a0,0);
      if (local_5a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5a0.Data.AllocatorInstance.Data);
      }
    }
    lVar24 = (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0xc0))
                       (local_ab8.Data.AllocatorInstance.Data,L"TestNameD",1);
    if (lVar24 != 0) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_590,L"Condition failed");
      (*(code *)local_ad0._padding_)(pFVar2,&local_590,0);
      if (local_590.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_590.Data.AllocatorInstance.Data);
      }
    }
    lVar24 = (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0xc0))
                       (local_ab8.Data.AllocatorInstance.Data,L"TestNameE",1);
    if (lVar24 != 0) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_580,L"Condition failed");
      (*(code *)local_ad0._padding_)(pFVar2,&local_580,0);
      if (local_580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_580.Data.AllocatorInstance.Data);
      }
    }
    pFVar15 = FAutomationTestFramework::Get();
    pFVar2 = pFVar15->CurrentTest;
    local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x50);
    ::FString::FString(&local_570,L"Re-register variables but maintain state");
    (*(code *)local_ad0._padding_)(pFVar2,&local_570,0,0);
    if (local_570.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_570.Data.AllocatorInstance.Data);
    }
    local_ad0._padding_ =
         (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0x18))
                   (local_ab8.Data.AllocatorInstance.Data,L"TestNameA",0x4d2,L"TestHelpSecondA");
    if ((FScriptContainerElement *)local_ad0._padding_ != local_a68.Data.AllocatorInstance.Data) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_aa0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_560,L"Condition failed");
      (*(code *)local_aa0._padding_)(pFVar2,&local_560,0);
      if (local_560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_560.Data.AllocatorInstance.Data);
      }
    }
    iVar13 = (**(code **)(*(longlong *)local_ad0._padding_ + 200))();
    if (iVar13 != 3) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_550,L"Condition failed");
      (*(code *)local_ad0._padding_)(pFVar2,&local_550,0);
      if (local_550.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_550.Data.AllocatorInstance.Data);
      }
    }
    lVar24 = (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0xc0))
                       (local_ab8.Data.AllocatorInstance.Data,L"TestNameA",1);
    if (lVar24 == 0) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_540,L"Condition failed");
      (*(code *)local_ad0._padding_)(pFVar2,&local_540,0);
      if (local_540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_540.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0xb0))
              (local_ab8.Data.AllocatorInstance.Data,L"TestNameA",0);
    lVar24 = (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0xc0))
                       (local_ab8.Data.AllocatorInstance.Data,L"TestNameA",1);
    if (lVar24 != 0) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_530,L"Condition failed");
      (*(code *)local_ad0._padding_)(pFVar2,&local_530,0);
      if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_530.Data.AllocatorInstance.Data);
      }
    }
    pFVar15 = FAutomationTestFramework::Get();
    pFVar2 = pFVar15->CurrentTest;
    local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x50);
    ::FString::FString(&local_520,L"Priority");
    (*(code *)local_ad0._padding_)(pFVar2,&local_520,0,0);
    if (local_520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_520.Data.AllocatorInstance.Data);
    }
    local_ac0 = (longlong *)
                (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0x18))
                          (local_ab8.Data.AllocatorInstance.Data,L"TestNameX",1,L"TestHelpX");
    uVar19 = (**(code **)(*local_ac0 + 0x18))(local_ac0);
    if ((uVar19 & 0xff000000) != 0) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_510,L"Condition failed");
      (*(code *)local_ad0._padding_)(pFVar2,&local_510,0);
      if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_510.Data.AllocatorInstance.Data);
      }
    }
    local_998 = 0xa000000;
    local_994 = 0;
    local_990 = 0;
    lVar24 = *local_ac0;
    local_988 = 0;
    local_984 = 0xf000000;
    local_980 = 0x1000000;
    uVar23 = (**(code **)(lVar24 + 0xa8))(local_ac0,local_148,&local_998);
    (**(code **)(lVar24 + 0xb0))(local_ac0,&u_3_1,uVar23);
    uVar14 = (**(code **)(*local_ac0 + 0x18))();
    if ((uVar14 & 0xff000000) != 0xa000000) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_500,L"Condition failed");
      (*(code *)local_ad0._padding_)(pFVar2,&local_500,0);
      if (local_500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_500.Data.AllocatorInstance.Data);
      }
    }
    local_8a8 = 0x2000000;
    local_8a4 = 0;
    local_8a0 = 0;
    lVar24 = *local_ac0;
    local_898 = 0;
    local_894 = 0xf000000;
    local_890 = 0x1000000;
    uVar23 = (**(code **)(lVar24 + 0xa8))(local_ac0,local_19c,&local_8a8);
    (**(code **)(lVar24 + 0xb0))(local_ac0,L"111",uVar23);
    pFVar22 = ::FString::FString(&local_2b8,L"3");
    puVar16 = (undefined8 *)(**(code **)(*local_ac0 + 0xd8))(local_ac0,local_2c8);
    iVar13 = *(int *)(puVar16 + 1);
    iVar1 = (pFVar22->Data).ArrayNum;
    if (iVar13 == iVar1) {
      if (iVar13 < 2) {
        local_ae0.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)
             ((ulonglong)local_ae0.Data.AllocatorInstance.Data._4_4_ << 0x20);
      }
      else {
        iVar13 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)*puVar16,(wchar_t *)(pFVar22->Data).AllocatorInstance.Data);
        local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar13 != 0);
      }
    }
    else {
      local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar1 + iVar13 != 1);
    }
    if (local_2c8[0] != (void *)0x0) {
      FMemory::Free(local_2c8[0]);
    }
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
    if ((char)local_ae0.Data.AllocatorInstance.Data != '\0') {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_4f0,L"Condition failed");
      (*(code *)local_ad0._padding_)(pFVar2,&local_4f0,0);
      if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
      }
    }
    uVar14 = (**(code **)(*local_ac0 + 0x18))();
    if ((uVar14 & 0xff000000) != 0xa000000) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_4e0,L"Condition failed");
      (*(code *)local_ad0._padding_)(pFVar2,&local_4e0,0);
      if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
      }
    }
    local_878 = 0xd000000;
    local_874 = 0;
    local_870 = 0;
    lVar24 = *local_ac0;
    local_868 = 0;
    local_864 = 0xf000000;
    local_860 = 0x1000000;
    uVar23 = (**(code **)(lVar24 + 0xa8))(local_ac0,local_1a8,&local_878);
    (**(code **)(lVar24 + 0xb0))(local_ac0,L"222",uVar23);
    pFVar22 = ::FString::FString(&local_298,L"222");
    puVar16 = (undefined8 *)(**(code **)(*local_ac0 + 0xd8))(local_ac0,local_2a8);
    iVar13 = *(int *)(puVar16 + 1);
    iVar1 = (pFVar22->Data).ArrayNum;
    if (iVar13 == iVar1) {
      if (iVar13 < 2) {
        local_ae0.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)
             ((ulonglong)local_ae0.Data.AllocatorInstance.Data._4_4_ << 0x20);
      }
      else {
        iVar13 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)*puVar16,(wchar_t *)(pFVar22->Data).AllocatorInstance.Data);
        local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar13 != 0);
      }
    }
    else {
      local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar1 + iVar13 != 1);
    }
    if (local_2a8[0] != (void *)0x0) {
      FMemory::Free(local_2a8[0]);
    }
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
    if ((char)local_ae0.Data.AllocatorInstance.Data != '\0') {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_4d0,L"Condition failed");
      (*(code *)local_ad0._padding_)(pFVar2,&local_4d0,0);
      if (local_4d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4d0.Data.AllocatorInstance.Data);
      }
    }
    uVar14 = (**(code **)(*local_ac0 + 0x18))();
    if ((uVar14 & 0xff000000) != 0xd000000) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_4c0,L"Condition failed");
      (*(code *)local_ad0._padding_)(pFVar2,&local_4c0,0);
      if (local_4c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
      }
    }
    local_85c = 0xa000000;
    local_858 = 0;
    local_854 = 0;
    lVar24 = *local_ac0;
    local_84c = 0;
    local_848 = 0xf000000;
    local_844 = 0x1000000;
    uVar23 = (**(code **)(lVar24 + 0xa8))(local_ac0,local_130,&local_85c);
    (**(code **)(lVar24 + 0xb0))(local_ac0,L"333",uVar23);
    pFVar22 = ::FString::FString(&local_278,L"222");
    puVar16 = (undefined8 *)(**(code **)(*local_ac0 + 0xd8))(local_ac0,local_288);
    iVar13 = *(int *)(puVar16 + 1);
    iVar1 = (pFVar22->Data).ArrayNum;
    if (iVar13 == iVar1) {
      if (iVar13 < 2) {
        local_ae0.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)
             ((ulonglong)local_ae0.Data.AllocatorInstance.Data._4_4_ << 0x20);
      }
      else {
        iVar13 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)*puVar16,(wchar_t *)(pFVar22->Data).AllocatorInstance.Data);
        local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar13 != 0);
      }
    }
    else {
      local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar1 + iVar13 != 1);
    }
    if (local_288[0] != (void *)0x0) {
      FMemory::Free(local_288[0]);
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    if ((char)local_ae0.Data.AllocatorInstance.Data != '\0') {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_4b0,L"Condition failed");
      (*(code *)local_ad0._padding_)(pFVar2,&local_4b0,0);
      if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
      }
    }
    uVar14 = (**(code **)(*local_ac0 + 0x18))();
    if ((uVar14 & 0xff000000) != 0xd000000) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_4a0,L"Condition failed");
      (*(code *)local_ad0._padding_)(pFVar2,&local_4a0,0);
      if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
      }
    }
    local_840 = 0xf000000;
    local_83c = 0;
    local_838 = 0;
    lVar24 = *local_ac0;
    local_830 = 0;
    local_82c = 0xf000000;
    local_828 = 0x1000000;
    uVar23 = (**(code **)(lVar24 + 0xa8))(local_ac0,local_190,&local_840);
    (**(code **)(lVar24 + 0xb0))(local_ac0,L"444",uVar23);
    pFVar22 = ::FString::FString(&local_258,L"444");
    puVar16 = (undefined8 *)(**(code **)(*local_ac0 + 0xd8))(local_ac0,local_268);
    iVar13 = *(int *)(puVar16 + 1);
    iVar1 = (pFVar22->Data).ArrayNum;
    if (iVar13 == iVar1) {
      if (iVar13 < 2) {
        local_ae0.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)
             ((ulonglong)local_ae0.Data.AllocatorInstance.Data._4_4_ << 0x20);
      }
      else {
        iVar13 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)*puVar16,(wchar_t *)(pFVar22->Data).AllocatorInstance.Data);
        local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar13 != 0);
      }
    }
    else {
      local_ae0.Data.AllocatorInstance.Data._0_4_ = (uint)(iVar1 + iVar13 != 1);
    }
    if (local_268[0] != (void *)0x0) {
      FMemory::Free(local_268[0]);
    }
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
    if ((char)local_ae0.Data.AllocatorInstance.Data != '\0') {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_490,L"Condition failed");
      (*(code *)local_ad0._padding_)(pFVar2,&local_490);
      if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_490.Data.AllocatorInstance.Data);
      }
    }
    uVar14 = (**(code **)(*local_ac0 + 0x18))();
    if ((uVar14 & 0xff000000) != 0xf000000) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar2 = pFVar15->CurrentTest;
      local_ad0._padding_ = *(undefined8 *)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_480,L"Condition failed");
      (*(code *)local_ad0._padding_)(pFVar2,&local_480);
      if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_480.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0xb8))
              (local_ab8.Data.AllocatorInstance.Data,local_ac0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_a58,(FWriteAccessScope *)&local_3f8);
    if ((local_a50.DelegateSize != 0) &&
       (local_a50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a50,0,0,0x10);
      local_a50.DelegateSize = 0;
    }
    if (local_3f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3f8.Accessor,&local_3f8);
    }
    if (local_a50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a58.AccessDetector);
    local_a00 = (uint ****)((longlong)local_a00 + 4);
  } while ((uint *****)local_a00 != &local_a00);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar2 = pFVar15->CurrentTest;
  pcVar21 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_a68,L"ECVF_Cheat");
  (*pcVar21)(pFVar2,&local_a68,0,0);
  if (local_a68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a68.Data.AllocatorInstance.Data);
  }
  FVar18.Data = local_ab8.Data.AllocatorInstance.Data;
  plVar25 = (longlong *)
            (**(code **)(*(longlong *)local_ab8.Data.AllocatorInstance.Data + 0x18))
                      (local_ab8.Data.AllocatorInstance.Data,L"con.DebugLateDefault",0x17,L"");
  plVar26 = (longlong *)
            (**(code **)(*(longlong *)FVar18.Data + 0x18))
                      (FVar18.Data,L"con.DebugLateCheat",0x18,L"");
  pTVar11 = CVarDebugEarlyDefault.Ref;
  bVar12 = IsInParallelGameThread();
  if (((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar12)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  if (pTVar11->ShadowedValue[0] != 1) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar2 = pFVar15->CurrentTest;
    pcVar21 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_a78,L"Condition failed");
    (*pcVar21)(pFVar2,&local_a78,0);
    if (local_a78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a78.Data.AllocatorInstance.Data);
    }
  }
  pTVar11 = CVarDebugEarlyCheat.Ref;
  bVar12 = IsInParallelGameThread();
  if (((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar12)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  if (pTVar11->ShadowedValue[0] != 0x16) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar2 = pFVar15->CurrentTest;
    pcVar21 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_ab8,L"Condition failed");
    (*pcVar21)(pFVar2,&local_ab8,0);
    if ((FConsoleManager *)local_ab8.Data.AllocatorInstance.Data != (FConsoleManager *)0x0) {
      FMemory::Free(local_ab8.Data.AllocatorInstance.Data);
    }
  }
  iVar13 = (**(code **)(*plVar25 + 200))(plVar25);
  if (iVar13 != 1) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar2 = pFVar15->CurrentTest;
    pcVar21 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_ae0,L"Condition failed");
    (*pcVar21)(pFVar2,&local_ae0,0);
    if (local_ae0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ae0.Data.AllocatorInstance.Data);
    }
  }
  iVar13 = (**(code **)(*plVar26 + 200))(plVar26);
  if (iVar13 != 0x18) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar2 = pFVar15->CurrentTest;
    pcVar21 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_470,L"Condition failed");
    (*pcVar21)(pFVar2,&local_470,0);
    if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_470.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(*(longlong *)FVar18.Data + 0xb8))(FVar18.Data,plVar26,1);
  (**(code **)(*(longlong *)FVar18.Data + 0xb8))(FVar18.Data,plVar25);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar2 = pFVar15->CurrentTest;
  pcVar21 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_460,L"Deprecated console variables should not assert in dump commands");
  (*pcVar21)(pFVar2,&local_460,0,0);
  if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_460.Data.AllocatorInstance.Data);
  }
  builtin_wcsncpy(local_118 + 0x18,L"TestVar.Old",0xc);
  builtin_wcsncpy(local_118,L"TestVar.New",0xc);
  FAutoConsoleVariable::FAutoConsoleVariable
            ((FAutoConsoleVariable *)&local_248,local_118,false,L"",0);
  FAutoConsoleVariableDeprecated::FAutoConsoleVariableDeprecated
            (local_a7c,local_118 + 0x18,local_118,L"0.0",Ensure,Ensure,L"");
  FOutputDevice::FOutputDevice(&local_ad0);
  local_ad0._padding_ = (longlong)&___7FOutputDeviceNull__6B_;
  FConsoleManager::DumpObjects((FConsoleManager *)FVar18.Data,L"-ShowHelp",&local_ad0,false);
  FConsoleManager::DumpObjects
            ((FConsoleManager *)FVar18.Data,L"-ShowHelp -Deprecated",&local_ad0,false);
  FOutputDevice::~FOutputDevice(&local_ad0);
  (**(code **)(*(longlong *)FVar18.Data + 0xb0))(FVar18.Data,L"TestVar.Old",0);
  FAutoConsoleObject::~FAutoConsoleObject(&local_248);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar2 = pFVar15->CurrentTest;
  pcVar21 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_450,L"Deprecated console commands should not assert in dump commands");
  (*pcVar21)(pFVar2,&local_450,0,0);
  if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_450.Data.AllocatorInstance.Data);
  }
  builtin_wcsncpy(local_118 + 0x24,L"TestCmd.Old",0xc);
  builtin_wcsncpy(local_118 + 0xc,L"TestCmd.New",0xc);
  local_a18 = 0;
  local_a28 = (undefined1  [8])0x0;
  local_a20.Data = (FScriptContainerElement *)0x0;
  FAutoConsoleCommand::FAutoConsoleCommand
            ((FAutoConsoleCommand *)&local_238,local_118 + 0xc,L"",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_a28,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a28,
             (FWriteAccessScope *)&local_3e0);
  if (((int)local_a18 != 0) && (local_a20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_a20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a20,0,0,0x10);
    local_a18 = local_a18 & 0xffffffff00000000;
  }
  if (local_3e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e0.Accessor,&local_3e0);
  }
  if (local_a20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a28);
  FAutoConsoleCommandDeprecated::FAutoConsoleCommandDeprecated
            (local_a84,local_118 + 0x24,local_118 + 0xc,L"0.0",Ensure,Ensure,L"");
  FOutputDevice::FOutputDevice(&local_aa0);
  local_aa0._padding_ = (longlong)&___7FOutputDeviceNull__6B_;
  FConsoleManager::DumpObjects((FConsoleManager *)FVar18.Data,L"-ShowHelp",&local_aa0,true);
  FConsoleManager::DumpObjects
            ((FConsoleManager *)FVar18.Data,L"-ShowHelp -Deprecated",&local_aa0,true);
  FOutputDevice::~FOutputDevice(&local_aa0);
  (**(code **)(*(longlong *)FVar18.Data + 0xb0))(FVar18.Data,L"TestCmd.Old",0);
  FAutoConsoleObject::~FAutoConsoleObject(&local_238);
  (**(code **)(*(longlong *)FVar18.Data + 0x108))(FVar18.Data,0,local_8b0);
  return;
}

