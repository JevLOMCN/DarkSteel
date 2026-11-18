// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 13

// AddReferencedObjects @ 14acc2380

void __thiscall
SEasyParticle::AddReferencedObjects(SEasyParticle *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014acc2393. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->_padding_,0,0);
  return;
}

// ComputeDesiredSize @ 14acc2670

TVector2<double> * __thiscall
SEasyParticle::ComputeDesiredSize
          (SEasyParticle *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// GetParticleCount @ 14acc3c70

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

int __thiscall SEasyParticle::GetParticleCount(SEasyParticle *this)

{
  UEasyParticleRootState *pUVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_98 [4];
  int iStack_94;
  uint uStack_90;
  longlong *plStack_88;
  int iStack_80;
  UEasyParticleComponent_Child_Runtime *pUStack_78;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> TStack_70;
  UEasyParticleComponentRuntime **ppUStack_58;
  UEasyParticleComponentRuntime **ppUStack_50;
  longlong lStack_48;
  longlong lStack_40;
  UEasyParticleComponentRuntime **ppUStack_38;
  UEasyParticleComponentRuntime *pUStack_30;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> TStack_28;
  
  pUVar1 = (this->RootEmitter).field0_0x0.DebugPtr;
  if (pUVar1 == (UEasyParticleRootState *)0x0) {
    return 0;
  }
  iStack_94 = 1;
  plStack_88 = &pUVar1->_padding_;
  ppUStack_58 = (UEasyParticleComponentRuntime **)*plStack_88;
  ppUStack_50 = ppUStack_58;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
            (&TStack_70,(int *)&pUVar1->_padding_,ppUStack_58);
  lStack_48 = *plStack_88;
  iStack_80 = (int)plStack_88[1];
  lStack_40 = lStack_48;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
            (&TStack_28,(int *)(plStack_88 + 1),
             (UEasyParticleComponentRuntime **)(lStack_48 + (longlong)iStack_80 * 8));
  while( true ) {
    if (*TStack_70.CurrentNum != TStack_70.InitialNum) {
      puVar4 = auStack_98;
      for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      `TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(auStack_98);
    }
    auStack_98[1] = TStack_70.Ptr != TStack_28.Ptr;
    uStack_90 = (uint)(byte)auStack_98[1];
    if (!(bool)auStack_98[1]) break;
    ppUStack_38 = TStack_70.Ptr;
    pUStack_30 = *TStack_70.Ptr;
    pUStack_78 = Cast<UEasyParticleComponent_Child_Runtime,UEasyParticleComponentRuntime>
                           (pUStack_30);
    if (pUStack_78 != (UEasyParticleComponent_Child_Runtime *)0x0) {
      iVar2 = UEasyParticleComponent_Child_Runtime::GetParticleCount(pUStack_78);
      iStack_94 = iStack_94 + iVar2;
    }
    TStack_70.Ptr = TStack_70.Ptr + 1;
  }
  return iStack_94;
}

// GetParticleCountInPool @ 14acc3e20

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

int __thiscall SEasyParticle::GetParticleCountInPool(SEasyParticle *this)

{
  UEasyParticleRootState *this_00;
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_98 [4];
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  TArray<UEasyParticleComponentRuntime_*,TSizedDefaultAllocator<32>_> *pTStack_88;
  int iStack_80;
  UEasyParticleComponent_Child_Runtime *pUStack_78;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> TStack_70;
  FScriptContainerElement *pFStack_58;
  FScriptContainerElement *pFStack_50;
  FScriptContainerElement *pFStack_48;
  FScriptContainerElement *pFStack_40;
  UEasyParticleComponentRuntime **ppUStack_38;
  UEasyParticleComponentRuntime *pUStack_30;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0> TStack_28;
  
  this_00 = (this->RootEmitter).field0_0x0.DebugPtr;
  if (this_00 == (UEasyParticleRootState *)0x0) {
    return 0;
  }
  bVar1 = UEasyParticleState::IsInCache((UEasyParticleState *)this_00);
  uStack_90 = (uint)bVar1;
  uStack_94 = uStack_90;
  pTStack_88 = (TArray<UEasyParticleComponentRuntime_*,TSizedDefaultAllocator<32>_> *)
               &this_00->_padding_;
  pFStack_58 = (pTStack_88->AllocatorInstance).Data;
  pFStack_50 = pFStack_58;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
            (&TStack_70,(int *)&this_00->_padding_,(UEasyParticleComponentRuntime **)pFStack_58);
  pFStack_48 = (pTStack_88->AllocatorInstance).Data;
  iStack_80 = pTStack_88->ArrayNum;
  pFStack_40 = pFStack_48;
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::
  TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>
            (&TStack_28,&pTStack_88->ArrayNum,
             (UEasyParticleComponentRuntime **)(pFStack_48 + (longlong)iStack_80 * 8));
  while( true ) {
    if (*TStack_70.CurrentNum != TStack_70.InitialNum) {
      puVar4 = auStack_98;
      for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      `TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(auStack_98);
    }
    auStack_98[1] = TStack_70.Ptr != TStack_28.Ptr;
    uStack_8c = (uint)(byte)auStack_98[1];
    if (!(bool)auStack_98[1]) break;
    ppUStack_38 = TStack_70.Ptr;
    pUStack_30 = *TStack_70.Ptr;
    pUStack_78 = Cast<UEasyParticleComponent_Child_Runtime,UEasyParticleComponentRuntime>
                           (pUStack_30);
    if (pUStack_78 != (UEasyParticleComponent_Child_Runtime *)0x0) {
      iVar2 = UEasyParticleComponent_Child_Runtime::GetParticleCountInPool(pUStack_78);
      uStack_94 = uStack_94 + iVar2;
    }
    TStack_70.Ptr = TStack_70.Ptr + 1;
  }
  return uStack_94;
}

// GetReferencerName @ 14acc3ff0

FString * __thiscall
SEasyParticle::GetReferencerName(SEasyParticle *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SEasyParticle");
  return __return_storage_ptr__;
}

// Init @ 14acc4b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall SEasyParticle::Init(SEasyParticle *this,UEasyParticleAsset *param_1,bool param_2)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEasyParticleRootState *pUVar3;
  FGeometry *pFVar4;
  longlong *plVar5;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  FGeometry local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_e8;
  this->isActivity = false;
  if (param_1 != (UEasyParticleAsset *)0x0) {
    pUVar3 = (this->RootEmitter).field0_0x0.DebugPtr;
    if ((pUVar3 == (UEasyParticleRootState *)0x0) || (param_2)) {
      pUVar1 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar1,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar2 = Z_Construct_UClass_UEasyParticleRootState_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_c8,pUVar2);
      local_c8._8_8_ = pUVar1;
      pUVar3 = (UEasyParticleRootState *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
      if (local_c8._64_8_ != 0) {
        plVar5 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar5 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UEasyParticleRootState *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->RootEmitter).field0_0x0.DebugPtr = pUVar3;
    }
    if (pUVar3 != (UEasyParticleRootState *)0x0) {
      pFVar4 = SWidget::GetCachedGeometry((SWidget *)this);
      local_48.Size = pFVar4->Size;
      local_48._8_8_ = *(undefined8 *)&pFVar4->Scale;
      local_48._16_8_ = *(undefined8 *)((longlong)&(pFVar4->AbsolutePosition).field0_0x0 + 4);
      local_48._24_8_ = *(undefined8 *)((longlong)&(pFVar4->Position).field0_0x0 + 4);
      local_48.AccumulatedRenderTransform.M.M._4_8_ =
           *(undefined8 *)((pFVar4->AccumulatedRenderTransform).M.M[0] + 1);
      local_48.AccumulatedRenderTransform._12_8_ =
           *(undefined8 *)((pFVar4->AccumulatedRenderTransform).M.M[1] + 1);
      local_48._48_8_ =
           *(undefined8 *)((longlong)&(pFVar4->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
      UEasyParticleRootState::Init((this->RootEmitter).field0_0x0.DebugPtr,param_1,&local_48);
    }
  }
  return;
}

// IsEnd @ 14acc5e80

bool __thiscall SEasyParticle::IsEnd(SEasyParticle *this)

{
  UEasyParticleRootState *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->RootEmitter).field0_0x0.DebugPtr;
  if (pUVar1 != (UEasyParticleRootState *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014acc5e8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x2c0))();
    return (bool)uVar2;
  }
  return true;
}

