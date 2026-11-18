// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 11

// Execute @ 14d6c4620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FFillSTDisplacementMapParameters,`FLensDistortionSceneViewExtension::FillSTDisplacementMap_RenderThread'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FFillSTDisplacementMapParameters,_private:_void___cdecl_FLensDistortionSceneViewExtension::FillSTDisplacementMap_RenderThread(FRDGBuilder_&,FRDGTexture_*_const_&,float,FRDGTexture_*_&)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar6;
  FUniformBufferStaticBindings *pFVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  undefined1 auStackY_138 [32];
  LARGE_INTEGER local_d8;
  FRDGAsyncTask local_d0;
  FName local_c8;
  FStatMessage local_b8;
  FUniformBufferStaticBindings local_a8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FVar11.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FFillSTDisplacementMapParameters,_private:_void___cdecl_FLensDistortionSceneViewExtension::FillSTDisplacementMap_RenderThread(FRDGBuilder_&,FRDGTexture_*_const_&,float,FRDGTexture_*_&)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar5,
                   L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,
                   true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = ::StatPtr_STAT_FRDGPass_Execute;
  if (::StatPtr_STAT_FRDGPass_Execute ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FFillSTDisplacementMapParameters,_private:_void___cdecl_FLensDistortionSceneViewExtension::FillSTDisplacementMap_RenderThread(FRDGBuilder_&,FRDGTexture_*_const_&,float,FRDGTexture_*_&)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_b8,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FFillSTDisplacementMapParameters,_private:_void___cdecl_FLensDistortionSceneViewExtension::FillSTDisplacementMap_RenderThread(FRDGBuilder_&,FRDGTexture_*_const_&,float,FRDGTexture_*_&)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar5,
                         L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_d8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.s.LowPart = FVar9.Value;
        local_d8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_d8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_d8.s.LowPart = FVar9.Value;
      local_d8.s.HighPart = uVar8;
      local_c8 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_c8.ComparisonIndex.Value;
      goto LAB_14d6c47a9;
    }
  }
  bVar3 = false;
  FVar10 = local_c8;
LAB_14d6c47a9:
  pFVar7 = FRDGParameterStruct::GetStaticUniformBuffers
                     ((FRDGParameterStruct *)((longlong)this + 0x30),&local_a8);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar7);
  if (local_a8.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_a8.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_a8.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_a8.Slots.AllocatorInstance.SecondaryData);
  }
  `FLensDistortionSceneViewExtension::FillSTDisplacementMap_RenderThread'::__l2::<lambda_1>::
  operator()((void *)((longlong)this + 0x180),local_d0,(FRHICommandList *)param_1);
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
      local_b8.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_b8.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_d8);
      local_b8.StatData.Pad[4] = '\0';
      local_b8.StatData.Pad[5] = '\0';
      local_b8.StatData.Pad[6] = '\0';
      local_b8.StatData.Pad[7] = '\0';
      local_b8.StatData.Pad[0] = local_d8.s.LowPart._0_1_;
      local_b8.StatData.Pad[1] = local_d8.s.LowPart._1_1_;
      local_b8.StatData.Pad[2] = local_d8.s.LowPart._2_1_;
      local_b8.StatData.Pad[3] = local_d8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_b8);
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
  return;
}

// Execute @ 14d6c49a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FInvertDisplacementParameters,`FLensDistortionSceneViewExtension::InvertDistortionMap_RenderThread'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FInvertDisplacementParameters,_private:_void___cdecl_FLensDistortionSceneViewExtension::InvertDistortionMap_RenderThread(FRDGBuilder_&,FRDGTexture_*_const_&,float,FRDGTexture_*_&)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar6;
  FUniformBufferStaticBindings *pFVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  undefined1 auStackY_138 [32];
  LARGE_INTEGER local_d8;
  FRDGAsyncTask local_d0;
  FName local_c8;
  FStatMessage local_b8;
  FUniformBufferStaticBindings local_a8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FVar11.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FInvertDisplacementParameters,_private:_void___cdecl_FLensDistortionSceneViewExtension::InvertDistortionMap_RenderThread(FRDGBuilder_&,FRDGTexture_*_const_&,float,FRDGTexture_*_&)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar5,
                   L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,
                   true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = ::StatPtr_STAT_FRDGPass_Execute;
  if (::StatPtr_STAT_FRDGPass_Execute ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FInvertDisplacementParameters,_private:_void___cdecl_FLensDistortionSceneViewExtension::InvertDistortionMap_RenderThread(FRDGBuilder_&,FRDGTexture_*_const_&,float,FRDGTexture_*_&)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_b8,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FInvertDisplacementParameters,_private:_void___cdecl_FLensDistortionSceneViewExtension::InvertDistortionMap_RenderThread(FRDGBuilder_&,FRDGTexture_*_const_&,float,FRDGTexture_*_&)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar5,
                         L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_d8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.s.LowPart = FVar9.Value;
        local_d8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_d8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_d8.s.LowPart = FVar9.Value;
      local_d8.s.HighPart = uVar8;
      local_c8 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_c8.ComparisonIndex.Value;
      goto LAB_14d6c4b29;
    }
  }
  bVar3 = false;
  FVar10 = local_c8;
