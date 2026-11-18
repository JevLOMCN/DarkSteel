// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// GetTestFlags @ 141bcace0

EAutomationTestFlags __thiscall
UE::TSDelegatesTest::FUnicastTSDelegateStressTest::GetTestFlags(FUnicastTSDelegateStressTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bcacf0

bool __thiscall
UE::TSDelegatesTest::FUnicastTSDelegateStressTest::IsStressTest(FUnicastTSDelegateStressTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bcad00

uint __thiscall
UE::TSDelegatesTest::FUnicastTSDelegateStressTest::GetRequiredDeviceNum
          (FUnicastTSDelegateStressTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bcad10

FString * __thiscall
UE::TSDelegatesTest::FUnicastTSDelegateStressTest::GetTestSourceFileName
          (FUnicastTSDelegateStressTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bcad40

int __thiscall
UE::TSDelegatesTest::FUnicastTSDelegateStressTest::GetTestSourceFileLine
          (FUnicastTSDelegateStressTest *this)

{
  return 0xfd;
}

// GetTests @ 141bcad50

/* WARNING: Removing unreachable block (ram,0x000141bcaece) */

void __thiscall
UE::TSDelegatesTest::FUnicastTSDelegateStressTest::GetTests
          (FUnicastTSDelegateStressTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bcaef0

bool __thiscall
UE::TSDelegatesTest::FUnicastTSDelegateStressTest::RunTest
          (FUnicastTSDelegateStressTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bcaf20

FString * __thiscall
UE::TSDelegatesTest::FUnicastTSDelegateStressTest::GetBeautifiedTestName
          (FUnicastTSDelegateStressTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FUnicastTSDelegateStressTest @ 141bec140

FUnicastTSDelegateStressTest * __thiscall
UE::TSDelegatesTest::FUnicastTSDelegateStressTest::FUnicastTSDelegateStressTest
          (FUnicastTSDelegateStressTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FUnicastTSDelegateStressTest_TSDelegatesTest_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Delegates::TS::Unicast::Stress");
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

// operator() @ 141bf2800

void __thiscall
`UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()
          (void *this)

{
  char cVar1;
  LPCRITICAL_SECTION p_Var2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  undefined4 uVar10;
  undefined4 extraout_var_01;
  ulonglong uVar8;
  undefined7 extraout_var;
  undefined4 extraout_var_02;
  undefined7 extraout_var_00;
  ulonglong uVar9;
  longlong lVar11;
  ulonglong uVar12;
  
  cVar1 = **(char **)this;
  while( true ) {
    if (cVar1 != '\0') {
      return;
    }
    p_Var2 = *(LPCRITICAL_SECTION *)((longlong)this + 8);
    if ((p_Var2 == (LPCRITICAL_SECTION)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar5)) break;
    EnterCriticalSection(p_Var2);
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)(p_Var2 + 1));
    uVar7 = 0;
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::`3'::<lambda_1>::operator()'::`4'::<lambda_1>_>
                 ::_vftable_;
    }
    uVar10 = (undefined4)(uVar7 >> 0x20);
    if (p_Var2 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(p_Var2);
      uVar10 = extraout_var_01;
    }
    uVar8 = rdtsc();
    uVar8 = CONCAT44(uVar10,(int)uVar8) | uVar8 & 0xffffffff00000000;
    uVar12 = (ulonglong)(-(uint)(uVar8 != 0) & 100);
    bVar5 = FWindowsPlatformMisc::HasTimedPauseCPUFeature();
    uVar9 = CONCAT71(extraout_var,bVar5);
    if (bVar5) {
      uVar8 = rdtsc();
      lVar11 = (uVar8 & 0xffffffff00000000 | CONCAT44((int)((uint7)extraout_var >> 0x18),(int)uVar8)
               ) + uVar12;
      tpause(0,(int)((ulonglong)lVar11 >> 0x20),(int)lVar11);
    }
    else {
      do {
        uVar4 = rdtsc();
        uVar9 = (CONCAT44((int)(uVar9 >> 0x20),(int)uVar4) | uVar4 & 0xffffffff00000000) - uVar8;
      } while (uVar9 < uVar12);
    }
    p_Var2 = *(LPCRITICAL_SECTION *)((longlong)this + 8);
    if ((p_Var2 == (LPCRITICAL_SECTION)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EnterCriticalSection(p_Var2);
    if ((p_Var2[1].LockCount != 0) && (p_Var2[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      (*(code *)**(undefined8 **)p_Var2[1].DebugInfo)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(p_Var2 + 1),0,0,0x10);
      p_Var2[1].LockCount = 0;
    }
    LeaveCriticalSection(p_Var2);
    uVar8 = rdtsc();
    uVar8 = CONCAT44(extraout_var_02,(int)uVar8) | uVar8 & 0xffffffff00000000;
    uVar12 = (ulonglong)(-(uint)(uVar8 != 0) & 100);
    bVar5 = FWindowsPlatformMisc::HasTimedPauseCPUFeature();
    uVar9 = CONCAT71(extraout_var_00,bVar5);
    if (bVar5) {
      uVar8 = rdtsc();
      lVar11 = (uVar8 & 0xffffffff00000000 |
               CONCAT44((int)((uint7)extraout_var_00 >> 0x18),(int)uVar8)) + uVar12;
      tpause(0,(int)((ulonglong)lVar11 >> 0x20),(int)lVar11);
    }
    else {
      do {
        uVar4 = rdtsc();
        uVar9 = (CONCAT44((int)(uVar9 >> 0x20),(int)uVar4) | uVar4 & 0xffffffff00000000) - uVar8;
      } while (uVar9 < uVar12);
    }
    cVar1 = **(char **)this;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// operator() @ 141bf3300

void __thiscall
`UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::__l5::<lambda_2>::operator()
          (void *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  
  cVar3 = **(char **)this;
  while( true ) {
    if (cVar3 != '\0') {
      return;
    }
    lpCriticalSection = *(LPCRITICAL_SECTION *)((longlong)this + 8);
    if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar2)) break;
    EnterCriticalSection(lpCriticalSection);
    if ((lpCriticalSection[1].LockCount == 0) ||
       (lpCriticalSection[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      LeaveCriticalSection(lpCriticalSection);
    }
    else {
      cVar3 = (**(code **)(*(longlong *)lpCriticalSection[1].DebugInfo + 0x68))();
      LeaveCriticalSection(lpCriticalSection);
      if (cVar3 != '\0') {
        LOCK();
        **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + 1;
        UNLOCK();
      }
    }
    cVar3 = **(char **)this;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// TestBody @ 141c45800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody
          (FUnicastTSDelegateStressTest *this,FString *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FTaskBase *pFVar7;
  FTaskBase *pFVar8;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> this_00;
  FTaskBase *this_01;
  uint uVar9;
  FTaskBase *pFVar10;
  undefined1 auStackY_d8 [32];
  undefined1 local_88 [8];
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_80;
  FTaskHandle local_70;
  FTaskBase *local_68;
  undefined4 local_60 [2];
  _RTL_CRITICAL_SECTION local_58;
  ForAnyElementType local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  InitializeCriticalSectionAndSpinCount(&local_58,4000);
  pFVar10 = (FTaskBase *)0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
  local_88[0] = 0;
  local_60[0] = 0;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  local_70.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  this_00.Reference = pFVar10;
  if (pFVar7 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
    pFVar7->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::`3'::<lambda_1>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (pFVar7,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp(261)"
               ,Default,None,None);
    pFVar7[1]._padding_ = (longlong)local_88;
    pFVar7[1]._padding_ = (longlong)&local_58;
    pFVar7->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::`3'::<lambda_1>_>
          ::_vftable_;
    this_00.Reference = pFVar7;
  }
  if (local_70.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)local_70.Pimpl.Reference + 0x30);
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)local_70.Pimpl.Reference)(local_70.Pimpl.Reference,1);
    }
  }
  local_70.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)this_00.Reference;
  Tasks::Private::FTaskBase::TryLaunch(this_00.Reference,0x100);
  if (((local_80.AllocatorInstance.Data <= (FScriptContainerElement *)&local_70) &&
      ((FScriptContainerElement *)&local_70 <
       local_80.AllocatorInstance.Data + (longlong)local_80.ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = local_80.ArrayNum;
  if (local_80.ArrayNum == local_80.ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_80.AllocatorInstance,&local_80.ArrayMax);
  }
  local_80.ArrayNum = iVar6 + 1;
  *(undefined8 *)(local_80.AllocatorInstance.Data + (longlong)iVar6 * 8) = 0;
  *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)
   (local_80.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_70.Pimpl.Reference;
  local_70.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  iVar6 = FWindowsPlatformMisc::NumberOfCores();
  pFVar7 = pFVar10;
  if (iVar6 / 2 != 0) {
    do {
      local_68 = (FTaskBase *)0x0;
      pFVar8 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
               ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                           *)&Tasks::Private::SmallTaskAllocator);
      this_01 = pFVar10;
      if (pFVar8 != (FTaskBase *)0x0) {
        Tasks::Private::FTaskBase::FTaskBase(pFVar8,2,true);
        pFVar8->_padding_ =
             (longlong)
             &Tasks::Private::
              TExecutableTaskBase<`UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::`5'::<lambda_2>,void,void>
              ::_vftable_;
        Tasks::Private::FTaskBase::Init
                  (pFVar8,
                   L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp(274)"
                   ,Default,None,None);
        pFVar8[1]._padding_ = (longlong)local_88;
        pFVar8[1]._padding_ = (longlong)&local_58;
        pFVar8[1]._padding_ = (longlong)local_60;
        pFVar8->_padding_ =
             (longlong)
             &Tasks::Private::
              TExecutableTask<`UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::`5'::<lambda_2>_>
              ::_vftable_;
        this_01 = pFVar8;
      }
      pFVar8 = local_68;
      if (local_68 != (FTaskBase *)0x0) {
        local_68 = (FTaskBase *)0x0;
        LOCK();
        piVar2 = (int *)((longlong)pFVar8 + 0x30);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (*(code *)**(undefined8 **)pFVar8)(pFVar8,1);
        }
      }
      local_68 = this_01;
      Tasks::Private::FTaskBase::TryLaunch(this_01,0x100);
      if (((local_80.AllocatorInstance.Data <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 <
           local_80.AllocatorInstance.Data + (longlong)local_80.ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = local_80.ArrayNum;
      if (local_80.ArrayNum == local_80.ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_80.AllocatorInstance,&local_80.ArrayMax);
      }
      uVar9 = (int)pFVar7 + 1;
      local_80.ArrayNum = iVar6 + 1;
      *(undefined8 *)(local_80.AllocatorInstance.Data + (longlong)iVar6 * 8) = 0;
      *(FTaskBase **)(local_80.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_68;
      iVar6 = FWindowsPlatformMisc::NumberOfCores();
      pFVar7 = (FTaskBase *)(ulonglong)uVar9;
    } while (uVar9 != iVar6 / 2);
  }
  FWindowsPlatformProcess::Sleep(__real_3f800000);
  LOCK();
  local_88[0] = 1;
  UNLOCK();
  Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
            (&local_80,(FTimespan)0x7fffffffffffffff);
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)local_80.AllocatorInstance.Data,local_80.ArrayNum);
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  EnterCriticalSection(&local_58);
  if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = 0;
  }
  LeaveCriticalSection(&local_58);
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  DeleteCriticalSection(&local_58);
  return;
}

