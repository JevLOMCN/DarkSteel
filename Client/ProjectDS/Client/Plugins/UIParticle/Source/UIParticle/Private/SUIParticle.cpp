// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 11

// ComputeDesiredSize @ 14ac93c70

TVector2<double> * __thiscall
SUIParticle::ComputeDesiredSize
          (SUIParticle *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// GetParticleCount @ 14ac986f0

int __thiscall SUIParticle::GetParticleCount(SUIParticle *this)

{
  int iVar1;
  FEasyParticleGroupState *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FEasyParticleState *this_00;
  int iVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  pFVar2 = (this->EmitterGroup).Object;
  if (pFVar2 != (FEasyParticleGroupState *)0x0) {
    pFVar5 = (pFVar2->Emitters).AllocatorInstance.Data;
    iVar6 = 0;
    iVar1 = (pFVar2->Emitters).ArrayNum;
    pFVar7 = pFVar5 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pFVar2->Emitters).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar7) break;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar5 + 8);
      this_00 = *(FEasyParticleState **)pFVar5;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this_00 != (FEasyParticleState *)0x0) {
        iVar4 = FEasyParticleState::GetChildrenParticleCount(this_00);
        iVar6 = iVar6 + iVar4;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      pFVar5 = pFVar5 + 0x10;
    }
    return iVar6;
  }
  return 0;
}

// GetParticleCountInPool @ 14ac98850

int __thiscall SUIParticle::GetParticleCountInPool(SUIParticle *this)

{
  int iVar1;
  FEasyParticleGroupState *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FEasyParticleState *this_00;
  int iVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  pFVar2 = (this->EmitterGroup).Object;
  if (pFVar2 != (FEasyParticleGroupState *)0x0) {
    pFVar5 = (pFVar2->Emitters).AllocatorInstance.Data;
    iVar6 = 0;
    iVar1 = (pFVar2->Emitters).ArrayNum;
    pFVar7 = pFVar5 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pFVar2->Emitters).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar7) break;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar5 + 8);
      this_00 = *(FEasyParticleState **)pFVar5;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this_00 != (FEasyParticleState *)0x0) {
        iVar4 = FEasyParticleState::GetChildrenParticleCountInPool(this_00);
        iVar6 = iVar6 + iVar4;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      pFVar5 = pFVar5 + 0x10;
    }
    return iVar6;
  }
  return 0;
}

// Init @ 14ac99a90

void __thiscall SUIParticle::Init(SUIParticle *this,UUIParticleAsset *param_1)

{
  TSharedPtr<FEasyParticleGroupState,1> *this_00;
  code *pcVar1;
  bool bVar2;
  FEasyParticleGroupState *pFVar3;
  TRawPtrProxy<FEasyParticleGroupState> local_res8;
  
  this->isActivity = false;
  if (param_1 != (UUIParticleAsset *)0x0) {
    this_00 = &this->EmitterGroup;
    pFVar3 = this_00->Object;
    if (pFVar3 == (FEasyParticleGroupState *)0x0) {
      pFVar3 = ::operator_new(0x18);
      local_res8.Object = (FEasyParticleGroupState *)0x0;
      if (pFVar3 != (FEasyParticleGroupState *)0x0) {
        (pFVar3->Emitters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar3->Emitters).ArrayNum = 0;
        (pFVar3->Emitters).ArrayMax = 0;
        local_res8.Object = pFVar3;
      }
      TSharedPtr<FEasyParticleGroupState,1>::operator=<FEasyParticleGroupState>(this_00,&local_res8)
      ;
      if ((this_00->Object == (FEasyParticleGroupState *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar3 = this_00->Object;
    }
    FEasyParticleGroupState::InitWithAsset(pFVar3,param_1);
  }
  return;
}

// IsEnd @ 14ac9b580

bool __thiscall SUIParticle::IsEnd(SUIParticle *this)

{
  int iVar1;
  FEasyParticleGroupState *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FEasyParticleState *this_00;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar2 = (this->EmitterGroup).Object;
  if (pFVar2 == (FEasyParticleGroupState *)0x0) {
    return true;
  }
  pFVar5 = (pFVar2->Emitters).AllocatorInstance.Data;
  iVar1 = (pFVar2->Emitters).ArrayNum;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((pFVar2->Emitters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) {
      return true;
    }
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar5 + 8);
    this_00 = *(FEasyParticleState **)pFVar5;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this_00 != (FEasyParticleState *)0x0) &&
       ((bVar4 = FEasyParticleState::IsEmitterEnd(this_00), !bVar4 ||
        (bVar4 = FEasyParticleState::IsAllChildrenEnd(this_00), !bVar4)))) break;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pFVar5 = pFVar5 + 0x10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return false;
}

// OnPaint @ 14ac9c240

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SUIParticle::OnPaint
          (SUIParticle *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  int iVar1;
  FEasyParticleGroupState *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FEasyParticleRootState *pFVar4;
  int iVar5;
  FUIParticleFactory *this_00;
  FUIParticleFactory *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  
  iVar5 = param_5;
  pFVar2 = (this->EmitterGroup).Object;
  if (pFVar2 == (FEasyParticleGroupState *)0x0) {
    return param_5;
  }
  pFVar7 = (pFVar2->Emitters).AllocatorInstance.Data;
  iVar1 = (pFVar2->Emitters).ArrayNum;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((pFVar2->Emitters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&param_5);
    }
    if (pFVar7 == pFVar8) break;
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
    pFVar4 = *(FEasyParticleRootState **)pFVar7;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar4 != (FEasyParticleRootState *)0x0) {
      pFVar6 = FUIParticleFactory::m_Instance;
      if (FUIParticleFactory::m_Instance == (FUIParticleFactory *)0x0) {
        this_00 = ::operator_new(0x30);
        pFVar6 = (FUIParticleFactory *)0x0;
        if (this_00 != (FUIParticleFactory *)0x0) {
          pFVar6 = FUIParticleFactory::FUIParticleFactory(this_00);
        }
      }
      FUIParticleFactory::m_Instance = pFVar6;
      FUIParticleFactory::OnRootPaint
                (FUIParticleFactory::m_Instance,pFVar4,param_1,param_2,param_3,param_4,iVar5,param_6
                 ,param_7);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pFVar7 = pFVar7 + 0x10;
  }
  return iVar5;
}

