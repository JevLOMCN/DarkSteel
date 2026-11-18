// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// GetTestFlags @ 141bbe280

EAutomationTestFlags __thiscall
UE::TSDelegatesTest::FMulticastTSDelegateStressTest::GetTestFlags
          (FMulticastTSDelegateStressTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bbe290

bool __thiscall
UE::TSDelegatesTest::FMulticastTSDelegateStressTest::IsStressTest
          (FMulticastTSDelegateStressTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bbe2f0

uint __thiscall
UE::TSDelegatesTest::FMulticastTSDelegateStressTest::GetRequiredDeviceNum
          (FMulticastTSDelegateStressTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bbe300

FString * __thiscall
UE::TSDelegatesTest::FMulticastTSDelegateStressTest::GetTestSourceFileName
          (FMulticastTSDelegateStressTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bbe330

int __thiscall
UE::TSDelegatesTest::FMulticastTSDelegateStressTest::GetTestSourceFileLine
          (FMulticastTSDelegateStressTest *this)

{
  return 0x1cb;
}

// GetTests @ 141bbe340

/* WARNING: Removing unreachable block (ram,0x000141bbe4be) */

void __thiscall
UE::TSDelegatesTest::FMulticastTSDelegateStressTest::GetTests
          (FMulticastTSDelegateStressTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

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

// RunTest @ 141bbe4e0

bool __thiscall
UE::TSDelegatesTest::FMulticastTSDelegateStressTest::RunTest
          (FMulticastTSDelegateStressTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bbe510

FString * __thiscall
UE::TSDelegatesTest::FMulticastTSDelegateStressTest::GetBeautifiedTestName
          (FMulticastTSDelegateStressTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FMulticastTSDelegateStressTest @ 141be52d0

FMulticastTSDelegateStressTest * __thiscall
UE::TSDelegatesTest::FMulticastTSDelegateStressTest::FMulticastTSDelegateStressTest
          (FMulticastTSDelegateStressTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FMulticastTSDelegateStressTest_TSDelegatesTest_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Delegates::TS::Multicast::Stress");
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

// operator() @ 141bf2450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()
          (void *this)

{
  int *piVar1;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ForElementType<TAlignedBytes<16,16>_> *pFVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined1 local_88;
  _RTL_CRITICAL_SECTION local_70;
  FDelegateAllocation local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (**(char **)this == '\0') {
    uVar16 = 0;
    do {
      pTVar2 = *(TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> **)((longlong)this + 8);
      InitializeCriticalSectionAndSpinCount(&local_70,4000);
      local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_48.DelegateSize = 0;
      EnterCriticalSection(&local_70);
      puVar8 = UE::Core::Private::DelegateAllocate(0x20,&local_48);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_
        ;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[2] = uVar9;
        *puVar8 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::`3'::<lambda_1>::operator()'::`4'::<lambda_1>_>
                   ::_vftable_;
      }
      LeaveCriticalSection(&local_70);
      if ((pTVar2 == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)pTVar2);
      EnterCriticalSection(&local_70);
      uVar11 = uVar16;
      if (((local_48.DelegateSize != 0) &&
          (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) &&
         (cVar5 = (**(code **)(*(longlong *)local_48.DelegateAllocator + 0x38))(), uVar11 = 0,
         cVar5 != '\0')) {
        LeaveCriticalSection(&local_70);
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(pTVar2,true);
        EnterCriticalSection(&local_70);
        uVar11 = uVar16;
        if ((local_48.DelegateSize != 0) &&
           (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          puVar10 = (ulonglong *)(**(code **)(*(longlong *)local_48.DelegateAllocator + 0x40))();
          uVar11 = *puVar10;
        }
        LeaveCriticalSection(&local_70);
        iVar6 = (pTVar2->InvocationList).ArrayNum;
        piVar1 = &(pTVar2->InvocationList).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(pTVar2->InvocationList).AllocatorInstance,piVar1);
        }
        pFVar13 = (pTVar2->InvocationList).AllocatorInstance.Data;
        (pTVar2->InvocationList).ArrayNum = iVar6 + 1;
        pFVar12 = (ForElementType<TAlignedBytes<16,16>_> *)(pFVar13 + (longlong)iVar6 * 0x10);
        *pFVar12 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(undefined4 *)(pFVar12 + 1) = 0;
        EnterCriticalSection(&local_70);
        if (*pFVar12 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)*pFVar12);
        }
        *pFVar12 = local_48.DelegateAllocator;
        local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(pFVar12 + 1) = local_48.DelegateSize;
        local_48.DelegateSize = 0;
      }
      LeaveCriticalSection(&local_70);
      if (pTVar2 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)pTVar2);
      }
      EnterCriticalSection(&local_70);
      if ((local_48.DelegateSize != 0) &&
         (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_48.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_48,0,0,0x10);
        local_48.DelegateSize = 0;
      }
      LeaveCriticalSection(&local_70);
      if (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_48.DelegateAllocator);
      }
      DeleteCriticalSection(&local_70);
      pTVar2 = *(TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> **)((longlong)this + 8);
      if (uVar11 != 0) {
        if ((pTVar2 == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mutex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                               ,0x1b,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)pTVar2);
        uVar15 = uVar16;
        uVar17 = uVar16;
        if (0 < (pTVar2->InvocationList).ArrayNum) {
          do {
            iVar6 = (pTVar2->InvocationList).ArrayNum;
            uVar14 = (uint)uVar15;
            uVar7 = 0;
            if ((int)uVar14 < iVar6) {
              uVar7 = ~uVar14 >> 0x1f;
            }
            if (uVar7 == 0) {
              local_98 = (longlong)(int)uVar14;
              local_90 = (longlong)iVar6;
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            pFVar13 = (pTVar2->InvocationList).AllocatorInstance.Data + uVar17;
            if (((*(int *)&pFVar13[8].field_0x0 != 0) &&
                (*(longlong **)&pFVar13->field_0x0 != (longlong *)0x0)) &&
               (puVar10 = (ulonglong *)(**(code **)(**(longlong **)&pFVar13->field_0x0 + 0x40))(),
               *puVar10 == uVar11)) {
              local_88 = 0;
              if ((*(int *)&pFVar13[8].field_0x0 != 0) &&
                 (*(undefined8 **)&pFVar13->field_0x0 != (undefined8 *)0x0)) {
                (**(code **)**(undefined8 **)&pFVar13->field_0x0)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)pFVar13,0,0,0x10);
                *(undefined4 *)&pFVar13[8].field_0x0 = 0;
              }
              TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                        (pTVar2,false);
              break;
            }
            uVar15 = (ulonglong)(uVar14 + 1);
            uVar17 = uVar17 + 0x10;
          } while ((int)(uVar14 + 1) < (pTVar2->InvocationList).ArrayNum);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)pTVar2);
      }
    } while (**(char **)this == '\0');
  }
  return;
}

