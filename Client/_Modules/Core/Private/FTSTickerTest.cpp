// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// GetTestFlags @ 141bcaa20

EAutomationTestFlags __thiscall FTSTickerTest::GetTestFlags(FTSTickerTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bcaa30

bool __thiscall FTSTickerTest::IsStressTest(FTSTickerTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bcaa40

uint __thiscall FTSTickerTest::GetRequiredDeviceNum(FTSTickerTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bcaa50

FString * __thiscall
FTSTickerTest::GetTestSourceFileName(FTSTickerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bcaa80

int __thiscall FTSTickerTest::GetTestSourceFileLine(FTSTickerTest *this)

{
  return 0x25;
}

// GetTests @ 141bcaa90

/* WARNING: Removing unreachable block (ram,0x000141bcac0e) */

void __thiscall
FTSTickerTest::GetTests
          (FTSTickerTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bcac30

bool __thiscall FTSTickerTest::RunTest(FTSTickerTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bcac60

FString * __thiscall
FTSTickerTest::GetBeautifiedTestName(FTSTickerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 141bce810

bool __cdecl `FTSTickerTest::TestBody'::__l49::<lambda_7>::<lambda_invoker_cdecl>(float param_1)

{
  return true;
}

// FTSTickerTest @ 141be9760

FTSTickerTest * __thiscall FTSTickerTest::FTSTickerTest(FTSTickerTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTSTickerTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::TSTicker");
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

// operator() @ 141bed840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall `FTSTickerTest::TestBody'::__l60::<lambda_10>::operator()(void *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  char cVar5;
  FElement *pFVar6;
  FWeakReferencer<1> FVar7;
  FTaskBase *this_00;
  undefined ***pppuVar8;
  undefined1 auStackY_a8 [32];
  TWeakPtr<FTSTicker::FElement,1> local_78;
  code *local_68 [2];
  undefined **local_58;
  code *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  cVar5 = **(char **)((longlong)this + 8);
  while (cVar5 == '\0') {
    local_40 = (undefined ***)0x0;
    local_58 = &___7__TFunction_OwnedObject_P6A_NM_Z_00_0A__Function_Private_Core_UE__6B_;
    local_50 = ``FTSTickerTest::TestBody'::__l60::<lambda_10>::operator()'::__l4::<lambda_1>::
               <lambda_invoker_cdecl>;
    local_68[0] = UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(float),bool,float>
                  ::Call;
    FTSTicker::AddTicker
              (*(FTSTicker **)this,&local_78,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp(172)"
               ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_68);
    if (local_68[0] != (code *)0x0) {
      pppuVar8 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar8 = local_40;
      }
      (*(code *)(*pppuVar8)[2])();
    }
    FVar7.ReferenceController = local_78.WeakReferenceCount.ReferenceController;
    pFVar6 = local_78.Object;
    local_78.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_78.Object = (FElement *)0x0;
    this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    if (this_00 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
      if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &(FVar7.ReferenceController)->WeakReferenceCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)((FVar7.ReferenceController)->_padding_ + 8))(FVar7.ReferenceController,1);
        }
      }
    }
    else {
      UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTaskBase<``FTSTickerTest::TestBody'::`60'::<lambda_10>::operator()'::`4'::<lambda_2>,void,void>
            ::_vftable_;
      UE::Tasks::Private::FTaskBase::Init
                (this_00,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp(179)"
                 ,Default,None,None);
      this_00[1]._padding_ = (longlong)pFVar6;
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTask<``FTSTickerTest::TestBody'::`60'::<lambda_10>::operator()'::`4'::<lambda_2>_>
            ::_vftable_;
      this_00[1]._padding_ = (longlong)FVar7.ReferenceController;
      UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
      UE::Tasks::Private::FTaskBase::Wait(this_00);
      LOCK();
      paVar1 = &this_00->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_00->_padding_)(this_00,1);
      }
    }
    if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_78.WeakReferenceCount.ReferenceController,1);
      }
    }
    cVar5 = **(char **)((longlong)this + 8);
  }
  return;
}

// operator() @ 141bf3a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall `FTSTickerTest::TestBody'::__l50::<lambda_8>::operator()(void *this,float param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined ***pppuVar3;
  undefined1 auStackY_88 [32];
  TWeakPtr<FTSTicker::FElement,1> local_58;
  code *local_48 [2];
  undefined **local_38 [3];
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  local_20 = (undefined ***)0x0;
  local_38[0] = &UE::Core::Private::Function::
                 TFunction_OwnedObject<``FTSTickerTest::TestBody'::`50'::<lambda_8>::operator()'::`2'::<lambda_1>,1,0>
                 ::_vftable_;
  local_38[1] = *(undefined ***)((longlong)this + 8);
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FTSTickerTest::TestBody'::__l50::<lambda_8>::operator()'::__l2::<lambda_1>,bool,float>
                ::Call;
  FTSTicker::AddTicker
            (*(FTSTicker **)this,&local_58,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp(132)"
             ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_48);
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_58.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_48[0] != (code *)0x0) {
    pppuVar3 = local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar3 = local_20;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  return false;
}