LAB_14d6c4b29:
  pFVar7 = FRDGParameterStruct::GetStaticUniformBuffers
                     ((FRDGParameterStruct *)((longlong)this + 0x30),&local_a8);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar7);
  if (local_a8.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_a8.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_a8.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_a8.Slots.AllocatorInstance.SecondaryData);
  }
  `FLensDistortionSceneViewExtension::InvertDistortionMap_RenderThread'::__l2::<lambda_1>::
  operator()((void *)((longlong)this + 0x180),local_d0,(FRHICommandList *)param_1);
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
      local_b8.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_b8.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_d8);
      local_b8.StatData.Pad[4] = '\0';
      local_b8.StatData.Pad[5] = '\0';
      local_b8.StatData.Pad[6] = '\0';
      local_b8.StatData.Pad[7] = '\0';
      local_b8.StatData.Pad[0] = local_d8.s.LowPart._0_1_;
      local_b8.StatData.Pad[1] = local_d8.s.LowPart._1_1_;
      local_b8.StatData.Pad[2] = local_d8.s.LowPart._2_1_;
      local_b8.StatData.Pad[3] = local_d8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_b8);
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
  return;
}

// Execute @ 14d6c4d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FCalibratedMapDerivedDataCS::FParameters,``FCalibratedMapProcessor::ExecuteJob'::__l10::<lambda_1>::operator()'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  void *pvVar2;
  FShaderParameterBindings *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  LARGE_INTEGER this_00;
  TAlignedBytes<8,8> TVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FCalibratedMapDerivedDataCS::FParameters,_public:___cdecl__private:_void___cdecl_FCalibratedMapProcessor::ExecuteJob(TSharedPtr<FDerivedDistortionDataJob,1>)_::_10_::<lambda_1>::operator()(FRHICommandListImmediate_&)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar13;
  FUniformBufferStaticBindings *pFVar14;
  FShaderParametersMetadata *pFVar15;
  FRHIComputeShader *pFVar16;
  FRHIBatchedShaderUnbinds *pFVar17;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FNameEntryId FVar18;
  FName FVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auStackY_188 [32];
  FColor_u_0 local_128 [2];
  LARGE_INTEGER local_120;
  TIntVector3<int>_u_0 local_118;
  FStatMessage local_108;
  FName local_f8;
  FName local_f0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_e0;
  FName local_d0;
  FName local_c8;
  FUniformBufferStaticBindings local_c0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_120 = (LARGE_INTEGER)param_1;
  local_108.StatData.Pad = (uchar  [8])this;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FCalibratedMapDerivedDataCS::FParameters,_public:___cdecl__private:_void___cdecl_FCalibratedMapProcessor::ExecuteJob(TSharedPtr<FDerivedDistortionDataJob,1>)_::_10_::<lambda_1>::operator()(FRHICommandListImmediate_&)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar12 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar12,
                   L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,
                   true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar13 = ::StatPtr_STAT_FRDGPass_Execute;
  if (::StatPtr_STAT_FRDGPass_Execute ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FCalibratedMapDerivedDataCS::FParameters,_public:___cdecl__private:_void___cdecl_FCalibratedMapProcessor::ExecuteJob(TSharedPtr<FDerivedDistortionDataJob,1>)_::_10_::<lambda_1>::operator()(FRHICommandListImmediate_&)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar12 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    FVar13 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FCalibratedMapDerivedDataCS::FParameters,_public:___cdecl__private:_void___cdecl_FCalibratedMapProcessor::ExecuteJob(TSharedPtr<FDerivedDistortionDataJob,1>)_::_10_::<lambda_1>::operator()(FRHICommandListImmediate_&)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar12,
                          L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                          ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar13;
  bVar5 = false;
  bVar7 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar20 = FVar19.Number;
  if ((FVar18.Value != 0) || (uVar20 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_128[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar18.Value;
        local_f8.Number = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_118._s_0.X = FVar18.Value;
      local_118._s_0.Y = uVar20;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar6 = true;
      goto LAB_14d6c4ea9;
    }
  }
  bVar6 = false;
  FVar19 = local_f0;
LAB_14d6c4ea9:
  pFVar14 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_c0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar14);
  if (local_c0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_c0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_c0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_c0.Slots.AllocatorInstance.SecondaryData);
  }
  TVar8.Pad = local_108.StatData.Pad;
  pvVar2 = *(void **)((longlong)this + 0x180);
  iVar10 = *(int *)((longlong)pvVar2 + 8) + 7;
  iVar11 = *(int *)((longlong)pvVar2 + 0xc) + 7;
  uVar21 = (int)((iVar10 >> 0x1f & 7U) + iVar10) >> 3;
  uVar20 = (int)((iVar11 >> 0x1f & 7U) + iVar11) >> 3;
  pFVar15 = FCalibratedMapDerivedDataCS::FParameters::FTypeInfo::GetStructMetadata();
  local_118._s_0.Z = 1;
  local_118._s_0.X = uVar21;
  local_118._s_0.Y = uVar20;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_118._s_0);
  pFVar16 = TShaderRefBase<FCalibratedMapDerivedDataCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FCalibratedMapDerivedDataCS,FShaderMapPointerTable> *)
                       ((longlong)TVar8.Pad + 0x188));
  SetComputePipelineState((FRHIComputeCommandList *)local_120,pFVar16);
  local_e0.ShaderContent = *(FShader **)((longlong)local_108.StatData.Pad + 0x188);
  local_e0.ShaderMap = *(FShaderMapBase **)((longlong)local_108.StatData.Pad + 400);
  ValidateShaderParameters(&local_e0,pFVar15,pvVar2);
  TVar8.Pad = local_108.StatData.Pad;
  this_00 = local_120;
  ::SetShaderParameters
            ((FRHIComputeCommandList *)local_120,pFVar16,
             *(FShaderParameterBindings **)((longlong)local_108.StatData.Pad + 0x188),pFVar15,pvVar2
            );
  FRHIComputeCommandList::DispatchComputeShader((FRHIComputeCommandList *)this_00,uVar21,uVar20,1);
  pFVar16 = TShaderRefBase<FCalibratedMapDerivedDataCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FCalibratedMapDerivedDataCS,FShaderMapPointerTable> *)
                       ((longlong)TVar8.Pad + 0x188));
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar17 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)this_00);
    pFVar3 = *(FShaderParameterBindings **)((longlong)TVar8.Pad + 0x188);
    if (pFVar3->RootParameterBufferIndex != 0xffff) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar17,pFVar3);
    FRHIComputeCommandList::SetBatchedShaderUnbinds
              ((FRHIComputeCommandList *)this_00,pFVar16,pFVar17);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_108.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_108.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_120);
      local_108.StatData.Pad = (uchar  [8])(local_120.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,&local_108);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// Execute @ 14d6c51b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FCrosshairOverlayPS::FParameters,`FPixelShaderUtils::AddFullscreenPass<FCrosshairOverlayPS>'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  TStatIdData *pTVar6;
  FUniformBufferStaticBindings *pFVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  undefined1 auStackY_138 [32];
  LARGE_INTEGER local_d8;
  FName local_d0;
  FStatMessage local_c0;
  FUniformBufferStaticBindings local_b0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FVar11.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<FCrosshairOverlayPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FCrosshairOverlayPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FCrosshairOverlayPS,FShaderMapPointerTable>_const&___ptr64,FCrosshairOverlayPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FCrosshairOverlayPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FCrosshairOverlayPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FCrosshairOverlayPS,FShaderMapPointerTable>_const&___ptr64,FCrosshairOverlayPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FCrosshairOverlayPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FCrosshairOverlayPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FCrosshairOverlayPS,FShaderMapPointerTable>_const&___ptr64,FCrosshairOverlayPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FCrosshairOverlayPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FCrosshairOverlayPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FCrosshairOverlayPS,FShaderMapPointerTable>_const&___ptr64,FCrosshairOverlayPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FCrosshairOverlayPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FCrosshairOverlayPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FCrosshairOverlayPS,FShaderMapPointerTable>_const&___ptr64,FCrosshairOverlayPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FCrosshairOverlayPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FCrosshairOverlayPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FCrosshairOverlayPS,FShaderMapPointerTable>_const&___ptr64,FCrosshairOverlayPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar10 = *(FName *)&pTVar6->Name;
  bVar2 = false;
  bVar4 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_d8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_d8.s,(pTVar6->StatDescriptionAnsi).Ptr)
      ;
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.s.LowPart = FVar9.Value;
        local_d8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_d8.s,(pTVar6->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_d8.s.LowPart = FVar9.Value;
      local_d8.s.HighPart = uVar8;
      local_d0 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_d0.ComparisonIndex.Value;
      goto LAB_14d6c5336;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_14d6c5336:
  pFVar7 = FRDGParameterStruct::GetStaticUniformBuffers
                     ((FRDGParameterStruct *)((longlong)this + 0x30),&local_b0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar7);
  if (local_b0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_b0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_b0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_b0.Slots.AllocatorInstance.SecondaryData);
  }
  FPixelShaderUtils::DrawFullscreenPixelShader<FCrosshairOverlayPS>
            ((FRHICommandList *)param_1,*(FGlobalShaderMap **)((longlong)this + 0x188),
             (TShaderRefBase<FCrosshairOverlayPS,FShaderMapPointerTable> *)((longlong)this + 400),
             *(FParameters **)((longlong)this + 0x180),(TIntRect<int> *)((longlong)this + 0x1a0),
             *(FRHIBlendState **)((longlong)this + 0x1b0),
             *(FRHIRasterizerState **)((longlong)this + 0x1b8),
             *(FRHIDepthStencilState **)((longlong)this + 0x1c0),*(uint *)((longlong)this + 0x1c8));
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
      local_c0.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_c0.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_d8);
      local_c0.StatData.Pad[4] = '\0';
      local_c0.StatData.Pad[5] = '\0';
      local_c0.StatData.Pad[6] = '\0';
      local_c0.StatData.Pad[7] = '\0';
      local_c0.StatData.Pad[0] = local_d8.s.LowPart._0_1_;
      local_c0.StatData.Pad[1] = local_d8.s.LowPart._1_1_;
      local_c0.StatData.Pad[2] = local_d8.s.LowPart._2_1_;
      local_c0.StatData.Pad[3] = local_d8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_c0);
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
  return;
}

