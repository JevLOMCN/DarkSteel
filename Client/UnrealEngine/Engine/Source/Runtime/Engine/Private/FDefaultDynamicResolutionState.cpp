// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// FDefaultDynamicResolutionState @ 147b38cd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FDefaultDynamicResolutionState * __thiscall
FDefaultDynamicResolutionState::FDefaultDynamicResolutionState(FDefaultDynamicResolutionState *this)

{
  TMap<int> *this_00;
  uint uVar1;
  TLinkedList<DynamicRenderScaling::FBudget_*> *pTVar2;
  wchar_t *pwVar3;
  ForElementType<DynamicRenderScaling::TMap<int>::FItem> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FDefaultDynamicResolutionStateProxy *this_01;
  TLinkedList<DynamicRenderScaling::FBudget_*> **ppTVar9;
  FDefaultDynamicResolutionState *pFVar10;
  ForElementType<DynamicRenderScaling::TMap<int>::FItem> FVar11;
  
  this->_padding_ = (longlong)&___7FDefaultDynamicResolutionState__6B_;
  this_01 = ::operator_new(0x360);
  if (this_01 == (FDefaultDynamicResolutionStateProxy *)0x0) {
    this_01 = (FDefaultDynamicResolutionStateProxy *)0x0;
  }
  else {
    (this_01->Heuristic).History.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->Heuristic).History.ArrayNum = 0;
    (this_01->Heuristic).History.ArrayMax = 0;
    DynamicRenderScaling::TMap<float>::TMap<float>
              (&(this_01->Heuristic).CurrentFrameResolutionFractions);
    DynamicRenderScaling::TMap<float>::TMap<float>
              (&(this_01->Heuristic).CurrentFrameMaxResolutionFractions);
    this_00 = &(this_01->Heuristic).BudgetHistorySizes;
    (this_01->Heuristic).BudgetHistorySizes.Array.AllocatorInstance.SecondaryData =
         (ForElementType<DynamicRenderScaling::TMap<int>::FItem>)0x0;
    (this_01->Heuristic).BudgetHistorySizes.Array.ArrayNum = 0;
    (this_01->Heuristic).BudgetHistorySizes.Array.ArrayMax = 0x10;
    iVar7 = DynamicRenderScaling::FBudget::GetGlobalListSize();
    TArray<DynamicRenderScaling::TMap<int>::FItem,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
    ::SetNum(&this_00->Array,iVar7,Default);
    ppTVar9 = DynamicRenderScaling::FBudget::GetGlobalList();
    for (pTVar2 = *ppTVar9; pTVar2 != (TLinkedList<DynamicRenderScaling::FBudget_*> *)0x0;
        pTVar2 = (TLinkedList<DynamicRenderScaling::FBudget_*> *)pTVar2->_padding_) {
      uVar1 = pTVar2->Element->BudgetId;
      pwVar3 = pTVar2->Element->Name;
      uVar8 = 0;
      if ((int)uVar1 < (this_01->Heuristic).BudgetHistorySizes.Array.ArrayNum) {
        uVar8 = ~uVar1 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FDefaultDynamicResolutionState *)(*pcVar5)();
        return pFVar10;
      }
      FVar4 = (this_01->Heuristic).BudgetHistorySizes.Array.AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<DynamicRenderScaling::TMap<int>::FItem>)this_00;
      if (FVar4 != (ForElementType<DynamicRenderScaling::TMap<int>::FItem>)0x0) {
        FVar11 = FVar4;
      }
      *(wchar_t **)((longlong)FVar11 + (longlong)(int)uVar1 * 0x10) = pwVar3;
    }
    bVar6 = IsInGameThread();
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                           ,0x8f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FDefaultDynamicResolutionState *)(*pcVar5)();
      return pFVar10;
    }
    FDynamicResolutionHeuristicProxy::ResetInternal(&this_01->Heuristic);
    (this_01->GPUFrameTimeState).NextIndex = 0;
    bVar6 = IsInGameThread();
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                           ,0x22a,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FDefaultDynamicResolutionState *)(*pcVar5)();
      return pFVar10;
    }
  }
  this->Proxy = this_01;
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                         ,0x2b1,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FDefaultDynamicResolutionState *)(*pcVar5)();
    return pFVar10;
  }
  this->bIsEnabled = false;
  this->bRecordThisFrame = false;
  return this;
}