// TestBody @ 141c3c660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTSTickerTest::TestBody(FTSTickerTest *this,FString *param_1)

{
  atomic<int> *paVar1;
  atomic<unsigned_int> *paVar2;
  int *piVar3;
  atomic<bool> aVar4;
  atomic<int> aVar5;
  atomic<unsigned_int> aVar6;
  atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*> aVar7;
  FWeakReferencer<1> FVar8;
  undefined8 *puVar9;
  code *pcVar10;
  double dVar11;
  atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*> aVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  FWeakReferencer<1> FVar15;
  bool bVar16;
  int iVar17;
  FTaskBase *pFVar18;
  FTaskBase *this_00;
  longlong lVar19;
  TWeakPtr<FTSTicker::FElement,1> *pTVar20;
  undefined ***pppuVar21;
  FTaskBase *pFVar22;
  uint uVar23;
  FTaskBase *pFVar24;
  longlong lVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStackY_478 [32];
  undefined1 local_428;
  char local_427;
  char local_426 [6];
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_420;
  FTaskBase *local_410;
  int local_408 [2];
  FTaskBase *local_400;
  FTaskBase *local_3f8;
  TWeakPtr<FTSTicker::FElement,1> local_3f0;
  FTSTicker local_3e0;
  FTSTicker local_3b8;
  undefined8 *local_390;
  undefined8 *local_388;
  undefined8 local_380;
  TSharedPtr<FTSTicker::FElement,1> *local_378;
  undefined8 local_370;
  FTSTicker local_368;
  FTSTicker local_340;
  FTSTicker local_318;
  FTSTicker local_2f0;
  LARGE_INTEGER local_2c8;
  LARGE_INTEGER local_2c0;
  LARGE_INTEGER local_2b8;
  LARGE_INTEGER local_2b0;
  LARGE_INTEGER local_2a8;
  LARGE_INTEGER local_2a0;
  TWeakPtr<FTSTicker::FElement,1> local_298;
  TWeakPtr<FTSTicker::FElement,1> local_288;
  TWeakPtr<FTSTicker::FElement,1> local_278;
  LARGE_INTEGER local_268;
  FTaskBase *local_260;
  LARGE_INTEGER local_258;
  FTaskBase *local_250;
  LARGE_INTEGER local_248;
  FTaskBase *local_240;
  LARGE_INTEGER local_238;
  FTaskBase *local_230;
  TWeakPtr<FTSTicker::FElement,1> local_228;
  TWeakPtr<FTSTicker::FElement,1> local_218;
  TWeakPtr<FTSTicker::FElement,1> local_208;
  TWeakPtr<FTSTicker::FElement,1> local_1f8;
  TWeakPtr<FTSTicker::FElement,1> local_1e8;
  TWeakPtr<FTSTicker::FElement,1> local_1d8;
  TWeakPtr<FTSTicker::FElement,1> local_1c8;
  code *local_1b8 [2];
  undefined **local_1a8;
  FTSTicker *local_1a0;
  char *local_198;
  undefined ***local_190;
  code *local_188 [2];
  undefined **local_178;
  char *local_170;
  undefined ***local_160;
  code *local_158 [2];
  undefined **local_148;
  int *local_140;
  undefined ***local_130;
  code *local_128 [2];
  undefined **local_118;
  FTaskBase **local_110;
  undefined ***local_100;
  code *local_f8 [2];
  undefined **local_e8;
  TWeakPtr<FTSTicker::FElement,1> *local_e0;
  undefined ***local_d0;
  code *local_c8 [2];
  undefined **local_b8;
  code *local_b0;
  undefined ***local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_478;
  local_340.AddedElements.Head =
       (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)0x0;
  local_340.AddedElements.Head =
       (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
       FMemory::Malloc(0x18,8);
  pFVar24 = (FTaskBase *)0x0;
  local_160 = (undefined ***)0x0;
  *(undefined8 *)local_340.AddedElements.Head = 0;
  local_178 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FTSTickerTest::TestBody'::`3'::<lambda_1>,1,0>::_vftable_;
  local_170 = &local_427;
  local_188[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FTSTickerTest::TestBody'::__l3::<lambda_1>,bool,float>::Call;
  local_340.CurrentTime = (atomic<double>)0x0;
  local_340.Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_340.Elements.ArrayNum = 0;
  local_340.Elements.ArrayMax = 0;
  local_427 = '\0';
  local_340.AddedElements.Tail = (FNode *)local_340.AddedElements.Head;
  FTSTicker::AddTicker
            (&local_340,&local_288,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp(42)"
             ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_188);
  if (local_188[0] != (code *)0x0) {
    pppuVar21 = &local_178;
    if (local_160 != (undefined ***)0x0) {
      pppuVar21 = local_160;
    }
    (*(code *)(*pppuVar21)[2])();
  }
  FTSTicker::Tick(&local_340,0.0);
  FTSTicker::Tick(&local_340,0.0);
  if ((local_427 == '\0') &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("bExecuted",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp"
                          ,0x34,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_1c8.Object = local_288.Object;
  local_1c8.WeakReferenceCount.ReferenceController =
       local_288.WeakReferenceCount.ReferenceController;
  if (local_288.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_288.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_288.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_1c8);
  if (local_288.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_288.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar5 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar5 == (atomic<int>)0x1) {
      (**(code **)((local_288.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_288.WeakReferenceCount.ReferenceController,1);
    }
  }
  DestructItems<TSharedPtr<FTSTicker::FElement,1>,int>
            ((TSharedPtr<FTSTicker::FElement,1> *)local_340.Elements.AllocatorInstance.Data,
             local_340.Elements.ArrayNum);
  if ((TSharedPtr<FTSTicker::FElement,1> *)local_340.Elements.AllocatorInstance.Data !=
      (TSharedPtr<FTSTicker::FElement,1> *)0x0) {
    FMemory::Free(local_340.Elements.AllocatorInstance.Data);
  }
  TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::
  ~TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>(&local_340.AddedElements);
  local_318.AddedElements.Head =
       (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)0x0;
  local_318.AddedElements.Head =
       (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
       FMemory::Malloc(0x18,8);
  local_130 = (undefined ***)0x0;
  *(undefined8 *)local_318.AddedElements.Head = 0;
  local_148 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FTSTickerTest::TestBody'::`11'::<lambda_2>,1,0>::_vftable_;
  local_140 = local_408;
  local_158[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FTSTickerTest::TestBody'::__l11::<lambda_2>,bool,float>::Call;
  local_318.CurrentTime = (atomic<double>)0x0;
  local_318.Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_318.Elements.ArrayNum = 0;
  local_318.Elements.ArrayMax = 0;
  local_408[0] = 0;
  local_318.AddedElements.Tail = (FNode *)local_318.AddedElements.Head;
  FTSTicker::AddTicker
            (&local_318,&local_278,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp(59)"
             ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_158);
  if (local_158[0] != (code *)0x0) {
    pppuVar21 = &local_148;
    if (local_130 != (undefined ***)0x0) {
      pppuVar21 = local_130;
    }
    (*(code *)(*pppuVar21)[2])();
  }
  FTSTicker::Tick(&local_318,0.0);
  FTSTicker::Tick(&local_318,0.0);
  if ((local_408[0] != 2) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumExecuted == 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp"
                          ,0x44,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_218.Object = local_278.Object;
  local_218.WeakReferenceCount.ReferenceController =
       local_278.WeakReferenceCount.ReferenceController;
  if (local_278.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_278.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_278.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_218);
  if (local_278.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_278.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar5 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar5 == (atomic<int>)0x1) {
      (**(code **)((local_278.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_278.WeakReferenceCount.ReferenceController,1);
    }
  }
  DestructItems<TSharedPtr<FTSTicker::FElement,1>,int>
            ((TSharedPtr<FTSTicker::FElement,1> *)local_318.Elements.AllocatorInstance.Data,
             local_318.Elements.ArrayNum);
  if ((TSharedPtr<FTSTicker::FElement,1> *)local_318.Elements.AllocatorInstance.Data !=
      (TSharedPtr<FTSTicker::FElement,1> *)0x0) {
    FMemory::Free(local_318.Elements.AllocatorInstance.Data);
  }
  TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::
  ~TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>(&local_318.AddedElements);
  local_3e0.AddedElements.Head =
       (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)0x0;
  local_3e0.AddedElements.Head =
       (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
       FMemory::Malloc(0x18,8);
  *(undefined8 *)local_3e0.AddedElements.Head = 0;
  local_3e0.CurrentTime = (atomic<double>)0x0;
  local_3e0.Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3e0.Elements.ArrayNum = 0;
  local_3e0.Elements.ArrayMax = 0;
  local_3e0.AddedElements.Tail = (FNode *)local_3e0.AddedElements.Head;
  local_3f8 = (FTaskBase *)
              UE::Tasks::Private::FTaskEventBase::Create
                        (
                        L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp(77)"
                        );
  local_100 = (undefined ***)0x0;
  local_118 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FTSTickerTest::TestBody'::`19'::<lambda_3>,1,0>::_vftable_;
  local_110 = &local_3f8;
  local_128[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FTSTickerTest::TestBody'::__l19::<lambda_3>,bool,float>::Call;
  FTSTicker::AddTicker
            (&local_3e0,&local_228,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp(78)"
             ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_128);
  if (local_128[0] != (code *)0x0) {
    pppuVar21 = &local_118;
    if (local_100 != (undefined ***)0x0) {
      pppuVar21 = local_100;
    }
    (*(code *)(*pppuVar21)[2])();
  }
  pFVar18 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  pFVar22 = pFVar24;
  if (pFVar18 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar18,2,true);
    pFVar18->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`FTSTickerTest::TestBody'::`19'::<lambda_4>,void,void>::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              (pFVar18,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp(86)"
               ,Default,None,None);
    pFVar18[1]._padding_ = (longlong)&local_3e0;
    pFVar18[1]._padding_ = (longlong)&local_228;
    pFVar18->_padding_ =
         (longlong)
         &UE::Tasks::Private::TExecutableTask<`FTSTickerTest::TestBody'::`19'::<lambda_4>_>::
          _vftable_;
    pFVar22 = pFVar18;
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(pFVar22,0x100);
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  pFVar18 = pFVar24;
  if (this_00 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`FTSTickerTest::TestBody'::`19'::<lambda_5>,void,void>::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              (this_00,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp(94)"
               ,Default,None,None);
    this_00[1]._padding_ = (longlong)&local_3e0;
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::TExecutableTask<`FTSTickerTest::TestBody'::`19'::<lambda_5>_>::
          _vftable_;
    pFVar18 = this_00;
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(pFVar18,0x100);
  FWindowsPlatformProcess::Sleep(__real_3dcccccd);
  dVar11 = __real_43e0000000000000;
  dVar27 = __real_3e7ad7f29abcaf48;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = __real_412e848100000000;
  auVar28 = roundpd(auVar28,auVar28,1);
  lVar25 = (longlong)auVar28._0_8_;
  if (pFVar18 == (FTaskBase *)0x0) {
LAB_141c3cc18:
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("!TickTask.Wait(FTimespan::FromSeconds(0.1))",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp"
                        ,0x67,L"");
    if (bVar16) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else {
    QueryPerformanceCounter(&local_2c8);
    if (lVar25 == 0x7fffffffffffffff) {
      local_260 = (FTaskBase *)0xffffffffffffffff;
    }
    else {
      local_260 = pFVar24;
      if (0.0 < (double)lVar25 * dVar27) {
        dVar26 = ((double)lVar25 * dVar27) / FGenericPlatformTime::SecondsPerCycle64;
        lVar19 = 0;
        if ((dVar11 <= dVar26) && (dVar26 = dVar26 - dVar11, dVar26 < dVar11)) {
          lVar19 = -0x8000000000000000;
        }
        local_260 = (FTaskBase *)((longlong)dVar26 + lVar19);
      }
    }
    local_268 = local_2c8;
    bVar16 = UE::Tasks::Private::FTaskBase::Wait(pFVar18,(FTimeout *)&local_268.s);
    if (bVar16) goto LAB_141c3cc18;
  }
  if (pFVar22 != (FTaskBase *)0x0) {
    QueryPerformanceCounter(&local_2c0);
    if (lVar25 == 0x7fffffffffffffff) {
      local_250 = (FTaskBase *)0xffffffffffffffff;
    }
    else {
      local_250 = pFVar24;
      if (0.0 < (double)lVar25 * dVar27) {
        dVar26 = ((double)lVar25 * dVar27) / FGenericPlatformTime::SecondsPerCycle64;
        lVar19 = 0;
        if ((dVar11 <= dVar26) && (dVar26 = dVar26 - dVar11, dVar26 < dVar11)) {
          lVar19 = -0x8000000000000000;
        }
        local_250 = (FTaskBase *)((longlong)dVar26 + lVar19);
      }
    }
    local_258 = local_2c0;
    bVar16 = UE::Tasks::Private::FTaskBase::Wait(pFVar22,(FTimeout *)&local_258.s);
    if (!bVar16) goto LAB_141c3ccde;
  }
  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                     ("!RemoveTickerTask.Wait(FTimespan::FromSeconds(0.1))",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp"
                      ,0x68,L"");
  if (bVar16) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_141c3ccde:
  if ((local_3f8 != (FTaskBase *)0x0) && ((local_3f8->Subsequents).bIsClosed == (atomic<bool>)0x0))
  {
    LOCK();
    aVar4 = local_3f8->TaskTriggered;
    local_3f8->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar4 == (atomic<bool>)0x0) {
      LOCK();
      local_3f8->RefCount = (atomic<unsigned_int>)((int)local_3f8->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(local_3f8,0xd8);
    }
  }
  if (pFVar18 != (FTaskBase *)0x0) {
    QueryPerformanceCounter(&local_2b8);
    if (lVar25 == 0x7fffffffffffffff) {
      local_240 = (FTaskBase *)0xffffffffffffffff;
    }
    else {
      local_240 = pFVar24;
      if (0.0 < (double)lVar25 * dVar27) {
        dVar26 = ((double)lVar25 * dVar27) / FGenericPlatformTime::SecondsPerCycle64;
        lVar19 = 0;
        if ((dVar11 <= dVar26) && (dVar26 = dVar26 - dVar11, dVar26 < dVar11)) {
          lVar19 = -0x8000000000000000;
        }
        local_240 = (FTaskBase *)((longlong)dVar26 + lVar19);
      }
    }
    local_248 = local_2b8;
    bVar16 = UE::Tasks::Private::FTaskBase::Wait(pFVar18,(FTimeout *)&local_248.s);
    if ((!bVar16) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("TickTask.Wait(FTimespan::FromSeconds(0.1))",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp"
                            ,0x6c,L""), bVar16)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (pFVar22 != (FTaskBase *)0x0) {
    QueryPerformanceCounter(&local_2b0);
    if (lVar25 == 0x7fffffffffffffff) {
      local_230 = (FTaskBase *)0xffffffffffffffff;
    }
    else {
      local_230 = pFVar24;
      if (0.0 < (double)lVar25 * dVar27) {
        dVar27 = ((double)lVar25 * dVar27) / FGenericPlatformTime::SecondsPerCycle64;
        lVar25 = 0;
        if ((dVar11 <= dVar27) && (dVar27 = dVar27 - dVar11, dVar27 < dVar11)) {
          lVar25 = -0x8000000000000000;
        }
        local_230 = (FTaskBase *)((longlong)dVar27 + lVar25);
      }
    }
    local_238 = local_2b0;
    bVar16 = UE::Tasks::Private::FTaskBase::Wait(pFVar22,(FTimeout *)&local_238.s);
    if ((!bVar16) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("RemoveTickerTask.Wait(FTimespan::FromSeconds(0.1))",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp"
                            ,0x6d,L""), bVar16)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (pFVar18 != (FTaskBase *)0x0) {
    LOCK();
    paVar2 = &pFVar18->RefCount;
    aVar6 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar6 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar18->_padding_)(pFVar18,1);
    }
  }
  if (pFVar22 != (FTaskBase *)0x0) {
    LOCK();
    paVar2 = &pFVar22->RefCount;
    aVar6 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar6 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar22->_padding_)(pFVar22,1);
    }
  }
  if (local_228.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_228.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar5 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar5 == (atomic<int>)0x1) {
      (**(code **)((local_228.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_228.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_3f8 != (FTaskBase *)0x0) {
    LOCK();
    paVar2 = &local_3f8->RefCount;
    aVar6 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar6 == (atomic<unsigned_int>)0x1) {
      (**(code **)local_3f8->_padding_)(local_3f8,1);
    }
  }
  DestructItems<TSharedPtr<FTSTicker::FElement,1>,int>
            ((TSharedPtr<FTSTicker::FElement,1> *)local_3e0.Elements.AllocatorInstance.Data,
             local_3e0.Elements.ArrayNum);
  if ((TSharedPtr<FTSTicker::FElement,1> *)local_3e0.Elements.AllocatorInstance.Data !=
      (TSharedPtr<FTSTicker::FElement,1> *)0x0) {
    FMemory::Free(local_3e0.Elements.AllocatorInstance.Data);
  }
  aVar7 = (local_3e0.AddedElements.Tail)->Next;
  FMemory::Free(local_3e0.AddedElements.Tail);
  aVar12 = (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
           local_3e0.AddedElements.Tail;
  while (local_3e0.AddedElements.Tail = (FNode *)aVar7,
        (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
        local_3e0.AddedElements.Tail !=
        (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)0x0) {
    aVar7 = (local_3e0.AddedElements.Tail)->Next;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)local_3e0.AddedElements.Tail + 0x10));
    FMemory::Free(local_3e0.AddedElements.Tail);
    aVar12 = (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
             local_3e0.AddedElements.Tail;
  }
  local_3b8.AddedElements.Head =
       (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)0x0;
  local_3e0.AddedElements.Tail = (FNode *)aVar12;
  local_3b8.AddedElements.Head =
       (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
       FMemory::Malloc(0x18,8);
  local_d0 = (undefined ***)0x0;
  *(undefined8 *)local_3b8.AddedElements.Head = 0;
  local_e8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTSTickerTest::TestBody'::`48'::<lambda_6>,1,0>::_vftable_;
  local_e0 = &local_3f0;
  local_f8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FTSTickerTest::TestBody'::__l48::<lambda_6>,bool,float>::Call;
  local_3b8.CurrentTime = (atomic<double>)0x0;
  local_3b8.Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3b8.Elements.ArrayNum = 0;
  local_3b8.Elements.ArrayMax = 0;
  local_3f0.Object = (FElement *)0x0;
  local_3f0.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3b8.AddedElements.Tail = (FNode *)local_3b8.AddedElements.Head;
  pTVar20 = FTSTicker::AddTicker
                      (&local_3b8,&local_208,(wchar_t *)0x0,0.0,
                       (TUniqueFunction<bool___cdecl(float)> *)local_f8);
  FVar15.ReferenceController = local_3f0.WeakReferenceCount.ReferenceController;
  FVar8.ReferenceController = local_3f0.WeakReferenceCount.ReferenceController;
  if (&local_3f0 != pTVar20) {
    local_3f0.Object = pTVar20->Object;
    FVar8.ReferenceController = (pTVar20->WeakReferenceCount).ReferenceController;
    pTVar20->Object = (FElement *)0x0;
    (pTVar20->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (local_3f0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_3f0.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar5 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar5 == (atomic<int>)0x1) {
        plVar13 = &(local_3f0.WeakReferenceCount.ReferenceController)->_padding_;
        local_3f0.WeakReferenceCount.ReferenceController = FVar8.ReferenceController;
        (**(code **)(*plVar13 + 8))(FVar15.ReferenceController,1);
        FVar8.ReferenceController = local_3f0.WeakReferenceCount.ReferenceController;
      }
    }
  }
  local_3f0.WeakReferenceCount.ReferenceController = FVar8.ReferenceController;
  if (local_208.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_208.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar5 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar5 == (atomic<int>)0x1) {
      (**(code **)((local_208.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_208.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_f8[0] != (code *)0x0) {
    pppuVar21 = &local_e8;
    if (local_d0 != (undefined ***)0x0) {
      pppuVar21 = local_d0;
    }
    (*(code *)(*pppuVar21)[2])();
  }
  FTSTicker::Tick(&local_3b8,0.0);
  if (local_3f0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_3f0.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar5 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar5 == (atomic<int>)0x1) {
      (**(code **)((local_3f0.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_3f0.WeakReferenceCount.ReferenceController,1);
    }
  }
  DestructItems<TSharedPtr<FTSTicker::FElement,1>,int>
            ((TSharedPtr<FTSTicker::FElement,1> *)local_3b8.Elements.AllocatorInstance.Data,
             local_3b8.Elements.ArrayNum);
  if ((TSharedPtr<FTSTicker::FElement,1> *)local_3b8.Elements.AllocatorInstance.Data !=
      (TSharedPtr<FTSTicker::FElement,1> *)0x0) {
    FMemory::Free(local_3b8.Elements.AllocatorInstance.Data);
  }
  aVar7 = (local_3b8.AddedElements.Tail)->Next;
  FMemory::Free(local_3b8.AddedElements.Tail);
  aVar12 = (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
           local_3b8.AddedElements.Tail;
  while (local_3b8.AddedElements.Tail = (FNode *)aVar7,
        (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
        local_3b8.AddedElements.Tail !=
        (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)0x0) {
    aVar7 = (local_3b8.AddedElements.Tail)->Next;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)local_3b8.AddedElements.Tail + 0x10));
    FMemory::Free(local_3b8.AddedElements.Tail);
    aVar12 = (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
             local_3b8.AddedElements.Tail;
  }
  local_368.AddedElements.Head =
       (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)0x0;
  local_3b8.AddedElements.Tail = (FNode *)aVar12;
  local_368.AddedElements.Head =
       (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
       FMemory::Malloc(0x18,8);
  local_a0 = (undefined ***)0x0;
  *(undefined8 *)local_368.AddedElements.Head = 0;
  local_b8 = &___7__TFunction_OwnedObject_P6A_NM_Z_00_0A__Function_Private_Core_UE__6B_;
  local_b0 = `FTSTickerTest::TestBody'::__l49::<lambda_7>::<lambda_invoker_cdecl>;
  local_c8[0] = UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(float),bool,float>::
                Call;
  local_368.CurrentTime = (atomic<double>)0x0;
  local_368.Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_368.Elements.ArrayNum = 0;
  local_368.Elements.ArrayMax = 0;
  local_368.AddedElements.Tail = (FNode *)local_368.AddedElements.Head;
  FTSTicker::AddTicker
            (&local_368,&local_298,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp(121)"
             ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_c8);
  if (local_c8[0] != (code *)0x0) {
    pppuVar21 = &local_b8;
    if (local_a0 != (undefined ***)0x0) {
      pppuVar21 = local_a0;
    }
    (*(code *)(*pppuVar21)[2])();
  }
  local_1f8.Object = local_298.Object;
  local_1f8.WeakReferenceCount.ReferenceController =
       local_298.WeakReferenceCount.ReferenceController;
  if (local_298.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_298.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_298.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_1f8);
  local_1e8.Object = local_298.Object;
  local_1e8.WeakReferenceCount.ReferenceController =
       local_298.WeakReferenceCount.ReferenceController;
  if (local_298.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_298.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_298.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_1e8);
  if (local_298.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_298.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar5 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar5 == (atomic<int>)0x1) {
      (**(code **)((local_298.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_298.WeakReferenceCount.ReferenceController,1);
    }
  }
  DestructItems<TSharedPtr<FTSTicker::FElement,1>,int>
            ((TSharedPtr<FTSTicker::FElement,1> *)local_368.Elements.AllocatorInstance.Data,
             local_368.Elements.ArrayNum);
  if ((TSharedPtr<FTSTicker::FElement,1> *)local_368.Elements.AllocatorInstance.Data !=
      (TSharedPtr<FTSTicker::FElement,1> *)0x0) {
    FMemory::Free(local_368.Elements.AllocatorInstance.Data);
  }
  aVar7 = (local_368.AddedElements.Tail)->Next;
  FMemory::Free(local_368.AddedElements.Tail);
  aVar12 = (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
           local_368.AddedElements.Tail;
  while (local_368.AddedElements.Tail = (FNode *)aVar7,
        (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
        local_368.AddedElements.Tail !=
        (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)0x0) {
    aVar7 = (local_368.AddedElements.Tail)->Next;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)local_368.AddedElements.Tail + 0x10));
    FMemory::Free(local_368.AddedElements.Tail);
    aVar12 = (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
             local_368.AddedElements.Tail;
  }
  local_2f0.AddedElements.Head =
       (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)0x0;
  local_368.AddedElements.Tail = (FNode *)aVar12;
  local_2f0.AddedElements.Head =
       (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
       FMemory::Malloc(0x18,8);
  local_190 = (undefined ***)0x0;
  *(undefined8 *)local_2f0.AddedElements.Head = 0;
  local_1a8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FTSTickerTest::TestBody'::`50'::<lambda_8>,1,0>::_vftable_;
  local_1a0 = &local_2f0;
  local_198 = local_426;
  local_1b8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FTSTickerTest::TestBody'::__l50::<lambda_8>,bool,float>::Call;
  local_2f0.CurrentTime = (atomic<double>)0x0;
  local_2f0.Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f0.Elements.ArrayNum = 0;
  local_2f0.Elements.ArrayMax = 0;
  local_426[0] = '\0';
  local_2f0.AddedElements.Tail = (FNode *)local_2f0.AddedElements.Head;
  FTSTicker::AddTicker
            (&local_2f0,&local_1d8,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp(129)"
             ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_1b8);
  if (local_1d8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_1d8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar5 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar5 == (atomic<int>)0x1) {
      (**(code **)((local_1d8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_1d8.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_1b8[0] != (code *)0x0) {
    pppuVar21 = &local_1a8;
    if (local_190 != (undefined ***)0x0) {
      pppuVar21 = local_190;
    }
    (*(code *)(*pppuVar21)[2])();
  }
  FTSTicker::Tick(&local_2f0,0.0);
  if ((local_426[0] == '\0') &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("bTicked",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp"
                          ,0x8f,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  DestructItems<TSharedPtr<FTSTicker::FElement,1>,int>
            ((TSharedPtr<FTSTicker::FElement,1> *)local_2f0.Elements.AllocatorInstance.Data,
             local_2f0.Elements.ArrayNum);
  if ((TSharedPtr<FTSTicker::FElement,1> *)local_2f0.Elements.AllocatorInstance.Data !=
      (TSharedPtr<FTSTicker::FElement,1> *)0x0) {
    FMemory::Free(local_2f0.Elements.AllocatorInstance.Data);
  }
  TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::
  ~TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>(&local_2f0.AddedElements);
  local_390 = (undefined8 *)0x0;
  local_390 = FMemory::Malloc(0x18,8);
  *local_390 = 0;
  local_380 = 0;
  local_378 = (TSharedPtr<FTSTicker::FElement,1> *)0x0;
  local_370 = 0;
  local_428 = 0;
  local_388 = local_390;
  pFVar18 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  pFVar22 = pFVar24;
  if (pFVar18 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar18,2,true);
    pFVar18->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`FTSTickerTest::TestBody'::`58'::<lambda_9>,void,void>::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              (pFVar18,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp(153)"
               ,Default,None,None);
    pFVar18[1]._padding_ = (longlong)&local_390;
    pFVar18[1]._padding_ = (longlong)&local_428;
    pFVar18->_padding_ =
         (longlong)
         &UE::Tasks::Private::TExecutableTask<`FTSTickerTest::TestBody'::`58'::<lambda_9>_>::
          _vftable_;
    pFVar22 = pFVar18;
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(pFVar22,0x100);
  local_420.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_420.ArrayNum = 0;
  local_420.ArrayMax = 0;
  local_400 = pFVar22;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,500,&local_420.AllocatorInstance,0,&local_420.ArrayMax);
  lVar25 = 10;
  do {
    local_410 = (FTaskBase *)0x0;
    pFVar18 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    pFVar22 = pFVar24;
    if (pFVar18 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::FTaskBase(pFVar18,2,true);
      pFVar18->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTaskBase<`FTSTickerTest::TestBody'::`60'::<lambda_10>,void,void>::_vftable_;
      UE::Tasks::Private::FTaskBase::Init
                (pFVar18,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp(167)"
                 ,Default,None,None);
      pFVar18[1]._padding_ = (longlong)&local_390;
      pFVar18[1]._padding_ = (longlong)&local_428;
      pFVar18->_padding_ =
           (longlong)
           &UE::Tasks::Private::TExecutableTask<`FTSTickerTest::TestBody'::`60'::<lambda_10>_>::
            _vftable_;
      pFVar22 = pFVar18;
    }
    pFVar18 = local_410;
    if (local_410 != (FTaskBase *)0x0) {
      local_410 = (FTaskBase *)0x0;
      LOCK();
      piVar3 = (int *)((longlong)pFVar18 + 0x30);
      iVar17 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        (*(code *)**(undefined8 **)pFVar18)(pFVar18,1);
      }
    }
    local_410 = pFVar22;
    UE::Tasks::Private::FTaskBase::TryLaunch(pFVar22,0x100);
    if (((local_420.AllocatorInstance.Data <= (FScriptContainerElement *)&local_410) &&
        ((FScriptContainerElement *)&local_410 <
         local_420.AllocatorInstance.Data + (longlong)local_420.ArrayMax * 8)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar16)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (local_420.ArrayNum == local_420.ArrayMax) {
      local_420.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_420.AllocatorInstance,&local_420.ArrayMax);
    }
    iVar17 = local_420.ArrayNum + 1;
    *(undefined8 *)(local_420.AllocatorInstance.Data + (longlong)local_420.ArrayNum * 8) = 0;
    *(FTaskBase **)(local_420.AllocatorInstance.Data + (longlong)local_420.ArrayNum * 8) = local_410
    ;
    local_410 = (FTaskBase *)0x0;
    lVar25 = lVar25 + -1;
    local_420.ArrayNum = iVar17;
  } while (lVar25 != 0);
  FWindowsPlatformProcess::Sleep(__real_3e99999a);
  LOCK();
  local_428 = 1;
  UNLOCK();
  if (((local_420.AllocatorInstance.Data <= (FScriptContainerElement *)&local_400) &&
      ((FScriptContainerElement *)&local_400 <
       local_420.AllocatorInstance.Data + (longlong)local_420.ArrayMax * 8)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar17 = local_420.ArrayNum;
  if (local_420.ArrayNum == local_420.ArrayMax) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_420.AllocatorInstance,&local_420.ArrayMax);
  }
  local_420.ArrayNum = iVar17 + 1;
  *(undefined8 *)(local_420.AllocatorInstance.Data + (longlong)iVar17 * 8) = 0;
  *(FTaskBase **)(local_420.AllocatorInstance.Data + (longlong)iVar17 * 8) = local_400;
  if (local_400 != (FTaskBase *)0x0) {
    LOCK();
    local_400->RefCount = (atomic<unsigned_int>)((int)local_400->RefCount + 1);
    UNLOCK();
  }
  auVar29._8_8_ = 0;
  auVar29._0_8_ = __real_4187d78404000000;
  auVar28 = roundpd(auVar29,auVar29,1);
  bVar16 = UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
                     (&local_420,(FTimespan)(longlong)auVar28._0_8_);
  if ((!bVar16) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Wait(Tasks, FTimespan::FromSeconds(5))",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp"
                          ,0xc2,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)local_420.AllocatorInstance.Data,local_420.ArrayNum);
  if (local_420.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_420.AllocatorInstance.Data);
  }
  if (local_400 != (FTaskBase *)0x0) {
    LOCK();
    paVar2 = &local_400->RefCount;
    aVar6 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar6 == (atomic<unsigned_int>)0x1) {
      (**(code **)local_400->_padding_)(local_400,1);
    }
  }
  DestructItems<TSharedPtr<FTSTicker::FElement,1>,int>(local_378,(int)local_370);
  if (local_378 != (TSharedPtr<FTSTicker::FElement,1> *)0x0) {
    FMemory::Free(local_378);
  }
  puVar9 = (undefined8 *)*local_388;
  FMemory::Free(local_388);
  puVar14 = local_388;
  while (local_388 = puVar9, local_388 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)*local_388;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_388[2]);
    FMemory::Free(local_388);
    puVar14 = local_388;
  }
  bVar16 = -1 < CpuChannel->Enabled;
  local_388 = puVar14;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId197,L"TSTickerPerfTest<100, 100>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp"
               ,0xc5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId197);
  }
  dVar27 = __real_7fefffffffffffff;
  if (4 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogTemp);
    dVar27 = __real_7fefffffffffffff;
  }
  do {
    QueryPerformanceCounter(&local_2a8);
    dVar11 = (double)local_2a8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    TSTickerPerfTest<100,100>();
    QueryPerformanceCounter(&local_2a0);
    dVar11 = (double)local_2a0.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar11;
    if (4 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                  ::__l14::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    uVar23 = (int)pFVar24 + 1;
    pFVar24 = (FTaskBase *)(ulonglong)uVar23;
    if (dVar27 <= dVar11) {
      dVar11 = dVar27;
    }
    dVar27 = dVar11;
  } while (uVar23 != 5);
  if (4 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

