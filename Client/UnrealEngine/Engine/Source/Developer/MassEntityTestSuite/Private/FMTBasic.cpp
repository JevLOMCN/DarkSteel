// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 5

// operator() @ 147100300

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassMultiThreadingTest::FMTBasic::SetUp'::__l6::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  float fVar1;
  int iVar2;
  FTestFragment_Float *pFVar3;
  FTestFragment_Int *pFVar4;
  int local_38;
  TArrayView<FTestFragment_Int,int> local_28;
  TArrayView<FTestFragment_Float_const_,int> local_18;
  
  FMassExecutionContext::GetMutableFragmentView<FTestFragment_Int>(param_1,&local_28);
  FMassExecutionContext::GetFragmentView<FTestFragment_Float>(param_1,&local_18);
  local_38 = 0;
  while( true ) {
    iVar2 = FMassExecutionContext::GetNumEntities(param_1);
    if (iVar2 <= local_38) break;
    pFVar3 = TArrayView<FTestFragment_Float_const_,int>::operator[](&local_18,local_38);
    fVar1 = pFVar3->Value;
    pFVar4 = TArrayView<FTestFragment_Int,int>::operator[](&local_28,local_38);
    iVar2 = pFVar4->Value;
    pFVar4 = TArrayView<FTestFragment_Int,int>::operator[](&local_28,local_38);
    pFVar4->Value = (int)fVar1 + iVar2;
    local_38 = local_38 + 1;
  }
  return;
}

// operator() @ 1471032a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassMultiThreadingTest::FMTBasic::SetUp'::__l7::<lambda_2>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  int iVar1;
  int iVar2;
  FTestFragment_Int *pFVar3;
  FTestFragment_Int *pFVar4;
  FTestFragment_Float *pFVar5;
  int local_48;
  TArrayView<FTestFragment_Int_const_,int> local_30;
  TArrayView<FTestFragment_Float,int> local_20 [2];
  
  FMassExecutionContext::GetFragmentView<FTestFragment_Int>(param_1,&local_30);
  FMassExecutionContext::GetMutableFragmentView<FTestFragment_Float>(param_1,local_20);
  local_48 = 0;
  while( true ) {
    iVar2 = FMassExecutionContext::GetNumEntities(param_1);
    if (iVar2 <= local_48) break;
    pFVar3 = TArrayView<FTestFragment_Int_const_,int>::operator[](&local_30,local_48);
    pFVar4 = TArrayView<FTestFragment_Int_const_,int>::operator[](&local_30,local_48);
    iVar2 = pFVar3->Value;
    iVar1 = pFVar4->Value;
    pFVar5 = TArrayView<FTestFragment_Float,int>::operator[](local_20,local_48);
    pFVar5->Value = (float)(iVar2 * iVar1);
    local_48 = local_48 + 1;
  }
  return;
}

// operator() @ 147103fd0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassMultiThreadingTest::FMTBasic::SetUp'::__l8::<lambda_3>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  int iVar1;
  FTestFragment_Int *pFVar2;
  int local_28;
  int local_24;
  TArrayView<FTestFragment_Int,int> local_18;
  
  local_24 = 0;
  FMassExecutionContext::GetMutableFragmentView<FTestFragment_Int>(param_1,&local_18);
  local_28 = 0;
  while( true ) {
    iVar1 = FMassExecutionContext::GetNumEntities(param_1);
    if (iVar1 <= local_28) break;
    pFVar2 = TArrayView<FTestFragment_Int,int>::operator[](&local_18,local_28);
    pFVar2->Value = local_24;
    local_28 = local_28 + 1;
    local_24 = local_24 + 1;
  }
  return;
}

// SetUp @ 1471a6700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassMultiThreadingTest::FMTBasic::SetUp(FMTBasic *this)