// Play @ 14ac9d930

void __thiscall SUIParticle::Play(SUIParticle *this)

{
  EWidgetUpdateFlags EVar1;
  int iVar2;
  FEasyParticleGroupState *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FEasyParticleRootState *this_00;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  EWidgetUpdateFlags EVar8;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->EmitterGroup).Object;
  if (pFVar3 != (FEasyParticleGroupState *)0x0) {
    pFVar3->FirstRootTick = true;
    iVar2 = (pFVar3->Emitters).ArrayNum;
    pFVar6 = (pFVar3->Emitters).AllocatorInstance.Data;
    bVar5 = false;
    pFVar7 = pFVar6 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((pFVar3->Emitters).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar7) break;
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
      this_00 = *(FEasyParticleRootState **)pFVar6;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this_00 != (FEasyParticleRootState *)0x0) {
        FEasyParticleRootState::ResetRoot(this_00);
        bVar5 = true;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pFVar6 = pFVar6 + 0x10;
    }
    if (bVar5) {
      EVar1 = (EWidgetUpdateFlags)this->_padding_;
      EVar8 = EVar1 | NeedsTick;
      *(EWidgetUpdateFlags *)&this->_padding_ = EVar8;
      FWidgetProxyHandle::UpdateWidgetFlags
                ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar8);
      this->isActivity = true;
    }
  }
  return;
}

// SetOnParticleEnd @ 14aca00d0

void __thiscall
SUIParticle::SetOnParticleEnd
          (SUIParticle *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->ParticleEnd,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return;
}

// Stop @ 14aca04f0

void __thiscall SUIParticle::Stop(SUIParticle *this)

{
  EWidgetUpdateFlags EVar1;
  int iVar2;
  FEasyParticleGroupState *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FEasyParticleRootState *this_00;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  EWidgetUpdateFlags EVar7;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->EmitterGroup).Object;
  if (pFVar3 != (FEasyParticleGroupState *)0x0) {
    pFVar5 = (pFVar3->Emitters).AllocatorInstance.Data;
    iVar2 = (pFVar3->Emitters).ArrayNum;
    pFVar6 = pFVar5 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((pFVar3->Emitters).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar6) break;
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar5 + 8);
      this_00 = *(FEasyParticleRootState **)pFVar5;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this_00 != (FEasyParticleRootState *)0x0) {
        FEasyParticleRootState::ResetRoot(this_00);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pFVar5 = pFVar5 + 0x10;
    }
  }
  EVar1 = (EWidgetUpdateFlags)this->_padding_;
  EVar7 = EVar1 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar7;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar7);
  this->isActivity = false;
  return;
}

