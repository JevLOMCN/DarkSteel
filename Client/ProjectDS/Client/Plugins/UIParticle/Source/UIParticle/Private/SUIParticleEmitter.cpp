// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 11

// ComputeDesiredSize @ 14ac93c90

TVector2<double> * __thiscall
SUIParticleEmitter::ComputeDesiredSize
          (SUIParticleEmitter *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// GetParticleCount @ 14ac987a0

int __thiscall SUIParticleEmitter::GetParticleCount(SUIParticleEmitter *this)

{
  FEasyParticleRootState *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lStackX_8;
  
  pFVar1 = (this->RootEmitter).Object;
  if (pFVar1 == (FEasyParticleRootState *)0x0) {
    return 0;
  }
  uVar8 = 0;
  if (pFVar1->field_0x3d8 == '\0') {
    uVar8 = (uint)(pFVar1->field_0x3da == '\0');
  }
  uVar7 = 0;
  if (0 < *(int *)&pFVar1->field_0xf0) {
    lStackX_8 = 0;
    do {
      uVar6 = 0;
      lVar10 = 0;
      while( true ) {
        uVar4 = 0;
        if ((int)uVar7 < *(int *)&pFVar1->field_0xf0) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        if (*(int *)(lStackX_8 + 0x18 + *(longlong *)&pFVar1->field_0xe8) <= (int)uVar6) break;
        uVar4 = 0;
        if ((int)uVar7 < *(int *)&pFVar1->field_0xf0) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        lVar9 = (longlong)(int)uVar7 * 0x50 + *(longlong *)&pFVar1->field_0xe8;
        uVar4 = 0;
        if ((int)uVar6 < *(int *)(lVar9 + 0x18)) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        iVar5 = FEasyParticleState::GetChildrenParticleCount
                          (*(FEasyParticleState **)(lVar10 + *(longlong *)(lVar9 + 0x10)));
        uVar8 = uVar8 + iVar5;
        uVar6 = uVar6 + 1;
        lVar10 = lVar10 + 8;
      }
      lStackX_8 = lStackX_8 + 0x50;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < *(int *)&pFVar1->field_0xf0);
  }
  return uVar8;
}

// GetParticleCountInPool @ 14ac98900

int __thiscall SUIParticleEmitter::GetParticleCountInPool(SUIParticleEmitter *this)

{
  FEasyParticleRootState *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lStackX_8;
  
  pFVar1 = (this->RootEmitter).Object;
  if (pFVar1 == (FEasyParticleRootState *)0x0) {
    return 0;
  }
  uVar8 = 0;
  if (pFVar1->field_0x3d8 == '\0') {
    uVar8 = (uint)(pFVar1->field_0x3da != '\0');
  }
  uVar7 = 0;
  if (0 < *(int *)&pFVar1->field_0xf0) {
    lStackX_8 = 0;
    do {
      uVar6 = 0;
      lVar10 = 0;
      while( true ) {
        uVar4 = 0;
        if ((int)uVar7 < *(int *)&pFVar1->field_0xf0) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        if (*(int *)(lStackX_8 + 0x18 + *(longlong *)&pFVar1->field_0xe8) <= (int)uVar6) break;
        uVar4 = 0;
        if ((int)uVar7 < *(int *)&pFVar1->field_0xf0) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        lVar9 = (longlong)(int)uVar7 * 0x50 + *(longlong *)&pFVar1->field_0xe8;
        uVar4 = 0;
        if ((int)uVar6 < *(int *)(lVar9 + 0x18)) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        iVar5 = FEasyParticleState::GetChildrenParticleCountInPool
                          (*(FEasyParticleState **)(lVar10 + *(longlong *)(lVar9 + 0x10)));
        uVar8 = uVar8 + iVar5;
        uVar6 = uVar6 + 1;
        lVar10 = lVar10 + 8;
      }
      lStackX_8 = lStackX_8 + 0x50;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < *(int *)&pFVar1->field_0xf0);
  }
  return uVar8;
}

// InitWithAsset @ 14ac9ae60

void __thiscall
SUIParticleEmitter::InitWithAsset(SUIParticleEmitter *this,UUIParticleEmitterAsset *param_1)

{
  TSharedPtr<FEasyParticleRootState,1> *this_00;
  code *pcVar1;
  bool bVar2;
  FUIParticleFactory *this_01;
  FUIParticleFactory *pFVar3;
  FEasyParticleRootState *this_02;
  TRawPtrProxy<FEasyParticleRootState> local_res8;
  TSharedPtr<FEasyParticleRootState,1> local_18;
  
  this->isActivity = false;
  if (param_1 != (UUIParticleEmitterAsset *)0x0) {
    this_00 = &this->RootEmitter;
    this_02 = this_00->Object;
    if (this_02 == (FEasyParticleRootState *)0x0) {
      local_res8.Object = ::operator_new(0x420);
      if (local_res8.Object == (FEasyParticleRootState *)0x0) {
        local_res8.Object = (FEasyParticleRootState *)0x0;
      }
      else {
        FEasyParticleState::FEasyParticleState((FEasyParticleState *)local_res8.Object);
        (local_res8.Object)->FirstRootTick = false;
        *(undefined ***)local_res8.Object = &___7FEasyParticleRootState__6B_;
        (local_res8.Object)->field_0x3d8 = true;
      }
      TSharedPtr<FEasyParticleRootState,1>::operator=<FEasyParticleRootState>(this_00,&local_res8);
      pFVar3 = FUIParticleFactory::m_Instance;
      if (FUIParticleFactory::m_Instance == (FUIParticleFactory *)0x0) {
        this_01 = ::operator_new(0x30);
        pFVar3 = (FUIParticleFactory *)0x0;
        if (this_01 != (FUIParticleFactory *)0x0) {
          pFVar3 = FUIParticleFactory::FUIParticleFactory(this_01);
        }
      }
      FUIParticleFactory::m_Instance = pFVar3;
      pFVar3 = FUIParticleFactory::m_Instance;
      local_18.SharedReferenceCount.ReferenceController =
           (this->RootEmitter).SharedReferenceCount.ReferenceController;
      local_18.Object = this_00->Object;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_18.Object != (FEasyParticleRootState *)0x0) {
        TArray<TSharedPtr<FEasyParticleRootState,1>,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<TSharedPtr<FEasyParticleRootState,1>_const_&>
                  (&pFVar3->ParticleRefArray,&local_18);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      if ((this_00->Object == (FEasyParticleRootState *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_02 = this_00->Object;
    }
    FEasyParticleRootState::InitRoot(this_02,param_1,0.0,0);
  }
  return;
}

// IsEnd @ 14ac9b650

bool __thiscall SUIParticleEmitter::IsEnd(SUIParticleEmitter *this)

{
  FEasyParticleRootState *this_00;
  code *pcVar1;
  bool bVar2;
  
  this_00 = (this->RootEmitter).Object;
  if (this_00 == (FEasyParticleRootState *)0x0) {
    return true;
  }
  bVar2 = FEasyParticleState::IsEmitterEnd((FEasyParticleState *)this_00);
  if (bVar2) {
    if (((this->RootEmitter).Object == (FEasyParticleRootState *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
    bVar2 = FEasyParticleState::IsAllChildrenEnd((FEasyParticleState *)(this->RootEmitter).Object);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// OnPaint @ 14ac9c3a0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SUIParticleEmitter::OnPaint
          (SUIParticleEmitter *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  FUIParticleFactory *this_00;
  
  if ((this->RootEmitter).Object != (FEasyParticleRootState *)0x0) {
    if (FUIParticleFactory::m_Instance == (FUIParticleFactory *)0x0) {
      this_00 = ::operator_new(0x30);
      if (this_00 == (FUIParticleFactory *)0x0) {
        FUIParticleFactory::m_Instance = (FUIParticleFactory *)0x0;
      }
      else {
        FUIParticleFactory::m_Instance = FUIParticleFactory::FUIParticleFactory(this_00);
      }
    }
    FUIParticleFactory::OnRootPaint
              (FUIParticleFactory::m_Instance,(this->RootEmitter).Object,param_1,param_2,param_3,
               param_4,param_5,param_6,param_7);
  }
  return param_5;
}

// Play @ 14ac9da20

void __thiscall SUIParticleEmitter::Play(SUIParticleEmitter *this)

{
  EWidgetUpdateFlags EVar1;
  FEasyParticleRootState *this_00;
  EWidgetUpdateFlags EVar2;
  
  this_00 = (this->RootEmitter).Object;
  if (this_00 != (FEasyParticleRootState *)0x0) {
    FEasyParticleRootState::ResetRoot(this_00);
    EVar1 = (EWidgetUpdateFlags)this->_padding_;
    EVar2 = EVar1 | NeedsTick;
    *(EWidgetUpdateFlags *)&this->_padding_ = EVar2;
    FWidgetProxyHandle::UpdateWidgetFlags
              ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar2);
    this->isActivity = true;
  }
  return;
}

// SetOnParticleEnd @ 14aca0100

void __thiscall
SUIParticleEmitter::SetOnParticleEnd
          (SUIParticleEmitter *this,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->ParticleEnd,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return;
}

// Stop @ 14aca05c0

void __thiscall SUIParticleEmitter::Stop(SUIParticleEmitter *this)

{
  EWidgetUpdateFlags EVar1;
  FEasyParticleRootState *this_00;
  EWidgetUpdateFlags EVar2;
  
  this_00 = (this->RootEmitter).Object;
  if (this_00 != (FEasyParticleRootState *)0x0) {
    FEasyParticleRootState::ResetRoot(this_00);
  }
  EVar1 = (EWidgetUpdateFlags)this->_padding_;
  EVar2 = EVar1 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar2;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar2);
  this->isActivity = false;
  return;
}

// StopEmit @ 14aca0890

void __thiscall SUIParticleEmitter::StopEmit(SUIParticleEmitter *this)

{
  FEasyParticleRootState *pFVar1;
  
  pFVar1 = (this->RootEmitter).Object;
  if (pFVar1 != (FEasyParticleRootState *)0x0) {
    pFVar1->field_0x3d9 = 1;
  }
  return;
}

// Tick @ 14aca1530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SUIParticleEmitter::Tick(SUIParticleEmitter *this,FGeometry *param_1,double param_2,float param_3)

{
  int *piVar1;
  TSharedPtr<FEasyParticleRootState,1> *this_00;
  EWidgetUpdateFlags EVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_UIParticleTickTime> FVar9;
  FEasyParticleRootState *this_01;
  FUIParticleFactory *this_02;
  FUIParticleFactory *pFVar10;
  FThreadStats *this_03;
  FThreadStatsPool *this_04;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  FUIParticleFactory *pFVar14;
  EWidgetUpdateFlags EVar15;
  FColor_u_0 local_res8 [2];
  FName local_88;
  LARGE_INTEGER local_80;
  FName local_78;
  FName local_70;
  FStatMessage local_60;
  FReadAccessScope local_50 [2];
  
  pFVar14 = (FUIParticleFactory *)0x0;
  FVar9 = StatPtr_STAT_UIParticleTickTime;
  if (StatPtr_STAT_UIParticleTickTime == (FThreadSafeStaticStat<FStat_STAT_UIParticleTickTime>)0x0)
  {
    pFVar8 = ::FName::FName(&local_78,"STAT_UIParticleTickTime");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_UIParticleTickTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UIParticleTickTime,*pFVar8,
                       L"UIParticle Tick","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value == 0) && (uVar11 == 0)) {
LAB_14aca1681:
    bVar5 = false;
    FVar13 = local_70;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_88.ComparisonIndex.Value = FVar12.Value;
        local_88.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_88,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\UIParticle\\Source\\UIParticle\\Private\\Widget\\SUIParticleEmitter.cpp"
                   ,0x1d);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14aca1681;
    local_80.s.LowPart = FVar12.Value;
    local_80.s.HighPart = uVar11;
    FThreadStats::AddMessage(FVar13,CycleScopeStart);
    bVar5 = true;
  }
  SWidget::Tick((SWidget *)this,param_1,param_2,param_3);
  if (this->FirstTick != false) {
    this->FirstTick = false;
    goto LAB_14aca1843;
  }
  if (this->isActivity == false) {
    EVar2 = (EWidgetUpdateFlags)this->_padding_;
    EVar15 = EVar2 & ~NeedsTick;
    *(EWidgetUpdateFlags *)&this->_padding_ = EVar15;
    FWidgetProxyHandle::UpdateWidgetFlags
              ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar2,EVar15);
  }
  this_00 = &this->RootEmitter;
  if (this_00->Object != (FEasyParticleRootState *)0x0) {
    if (this_00->Object->FirstRootTick != false) {
      this_01 = TSharedPtr<FEasyParticleRootState,1>::operator->(this_00);
      FEasyParticleRootState::FirstTick(this_01,param_3,param_1);
    }
    pFVar10 = FUIParticleFactory::m_Instance;
    if ((FUIParticleFactory::m_Instance == (FUIParticleFactory *)0x0) &&
       (this_02 = ::operator_new(0x30), pFVar10 = pFVar14, this_02 != (FUIParticleFactory *)0x0)) {
      pFVar10 = FUIParticleFactory::FUIParticleFactory(this_02);
    }
    FUIParticleFactory::m_Instance = pFVar10;
    if (UUIParticleUtility::Multi_Thread == false) {
      FUIParticleFactory::Tick(FUIParticleFactory::m_Instance,this_00->Object,param_3,param_1);
    }
    else {
      FUIParticleFactory::ParallelTick
                (FUIParticleFactory::m_Instance,this_00->Object,param_3,param_1);
    }
    if ((this_00->Object == (FEasyParticleRootState *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FEasyParticleState::TrySpawnParticle((FEasyParticleState *)this_00->Object,param_1);
  }
  if (this_00->Object != (FEasyParticleRootState *)0x0) {
    bVar7 = FEasyParticleState::IsEmitterEnd((FEasyParticleState *)this_00->Object);
    if (!bVar7) goto LAB_14aca1843;
    if ((this_00->Object == (FEasyParticleRootState *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar7 = FEasyParticleState::IsAllChildrenEnd((FEasyParticleState *)this_00->Object);
    if (!bVar7) goto LAB_14aca1843;
  }
  EVar2 = (EWidgetUpdateFlags)this->_padding_;
  EVar15 = EVar2 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar15;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar2,EVar15);
  this->isActivity = false;
  bVar7 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ParticleEnd);
  if (bVar7) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ParticleEnd,local_50
              );
    if (*(int *)&(this->ParticleEnd).field_0x10 != 0) {
      pFVar14 = *(FUIParticleFactory **)&(this->ParticleEnd).field_0x8;
    }
    (**(code **)(pFVar14->_padding_ + 0x60))(pFVar14);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_50);
  }
LAB_14aca1843:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_03 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_03 == (FThreadStats *)0x0) {
      this_04 = FThreadStatsPool::Get();
      this_03 = FThreadStatsPool::GetFromPool(this_04);
    }
    if (this_03->bWaitForExplicitFlush < this_03->ScopeCount) {
      local_60.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_60.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_80);
      local_60.StatData.Pad[4] = '\0';
      local_60.StatData.Pad[5] = '\0';
      local_60.StatData.Pad[6] = '\0';
      local_60.StatData.Pad[7] = '\0';
      local_60.StatData.Pad[0] = local_80.s.LowPart._0_1_;
      local_60.StatData.Pad[1] = local_80.s.LowPart._1_1_;
      local_60.StatData.Pad[2] = local_80.s.LowPart._2_1_;
      local_60.StatData.Pad[3] = local_80.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_03,&local_60);
      piVar1 = &this_03->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_03,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_03,false,false);
      }
    }
  }
  return;
}