{
  UMassTestProcessorBase *pUVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  TSharedPtr<FMassEntityManager,1> *pTVar8;
  FMassProcessorExecutionOrder *pFVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  FName FVar11;
  undefined1 auStackY_518 [32];
  UMassTestProcessor_C *local_440;
  undefined8 *local_438;
  UMassTestProcessor_B *local_430;
  undefined8 *local_428;
  UMassTestProcessor_A *local_420;
  int local_418;
  int local_414;
  FMassEntityManager *local_410;
  longlong *local_408;
  TSharedPtr<FMassEntityManager,1> *local_400;
  UMassTestProcessor_C **local_3f8;
  UMassTestProcessor_C **local_3f0;
  UMassTestProcessor_C **local_3e8;
  longlong local_3e0;
  longlong local_3d8;
  longlong local_3d0;
  undefined4 local_3c8;
  undefined4 local_3c4;
  longlong local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  longlong local_3a8;
  longlong local_3a0;
  longlong local_398;
  longlong local_390;
  void *local_388;
  undefined8 *local_380;
  undefined8 *local_378;
  FName local_370;
  FName local_368;
  FName local_360;
  FScriptContainerElement *local_358;
  FScriptContainerElement *local_350;
  FScriptContainerElement *local_348;
  undefined4 local_340;
  undefined4 local_33c;
  FScriptContainerElement *local_338;
  FScriptContainerElement *local_330;
  FScriptContainerElement *local_328;
  longlong local_320;
  longlong local_318;
  FScriptContainerElement *local_310;
  FScriptContainerElement *local_308;
  FScriptContainerElement *local_300;
  undefined8 *local_2f8;
  FMassEntityQuery *local_2f0;
  FMassEntityQuery *local_2e8;
  <lambda_1> local_2e0;
  <lambda_1> *local_2d8;
  TSharedPtr<FMassEntityManager,1> *local_2d0;
  UMassTestProcessor_B **local_2c8;
  UMassTestProcessor_B **local_2c0;
  UMassTestProcessor_B **local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  longlong local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  void *local_258;
  undefined8 *local_250;
  undefined8 *local_248;
  FName local_240;
  FName local_238;
  FName local_230;
  FScriptContainerElement *local_228;
  FScriptContainerElement *local_220;
  FScriptContainerElement *local_218;
  undefined4 local_210;
  undefined4 local_20c;
  FScriptContainerElement *local_208;
  FScriptContainerElement *local_200;
  FScriptContainerElement *local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  FScriptContainerElement *local_1e0;
  FScriptContainerElement *local_1d8;
  FScriptContainerElement *local_1d0;
  undefined8 *local_1c8;
  FMassEntityQuery *local_1c0;
  FMassEntityQuery *local_1b8;
  <lambda_2> local_1b0;
  <lambda_2> *local_1a8;
  TSharedPtr<FMassEntityManager,1> *local_1a0;
  UMassTestProcessor_A **local_198;
  UMassTestProcessor_A **local_190;
  UMassTestProcessor_A **local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  undefined4 local_168;
  undefined4 local_164;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  void *local_128;
  longlong *local_120;
  longlong *local_118;
  FMassFragmentRequirements *local_110;
  <lambda_3> local_108;
  <lambda_3> *local_100;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_e8;
  TSharedPtr<FMassEntityManager,1> local_d8;
  TSharedPtr<FMassEntityManager,1> local_c8;
  TSharedPtr<FMassEntityManager,1> local_b8;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_a8;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_78;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_518;
  bVar4 = FEntityTestBase::SetUp((FEntityTestBase *)this);
  if (bVar4) {
    local_410 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
    FMassEntityManager::BatchCreateEntities
              (local_410,&local_e8,(FMassArchetypeHandle *)&this->_padding_,this->NumToCreate,
               (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->_padding_);
    TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
    ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_e8);
    local_408 = &this->_padding_;
    TArray<UMassTestProcessorBase_*,TSizedDefaultAllocator<32>_>::Reset
              ((TArray<UMassTestProcessorBase_*,TSizedDefaultAllocator<32>_> *)local_408,0);
    plVar7 = &this->_padding_;
    local_400 = &local_d8;
    pTVar8 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                       (local_400,(TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
    local_440 = NewTestProcessor<UMassTestProcessor_C>(pTVar8);
    local_3f8 = (UMassTestProcessor_C **)*plVar7;
    local_3f0 = local_3f8;
    local_3e8 = local_3f8;
    if ((local_3f8 <= &local_440) &&
       (local_3e0 = *plVar7, local_3d8 = local_3e0, local_3d0 = local_3e0,
       &local_440 <
       (UMassTestProcessor_C **)(local_3e0 + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 8)
       )) {
      local_3c8 = 0;
      local_3c4 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_3a8 = (longlong)(int)this->_padding_;
      local_3a0 = (longlong)*(int *)((longlong)&this->_padding_ + 4);
      local_3c0 = *plVar7;
      local_3b8 = local_3c0;
      local_3b0 = local_3c0;
      local_398 = local_3c0;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    if ((int)this->_padding_ == *(int *)((longlong)&this->_padding_ + 4)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)plVar7,(int *)((longlong)&this->_padding_ + 4));
      *(int *)&this->_padding_ = iVar6;
    }
    lVar3 = this->_padding_;
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    local_390 = *plVar7;
    local_388 = (void *)(local_390 + (longlong)(int)lVar3 * 8);
    local_438 = ::operator_new(8,local_388);
    *local_438 = local_440;
    pUVar1 = (UMassTestProcessorBase *)*local_438;
    local_380 = local_438;
    local_378 = local_438;
    pFVar9 = UMassTestProcessorBase::GetMutableExecutionOrder(pUVar1);
    pTVar10 = &pFVar9->ExecuteAfter;
    FVar11 = GetProcessorName<UMassTestProcessor_B>();
    local_370 = (FName)(pTVar10->AllocatorInstance).Data;
    local_368 = local_370;
    local_360 = local_370;
    if (((ulonglong)local_370 <= (ulonglong)FVar11) &&
       (local_358 = (pTVar10->AllocatorInstance).Data, local_350 = local_358, local_348 = local_358,
       (ulonglong)FVar11 <
       (ulonglong)((longlong)local_358 + (longlong)(pFVar9->ExecuteAfter).ArrayMax * 8))) {
      local_340 = 0;
      local_33c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_320 = (longlong)(pFVar9->ExecuteAfter).ArrayNum;
      local_318 = (longlong)(pFVar9->ExecuteAfter).ArrayMax;
      local_338 = (pTVar10->AllocatorInstance).Data;
      local_330 = local_338;
      local_328 = local_338;
      local_310 = local_338;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    if ((pFVar9->ExecuteAfter).ArrayNum == (pFVar9->ExecuteAfter).ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar10->AllocatorInstance,&(pFVar9->ExecuteAfter).ArrayMax);
      (pFVar9->ExecuteAfter).ArrayNum = iVar6;
    }
    iVar6 = (pFVar9->ExecuteAfter).ArrayNum;
    (pFVar9->ExecuteAfter).ArrayNum = (pFVar9->ExecuteAfter).ArrayNum + 1;
    local_308 = (pTVar10->AllocatorInstance).Data;
    local_300 = local_308 + (longlong)iVar6 * 8;
    local_2f8 = ::operator_new(8,local_300);
    *local_2f8 = *(undefined8 *)FVar11;
    local_2f0 = &pUVar1->EntityQuery;
    local_418 = iVar6;
    FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
              ((FMassFragmentRequirements *)local_2f0,ReadOnly,All);
    local_2e8 = &pUVar1->EntityQuery;
    FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
              ((FMassFragmentRequirements *)local_2e8,ReadWrite,All);
    local_2d8 = &local_2e0;
    local_2e0.__this = this;
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    TFunction<void___cdecl(FMassExecutionContext_&)><_FMassMultiThreadingTest::FMTBasic::SetUp_::__l6::<lambda_1>_>
              (&local_a8,local_2d8);
    TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
              (&pUVar1->ForEachEntityChunkExecutionFunction,&local_a8);
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_a8);
    plVar7 = &this->_padding_;
    local_2d0 = &local_c8;
    pTVar8 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                       (local_2d0,(TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
    local_430 = NewTestProcessor<UMassTestProcessor_B>(pTVar8);
    local_2c8 = (UMassTestProcessor_B **)*plVar7;
    local_2c0 = local_2c8;
    local_2b8 = local_2c8;
    if ((local_2c8 <= &local_430) &&
       (local_2b0 = *plVar7, local_2a8 = local_2b0, local_2a0 = local_2b0,
       &local_430 <
       (UMassTestProcessor_B **)(local_2b0 + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 8)
       )) {
      local_298 = 0;
      local_294 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_278 = (longlong)(int)this->_padding_;
      local_270 = (longlong)*(int *)((longlong)&this->_padding_ + 4);
      local_290 = *plVar7;
      local_288 = local_290;
      local_280 = local_290;
      local_268 = local_290;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    if ((int)this->_padding_ == *(int *)((longlong)&this->_padding_ + 4)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)plVar7,(int *)((longlong)&this->_padding_ + 4));
      *(int *)&this->_padding_ = iVar6;
    }
    lVar3 = this->_padding_;
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    local_260 = *plVar7;
    local_258 = (void *)(local_260 + (longlong)(int)lVar3 * 8);
    local_428 = ::operator_new(8,local_258);
    *local_428 = local_430;
    pUVar1 = (UMassTestProcessorBase *)*local_428;
    local_250 = local_428;
    local_248 = local_428;
    pFVar9 = UMassTestProcessorBase::GetMutableExecutionOrder(pUVar1);
    pTVar10 = &pFVar9->ExecuteAfter;
    FVar11 = GetProcessorName<UMassTestProcessor_A>();
    local_240 = (FName)(pTVar10->AllocatorInstance).Data;
    local_238 = local_240;
    local_230 = local_240;
    if (((ulonglong)local_240 <= (ulonglong)FVar11) &&
       (local_228 = (pTVar10->AllocatorInstance).Data, local_220 = local_228, local_218 = local_228,
       (ulonglong)FVar11 <
       (ulonglong)((longlong)local_228 + (longlong)(pFVar9->ExecuteAfter).ArrayMax * 8))) {
      local_210 = 0;
      local_20c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_1f0 = (longlong)(pFVar9->ExecuteAfter).ArrayNum;
      local_1e8 = (longlong)(pFVar9->ExecuteAfter).ArrayMax;
      local_208 = (pTVar10->AllocatorInstance).Data;
      local_200 = local_208;
      local_1f8 = local_208;
      local_1e0 = local_208;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    if ((pFVar9->ExecuteAfter).ArrayNum == (pFVar9->ExecuteAfter).ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar10->AllocatorInstance,&(pFVar9->ExecuteAfter).ArrayMax);
      (pFVar9->ExecuteAfter).ArrayNum = iVar6;
    }
    iVar6 = (pFVar9->ExecuteAfter).ArrayNum;
    (pFVar9->ExecuteAfter).ArrayNum = (pFVar9->ExecuteAfter).ArrayNum + 1;
    local_1d8 = (pTVar10->AllocatorInstance).Data;
    local_1d0 = local_1d8 + (longlong)iVar6 * 8;
    local_1c8 = ::operator_new(8,local_1d0);
    *local_1c8 = *(undefined8 *)FVar11;
    local_1c0 = &pUVar1->EntityQuery;
    local_414 = iVar6;
    FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
              ((FMassFragmentRequirements *)local_1c0,ReadOnly,All);
    local_1b8 = &pUVar1->EntityQuery;
    FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
              ((FMassFragmentRequirements *)local_1b8,ReadWrite,All);
    local_1a8 = &local_1b0;
    local_1b0.__this = this;
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    TFunction<void___cdecl(FMassExecutionContext_&)><_FMassMultiThreadingTest::FMTBasic::SetUp_::__l7::<lambda_2>_>
              (&local_78,local_1a8);
    TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
              (&pUVar1->ForEachEntityChunkExecutionFunction,&local_78);
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_78);
    plVar7 = &this->_padding_;
    local_1a0 = &local_b8;
    pTVar8 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                       (local_1a0,(TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
    local_420 = NewTestProcessor<UMassTestProcessor_A>(pTVar8);
    local_198 = (UMassTestProcessor_A **)*plVar7;
    local_190 = local_198;
    local_188 = local_198;
    if ((local_198 <= &local_420) &&
       (local_180 = *plVar7, local_178 = local_180, local_170 = local_180,
       &local_420 <
       (UMassTestProcessor_A **)(local_180 + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 8)
       )) {
      local_168 = 0;
      local_164 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_148 = (longlong)(int)this->_padding_;
      local_140 = (longlong)*(int *)((longlong)&this->_padding_ + 4);
      local_160 = *plVar7;
      local_158 = local_160;
      local_150 = local_160;
      local_138 = local_160;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    if ((int)this->_padding_ == *(int *)((longlong)&this->_padding_ + 4)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)plVar7,(int *)((longlong)&this->_padding_ + 4));
      *(int *)&this->_padding_ = iVar6;
    }
    lVar3 = this->_padding_;
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    local_130 = *plVar7;
    local_128 = (void *)(local_130 + (longlong)(int)lVar3 * 8);
    local_120 = ::operator_new(8,local_128);
    *local_120 = (longlong)local_420;
    lVar3 = *local_120;
    local_110 = (FMassFragmentRequirements *)(lVar3 + 0x140);
    local_118 = local_120;
    FMassFragmentRequirements::AddRequirement<FTestFragment_Int>(local_110,ReadWrite,All);
    local_100 = &local_108;
    local_108.__this = this;
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    TFunction<void___cdecl(FMassExecutionContext_&)><_FMassMultiThreadingTest::FMTBasic::SetUp_::__l8::<lambda_3>_>
              (&local_48,local_100);
    TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
              ((TFunction<void___cdecl(FMassExecutionContext_&)> *)(lVar3 + 0x110),&local_48);
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_48);
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

// VerifyLatentResults @ 1471b1d00

void __thiscall FMassMultiThreadingTest::FMTBasic::VerifyLatentResults(FMTBasic *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestBase *pFVar4;
  FTestFragment_Int *pFVar5;
  int local_98;
  FString local_48;
  FMassEntityView local_38;
  
  local_98 = 0;
  while( true ) {
    if ((int)this->_padding_ <= local_98) {
      return;
    }
    if (local_98 < 0 || (int)this->_padding_ <= local_98) {
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FMassEntityView::FMassEntityView
              (&local_38,(FMassArchetypeHandle *)&this->_padding_,
               *(FMassEntityHandle *)(this->_padding_ + (longlong)local_98 * 8));
    pFVar4 = FAITestBase::GetTestRunner((FAITestBase *)this);
    pFVar5 = FMassEntityView::GetFragmentData<FTestFragment_Int>(&local_38);
    iVar1 = pFVar5->Value;
    ::FString::FString(&local_48,L"Should have predicted values");
    bVar3 = FTestHelpers::TestEqual<int,int>(&local_48,iVar1,local_98 * local_98 + local_98,pFVar4);
    ::FString::~FString(&local_48);
    if (!bVar3) break;
    local_98 = local_98 + 1;
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  return;
}