// StopEmit @ 14aca0800

void __thiscall SUIParticle::StopEmit(SUIParticle *this)

{
  int iVar1;
  FEasyParticleGroupState *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar2 = (this->EmitterGroup).Object;
  if (pFVar2 != (FEasyParticleGroupState *)0x0) {
    pFVar5 = (pFVar2->Emitters).AllocatorInstance.Data;
    iVar1 = (pFVar2->Emitters).ArrayNum;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pFVar2->Emitters).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar6) break;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar5 + 8);
      lVar4 = *(longlong *)pFVar5;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + 0x3d9) = 1;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      pFVar5 = pFVar5 + 0x10;
    }
  }
  return;
}

// Tick @ 14aca0f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SUIParticle::Tick(SUIParticle *this,FGeometry *param_1,double param_2,float param_3)

{
  int *piVar1;
  TSharedPtr<FEasyParticleGroupState,1> *this_00;
  EWidgetUpdateFlags EVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FEasyParticleRootState *pFVar5;
  FEasyParticleState *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_UIParticleTickTime> FVar13;
  FEasyParticleGroupState *pFVar14;
  FUIParticleFactory *this_01;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  longlong *plVar15;
  FName FVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  EWidgetUpdateFlags EVar19;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined1 local_b4 [4];
  FName local_b0;
  FColor_u_0 local_a8 [2];
  FName local_a0;
  FName local_98;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  FName local_70;
  FReadAccessScope local_68 [2];
  
  FVar13 = StatPtr_STAT_UIParticleTickTime;
  if (StatPtr_STAT_UIParticleTickTime == (FThreadSafeStaticStat<FStat_STAT_UIParticleTickTime>)0x0)
  {
    pFVar12 = ::FName::FName(&local_70,"STAT_UIParticleTickTime");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_UIParticleTickTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UIParticleTickTime,*pFVar12,
                        L"UIParticle Tick","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar13;
  bVar8 = false;
  bVar9 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  bVar10 = false;
  bVar11 = false;
  if ((FVar16.ComparisonIndex.Value.Value == 0) && (FVar16.Number == 0)) {
LAB_14aca1070:
    bVar9 = bVar11;
    bVar8 = bVar10;
    bVar10 = false;
    local_b0 = local_98;
    FVar16 = local_98;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar10 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
        local_a0.Number = FVar16.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\UIParticle\\Source\\UIParticle\\Private\\Widget\\SUIParticle.cpp"
                   ,0xc);
        bVar8 = true;
        bVar9 = true;
        bVar10 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14aca1070;
    local_b0 = FVar16;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar10 = true;
  }
  SWidget::Tick((SWidget *)this,param_1,param_2,param_3);
  if (this->FirstTick == false) {
    if (this->isActivity == false) {
      EVar2 = (EWidgetUpdateFlags)this->_padding_;
      EVar19 = EVar2 & ~NeedsTick;
      *(EWidgetUpdateFlags *)&this->_padding_ = EVar19;
      FWidgetProxyHandle::UpdateWidgetFlags
                ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar2,EVar19);
    }
    this_00 = &this->EmitterGroup;
    if (this_00->Object != (FEasyParticleGroupState *)0x0) {
      if (this_00->Object->FirstRootTick != false) {
        pFVar14 = TSharedPtr<FEasyParticleGroupState,1>::operator->(this_00);
        pFVar14->FirstRootTick = false;
        iVar3 = (pFVar14->Emitters).ArrayNum;
        pFVar18 = (pFVar14->Emitters).AllocatorInstance.Data;
        pFVar17 = pFVar18 + (longlong)iVar3 * 0x10;
        while( true ) {
          if ((pFVar14->Emitters).ArrayNum != iVar3) {
            local_b7 = 0;
            `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(&local_b7);
          }
          if (pFVar18 == pFVar17) break;
          pTVar4 = *(TReferenceControllerBase<1> **)(pFVar18 + 8);
          pFVar5 = *(FEasyParticleRootState **)pFVar18;
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (pFVar5 != (FEasyParticleRootState *)0x0) {
            FEasyParticleRootState::FirstTick(pFVar5,param_3,param_1);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
          pFVar18 = pFVar18 + 0x10;
        }
      }
      if ((this_00->Object == (FEasyParticleGroupState *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar14 = this_00->Object;
      iVar3 = (pFVar14->Emitters).ArrayNum;
      pFVar18 = (pFVar14->Emitters).AllocatorInstance.Data;
      pFVar17 = pFVar18 + (longlong)iVar3 * 0x10;
      while( true ) {
        if ((pFVar14->Emitters).ArrayNum != iVar3) {
          local_b6 = 0;
          `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_b6);
        }
        FVar16 = local_b0;
        if (pFVar18 == pFVar17) break;
        pTVar4 = *(TReferenceControllerBase<1> **)(pFVar18 + 8);
        pFVar5 = *(FEasyParticleRootState **)pFVar18;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pFVar5 == (FEasyParticleRootState *)0x0) {
LAB_14aca1247:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
          pFVar18 = pFVar18 + 0x10;
        }
        else {
          if (FUIParticleFactory::m_Instance == (FUIParticleFactory *)0x0) {
            this_01 = ::operator_new(0x30);
            if (this_01 == (FUIParticleFactory *)0x0) {
              FUIParticleFactory::m_Instance = (FUIParticleFactory *)0x0;
            }
            else {
              FUIParticleFactory::m_Instance = FUIParticleFactory::FUIParticleFactory(this_01);
            }
          }
          if (UUIParticleUtility::Multi_Thread != false) {
            FUIParticleFactory::ParallelTick(FUIParticleFactory::m_Instance,pFVar5,param_3,param_1);
            goto LAB_14aca1247;
          }
          FUIParticleFactory::Tick(FUIParticleFactory::m_Instance,pFVar5,param_3,param_1);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
          pFVar18 = pFVar18 + 0x10;
        }
      }
      if (((this->EmitterGroup).Object == (FEasyParticleGroupState *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar14 = (this->EmitterGroup).Object;
      iVar3 = (pFVar14->Emitters).ArrayNum;
      pFVar18 = (pFVar14->Emitters).AllocatorInstance.Data;
      pFVar17 = pFVar18 + (longlong)iVar3 * 0x10;
      while( true ) {
        if ((pFVar14->Emitters).ArrayNum != iVar3) {
          `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_b5);
        }
        if (pFVar18 == pFVar17) break;
        pTVar4 = *(TReferenceControllerBase<1> **)(pFVar18 + 8);
        pFVar6 = *(FEasyParticleState **)pFVar18;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pFVar6 != (FEasyParticleState *)0x0) {
          FEasyParticleState::TrySpawnParticle(pFVar6,param_1);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        pFVar18 = pFVar18 + 0x10;
      }
    }
    pFVar14 = (this->EmitterGroup).Object;
    if (pFVar14 != (FEasyParticleGroupState *)0x0) {
      iVar3 = (pFVar14->Emitters).ArrayNum;
      pFVar18 = (pFVar14->Emitters).AllocatorInstance.Data;
      pFVar17 = pFVar18 + (longlong)iVar3 * 0x10;
      while( true ) {
        if ((pFVar14->Emitters).ArrayNum != iVar3) {
          `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_b4);
        }
        if (pFVar18 == pFVar17) {
          bVar11 = true;
          goto LAB_14aca1376;
        }
        pTVar4 = *(TReferenceControllerBase<1> **)(pFVar18 + 8);
        pFVar6 = *(FEasyParticleState **)pFVar18;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((pFVar6 != (FEasyParticleState *)0x0) &&
           ((bVar11 = FEasyParticleState::IsEmitterEnd(pFVar6), !bVar11 ||
            (bVar11 = FEasyParticleState::IsAllChildrenEnd(pFVar6), !bVar11)))) break;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        pFVar18 = pFVar18 + 0x10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      bVar11 = false;
LAB_14aca1376:
      if (!bVar11) goto LAB_14aca1401;
    }
    EVar2 = (EWidgetUpdateFlags)this->_padding_;
    EVar19 = EVar2 & ~NeedsTick;
    *(EWidgetUpdateFlags *)&this->_padding_ = EVar19;
    FWidgetProxyHandle::UpdateWidgetFlags
              ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar2,EVar19);
    this->isActivity = false;
    bVar11 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                       ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ParticleEnd);
    if (bVar11) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ParticleEnd,
                 local_68);
      if (*(int *)&(this->ParticleEnd).field_0x10 == 0) {
        plVar15 = (longlong *)0x0;
      }
      else {
        plVar15 = *(longlong **)&(this->ParticleEnd).field_0x8;
      }
      (**(code **)(*plVar15 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_68);
    }
  }
  else {
    this->FirstTick = false;
  }
LAB_14aca1401:
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar10) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_80.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_80.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_80);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