// OnPaint @ 14acc63f0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SEasyParticle::OnPaint
          (SEasyParticle *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  UEasyParticleRootState *pUVar1;
  undefined1 uVar2;
  
  if ((this->isActivity != false) &&
     (pUVar1 = (this->RootEmitter).field0_0x0.DebugPtr, pUVar1 != (UEasyParticleRootState *)0x0)) {
    if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    (**(code **)(pUVar1->_padding_ + 0x2b8))
              (pUVar1,param_1,param_2,param_3,param_4,param_5,param_6,uVar2);
    return param_5;
  }
  return param_5;
}

// Play @ 14acc73c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall SEasyParticle::Play(SEasyParticle *this)

{
  EWidgetUpdateFlags EVar1;
  FGeometry *pFVar2;
  EWidgetUpdateFlags EVar3;
  undefined1 auStack_68 [32];
  FGeometry local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  if ((this->RootEmitter).field0_0x0.DebugPtr != (UEasyParticleRootState *)0x0) {
    pFVar2 = SWidget::GetCachedGeometry((SWidget *)this);
    local_48.Size = pFVar2->Size;
    local_48._8_8_ = *(undefined8 *)&pFVar2->Scale;
    local_48._16_8_ = *(undefined8 *)((longlong)&(pFVar2->AbsolutePosition).field0_0x0 + 4);
    local_48._24_8_ = *(undefined8 *)((longlong)&(pFVar2->Position).field0_0x0 + 4);
    local_48.AccumulatedRenderTransform.M.M._4_8_ =
         *(undefined8 *)((pFVar2->AccumulatedRenderTransform).M.M[0] + 1);
    local_48.AccumulatedRenderTransform._12_8_ =
         *(undefined8 *)((pFVar2->AccumulatedRenderTransform).M.M[1] + 1);
    local_48._48_8_ =
         *(undefined8 *)((longlong)&(pFVar2->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    UEasyParticleRootState::Play((this->RootEmitter).field0_0x0.DebugPtr,&local_48);
    EVar1 = (EWidgetUpdateFlags)this->_padding_;
    EVar3 = EVar1 | NeedsTick;
    *(EWidgetUpdateFlags *)&this->_padding_ = EVar3;
    FWidgetProxyHandle::UpdateWidgetFlags
              ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar3);
    this->isActivity = true;
  }
  return;
}

// SetOnParticleEnd @ 14acc8da0

void __thiscall
SEasyParticle::SetOnParticleEnd
          (SEasyParticle *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != &this->ParticleEnd) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ParticleEnd,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return;
}

