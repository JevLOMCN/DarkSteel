// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cb8900

EAutomationTestFlags __thiscall FTVariantDestructorTest::GetTestFlags(FTVariantDestructorTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cb8910

bool __thiscall FTVariantDestructorTest::IsStressTest(FTVariantDestructorTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cb8920

uint __thiscall FTVariantDestructorTest::GetRequiredDeviceNum(FTVariantDestructorTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cb8930

FString * __thiscall
FTVariantDestructorTest::GetTestSourceFileName
          (FTVariantDestructorTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cb8960

int __thiscall FTVariantDestructorTest::GetTestSourceFileLine(FTVariantDestructorTest *this)

{
  return 0x198;
}

// GetTests @ 141cb8970

/* WARNING: Removing unreachable block (ram,0x000141cb8aee) */

void __thiscall
FTVariantDestructorTest::GetTests
          (FTVariantDestructorTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cb8b10

bool __thiscall FTVariantDestructorTest::RunTest(FTVariantDestructorTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cb8b40

FString * __thiscall
FTVariantDestructorTest::GetBeautifiedTestName
          (FTVariantDestructorTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTVariantDestructorTest @ 141cee1f0

FTVariantDestructorTest * __thiscall
FTVariantDestructorTest::FTVariantDestructorTest(FTVariantDestructorTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTVariantDestructorTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::TVariant::Destructor");
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

// TestBody @ 141d4c870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FTVariantDestructorTest::TestBody(FTVariantDestructorTest *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined1 auStack_88 [32];
  int local_68 [2];
  TReferenceControllerBase<1> *local_60;
  TReferenceControllerBase<1> *pTStack_58;
  byte local_50;
  undefined8 *local_48;
  byte local_40;
  TReferenceControllerBase<1> *local_38;
  TReferenceControllerBase<1> *local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  local_68[0] = 0;
  plVar3 = ::operator_new(8);
  if (plVar3 == (longlong *)0x0) {
    local_40 = 0;
    local_48 = (undefined8 *)0x0;
    uVar4 = 0;
  }
  else {
    *plVar3 = (longlong)local_68;
    local_40 = 0;
    local_48 = (undefined8 *)0x0;
    *(int *)*plVar3 = *(int *)*plVar3 + 1;
    ::operator_delete(plVar3,8);
    uVar4 = (ulonglong)local_40;
  }
  if (uVar4 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&PTR_Destruct_150795c00)[uVar4] ==
      UE::Core::Private::
      TDestructorCaller<TUniquePtr<`FTVariantDestructorTest::TestBody'::__l2::FTestItem,TDefaultDelete<`FTVariantDestructorTest::TestBody'::__l2::FTestItem>_>_>
      ::Destruct) {
    if (local_48 != (undefined8 *)0x0) {
      *(int *)*local_48 = *(int *)*local_48 + 1;
      ::operator_delete(local_48,8);
    }
  }
  else {
    (*(code *)(&PTR_Destruct_150795c00)[uVar4])(&local_48);
  }
  if (local_68[0] != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DestructorCallCount == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                       ,0x1aa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_68[0] = 0;
  pTStack_58 = ::operator_new(0x18);
  if (pTStack_58 == (TReferenceControllerBase<1> *)0x0) {
    local_60 = ___xmm_00000000000000000000000000000010;
    pTStack_58 = _UNK_150651568;
  }
  else {
    pTStack_58->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_58->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_58->_padding_ =
         (longlong)
         &SharedPointerInternals::
          TIntrusiveReferenceController<`FTVariantDestructorTest::TestBody'::`2'::FTestItem,1>::
          _vftable_;
    pTStack_58[1]._padding_ = (longlong)local_68;
    if (pTStack_58 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTStack_58->SharedReferenceCount = (atomic<int>)((int)pTStack_58->SharedReferenceCount + 1);
    UNLOCK();
    pTVar5 = pTStack_58;
    local_60 = pTStack_58 + 1;
  }
  local_50 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  local_28 = local_50;
  uVar4 = (ulonglong)local_50;
  if (local_50 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&PTR_Construct_150795c08)[uVar4] ==
      UE::Core::Private::
      TMoveConstructorCaller<TSharedPtr<`FTVariantDestructorTest::TestBody'::__l2::FTestItem,1>_>::
      Construct) {
    local_38 = local_60;
    local_30 = pTStack_58;
    pTStack_58 = (TReferenceControllerBase<1> *)0x0;
    local_60 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (*(code *)(&PTR_Construct_150795c08)[uVar4])(&local_38,&local_60);
  }
  uVar4 = (ulonglong)local_28;
  if (uVar4 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&PTR_Destruct_150795c10)[uVar4] ==
      UE::Core::Private::
      TDestructorCaller<TSharedPtr<`FTVariantDestructorTest::TestBody'::__l2::FTestItem,1>_>::
      Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  else {
    (*(code *)(&PTR_Destruct_150795c10)[uVar4])(&local_38);
  }
  uVar4 = (ulonglong)local_50;
  if (uVar4 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&PTR_Destruct_150795c10)[uVar4] ==
      UE::Core::Private::
      TDestructorCaller<TSharedPtr<`FTVariantDestructorTest::TestBody'::__l2::FTestItem,1>_>::
      Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_58);
  }
  else {
    (*(code *)(&PTR_Destruct_150795c10)[uVar4])(&local_60);
  }
  if (local_68[0] != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DestructorCallCount == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                       ,0x1b1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