// ~FDefaultDynamicResolutionState @ 147b3ca50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDefaultDynamicResolutionState::~FDefaultDynamicResolutionState
          (FDefaultDynamicResolutionState *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FDefaultDynamicResolutionStateProxy *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FDefaultDynamicResolutionStateProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this->_padding_ = (longlong)&___7FDefaultDynamicResolutionState__6B_;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                       ,0x2b8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_60 = (undefined ***)0x0;
  local_78 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1___1FDefaultDynamicResolutionState__UEAA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  pFStack_70 = this->Proxy;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FDefaultDynamicResolutionState::~FDefaultDynamicResolutionState'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FDefaultDynamicResolutionState::~FDefaultDynamicResolutionState_::__l2::TSTR_DeleteDynamicResolutionProxy699>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FDefaultDynamicResolutionState::~FDefaultDynamicResolutionState'::__l2::TSTR_DeleteDynamicResolutionProxy699>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
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
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  this->_padding_ = (longlong)&___7IDynamicResolutionState__6B_;
  return;
}

// operator() @ 147b3e710

void __thiscall
`FDefaultDynamicResolutionState::~FDefaultDynamicResolutionState'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  FDynamicResolutionHeuristicProxy *this_00;
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                       ,0x267,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = *(FDynamicResolutionHeuristicProxy **)this;
  if (this_00 != (FDynamicResolutionHeuristicProxy *)0x0) {
    bVar2 = IsInRenderingThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                         ,0x22f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FDynamicResolutionHeuristicProxy::~FDynamicResolutionHeuristicProxy(this_00);
    ::operator_delete(this_00,0x360);
    return;
  }
  return;
}

// operator() @ 147b3ee70

void __thiscall
`FDefaultDynamicResolutionState::ResetHistory'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  FDynamicResolutionHeuristicProxy *this_00;
  code *pcVar1;
  bool bVar2;
  
  this_00 = *(FDynamicResolutionHeuristicProxy **)this;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                       ,0x234,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                       ,0x9a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FDynamicResolutionHeuristicProxy::ResetInternal(this_00);
  return;
}

// GetResolutionFractionsApproximation @ 147b6d6e0

TMap<float> * __thiscall
FDefaultDynamicResolutionState::GetResolutionFractionsApproximation
          (FDefaultDynamicResolutionState *this,TMap<float> *__return_storage_ptr__)

{
  FDefaultDynamicResolutionStateProxy *this_00;
  code *pcVar1;
  bool bVar2;
  TMap<float> *pTVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                       ,0x2eb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TMap<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  this_00 = this->Proxy;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\DynamicResolutionProxy.h"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TMap<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FDynamicResolutionHeuristicProxy::QueryCurrentFrameResolutionFractions_Internal
            (&this_00->Heuristic,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetResolutionFractionsUpperBound @ 147b6d820

TMap<float> * __thiscall
FDefaultDynamicResolutionState::GetResolutionFractionsUpperBound
          (FDefaultDynamicResolutionState *this,TMap<float> *__return_storage_ptr__)

{
  FDefaultDynamicResolutionStateProxy *pFVar1;
  code *pcVar2;
  bool bVar3;
  TMap<float> *pTVar4;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                       ,0x2f1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TMap<float> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pFVar1 = this->Proxy;
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = IsInParallelRenderingThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                         ,0x1f6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TMap<float> *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  DynamicRenderScaling::TMap<float>::TMap<float>
            (__return_storage_ptr__,&(pFVar1->Heuristic).CurrentFrameMaxResolutionFractions);
  return __return_storage_ptr__;
}

// GetResolutionFractionsUpperBoundBudgetValue @ 147b6d8c0

TMap<float> * __thiscall
FDefaultDynamicResolutionState::GetResolutionFractionsUpperBoundBudgetValue
          (FDefaultDynamicResolutionState *this,TMap<float> *__return_storage_ptr__)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  TLinkedList<DynamicRenderScaling::FBudget_*> *pTVar4;
  FBudget *pFVar5;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  TLinkedList<DynamicRenderScaling::FBudget_*> **ppTVar11;
  TMap<float> *pTVar12;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar13;
  
  DynamicRenderScaling::TMap<float>::TMap<float>(__return_storage_ptr__);
  ppTVar11 = DynamicRenderScaling::FBudget::GetGlobalList();
  pTVar4 = *ppTVar11;
  while( true ) {
    if (pTVar4 == (TLinkedList<DynamicRenderScaling::FBudget_*> *)0x0) {
      return __return_storage_ptr__;
    }
    pFVar5 = pTVar4->Element;
    iVar2 = (__return_storage_ptr__->Array).ArrayNum;
    fVar1 = (pFVar5->CachedSettings).MaxResolutionFraction;
    iVar9 = DynamicRenderScaling::FBudget::GetGlobalListSize();
    if ((iVar2 != iVar9) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Array.Num() == FBudget::GetGlobalListSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                           ,0xd5,L""), bVar8)) break;
    uVar3 = pFVar5->BudgetId;
    uVar10 = 0;
    if ((int)uVar3 < (__return_storage_ptr__->Array).ArrayNum) {
      uVar10 = ~uVar3 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TMap<float> *)(*pcVar7)();
      return pTVar12;
    }
    FVar6 = (__return_storage_ptr__->Array).AllocatorInstance.SecondaryData;
    FVar13 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)__return_storage_ptr__;
    if (FVar6 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
      FVar13 = FVar6;
    }
    *(float *)((uchar *)((longlong)FVar13 + 8) + (longlong)(int)uVar3 * 0x10) = fVar1;
    pTVar4 = (TLinkedList<DynamicRenderScaling::FBudget_*> *)pTVar4->_padding_;
  }
  pcVar7 = (code *)swi(3);
  pTVar12 = (TMap<float> *)(*pcVar7)();
  return pTVar12;
}