// Stop @ 14acc8f00

void __thiscall SEasyParticle::Stop(SEasyParticle *this)

{
  EWidgetUpdateFlags EVar1;
  UEasyParticleRootState *this_00;
  EWidgetUpdateFlags EVar2;
  
  this_00 = (this->RootEmitter).field0_0x0.DebugPtr;
  if (this_00 != (UEasyParticleRootState *)0x0) {
    UEasyParticleRootState::Stop(this_00);
  }
  EVar1 = (EWidgetUpdateFlags)this->_padding_;
  EVar2 = EVar1 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar2;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar2);
  this->isActivity = false;
  return;
}

// StopEmit @ 14acc8ff0

void __thiscall SEasyParticle::StopEmit(SEasyParticle *this)

{
  UEasyParticleRootState *pUVar1;
  
  pUVar1 = (this->RootEmitter).field0_0x0.DebugPtr;
  if (pUVar1 != (UEasyParticleRootState *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014acc8fff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x2d0))();
    return;
  }
  return;
}

// Tick @ 14acc9310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEasyParticle::Tick(SEasyParticle *this,FGeometry *param_1,double param_2,float param_3)

{
  int *piVar1;
  EWidgetUpdateFlags EVar2;
  UEasyParticleRootState *pUVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_EasyParticleTickTime> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  EWidgetUpdateFlags EVar14;
  FNameEntryId FVar15;
  longlong *plVar16;
  LARGE_INTEGER local_res8;
  undefined1 local_78 [12];
  uint local_6c;
  FName local_60;
  
  plVar16 = (longlong *)0x0;
  FVar15.Value = 0;
  FVar10 = StatPtr_STAT_EasyParticleTickTime;
  if (StatPtr_STAT_EasyParticleTickTime ==
      (FThreadSafeStaticStat<FStat_STAT_EasyParticleTickTime>)0x0) {
    pFVar9 = ::FName::FName((FName *)local_78,"STAT_EasyParticleTickTime");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_EasyParticleTickTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EasyParticleTickTime,*pFVar9,
                        L"UIParticle Tick","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\UIParticle\\Source\\EasyParticle\\Private\\Widget\\SEasyParticle.cpp"
                   ,10);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar12.Value;
      local_res8.s.HighPart = uVar11;
      local_60 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      FVar15.Value = local_60.ComparisonIndex.Value;
      goto LAB_14acc948c;
    }
  }
  bVar5 = false;
  FVar13 = local_60;
