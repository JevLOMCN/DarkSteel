// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// GetTestFlags @ 141cc7610

EAutomationTestFlags __thiscall FTypeContainerTest::GetTestFlags(FTypeContainerTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cc7620

bool __thiscall FTypeContainerTest::IsStressTest(FTypeContainerTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cc7630

uint __thiscall FTypeContainerTest::GetRequiredDeviceNum(FTypeContainerTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cc7640

FString * __thiscall
FTypeContainerTest::GetTestSourceFileName(FTypeContainerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TypeContainerTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cc7670

int __thiscall FTypeContainerTest::GetTestSourceFileLine(FTypeContainerTest *this)

{
  return 0x53;
}

// GetTests @ 141cc7680

/* WARNING: Removing unreachable block (ram,0x000141cc77fe) */

void __thiscall
FTypeContainerTest::GetTests
          (FTypeContainerTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cc7820

bool __thiscall FTypeContainerTest::RunTest(FTypeContainerTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cc7850

FString * __thiscall
FTypeContainerTest::GetBeautifiedTestName(FTypeContainerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 141ccd770

TSharedRef<IFruit,1> * __cdecl
`FTypeContainerTest::TestBody'::__l12::<lambda_3>::<lambda_invoker_cdecl>
          (TSharedRef<IFruit,1> *__return_storage_ptr__)

{
  TRawPtrProxy<FBanana> local_res8 [4];
  
  local_res8[0].Object = ::operator_new(8);
  if (local_res8[0].Object != (FBanana *)0x0) {
    *local_res8[0].Object = (FBanana)&___7FBanana__6B_;
  }
  TSharedRef<IFruit,1>::TSharedRef<IFruit,1><FBanana>(__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// FTypeContainerTest @ 141cf0630

FTypeContainerTest * __thiscall
FTypeContainerTest::FTypeContainerTest(FTypeContainerTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTypeContainerTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::TypeContainer");
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

// operator() @ 141cf5fb0

TTwoSmoothies<1> * __thiscall
`FTypeContainerTest::TestBody'::__l7::<lambda_1>::operator()
          (void *this,TTwoSmoothies<1> *__return_storage_ptr__)

{
  TSharedPtr<ISmoothie<1>,1> *pTVar1;
  TSharedRef<ISmoothie<1>,1> *pTVar2;
  TTwoSmoothies<1> local_48;
  TSharedRef<ISmoothie<1>,1> local_28;
  
  pTVar1 = &__return_storage_ptr__->Two;
  (__return_storage_ptr__->One).Object = (ISmoothie<1> *)0x0;
  (__return_storage_ptr__->One).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar1->Object = (ISmoothie<1> *)0x0;
  (__return_storage_ptr__->Two).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar2 = TTypeContainer<1>::GetInstance<ISmoothie<1>_>(*(TTypeContainer<1> **)this,&local_28);
  local_48.One.SharedReferenceCount.ReferenceController =
       (pTVar2->SharedReferenceCount).ReferenceController;
  local_48.One.Object = pTVar2->Object;
  if (local_48.One.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.One.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.One.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ != &local_48) {
    (__return_storage_ptr__->One).Object = local_48.One.Object;
    local_48.One.Object = (ISmoothie<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->One).SharedReferenceCount,
               &local_48.One.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.One.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  pTVar2 = TTypeContainer<1>::GetInstance<ISmoothie<1>_>(*(TTypeContainer<1> **)this,&local_28);
  local_48.Two.SharedReferenceCount.ReferenceController =
       (pTVar2->SharedReferenceCount).ReferenceController;
  local_48.Two.Object = pTVar2->Object;
  if (local_48.Two.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.Two.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.Two.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != &local_48.Two) {
    pTVar1->Object = local_48.Two.Object;
    local_48.Two.Object = (ISmoothie<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->Two).SharedReferenceCount,
               &local_48.Two.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Two.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// operator() @ 141cf6850

TTwoSmoothies<1> * __thiscall
`FTypeContainerTest::TestBody'::__l9::<lambda_2>::operator()
          (void *this,TTwoSmoothies<1> *__return_storage_ptr__)

{
  TSharedPtr<ISmoothie<1>,1> *pTVar1;
  TSharedRef<ISmoothie<1>,1> *pTVar2;
  TTwoSmoothies<1> local_48;
  TSharedRef<ISmoothie<1>,1> local_28;
  
  pTVar1 = &__return_storage_ptr__->Two;
  (__return_storage_ptr__->One).Object = (ISmoothie<1> *)0x0;
  (__return_storage_ptr__->One).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar1->Object = (ISmoothie<1> *)0x0;
  (__return_storage_ptr__->Two).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar2 = TTypeContainer<1>::GetInstance<ISmoothie<1>_>(*(TTypeContainer<1> **)this,&local_28);
  local_48.One.SharedReferenceCount.ReferenceController =
       (pTVar2->SharedReferenceCount).ReferenceController;
  local_48.One.Object = pTVar2->Object;
  if (local_48.One.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.One.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.One.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ != &local_48) {
    (__return_storage_ptr__->One).Object = local_48.One.Object;
    local_48.One.Object = (ISmoothie<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->One).SharedReferenceCount,
               &local_48.One.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.One.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  pTVar2 = TTypeContainer<1>::GetInstance<ISmoothie<1>_>(*(TTypeContainer<1> **)this,&local_28);
  local_48.Two.SharedReferenceCount.ReferenceController =
       (pTVar2->SharedReferenceCount).ReferenceController;
  local_48.Two.Object = pTVar2->Object;
  if (local_48.Two.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.Two.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.Two.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != &local_48.Two) {
    pTVar1->Object = local_48.Two.Object;
    local_48.Two.Object = (ISmoothie<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->Two).SharedReferenceCount,
               &local_48.Two.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Two.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// TestBody @ 141d50f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FTypeContainerTest::TestBody(FTypeContainerTest *this,FString *param_1)

{
  atomic<unsigned___int64> *paVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  IBerry *pIVar13;
  FSharedReferencer<1> FVar14;
  undefined8 uVar15;
  undefined1 auVar16 [8];
  undefined1 auVar17 [8];
  uint uVar18;
  DWORD DVar19;
  TThreadInstanceProvider<FBanana> *pTVar20;
  FAutomationTestFramework *pFVar21;
  longlong *plVar22;
  longlong *plVar23;
  TThreadInstanceProvider<FBanana> *pTVar24;
  TTwoSmoothies<1> *pTVar25;
  atomic<unsigned___int64> aVar26;
  undefined8 *puVar27;
  ulong64 uVar28;
  undefined ***pppuVar29;
  TThreadInstanceProvider<FBanana> *pTVar30;
  char cVar31;
  TThreadInstanceProvider<FBanana> *pTVar32;
  FMRSWRecursiveAccessDetector FVar33;
  FMRSWRecursiveAccessDetector FVar34;
  undefined1 auStackY_1f8 [32];
  TRawPtrProxy<TTypeContainer<1>::TThreadInstanceProvider<FBanana>_> local_1c8;
  void *local_1c0;
  TReferenceControllerBase<1> *local_1b8;
  bool local_1b0;
  undefined1 *local_1a8;
  TSharedRef<IBerry,1> local_1a0;
  undefined1 local_190 [32];
  TThreadInstanceProvider<FBanana> *local_170;
  TThreadInstanceProvider<FBanana> *local_168;
  TReferenceControllerBase<1> *local_160;
  undefined1 local_158 [8];
  undefined1 local_150 [8];
  undefined **local_148;
  atomic<unsigned___int64> aStack_140;
  code *local_138;
  undefined ***local_130;
  atomic<unsigned___int64> local_128;
  undefined **local_118;
  atomic<unsigned___int64> aStack_110;
  undefined8 local_108;
  undefined ***local_100;
  undefined1 local_f8 [40];
  undefined1 local_d0 [32];
  void *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  void *local_90;
  undefined4 local_88;
  code *local_78 [2];
  undefined **local_68;
  atomic<unsigned___int64> local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar32 = (TThreadInstanceProvider<FBanana> *)0x0;
  local_170 = (TThreadInstanceProvider<FBanana> *)((ulonglong)local_170 & 0xffffffff00000000);
  pTVar20 = ::operator_new(8);
  local_1c8.Object = pTVar32;
  if (pTVar20 != (TThreadInstanceProvider<FBanana> *)0x0) {
    *(undefined ***)pTVar20 = &___7FBanana__6B_;
    local_1c8.Object = pTVar20;
  }
  TSharedRef<IFruit,1>::TSharedRef<IFruit,1><FBanana>
            ((TSharedRef<IFruit,1> *)local_158,(TRawPtrProxy<FBanana> *)&local_1c8);
  pTVar20 = ::operator_new(8);
  local_1c8.Object = pTVar32;
  if (pTVar20 != (TThreadInstanceProvider<FBanana> *)0x0) {
    *(undefined ***)pTVar20 = &___7FStrawberry__6B_;
    local_1c8.Object = pTVar20;
  }
  TSharedRef<IBerry,1>::TSharedRef<IBerry,1><FStrawberry>
            (&local_1a0,(TRawPtrProxy<FStrawberry> *)&local_1c8);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)local_f8,4000);
  uVar12 = _UNK_150631d98;
  uVar11 = ___xmm_00000000ffffffff0000008000000000;
  local_a8 = ___xmm_00000000ffffffff0000008000000000;
  uStack_a0 = _UNK_150631d98;
  local_d0._0_8_ = (FScriptContainerElement *)0x0;
  local_d0._8_8_ = 0;
  local_b0 = (void *)0x0;
  local_90 = (void *)0x0;
  local_88 = 0;
  pTVar20 = ::operator_new(0x18);
  auVar17 = local_150;
  auVar16 = local_158;
  local_1c8.Object = pTVar32;
  if (pTVar20 != (TThreadInstanceProvider<FBanana> *)0x0) {
    *(undefined1 (*) [8])&pTVar20->field_0x8 = local_158;
    *(undefined ***)pTVar20 = &___7__TSharedInstanceProvider_UIFruit_____TTypeContainer__00__6B_;
    *(undefined1 (*) [8])&pTVar20->field_0x10 = local_150;
    local_1c8.Object = pTVar20;
    if (local_150 != (undefined1  [8])0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_150 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)local_150 + 8) + 1);
      UNLOCK();
    }
  }
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1><TTypeContainer<1>::TSharedInstanceProvider<IFruit>_>
            ((TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *)local_190,
             (TRawPtrProxy<TTypeContainer<1>::TSharedInstanceProvider<IFruit>_> *)&local_1c8);
  TTypeContainer<1>::AddProvider
            ((TTypeContainer<1> *)local_f8,L"IFruit",
             (TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *)local_190);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_190._8_8_);
  pTVar20 = ::operator_new(0x18);
  FVar14.ReferenceController = local_1a0.SharedReferenceCount.ReferenceController;
  pIVar13 = local_1a0.Object;
  local_1c8.Object = pTVar32;
  if (pTVar20 != (TThreadInstanceProvider<FBanana> *)0x0) {
    *(IBerry **)&pTVar20->field_0x8 = local_1a0.Object;
    *(undefined ***)pTVar20 = &___7__TSharedInstanceProvider_UIBerry_____TTypeContainer__00__6B_;
    *(TReferenceControllerBase<1> **)&pTVar20->field_0x10 =
         local_1a0.SharedReferenceCount.ReferenceController;
    local_1c8.Object = pTVar20;
    if (local_1a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1><TTypeContainer<1>::TSharedInstanceProvider<IBerry>_>
            ((TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *)local_158,
             (TRawPtrProxy<TTypeContainer<1>::TSharedInstanceProvider<IBerry>_> *)&local_1c8);
  TTypeContainer<1>::AddProvider
            ((TTypeContainer<1> *)local_f8,L"IBerry",
             (TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *)local_158);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_150);
  TTypeContainer<1>::GetInstance<IFruit>
            ((TTypeContainer<1> *)local_f8,(TSharedRef<IFruit,1> *)local_190);
  pFVar21 = FAutomationTestFramework::Get();
  uVar15 = local_190._0_8_;
  if ((undefined1  [8])local_190._0_8_ != auVar16) {
    pFVar2 = pFVar21->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)local_158,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,local_158,0);
    if ((atomic<unsigned___int64>)local_158 != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_158);
    }
  }
  pFVar21 = FAutomationTestFramework::Get();
  pFVar2 = pFVar21->CurrentTest;
  if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((IBerry *)uVar15 == pIVar13) {
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)local_158,L"%s: The two values are equal.");
    (*pcVar3)(pFVar2,local_158,0);
    if ((atomic<unsigned___int64>)local_158 != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_158);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_190._8_8_);
  pTVar20 = (TThreadInstanceProvider<FBanana> *)0x0;
  local_88 = 0;
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_d0,0,local_d0._8_4_);
  iVar8 = SUB84(local_d0._8_8_,4);
  local_d0._8_8_ = local_d0._8_8_ & 0xffffffff00000000;
  if (iVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_d0,0,(int *)(local_d0 + 0xc));
  }
  uVar18 = local_a8._4_4_;
  uStack_a0 = 0xffffffff;
  local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
  if (0x80 < uVar18) {
    local_a8 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d0 + 0x10),0);
  }
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  if ((FScriptContainerElement *)local_d0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d0._0_8_);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)local_f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)auVar17);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)local_f8,4000);
  local_d0._0_8_ = (FScriptContainerElement *)0x0;
  local_d0._8_8_ = 0;
  local_b0 = (void *)0x0;
  local_a8 = uVar11;
  uStack_a0 = uVar12;
  local_90 = (void *)0x0;
  local_88 = 0;
  TTypeContainer<1>::RegisterClass<IFruit,FBanana>((TTypeContainer<1> *)local_f8,Instance);
  TTypeContainer<1>::RegisterClass<IBerry,FStrawberry>((TTypeContainer<1> *)local_f8,Instance);
  TTypeContainer<1>::RegisterClass<ISmoothie<1>,TSmoothie<1>,IFruit,IBerry>
            ((TTypeContainer<1> *)local_f8,Instance);
  TTypeContainer<1>::GetInstance<ISmoothie<1>_>
            ((TTypeContainer<1> *)local_f8,(TSharedRef<ISmoothie<1>,1> *)&local_1a0);
  TTypeContainer<1>::GetInstance<ISmoothie<1>_>
            ((TTypeContainer<1> *)local_f8,(TSharedRef<ISmoothie<1>,1> *)local_190);
  pFVar21 = FAutomationTestFramework::Get();
  uVar15 = local_190._0_8_;
  if (local_1a0.Object == (IBerry *)local_190._0_8_) {
    pFVar2 = pFVar21->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)local_158,L"%s: The two values are equal.");
    (*pcVar3)(pFVar2,local_158,0);
    if ((atomic<unsigned___int64>)local_158 != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_158);
    }
  }
  pFVar21 = FAutomationTestFramework::Get();
  pFVar2 = pFVar21->CurrentTest;
  plVar22 = (longlong *)(**(code **)(*(longlong *)uVar15 + 8))(uVar15,&local_168);
  plVar23 = (longlong *)
            (**(code **)(*(longlong *)local_1a0.Object + 8))(local_1a0.Object,&local_1c0);
  if (*plVar23 == *plVar22) {
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)local_158,L"%s: The two values are equal.");
    (*pcVar3)(pFVar2,local_158,0);
    if ((atomic<unsigned___int64>)local_158 != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_158);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_160);
  pFVar21 = FAutomationTestFramework::Get();
  pFVar2 = pFVar21->CurrentTest;
  plVar22 = (longlong *)(**(code **)(*(longlong *)uVar15 + 0x10))(uVar15,&local_168);
  plVar23 = (longlong *)
            (**(code **)(*(longlong *)local_1a0.Object + 0x10))(local_1a0.Object,&local_1c0);
  if (*plVar23 == *plVar22) {
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)local_158,L"%s: The two values are equal.");
    (*pcVar3)(pFVar2,local_158,0);
    if ((atomic<unsigned___int64>)local_158 != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_158);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_160);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_190._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a0.SharedReferenceCount.ReferenceController);
  local_88 = 0;
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_d0,0,local_d0._8_4_);
  iVar8 = SUB84(local_d0._8_8_,4);
  local_d0._8_8_ = local_d0._8_8_ & 0xffffffff00000000;
  if (iVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_d0,0,(int *)(local_d0 + 0xc));
  }
  uVar18 = local_a8._4_4_;
  uStack_a0 = 0xffffffff;
  local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
  if (0x80 < uVar18) {
    local_a8 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d0 + 0x10),0);
  }
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  if ((FScriptContainerElement *)local_d0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d0._0_8_);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)local_f8);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)local_f8,4000);
  local_d0._0_8_ = (FScriptContainerElement *)0x0;
  local_d0._8_8_ = 0;
  local_1a0.Object = (IBerry *)0x0;
  local_1a0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b0 = (void *)0x0;
  local_a8 = uVar11;
  uStack_a0 = uVar12;
  local_90 = (void *)0x0;
  local_88 = 0;
  pTVar24 = ::operator_new(0x50);
  pTVar30 = pTVar20;
  if (pTVar24 != (TThreadInstanceProvider<FBanana> *)0x0) {
    local_100 = (undefined ***)0x0;
    local_118 = &
                ___7__TFunction_OwnedObject_V<lambda_2>__3____RegisterClass_UIFruit__UFBanana____V___TTypeContainer__00__QEAAXW4ETypeContainerScope___Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    *(undefined ***)pTVar24 = &___7FThreadInstanceProvider___TTypeContainer__00__6B_;
    *(code **)&pTVar24->field_0x10 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TTypeContainer<1>::RegisterClass<IFruit,FBanana>'::__l4::<lambda_2>,TSharedPtr<void,1>_>
         ::Call;
    *(undefined8 *)&pTVar24->field_0x38 = 0;
    *(undefined4 *)&pTVar24->field_0x20 = 0x50795f68;
    *(undefined4 *)&pTVar24->field_0x24 = 1;
    *(undefined1 **)&pTVar24->field_0x28 = local_f8;
    *(undefined8 *)&pTVar24->field_0x30 = local_108;
    local_128 = (atomic<unsigned___int64>)
                UE::Core::Private::Function::
                TFunctionRefCaller<`TTypeContainer<1>::RegisterClass<IFruit,FBanana>'::__l4::<lambda_2>,TSharedPtr<void,1>_>
                ::Call;
    if (*(longlong *)&pTVar24->field_0x10 != 0) {
      local_128 = (atomic<unsigned___int64>)pTVar20;
    }
    aStack_110 = (atomic<unsigned___int64>)local_f8;
    DVar19 = TlsAlloc();
    *(DWORD *)&pTVar24->field_0x40 = DVar19;
    pTVar32 = (TThreadInstanceProvider<FBanana> *)&DAT_00000002;
    *(undefined ***)pTVar24 = &___7__TThreadInstanceProvider_UFBanana_____TTypeContainer__00__6B_;
    pTVar30 = pTVar24;
  }
  local_1c8.Object = pTVar30;
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
  operator=<TTypeContainer<1>::TThreadInstanceProvider<FBanana>_>
            ((TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *)&local_1a0,&local_1c8);
  if ((pTVar32 != (TThreadInstanceProvider<FBanana> *)0x0) &&
     (local_128 != (atomic<unsigned___int64>)0x0)) {
    pppuVar29 = &local_118;
    if (local_100 != (undefined ***)0x0) {
      pppuVar29 = local_100;
    }
    (*(code *)(*pppuVar29)[2])();
  }
  bVar9 = false;
  TTypeContainer<1>::AddProvider
            ((TTypeContainer<1> *)local_f8,L"IFruit",
             (TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *)&local_1a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a0.SharedReferenceCount.ReferenceController);
  TTypeContainer<1>::RegisterClass<IBerry,FStrawberry>((TTypeContainer<1> *)local_f8,Instance);
  local_1a0.Object = (IBerry *)0x0;
  local_1a0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar32 = ::operator_new(0x50);
  if (pTVar32 != (TThreadInstanceProvider<FBanana> *)0x0) {
    local_100 = (undefined ***)0x0;
    local_118 = &
                ___7__TFunction_OwnedObject_V<lambda_2>__3____RegisterClass_U__ISmoothie__00__U__TSmoothie__00__UIFruit__UIBerry_____TTypeContainer__00__QEAAXW4ETypeContainerScope___Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    bVar9 = true;
    *(undefined ***)pTVar32 = &___7FThreadInstanceProvider___TTypeContainer__00__6B_;
    *(code **)&pTVar32->field_0x10 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TTypeContainer<1>::RegisterClass<ISmoothie<1>,TSmoothie<1>,IFruit,IBerry>'::__l4::<lambda_2>,TSharedPtr<void,1>_>
         ::Call;
    *(undefined8 *)&pTVar32->field_0x38 = 0;
    *(undefined4 *)&pTVar32->field_0x20 = 0x50795fe8;
    *(undefined4 *)&pTVar32->field_0x24 = 1;
    *(undefined1 **)&pTVar32->field_0x28 = local_f8;
    *(undefined8 *)&pTVar32->field_0x30 = local_108;
    local_128 = (atomic<unsigned___int64>)
                UE::Core::Private::Function::
                TFunctionRefCaller<`TTypeContainer<1>::RegisterClass<ISmoothie<1>,TSmoothie<1>,IFruit,IBerry>'::__l4::<lambda_2>,TSharedPtr<void,1>_>
                ::Call;
    if (*(longlong *)&pTVar32->field_0x10 != 0) {
      local_128 = (atomic<unsigned___int64>)pTVar20;
    }
    aStack_110 = (atomic<unsigned___int64>)local_f8;
    DVar19 = TlsAlloc();
    *(DWORD *)&pTVar32->field_0x40 = DVar19;
    *(undefined ***)pTVar32 =
         &___7__TThreadInstanceProvider_U__TSmoothie__00_____TTypeContainer__00__6B_;
    pTVar20 = pTVar32;
  }
  local_1c8.Object = pTVar20;
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
  operator=<TTypeContainer<1>::TThreadInstanceProvider<TSmoothie<1>_>_>
            ((TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *)&local_1a0,
             (TRawPtrProxy<TTypeContainer<1>::TThreadInstanceProvider<TSmoothie<1>_>_> *)&local_1c8)
  ;
  if ((bVar9) && (local_128 != (atomic<unsigned___int64>)0x0)) {
    pppuVar29 = &local_118;
    if (local_100 != (undefined ***)0x0) {
      pppuVar29 = local_100;
    }
    (*(code *)(*pppuVar29)[2])();
  }
  bVar9 = false;
  TTypeContainer<1>::AddProvider
            ((TTypeContainer<1> *)local_f8,L"ISmoothie<>",
             (TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *)&local_1a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a0.SharedReferenceCount.ReferenceController);
  local_50 = (undefined ***)0x0;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTypeContainerTest::TestBody'::`7'::<lambda_1>,0,0>::_vftable_;
  local_128 = (atomic<unsigned___int64>)0x0;
  local_100 = (undefined ***)0x0;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FTypeContainerTest::TestBody'::__l7::<lambda_1>,TTwoSmoothies<1>_>
                ::Call;
  local_60 = (atomic<unsigned___int64>)local_f8;
  Async<TFunction<TTwoSmoothies<1>___cdecl(void)>_&>
            ((TFuture<TTwoSmoothies<1>_> *)local_158,Thread,
             (TFunction<TTwoSmoothies<1>___cdecl(void)> *)local_78,
             (TUniqueFunction<void___cdecl(void)> *)&local_128);
  local_128 = (atomic<unsigned___int64>)0x0;
  local_100 = (undefined ***)0x0;
  Async<TFunction<TTwoSmoothies<1>___cdecl(void)>_&>
            ((TFuture<TTwoSmoothies<1>_> *)local_190,Thread,
             (TFunction<TTwoSmoothies<1>___cdecl(void)> *)local_78,
             (TUniqueFunction<void___cdecl(void)> *)&local_128);
  pTVar25 = TFutureBase<TTwoSmoothies<1>_>::Get((TFutureBase<TTwoSmoothies<1>_> *)local_158);
  pTVar4 = (pTVar25->One).SharedReferenceCount.ReferenceController;
  pTVar20 = (TThreadInstanceProvider<FBanana> *)(pTVar25->One).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_168 = pTVar20;
  pTVar25 = TFutureBase<TTwoSmoothies<1>_>::Get((TFutureBase<TTwoSmoothies<1>_> *)local_158);
  pTVar5 = (pTVar25->Two).SharedReferenceCount.ReferenceController;
  pTVar32 = (TThreadInstanceProvider<FBanana> *)(pTVar25->Two).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1a0.Object = (IBerry *)pTVar32;
  pTVar25 = TFutureBase<TTwoSmoothies<1>_>::Get((TFutureBase<TTwoSmoothies<1>_> *)local_190);
  pTVar6 = (pTVar25->One).SharedReferenceCount.ReferenceController;
  local_170 = (TThreadInstanceProvider<FBanana> *)(pTVar25->One).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar25 = TFutureBase<TTwoSmoothies<1>_>::Get((TFutureBase<TTwoSmoothies<1>_> *)local_190);
  pTVar7 = (pTVar25->Two).SharedReferenceCount.ReferenceController;
  local_1c8.Object = (TThreadInstanceProvider<FBanana> *)(pTVar25->Two).Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar21 = FAutomationTestFramework::Get();
  if (pTVar20 != pTVar32) {
    pFVar2 = pFVar21->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_1c0,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,&local_1c0,0);
    if (local_1c0 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0);
    }
  }
  pFVar21 = FAutomationTestFramework::Get();
  if (local_170 != local_1c8.Object) {
    pFVar2 = pFVar21->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_1c0,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,&local_1c0,0);
    if (local_1c0 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0);
    }
  }
  pFVar21 = FAutomationTestFramework::Get();
  if (local_168 == local_170) {
    pFVar2 = pFVar21->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_1c0,L"%s: The two values are equal.");
    (*pcVar3)(pFVar2,&local_1c0,0);
    if (local_1c0 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0);
    }
  }
  pFVar21 = FAutomationTestFramework::Get();
  if ((TThreadInstanceProvider<FBanana> *)local_1a0.Object == local_1c8.Object) {
    pFVar2 = pFVar21->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_1c0,L"%s: The two values are equal.");
    (*pcVar3)(pFVar2,&local_1c0,0);
    if (local_1c0 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_190._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_150);
  if (local_78[0] != (code *)0x0) {
    pppuVar29 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar29 = local_50;
    }
    (*(code *)(*pppuVar29)[2])();
  }
  local_88 = 0;
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_d0,0,local_d0._8_4_);
  iVar8 = SUB84(local_d0._8_8_,4);
  local_d0._8_8_ = local_d0._8_8_ & 0xffffffff00000000;
  if (iVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_d0,0,(int *)(local_d0 + 0xc));
  }
  uVar18 = local_a8._4_4_;
  uStack_a0 = 0xffffffff;
  local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
  if (0x80 < uVar18) {
    local_a8 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d0 + 0x10),0);
  }
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  if ((FScriptContainerElement *)local_d0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d0._0_8_);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)local_f8);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)local_f8,4000);
  local_d0._0_8_ = (FScriptContainerElement *)0x0;
  local_d0._8_8_ = 0;
  local_b0 = (void *)0x0;
  local_a8 = uVar11;
  uStack_a0 = uVar12;
  local_90 = (void *)0x0;
  local_88 = 0;
  TTypeContainer<1>::RegisterClass<IFruit,FBanana>((TTypeContainer<1> *)local_f8,Thread);
  TTypeContainer<1>::RegisterClass<IBerry,FStrawberry>((TTypeContainer<1> *)local_f8,Instance);
  TTypeContainer<1>::RegisterClass<ISmoothie<1>,TSmoothie<1>,IFruit,IBerry>
            ((TTypeContainer<1> *)local_f8,Process);
  local_50 = (undefined ***)0x0;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTypeContainerTest::TestBody'::`9'::<lambda_2>,0,0>::_vftable_;
  local_128 = (atomic<unsigned___int64>)0x0;
  local_100 = (undefined ***)0x0;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FTypeContainerTest::TestBody'::__l9::<lambda_2>,TTwoSmoothies<1>_>
                ::Call;
  local_60 = (atomic<unsigned___int64>)local_f8;
  Async<TFunction<TTwoSmoothies<1>___cdecl(void)>_&>
            ((TFuture<TTwoSmoothies<1>_> *)local_190,Thread,
             (TFunction<TTwoSmoothies<1>___cdecl(void)> *)local_78,
             (TUniqueFunction<void___cdecl(void)> *)&local_128);
  local_128 = (atomic<unsigned___int64>)0x0;
  local_100 = (undefined ***)0x0;
  Async<TFunction<TTwoSmoothies<1>___cdecl(void)>_&>
            ((TFuture<TTwoSmoothies<1>_> *)local_158,Thread,
             (TFunction<TTwoSmoothies<1>___cdecl(void)> *)local_78,
             (TUniqueFunction<void___cdecl(void)> *)&local_128);
  pTVar25 = TFutureBase<TTwoSmoothies<1>_>::Get((TFutureBase<TTwoSmoothies<1>_> *)local_190);
  pTVar20 = (TThreadInstanceProvider<FBanana> *)(pTVar25->One).Object;
  local_170 = (TThreadInstanceProvider<FBanana> *)
              (pTVar25->One).SharedReferenceCount.ReferenceController;
  if (local_170 != (TThreadInstanceProvider<FBanana> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_170)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_170)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1a0.Object = (IBerry *)pTVar20;
  pTVar25 = TFutureBase<TTwoSmoothies<1>_>::Get((TFutureBase<TTwoSmoothies<1>_> *)local_190);
  pTVar4 = (pTVar25->Two).SharedReferenceCount.ReferenceController;
  pTVar32 = (TThreadInstanceProvider<FBanana> *)(pTVar25->Two).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_168 = pTVar32;
  pTVar25 = TFutureBase<TTwoSmoothies<1>_>::Get((TFutureBase<TTwoSmoothies<1>_> *)local_158);
  pTVar5 = (pTVar25->One).SharedReferenceCount.ReferenceController;
  pTVar30 = (TThreadInstanceProvider<FBanana> *)(pTVar25->One).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar25 = TFutureBase<TTwoSmoothies<1>_>::Get((TFutureBase<TTwoSmoothies<1>_> *)local_158);
  pTVar6 = (pTVar25->Two).SharedReferenceCount.ReferenceController;
  local_1c8.Object = (TThreadInstanceProvider<FBanana> *)(pTVar25->Two).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar21 = FAutomationTestFramework::Get();
  if (pTVar20 != pTVar32) {
    pFVar2 = pFVar21->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_1c0,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,&local_1c0,0);
    if (local_1c0 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0);
    }
  }
  pFVar21 = FAutomationTestFramework::Get();
  if (pTVar30 != local_1c8.Object) {
    pFVar2 = pFVar21->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_1c0,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,&local_1c0,0);
    if (local_1c0 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0);
    }
  }
  pFVar21 = FAutomationTestFramework::Get();
  if ((TThreadInstanceProvider<FBanana> *)local_1a0.Object != pTVar30) {
    pFVar2 = pFVar21->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_1c0,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,&local_1c0,0);
    if (local_1c0 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0);
    }
  }
  pFVar21 = FAutomationTestFramework::Get();
  if (local_168 != local_1c8.Object) {
    pFVar2 = pFVar21->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_1c0,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,&local_1c0,0);
    if (local_1c0 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_170);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_150);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_190._8_8_);
  if (local_78[0] != (code *)0x0) {
    pppuVar29 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar29 = local_50;
    }
    (*(code *)(*pppuVar29)[2])();
  }
  FVar34.State = (atomic<unsigned___int64>)0x0;
  local_88 = 0;
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d0);
  DeleteCriticalSection((LPCRITICAL_SECTION)local_f8);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)local_f8,4000);
  local_d0._0_8_ = (FScriptContainerElement *)0x0;
  local_d0._8_8_ = 0;
  local_b0 = (void *)0x0;
  local_a8 = uVar11;
  uStack_a0 = uVar12;
  local_90 = (void *)0x0;
  local_88 = 0;
  aVar26 = (atomic<unsigned___int64>)::operator_new(0x40);
  local_1a0.Object = (IBerry *)FVar34.State;
  if (aVar26 != (atomic<unsigned___int64>)0x0) {
    local_130 = (undefined ***)0x0;
    local_148 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1____RegisterFactory_UIBerry____V___TTypeContainer__00__QEAAXP6A_AV__TSharedRef_UIBerry___00__XZ_Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    bVar9 = true;
    local_138 = `FTypeContainerTest::TestBody'::__l11::FLocal::MakeStrawberry;
    *(undefined ***)aVar26 = &___7__TFunctionInstanceProvider_UIBerry_____TTypeContainer__00__6B_;
    *(code **)((longlong)aVar26 + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TTypeContainer<1>::RegisterFactory<IBerry>'::__l2::<lambda_1>,TSharedPtr<void,1>_>
         ::Call;
    *(undefined8 *)((longlong)aVar26 + 0x38) = 0;
    *(undefined ***)((longlong)aVar26 + 0x20) =
         &
         ___7__TFunction_OwnedObject_V<lambda_1>__1____RegisterFactory_UIBerry____V___TTypeContainer__00__QEAAXP6A_AV__TSharedRef_UIBerry___00__XZ_Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    *(undefined1 **)((longlong)aVar26 + 0x28) = local_f8;
    *(code **)((longlong)aVar26 + 0x30) =
         `FTypeContainerTest::TestBody'::__l11::FLocal::MakeStrawberry;
    local_1a0.Object = (IBerry *)aVar26;
    local_158 = (undefined1  [8])
                UE::Core::Private::Function::
                TFunctionRefCaller<`TTypeContainer<1>::RegisterFactory<IBerry>'::__l2::<lambda_1>,TSharedPtr<void,1>_>
                ::Call;
    aStack_140 = (atomic<unsigned___int64>)local_f8;
    if (*(void **)((longlong)aVar26 + 0x10) != (void *)0x0) {
      local_158 = (undefined1  [8])FVar34.State;
    }
  }
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1><TTypeContainer<1>::TFunctionInstanceProvider<IBerry>_>
            ((TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *)&local_1c0,
             (TRawPtrProxy<TTypeContainer<1>::TFunctionInstanceProvider<IBerry>_> *)&local_1a0);
  if ((bVar9) && ((atomic<unsigned___int64>)local_158 != (atomic<unsigned___int64>)0x0)) {
    pppuVar29 = &local_148;
    if (local_130 != (undefined ***)0x0) {
      pppuVar29 = local_130;
    }
    (*(code *)(*pppuVar29)[2])();
  }
  cVar31 = '\0';
  TTypeContainer<1>::AddProvider
            ((TTypeContainer<1> *)local_f8,L"IBerry",
             (TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *)&local_1c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b8);
  local_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_P6A_AV__TSharedRef_UIFruit___00__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_60 = (atomic<unsigned___int64>)
             `FTypeContainerTest::TestBody'::__l12::<lambda_3>::<lambda_invoker_cdecl>;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TSharedRef<IFruit,1>_(__cdecl*)(void),TSharedRef<IFruit,1>_>::
                Call;
  TTypeContainer<1>::RegisterFactory<IFruit>
            ((TTypeContainer<1> *)local_f8,(TFunction<TSharedRef<IFruit,1>___cdecl(void)> *)local_78
            );
  if (local_78[0] != (code *)0x0) {
    pppuVar29 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar29 = local_50;
    }
    (*(code *)(*pppuVar29)[2])();
  }
  aVar26 = (atomic<unsigned___int64>)::operator_new(0x40);
  local_1a0.Object = (IBerry *)FVar34.State;
  if (aVar26 != (atomic<unsigned___int64>)0x0) {
    local_130 = (undefined ***)0x0;
    local_148 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1____RegisterFactory_U__ISmoothie__00__UIFruit__UIBerry_____TTypeContainer__00__QEAAXP6A_AV__TSharedRef_U__ISmoothie__00___00__V__TSharedRef_UIFruit___00__V__TSharedRef_UIBerry___00___Z_Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    cVar31 = -0x80;
    local_138 = `FTypeContainerTest::TestBody'::__l11::FLocal::MakeSmoothie;
    *(undefined ***)aVar26 =
         &___7__TFunctionInstanceProvider_U__ISmoothie__00_____TTypeContainer__00__6B_;
    *(code **)((longlong)aVar26 + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TTypeContainer<1>::RegisterFactory<ISmoothie<1>,IFruit,IBerry>'::__l2::<lambda_1>,TSharedPtr<void,1>_>
         ::Call;
    *(undefined8 *)((longlong)aVar26 + 0x38) = 0;
    *(undefined ***)((longlong)aVar26 + 0x20) =
         &
         ___7__TFunction_OwnedObject_V<lambda_1>__1____RegisterFactory_U__ISmoothie__00__UIFruit__UIBerry_____TTypeContainer__00__QEAAXP6A_AV__TSharedRef_U__ISmoothie__00___00__V__TSharedRef_UIFruit___00__V__TSharedRef_UIBerry___00___Z_Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    *(undefined1 **)((longlong)aVar26 + 0x28) = local_f8;
    *(code **)((longlong)aVar26 + 0x30) =
         `FTypeContainerTest::TestBody'::__l11::FLocal::MakeSmoothie;
    local_1a0.Object = (IBerry *)aVar26;
    local_158 = (undefined1  [8])
                UE::Core::Private::Function::
                TFunctionRefCaller<`TTypeContainer<1>::RegisterFactory<ISmoothie<1>,IFruit,IBerry>'::__l2::<lambda_1>,TSharedPtr<void,1>_>
                ::Call;
    aStack_140 = (atomic<unsigned___int64>)local_f8;
    if (*(void **)((longlong)aVar26 + 0x10) != (void *)0x0) {
      local_158 = (undefined1  [8])FVar34.State;
    }
  }
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1><TTypeContainer<1>::TFunctionInstanceProvider<ISmoothie<1>_>_>
            ((TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *)&local_1c0,
             (TRawPtrProxy<TTypeContainer<1>::TFunctionInstanceProvider<ISmoothie<1>_>_> *)
             &local_1a0);
  if ((cVar31 < '\0') && ((atomic<unsigned___int64>)local_158 != (atomic<unsigned___int64>)0x0)) {
    pppuVar29 = &local_148;
    if (local_130 != (undefined ***)0x0) {
      pppuVar29 = local_130;
    }
    (*(code *)(*pppuVar29)[2])();
  }
  bVar10 = false;
  bVar9 = false;
  TTypeContainer<1>::AddProvider
            ((TTypeContainer<1> *)local_f8,L"ISmoothie<>",
             (TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *)&local_1c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b8);
  TTypeContainer<1>::GetInstance<IBerry>
            ((TTypeContainer<1> *)local_f8,(TSharedRef<IBerry,1> *)local_190);
  TTypeContainer<1>::GetInstance<IFruit>
            ((TTypeContainer<1> *)local_f8,(TSharedRef<IFruit,1> *)local_158);
  TTypeContainer<1>::GetInstance<ISmoothie<1>_>
            ((TTypeContainer<1> *)local_f8,(TSharedRef<ISmoothie<1>,1> *)&local_1c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_150);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_190._8_8_);
  local_88 = 0;
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d0);
  DeleteCriticalSection((LPCRITICAL_SECTION)local_f8);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)local_f8,4000);
  local_d0._0_8_ = (FScriptContainerElement *)0x0;
  local_d0._8_8_ = 0;
  local_b0 = (void *)0x0;
  local_a8 = uVar11;
  uStack_a0 = uVar12;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_158 = (undefined1  [8])0x0;
  local_150 = (undefined1  [8])0x0;
  local_148 = (undefined **)((ulonglong)local_148 & 0xffffffff00000000);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158,
             (FWriteAccessScope *)&local_1c0);
  local_1a8 = local_150;
  puVar27 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_150);
  if (puVar27 != (undefined8 *)0x0) {
    *puVar27 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_UIBerry___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar27[2] = uVar28;
    *puVar27 = &
               ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_UIBerry___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar27[3] = `FTypeContainerTest::TestBody'::__l13::FLocal::MakeBerry;
  }
  if (local_1b0 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1b8,(FDestructionSentinel *)&local_1c0);
  }
  aVar26 = (atomic<unsigned___int64>)::operator_new(0x40);
  FVar33.State = FVar34.State;
  if (aVar26 != (atomic<unsigned___int64>)0x0) {
    local_190._0_8_ = local_f8;
    TDelegate<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
               (local_190 + 8),
               (TDelegate<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy> *)local_158
              );
    local_128 = (atomic<unsigned___int64>)0x0;
    local_100 = FMemory::Malloc(0x28,8);
    paVar1 = (atomic<unsigned___int64> *)(local_100 + 1);
    *local_100 = &
                 ___7__TFunction_OwnedObject_V<lambda_1>__1____RegisterDelegate_UIBerry__V__TDelegate___A6A_AV__TSharedRef_UIBerry___00__XZUFDefaultDelegateUserPolicy______V___TTypeContainer__00__QEAAXV__TDelegate___A6A_AV__TSharedRef_UIBerry___00__XZUFDefaultDelegateUserPolicy_____Z__0A__00_Function_Private_Core_UE__6B_
    ;
    *paVar1 = (atomic<unsigned___int64>)local_190._0_8_;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_100 + 2),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)(local_190 + 8));
    if (paVar1 != (atomic<unsigned___int64> *)0x0) {
      local_128 = (atomic<unsigned___int64>)
                  UE::Core::Private::Function::
                  TFunctionRefCaller<`TTypeContainer<1>::RegisterDelegate<IBerry,TDelegate<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l2::<lambda_1>,TSharedPtr<void,1>_>
                  ::Call;
    }
    bVar10 = true;
    bVar9 = true;
    *(undefined ***)aVar26 = &___7__TFunctionInstanceProvider_UIBerry_____TTypeContainer__00__6B_;
    *(atomic<unsigned___int64> *)((longlong)aVar26 + 0x10) = local_128;
    *(undefined ****)((longlong)aVar26 + 0x38) = local_100;
    local_100 = (undefined ***)0x0;
    *(undefined ***)((longlong)aVar26 + 0x20) = local_118;
    *(atomic<unsigned___int64> *)((longlong)aVar26 + 0x28) = aStack_110;
    *(undefined8 *)((longlong)aVar26 + 0x30) = local_108;
    FVar33.State = aVar26;
    if (*(void **)((longlong)aVar26 + 0x10) != (void *)0x0) {
      local_128 = FVar34.State;
    }
  }
  local_1a0.Object = (IBerry *)FVar33.State;
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1><TTypeContainer<1>::TFunctionInstanceProvider<IBerry>_>
            ((TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *)&local_1c0,
             (TRawPtrProxy<TTypeContainer<1>::TFunctionInstanceProvider<IBerry>_> *)&local_1a0);
  if ((bVar9) && (local_128 != (atomic<unsigned___int64>)0x0)) {
    pppuVar29 = &local_118;
    if (local_100 != (undefined ***)0x0) {
      pppuVar29 = local_100;
    }
    (*(code *)(*pppuVar29)[2])();
  }
  if (bVar10) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_190 + 8));
  }
  bVar10 = false;
  bVar9 = false;
  TTypeContainer<1>::AddProvider
            ((TTypeContainer<1> *)local_f8,L"IBerry",
             (TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *)&local_1c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_158);
  local_158 = (undefined1  [8])0x0;
  local_150 = (undefined1  [8])0x0;
  local_148 = (undefined **)((ulonglong)local_148 & 0xffffffff00000000);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158,
             (FWriteAccessScope *)&local_1c0);
  local_1a8 = local_150;
  puVar27 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_150);
  if (puVar27 != (undefined8 *)0x0) {
    *puVar27 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_UIFruit___00__XZUFDefaultDelegateUserPolicy___N__6B_
    ;
    *(undefined1 *)(puVar27 + 1) = 1;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar27[2] = uVar28;
    *puVar27 = &
               ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_UIFruit___00__XZUFDefaultDelegateUserPolicy___N__6B_
    ;
    puVar27[3] = `FTypeContainerTest::TestBody'::__l13::FLocal::MakeFruit;
  }
  if (local_1b0 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1b8,(FDestructionSentinel *)&local_1c0);
  }
  aVar26 = (atomic<unsigned___int64>)::operator_new(0x40);
  FVar33.State = FVar34.State;
  if (aVar26 != (atomic<unsigned___int64>)0x0) {
    local_190._0_8_ = local_f8;
    TDelegate<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
               (local_190 + 8),
               (TDelegate<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy> *)local_158
              );
    local_128 = (atomic<unsigned___int64>)0x0;
    local_100 = FMemory::Malloc(0x28,8);
    paVar1 = (atomic<unsigned___int64> *)(local_100 + 1);
    *local_100 = &
                 ___7__TFunction_OwnedObject_V<lambda_1>__1____RegisterDelegate_UIFruit__V__TDelegate___A6A_AV__TSharedRef_UIFruit___00__XZUFDefaultDelegateUserPolicy______V___TTypeContainer__00__QEAAXV__TDelegate___A6A_AV__TSharedRef_UIFruit___00__XZUFDefaultDelegateUserPolicy_____Z__0A__00_Function_Private_Core_UE__6B_
    ;
    *paVar1 = (atomic<unsigned___int64>)local_190._0_8_;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_100 + 2),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)(local_190 + 8));
    if (paVar1 != (atomic<unsigned___int64> *)0x0) {
      local_128 = (atomic<unsigned___int64>)
                  UE::Core::Private::Function::
                  TFunctionRefCaller<`TTypeContainer<1>::RegisterDelegate<IFruit,TDelegate<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l2::<lambda_1>,TSharedPtr<void,1>_>
                  ::Call;
    }
    bVar10 = true;
    bVar9 = true;
    *(undefined ***)aVar26 = &___7__TFunctionInstanceProvider_UIFruit_____TTypeContainer__00__6B_;
    *(atomic<unsigned___int64> *)((longlong)aVar26 + 0x10) = local_128;
    *(undefined ****)((longlong)aVar26 + 0x38) = local_100;
    local_100 = (undefined ***)0x0;
    *(undefined ***)((longlong)aVar26 + 0x20) = local_118;
    *(atomic<unsigned___int64> *)((longlong)aVar26 + 0x28) = aStack_110;
    *(undefined8 *)((longlong)aVar26 + 0x30) = local_108;
    FVar33.State = aVar26;
    if (*(void **)((longlong)aVar26 + 0x10) != (void *)0x0) {
      local_128 = FVar34.State;
    }
  }
  local_1a0.Object = (IBerry *)FVar33.State;
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1><TTypeContainer<1>::TFunctionInstanceProvider<IFruit>_>
            ((TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *)&local_1c0,
             (TRawPtrProxy<TTypeContainer<1>::TFunctionInstanceProvider<IFruit>_> *)&local_1a0);
  if ((bVar9) && (local_128 != (atomic<unsigned___int64>)0x0)) {
    pppuVar29 = &local_118;
    if (local_100 != (undefined ***)0x0) {
      pppuVar29 = local_100;
    }
    (*(code *)(*pppuVar29)[2])();
  }
  if (bVar10) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_190 + 8));
  }
  bVar10 = false;
  bVar9 = false;
  TTypeContainer<1>::AddProvider
            ((TTypeContainer<1> *)local_f8,L"IFruit",
             (TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *)&local_1c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_158);
  local_158 = (undefined1  [8])0x0;
  local_150 = (undefined1  [8])0x0;
  local_148 = (undefined **)((ulonglong)local_148 & 0xffffffff00000000);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158,
             (FWriteAccessScope *)&local_1c0);
  local_1a8 = local_150;
  puVar27 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_150);
  if (puVar27 != (undefined8 *)0x0) {
    *puVar27 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_U__ISmoothie__00___00__V__TSharedRef_UIFruit___00__V__TSharedRef_UIBerry___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar27[2] = uVar28;
    *puVar27 = &
               ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_U__ISmoothie__00___00__V__TSharedRef_UIFruit___00__V__TSharedRef_UIBerry___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar27[3] = `FTypeContainerTest::TestBody'::__l13::FLocal::MakeSmoothie;
  }
  if (local_1b0 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1b8,(FDestructionSentinel *)&local_1c0);
  }
  aVar26 = (atomic<unsigned___int64>)::operator_new(0x40);
  FVar33.State = FVar34.State;
  if (aVar26 != (atomic<unsigned___int64>)0x0) {
    local_190._0_8_ = local_f8;
    TDelegate<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
    ::
    TDelegate<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
              ((TDelegate<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
                *)(local_190 + 8),
               (TDelegate<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
                *)local_158);
    local_128 = (atomic<unsigned___int64>)0x0;
    local_100 = FMemory::Malloc(0x28,8);
    paVar1 = (atomic<unsigned___int64> *)(local_100 + 1);
    *local_100 = &
                 ___7__TFunction_OwnedObject_V<lambda_1>__1____RegisterDelegate_U__ISmoothie__00__V__TDelegate___A6A_AV__TSharedRef_U__ISmoothie__00___00__V__TSharedRef_UIFruit___00__V__TSharedRef_UIBerry___00___ZUFDefaultDelegateUserPolicy____UIFruit__UIBerry_____TTypeContainer__00__QEAAXV__TDelegate___A6A_AV__TSharedRef_U__ISmoothie__00___00__V__TSharedRef_UIFruit___00__V__TSharedRef_UIBerry___00___ZUFDefaultDelegateUserPolicy_____Z__0A__00_Function_Private_Core_UE__6B_
    ;
    *paVar1 = (atomic<unsigned___int64>)local_190._0_8_;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_100 + 2),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)(local_190 + 8));
    if (paVar1 != (atomic<unsigned___int64> *)0x0) {
      local_128 = (atomic<unsigned___int64>)
                  UE::Core::Private::Function::
                  TFunctionRefCaller<`TTypeContainer<1>::RegisterDelegate<ISmoothie<1>,TDelegate<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>,IFruit,IBerry>'::__l2::<lambda_1>,TSharedPtr<void,1>_>
                  ::Call;
    }
    bVar10 = true;
    bVar9 = true;
    *(undefined ***)aVar26 =
         &___7__TFunctionInstanceProvider_U__ISmoothie__00_____TTypeContainer__00__6B_;
    *(atomic<unsigned___int64> *)((longlong)aVar26 + 0x10) = local_128;
    *(undefined ****)((longlong)aVar26 + 0x38) = local_100;
    local_100 = (undefined ***)0x0;
    *(undefined ***)((longlong)aVar26 + 0x20) = local_118;
    *(atomic<unsigned___int64> *)((longlong)aVar26 + 0x28) = aStack_110;
    *(undefined8 *)((longlong)aVar26 + 0x30) = local_108;
    FVar33.State = aVar26;
    if (*(void **)((longlong)aVar26 + 0x10) != (void *)0x0) {
      local_128 = FVar34.State;
    }
  }
  local_1a0.Object = (IBerry *)FVar33.State;
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1><TTypeContainer<1>::TFunctionInstanceProvider<ISmoothie<1>_>_>
            ((TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *)&local_1c0,
             (TRawPtrProxy<TTypeContainer<1>::TFunctionInstanceProvider<ISmoothie<1>_>_> *)
             &local_1a0);
  if ((bVar9) && (local_128 != (atomic<unsigned___int64>)0x0)) {
    pppuVar29 = &local_118;
    if (local_100 != (undefined ***)0x0) {
      pppuVar29 = local_100;
    }
    (*(code *)(*pppuVar29)[2])();
  }
  if (bVar10) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_190 + 8));
  }
  TTypeContainer<1>::AddProvider
            ((TTypeContainer<1> *)local_f8,L"ISmoothie<>",
             (TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *)&local_1c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_158);
  TTypeContainer<1>::GetInstance<IFruit>
            ((TTypeContainer<1> *)local_f8,(TSharedRef<IFruit,1> *)local_158);
  TTypeContainer<1>::GetInstance<ISmoothie<1>_>
            ((TTypeContainer<1> *)local_f8,(TSharedRef<ISmoothie<1>,1> *)&local_1c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_150);
  local_88 = 0;
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d0);
  DeleteCriticalSection((LPCRITICAL_SECTION)local_f8);
  return;
}