// IsEnabled @ 147b78200

bool __thiscall FDefaultDynamicResolutionState::IsEnabled(FDefaultDynamicResolutionState *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                       ,0x2e5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return this->bIsEnabled;
}

// IsSupported @ 147b782e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FDefaultDynamicResolutionState::IsSupported(FDefaultDynamicResolutionState *this)

{
  IStereoRendering *pIVar1;
  char cVar2;
  
  pIVar1 = (GEngine->StereoRenderingDevice).Object;
  if (pIVar1 != (IStereoRendering *)0x0) {
    cVar2 = (**(code **)((longlong)*pIVar1 + 8))();
    if (cVar2 != '\0') {
      return false;
    }
  }
  return GRHIGlobals.SupportsDynamicResolution;
}

// ProcessEvent @ 147b7e580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDefaultDynamicResolutionState::ProcessEvent
          (FDefaultDynamicResolutionState *this,EDynamicResolutionStateEvent param_1)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  FRenderCommandList *pFVar6;
  FCommandList *pFVar7;
  FRenderCommandTag *pFVar8;
  undefined ***pppuVar9;
  ulonglong uVar10;
  double dVar11;
  undefined1 auStack_148 [64];
  code *local_108 [2];
  undefined **local_f8;
  FDefaultDynamicResolutionStateProxy *pFStack_f0;
  EDynamicResolutionStateEvent local_e8;
  undefined4 uStack_e7;
  undefined2 uStack_e3;
  undefined1 uStack_e1;
  undefined ***local_e0;
  code *local_d8 [2];
  undefined **local_c8;
  FDefaultDynamicResolutionStateProxy *pFStack_c0;
  float local_b8;
  undefined4 uStack_b4;
  undefined ***local_b0;
  undefined1 local_a8 [16];
  undefined **local_98;
  FDefaultDynamicResolutionStateProxy *pFStack_90;
  undefined8 local_88;
  undefined ***local_80;
  byte local_78;
  undefined1 local_68 [16];
  undefined **local_58;
  FDefaultDynamicResolutionStateProxy *pFStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                         ,0x302,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 == BeginFrame) {
    if ((this->bRecordThisFrame != false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bRecordThisFrame == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                           ,0x306,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this->bIsEnabled == false) ||
       (cVar4 = (**(code **)(this->_padding_ + 0x10))(this), cVar4 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    this->bRecordThisFrame = bVar3;
  }
  pTVar2 = CVarUseGameThreadCriticalPath.Ref;
  if (this->bRecordThisFrame != false) {
    if (param_1 == BeginFrame) {
      dVar11 = FGenericPlatformTime::SecondsPerCycle * __real_408f400000000000 *
               (double)GGameThreadTime;
      bVar3 = IsInParallelGameThread();
      if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
        lVar5 = 0;
      }
      else {
        lVar5 = 4;
      }
      if (*(int *)((longlong)pTVar2->ShadowedValue + lVar5) != 0) {
        dVar11 = FGenericPlatformTime::SecondsPerCycle * __real_408f400000000000 *
                 (double)GGameThreadTimeCriticalPath;
      }
      local_b8 = (float)dVar11;
      local_c8 = &
                 ___7__TFunction_OwnedObject_V<lambda_1>__BJ___ProcessEvent_FDefaultDynamicResolutionState__UEAAXW4EDynamicResolutionStateEvent___Z__00_0A__Function_Private_Core_UE__6B_
      ;
      pFStack_c0 = this->Proxy;
      uStack_b4 = auStack_148._60_4_;
      local_d8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FDefaultDynamicResolutionState::ProcessEvent'::__l25::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      local_b0 = (undefined ***)0x0;
      pFVar6 = FRenderCommandList::GetInstanceTLS();
      if (pFVar6 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FDefaultDynamicResolutionState::ProcessEvent_::__l25::TSTR_DynamicResolutionBeginFrame793>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_d8);
      }
      else {
        pFVar7 = FRenderCommandList::GetRenderThread(pFVar6);
        local_88._4_4_ = uStack_b4;
        local_88._0_4_ = local_b8;
        local_a8._0_8_ = local_d8[0];
        local_80 = local_b0;
        local_98 = local_c8;
        pFStack_90 = pFStack_c0;
        local_d8[0] = (code *)0x0;
        local_78 = 2;
        pFVar8 = (FRenderCommandTag *)
                 TRenderCommandTag<`FDefaultDynamicResolutionState::ProcessEvent'::__l25::TSTR_DynamicResolutionBeginFrame793>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar7,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                           *)local_a8,pFVar8);
        uVar10 = (ulonglong)local_78;
        if ((2 < uVar10) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar10] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_a8._0_8_ != (code *)0x0) {
            pppuVar9 = (undefined ***)(local_a8 + 0x10);
            if (local_80 != (undefined ***)0x0) {
              pppuVar9 = local_80;
            }
            (*(code *)(*pppuVar9)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar10])(local_a8);
        }
      }
      if (local_d8[0] != (code *)0x0) {
        pppuVar9 = &local_c8;
        if (local_b0 != (undefined ***)0x0) {
          pppuVar9 = local_b0;
        }
        (*(code *)(*pppuVar9)[2])();
      }
    }
    else {
      local_e0 = (undefined ***)0x0;
      local_f8 = &
                 ___7__TFunction_OwnedObject_V<lambda_2>__BO___ProcessEvent_FDefaultDynamicResolutionState__UEAAXW4EDynamicResolutionStateEvent___Z__00_0A__Function_Private_Core_UE__6B_
      ;
      pFStack_f0 = this->Proxy;
      uStack_e7 = auStack_148._41_4_;
      uStack_e3 = auStack_148._45_2_;
      uStack_e1 = auStack_148[0x2f];
      local_108[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FDefaultDynamicResolutionState::ProcessEvent'::__l30::<lambda_2>,void,FRHICommandListImmediate_&>
                     ::Call;
      local_e8 = param_1;
      pFVar6 = FRenderCommandList::GetInstanceTLS();
      if (pFVar6 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FDefaultDynamicResolutionState::ProcessEvent_::__l30::TSTR_DynamicResolutionBeginFrame802>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_108);
      }
      else {
        pFVar7 = FRenderCommandList::GetRenderThread(pFVar6);
        local_48._1_4_ = uStack_e7;
        local_48._0_1_ = local_e8;
        local_48._5_2_ = uStack_e3;
        local_48._7_1_ = uStack_e1;
        local_68._0_8_ = local_108[0];
        local_40 = local_e0;
        local_58 = local_f8;
        pFStack_50 = pFStack_f0;
        local_108[0] = (code *)0x0;
        local_38 = 2;
        pFVar8 = (FRenderCommandTag *)
                 TRenderCommandTag<`FDefaultDynamicResolutionState::ProcessEvent'::__l30::TSTR_DynamicResolutionBeginFrame802>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar7,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                           *)local_68,pFVar8);
        uVar10 = (ulonglong)local_38;
        if ((2 < uVar10) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar10] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_68._0_8_ != (code *)0x0) {
            pppuVar9 = (undefined ***)(local_68 + 0x10);
            if (local_40 != (undefined ***)0x0) {
              pppuVar9 = local_40;
            }
            (*(code *)(*pppuVar9)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar10])(local_68);
        }
      }
      if (local_108[0] != (code *)0x0) {
        pppuVar9 = &local_f8;
        if (local_e0 != (undefined ***)0x0) {
          pppuVar9 = local_e0;
        }
        (*(code *)(*pppuVar9)[2])();
      }
      if (param_1 == EndFrame) {
        this->bRecordThisFrame = false;
      }
    }
  }
  return;
}

