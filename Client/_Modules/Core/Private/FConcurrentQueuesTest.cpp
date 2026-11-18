// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ada6d0

EAutomationTestFlags __thiscall
UE::ConcurrentQueuesTests::FConcurrentQueuesTest::GetTestFlags(FConcurrentQueuesTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ada6e0

bool __thiscall
UE::ConcurrentQueuesTests::FConcurrentQueuesTest::IsStressTest(FConcurrentQueuesTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ada6f0

uint __thiscall
UE::ConcurrentQueuesTests::FConcurrentQueuesTest::GetRequiredDeviceNum(FConcurrentQueuesTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ada700

FString * __thiscall
UE::ConcurrentQueuesTests::FConcurrentQueuesTest::GetTestSourceFileName
          (FConcurrentQueuesTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ada730

int __thiscall
UE::ConcurrentQueuesTests::FConcurrentQueuesTest::GetTestSourceFileLine(FConcurrentQueuesTest *this)

{
  return 0xfa;
}

// GetTests @ 141ada740

/* WARNING: Removing unreachable block (ram,0x000141ada8be) */

void __thiscall
UE::ConcurrentQueuesTests::FConcurrentQueuesTest::GetTests
          (FConcurrentQueuesTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = Core::Private::
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
    iVar4 = Core::Private::
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

// RunTest @ 141ada8e0

bool __thiscall
UE::ConcurrentQueuesTests::FConcurrentQueuesTest::RunTest
          (FConcurrentQueuesTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ada910

FString * __thiscall
UE::ConcurrentQueuesTests::FConcurrentQueuesTest::GetBeautifiedTestName
          (FConcurrentQueuesTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FConcurrentQueuesTest @ 141b1bc90

FConcurrentQueuesTest * __thiscall
UE::ConcurrentQueuesTests::FConcurrentQueuesTest::FConcurrentQueuesTest
          (FConcurrentQueuesTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FConcurrentQueuesTest_ConcurrentQueuesTests_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter][Perf]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Async::ConcurrentQueuesTest");
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
  ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter][Perf]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// TestBody @ 141b68330

/* WARNING: Removing unreachable block (ram,0x000141b695b0) */
/* WARNING: Removing unreachable block (ram,0x000141b6839a) */
/* WARNING: Removing unreachable block (ram,0x000141b683b9) */
/* WARNING: Removing unreachable block (ram,0x000141b692ec) */
/* WARNING: Removing unreachable block (ram,0x000141b69311) */
/* WARNING: Removing unreachable block (ram,0x000141b69591) */
/* WARNING: Removing unreachable block (ram,0x000141b6933c) */
/* WARNING: Removing unreachable block (ram,0x000141b6931c) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody
          (FConcurrentQueuesTest *this,FString *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  int *piVar9;
  TOptional<_protected:_void___cdecl_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody(FString_const_&)_::_20_::FNonTrivial>
  *pTVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int *piVar14;
  uint uVar15;
  int *piVar16;
  bool bVar17;
  int local_res18;
  undefined4 uStackX_1c;
  LARGE_INTEGER local_res20;
  undefined8 *local_258;
  undefined8 *local_250;
  undefined8 *local_248;
  undefined8 *local_240;
  int local_238;
  longlong *local_230;
  longlong *local_228;
  undefined8 *local_220;
  undefined8 *local_218;
  undefined8 *local_210;
  undefined8 *local_208;
  undefined8 *local_200;
  undefined8 *local_1f8;
  int local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  int local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  int local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  int local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  TOptional<_protected:_void___cdecl_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody(FString_const_&)_::_20_::FNonTrivial>
  local_120;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  int local_f0;
  TOptional<_protected:_void___cdecl_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody(FString_const_&)_::_20_::FNonTrivial>
  local_e8;
  undefined8 *local_d8;
  undefined8 *local_d0;
  int *local_c8;
  undefined1 local_c0;
  TOptional<_protected:_void___cdecl_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody(FString_const_&)_::_20_::FNonTrivial>
  local_b8;
  LARGE_INTEGER local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  TOptional<_protected:_void___cdecl_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody(FString_const_&)_::_20_::FNonTrivial>
  local_90;
  TOptional<_protected:_void___cdecl_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody(FString_const_&)_::_20_::FNonTrivial>
  local_80 [5];
  
  local_1a0 = (undefined8 *)0x0;
  local_180 = 0;
  local_1a0 = FMemory::Malloc(0x10,8);
  piVar16 = (int *)0x0;
  *local_1a0 = 0;
  LOCK();
  local_180 = 0;
  UNLOCK();
  local_198 = local_1a0;
  local_190 = local_1a0;
  local_188 = local_1a0;
  puVar8 = FMemory::Malloc(0x10,8);
  *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
  *puVar8 = 0;
  *(undefined4 *)(puVar8 + 1) = 1;
  if (3 < (byte)LogTemp._0_1_) {
    Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)&PTR_u_ctor_15070f018,(FLogCategoryBase *)&LogTemp);
  }
  *local_198 = puVar8;
  LOCK();
  local_180 = local_180 + 1;
  UNLOCK();
  puVar12 = (undefined8 *)*local_1a0;
  bVar17 = false;
  local_198 = puVar8;
  if (puVar12 == (undefined8 *)0x0) {
LAB_141b684a9:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Res.IsSet() && Res.GetValue().Value == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                       ,0x121,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar12 = local_190;
    puVar8 = local_1a0;
    if (bVar17) goto LAB_141b684d3;
  }
  else {
    iVar7 = *(int *)(puVar12 + 1);
    if ((3 < (byte)LogTemp._0_1_) &&
       (Logging::Private::BasicLog<4>
                  ((FStaticBasicLogRecord *)&PTR_u_move_ctor_15070f078,(FLogCategoryBase *)&LogTemp)
       , 3 < (byte)LogTemp._0_1_)) {
      Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)&PTR_u_dctor_15070f048,(FLogCategoryBase *)&LogTemp);
    }
    LOCK();
    local_180 = local_180 + -1;
    UNLOCK();
    bVar17 = true;
    local_1a0 = puVar12;
    if ((3 < (byte)LogTemp._0_1_) &&
       (Logging::Private::BasicLog<4>
                  ((FStaticBasicLogRecord *)&PTR_u_move_ctor_15070f078,(FLogCategoryBase *)&LogTemp)
       , 3 < (byte)LogTemp._0_1_)) {
      Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)&PTR_u_dctor_15070f048,(FLogCategoryBase *)&LogTemp);
    }
    if (iVar7 != 1) goto LAB_141b684a9;
LAB_141b684d3:
    puVar12 = local_190;
    puVar8 = local_1a0;
    if (3 < (byte)LogTemp._0_1_) {
      Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)&PTR_u_dctor_15070f048,(FLogCategoryBase *)&LogTemp);
      puVar12 = local_190;
      puVar8 = local_1a0;
    }
  }
  do {
    puVar1 = (undefined8 *)*puVar12;
    FMemory::Free(puVar12);
    bVar17 = puVar12 != puVar8;
    puVar12 = puVar1;
  } while (bVar17);
  while (puVar1 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)*puVar1;
    if (3 < (byte)LogTemp._0_1_) {
      Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)&PTR_u_dctor_15070f048,(FLogCategoryBase *)&LogTemp);
    }
    FMemory::Free(puVar1);
    puVar1 = puVar8;
  }
  local_220 = (undefined8 *)0x0;
  local_220 = FMemory::Malloc(0x10,8);
  *local_220 = 0;
  local_218 = local_220;
  puVar8 = FMemory::Malloc(0x10,8);
  *puVar8 = 0;
  *(undefined4 *)(puVar8 + 1) = 1;
  if (3 < (byte)LogTemp._0_1_) {
    Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)&PTR_u_ctor_15070f018,(FLogCategoryBase *)&LogTemp);
  }
  LOCK();
  UNLOCK();
  *local_220 = puVar8;
  puVar12 = (undefined8 *)*local_218;
  bVar17 = false;
  local_220 = puVar8;
  if (puVar12 == (undefined8 *)0x0) {
LAB_141b68655:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Res.IsSet() && Res.GetValue().Value == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                       ,0x128,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (bVar17) goto LAB_141b6867f;
  }
  else {
    iVar7 = *(int *)(puVar12 + 1);
    if ((3 < (byte)LogTemp._0_1_) &&
       (Logging::Private::BasicLog<4>
                  ((FStaticBasicLogRecord *)&PTR_u_move_ctor_15070f078,(FLogCategoryBase *)&LogTemp)
       , 3 < (byte)LogTemp._0_1_)) {
      Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)&PTR_u_dctor_15070f048,(FLogCategoryBase *)&LogTemp);
    }
    FMemory::Free(local_218);
    bVar17 = true;
    local_218 = puVar12;
    if ((3 < (byte)LogTemp._0_1_) &&
       (Logging::Private::BasicLog<4>
                  ((FStaticBasicLogRecord *)&PTR_u_move_ctor_15070f078,(FLogCategoryBase *)&LogTemp)
       , 3 < (byte)LogTemp._0_1_)) {
      Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)&PTR_u_dctor_15070f048,(FLogCategoryBase *)&LogTemp);
    }
    if (iVar7 != 1) goto LAB_141b68655;
LAB_141b6867f:
    if (3 < (byte)LogTemp._0_1_) {
      Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)&PTR_u_dctor_15070f048,(FLogCategoryBase *)&LogTemp);
    }
  }
  puVar8 = (undefined8 *)*local_218;
  FMemory::Free(local_218);
  puVar12 = local_218;
  while (local_218 = puVar8, local_218 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)*local_218;
    if (3 < (byte)LogTemp._0_1_) {
      Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)&PTR_u_dctor_15070f048,(FLogCategoryBase *)&LogTemp);
    }
    FMemory::Free(local_218);
    puVar12 = local_218;
  }
  local_110 = (undefined8 *)0x0;
  local_f0 = 0;
  local_218 = puVar12;
  local_110 = FMemory::Malloc(0x10,8);
  *local_110 = 0;
  LOCK();
  local_f0 = 0;
  UNLOCK();
  local_108 = local_110;
  local_100 = local_110;
  local_f8 = local_110;
  piVar9 = ::operator_new(4);
  piVar14 = piVar16;
  if (piVar9 != (int *)0x0) {
    *piVar9 = 1;
    piVar14 = piVar9;
  }
  puVar8 = local_100;
  if (local_100 == local_f8) {
    local_f8 = local_110;
    if (local_100 == local_110) {
      puVar8 = FMemory::Malloc(0x10,8);
      *puVar8 = 0;
    }
    else {
      puVar12 = (undefined8 *)*local_100;
      *local_100 = 0;
      local_100 = puVar12;
    }
  }
  else {
    puVar12 = (undefined8 *)*local_100;
    *local_100 = 0;
    local_100 = puVar12;
  }
  puVar8[1] = piVar14;
  ::operator_delete((void *)0x0,4);
  *local_108 = puVar8;
  LOCK();
  local_f0 = local_f0 + 1;
  UNLOCK();
  local_108 = puVar8;
  ::operator_delete((void *)0x0,4);
  TSpscQueue<`UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial,FMemory>
  ::
  ~TSpscQueue<_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody_::__l20::FNonTrivial,FMemory>
            (&local_110);
  local_178 = (undefined8 *)0x0;
  local_158 = 0;
  local_178 = FMemory::Malloc(0x10,8);
  *local_178 = 0;
  LOCK();
  local_158 = 0;
  UNLOCK();
  local_170 = local_178;
  local_168 = local_178;
  local_160 = local_178;
  piVar9 = ::operator_new(4);
  piVar14 = piVar16;
  if (piVar9 != (int *)0x0) {
    *piVar9 = 1;
    piVar14 = piVar9;
  }
  puVar8 = local_168;
  if (local_168 == local_160) {
    local_160 = local_178;
    if (local_168 == local_178) {
      puVar8 = FMemory::Malloc(0x10,8);
      *puVar8 = 0;
    }
    else {
      puVar12 = (undefined8 *)*local_168;
      *local_168 = 0;
      local_168 = puVar12;
    }
  }
  else {
    puVar12 = (undefined8 *)*local_168;
    *local_168 = 0;
    local_168 = puVar12;
  }
  puVar8[1] = piVar14;
  ::operator_delete((void *)0x0,4);
  *local_170 = puVar8;
  LOCK();
  local_158 = local_158 + 1;
  UNLOCK();
  local_170 = puVar8;
  ::operator_delete((void *)0x0,4);
  puVar8 = (undefined8 *)*local_178;
  if (puVar8 == (undefined8 *)0x0) {
    piVar14 = (int *)CONCAT44(uStackX_1c,local_res18);
    bVar17 = false;
LAB_141b68902:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Res.IsSet() && *Res.GetValue().Value == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                       ,0x158,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (bVar17) goto LAB_141b6892c;
  }
  else {
    piVar14 = (int *)puVar8[1];
    puVar8[1] = 0;
    ::operator_delete((void *)0x0,4);
    puVar8[1] = 0xcdcdcdcdcdcdcdcd;
    bVar17 = true;
    LOCK();
    local_158 = local_158 + -1;
    UNLOCK();
    local_178 = puVar8;
    ::operator_delete((void *)0x0,4);
    if (*piVar14 != 1) goto LAB_141b68902;
LAB_141b6892c:
    if ((piVar14 == (int *)0xcdcdcdcdcdcdcdcd) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Value != (int*)0xcdcdcdcdcdcdcdcd",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                            ,0x138,L""), bVar17)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ::operator_delete(piVar14,4);
  }
  TSpscQueue<`UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial,FMemory>
  ::
  ~TSpscQueue<_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody_::__l20::FNonTrivial,FMemory>
            (&local_178);
  local_258 = (undefined8 *)0x0;
  local_238 = 0;
  local_258 = FMemory::Malloc(0x10,8);
  *local_258 = 0;
  LOCK();
  local_238 = 0;
  UNLOCK();
  local_250 = local_258;
  local_248 = local_258;
  local_240 = local_258;
  piVar9 = ::operator_new(4);
  piVar14 = piVar16;
  if (piVar9 != (int *)0x0) {
    *piVar9 = 1;
    piVar14 = piVar9;
  }
  puVar8 = local_248;
  if (local_248 == local_240) {
    local_240 = local_258;
    if (local_248 == local_258) {
      puVar8 = FMemory::Malloc(0x10,8);
      *puVar8 = 0;
    }
    else {
      puVar12 = (undefined8 *)*local_248;
      *local_248 = 0;
      local_248 = puVar12;
    }
  }
  else {
    puVar12 = (undefined8 *)*local_248;
    *local_248 = 0;
    local_248 = puVar12;
  }
  puVar8[1] = piVar14;
  ::operator_delete((void *)0x0,4);
  *local_250 = puVar8;
  LOCK();
  local_238 = local_238 + 1;
  UNLOCK();
  local_250 = puVar8;
  ::operator_delete((void *)0x0,4);
  piVar9 = ::operator_new(4);
  piVar14 = piVar16;
  if (piVar9 != (int *)0x0) {
    *piVar9 = 2;
    piVar14 = piVar9;
  }
  puVar8 = local_248;
  if (local_248 == local_240) {
    local_240 = local_258;
    if (local_248 == local_258) {
      puVar8 = FMemory::Malloc(0x10,8);
      *puVar8 = 0;
    }
    else {
      puVar12 = (undefined8 *)*local_248;
      *local_248 = 0;
      local_248 = puVar12;
    }
  }
  else {
    puVar12 = (undefined8 *)*local_248;
    *local_248 = 0;
    local_248 = puVar12;
  }
  puVar8[1] = piVar14;
  ::operator_delete((void *)0x0,4);
  *local_250 = puVar8;
  LOCK();
  local_238 = local_238 + 1;
  UNLOCK();
  local_250 = puVar8;
  ::operator_delete((void *)0x0,4);
  puVar8 = (undefined8 *)*local_258;
  if (puVar8 == (undefined8 *)0x0) {
    piVar14 = (int *)CONCAT44(uStackX_1c,local_res18);
    bVar17 = false;
LAB_141b68b2d:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Res.IsSet() && *Res.GetValue().Value == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                       ,0x160,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (bVar17) goto LAB_141b68b57;
  }
  else {
    piVar14 = (int *)puVar8[1];
    puVar8[1] = 0;
    ::operator_delete((void *)0x0,4);
    puVar8[1] = 0xcdcdcdcdcdcdcdcd;
    bVar17 = true;
    LOCK();
    local_238 = local_238 + -1;
    UNLOCK();
    local_258 = puVar8;
    ::operator_delete((void *)0x0,4);
    if (*piVar14 != 1) goto LAB_141b68b2d;
LAB_141b68b57:
    if ((piVar14 == (int *)0xcdcdcdcdcdcdcdcd) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Value != (int*)0xcdcdcdcdcdcdcdcd",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                            ,0x138,L""), bVar17)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ::operator_delete(piVar14,4);
  }
  TSpscQueue<`UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial,FMemory>
  ::
  ~TSpscQueue<_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody_::__l20::FNonTrivial,FMemory>
            (&local_258);
  local_a0 = FMemory::Malloc(0x10,8);
  *local_a0 = 0;
  local_98 = local_a0;
  TMpscQueue<`UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial,FMemory>
  ::
  ~TMpscQueue<_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody_::__l20::FNonTrivial,FMemory>
            (&local_a0);
  local_d8 = (undefined8 *)0x0;
  local_d8 = FMemory::Malloc(0x10,8);
  *local_d8 = 0;
  local_d0 = local_d8;
  piVar9 = ::operator_new(4);
  piVar14 = piVar16;
  if (piVar9 != (int *)0x0) {
    *piVar9 = 1;
    piVar14 = piVar9;
  }
  puVar8 = FMemory::Malloc(0x10,8);
  *puVar8 = 0;
  puVar8[1] = piVar14;
  ::operator_delete((void *)0x0,4);
  LOCK();
  UNLOCK();
  *local_d8 = puVar8;
  local_d8 = puVar8;
  ::operator_delete((void *)0x0,4);
  TMpscQueue<`UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial,FMemory>
  ::
  ~TMpscQueue<_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody_::__l20::FNonTrivial,FMemory>
            (&local_d8);
  local_150 = (undefined8 *)0x0;
  local_150 = FMemory::Malloc(0x10,8);
  *local_150 = 0;
  local_148 = local_150;
  piVar9 = ::operator_new(4);
  piVar14 = piVar16;
  if (piVar9 != (int *)0x0) {
    *piVar9 = 1;
    piVar14 = piVar9;
  }
  puVar8 = FMemory::Malloc(0x10,8);
  *puVar8 = 0;
  puVar8[1] = piVar14;
  ::operator_delete((void *)0x0,4);
  LOCK();
  UNLOCK();
  *local_150 = puVar8;
  local_150 = puVar8;
  ::operator_delete((void *)0x0,4);
  puVar8 = (undefined8 *)*local_148;
  if (puVar8 == (undefined8 *)0x0) {
    local_c0 = 0;
    bVar17 = false;
LAB_141b68d2c:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Res.IsSet() && *Res.GetValue().Value == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                       ,0x171,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (!bVar17) goto LAB_141b68d6a;
  }
  else {
    piVar14 = (int *)puVar8[1];
    puVar8[1] = 0;
    ::operator_delete((void *)0x0,4);
    puVar8[1] = 0xcdcdcdcdcdcdcdcd;
    FMemory::Free(local_148);
    bVar17 = true;
    local_c0 = 1;
    local_148 = puVar8;
    local_c8 = piVar14;
    ::operator_delete((void *)0x0,4);
    if (*piVar14 != 1) goto LAB_141b68d2c;
  }
  `UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial::~FNonTrivial
            (&local_c8);
LAB_141b68d6a:
  TMpscQueue<`UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial,FMemory>
  ::
  ~TMpscQueue<_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody_::__l20::FNonTrivial,FMemory>
            (&local_150);
  local_140 = (undefined8 *)0x0;
  local_140 = FMemory::Malloc(0x10,8);
  *local_140 = 0;
  local_138 = local_140;
  piVar9 = ::operator_new(4);
  piVar14 = piVar16;
  if (piVar9 != (int *)0x0) {
    *piVar9 = 1;
    piVar14 = piVar9;
  }
  puVar8 = FMemory::Malloc(0x10,8);
  *puVar8 = 0;
  puVar8[1] = piVar14;
  ::operator_delete((void *)0x0,4);
  LOCK();
  UNLOCK();
  *local_140 = puVar8;
  local_140 = puVar8;
  ::operator_delete((void *)0x0,4);
  piVar9 = ::operator_new(4);
  piVar14 = piVar16;
  if (piVar9 != (int *)0x0) {
    *piVar9 = 2;
    piVar14 = piVar9;
  }
  puVar8 = FMemory::Malloc(0x10,8);
  *puVar8 = 0;
  puVar8[1] = piVar14;
  ::operator_delete((void *)0x0,4);
  LOCK();
  UNLOCK();
  *local_140 = puVar8;
  local_140 = puVar8;
  ::operator_delete((void *)0x0,4);
  TMpscQueue<`UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial,FMemory>
  ::Dequeue(&local_140,&local_b8);
  if (((local_b8.bIsSet == false) || (*local_b8.TypedValue.Value != 1)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Res.IsSet() && *Res.GetValue().Value == 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                          ,0x179,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_b8.bIsSet != false) {
    `UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial::~FNonTrivial
              (&local_b8);
  }
  TMpscQueue<`UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial,FMemory>
  ::
  ~TMpscQueue<_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody_::__l20::FNonTrivial,FMemory>
            (&local_140);
  local_130 = (undefined8 *)0x0;
  local_130 = FMemory::Malloc(0x10,8);
  *local_130 = 0;
  local_128 = local_130;
  piVar9 = ::operator_new(4);
  piVar14 = piVar16;
  if (piVar9 != (int *)0x0) {
    *piVar9 = 1;
    piVar14 = piVar9;
  }
  puVar8 = FMemory::Malloc(0x10,8);
  *puVar8 = 0;
  puVar8[1] = piVar14;
  ::operator_delete((void *)0x0,4);
  LOCK();
  UNLOCK();
  *local_130 = puVar8;
  local_130 = puVar8;
  ::operator_delete((void *)0x0,4);
  piVar9 = ::operator_new(4);
  piVar14 = piVar16;
  if (piVar9 != (int *)0x0) {
    *piVar9 = 2;
    piVar14 = piVar9;
  }
  puVar8 = FMemory::Malloc(0x10,8);
  *puVar8 = 0;
  puVar8[1] = piVar14;
  ::operator_delete((void *)0x0,4);
  LOCK();
  UNLOCK();
  *local_130 = puVar8;
  local_130 = puVar8;
  ::operator_delete((void *)0x0,4);
  TMpscQueue<`UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial,FMemory>
  ::
  ~TMpscQueue<_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody_::__l20::FNonTrivial,FMemory>
            (&local_130);
  local_1c0 = (undefined8 *)0x0;
  local_1c0 = FMemory::Malloc(0x10,8);
  *local_1c0 = 0;
  local_1b8 = local_1c0;
  piVar9 = ::operator_new(4);
  piVar14 = piVar16;
  if (piVar9 != (int *)0x0) {
    *piVar9 = 1;
    piVar14 = piVar9;
  }
  puVar8 = FMemory::Malloc(0x10,8);
  *puVar8 = 0;
  puVar8[1] = piVar14;
  ::operator_delete((void *)0x0,4);
  LOCK();
  UNLOCK();
  *local_1c0 = puVar8;
  local_1c0 = puVar8;
  ::operator_delete((void *)0x0,4);
  piVar9 = ::operator_new(4);
  piVar14 = piVar16;
  if (piVar9 != (int *)0x0) {
    *piVar9 = 2;
    piVar14 = piVar9;
  }
  puVar8 = FMemory::Malloc(0x10,8);
  *puVar8 = 0;
  puVar8[1] = piVar14;
  ::operator_delete((void *)0x0,4);
  LOCK();
  UNLOCK();
  *local_1c0 = puVar8;
  local_1c0 = puVar8;
  ::operator_delete((void *)0x0,4);
  TMpscQueue<`UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial,FMemory>
  ::Dequeue(&local_1c0,&local_e8);
  if (((local_e8.bIsSet == false) || (*local_e8.TypedValue.Value != 1)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Res.IsSet() && *Res.GetValue().Value == 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                          ,0x187,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar10 = TMpscQueue<`UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial,FMemory>
            ::Dequeue(&local_1c0,&local_90);
  TOptional<`UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial>::
  operator=(&local_e8,pTVar10);
  TOptional<`UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial>::
  ~TOptional<_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody_::__l20::FNonTrivial>
            (&local_90);
  if (((local_e8.bIsSet == false) || (*local_e8.TypedValue.Value != 2)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Res.IsSet() && *Res.GetValue().Value == 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                          ,0x189,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TOptional<`UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial>::
  ~TOptional<_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody_::__l20::FNonTrivial>
            (&local_e8);
  TMpscQueue<`UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial,FMemory>
  ::
  ~TMpscQueue<_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody_::__l20::FNonTrivial,FMemory>
            (&local_1c0);
  local_1b0 = (undefined8 *)0x0;
  local_1b0 = FMemory::Malloc(0x10,8);
  *local_1b0 = 0;
  local_1a8 = local_1b0;
  piVar9 = ::operator_new(4);
  piVar14 = piVar16;
  if (piVar9 != (int *)0x0) {
    *piVar9 = 1;
    piVar14 = piVar9;
  }
  puVar8 = FMemory::Malloc(0x10,8);
  *puVar8 = 0;
  puVar8[1] = piVar14;
  ::operator_delete((void *)0x0,4);
  LOCK();
  UNLOCK();
  *local_1b0 = puVar8;
  local_1b0 = puVar8;
  ::operator_delete((void *)0x0,4);
  TMpscQueue<`UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial,FMemory>
  ::Dequeue(&local_1b0,&local_120);
  if (((local_120.bIsSet == false) || (*local_120.TypedValue.Value != 1)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Res.IsSet() && *Res.GetValue().Value == 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                          ,400,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  piVar9 = ::operator_new(4);
  piVar14 = piVar16;
  if (piVar9 != (int *)0x0) {
    *piVar9 = 2;
    piVar14 = piVar9;
  }
  puVar8 = FMemory::Malloc(0x10,8);
  *puVar8 = 0;
  puVar8[1] = piVar14;
  ::operator_delete((void *)0x0,4);
  LOCK();
  UNLOCK();
  *local_1b0 = puVar8;
  local_1b0 = puVar8;
  ::operator_delete((void *)0x0,4);
  pTVar10 = TMpscQueue<`UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial,FMemory>
            ::Dequeue(&local_1b0,local_80);
  TOptional<`UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial>::
  operator=(&local_120,pTVar10);
  TOptional<`UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial>::
  ~TOptional<_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody_::__l20::FNonTrivial>
            (local_80);
  if (((local_120.bIsSet == false) || (*local_120.TypedValue.Value != 2)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Res.IsSet() && *Res.GetValue().Value == 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                          ,0x193,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_120.bIsSet != false) {
    `UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial::~FNonTrivial
              (&local_120);
  }
  TMpscQueue<`UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial,FMemory>
  ::
  ~TMpscQueue<_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody_::__l20::FNonTrivial,FMemory>
            (&local_1b0);
  local_210 = (undefined8 *)0x0;
  local_1f0 = 0;
  local_210 = FMemory::Malloc(0x10,8);
  *local_210 = 0;
  LOCK();
  UNLOCK();
  local_1f0 = 0;
  local_208 = local_210;
  local_200 = local_210;
  local_1f8 = local_210;
  puVar8 = FMemory::Malloc(0x10,8);
  *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
  *puVar8 = 0;
  *(undefined4 *)(puVar8 + 1) = 0x2a;
  *local_208 = puVar8;
  LOCK();
  local_1f0 = local_1f0 + 1;
  UNLOCK();
  local_208 = puVar8;
  if ((local_1f0 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Q.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                          ,0x19b,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((undefined8 *)*local_210 != (undefined8 *)0x0) {
    LOCK();
    local_1f0 = local_1f0 + -1;
    UNLOCK();
    local_210 = (undefined8 *)*local_210;
  }
  puVar12 = local_200;
  puVar8 = local_210;
  if ((local_1f0 != 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Q.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                          ,0x19d,L""), puVar12 = local_200, puVar8 = local_210, bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  do {
    puVar1 = (undefined8 *)*puVar12;
    FMemory::Free(puVar12);
    bVar17 = puVar12 != puVar8;
    puVar12 = puVar1;
  } while (bVar17);
  while (puVar1 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)*puVar1;
    FMemory::Free(puVar1);
    puVar1 = puVar8;
  }
  plVar11 = FMemory::Malloc(0x10,8);
  *plVar11 = 0;
  if ((*plVar11 != 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Q.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                          ,0x1a2,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar8 = FMemory::Malloc(0x10,8);
  *puVar8 = 0;
  *(undefined4 *)(puVar8 + 1) = 0x2a;
  LOCK();
  UNLOCK();
  *plVar11 = (longlong)puVar8;
  if ((*plVar11 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Q.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                          ,0x1a4,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar13 = (longlong *)*plVar11;
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar11);
    plVar11 = plVar13;
  }
  if ((*plVar11 != 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Q.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                          ,0x1a6,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar8 = (undefined8 *)*plVar11;
  FMemory::Free(plVar11);
  while (puVar8 != (undefined8 *)0x0) {
    puVar12 = (undefined8 *)*puVar8;
    FMemory::Free(puVar8);
    puVar8 = puVar12;
  }
  local_1e8 = (longlong *)0x0;
  local_1c8 = 0;
  local_1e8 = FMemory::Malloc(0x10,8);
  *local_1e8 = 0;
  LOCK();
  local_1c8 = 0;
  UNLOCK();
  local_1e0 = local_1e8;
  local_1d8 = local_1e8;
  local_1d0 = local_1e8;
  puVar8 = FMemory::Malloc(0x10,8);
  *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
  *puVar8 = 0;
  *(undefined4 *)(puVar8 + 1) = 0x2a;
  *local_1e0 = (longlong)puVar8;
  LOCK();
  local_1c8 = local_1c8 + 1;
  UNLOCK();
  piVar14 = piVar16;
  if (*local_1e8 != 0) {
    piVar14 = (int *)(*local_1e8 + 8);
  }
  local_1e0 = puVar8;
  if ((piVar14 == (int *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Peeked",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                          ,0x1bb,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*piVar14 != 0x2a) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Peeked->Id == 42",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                          ,0x1bc,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar11 = (longlong *)*local_1e8;
  if (plVar11 == (longlong *)0x0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Dequeued",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                        ,0x1be,L"");
    if (bVar17) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsSet()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                        ,0x1bd,
                        L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                       );
    iVar7 = local_res18;
    if (bVar17) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    LOCK();
    local_1c8 = local_1c8 + -1;
    UNLOCK();
    iVar7 = (int)plVar11[1];
    local_1e8 = plVar11;
  }
  plVar13 = local_1d8;
  plVar11 = local_1e8;
  if ((iVar7 != *piVar14) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Dequeued.GetValue().Id == Peeked->Id",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                          ,0x1bf,L""), plVar13 = local_1d8, plVar11 = local_1e8, bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  do {
    plVar2 = (longlong *)*plVar13;
    FMemory::Free(plVar13);
    bVar17 = plVar13 != plVar11;
    plVar13 = plVar2;
  } while (bVar17);
  while (plVar2 != (longlong *)0x0) {
    plVar11 = (longlong *)*plVar2;
    FMemory::Free(plVar2);
    plVar2 = plVar11;
  }
  local_230 = (longlong *)0x0;
  local_230 = FMemory::Malloc(0x10,8);
  *local_230 = 0;
  local_228 = local_230;
  puVar8 = FMemory::Malloc(0x10,8);
  *puVar8 = 0;
  *(undefined4 *)(puVar8 + 1) = 0x2a;
  LOCK();
  UNLOCK();
  *local_230 = (longlong)puVar8;
  piVar14 = piVar16;
  if (*local_228 != 0) {
    piVar14 = (int *)(*local_228 + 8);
  }
  local_230 = puVar8;
  if ((piVar14 == (int *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Peeked",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                          ,0x1c6,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*piVar14 != 0x2a) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Peeked->Id == 42",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                          ,0x1c7,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar11 = (longlong *)*local_228;
  if (plVar11 == (longlong *)0x0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Dequeued",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                        ,0x1c9,L"");
    if (bVar17) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsSet()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                        ,0x1bd,
                        L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                       );
    if (bVar17) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    local_res18 = (int)plVar11[1];
    FMemory::Free(local_228);
    local_228 = plVar11;
  }
  if ((local_res18 != *piVar14) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Dequeued.GetValue().Id == Peeked->Id",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                          ,0x1ca,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar11 = (longlong *)*local_228;
  FMemory::Free(local_228);
  plVar13 = local_228;
  while (local_228 = plVar11, local_228 != (longlong *)0x0) {
    plVar11 = (longlong *)*local_228;
    FMemory::Free(local_228);
    plVar13 = local_228;
  }
  local_228 = plVar13;
  if (CpuChannel->Enabled < 0) {
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestTCircularQueueSingleThread<5\'000\'000>",
               TestTCircularQueueSingleThread<5000000>);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId462,L"TestTCircularQueueSingleThread<5\'000\'000>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
               ,0x1ce);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId462);
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestTCircularQueueSingleThread<5\'000\'000>",
               TestTCircularQueueSingleThread<5000000>);
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestQueueSingleThread<5\'000\'000, TQueueAdapter<TQueue<uint32, EQueueMode::Spsc>>>"
               ,
               TestQueueSingleThread<5000000,UE::ConcurrentQueuesTests::TQueueAdapter<TQueue<unsigned_int,1>_>_>
              );
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId463,
               L"TestQueueSingleThread<5\'000\'000, TQueueAdapter<TQueue<uint32, EQueueMode::Spsc>>>"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
               ,0x1cf);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId463);
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestQueueSingleThread<5\'000\'000, TQueueAdapter<TQueue<uint32, EQueueMode::Spsc>>>"
               ,
               TestQueueSingleThread<5000000,UE::ConcurrentQueuesTests::TQueueAdapter<TQueue<unsigned_int,1>_>_>
              );
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestQueueSingleThread<5\'000\'000, TQueueAdapter<TQueue<uint32, EQueueMode::Mpsc>>>"
               ,
               TestQueueSingleThread<5000000,UE::ConcurrentQueuesTests::TQueueAdapter<TQueue<unsigned_int,0>_>_>
              );
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId464,
               L"TestQueueSingleThread<5\'000\'000, TQueueAdapter<TQueue<uint32, EQueueMode::Mpsc>>>"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
               ,0x1d0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId464);
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestQueueSingleThread<5\'000\'000, TQueueAdapter<TQueue<uint32, EQueueMode::Mpsc>>>"
               ,
               TestQueueSingleThread<5000000,UE::ConcurrentQueuesTests::TQueueAdapter<TQueue<unsigned_int,0>_>_>
              );
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestQueueSingleThread<5\'000\'000, TMpscQueue<uint32>>",
               TestQueueSingleThread<5000000,TMpscQueue<unsigned_int,FMemory>_>);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId465,
               L"TestQueueSingleThread<5\'000\'000, TMpscQueue<uint32>>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
               ,0x1d1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId465);
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestQueueSingleThread<5\'000\'000, TMpscQueue<uint32>>",
               TestQueueSingleThread<5000000,TMpscQueue<unsigned_int,FMemory>_>);
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestQueueSingleThread<5\'000\'000, TSpscQueue<uint32>>",
               TestQueueSingleThread<5000000,TSpscQueue<unsigned_int,FMemory>_>);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId466,
               L"TestQueueSingleThread<5\'000\'000, TSpscQueue<uint32>>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
               ,0x1d2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId466);
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestQueueSingleThread<5\'000\'000, TSpscQueue<uint32>>",
               TestQueueSingleThread<5000000,TSpscQueue<unsigned_int,FMemory>_>);
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestSpscQueueCorrectness<1\'000\'000, TMpscQueue<uint32>>",
               TestSpscQueueCorrectness<1000000,TMpscQueue<unsigned_int,FMemory>_>);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId468,
               L"TestSpscQueueCorrectness<1\'000\'000, TMpscQueue<uint32>>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
               ,0x1d4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId468);
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestSpscQueueCorrectness<1\'000\'000, TMpscQueue<uint32>>",
               TestSpscQueueCorrectness<1000000,TMpscQueue<unsigned_int,FMemory>_>);
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestSpscQueueCorrectness<1\'000\'000, TSpscQueue<uint32>>",
               TestSpscQueueCorrectness<1000000,TSpscQueue<unsigned_int,FMemory>_>);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId469,
               L"TestSpscQueueCorrectness<1\'000\'000, TSpscQueue<uint32>>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
               ,0x1d5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId469);
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestSpscQueueCorrectness<1\'000\'000, TSpscQueue<uint32>>",
               TestSpscQueueCorrectness<1000000,TSpscQueue<unsigned_int,FMemory>_>);
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestTCircularQueue<5\'000\'000>",TestTCircularQueue<5000000>);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId471,L"TestTCircularQueue<5\'000\'000>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
               ,0x1d7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId471);
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestTCircularQueue<5\'000\'000>",TestTCircularQueue<5000000>);
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestSpscQueue<5\'000\'000, TQueueAdapter<TQueue<uint32, EQueueMode::Spsc>>>",
               TestSpscQueue<5000000,UE::ConcurrentQueuesTests::TQueueAdapter<TQueue<unsigned_int,1>_>_>
              );
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId472,
               L"TestSpscQueue<5\'000\'000, TQueueAdapter<TQueue<uint32, EQueueMode::Spsc>>>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
               ,0x1d8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId472);
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestSpscQueue<5\'000\'000, TQueueAdapter<TQueue<uint32, EQueueMode::Spsc>>>",
               TestSpscQueue<5000000,UE::ConcurrentQueuesTests::TQueueAdapter<TQueue<unsigned_int,1>_>_>
              );
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestSpscQueue<5\'000\'000, TQueueAdapter<TQueue<uint32, EQueueMode::Mpsc>>>",
               TestSpscQueue<5000000,UE::ConcurrentQueuesTests::TQueueAdapter<TQueue<unsigned_int,0>_>_>
              );
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId473,
               L"TestSpscQueue<5\'000\'000, TQueueAdapter<TQueue<uint32, EQueueMode::Mpsc>>>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
               ,0x1d9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId473);
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestSpscQueue<5\'000\'000, TQueueAdapter<TQueue<uint32, EQueueMode::Mpsc>>>",
               TestSpscQueue<5000000,UE::ConcurrentQueuesTests::TQueueAdapter<TQueue<unsigned_int,0>_>_>
              );
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestSpscQueue<5\'000\'000, TMpscQueue<uint32>>",
               TestSpscQueue<5000000,TMpscQueue<unsigned_int,FMemory>_>);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId474,L"TestSpscQueue<5\'000\'000, TMpscQueue<uint32>>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
               ,0x1da);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId474);
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestSpscQueue<5\'000\'000, TMpscQueue<uint32>>",
               TestSpscQueue<5000000,TMpscQueue<unsigned_int,FMemory>_>);
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestSpscQueue<5\'000\'000, TSpscQueue<uint32>>",
               TestSpscQueue<5000000,TSpscQueue<unsigned_int,FMemory>_>);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId475,L"TestSpscQueue<5\'000\'000, TSpscQueue<uint32>>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
               ,0x1db);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId475);
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestSpscQueue<5\'000\'000, TSpscQueue<uint32>>",
               TestSpscQueue<5000000,TSpscQueue<unsigned_int,FMemory>_>);
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId482,
               L"TestMpscQueue<100\'000, TQueueAdapter<TQueue<uint32, EQueueMode::Mpsc>>>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
               ,0x1e2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId482);
  }
  dVar5 = __real_7fefffffffffffff;
  if (4 < (byte)LogTemp._0_1_) {
    Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogTemp);
    dVar5 = __real_7fefffffffffffff;
  }
  do {
    QueryPerformanceCounter(&local_res20);
    dVar4 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    TestMpscQueue<100000,UE::ConcurrentQueuesTests::TQueueAdapter<TQueue<unsigned_int,0>_>_>();
    QueryPerformanceCounter(&local_a8);
    dVar4 = (double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar4;
    if (4 < (byte)LogTemp._0_1_) {
      Logging::Private::BasicLog<5>
                (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                  ::__l14::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    uVar15 = (int)piVar16 + 1;
    piVar16 = (int *)(ulonglong)uVar15;
    if (dVar5 <= dVar4) {
      dVar4 = dVar5;
    }
    dVar5 = dVar4;
  } while (uVar15 != 5);
  if (4 < (byte)LogTemp._0_1_) {
    Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestMpscQueue<100\'000, TMpscQueue<uint32>>",
               TestMpscQueue<100000,TMpscQueue<unsigned_int,FMemory>_>);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId483,L"TestMpscQueue<100\'000, TMpscQueue<uint32>>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
               ,0x1e3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId483);
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestMpscQueue<100\'000, TMpscQueue<uint32>>",
               TestMpscQueue<100000,TMpscQueue<unsigned_int,FMemory>_>);
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