// Execute @ 14d6c5570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FDisplacementMapBlendPS::FParameters,`FPixelShaderUtils::AddFullscreenPass<FDisplacementMapBlendPS>'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  TStatIdData *pTVar6;
  FUniformBufferStaticBindings *pFVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  undefined1 auStackY_138 [32];
  LARGE_INTEGER local_d8;
  FName local_d0;
  FStatMessage local_c0;
  FUniformBufferStaticBindings local_b0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FVar11.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<FDisplacementMapBlendPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FDisplacementMapBlendPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FDisplacementMapBlendPS,FShaderMapPointerTable>_const&___ptr64,FDisplacementMapBlendPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FDisplacementMapBlendPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FDisplacementMapBlendPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FDisplacementMapBlendPS,FShaderMapPointerTable>_const&___ptr64,FDisplacementMapBlendPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FDisplacementMapBlendPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FDisplacementMapBlendPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FDisplacementMapBlendPS,FShaderMapPointerTable>_const&___ptr64,FDisplacementMapBlendPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FDisplacementMapBlendPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FDisplacementMapBlendPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FDisplacementMapBlendPS,FShaderMapPointerTable>_const&___ptr64,FDisplacementMapBlendPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FDisplacementMapBlendPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FDisplacementMapBlendPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FDisplacementMapBlendPS,FShaderMapPointerTable>_const&___ptr64,FDisplacementMapBlendPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FDisplacementMapBlendPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FDisplacementMapBlendPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FDisplacementMapBlendPS,FShaderMapPointerTable>_const&___ptr64,FDisplacementMapBlendPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar10 = *(FName *)&pTVar6->Name;
  bVar2 = false;
  bVar4 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_d8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_d8.s,(pTVar6->StatDescriptionAnsi).Ptr)
      ;
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.s.LowPart = FVar9.Value;
        local_d8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_d8.s,(pTVar6->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_d8.s.LowPart = FVar9.Value;
      local_d8.s.HighPart = uVar8;
      local_d0 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_d0.ComparisonIndex.Value;
      goto LAB_14d6c56f6;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_14d6c56f6:
  pFVar7 = FRDGParameterStruct::GetStaticUniformBuffers
                     ((FRDGParameterStruct *)((longlong)this + 0x30),&local_b0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar7);
  if (local_b0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_b0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_b0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_b0.Slots.AllocatorInstance.SecondaryData);
  }
  FPixelShaderUtils::DrawFullscreenPixelShader<FDisplacementMapBlendPS>
            ((FRHICommandList *)param_1,*(FGlobalShaderMap **)((longlong)this + 0x188),
             (TShaderRefBase<FDisplacementMapBlendPS,FShaderMapPointerTable> *)
             ((longlong)this + 400),*(FParameters **)((longlong)this + 0x180),
             (TIntRect<int> *)((longlong)this + 0x1a0),*(FRHIBlendState **)((longlong)this + 0x1b0),
             *(FRHIRasterizerState **)((longlong)this + 0x1b8),
             *(FRHIDepthStencilState **)((longlong)this + 0x1c0),*(uint *)((longlong)this + 0x1c8));
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
      local_c0.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_c0.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_d8);
      local_c0.StatData.Pad[4] = '\0';
      local_c0.StatData.Pad[5] = '\0';
      local_c0.StatData.Pad[6] = '\0';
      local_c0.StatData.Pad[7] = '\0';
      local_c0.StatData.Pad[0] = local_d8.s.LowPart._0_1_;
      local_c0.StatData.Pad[1] = local_d8.s.LowPart._1_1_;
      local_c0.StatData.Pad[2] = local_d8.s.LowPart._2_1_;
      local_c0.StatData.Pad[3] = local_d8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_c0);
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
  return;
}

