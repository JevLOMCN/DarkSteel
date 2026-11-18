// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 84

// ExecuteTask @ 14666af40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x20);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666b01d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666b01d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x30);
  if ((this->TaskStorage).Pad[0x34] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x30);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>
         *)((this->TaskStorage).Pad + 0x138));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666b190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x20);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666b26d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666b26d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x30);
  if ((this->TaskStorage).Pad[0x34] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x30);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
         *)((this->TaskStorage).Pad + 0x138));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666b3e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x20);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666b4bd;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666b4bd:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x30);
  if ((this->TaskStorage).Pad[0x34] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x30);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
         *)((this->TaskStorage).Pad + 0x138));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666b630

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x30);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666b70d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666b70d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x40);
  if ((this->TaskStorage).Pad[0x44] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x40);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>
         *)((this->TaskStorage).Pad + 0x148));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xb8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666b880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x20);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666b95d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666b95d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x30);
  if ((this->TaskStorage).Pad[0x34] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x30);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
         *)((this->TaskStorage).Pad + 0x138));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666bad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x20);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666bbad;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666bbad:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x30);
  if ((this->TaskStorage).Pad[0x34] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x30);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>
         *)&this->TaskStorage,
        (TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>
         *)((this->TaskStorage).Pad + 0x138));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666bd20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x18);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666bdfd;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666bdfd:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x28);
  if ((this->TaskStorage).Pad[0x2c] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x28);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>
         *)&this->TaskStorage,
        (TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>
         *)((this->TaskStorage).Pad + 0x130));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa0);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666bf70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x18);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666c04d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666c04d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x28);
  if ((this->TaskStorage).Pad[0x2c] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x28);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>
         *)((this->TaskStorage).Pad + 0x130));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa0);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666c1c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x20);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666c29d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666c29d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x30);
  if ((this->TaskStorage).Pad[0x34] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x30);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
         *)((this->TaskStorage).Pad + 0x138));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666c410

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x20);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666c4ed;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666c4ed:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x30);
  if ((this->TaskStorage).Pad[0x34] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x30);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>
         *)((this->TaskStorage).Pad + 0x138));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666c660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x20);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666c73d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666c73d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x30);
  if ((this->TaskStorage).Pad[0x34] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x30);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
         *)((this->TaskStorage).Pad + 0x138));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666c8b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x28);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666c98d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666c98d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x38);
  if ((this->TaskStorage).Pad[0x3c] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x38);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
         *)((this->TaskStorage).Pad + 0x140));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xb0);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666cb00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x28);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666cbdd;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666cbdd:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x38);
  if ((this->TaskStorage).Pad[0x3c] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x38);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
         *)((this->TaskStorage).Pad + 0x140));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xb0);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666cd50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x20);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666ce2d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666ce2d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x30);
  if ((this->TaskStorage).Pad[0x34] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x30);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
         *)((this->TaskStorage).Pad + 0x138));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666cfa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x18);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666d07d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666d07d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x28);
  if ((this->TaskStorage).Pad[0x2c] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x28);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>
         *)&this->TaskStorage,
        (TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>
         *)((this->TaskStorage).Pad + 0x130));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa0);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666d1f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x18);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666d2cd;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666d2cd:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x28);
  if ((this->TaskStorage).Pad[0x2c] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x28);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>
         *)&this->TaskStorage,
        (TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>
         *)((this->TaskStorage).Pad + 0x130));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa0);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666d440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x20);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666d51d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666d51d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x30);
  if ((this->TaskStorage).Pad[0x34] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x30);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>
         *)((this->TaskStorage).Pad + 0x138));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666d690

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x28);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666d76d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666d76d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x38);
  if ((this->TaskStorage).Pad[0x3c] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x38);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
         *)((this->TaskStorage).Pad + 0x140));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xb0);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666d8e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x28);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666d9bd;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666d9bd:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x38);
  if ((this->TaskStorage).Pad[0x3c] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x38);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
         *)((this->TaskStorage).Pad + 0x140));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xb0);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666db30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x40);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666dc0d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666dc0d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x50);
  if ((this->TaskStorage).Pad[0x54] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x50);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
         *)((this->TaskStorage).Pad + 0x158));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 200);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666dd80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x28);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666de5d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666de5d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x38);
  if ((this->TaskStorage).Pad[0x3c] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x38);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
         *)((this->TaskStorage).Pad + 0x140));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xb0);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666dfd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x20);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666e0ad;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666e0ad:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x30);
  if ((this->TaskStorage).Pad[0x34] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x30);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>
         *)&this->TaskStorage,
        (TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>
         *)((this->TaskStorage).Pad + 0x138));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666e220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<unsigned_char>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<unsigned_char>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<unsigned_char>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x20);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666e2fd;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666e2fd:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x30);
  if ((this->TaskStorage).Pad[0x34] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x30);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<unsigned_char>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<unsigned_char>_>
         *)&this->TaskStorage,
        (TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>
         *)((this->TaskStorage).Pad + 0x138));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<unsigned_char>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666e470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x20);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666e54d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666e54d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x30);
  if ((this->TaskStorage).Pad[0x34] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x30);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>
         *)((this->TaskStorage).Pad + 0x138));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666e6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x28);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666e79d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666e79d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x38);
  if ((this->TaskStorage).Pad[0x3c] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x38);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>
         *)((this->TaskStorage).Pad + 0x140));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xb0);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666e910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x20);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666e9ed;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666e9ed:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x30);
  if ((this->TaskStorage).Pad[0x34] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x30);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>
         *)((this->TaskStorage).Pad + 0x138));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666eb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x28);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666ec3d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666ec3d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x38);
  if ((this->TaskStorage).Pad[0x3c] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x38);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>
         *)((this->TaskStorage).Pad + 0x140));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xb0);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666edb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x40);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666ee8d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666ee8d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x50);
  if ((this->TaskStorage).Pad[0x54] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x50);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
         *)((this->TaskStorage).Pad + 0x158));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 200);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666f000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x40);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666f0dd;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666f0dd:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x50);
  if ((this->TaskStorage).Pad[0x54] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x50);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
         *)((this->TaskStorage).Pad + 0x158));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 200);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666f250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x28);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666f32d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666f32d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x38);
  if ((this->TaskStorage).Pad[0x3c] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x38);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
         *)((this->TaskStorage).Pad + 0x140));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xb0);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666f4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FString>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FString>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FString>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x20);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666f57d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666f57d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x30);
  if ((this->TaskStorage).Pad[0x34] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x30);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FString>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FString>_>
         *)&this->TaskStorage,
        (TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>
         *)((this->TaskStorage).Pad + 0x138));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FString>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666f6f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FText>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FText>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FText>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x20);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666f7cd;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666f7cd:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x30);
  if ((this->TaskStorage).Pad[0x34] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x30);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FText>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FText>_>
         *)&this->TaskStorage,
        (TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>
         *)((this->TaskStorage).Pad + 0x138));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FText>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666f940

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FBoolPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FBoolPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FBoolPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x20);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666fa1d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666fa1d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x30);
  if ((this->TaskStorage).Pad[0x34] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x30);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FBoolPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FBoolPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>
         *)&this->TaskStorage,
        (TSetPropertyValues<UE::MovieScene::FBoolPropertyTraits> *)((this->TaskStorage).Pad + 0x138)
       );
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FBoolPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666fb90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FFloatPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FFloatPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FFloatPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x18);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666fc6d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666fc6d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x28);
  if ((this->TaskStorage).Pad[0x2c] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x28);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FFloatPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FFloatPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetPropertyValues<UE::MovieScene::FFloatPropertyTraits> *)
        ((this->TaskStorage).Pad + 0x130));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa0);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FFloatPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14666fde0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FObjectPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FObjectPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FObjectPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x20);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14666febd;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14666febd:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x30);
  if ((this->TaskStorage).Pad[0x34] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x30);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FObjectPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FObjectPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
         *)&this->TaskStorage,
        (TSetPropertyValues<UE::MovieScene::FObjectPropertyTraits> *)
        ((this->TaskStorage).Pad + 0x138));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FObjectPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14678cff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FApplyCustomPrimitiveDataParameters,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FApplyCustomPrimitiveDataParameters,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FApplyCustomPrimitiveDataParameters,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14678d0cd;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14678d0cd:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::FApplyCustomPrimitiveDataParameters,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::FApplyCustomPrimitiveDataParameters,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>
         *)&this->TaskStorage,
        (FApplyCustomPrimitiveDataParameters *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FApplyCustomPrimitiveDataParameters,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14678d240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FEvaluateAudio,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FEvaluateAudio,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FEvaluateAudio,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x18);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14678d31d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14678d31d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x28);
  if ((this->TaskStorage).Pad[0x2c] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x28);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::FEvaluateAudio,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::FEvaluateAudio,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
         *)&this->TaskStorage,(FEvaluateAudio *)((this->TaskStorage).Pad + 0x130));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa0);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FEvaluateAudio,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14678d490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FEvaluateCameraShake,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FEvaluateCameraShake,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FEvaluateCameraShake,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  bVar8 = false;
  bVar10 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18.s.LowPart = FVar15.Value;
      local_res18.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14678d575;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14678d575:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::FEvaluateCameraShake,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::FEvaluateCameraShake,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>
         *)&this->TaskStorage,(FEvaluateCameraShake *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
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
  (this->TaskStorage).Pad[0x178] = '\0';
  (this->TaskStorage).Pad[0x179] = '\0';
  (this->TaskStorage).Pad[0x17a] = '\0';
  (this->TaskStorage).Pad[0x17b] = '\0';
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x170);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<UCameraComponent_*,UE::MovieScene::FAccumulatedShake>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UCameraComponent_*,UE::MovieScene::FAccumulatedShake>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UCameraComponent_*,UE::MovieScene::FAccumulatedShake>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->TaskStorage).Pad + 0x130));
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FEvaluateCameraShake,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14678d710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FGatherAudioInputs,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FGatherAudioInputs,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FGatherAudioInputs,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x40);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14678d7ed;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14678d7ed:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x50);
  if ((this->TaskStorage).Pad[0x54] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x50);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioInputs,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioInputs,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
         *)&this->TaskStorage,(FGatherAudioInputs *)((this->TaskStorage).Pad + 0x158));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 200);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FGatherAudioInputs,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14678d960

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FGatherAudioTriggers,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FGatherAudioTriggers,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FGatherAudioTriggers,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14678da3d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14678da3d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioTriggers,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioTriggers,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
         *)&this->TaskStorage,(FGatherAudioTriggers *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FGatherAudioTriggers,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14678dbb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateBoolChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateBoolChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateBoolChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14678dc8d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14678dc8d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->FilteredTask.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x677,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityTaskBase<UE::MovieScene::FEvaluateBoolChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>
  ::Run((TEntityTaskBase<UE::MovieScene::FEvaluateBoolChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>
         *)&this->TaskStorage,(FEvaluateBoolChannels *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateBoolChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14678de00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateByteChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<unsigned_char>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateByteChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<unsigned_char>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateByteChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<unsigned_char>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14678dedd;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14678dedd:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->FilteredTask.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x677,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityTaskBase<UE::MovieScene::FEvaluateByteChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<unsigned_char>_>
  ::Run((TEntityTaskBase<UE::MovieScene::FEvaluateByteChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<unsigned_char>_>
         *)&this->TaskStorage,(FEvaluateByteChannels *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateByteChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<unsigned_char>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14678e050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14678e12d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14678e12d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->FilteredTask.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x677,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityTaskBase<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
  ::Run((TEntityTaskBase<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
         *)&this->TaskStorage,(FEvaluateConstraintChannels *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14678e2a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateDoubleChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateDoubleChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateDoubleChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14678e37d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14678e37d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->FilteredTask.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x677,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityTaskBase<UE::MovieScene::FEvaluateDoubleChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
  ::Run((TEntityTaskBase<UE::MovieScene::FEvaluateDoubleChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
         *)&this->TaskStorage,(FEvaluateDoubleChannels_Cached *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateDoubleChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14678e4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateDoublePerlinNoiseChannels,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateDoublePerlinNoiseChannels,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateDoublePerlinNoiseChannels,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14678e5cd;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14678e5cd:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->FilteredTask.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x677,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityTaskBase<UE::MovieScene::FEvaluateDoublePerlinNoiseChannels,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
  ::Run((TEntityTaskBase<UE::MovieScene::FEvaluateDoublePerlinNoiseChannels,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
         *)&this->TaskStorage,
        (FEvaluateDoublePerlinNoiseChannels *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateDoublePerlinNoiseChannels,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14678e740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateFloatChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateFloatChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateFloatChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14678e81d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14678e81d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->FilteredTask.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x677,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityTaskBase<UE::MovieScene::FEvaluateFloatChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
  ::Run((TEntityTaskBase<UE::MovieScene::FEvaluateFloatChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
         *)&this->TaskStorage,(FEvaluateFloatChannels_Cached *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateFloatChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14678e990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateFloatPerlinNoiseChannels,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateFloatPerlinNoiseChannels,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateFloatPerlinNoiseChannels,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14678ea6d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14678ea6d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->FilteredTask.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x677,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityTaskBase<UE::MovieScene::FEvaluateFloatPerlinNoiseChannels,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
  ::Run((TEntityTaskBase<UE::MovieScene::FEvaluateFloatPerlinNoiseChannels,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
         *)&this->TaskStorage,(FEvaluateFloatPerlinNoiseChannels *)((this->TaskStorage).Pad + 0x128)
       );
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateFloatPerlinNoiseChannels,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14678ebe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateIntegerChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<__int64>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateIntegerChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<__int64>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateIntegerChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<__int64>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14678ecbd;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14678ecbd:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->FilteredTask.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x677,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityTaskBase<UE::MovieScene::FEvaluateIntegerChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<__int64>_>
  ::Run((TEntityTaskBase<UE::MovieScene::FEvaluateIntegerChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<__int64>_>
         *)&this->TaskStorage,(FEvaluateIntegerChannels *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateIntegerChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<__int64>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 146828e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_146828f3d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_146828f3d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::FAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::FAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
         *)&this->TaskStorage,(FAccumulationTask *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1468290b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FAdditiveAndOverridesTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FAdditiveAndOverridesTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FAdditiveAndOverridesTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14682918d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14682918d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::FAdditiveAndOverridesTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::FAdditiveAndOverridesTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>
         *)&this->TaskStorage,(FAdditiveAndOverridesTask *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FAdditiveAndOverridesTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 146829300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_1468293dd;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_1468293dd:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::FAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::FAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
         *)&this->TaskStorage,(FAdditiveFromBaseBlendTask *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 146829550

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FApplyScalarParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FApplyScalarParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FApplyScalarParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x18);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14682962d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14682962d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x28);
  if ((this->TaskStorage).Pad[0x2c] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x28);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::FApplyScalarParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::FApplyScalarParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>
         *)&this->TaskStorage,(FApplyScalarParameters *)((this->TaskStorage).Pad + 0x130));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa0);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FApplyScalarParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1468297a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FApplyVectorParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FApplyVectorParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FApplyVectorParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x30);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14682987d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14682987d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x40);
  if ((this->TaskStorage).Pad[0x44] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x40);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::FApplyVectorParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::FApplyVectorParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>
         *)&this->TaskStorage,(FApplyVectorParameters *)((this->TaskStorage).Pad + 0x148));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xb8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FApplyVectorParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1468299f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FAssignTransformOrigin,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FAssignTransformOrigin,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FAssignTransformOrigin,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x28);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_146829acd;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_146829acd:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x38);
  if ((this->TaskStorage).Pad[0x3c] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x38);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::FAssignTransformOrigin,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::FAssignTransformOrigin,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
         *)&this->TaskStorage,(FAssignTransformOrigin *)((this->TaskStorage).Pad + 0x140));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xb0);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FAssignTransformOrigin,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 146829c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<`UMovieScenePiecewiseDoubleBlenderSystem::DispatchDecomposeTask'::__l2::FChannelResultTask,UE::MovieScene::TReadAccess<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar10;
  FNameEntryId FVar11;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  pFVar3 = *(FName **)((longlong)this + 0xf8);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar10 = *pFVar3;
  FVar11 = FVar10.ComparisonIndex.Value;
  uVar9 = FVar10.Number;
  if ((FVar11.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar11.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar11.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar6 = true;
      goto LAB_146829d1d;
    }
  }
  bVar6 = false;
  FVar10 = local_48;
LAB_146829d1d:
  iVar2 = *(int *)((longlong)this + 0x108);
  if (*(char *)((longlong)this + 0x10c) != '\0') {
    bVar8 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (((char)*(int *)((longlong)this + 0x108) == '\0') &&
     (iVar2 != *(int *)((longlong)this + 0x108))) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                       ,0x714,L"MovieScene evaluation task is not being run on its desired thread");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<`UMovieScenePiecewiseDoubleBlenderSystem::DispatchDecomposeTask'::__l2::FChannelResultTask,UE::MovieScene::TReadAccess<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::Run((void *)((longlong)this + 0xd8),(FChannelResultTask *)((longlong)this + 0x210));
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar10.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  if (*(void **)((longlong)this + 0x220) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x220));
  }
  if (*(void **)((longlong)this + 0x180) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x180));
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 146829ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<`UMovieScenePiecewiseDoubleBlenderSystem::DispatchDecomposeTask'::__l2::FChannelResultTask,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar10;
  FNameEntryId FVar11;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  pFVar3 = *(FName **)((longlong)this + 0xf8);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar10 = *pFVar3;
  FVar11 = FVar10.ComparisonIndex.Value;
  uVar9 = FVar10.Number;
  if ((FVar11.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar11.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar11.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar6 = true;
      goto LAB_146829f7d;
    }
  }
  bVar6 = false;
  FVar10 = local_48;
LAB_146829f7d:
  iVar2 = *(int *)((longlong)this + 0x108);
  if (*(char *)((longlong)this + 0x10c) != '\0') {
    bVar8 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (((char)*(int *)((longlong)this + 0x108) == '\0') &&
     (iVar2 != *(int *)((longlong)this + 0x108))) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                       ,0x714,L"MovieScene evaluation task is not being run on its desired thread");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<`UMovieScenePiecewiseDoubleBlenderSystem::DispatchDecomposeTask'::__l2::FChannelResultTask,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::Run((void *)((longlong)this + 0xd8),(FChannelResultTask *)((longlong)this + 0x210));
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar10.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  if (*(void **)((longlong)this + 0x220) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x220));
  }
  if (*(void **)((longlong)this + 0x180) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x180));
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14682a100

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14682a1dd;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14682a1dd:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::FCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::FCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_>
         *)&this->TaskStorage,(FCombineBlends *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14682a350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FEvaluateFade,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FEvaluateFade,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FEvaluateFade,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14682a42d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14682a42d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::FEvaluateFade,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::FEvaluateFade,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
         *)&this->TaskStorage,(FEvaluateFade *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->TaskStorage).Pad + 0x138));
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FEvaluateFade,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14682a5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x28);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14682a68d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14682a68d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x38);
  if ((this->TaskStorage).Pad[0x3c] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x38);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
         *)&this->TaskStorage,
        (FEvaluateQuaternionInterpolationRotationChannels *)((this->TaskStorage).Pad + 0x140));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xb0);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14682a800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FEvaluateSlomo,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FEvaluateSlomo,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FEvaluateSlomo,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14682a8dd;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14682a8dd:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::FEvaluateSlomo,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::FEvaluateSlomo,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<double>_>
         *)&this->TaskStorage,(FEvaluateSlomo *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FEvaluateSlomo,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14682aa50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FGatherSkeletalAnimations,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FGatherSkeletalAnimations,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FGatherSkeletalAnimations,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x20);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14682ab2d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14682ab2d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x30);
  if ((this->TaskStorage).Pad[0x34] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x30);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::FGatherSkeletalAnimations,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::FGatherSkeletalAnimations,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
         *)&this->TaskStorage,(FGatherSkeletalAnimations *)((this->TaskStorage).Pad + 0x138));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FGatherSkeletalAnimations,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14682aca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FIntegerAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FIntegerAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FIntegerAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14682ad7d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14682ad7d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::FIntegerAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::FIntegerAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
         *)&this->TaskStorage,(FIntegerAccumulationTask *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FIntegerAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14682aef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FIntegerAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FIntegerAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FIntegerAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x18);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14682afcd;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14682afcd:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x28);
  if ((this->TaskStorage).Pad[0x2c] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x28);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::FIntegerAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::FIntegerAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
         *)&this->TaskStorage,(FIntegerAdditiveFromBaseBlendTask *)((this->TaskStorage).Pad + 0x130)
       );
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa0);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FIntegerAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14682b140

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FIntegerCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FIntegerCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FIntegerCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14682b21d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14682b21d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::FIntegerCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::FIntegerCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>
         *)&this->TaskStorage,(FIntegerCombineBlends *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FIntegerCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14682b390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FLegacyCombineBlendsForProperties,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FLegacyCombineBlendsForProperties,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FLegacyCombineBlendsForProperties,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14682b46d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14682b46d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::FLegacyCombineBlendsForProperties,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::FLegacyCombineBlendsForProperties,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_>
         *)&this->TaskStorage,(FLegacyCombineBlendsForProperties *)((this->TaskStorage).Pad + 0x128)
       );
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x138);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FLegacyCombineBlendsForProperties,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14682b5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14682b6cd;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14682b6cd:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->FilteredTask.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x677,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityTaskBase<UE::MovieScene::TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>
  ::Run((TEntityTaskBase<UE::MovieScene::TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>
         *)&this->TaskStorage,
        (TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>
         *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14682b840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14682b91d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14682b91d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->FilteredTask.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x677,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityTaskBase<UE::MovieScene::TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>
  ::Run((TEntityTaskBase<UE::MovieScene::TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>
         *)&this->TaskStorage,
        (TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>
         *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14682ba90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14682bb6d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14682bb6d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->FilteredTask.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x677,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityTaskBase<UE::MovieScene::TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>
  ::Run((TEntityTaskBase<UE::MovieScene::TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>
         *)&this->TaskStorage,
        (TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_> *)
        ((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14682bce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14682bdbd;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14682bdbd:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->FilteredTask.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x677,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityTaskBase<UE::MovieScene::TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>
  ::Run((TEntityTaskBase<UE::MovieScene::TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>
         *)&this->TaskStorage,
        (TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>
         *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14682bf30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14682c00d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14682c00d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->FilteredTask.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x677,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityTaskBase<UE::MovieScene::TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>
  ::Run((TEntityTaskBase<UE::MovieScene::TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>
         *)&this->TaskStorage,
        (TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits> *
        )((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14682c180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14682c25d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14682c25d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->FilteredTask.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x677,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityTaskBase<UE::MovieScene::TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>
  ::Run((TEntityTaskBase<UE::MovieScene::TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>
         *)&this->TaskStorage,
        (TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_> *)
        ((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14682c3d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FAbsoluteAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FAbsoluteAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FAbsoluteAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x20);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14682c4ad;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14682c4ad:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x30);
  if ((this->TaskStorage).Pad[0x34] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x30);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->FilteredTask.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x677,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityTaskBase<UE::MovieScene::FAbsoluteAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::Run((TEntityTaskBase<UE::MovieScene::FAbsoluteAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
         *)&this->TaskStorage,(FAbsoluteAccumulationTask *)((this->TaskStorage).Pad + 0x138));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FAbsoluteAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14682c620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FAccumulateAbsoluteWeights,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FAccumulateAbsoluteWeights,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FAccumulateAbsoluteWeights,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14682c6fd;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14682c6fd:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->FilteredTask.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x677,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityTaskBase<UE::MovieScene::FAccumulateAbsoluteWeights,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>
  ::Run((TEntityTaskBase<UE::MovieScene::FAccumulateAbsoluteWeights,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>
         *)&this->TaskStorage,(FAccumulateAbsoluteWeights *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FAccumulateAbsoluteWeights,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14682c870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FAdditiveAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FAdditiveAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FAdditiveAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x20);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14682c94d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14682c94d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x30);
  if ((this->TaskStorage).Pad[0x34] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x30);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->FilteredTask.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x677,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityTaskBase<UE::MovieScene::FAdditiveAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::Run((TEntityTaskBase<UE::MovieScene::FAdditiveAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
         *)&this->TaskStorage,(FAdditiveAccumulationTask *)((this->TaskStorage).Pad + 0x138));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FAdditiveAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14682cac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FCombineTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FCombineTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FCombineTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x20);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14682cb9d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14682cb9d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x30);
  if ((this->TaskStorage).Pad[0x34] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x30);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->FilteredTask.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x677,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityTaskBase<UE::MovieScene::FCombineTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
  ::Run((TEntityTaskBase<UE::MovieScene::FCombineTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
         *)&this->TaskStorage,(FCombineTask *)((this->TaskStorage).Pad + 0x138));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FCombineTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14682cd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TUnstructuredTask<UE::MovieScene::FEvaluateSkeletalAnimations>_>::
ExecuteTask(TGraphTask<UE::MovieScene::TUnstructuredTask<UE::MovieScene::FEvaluateSkeletalAnimations>_>
            *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  bool bVar11;
  uint uVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TUnstructuredTask<UE::MovieScene::FEvaluateSkeletalAnimations>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar7 = false;
  bVar9 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x48);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar13 = *pFVar5;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar12 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar12;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar8 = true;
      goto LAB_14682cded;
    }
  }
  bVar8 = false;
  FVar13 = local_48;
LAB_14682cded:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x58);
  if ((this->TaskStorage).Pad[0x5c] != '\0') {
    bVar11 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x58);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == CommonParams.DesiredThread",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x740,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    UE::Logging::Private::BasicLog<7>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_UE::MovieScene::TUnstructuredTask<UE::MovieScene::FEvaluateSkeletalAnimations>::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                ::__l18::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
  }
  UE::MovieScene::FEvaluateSkeletalAnimations::Run
            ((FEvaluateSkeletalAnimations *)&this->TaskStorage);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->TaskStorage).Pad + 0x38));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->TaskStorage).Pad + 0x28));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->TaskStorage).Pad + 0x18));
  if (this != (TGraphTask<UE::MovieScene::TUnstructuredTask<UE::MovieScene::FEvaluateSkeletalAnimations>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1468b12c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x18);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_1468b139d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_1468b139d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x28);
  if ((this->TaskStorage).Pad[0x2c] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x28);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
         *)&this->TaskStorage,(FAccumulateManualWeights *)((this->TaskStorage).Pad + 0x130));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa0);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1468b1510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FPropagateHierarchicalEasings,UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FPropagateHierarchicalEasings,UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FPropagateHierarchicalEasings,UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_1468b15ed;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_1468b15ed:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::FPropagateHierarchicalEasings,UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::FPropagateHierarchicalEasings,UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>
         *)&this->TaskStorage,(FPropagateHierarchicalEasings *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FPropagateHierarchicalEasings,UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1468b1760

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_1468b183d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_1468b183d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->FilteredTask.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x677,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityTaskBase<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
  ::Run((TEntityTaskBase<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
         *)&this->TaskStorage,(FEvaluateEasings *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1468b19b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateObjectPathChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateObjectPathChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateObjectPathChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_1468b1a8d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_1468b1a8d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->FilteredTask.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x677,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityTaskBase<UE::MovieScene::FEvaluateObjectPathChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
  ::Run((TEntityTaskBase<UE::MovieScene::FEvaluateObjectPathChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
         *)&this->TaskStorage,(FEvaluateObjectPathChannels *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateObjectPathChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1468b1c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateStringChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateStringChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateStringChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_1468b1cdd;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_1468b1cdd:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->FilteredTask.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x677,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityTaskBase<UE::MovieScene::FEvaluateStringChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
  ::Run((TEntityTaskBase<UE::MovieScene::FEvaluateStringChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
         *)&this->TaskStorage,(FEvaluateStringChannels *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateStringChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1468b1e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::Private::FEvaluateTextChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::Private::FEvaluateTextChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::Private::FEvaluateTextChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_1468b1f2d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_1468b1f2d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->FilteredTask.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x677,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityTaskBase<UE::MovieScene::Private::FEvaluateTextChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>
  ::Run((TEntityTaskBase<UE::MovieScene::Private::FEvaluateTextChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>
         *)&this->TaskStorage,(FEvaluateTextChannels *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::Private::FEvaluateTextChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1468b20a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FHarvestHierarchicalEasings,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FHarvestHierarchicalEasings,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FHarvestHierarchicalEasings,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_1468b217d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_1468b217d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->FilteredTask.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x677,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityTaskBase<UE::MovieScene::FHarvestHierarchicalEasings,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>
  ::Run((TEntityTaskBase<UE::MovieScene::FHarvestHierarchicalEasings,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>
         *)&this->TaskStorage,(FHarvestHierarchicalEasings *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FHarvestHierarchicalEasings,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1468b22f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x10);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_1468b23cd;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_1468b23cd:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x20);
  if ((this->TaskStorage).Pad[0x24] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x20);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->FilteredTask.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x677,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityTaskBase<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>::
  Run((TEntityTaskBase<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>
       *)&this->TaskStorage,(FResetFinalWeightResults *)((this->TaskStorage).Pad + 0x128));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