LAB_14acc948c:
  SWidget::Tick((SWidget *)this,param_1,param_2,param_3);
  if (this->FirstTick == false) {
    if (this->isActivity == false) {
      EVar2 = (EWidgetUpdateFlags)this->_padding_;
      EVar14 = EVar2 & ~NeedsTick;
      *(EWidgetUpdateFlags *)&this->_padding_ = EVar14;
      FWidgetProxyHandle::UpdateWidgetFlags
                ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar2,EVar14);
    }
    pUVar3 = (this->RootEmitter).field0_0x0.DebugPtr;
    if (pUVar3 != (UEasyParticleRootState *)0x0) {
      (**(code **)(pUVar3->_padding_ + 0x2b0))(pUVar3,param_1,param_3);
    }
    pUVar3 = (this->RootEmitter).field0_0x0.DebugPtr;
    if ((pUVar3 == (UEasyParticleRootState *)0x0) ||
       (cVar7 = (**(code **)(pUVar3->_padding_ + 0x2c0))(), cVar7 != '\0')) {
      EVar2 = (EWidgetUpdateFlags)this->_padding_;
      EVar14 = EVar2 & ~NeedsTick;
      *(EWidgetUpdateFlags *)&this->_padding_ = EVar14;
      FWidgetProxyHandle::UpdateWidgetFlags
                ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar2,EVar14);
      this->isActivity = false;
      bVar8 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ParticleEnd);
      if (bVar8) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ParticleEnd,
                   (FReadAccessScope *)local_78);
        if (*(int *)&(this->ParticleEnd).field_0x10 != 0) {
          plVar16 = *(longlong **)&(this->ParticleEnd).field_0x8;
        }
        (**(code **)(*plVar16 + 0x60))(plVar16);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)local_78);
      }
    }
  }
  else {
    this->FirstTick = false;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_6c = FVar13.Number & 0xffff6fff | 0x6000;
      local_78._8_4_ = FVar15.Value;
      QueryPerformanceCounter(&local_res8);
      local_78._4_4_ = 0;
      local_78._0_4_ = local_res8.s.LowPart;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_78);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