// Execute @ 14d6c5930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FRecenterSTDisplacementMapParameters,`FLensDistortionSceneViewExtension::RecenterSTDisplacementMap_RenderThread'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FRecenterSTDisplacementMapParameters,_private:_void___cdecl_FLensDistortionSceneViewExtension::RecenterSTDisplacementMap_RenderThread(FRDGBuilder_&,FRDGTexture_*_const_&,float,FRDGTexture_*_&)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar7;
  FUniformBufferStaticBindings *pFVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  LARGE_INTEGER LVar9;
  undefined4 uVar10;
  undefined1 auStackY_158 [32];
  LARGE_INTEGER local_f8;
  undefined8 uStack_f0;
  LARGE_INTEGER local_e8;
  uint uStack_e0;
  uint uStack_dc;
  LARGE_INTEGER local_d8;
  <lambda_1> local_c8;
  undefined1 local_a8 [24];
  FShaderMapBase *local_90;
  FRHIBlendState *local_88;
  FRHIDepthStencilState *local_80;
  FRHIVertexDeclaration *local_78;
  uchar local_70;
  ForElementType<FRHIUniformBuffer_*> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar10 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FRecenterSTDisplacementMapParameters,_private:_void___cdecl_FLensDistortionSceneViewExtension::RecenterSTDisplacementMap_RenderThread(FRDGBuilder_&,FRDGTexture_*_const_&,float,FRDGTexture_*_&)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar6 = ::FName::FName((FName *)&local_f8.s,"STAT_FRDGPass_Execute");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar6,
                   L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,
                   true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar7 = ::StatPtr_STAT_FRDGPass_Execute;
  if (::StatPtr_STAT_FRDGPass_Execute ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FRecenterSTDisplacementMapParameters,_private:_void___cdecl_FLensDistortionSceneViewExtension::RecenterSTDisplacementMap_RenderThread(FRDGBuilder_&,FRDGTexture_*_const_&,float,FRDGTexture_*_&)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar6 = ::FName::FName((FName *)&local_e8.s,"STAT_FRDGPass_Execute");
    FVar7 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FRecenterSTDisplacementMapParameters,_private:_void___cdecl_FLensDistortionSceneViewExtension::RecenterSTDisplacementMap_RenderThread(FRDGBuilder_&,FRDGTexture_*_const_&,float,FRDGTexture_*_&)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar6,
                         L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  LVar9 = *(LARGE_INTEGER *)FVar7;
  bVar2 = false;
  bVar4 = false;
  local_d8.s.LowPart = 0;
  local_d8.s.HighPart = 0;
  if ((LVar9.s.LowPart != 0) || (LVar9.s.HighPart != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_f8.QuadPart = local_f8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8 = LVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_f8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f8 = LVar9;
      local_d8 = LVar9;
      FThreadStats::AddMessage((FName)LVar9.s,CycleScopeStart);
      bVar3 = true;
      uVar10 = local_d8._0_4_;
      goto LAB_14d6c5abe;
    }
  }
  bVar3 = false;
  LVar9 = local_d8;
LAB_14d6c5abe:
  pFVar8 = FRDGParameterStruct::GetStaticUniformBuffers
                     ((FRDGParameterStruct *)((longlong)this + 0x30),
                      (FUniformBufferStaticBindings *)local_a8);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar8);
  if (local_50 != (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_50);
  }
  if ((ForElementType<unsigned_char>)local_a8._8_8_ != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_a8._8_8_);
  }
  local_a8._0_8_ = *(uchar (*) [8])((longlong)this + 0x180);
  local_a8._8_8_ = *(ForElementType<unsigned_char> *)((longlong)this + 0x188);
  local_a8._16_8_ = *(undefined8 *)((longlong)this + 400);
  local_90 = *(FShaderMapBase **)((longlong)this + 0x198);
  local_88 = *(FRHIBlendState **)((longlong)this + 0x1c0);
  local_80 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
             ::StaticResource.StateRHI.Reference;
  local_78 = (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
  local_70 = '\0';
  local_e8.s.HighPart = 0xffffffff;
  local_e8.s.LowPart = GMaxRHIFeatureLevel;
  uStack_e0 = 1;
  bVar5 = IsHMDHiddenAreaMaskActive();
  uStack_dc = CONCAT31(uStack_dc._1_3_,bVar5);
  uStack_f0 = CONCAT44(uStack_dc,uStack_e0);
  local_c8.PassParameters = (FRecenterSTDisplacementMapParameters **)((longlong)this + 0x1b8);
  local_f8 = local_e8;
  local_c8.RHICmdList = (FRHICommandList *)param_1;
  local_c8.DistortImageShader =
       (TShaderMapRef<FRecenterSTDisplacementMapPS> *)((longlong)this + 400);
  DrawScreenPass<__FLensDistortionSceneViewExtension::RecenterSTDisplacementMap_RenderThread_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            ((FRHICommandList *)param_1,(FScreenPassViewInfo *)&local_f8.s,
             (FScreenPassTextureViewport *)((longlong)this + 0x1a0),
             (FScreenPassTextureViewport *)((longlong)this + 0x1a0),
             (FScreenPassPipelineState *)local_a8,None,&local_c8);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && ((FName)LVar9.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      uStack_dc = LVar9.s.HighPart & 0xffff6fffU | 0x6000;
      uStack_e0 = uVar10;
      QueryPerformanceCounter(&local_f8);
      local_e8.QuadPart = local_f8.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_e8.s);
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
  return;
}

