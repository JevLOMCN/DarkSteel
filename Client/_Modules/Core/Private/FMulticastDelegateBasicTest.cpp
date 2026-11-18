// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141bcb260

EAutomationTestFlags __thiscall
UE::TSDelegatesTest::FMulticastDelegateBasicTest::GetTestFlags(FMulticastDelegateBasicTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bcb270

bool __thiscall
UE::TSDelegatesTest::FMulticastDelegateBasicTest::IsStressTest(FMulticastDelegateBasicTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bcb280

uint __thiscall
UE::TSDelegatesTest::FMulticastDelegateBasicTest::GetRequiredDeviceNum
          (FMulticastDelegateBasicTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bcb290

FString * __thiscall
UE::TSDelegatesTest::FMulticastDelegateBasicTest::GetTestSourceFileName
          (FMulticastDelegateBasicTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bcb2d0

int __thiscall
UE::TSDelegatesTest::FMulticastDelegateBasicTest::GetTestSourceFileLine
          (FMulticastDelegateBasicTest *this)

{
  return 0x126;
}

// GetTests @ 141bcb340

/* WARNING: Removing unreachable block (ram,0x000141bcb4be) */

void __thiscall
UE::TSDelegatesTest::FMulticastDelegateBasicTest::GetTests
          (FMulticastDelegateBasicTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bcb680

bool __thiscall
UE::TSDelegatesTest::FMulticastDelegateBasicTest::RunTest
          (FMulticastDelegateBasicTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bcb6b0

FString * __thiscall
UE::TSDelegatesTest::FMulticastDelegateBasicTest::GetBeautifiedTestName
          (FMulticastDelegateBasicTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FMulticastDelegateBasicTest @ 141be5100

FMulticastDelegateBasicTest * __thiscall
UE::TSDelegatesTest::FMulticastDelegateBasicTest::FMulticastDelegateBasicTest
          (FMulticastDelegateBasicTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FMulticastDelegateBasicTest_TSDelegatesTest_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Delegates::Multicast::Basic");
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
  ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
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

// TestBody @ 141c28e70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody
          (FMulticastDelegateBasicTest *this,FString *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  uint uVar12;
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *pTVar13;
  ulonglong uVar14;
  FScriptContainerElement *this_00;
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *pTVar15;
  char local_res18 [8];
  char local_res20 [8];
  char local_2c8 [4];
  int local_2c4;
  int local_2c0;
  int local_2bc;
  undefined1 local_2b8 [8];
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *local_2b0;
  ulonglong local_2a8;
  int iStack_2a0;
  int iStack_29c;
  undefined1 local_298;
  int local_294;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_290;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_270;
  FDelegateAllocation local_268;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_258;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_238;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_218;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_1f8;
  FDestructionSentinel local_1d8;
  undefined1 local_1c0 [8];
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *local_1b8;
  int local_1b0;
  undefined8 uStack_1a8;
  char *local_1a0;
  char *local_198;
  <lambda_1> local_190;
  int *local_188;
  int *local_180;
  int *local_178;
  int *local_170;
  int *local_168;
  int *local_160;
  FDestructionSentinel local_158;
  FDestructionSentinel local_140;
  FDestructionSentinel local_128;
  FDestructionSentinel local_110;
  FDestructionSentinel local_f8;
  FDestructionSentinel local_e0;
  FDelegateAllocation *local_c8;
  <lambda_6> local_c0;
  <lambda_7> local_b8;
  <lambda_8> local_b0;
  FDummy local_a8 [2];
  FReadAccessScope local_a0;
  FReadAccessScope local_88;
  <lambda_2> local_68;
  <lambda_4> local_60;
  <lambda_9> local_58;
  undefined1 local_50 [16];
  <lambda_5> local_40 [3];
  
  uVar3 = _UNK_150631d48;
  uVar2 = ___xmm_00000000000000020000000000000000;
  uVar10 = 0;
  local_1a0 = local_res18;
  local_258._padding_ = 0;
  local_258.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res18[0] = '\0';
  local_258.InvocationList._8_8_ = ___xmm_00000000000000020000000000000000;
  local_258._24_8_ = _UNK_150631d48;
  local_res20[0] = '\0';
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody_::__l3::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &local_258,&local_190);
  local_198 = local_res20;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody_::__l3::<lambda_2>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &local_258,&local_68);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_258);
  if (((local_res18[0] == '\0') || (local_res20[0] == '\0')) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bExecuted1 && bExecuted2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                         ,0x12f,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (local_190.bExecuted1 != (bool *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_258,
               (FWriteAccessScope *)&local_1d8);
    uVar11 = local_258.InvocationList._8_8_;
    uVar14 = uVar10;
    if (0 < local_258.InvocationList.ArrayNum) {
      do {
        uVar12 = (uint)uVar10;
        uVar5 = 0;
        if ((int)uVar12 < (int)uVar11) {
          uVar5 = ~uVar12 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , uVar11 = local_258.InvocationList._8_8_, bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = local_258.InvocationList.AllocatorInstance.Data + uVar14;
                    /* WARNING: Load size is inaccurate */
        if (((*(int *)(this_00 + 8) != 0) && (*this_00 != (FScriptContainerElement *)0x0)) &&
           (plVar7 = (longlong *)(**(code **)(*(longlong *)*this_00 + 0x40))(),
           uVar11 = local_258.InvocationList._8_8_, (bool *)*plVar7 == local_190.bExecuted1)) {
          local_298 = 0;
                    /* WARNING: Load size is inaccurate */
          if ((*(int *)(this_00 + 8) != 0) && (*this_00 != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)*this_00)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)this_00,0,0,0x10);
            *(undefined4 *)(this_00 + 8) = 0;
          }
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    (&local_258,false);
          break;
        }
        uVar10 = (ulonglong)(uVar12 + 1);
        uVar14 = uVar14 + 0x10;
      } while ((int)(uVar12 + 1) < (int)uVar11);
    }
    if (local_1d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d8.Accessor,&local_1d8);
    }
  }
  local_res20[0] = '\0';
  local_res18[0] = '\0';
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_258);
  if (((local_res18[0] != '\0') || (local_res20[0] == '\0')) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bExecuted1 && bExecuted2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                         ,0x133,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_258.InvocationList.AllocatorInstance.Data,local_258.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_258.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_258.InvocationList.AllocatorInstance.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_258);
  local_238._padding_ = 0;
  local_238.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2bc = 0;
  local_238.InvocationList._8_8_ = uVar2;
  local_238._24_8_ = uVar3;
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddRaw<_UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody_::__l18::FDummy>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &local_238,local_a8,(pmf_dff587b4)&local_2bc);
  local_294 = 0;
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddRaw<_UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody_::__l18::FDummy>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &local_238,(FDummy *)(local_50 + 8),(pmf_dff587b4)&local_294);
  TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)&local_238,1);
  if (((local_2bc != 1) || (local_294 != 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dummy1.Value == 1 && Dummy2.Value == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                         ,0x148,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(&local_238,&local_294);
  if ((iVar6 != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Delegate.RemoveAll(&Dummy2) == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                         ,0x149,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)&local_238,2);
  if ((local_2bc != 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dummy1.Value == 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                         ,0x14c,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(&local_238,&local_2bc);
  if ((iVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Delegate.RemoveAll(&Dummy1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                         ,0x14d,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_238.InvocationList.AllocatorInstance.Data,local_238.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_238.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_238.InvocationList.AllocatorInstance.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_238);
  local_1c0 = (undefined1  [8])0x0;
  local_1b8 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
  _local_1b0 = uVar2;
  uStack_1a8 = uVar3;
  local_270.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_268.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_268.DelegateSize = 0;
  local_2c8[0] = '\0';
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_270,(FWriteAccessScope *)&local_e0);
  local_c8 = &local_268;
  puVar8 = Core::Private::DelegateAllocate(0x20,&local_268);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`48'::<lambda_3>_>
               ::_vftable_;
    puVar8[3] = local_2c8;
  }
  if (local_e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             local_1c0,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_50);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1c0);
  if ((local_2c8[0] == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bExecuted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                         ,0x157,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_270,(FWriteAccessScope *)&local_128);
  if ((local_268.DelegateSize != 0) &&
     (local_268.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_268.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_268,0,0,0x10);
    local_268.DelegateSize = 0;
  }
  if (local_128.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
  }
  if (local_268.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_268.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_270.AccessDetector);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>(local_1b8,local_1b0);
  if (local_1b8 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_1b8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c0);
  local_188 = &local_2c4;
  local_2b8 = (undefined1  [8])0x0;
  local_2b0 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
  local_2c4 = 0;
  local_2a8 = uVar2;
  _iStack_2a0 = uVar3;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody_::__l56::<lambda_4>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             local_2b8,&local_60);
  local_180 = &local_2c4;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody_::__l56::<lambda_5>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             local_2b8,local_40);
  local_290._padding_ = 0;
  local_290.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_290.InvocationList._8_8_ = uVar2;
  local_290._24_8_ = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b8,
             (FWriteAccessScope *)&local_110);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0,0);
  uVar10 = local_2a8;
  pTVar13 = local_2b0;
  iVar6 = iStack_2a0;
  local_2b0 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
  local_2a8 = 0;
  iStack_2a0 = 2;
  if ((iStack_29c != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Other.InvocationListLockCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\MulticastDelegateBase.h"
                         ,0x3f,L"Moving from a multicast delegate while it is mid broadcast"), bVar4
     )) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (local_110.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_290,
             (FWriteAccessScope *)&local_f8);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked(&local_290);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_290.InvocationList.AllocatorInstance.Data,local_290.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_290.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_290.InvocationList.AllocatorInstance.Data);
  }
  uVar14 = local_2a8;
  local_290.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)pTVar13;
  local_2a8._0_4_ = (int)uVar10;
  local_2a8._4_4_ = SUB84(uVar10,4);
  local_290.InvocationList.ArrayNum = (int)local_2a8;
  local_290.InvocationList.ArrayMax = local_2a8._4_4_;
  local_290.CompactionThreshold = iVar6;
  local_2a8 = uVar14;
  if ((local_290.InvocationListLockCount != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InvocationListLockCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\MulticastDelegateBase.h"
                         ,0x48,L"Moving to a multicast delegate while it is mid broadcast"), bVar4))
  {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (local_f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b8,&local_a0);
  iVar6 = (int)local_2a8;
  uVar10 = (ulonglong)(int)local_2a8;
  pTVar15 = local_2b0 + uVar10;
  pTVar13 = local_2b0;
  while( true ) {
    if ((int)uVar10 != iVar6) {
      local_2c8[1] = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_2c8 + 1);
      uVar10 = local_2a8 & 0xffffffff;
    }
    if (pTVar13 == pTVar15) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a0);
      goto LAB_141c29594;
    }
    if ((*(int *)&pTVar13->field_0x8 != 0) && (*(longlong *)pTVar13 != 0)) break;
    pTVar13 = pTVar13 + 1;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a0);
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("!Source.IsBound()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                     ,0x161,L"");
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_141c29594:
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_290);
  if ((local_2c4 != 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumExecuted == 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                         ,0x163,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_178 = &local_2c4;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody_::__l56::<lambda_6>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             local_2b8,&local_c0);
  local_170 = &local_2c4;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody_::__l56::<lambda_7>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             local_2b8,&local_b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b8,
             (FWriteAccessScope *)&local_158);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0,0);
  uVar10 = local_2a8;
  pTVar13 = local_2b0;
  iVar6 = iStack_2a0;
  local_2b0 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
  local_2a8 = 0;
  iStack_2a0 = 2;
  if ((iStack_29c != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Other.InvocationListLockCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\MulticastDelegateBase.h"
                         ,0x3f,L"Moving from a multicast delegate while it is mid broadcast"), bVar4
     )) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (local_158.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_290,
             (FWriteAccessScope *)&local_140);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked(&local_290);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_290.InvocationList.AllocatorInstance.Data,local_290.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_290.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_290.InvocationList.AllocatorInstance.Data);
  }
  local_290.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)pTVar13;
  local_290.InvocationList._8_8_ = uVar10;
  local_290.CompactionThreshold = iVar6;
  if ((local_290.InvocationListLockCount != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InvocationListLockCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\MulticastDelegateBase.h"
                         ,0x48,L"Moving to a multicast delegate while it is mid broadcast"), bVar4))
  {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (local_140.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b8,&local_88);
  iVar6 = (int)local_2a8;
  uVar10 = (ulonglong)(int)local_2a8;
  pTVar15 = local_2b0 + uVar10;
  pTVar13 = local_2b0;
  while( true ) {
    if ((int)uVar10 != iVar6) {
      local_2c8[2] = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_2c8 + 2);
      uVar10 = local_2a8 & 0xffffffff;
    }
    if (pTVar13 == pTVar15) break;
    if ((*(int *)&pTVar13->field_0x8 != 0) && (*(longlong *)pTVar13 != 0)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_88);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Source.IsBound()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                         ,0x168,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
LAB_141c297cd:
      local_2c4 = 0;
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_290);
      if ((local_2c4 != 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumExecuted == 2",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                             ,0x16b,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 local_290.InvocationList.AllocatorInstance.Data,local_290.InvocationList.ArrayNum);
      if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
          local_290.InvocationList.AllocatorInstance.Data !=
          (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
        FMemory::Free(local_290.InvocationList.AllocatorInstance.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&local_290);
      DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                (local_2b0,(int)local_2a8);
      if (local_2b0 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
        FMemory::Free(local_2b0);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_2b8);
      local_168 = &local_2c0;
      local_1f8._padding_ = 0;
      local_1f8.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2c0 = 0;
      local_1f8.InvocationList._8_8_ = uVar2;
      local_1f8._24_8_ = uVar3;
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddLambda<_UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody_::__l85::<lambda_8>_>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &local_1f8,&local_b0);
      local_160 = &local_2c0;
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddLambda<_UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody_::__l85::<lambda_9>_>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &local_1f8,&local_58);
      local_218._padding_ = 0;
      local_218.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_218.InvocationList._8_8_ = uVar2;
      local_218._24_8_ = uVar3;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                (&local_218,&local_1f8);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_218);
      if ((local_2c0 != 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumExecuted == 2",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                             ,0x176,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                (&local_218,&local_1f8);
      local_2c0 = 0;
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_218);
      if ((local_2c0 != 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumExecuted == 2",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                             ,0x17b,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 local_218.InvocationList.AllocatorInstance.Data,local_218.InvocationList.ArrayNum);
      if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
          local_218.InvocationList.AllocatorInstance.Data !=
          (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
        FMemory::Free(local_218.InvocationList.AllocatorInstance.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&local_218);
      DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 local_1f8.InvocationList.AllocatorInstance.Data,local_1f8.InvocationList.ArrayNum);
      if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
          local_1f8.InvocationList.AllocatorInstance.Data !=
          (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
        FMemory::Free(local_1f8.InvocationList.AllocatorInstance.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&local_1f8);
      return;
    }
    pTVar13 = pTVar13 + 1;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_88);
  goto LAB_141c297cd;
}

