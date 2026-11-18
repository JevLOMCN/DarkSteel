// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// GetTestFlags @ 141bcc910

EAutomationTestFlags __thiscall
UE::TSDelegatesTest::FTSMulticastDelegateStressTest::GetTestFlags
          (FTSMulticastDelegateStressTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bcc920

bool __thiscall
UE::TSDelegatesTest::FTSMulticastDelegateStressTest::IsStressTest
          (FTSMulticastDelegateStressTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bcc930

uint __thiscall
UE::TSDelegatesTest::FTSMulticastDelegateStressTest::GetRequiredDeviceNum
          (FTSMulticastDelegateStressTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bcc940

FString * __thiscall
UE::TSDelegatesTest::FTSMulticastDelegateStressTest::GetTestSourceFileName
          (FTSMulticastDelegateStressTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bcc970

int __thiscall
UE::TSDelegatesTest::FTSMulticastDelegateStressTest::GetTestSourceFileLine
          (FTSMulticastDelegateStressTest *this)

{
  return 0x180;
}

// GetTests @ 141bcc980

/* WARNING: Removing unreachable block (ram,0x000141bccafe) */

void __thiscall
UE::TSDelegatesTest::FTSMulticastDelegateStressTest::GetTests
          (FTSMulticastDelegateStressTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
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

// RunTest @ 141bccb50

bool __thiscall
UE::TSDelegatesTest::FTSMulticastDelegateStressTest::RunTest
          (FTSMulticastDelegateStressTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bccbb0

FString * __thiscall
UE::TSDelegatesTest::FTSMulticastDelegateStressTest::GetBeautifiedTestName
          (FTSMulticastDelegateStressTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTSMulticastDelegateStressTest @ 141be9590

FTSMulticastDelegateStressTest * __thiscall
UE::TSDelegatesTest::FTSMulticastDelegateStressTest::FTSMulticastDelegateStressTest
          (FTSMulticastDelegateStressTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTSMulticastDelegateStressTest_TSDelegatesTest_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Delegates::MulticastStress");
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

// operator() @ 141bf39d0

void __thiscall
`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l19::<lambda_7>::operator()
          (void *this)

{
  longlong *plVar1;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  plVar1 = *(longlong **)((longlong)this + 8);
  this_00 = *(TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> **)
             this;
  if (*plVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0xc6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((FTaskBase *)*plVar1 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)*plVar1);
  }
  lVar2 = *plVar1;
  if (*(char *)(lVar2 + 0xd0) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                       ,0x353,L"The task must be completed to obtain its result");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Remove
            (this_00,(FDelegateHandle)*(ulong64 *)(lVar2 + 0xd8));
  return;
}

// TestBody @ 141c3bf10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody
          (FTSMulticastDelegateStressTest *this,FString *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTaskBase *pFVar6;
  FTaskBase *pFVar7;
  FDelegateHandle FVar8;
  undefined8 uVar9;
  longlong lVar10;
  FTaskBase *this_00;
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *pTVar11;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> this_01;
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *pTVar12;
  FTaskBase **ppFVar13;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1b8;
  undefined1 local_1b7 [3];
  int local_1b4 [3];
  FTaskBase *local_1a8 [1];
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_1a0;
  undefined8 local_190;
  int *local_188;
  int *local_180;
  <lambda_1> local_178;
  FDelegateHandle local_170;
  TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295> local_168;
  FTaskHandle local_160;
  FTaskBase *local_158 [3];
  <lambda_2> local_140;
  <lambda_8> local_138;
  undefined1 local_128 [40];
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *local_100;
  int local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [40];
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *local_c0;
  int local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [40];
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *local_80;
  int local_78;
  undefined8 uStack_70;
  undefined1 local_68 [40];
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *local_40;
  int local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)local_e8,4000);
  local_188 = local_1b4;
  this_00 = (FTaskBase *)0x0;
  _local_b8 = ___xmm_00000000000000020000000000000000;
  uStack_b0 = _UNK_150631d48;
  local_c0 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
  local_1b4[0] = 0;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
  AddLambda<_UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody_::__l3::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
             local_e8,&local_178);
  local_180 = local_1b4;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
  AddLambda<_UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody_::__l3::<lambda_2>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
             local_e8,&local_140);
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)local_e8);
  if ((local_1b4[0] != 3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecRes == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                         ,0x188,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
             local_e8,(FDelegateHandle)local_178.ExecRes);
  local_1b4[0] = 0;
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)local_e8);
  if ((local_1b4[0] != 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecRes == 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                         ,0x18c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>(local_c0,local_b8);
  if (local_c0 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_c0);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)local_e8);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)local_a8,4000);
  _local_78 = ___xmm_00000000000000020000000000000000;
  uStack_70 = _UNK_150631d48;
  local_80 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
  pFVar6 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  this_01.Reference = this_00;
  if (pFVar6 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::FTaskBase(pFVar6,2,true);
    pFVar6->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`18'::<lambda_3>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (pFVar6,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp(401)"
               ,Default,None,None);
    pFVar6[1]._padding_ = (longlong)local_a8;
    pFVar6->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`18'::<lambda_3>_>
          ::_vftable_;
    this_01.Reference = pFVar6;
  }
  Tasks::Private::FTaskBase::TryLaunch(this_01.Reference,0x100);
  pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  pFVar6 = this_00;
  if (pFVar7 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
    pFVar7->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`18'::<lambda_4>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (pFVar7,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp(405)"
               ,Default,None,None);
    pFVar7[1]._padding_ = (longlong)local_a8;
    pFVar7->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`18'::<lambda_4>_>
          ::_vftable_;
    pFVar6 = pFVar7;
  }
  Tasks::Private::FTaskBase::TryLaunch(pFVar6,0x100);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
  AddLambda<_UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody_::__l18::<lambda_5>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
             local_a8,(<lambda_5> *)&local_170);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
             local_a8,local_170);
  if (this_01.Reference != (FTaskBase *)0x0) {
    LOCK();
    (this_01.Reference)->RefCount = (atomic<unsigned_int>)((int)(this_01.Reference)->RefCount + 1);
    UNLOCK();
  }
  if (pFVar6 != (FTaskBase *)0x0) {
    LOCK();
    pFVar6->RefCount = (atomic<unsigned_int>)((int)pFVar6->RefCount + 1);
    UNLOCK();
  }
  local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.ArrayNum = 2;
  local_160.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)this_01.Reference;
  local_158[0] = pFVar6;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&local_1a0.AllocatorInstance,2,&local_1a0.ArrayMax);
  ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
            (local_1a0.AllocatorInstance.Data,&local_160,2);
  Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
            (&local_1a0,(FTimespan)0x7fffffffffffffff);
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)local_1a0.AllocatorInstance.Data,local_1a0.ArrayNum);
  if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.AllocatorInstance.Data);
  }
  ppFVar13 = local_158 + 1;
  lVar10 = 2;
  do {
    pFVar7 = ppFVar13[0xffffffffffffffff];
    ppFVar13 = ppFVar13 + 0xffffffffffffffff;
    lVar10 = lVar10 + -1;
    if (pFVar7 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar7->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar7->_padding_)(pFVar7,1);
      }
    }
  } while (lVar10 != 0);
  if (pFVar6 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar6->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  if (this_01.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &(this_01.Reference)->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)(this_01.Reference)->_padding_)(this_01.Reference,1);
    }
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>(local_80,local_78);
  if (local_80 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_80);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)local_a8);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)local_68,4000);
  _local_38 = ___xmm_00000000000000020000000000000000;
  uStack_30 = _UNK_150631d48;
  local_40 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
  local_1a8[0] = (FTaskBase *)0x0;
  pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  pFVar6 = this_00;
  if (pFVar7 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
    pFVar7->_padding_ = (longlong)&___7__TTaskWithResult_VFDelegateHandle___Private_Tasks_UE__6B_;
    Tasks::Private::FTaskBase::Init
              (pFVar7,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp(413)"
               ,Default,None,None);
    pFVar7[1]._padding_ = (longlong)local_68;
    pFVar7->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`19'::<lambda_6>_>
          ::_vftable_;
    pFVar6 = pFVar7;
  }
  if (local_1a8[0] != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &local_1a8[0]->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)local_1a8[0]->_padding_)(local_1a8[0],1);
    }
  }
  local_1a8[0] = pFVar6;
  Tasks::Private::FTaskBase::TryLaunch(pFVar6,0x100);
  local_168.Elements[0] = (FTaskBase * [1])(FTaskBase * [1])local_1a8[0];
  pFVar6 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  if (pFVar6 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::FTaskBase(pFVar6,2,true);
    pFVar6->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`19'::<lambda_7>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (pFVar6,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp(417)"
               ,Default,None,None);
    pFVar6[1]._padding_ = (longlong)local_68;
    pFVar6[1]._padding_ = (longlong)local_1a8;
    pFVar6->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`19'::<lambda_7>_>
          ::_vftable_;
    this_00 = pFVar6;
  }
  Tasks::Private::FTaskBase::
  AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>,0>
            (this_00,&local_168,true);
  Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)local_68);
  if (this_00 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::Wait(this_00);
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  if (local_1a8[0] != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &local_1a8[0]->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)local_1a8[0]->_padding_)(local_1a8[0],1);
    }
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>(local_40,local_38);
  if (local_40 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_40);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)local_68);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)local_128,4000);
  local_158[1] = (FTaskBase *)local_128;
  local_158[2] = (FTaskBase *)&local_190;
  local_100 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
  _local_f8 = ___xmm_00000000000000020000000000000000;
  uStack_f0 = _UNK_150631d48;
  local_190 = 0;
  FVar8 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
          AddLambda<_UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody_::__l20::<lambda_8>_>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>
                      *)local_128,&local_138);
  local_190 = *(undefined8 *)FVar8.ID;
  EnterCriticalSection((LPCRITICAL_SECTION)local_128);
  iVar5 = (int)_local_f8;
  pTVar12 = local_100 + iVar5;
  uVar9 = _local_f8;
  pTVar11 = local_100;
  while( true ) {
    if ((int)uVar9 != iVar5) {
      local_1b8 = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_1b8);
      uVar9 = _local_f8;
    }
    if (pTVar11 == pTVar12) {
      LeaveCriticalSection((LPCRITICAL_SECTION)local_128);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Delegate.IsBound()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                         ,0x1ab,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_141c3c569;
    }
    if ((*(int *)&pTVar11->field_0x8 != 0) && (*(longlong *)pTVar11 != 0)) break;
    pTVar11 = pTVar11 + 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)local_128);
LAB_141c3c569:
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)local_128);
  EnterCriticalSection((LPCRITICAL_SECTION)local_128);
  iVar5 = (int)_local_f8;
  pTVar12 = local_100 + iVar5;
  uVar9 = _local_f8;
  pTVar11 = local_100;
  while( true ) {
    if ((int)uVar9 != iVar5) {
      local_1b7[0] = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_1b7);
      uVar9 = _local_f8;
    }
    if (pTVar11 == pTVar12) break;
    if ((*(int *)&pTVar11->field_0x8 != 0) && (*(longlong *)pTVar11 != 0)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)local_128);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Delegate.IsBound()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                         ,0x1ad,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
LAB_141c3c5fa:
      DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>(local_100,local_f8);
      if (local_100 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
        FMemory::Free(local_100);
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)local_128);
      return;
    }
    pTVar11 = pTVar11 + 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)local_128);
  goto LAB_141c3c5fa;
}