// Execute @ 14d6c5d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FAnamorphicDistortionCS>'::__l2::<lambda_1>_>::
Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FShaderParameterBindings *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  TAlignedBytes<8,8> TVar9;
  bool bVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FUniformBufferStaticBindings *pFVar13;
  FRHIComputeShader *pFVar14;
  FRHIBatchedShaderUnbinds *pFVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar16;
  FNameEntryId FVar17;
  FName FVar18;
  undefined1 auStackY_188 [32];
  FColor_u_0 local_128 [2];
  LARGE_INTEGER local_120;
  FStatMessage local_118;
  TIntVector3<int>_u_0 local_108;
  FName local_f8;
  FName local_f0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_e0;
  FName local_d0;
  FName local_c8;
  FUniformBufferStaticBindings local_c0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_118.StatData.Pad = (uchar  [8])this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FAnamorphicDistortionCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FAnamorphicDistortionCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FAnamorphicDistortionCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FAnamorphicDistortionCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FAnamorphicDistortionCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FAnamorphicDistortionCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FAnamorphicDistortionCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FAnamorphicDistortionCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FAnamorphicDistortionCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FAnamorphicDistortionCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FAnamorphicDistortionCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FAnamorphicDistortionCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FAnamorphicDistortionCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FAnamorphicDistortionCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FAnamorphicDistortionCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FAnamorphicDistortionCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FAnamorphicDistortionCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FAnamorphicDistortionCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                          ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute",
                         "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar18 = *(FName *)&pTVar12->Name;
  bVar6 = false;
  bVar8 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar16 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar16 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_128[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar17.Value;
        local_f8.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_120.s.LowPart = FVar17.Value;
      local_120.s.HighPart = uVar16;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar7 = true;
      goto LAB_14d6c5ed1;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14d6c5ed1:
  pFVar13 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_c0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar13);
  if (local_c0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_c0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_c0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_c0.Slots.AllocatorInstance.SecondaryData);
  }
  TVar9.Pad = local_118.StatData.Pad;
  local_108._0_8_ = *(undefined8 *)((longlong)this + 0x1a0);
  uVar16 = *(uint *)((longlong)this + 0x1a8);
  pvVar2 = *(void **)((longlong)this + 0x188);
  pFVar3 = *(FShaderParametersMetadata **)((longlong)this + 0x180);
  local_108._s_0.Z = uVar16;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_108._s_0);
  pFVar14 = TShaderRefBase<FAnamorphicDistortionCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FAnamorphicDistortionCS,FShaderMapPointerTable> *)
                       ((longlong)TVar9.Pad + 400));
  SetComputePipelineState(param_1,pFVar14);
  local_e0.ShaderContent = *(FShader **)((longlong)local_118.StatData.Pad + 400);
  local_e0.ShaderMap = *(FShaderMapBase **)((longlong)local_118.StatData.Pad + 0x198);
  ValidateShaderParameters(&local_e0,pFVar3,pvVar2);
  TVar9.Pad = local_118.StatData.Pad;
  ::SetShaderParameters
            (param_1,pFVar14,*(FShaderParameterBindings **)((longlong)local_118.StatData.Pad + 400),
             pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_1,local_108._s_0.X,local_108._s_0.Y,uVar16);
  pFVar14 = TShaderRefBase<FAnamorphicDistortionCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FAnamorphicDistortionCS,FShaderMapPointerTable> *)
                       ((longlong)TVar9.Pad + 400));
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar15 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    pFVar4 = *(FShaderParameterBindings **)((longlong)TVar9.Pad + 400);
    if ((pFVar4->RootParameterBufferIndex != 0xffff) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                            ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UnsetShaderUAVs(pFVar15,pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,pFVar14,pFVar15);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_118.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_118.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_120);
      local_118.StatData.Pad[4] = '\0';
      local_118.StatData.Pad[5] = '\0';
      local_118.StatData.Pad[6] = '\0';
      local_118.StatData.Pad[7] = '\0';
      local_118.StatData.Pad[0] = local_120.s.LowPart._0_1_;
      local_118.StatData.Pad[1] = local_120.s.LowPart._1_1_;
      local_118.StatData.Pad[2] = local_120.s.LowPart._2_1_;
      local_118.StatData.Pad[3] = local_120.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_118);
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
  return;
}