// ResetHistory @ 147b85730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FDefaultDynamicResolutionState::ResetHistory(FDefaultDynamicResolutionState *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FDefaultDynamicResolutionStateProxy *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FDefaultDynamicResolutionStateProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                       ,0x2d3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_60 = (undefined ***)0x0;
  local_78 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__ResetHistory_FDefaultDynamicResolutionState__UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  pFStack_70 = this->Proxy;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FDefaultDynamicResolutionState::ResetHistory'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FDefaultDynamicResolutionState::ResetHistory_::__l2::TSTR_DynamicResolutionResetHistory725>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FDefaultDynamicResolutionState::ResetHistory'::__l2::TSTR_DynamicResolutionResetHistory725>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
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
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// SetEnabled @ 147b8aef0

void __thiscall
FDefaultDynamicResolutionState::SetEnabled(FDefaultDynamicResolutionState *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                       ,0x2df,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bIsEnabled = param_1;
  return;
}

// SetTemporalUpscaler @ 147b8dcb0

void __thiscall
FDefaultDynamicResolutionState::SetTemporalUpscaler
          (FDefaultDynamicResolutionState *this,ITemporalUpscaler *param_1)

{
  FDefaultDynamicResolutionStateProxy *this_00;
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  this_00 = this->Proxy;
  bVar2 = IsInParallelRenderingThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                         ,0x1a7,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar4 = __real_40800000;
  fVar3 = __real_3c23d70a;
  if (param_1 != (ITemporalUpscaler *)0x0) {
    fVar3 = (float)(**(code **)((longlong)*param_1 + 0x18))(param_1);
    fVar4 = (float)(**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  if ((fVar3 != (this_00->Heuristic).TemporalUpscalerMinResolutionFraction) ||
     (fVar4 != (this_00->Heuristic).TemporalUpscalerMaxResolutionFraction)) {
    (this_00->Heuristic).TemporalUpscalerMinResolutionFraction = fVar3;
    (this_00->Heuristic).TemporalUpscalerMaxResolutionFraction = fVar4;
    FDynamicResolutionHeuristicProxy::RefreshCurrentFrameResolutionFraction_RenderThread
              (&this_00->Heuristic);
  }
  return;
}

// SetupMainViewFamily @ 147b8e160

void __thiscall
FDefaultDynamicResolutionState::SetupMainViewFamily
          (FDefaultDynamicResolutionState *this,FSceneViewFamily *param_1)

{
  ISceneViewFamilyScreenPercentage IVar1;
  code *pcVar2;
  bool bVar3;
  ISceneViewFamilyScreenPercentage *pIVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                         ,0x332,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (this->bIsEnabled == false) {
    return;
  }
  pIVar4 = ::operator_new(0x18);
  if (pIVar4 == (ISceneViewFamilyScreenPercentage *)0x0) {
    pIVar4 = (ISceneViewFamilyScreenPercentage *)0x0;
    pcVar6 = "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h";
    iVar7 = 0xa24;
    pcVar5 = "InScreenPercentageInterface";
  }
  else {
    IVar1 = (ISceneViewFamilyScreenPercentage)this->Proxy;
    *pIVar4 = (ISceneViewFamilyScreenPercentage)&___7FDefaultDynamicResolutionDriver__6B_;
    pIVar4[1] = IVar1;
    pIVar4[2] = (ISceneViewFamilyScreenPercentage)param_1;
    bVar3 = IsInGameThread();
    if (bVar3) goto LAB_147b8e21d;
    iVar7 = 0x27c;
    pcVar6 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp";
    pcVar5 = "IsInGameThread()";
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2(pcVar5,pcVar6,iVar7,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_147b8e21d:
  if ((param_1->ScreenPercentageInterface != (ISceneViewFamilyScreenPercentage *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScreenPercentageInterface == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                         ,0xa25,L"View family already had a screen percentage interface assigned."),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  param_1->ScreenPercentageInterface = pIVar4;
  return;
}

