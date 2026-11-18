// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// GetTestFlags @ 141bca4a0

EAutomationTestFlags __thiscall
UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::GetTestFlags(FUnicastTSDelegateBasicTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bca4b0

bool __thiscall
UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::IsStressTest(FUnicastTSDelegateBasicTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bca4c0

uint __thiscall
UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::GetRequiredDeviceNum
          (FUnicastTSDelegateBasicTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bca4d0

FString * __thiscall
UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::GetTestSourceFileName
          (FUnicastTSDelegateBasicTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bca500

int __thiscall
UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::GetTestSourceFileLine
          (FUnicastTSDelegateBasicTest *this)

{
  return 0xe0;
}

// GetTests @ 141bca510

/* WARNING: Removing unreachable block (ram,0x000141bca68e) */

void __thiscall
UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::GetTests
          (FUnicastTSDelegateBasicTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bca6b0

bool __thiscall
UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::RunTest
          (FUnicastTSDelegateBasicTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bca6e0

FString * __thiscall
UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::GetBeautifiedTestName
          (FUnicastTSDelegateBasicTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FUnicastTSDelegateBasicTest @ 141bebf70

FUnicastTSDelegateBasicTest * __thiscall
UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::FUnicastTSDelegateBasicTest
          (FUnicastTSDelegateBasicTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FUnicastTSDelegateBasicTest_TSDelegatesTest_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Delegates::TS::Unicast::Basic");
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

// operator() @ 141bf34c0

void __thiscall
`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l11::<lambda_2>::operator()
          (void *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)this;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection(lpCriticalSection);
  if ((lpCriticalSection[1].LockCount != 0) &&
     (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    (*(code *)**(undefined8 **)lpCriticalSection[1].DebugInfo)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(lpCriticalSection + 1),0,0,0x10);
    lpCriticalSection[1].LockCount = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000141bf353f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// operator() @ 141bf37d0

void __thiscall
`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l19::<lambda_3>::operator()
          (void *this)

{
  LPCRITICAL_SECTION p_Var1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  
  p_Var1 = *(LPCRITICAL_SECTION *)this;
  if (p_Var1 == (LPCRITICAL_SECTION)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection(p_Var1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)(p_Var1 + 1));
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::`19'::<lambda_3>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (p_Var1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(p_Var1);
  }
  p_Var1 = *(LPCRITICAL_SECTION *)this;
  if (p_Var1 == (LPCRITICAL_SECTION)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection(p_Var1);
  if ((p_Var1[1].LockCount != 0) && (p_Var1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    (*(code *)**(undefined8 **)p_Var1[1].DebugInfo)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(p_Var1 + 1),0,0,0x10);
    p_Var1[1].LockCount = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000141bf38d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(p_Var1);
  return;
}

// TestBody @ 141c45430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody
          (FUnicastTSDelegateBasicTest *this,FString *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  ForElementType<TAlignedBytes<16,16>_> FVar8;
  ForElementType<TAlignedBytes<16,16>_> this_00;
  undefined1 auStackY_f8 [32];
  char local_c8 [8];
  _RTL_CRITICAL_SECTION local_c0;
  FDelegateAllocation local_98;
  _RTL_CRITICAL_SECTION local_88;
  FDelegateAllocation local_60;
  _RTL_CRITICAL_SECTION local_50;
  ForAnyElementType local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  InitializeCriticalSectionAndSpinCount(&local_88,4000);
  this_00 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  local_c8[0] = '\0';
  EnterCriticalSection(&local_88);
  puVar6 = Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::`3'::<lambda_1>_>
               ::_vftable_;
    puVar6[3] = local_c8;
  }
  LeaveCriticalSection(&local_88);
  EnterCriticalSection(&local_88);
  FVar8 = this_00;
  if (local_60.DelegateSize != 0) {
    FVar8 = local_60.DelegateAllocator;
  }
  (**(code **)(*(longlong *)FVar8 + 0x60))();
  LeaveCriticalSection(&local_88);
  if ((local_c8[0] == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bExecuted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                         ,0xe7,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection(&local_88);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_88);
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  DeleteCriticalSection(&local_88);
  InitializeCriticalSectionAndSpinCount(&local_c0,4000);
  local_98.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_98.DelegateSize = 0;
  EnterCriticalSection(&local_c0);
  puVar6 = Core::Private::DelegateAllocate(0x20,&local_98);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::`11'::<lambda_2>_>
               ::_vftable_;
    puVar6[3] = &local_c0;
  }
  LeaveCriticalSection(&local_c0);
  EnterCriticalSection(&local_c0);
  FVar8 = this_00;
  if (local_98.DelegateSize != 0) {
    FVar8 = local_98.DelegateAllocator;
  }
  (**(code **)(*(longlong *)FVar8 + 0x60))();
  LeaveCriticalSection(&local_c0);
  EnterCriticalSection(&local_c0);
  if (((local_98.DelegateSize == 0) ||
      (local_98.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar5 = (**(code **)(*(longlong *)local_98.DelegateAllocator + 0x38))(), cVar5 == '\0')) {
    LeaveCriticalSection(&local_c0);
  }
  else {
    LeaveCriticalSection(&local_c0);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Delegate.IsBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                       ,0xee,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EnterCriticalSection(&local_c0);
  if ((local_98.DelegateSize != 0) &&
     (local_98.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_98.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_98,0,0,0x10);
    local_98.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_c0);
  if (local_98.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_98.DelegateAllocator);
  }
  DeleteCriticalSection(&local_c0);
  InitializeCriticalSectionAndSpinCount(&local_50,4000);
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  FVar8 = (ForElementType<TAlignedBytes<16,16>_>)
          TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
          ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                      *)&Tasks::Private::SmallTaskAllocator);
  if (FVar8 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)FVar8,2,true);
    *(undefined ***)FVar8 =
         &Tasks::Private::
          TExecutableTaskBase<`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::`19'::<lambda_3>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              ((FTaskBase *)FVar8,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp(243)"
               ,Default,None,None);
    ((FTaskBase *)((longlong)FVar8 + 0xd8))->_padding_ = (longlong)&local_50;
    *(undefined ***)FVar8 =
         &Tasks::Private::
          TExecutableTask<`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::`19'::<lambda_3>_>
          ::_vftable_;
    this_00 = FVar8;
  }
  Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0x100);
  EnterCriticalSection(&local_50);
  if ((local_20 != 0) && (local_28.Data != (FScriptContainerElement *)0x0)) {
    (**(code **)(*(longlong *)local_28.Data + 0x68))();
  }
  LeaveCriticalSection(&local_50);
  if (this_00 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    Tasks::Private::FTaskBase::Wait((FTaskBase *)this_00);
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)this_00 + 0x30);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)this_00)(this_00);
    }
  }
  EnterCriticalSection(&local_50);
  if ((local_20 != 0) && (local_28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_28,0,0,0x10);
    local_20 = 0;
  }
  LeaveCriticalSection(&local_50);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  DeleteCriticalSection(&local_50);
  return;
}