// Execute @ 14d6c61c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FBlendDistortionDisplacementMapCS>'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FShaderParameterBindings *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  TAlignedBytes<8,8> TVar9;
  bool bVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FUniformBufferStaticBindings *pFVar13;
  FRHIComputeShader *pFVar14;
  FRHIBatchedShaderUnbinds *pFVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar16;
  FNameEntryId FVar17;
  FName FVar18;
  undefined1 auStackY_188 [32];
  FColor_u_0 local_128 [2];
  LARGE_INTEGER local_120;
  FStatMessage local_118;
  TIntVector3<int>_u_0 local_108;
  FName local_f8;
  FName local_f0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_e0;
  FName local_d0;
  FName local_c8;
  FUniformBufferStaticBindings local_c0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_118.StatData.Pad = (uchar  [8])this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FBlendDistortionDisplacementMapCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FBlendDistortionDisplacementMapCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FBlendDistortionDisplacementMapCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FBlendDistortionDisplacementMapCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FBlendDistortionDisplacementMapCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FBlendDistortionDisplacementMapCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FBlendDistortionDisplacementMapCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FBlendDistortionDisplacementMapCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FBlendDistortionDisplacementMapCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FBlendDistortionDisplacementMapCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FBlendDistortionDisplacementMapCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FBlendDistortionDisplacementMapCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FBlendDistortionDisplacementMapCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FBlendDistortionDisplacementMapCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FBlendDistortionDisplacementMapCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FBlendDistortionDisplacementMapCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FBlendDistortionDisplacementMapCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FBlendDistortionDisplacementMapCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                          ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute",
                         "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar18 = *(FName *)&pTVar12->Name;
  bVar6 = false;
  bVar8 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar16 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar16 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_128[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar17.Value;
        local_f8.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_120.s.LowPart = FVar17.Value;
      local_120.s.HighPart = uVar16;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar7 = true;
      goto LAB_14d6c6341;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14d6c6341:
  pFVar13 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_c0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar13);
  if (local_c0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_c0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_c0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_c0.Slots.AllocatorInstance.SecondaryData);
  }
  TVar9.Pad = local_118.StatData.Pad;
  local_108._0_8_ = *(undefined8 *)((longlong)this + 0x1a0);
  uVar16 = *(uint *)((longlong)this + 0x1a8);
  pvVar2 = *(void **)((longlong)this + 0x188);
  pFVar3 = *(FShaderParametersMetadata **)((longlong)this + 0x180);
  local_108._s_0.Z = uVar16;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_108._s_0);
  pFVar14 = TShaderRefBase<FBlendDistortionDisplacementMapCS,FShaderMapPointerTable>::
            GetComputeShader((TShaderRefBase<FBlendDistortionDisplacementMapCS,FShaderMapPointerTable>
                              *)((longlong)TVar9.Pad + 400));
  SetComputePipelineState(param_1,pFVar14);
  local_e0.ShaderContent = *(FShader **)((longlong)local_118.StatData.Pad + 400);
  local_e0.ShaderMap = *(FShaderMapBase **)((longlong)local_118.StatData.Pad + 0x198);
  ValidateShaderParameters(&local_e0,pFVar3,pvVar2);
  TVar9.Pad = local_118.StatData.Pad;
  ::SetShaderParameters
            (param_1,pFVar14,*(FShaderParameterBindings **)((longlong)local_118.StatData.Pad + 400),
             pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_1,local_108._s_0.X,local_108._s_0.Y,uVar16);
  pFVar14 = TShaderRefBase<FBlendDistortionDisplacementMapCS,FShaderMapPointerTable>::
            GetComputeShader((TShaderRefBase<FBlendDistortionDisplacementMapCS,FShaderMapPointerTable>
                              *)((longlong)TVar9.Pad + 400));
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar15 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    pFVar4 = *(FShaderParameterBindings **)((longlong)TVar9.Pad + 400);
    if ((pFVar4->RootParameterBufferIndex != 0xffff) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                            ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UnsetShaderUAVs(pFVar15,pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,pFVar14,pFVar15);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_118.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_118.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_120);
      local_118.StatData.Pad[4] = '\0';
      local_118.StatData.Pad[5] = '\0';
      local_118.StatData.Pad[6] = '\0';
      local_118.StatData.Pad[7] = '\0';
      local_118.StatData.Pad[0] = local_120.s.LowPart._0_1_;
      local_118.StatData.Pad[1] = local_120.s.LowPart._1_1_;
      local_118.StatData.Pad[2] = local_120.s.LowPart._2_1_;
      local_118.StatData.Pad[3] = local_120.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_118);
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
  return;
}

