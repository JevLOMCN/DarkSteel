// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// SDebugCanvas @ 1486961d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

SDebugCanvas * __thiscall SDebugCanvas::SDebugCanvas(SDebugCanvas *this)

{
  EWidgetUpdateFlags EVar1;
  EWidgetUpdateFlags EVar2;
  
  SLeafWidget::SLeafWidget((SLeafWidget *)this);
  this->_padding_ = (longlong)&___7SDebugCanvas__6B_;
  (this->SceneViewport).Value = (FSceneViewport *)0x0;
  (this->SceneViewport).bIsSet = false;
  *(undefined8 *)&(this->SceneViewport).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SceneViewport).Getter = 0;
  *(undefined8 *)&(this->SceneViewport).Getter.field_0x8 = 0;
  EVar1 = (EWidgetUpdateFlags)this->_padding_;
  EVar2 = EVar1 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar2;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar2);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  return this;
}

// ComputeDesiredSize @ 1486a9a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TVector2<double> * __thiscall
SDebugCanvas::ComputeDesiredSize
          (SDebugCanvas *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  FSceneViewport *pFVar1;
  undefined8 uVar2;
  FSceneViewport **ppFVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [32];
  
  ppFVar3 = TAttribute<FSceneViewport_*>::Get(&this->SceneViewport);
  pFVar1 = *ppFVar3;
  if (pFVar1 != (FSceneViewport *)0x0) {
    puVar4 = (undefined8 *)(**(code **)(pFVar1->_padding_ + 0x28))(&pFVar1->_padding_,local_res8);
    uVar2 = *puVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(int)uVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(int)((ulonglong)uVar2 >> 0x20);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// Construct @ 1486a9c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall SDebugCanvas::Construct(SDebugCanvas *this,FArguments *param_1)

{
  (this->SceneViewport).Value = (param_1->_SceneViewport).Value;
  (this->SceneViewport).bIsSet = (param_1->_SceneViewport).bIsSet;
  TDelegate<FSceneViewport_*___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->SceneViewport).Getter,&(param_1->_SceneViewport).Getter);
  return;
}

// OnPaint @ 1486d63d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __thiscall
SDebugCanvas::OnPaint
          (SDebugCanvas *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:_virtual_int___cdecl_SDebugCanvas::OnPaint(FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_&,int,FWidgetStyle_const_&,bool)const_::_2_::FStat_STAT_SlatePaintDebugCanvas>
  FVar6;
  FSceneViewport **ppFVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res8;
  FStatMessage local_38;
  FName local_28;
  
  FVar11.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_SlatePaintDebugCanvas ==
          (FThreadSafeStaticStat<_public:_virtual_int___cdecl_SDebugCanvas::OnPaint(FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_&,int,FWidgetStyle_const_&,bool)const_::_2_::FStat_STAT_SlatePaintDebugCanvas>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_res8.s,"STAT_SlatePaintDebugCanvas");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlatePaintDebugCanvas,*pFVar5,
                   L"STAT_SlatePaintDebugCanvas","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_STAT_SlatePaintDebugCanvas;
  if (StatPtr_STAT_SlatePaintDebugCanvas ==
      (FThreadSafeStaticStat<_public:_virtual_int___cdecl_SDebugCanvas::OnPaint(FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_&,int,FWidgetStyle_const_&,bool)const_::_2_::FStat_STAT_SlatePaintDebugCanvas>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_38,"STAT_SlatePaintDebugCanvas");
    FVar6 = (FThreadSafeStaticStat<_public:_virtual_int___cdecl_SDebugCanvas::OnPaint(FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_&,int,FWidgetStyle_const_&,bool)const_::_2_::FStat_STAT_SlatePaintDebugCanvas>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlatePaintDebugCanvas,*pFVar5,
                         L"STAT_SlatePaintDebugCanvas","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
                         ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_28.ComparisonIndex.Value = 0;
  local_28.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\DebugCanvas.cpp"
                   ,0x15e);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      local_28 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_28.ComparisonIndex.Value;
      goto LAB_1486d655b;
    }
  }
  bVar3 = false;
  FVar10 = local_28;
LAB_1486d655b:
  ppFVar7 = TAttribute<FSceneViewport_*>::Get(&this->SceneViewport);
  if (*ppFVar7 != (FSceneViewport *)0x0) {
    FSceneViewport::PaintDebugCanvas(*ppFVar7,param_2,param_4,param_5);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return param_5;
}

// SetSceneViewport @ 1486ef5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall SDebugCanvas::SetSceneViewport(SDebugCanvas *this,FSceneViewport *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  FSceneViewport **ppFVar3;
  TSharedRef<SWidget,1> *pTVar4;
  FDestructionSentinel local_48;
  FSceneViewport *local_30;
  undefined1 local_28;
  undefined1 local_20 [8];
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  ppFVar3 = TAttribute<FSceneViewport_*>::Get(&this->SceneViewport);
  if (*ppFVar3 != (FSceneViewport *)0x0) {
    local_48.AccessType = Reader;
    local_48._4_4_ = 0;
    local_48.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
    FSceneViewport::SetDebugCanvas(*ppFVar3,(TSharedPtr<SDebugCanvas,1> *)&local_48);
  }
  local_10 = 0;
  local_28 = 1;
  local_20 = (undefined1  [8])0x0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  (this->SceneViewport).Value = param_1;
  (this->SceneViewport).bIsSet = true;
  local_30 = param_1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SceneViewport).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20,
             (FWriteAccessScope *)&local_48);
  if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
    local_10 = local_10 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  if (param_1 != (FSceneViewport *)0x0) {
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)&local_48);
    pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar4->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_48.Accessor);
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_48.Accessor);
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48._0_8_ = pSVar2;
    local_48.Accessor = (FMRSWRecursiveAccessDetector *)pTVar1;
    FSceneViewport::SetDebugCanvas(param_1,(TSharedPtr<SDebugCanvas,1> *)&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