// operator() @ 141bf31a0

void __thiscall
`UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::__l3::<lambda_2>::operator()
          (void *this)

{
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  cVar6 = **(char **)this;
  while( true ) {
    if (cVar6 != '\0') {
      return;
    }
    this_00 = *(TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> **)((longlong)this + 8);
    if ((this_00 == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) break;
    EnterCriticalSection((LPCRITICAL_SECTION)this_00);
    this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
    bVar4 = false;
    uVar8 = (this_00->InvocationList).ArrayNum - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 << 4;
      bVar4 = false;
      do {
        uVar7 = 0;
        if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
        if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
            (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
          bVar4 = true;
        }
        lVar9 = lVar9 + -0x10;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
    if (bVar4) {
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
    cVar6 = **(char **)this;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// TestBody @ 141c299c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody
          (FMulticastTSDelegateStressTest *this,FString *param_1)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  int iVar3;
  atomic<unsigned_int> aVar4;
  undefined8 *puVar5;
  FTaskBase *pFVar6;
  undefined1 *puVar7;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> this_00;
  FTaskBase *this_01;
  longlong lVar8;
  undefined1 auStackY_d8 [32];
  undefined1 local_98 [8];
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_90;
  FTaskHandle local_80;
  FTaskBase *local_78;
  undefined1 local_70 [8];
  _RTL_CRITICAL_SECTION local_68;
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  InitializeCriticalSectionAndSpinCount(&local_68,4000);
  this_01 = (FTaskBase *)0x0;
  local_38 = ___xmm_00000000000000020000000000000000;
  uStack_30 = _UNK_150631d48;
  local_40 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
  local_98[0] = 0;
  pFVar6 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  lVar8 = 2;
  this_00.Reference = this_01;
  if (pFVar6 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::FTaskBase(pFVar6,2,true);
    pFVar6->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::`3'::<lambda_1>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (pFVar6,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp(465)"
               ,Default,None,None);
    pFVar6[1]._padding_ = (longlong)local_98;
    pFVar6[1]._padding_ = (longlong)&local_68;
    pFVar6->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::`3'::<lambda_1>_>
          ::_vftable_;
    this_00.Reference = pFVar6;
  }
  Tasks::Private::FTaskBase::TryLaunch(this_00.Reference,0x100);
  pFVar6 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  if (pFVar6 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::FTaskBase(pFVar6,2,true);
    pFVar6->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::`3'::<lambda_2>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (pFVar6,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp(476)"
               ,Default,None,None);
    pFVar6[1]._padding_ = (longlong)local_98;
    pFVar6[1]._padding_ = (longlong)&local_68;
    pFVar6->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::`3'::<lambda_2>_>
          ::_vftable_;
    this_01 = pFVar6;
  }
  Tasks::Private::FTaskBase::TryLaunch(this_01,0x100);
  FWindowsPlatformProcess::Sleep(__real_3f800000);
  LOCK();
  local_98[0] = 1;
  UNLOCK();
  if (this_00.Reference != (FTaskBase *)0x0) {
    LOCK();
    (this_00.Reference)->RefCount = (atomic<unsigned_int>)((int)(this_00.Reference)->RefCount + 1);
    UNLOCK();
  }
  if (this_01 != (FTaskBase *)0x0) {
    LOCK();
    this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
    UNLOCK();
  }
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 2;
  local_80.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)this_00.Reference;
  local_78 = this_01;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&local_90.AllocatorInstance,2,&local_90.ArrayMax);
  ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
            (local_90.AllocatorInstance.Data,&local_80,2);
  Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
            (&local_90,(FTimespan)0x7fffffffffffffff);
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)local_90.AllocatorInstance.Data,local_90.ArrayNum);
  if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
  puVar7 = local_70;
  do {
    puVar5 = *(undefined8 **)(puVar7 + -8);
    puVar7 = puVar7 + -8;
    lVar8 = lVar8 + -1;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar5 + 6);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  } while (lVar8 != 0);
  if (this_01 != (FTaskBase *)0x0) {
    LOCK();
    paVar2 = &this_01->RefCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_01->_padding_)(this_01,1);
    }
  }
  if (this_00.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar2 = &(this_00.Reference)->RefCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)(this_00.Reference)->_padding_)(this_00.Reference,1);
    }
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>(local_40,(int)local_38);
  if (local_40 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_40);
  }
  DeleteCriticalSection(&local_68);
  return;
}