// Execute @ 14d6c6630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FBrownConradyUDDistortionCS>'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FShaderParameterBindings *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  TAlignedBytes<8,8> TVar9;
  bool bVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FUniformBufferStaticBindings *pFVar13;
  FRHIComputeShader *pFVar14;
  FRHIBatchedShaderUnbinds *pFVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar16;
  FNameEntryId FVar17;
  FName FVar18;
  undefined1 auStackY_188 [32];
  FColor_u_0 local_128 [2];
  LARGE_INTEGER local_120;
  FStatMessage local_118;
  TIntVector3<int>_u_0 local_108;
  FName local_f8;
  FName local_f0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_e0;
  FName local_d0;
  FName local_c8;
  FUniformBufferStaticBindings local_c0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_118.StatData.Pad = (uchar  [8])this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FBrownConradyUDDistortionCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FBrownConradyUDDistortionCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FBrownConradyUDDistortionCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FBrownConradyUDDistortionCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FBrownConradyUDDistortionCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FBrownConradyUDDistortionCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FBrownConradyUDDistortionCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FBrownConradyUDDistortionCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FBrownConradyUDDistortionCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FBrownConradyUDDistortionCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FBrownConradyUDDistortionCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FBrownConradyUDDistortionCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FBrownConradyUDDistortionCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FBrownConradyUDDistortionCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FBrownConradyUDDistortionCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FBrownConradyUDDistortionCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FBrownConradyUDDistortionCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FBrownConradyUDDistortionCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                          ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute",
                         "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar18 = *(FName *)&pTVar12->Name;
  bVar6 = false;
  bVar8 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar16 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar16 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_128[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar17.Value;
        local_f8.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_120.s.LowPart = FVar17.Value;
      local_120.s.HighPart = uVar16;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar7 = true;
      goto LAB_14d6c67b1;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14d6c67b1:
  pFVar13 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_c0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar13);
  if (local_c0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_c0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_c0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_c0.Slots.AllocatorInstance.SecondaryData);
  }
  TVar9.Pad = local_118.StatData.Pad;
  local_108._0_8_ = *(undefined8 *)((longlong)this + 0x1a0);
  uVar16 = *(uint *)((longlong)this + 0x1a8);
  pvVar2 = *(void **)((longlong)this + 0x188);
  pFVar3 = *(FShaderParametersMetadata **)((longlong)this + 0x180);
  local_108._s_0.Z = uVar16;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_108._s_0);
  pFVar14 = TShaderRefBase<FBrownConradyUDDistortionCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FBrownConradyUDDistortionCS,FShaderMapPointerTable> *)
                       ((longlong)TVar9.Pad + 400));
  SetComputePipelineState(param_1,pFVar14);
  local_e0.ShaderContent = *(FShader **)((longlong)local_118.StatData.Pad + 400);
  local_e0.ShaderMap = *(FShaderMapBase **)((longlong)local_118.StatData.Pad + 0x198);
  ValidateShaderParameters(&local_e0,pFVar3,pvVar2);
  TVar9.Pad = local_118.StatData.Pad;
  ::SetShaderParameters
            (param_1,pFVar14,*(FShaderParameterBindings **)((longlong)local_118.StatData.Pad + 400),
             pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_1,local_108._s_0.X,local_108._s_0.Y,uVar16);
  pFVar14 = TShaderRefBase<FBrownConradyUDDistortionCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FBrownConradyUDDistortionCS,FShaderMapPointerTable> *)
                       ((longlong)TVar9.Pad + 400));
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar15 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    pFVar4 = *(FShaderParameterBindings **)((longlong)TVar9.Pad + 400);
    if ((pFVar4->RootParameterBufferIndex != 0xffff) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                            ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UnsetShaderUAVs(pFVar15,pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,pFVar14,pFVar15);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_118.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_118.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_120);
      local_118.StatData.Pad[4] = '\0';
      local_118.StatData.Pad[5] = '\0';
      local_118.StatData.Pad[6] = '\0';
      local_118.StatData.Pad[7] = '\0';
      local_118.StatData.Pad[0] = local_120.s.LowPart._0_1_;
      local_118.StatData.Pad[1] = local_120.s.LowPart._1_1_;
      local_118.StatData.Pad[2] = local_120.s.LowPart._2_1_;
      local_118.StatData.Pad[3] = local_120.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_118);
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
  return;
}

// Execute @ 14d6c6aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FCropDistortionDisplacementMapCS>'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FShaderParameterBindings *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  TAlignedBytes<8,8> TVar9;
  bool bVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FUniformBufferStaticBindings *pFVar13;
  FRHIComputeShader *pFVar14;
  FRHIBatchedShaderUnbinds *pFVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar16;
  FNameEntryId FVar17;
  FName FVar18;
  undefined1 auStackY_188 [32];
  FColor_u_0 local_128 [2];
  LARGE_INTEGER local_120;
  FStatMessage local_118;
  TIntVector3<int>_u_0 local_108;
  FName local_f8;
  FName local_f0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_e0;
  FName local_d0;
  FName local_c8;
  FUniformBufferStaticBindings local_c0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_118.StatData.Pad = (uchar  [8])this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FCropDistortionDisplacementMapCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FCropDistortionDisplacementMapCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FCropDistortionDisplacementMapCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FCropDistortionDisplacementMapCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FCropDistortionDisplacementMapCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FCropDistortionDisplacementMapCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FCropDistortionDisplacementMapCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FCropDistortionDisplacementMapCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FCropDistortionDisplacementMapCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FCropDistortionDisplacementMapCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FCropDistortionDisplacementMapCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FCropDistortionDisplacementMapCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FCropDistortionDisplacementMapCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FCropDistortionDisplacementMapCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FCropDistortionDisplacementMapCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FCropDistortionDisplacementMapCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FCropDistortionDisplacementMapCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FCropDistortionDisplacementMapCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                          ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute",
                         "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar18 = *(FName *)&pTVar12->Name;
  bVar6 = false;
  bVar8 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar16 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar16 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_128[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar17.Value;
        local_f8.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_120.s.LowPart = FVar17.Value;
      local_120.s.HighPart = uVar16;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar7 = true;
      goto LAB_14d6c6c21;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14d6c6c21:
  pFVar13 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_c0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar13);
  if (local_c0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_c0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_c0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_c0.Slots.AllocatorInstance.SecondaryData);
  }
  TVar9.Pad = local_118.StatData.Pad;
  local_108._0_8_ = *(undefined8 *)((longlong)this + 0x1a0);
  uVar16 = *(uint *)((longlong)this + 0x1a8);
  pvVar2 = *(void **)((longlong)this + 0x188);
  pFVar3 = *(FShaderParametersMetadata **)((longlong)this + 0x180);
  local_108._s_0.Z = uVar16;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_108._s_0);
  pFVar14 = TShaderRefBase<FCropDistortionDisplacementMapCS,FShaderMapPointerTable>::
            GetComputeShader((TShaderRefBase<FCropDistortionDisplacementMapCS,FShaderMapPointerTable>
                              *)((longlong)TVar9.Pad + 400));
  SetComputePipelineState(param_1,pFVar14);
  local_e0.ShaderContent = *(FShader **)((longlong)local_118.StatData.Pad + 400);
  local_e0.ShaderMap = *(FShaderMapBase **)((longlong)local_118.StatData.Pad + 0x198);
  ValidateShaderParameters(&local_e0,pFVar3,pvVar2);
  TVar9.Pad = local_118.StatData.Pad;
  ::SetShaderParameters
            (param_1,pFVar14,*(FShaderParameterBindings **)((longlong)local_118.StatData.Pad + 400),
             pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_1,local_108._s_0.X,local_108._s_0.Y,uVar16);
  pFVar14 = TShaderRefBase<FCropDistortionDisplacementMapCS,FShaderMapPointerTable>::
            GetComputeShader((TShaderRefBase<FCropDistortionDisplacementMapCS,FShaderMapPointerTable>
                              *)((longlong)TVar9.Pad + 400));
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar15 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    pFVar4 = *(FShaderParameterBindings **)((longlong)TVar9.Pad + 400);
    if ((pFVar4->RootParameterBufferIndex != 0xffff) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                            ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UnsetShaderUAVs(pFVar15,pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,pFVar14,pFVar15);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_118.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_118.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_120);
      local_118.StatData.Pad[4] = '\0';
      local_118.StatData.Pad[5] = '\0';
      local_118.StatData.Pad[6] = '\0';
      local_118.StatData.Pad[7] = '\0';
      local_118.StatData.Pad[0] = local_120.s.LowPart._0_1_;
      local_118.StatData.Pad[1] = local_120.s.LowPart._1_1_;
      local_118.StatData.Pad[2] = local_120.s.LowPart._2_1_;
      local_118.StatData.Pad[3] = local_120.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_118);
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
  return;
}

