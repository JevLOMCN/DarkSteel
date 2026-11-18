// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 2

// GetMetaData<FInvisibleToWidgetReflectorMetaData> @ 142df5060

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> * __thiscall
SWidget::GetMetaData<FInvisibleToWidgetReflectorMetaData>
          (SWidget *this,TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FInvisibleToWidgetReflectorMetaData *pFVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData> FVar10;
  ulonglong uVar11;
  uint uVar12;
  FColor_u_0 FVar13;
  FName FVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FName local_res18 [2];
  
  FVar10 = StatPtr_STAT_SlateGetMetaData;
  if (StatPtr_STAT_SlateGetMetaData == (FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData>)0x0) {
    pFVar9 = ::FName::FName(local_res18,"STAT_SlateGetMetaData");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateGetMetaData,*pFVar9,
                        L"SWidget MetaData","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  FVar13.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Bits != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.Bits = FVar13.Bits;
        uStackX_c = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8._s_0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Widgets\\SWidget.h"
                   ,0x541);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar13.Bits;
      uStackX_c = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_142df51b7;
    }
  }
  bVar6 = false;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
LAB_142df51b7:
  local_res18[0].ComparisonIndex.Value = (this->MetaData).ArrayNum;
  uVar11 = (ulonglong)(int)local_res18[0].ComparisonIndex.Value;
  pFVar16 = (this->MetaData).AllocatorInstance.Data;
  pFVar15 = pFVar16 + uVar11 * 0x10;
  while( true ) {
    if ((this->MetaData).ArrayNum != (int)uVar11) {
      `TCheckedPointerIterator<TSharedRef<ISlateMetaData,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar16 == pFVar15) break;
    plVar1 = *(longlong **)pFVar16;
    pcVar2 = *(code **)(*plVar1 + 8);
    pFVar9 = FInvisibleToWidgetReflectorMetaData::GetTypeId();
    cVar8 = (*pcVar2)(plVar1,pFVar9);
    if (cVar8 != '\0') {
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar16 + 8);
      pFVar4 = *(FInvisibleToWidgetReflectorMetaData **)pFVar16;
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        __return_storage_ptr__->Object = pFVar4;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        __return_storage_ptr__->Object = pFVar4;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      }
LAB_142df5252:
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar6) {
        FThreadStats::AddMessage(FVar14,CycleScopeEnd);
      }
      return __return_storage_ptr__;
    }
    uVar11 = (ulonglong)local_res18[0].ComparisonIndex.Value;
    pFVar16 = pFVar16 + 0x10;
  }
  __return_storage_ptr__->Object = (FInvisibleToWidgetReflectorMetaData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  goto LAB_142df5252;
}

// GetMetaData<FSimulatedNavigationMetaData> @ 142df52a0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FSimulatedNavigationMetaData,1> * __thiscall
SWidget::GetMetaData<FSimulatedNavigationMetaData>
          (SWidget *this,TSharedPtr<FSimulatedNavigationMetaData,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSimulatedNavigationMetaData *pFVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData> FVar10;
  ulonglong uVar11;
  uint uVar12;
  FColor_u_0 FVar13;
  FName FVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FName local_res18 [2];
  
  FVar10 = StatPtr_STAT_SlateGetMetaData;
  if (StatPtr_STAT_SlateGetMetaData == (FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData>)0x0) {
    pFVar9 = ::FName::FName(local_res18,"STAT_SlateGetMetaData");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateGetMetaData,*pFVar9,
                        L"SWidget MetaData","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  FVar13.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Bits != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.Bits = FVar13.Bits;
        uStackX_c = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8._s_0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Widgets\\SWidget.h"
                   ,0x541);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar13.Bits;
      uStackX_c = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_142df53f7;
    }
  }
  bVar6 = false;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
LAB_142df53f7:
  local_res18[0].ComparisonIndex.Value = (this->MetaData).ArrayNum;
  uVar11 = (ulonglong)(int)local_res18[0].ComparisonIndex.Value;
  pFVar16 = (this->MetaData).AllocatorInstance.Data;
  pFVar15 = pFVar16 + uVar11 * 0x10;
  while( true ) {
    if ((this->MetaData).ArrayNum != (int)uVar11) {
      `TCheckedPointerIterator<TSharedRef<ISlateMetaData,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar16 == pFVar15) break;
    plVar1 = *(longlong **)pFVar16;
    pcVar2 = *(code **)(*plVar1 + 8);
    pFVar9 = FSimulatedNavigationMetaData::GetTypeId();
    cVar8 = (*pcVar2)(plVar1,pFVar9);
    if (cVar8 != '\0') {
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar16 + 8);
      pFVar4 = *(FSimulatedNavigationMetaData **)pFVar16;
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        __return_storage_ptr__->Object = pFVar4;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        __return_storage_ptr__->Object = pFVar4;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      }
LAB_142df5492:
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar6) {
        FThreadStats::AddMessage(FVar14,CycleScopeEnd);
      }
      return __return_storage_ptr__;
    }
    uVar11 = (ulonglong)local_res18[0].ComparisonIndex.Value;
    pFVar16 = pFVar16 + 0x10;
  }
  __return_storage_ptr__->Object = (FSimulatedNavigationMetaData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  goto LAB_142df5492;
}