// Execute @ 14d6c6f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FSphericalDistortionCS>'::__l2::<lambda_1>_>::
Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FShaderParameterBindings *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  TAlignedBytes<8,8> TVar9;
  bool bVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FUniformBufferStaticBindings *pFVar13;
  FRHIComputeShader *pFVar14;
  FRHIBatchedShaderUnbinds *pFVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar16;
  FNameEntryId FVar17;
  FName FVar18;
  undefined1 auStackY_188 [32];
  FColor_u_0 local_128 [2];
  LARGE_INTEGER local_120;
  FStatMessage local_118;
  TIntVector3<int>_u_0 local_108;
  FName local_f8;
  FName local_f0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_e0;
  FName local_d0;
  FName local_c8;
  FUniformBufferStaticBindings local_c0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_118.StatData.Pad = (uchar  [8])this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FSphericalDistortionCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FSphericalDistortionCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FSphericalDistortionCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FSphericalDistortionCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FSphericalDistortionCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FSphericalDistortionCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FSphericalDistortionCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FSphericalDistortionCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FSphericalDistortionCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FSphericalDistortionCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FSphericalDistortionCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FSphericalDistortionCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FSphericalDistortionCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FSphericalDistortionCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FSphericalDistortionCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FSphericalDistortionCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FSphericalDistortionCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FSphericalDistortionCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                          ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute",
                         "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar18 = *(FName *)&pTVar12->Name;
  bVar6 = false;
  bVar8 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar16 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar16 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_128[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar17.Value;
        local_f8.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_120.s.LowPart = FVar17.Value;
      local_120.s.HighPart = uVar16;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar7 = true;
      goto LAB_14d6c7091;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14d6c7091:
  pFVar13 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_c0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar13);
  if (local_c0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_c0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_c0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_c0.Slots.AllocatorInstance.SecondaryData);
  }
  TVar9.Pad = local_118.StatData.Pad;
  local_108._0_8_ = *(undefined8 *)((longlong)this + 0x1a0);
  uVar16 = *(uint *)((longlong)this + 0x1a8);
  pvVar2 = *(void **)((longlong)this + 0x188);
  pFVar3 = *(FShaderParametersMetadata **)((longlong)this + 0x180);
  local_108._s_0.Z = uVar16;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_108._s_0);
  pFVar14 = TShaderRefBase<FSphericalDistortionCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FSphericalDistortionCS,FShaderMapPointerTable> *)
                       ((longlong)TVar9.Pad + 400));
  SetComputePipelineState(param_1,pFVar14);
  local_e0.ShaderContent = *(FShader **)((longlong)local_118.StatData.Pad + 400);
  local_e0.ShaderMap = *(FShaderMapBase **)((longlong)local_118.StatData.Pad + 0x198);
  ValidateShaderParameters(&local_e0,pFVar3,pvVar2);
  TVar9.Pad = local_118.StatData.Pad;
  ::SetShaderParameters
            (param_1,pFVar14,*(FShaderParameterBindings **)((longlong)local_118.StatData.Pad + 400),
             pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_1,local_108._s_0.X,local_108._s_0.Y,uVar16);
  pFVar14 = TShaderRefBase<FSphericalDistortionCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FSphericalDistortionCS,FShaderMapPointerTable> *)
                       ((longlong)TVar9.Pad + 400));
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar15 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    pFVar4 = *(FShaderParameterBindings **)((longlong)TVar9.Pad + 400);
    if ((pFVar4->RootParameterBufferIndex != 0xffff) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                            ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UnsetShaderUAVs(pFVar15,pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,pFVar14,pFVar15);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_118.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_118.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_120);
      local_118.StatData.Pad[4] = '\0';
      local_118.StatData.Pad[5] = '\0';
      local_118.StatData.Pad[6] = '\0';
      local_118.StatData.Pad[7] = '\0';
      local_118.StatData.Pad[0] = local_120.s.LowPart._0_1_;
      local_118.StatData.Pad[1] = local_120.s.LowPart._1_1_;
      local_118.StatData.Pad[2] = local_120.s.LowPart._2_1_;
      local_118.StatData.Pad[3] = local_120.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_118);
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
  return;
}

