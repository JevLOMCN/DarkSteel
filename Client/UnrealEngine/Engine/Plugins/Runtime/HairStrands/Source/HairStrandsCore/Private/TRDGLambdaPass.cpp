// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 45

// Execute @ 14e00b8a0

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FHairStrandCopyPositionCS>'::__l2::<lambda_1>_>::
Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  LARGE_INTEGER LVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FUniformBufferStaticBindings *pFVar10;
  FRHIComputeShader *pFVar11;
  IRHIComputeContext *pIVar12;
  undefined8 *puVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar14;
  FNameEntryId FVar15;
  FName FVar16;
  FNameEntryId FVar17;
  undefined1 auStackY_158 [32];
  FName local_f8;
  LARGE_INTEGER local_f0;
  TIntVector3<int>_u_0 local_e8;
  uint local_dc;
  FName local_d8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_c8;
  FUniformBufferStaticBindings local_b8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_158;
  FVar17.Value = 0;
  local_f0 = (LARGE_INTEGER)this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandCopyPositionCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandCopyPositionCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandCopyPositionCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandCopyPositionCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandCopyPositionCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandCopyPositionCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandCopyPositionCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandCopyPositionCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandCopyPositionCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&local_f8,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandCopyPositionCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandCopyPositionCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandCopyPositionCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandCopyPositionCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandCopyPositionCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandCopyPositionCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName((FName *)&local_e8._s_0,"STAT_FRDGPass_Execute");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandCopyPositionCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandCopyPositionCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandCopyPositionCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar16 = *(FName *)&pTVar9->Name;
  bVar4 = false;
  bVar6 = false;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar14 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar14 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_f8.ComparisonIndex.Value = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_f8,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar15.Value;
        local_f8.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f8.ComparisonIndex.Value = FVar15.Value;
      local_f8.Number = uVar14;
      local_d8 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar5 = true;
      FVar17.Value = local_d8.ComparisonIndex.Value;
      goto LAB_14e00ba30;
    }
  }
  bVar5 = false;
  FVar16 = local_d8;
LAB_14e00ba30:
  pFVar10 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_b8);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar10);
  if (local_b8.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_b8.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_b8.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_b8.Slots.AllocatorInstance.SecondaryData);
  }
  LVar7 = local_f0;
  local_f8.ComparisonIndex.Value = *(uint *)((longlong)this + 0x1a8);
  local_e8._0_8_ = *(ulonglong *)((longlong)this + 0x1a0);
  pvVar2 = *(void **)((longlong)this + 0x188);
  pFVar3 = *(FShaderParametersMetadata **)((longlong)this + 0x180);
  local_e8._s_0.Z = local_f8.ComparisonIndex.Value;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_e8._s_0);
  pFVar11 = (FRHIComputeShader *)
            TShaderRefBase<FHairStrandCopyPositionCS,FShaderMapPointerTable>::GetRHIShaderBase
                      ((TShaderRefBase<FHairStrandCopyPositionCS,FShaderMapPointerTable> *)
                       (LVar7.QuadPart + 400),SF_Compute,true);
  SetComputePipelineState(param_1,pFVar11);
  local_c8.ShaderContent = *(FShader **)(local_f0.QuadPart + 400);
  local_c8.ShaderMap = *(FShaderMapBase **)(local_f0.QuadPart + 0x198);
  ValidateShaderParameters(&local_c8,pFVar3,pvVar2);
  LVar7 = local_f0;
  ::SetShaderParameters
            (param_1,pFVar11,*(FShaderParameterBindings **)(local_f0.QuadPart + 400),pFVar3,pvVar2);
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar13 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar13;
    *(undefined8 **)&param_1->field_0x30 = puVar13 + 1;
    puVar13[1] = 0;
    *puVar13 = &___7FRHICommandDispatchComputeShader__6B_;
    *(int *)(puVar13 + 2) = local_e8._s_0.X;
    *(uint *)(puVar13 + 3) = local_f8.ComparisonIndex.Value;
    *(int *)((longlong)puVar13 + 0x14) = local_e8._s_0.Y;
  }
  else {
    pIVar12 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
    (**(code **)(pIVar12->_padding_ + 0x18))
              (pIVar12,local_e8._0_8_ & 0xffffffff,local_e8._s_0.Y,local_f8.ComparisonIndex.Value);
  }
  pFVar11 = (FRHIComputeShader *)
            TShaderRefBase<FHairStrandCopyPositionCS,FShaderMapPointerTable>::GetRHIShaderBase
                      ((TShaderRefBase<FHairStrandCopyPositionCS,FShaderMapPointerTable> *)
                       (LVar7.QuadPart + 400),SF_Compute,true);
  UnsetShaderUAVs<FRHIComputeCommandList,FHairStrandCopyPositionCS>
            (param_1,(TShaderRefBase<FHairStrandCopyPositionCS,FShaderMapPointerTable> *)
                     (LVar7.QuadPart + 400),pFVar11);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_dc = FVar16.Number & 0xffff6fff | 0x6000;
      local_e8._s_0.Z = FVar17.Value;
      QueryPerformanceCounter(&local_f0);
      local_e8._0_8_ = local_f0.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_e8._s_0);
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

// Execute @ 14e04bf80

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FDrawDebugCardAtlasCS>'::__l2::<lambda_1>_>::
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDrawDebugCardAtlasCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDrawDebugCardAtlasCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDrawDebugCardAtlasCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDrawDebugCardAtlasCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDrawDebugCardAtlasCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDrawDebugCardAtlasCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDrawDebugCardAtlasCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDrawDebugCardAtlasCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDrawDebugCardAtlasCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDrawDebugCardAtlasCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDrawDebugCardAtlasCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDrawDebugCardAtlasCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDrawDebugCardAtlasCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDrawDebugCardAtlasCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDrawDebugCardAtlasCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDrawDebugCardAtlasCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDrawDebugCardAtlasCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDrawDebugCardAtlasCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e04c101;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e04c101:
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
  pFVar14 = TShaderRefBase<FDrawDebugCardAtlasCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FDrawDebugCardAtlasCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FDrawDebugCardAtlasCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FDrawDebugCardAtlasCS,FShaderMapPointerTable> *)
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

// Execute @ 14e04c3f0

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FDrawDebugCardGuidesCS>'::__l2::<lambda_1>_>::
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDrawDebugCardGuidesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDrawDebugCardGuidesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDrawDebugCardGuidesCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDrawDebugCardGuidesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDrawDebugCardGuidesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDrawDebugCardGuidesCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDrawDebugCardGuidesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDrawDebugCardGuidesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDrawDebugCardGuidesCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDrawDebugCardGuidesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDrawDebugCardGuidesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDrawDebugCardGuidesCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDrawDebugCardGuidesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDrawDebugCardGuidesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDrawDebugCardGuidesCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDrawDebugCardGuidesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDrawDebugCardGuidesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDrawDebugCardGuidesCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e04c571;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e04c571:
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
  pFVar14 = TShaderRefBase<FDrawDebugCardGuidesCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FDrawDebugCardGuidesCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FDrawDebugCardGuidesCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FDrawDebugCardGuidesCS,FShaderMapPointerTable> *)
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

// Execute @ 14e04c860

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FDrawDebugClusterAABBCS>'::__l2::<lambda_1>_>::
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDrawDebugClusterAABBCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDrawDebugClusterAABBCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDrawDebugClusterAABBCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDrawDebugClusterAABBCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDrawDebugClusterAABBCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDrawDebugClusterAABBCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDrawDebugClusterAABBCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDrawDebugClusterAABBCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDrawDebugClusterAABBCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDrawDebugClusterAABBCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDrawDebugClusterAABBCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDrawDebugClusterAABBCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDrawDebugClusterAABBCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDrawDebugClusterAABBCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDrawDebugClusterAABBCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDrawDebugClusterAABBCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDrawDebugClusterAABBCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDrawDebugClusterAABBCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e04c9e1;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e04c9e1:
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
  pFVar14 = TShaderRefBase<FDrawDebugClusterAABBCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FDrawDebugClusterAABBCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FDrawDebugClusterAABBCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FDrawDebugClusterAABBCS,FShaderMapPointerTable> *)
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

// Execute @ 14e04ccd0

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FDrawDebugStrandsCVsCS>'::__l2::<lambda_1>_>::
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDrawDebugStrandsCVsCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDrawDebugStrandsCVsCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDrawDebugStrandsCVsCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDrawDebugStrandsCVsCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDrawDebugStrandsCVsCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDrawDebugStrandsCVsCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDrawDebugStrandsCVsCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDrawDebugStrandsCVsCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDrawDebugStrandsCVsCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDrawDebugStrandsCVsCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDrawDebugStrandsCVsCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDrawDebugStrandsCVsCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDrawDebugStrandsCVsCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDrawDebugStrandsCVsCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDrawDebugStrandsCVsCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDrawDebugStrandsCVsCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDrawDebugStrandsCVsCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDrawDebugStrandsCVsCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e04ce51;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e04ce51:
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
  pFVar14 = TShaderRefBase<FDrawDebugStrandsCVsCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FDrawDebugStrandsCVsCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FDrawDebugStrandsCVsCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FDrawDebugStrandsCVsCS,FShaderMapPointerTable> *)
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

// Execute @ 14e04d140

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FHairDebugPrintHairSkinCacheCS>'::__l2::<lambda_1>_>
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairDebugPrintHairSkinCacheCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairDebugPrintHairSkinCacheCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairDebugPrintHairSkinCacheCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairDebugPrintHairSkinCacheCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairDebugPrintHairSkinCacheCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairDebugPrintHairSkinCacheCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairDebugPrintHairSkinCacheCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairDebugPrintHairSkinCacheCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairDebugPrintHairSkinCacheCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairDebugPrintHairSkinCacheCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairDebugPrintHairSkinCacheCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairDebugPrintHairSkinCacheCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairDebugPrintHairSkinCacheCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairDebugPrintHairSkinCacheCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairDebugPrintHairSkinCacheCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairDebugPrintHairSkinCacheCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairDebugPrintHairSkinCacheCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairDebugPrintHairSkinCacheCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e04d2c1;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e04d2c1:
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
  pFVar14 = TShaderRefBase<FHairDebugPrintHairSkinCacheCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairDebugPrintHairSkinCacheCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FHairDebugPrintHairSkinCacheCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairDebugPrintHairSkinCacheCS,FShaderMapPointerTable> *)
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

// Execute @ 14e04d5b0

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FHairDebugPrintInstanceCS>'::__l2::<lambda_1>_>::
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairDebugPrintInstanceCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairDebugPrintInstanceCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairDebugPrintInstanceCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairDebugPrintInstanceCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairDebugPrintInstanceCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairDebugPrintInstanceCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairDebugPrintInstanceCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairDebugPrintInstanceCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairDebugPrintInstanceCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairDebugPrintInstanceCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairDebugPrintInstanceCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairDebugPrintInstanceCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairDebugPrintInstanceCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairDebugPrintInstanceCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairDebugPrintInstanceCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairDebugPrintInstanceCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairDebugPrintInstanceCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairDebugPrintInstanceCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e04d731;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e04d731:
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
  pFVar14 = TShaderRefBase<FHairDebugPrintInstanceCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairDebugPrintInstanceCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FHairDebugPrintInstanceCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairDebugPrintInstanceCS,FShaderMapPointerTable> *)
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

// Execute @ 14e04da20

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FHairDebugPrintMemoryCS>'::__l2::<lambda_1>_>::
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairDebugPrintMemoryCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairDebugPrintMemoryCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairDebugPrintMemoryCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairDebugPrintMemoryCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairDebugPrintMemoryCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairDebugPrintMemoryCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairDebugPrintMemoryCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairDebugPrintMemoryCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairDebugPrintMemoryCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairDebugPrintMemoryCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairDebugPrintMemoryCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairDebugPrintMemoryCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairDebugPrintMemoryCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairDebugPrintMemoryCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairDebugPrintMemoryCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairDebugPrintMemoryCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairDebugPrintMemoryCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairDebugPrintMemoryCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e04dba1;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e04dba1:
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
  pFVar14 = TShaderRefBase<FHairDebugPrintMemoryCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairDebugPrintMemoryCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FHairDebugPrintMemoryCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairDebugPrintMemoryCS,FShaderMapPointerTable> *)
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

// Execute @ 14e04de90

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FHairProjectionHairDebugCS>'::__l2::<lambda_1>_>::
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairProjectionHairDebugCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairProjectionHairDebugCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairProjectionHairDebugCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairProjectionHairDebugCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairProjectionHairDebugCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairProjectionHairDebugCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairProjectionHairDebugCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairProjectionHairDebugCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairProjectionHairDebugCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairProjectionHairDebugCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairProjectionHairDebugCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairProjectionHairDebugCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairProjectionHairDebugCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairProjectionHairDebugCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairProjectionHairDebugCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairProjectionHairDebugCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairProjectionHairDebugCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairProjectionHairDebugCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e04e011;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e04e011:
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
  pFVar14 = TShaderRefBase<FHairProjectionHairDebugCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairProjectionHairDebugCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FHairProjectionHairDebugCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairProjectionHairDebugCS,FShaderMapPointerTable> *)
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

// Execute @ 14e04e300

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FHairTranscodeCS>'::__l2::<lambda_1>_>::Execute
          (void *this,FRHIComputeCommandList *param_1)

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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairTranscodeCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairTranscodeCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairTranscodeCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairTranscodeCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairTranscodeCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairTranscodeCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairTranscodeCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairTranscodeCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairTranscodeCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairTranscodeCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairTranscodeCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairTranscodeCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairTranscodeCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairTranscodeCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairTranscodeCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairTranscodeCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairTranscodeCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairTranscodeCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e04e481;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e04e481:
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
  pFVar14 = TShaderRefBase<FHairTranscodeCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairTranscodeCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FHairTranscodeCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairTranscodeCS,FShaderMapPointerTable> *)
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

// Execute @ 14e090b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FCardsOrMeshesResourceBLASParameters,`AddBuildHairCardAccelerationStructurePass'::__l19::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  FRHIGPUMask FVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FCardsOrMeshesResourceBLASParameters,_void___cdecl_AddBuildHairCardAccelerationStructurePass(FRDGBuilder_&,FHairGroupInstance_*,int,bool)_::_19_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar10;
  FUniformBufferStaticBindings *pFVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined1 auStackY_168 [32];
  FColor_u_0 local_108 [2];
  LARGE_INTEGER local_100;
  FName local_f8;
  FName local_f0;
  FStatMessage local_e0;
  FName local_d0;
  FName local_c8;
  FUniformBufferStaticBindings local_c0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FCardsOrMeshesResourceBLASParameters,_void___cdecl_AddBuildHairCardAccelerationStructurePass(FRDGBuilder_&,FHairGroupInstance_*,int,bool)_::_19_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar9 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar9,
                   L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,
                   true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar10 = ::StatPtr_STAT_FRDGPass_Execute;
  if (::StatPtr_STAT_FRDGPass_Execute ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FCardsOrMeshesResourceBLASParameters,_void___cdecl_AddBuildHairCardAccelerationStructurePass(FRDGBuilder_&,FHairGroupInstance_*,int,bool)_::_19_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar9 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    FVar10 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FCardsOrMeshesResourceBLASParameters,_void___cdecl_AddBuildHairCardAccelerationStructurePass(FRDGBuilder_&,FHairGroupInstance_*,int,bool)_::_19_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar9,
                          L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                          ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_108[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_108[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar13.Value;
        local_f8.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_100.s.LowPart = FVar13.Value;
      local_100.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_14e090cd4;
    }
  }
  bVar6 = false;
  FVar14 = local_f0;
LAB_14e090cd4:
  pFVar11 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_c0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar11);
  if (local_c0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_c0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_c0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_c0.Slots.AllocatorInstance.SecondaryData);
  }
  FVar2.GPUMask = *(uint *)&param_1->field_0x29c;
  FRHIComputeCommandList::SetGPUMask
            (param_1,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
  uVar12 = *(uint *)((longlong)this + 0x188);
  lVar3 = *(longlong *)((longlong)this + 0x180);
  uVar15 = 0;
  if ((int)uVar12 < *(int *)(lVar3 + 0x118)) {
    uVar15 = ~uVar12 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar16 = (undefined8 *)((longlong)(int)uVar12 * 0x68 + *(longlong *)(lVar3 + 0x110));
  lVar3 = puVar16[3];
  if (*(char *)(lVar3 + 0x1a9) == '\0') {
    BuildHairAccelerationStructure_Cards
              ((FRHICommandList *)param_1,(FHairCardsRestResource *)*puVar16,
               (FHairCardsDeformedResource *)puVar16[1],(FRayTracingGeometry *)(lVar3 + 0xa0),
               (FString *)(*(longlong *)((longlong)this + 0x180) + 0x138),
               (FString *)(*(longlong *)((longlong)this + 0x180) + 0x170),
               *(uint *)((longlong)this + 0x188));
    *(undefined1 *)(puVar16[3] + 0x1a9) = 1;
  }
  else if (*(char *)((longlong)this + 0x18c) != '\0') {
    UpdateHairAccelerationStructure
              ((FRHICommandList *)param_1,(FRayTracingGeometry *)(lVar3 + 0xa0),Update);
  }
  FRHIComputeCommandList::SetGPUMask(param_1,FVar2);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_e0.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_e0.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_100);
      local_e0.StatData.Pad[4] = '\0';
      local_e0.StatData.Pad[5] = '\0';
      local_e0.StatData.Pad[6] = '\0';
      local_e0.StatData.Pad[7] = '\0';
      local_e0.StatData.Pad[0] = local_100.s.LowPart._0_1_;
      local_e0.StatData.Pad[1] = local_100.s.LowPart._1_1_;
      local_e0.StatData.Pad[2] = local_100.s.LowPart._2_1_;
      local_e0.StatData.Pad[3] = local_100.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_e0);
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

// Execute @ 14e090fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FCardsOrMeshesResourceBLASParameters,`AddBuildHairMeshAccelerationStructurePass'::__l19::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  FRHIGPUMask FVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FCardsOrMeshesResourceBLASParameters,_void___cdecl_AddBuildHairMeshAccelerationStructurePass(FRDGBuilder_&,FHairGroupInstance_*,int,bool)_::_19_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar10;
  FUniformBufferStaticBindings *pFVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined1 auStackY_168 [32];
  FColor_u_0 local_108 [2];
  LARGE_INTEGER local_100;
  FName local_f8;
  FName local_f0;
  FStatMessage local_e0;
  FName local_d0;
  FName local_c8;
  FUniformBufferStaticBindings local_c0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FCardsOrMeshesResourceBLASParameters,_void___cdecl_AddBuildHairMeshAccelerationStructurePass(FRDGBuilder_&,FHairGroupInstance_*,int,bool)_::_19_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar9 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar9,
                   L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,
                   true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar10 = ::StatPtr_STAT_FRDGPass_Execute;
  if (::StatPtr_STAT_FRDGPass_Execute ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FCardsOrMeshesResourceBLASParameters,_void___cdecl_AddBuildHairMeshAccelerationStructurePass(FRDGBuilder_&,FHairGroupInstance_*,int,bool)_::_19_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar9 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    FVar10 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FCardsOrMeshesResourceBLASParameters,_void___cdecl_AddBuildHairMeshAccelerationStructurePass(FRDGBuilder_&,FHairGroupInstance_*,int,bool)_::_19_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar9,
                          L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                          ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_108[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_108[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar13.Value;
        local_f8.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_100.s.LowPart = FVar13.Value;
      local_100.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_14e091144;
    }
  }
  bVar6 = false;
  FVar14 = local_f0;
LAB_14e091144:
  pFVar11 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_c0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar11);
  if (local_c0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_c0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_c0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_c0.Slots.AllocatorInstance.SecondaryData);
  }
  FVar2.GPUMask = *(uint *)&param_1->field_0x29c;
  FRHIComputeCommandList::SetGPUMask
            (param_1,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
  uVar12 = *(uint *)((longlong)this + 0x188);
  lVar3 = *(longlong *)((longlong)this + 0x180);
  uVar15 = 0;
  if ((int)uVar12 < *(int *)(lVar3 + 0x128)) {
    uVar15 = ~uVar12 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar16 = (undefined8 *)((longlong)(int)uVar12 * 0x30 + *(longlong *)(lVar3 + 0x120));
  lVar3 = puVar16[2];
  if (*(char *)(lVar3 + 0x1a9) == '\0') {
    BuildHairAccelerationStructure_Meshes
              ((FRHICommandList *)param_1,(FHairMeshesRestResource *)*puVar16,
               (FHairMeshesDeformedResource *)puVar16[1],(FRayTracingGeometry *)(lVar3 + 0xa0),
               (FString *)(*(longlong *)((longlong)this + 0x180) + 0x138),
               *(uint *)((longlong)this + 0x188));
    *(undefined1 *)(puVar16[2] + 0x1a9) = 1;
  }
  else if (*(char *)((longlong)this + 0x18c) != '\0') {
    UpdateHairAccelerationStructure
              ((FRHICommandList *)param_1,(FRayTracingGeometry *)(lVar3 + 0xa0),Update);
  }
  FRHIComputeCommandList::SetGPUMask(param_1,FVar2);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_e0.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_e0.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_100);
      local_e0.StatData.Pad[4] = '\0';
      local_e0.StatData.Pad[5] = '\0';
      local_e0.StatData.Pad[6] = '\0';
      local_e0.StatData.Pad[7] = '\0';
      local_e0.StatData.Pad[0] = local_100.s.LowPart._0_1_;
      local_e0.StatData.Pad[1] = local_100.s.LowPart._1_1_;
      local_e0.StatData.Pad[2] = local_100.s.LowPart._2_1_;
      local_e0.StatData.Pad[3] = local_100.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_e0);
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

// Execute @ 14e091430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FHairFollicleMaskParameters,`AddFollicleMaskPass'::__l2::<lambda_1>_>::Execute
          (void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FHairFollicleMaskParameters,_void___cdecl_AddFollicleMaskPass(FRDGBuilder_&,FGlobalShaderMap_*,bool,unsigned_int,unsigned_int,unsigned_int,FHairStrandsRestRootResource_*,FRDGTexture_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FHairFollicleMaskParameters,_void___cdecl_AddFollicleMaskPass(FRDGBuilder_&,FGlobalShaderMap_*,bool,unsigned_int,unsigned_int,unsigned_int,FHairStrandsRestRootResource_*,FRDGTexture_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FHairFollicleMaskParameters,_void___cdecl_AddFollicleMaskPass(FRDGBuilder_&,FGlobalShaderMap_*,bool,unsigned_int,unsigned_int,unsigned_int,FHairStrandsRestRootResource_*,FRDGTexture_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_b8,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FHairFollicleMaskParameters,_void___cdecl_AddFollicleMaskPass(FRDGBuilder_&,FGlobalShaderMap_*,bool,unsigned_int,unsigned_int,unsigned_int,FHairStrandsRestRootResource_*,FRDGTexture_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      goto LAB_14e0915b9;
    }
  }
  bVar3 = false;
  FVar10 = local_c8;
LAB_14e0915b9:
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
  `AddFollicleMaskPass'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x180),local_d0,(FRHICommandList *)param_1);
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

// Execute @ 14e0917b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FHairFollicleMaskParameters,`AddFollicleMaskPass'::__l2::<lambda_1>_>::Execute
          (void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FHairFollicleMaskParameters,_void___cdecl_AddFollicleMaskPass(FRDGBuilder_&,FGlobalShaderMap_*,bool,unsigned_int,unsigned_int,unsigned_int,FRDGBuffer_*_const,FRDGTexture_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FHairFollicleMaskParameters,_void___cdecl_AddFollicleMaskPass(FRDGBuilder_&,FGlobalShaderMap_*,bool,unsigned_int,unsigned_int,unsigned_int,FRDGBuffer_*_const,FRDGTexture_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FHairFollicleMaskParameters,_void___cdecl_AddFollicleMaskPass(FRDGBuilder_&,FGlobalShaderMap_*,bool,unsigned_int,unsigned_int,unsigned_int,FRDGBuffer_*_const,FRDGTexture_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_b8,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FHairFollicleMaskParameters,_void___cdecl_AddFollicleMaskPass(FRDGBuilder_&,FGlobalShaderMap_*,bool,unsigned_int,unsigned_int,unsigned_int,FRDGBuffer_*_const,FRDGTexture_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      goto LAB_14e091939;
    }
  }
  bVar3 = false;
  FVar10 = local_c8;
LAB_14e091939:
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
  `AddFollicleMaskPass'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x180),local_d0,(FRHICommandList *)param_1);
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

// Execute @ 14e091b30

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
TRDGLambdaPass<FGenerateMipCS::FParameters,`AddComputeMipsPass'::__l11::<lambda_1>_>::Execute
          (void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  void *pvVar2;
  FShaderParameterBindings *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FGenerateMipCS::FParameters,_void___cdecl_AddComputeMipsPass(FRDGBuilder_&,FGlobalShaderMap_*,FRDGTexture_*_&)_::_11_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar12;
  FUniformBufferStaticBindings *pFVar13;
  FShaderParametersMetadata *pFVar14;
  FRHIComputeShader *pFVar15;
  FRHIBatchedShaderUnbinds *pFVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar17;
  FName FVar18;
  uint uVar19;
  undefined1 auStackY_188 [32];
  FColor_u_0 local_128 [2];
  LARGE_INTEGER local_120;
  TIntVector3<int>_u_0 local_118;
  FName local_108;
  FName local_100;
  FStatMessage local_f0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_e0;
  FName local_d0;
  FName local_c8;
  FUniformBufferStaticBindings local_c0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_120 = (LARGE_INTEGER)this;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FGenerateMipCS::FParameters,_void___cdecl_AddComputeMipsPass(FRDGBuilder_&,FGlobalShaderMap_*,FRDGTexture_*_&)_::_11_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar11,
                   L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,
                   true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar12 = ::StatPtr_STAT_FRDGPass_Execute;
  if (::StatPtr_STAT_FRDGPass_Execute ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FGenerateMipCS::FParameters,_void___cdecl_AddComputeMipsPass(FRDGBuilder_&,FGlobalShaderMap_*,FRDGTexture_*_&)_::_11_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    FVar12 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FGenerateMipCS::FParameters,_void___cdecl_AddComputeMipsPass(FRDGBuilder_&,FGlobalShaderMap_*,FRDGTexture_*_&)_::_11_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar11,
                          L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                          ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar12;
  bVar5 = false;
  bVar7 = false;
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar19 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar19 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_128[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.ComparisonIndex.Value = FVar17.Value;
        local_108.Number = uVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_108,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_118._s_0.X = FVar17.Value;
      local_118._s_0.Y = uVar19;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar6 = true;
      goto LAB_14e091cb5;
    }
  }
  bVar6 = false;
  FVar18 = local_100;
LAB_14e091cb5:
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
  pvVar2 = *(void **)((longlong)this + 0x180);
  iVar10 = *(int *)((longlong)this + 0x198) + 7;
  uVar19 = (int)((iVar10 >> 0x1f & 7U) + iVar10) >> 3;
  pFVar14 = FGenerateMipCS::FParameters::FTypeInfo::GetStructMetadata();
  local_118._s_0.Z = 1;
  local_118._s_0.X = uVar19;
  local_118._s_0.Y = uVar19;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_118._s_0);
  pFVar15 = TShaderRefBase<FGenerateMipCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FGenerateMipCS,FShaderMapPointerTable> *)
                       ((longlong)this + 0x188));
  SetComputePipelineState(param_1,pFVar15);
  local_e0.ShaderContent = *(FShader **)(local_120.QuadPart + 0x188);
  local_e0.ShaderMap = *(FShaderMapBase **)(local_120.QuadPart + 400);
  ValidateShaderParameters(&local_e0,pFVar14,pvVar2);
  LVar8 = local_120;
  ::SetShaderParameters
            (param_1,pFVar15,*(FShaderParameterBindings **)(local_120.QuadPart + 0x188),pFVar14,
             pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_1,uVar19,uVar19,1);
  pFVar15 = TShaderRefBase<FGenerateMipCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FGenerateMipCS,FShaderMapPointerTable> *)
                       (LVar8.QuadPart + 0x188));
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar16 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    pFVar3 = *(FShaderParameterBindings **)(LVar8.QuadPart + 0x188);
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
    UnsetShaderUAVs(pFVar16,pFVar3);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,pFVar15,pFVar16);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_f0.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_f0.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_120);
      local_f0.StatData.Pad = (uchar  [8])(local_120.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_f0);
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

// Execute @ 14e091fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FHairCardsDeformationCS::FParameters,`AddHairCardsDeformationPass'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FHairCardsDeformationCS::FParameters,_void___cdecl_AddHairCardsDeformationPass(FRDGBuilder_&,FGlobalShaderMap_*,ERHIFeatureLevel::Type,FShaderPrintData_const_*,FHairGroupInstance_*,int,int,ERHIPipeline)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FHairCardsDeformationCS::FParameters,_void___cdecl_AddHairCardsDeformationPass(FRDGBuilder_&,FGlobalShaderMap_*,ERHIFeatureLevel::Type,FShaderPrintData_const_*,FHairGroupInstance_*,int,int,ERHIPipeline)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FHairCardsDeformationCS::FParameters,_void___cdecl_AddHairCardsDeformationPass(FRDGBuilder_&,FGlobalShaderMap_*,ERHIFeatureLevel::Type,FShaderPrintData_const_*,FHairGroupInstance_*,int,int,ERHIPipeline)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_b8,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FHairCardsDeformationCS::FParameters,_void___cdecl_AddHairCardsDeformationPass(FRDGBuilder_&,FGlobalShaderMap_*,ERHIFeatureLevel::Type,FShaderPrintData_const_*,FHairGroupInstance_*,int,int,ERHIPipeline)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      goto LAB_14e092139;
    }
  }
  bVar3 = false;
  FVar10 = local_c8;
LAB_14e092139:
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
  `AddHairCardsDeformationPass'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x180),local_d0,param_1);
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

// Execute @ 14e092330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FHairStrandsTexturePS::FParameters,`InternalGenerateHairStrandsTextures'::__l3::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FHairStrandsTexturePS::FParameters,_void___cdecl_InternalGenerateHairStrandsTextures(FRDGBuilder_&,FGlobalShaderMap_*,FShaderPrintData_const_*,bool,float,int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,FRHIBuffer_*,FRHIShaderResourceView_*,FRHIShaderResourceView_*,FRHIShaderResourceView_*,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&,UE::Math::TIntVector3<int>_const_&,float,unsigned_int,FRDGBuffer_*,FRDGBuffer_*,FHairStrandsInstanceRawParameters_&,FHairStrandsRDGTextures_&)_::_3_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FHairStrandsTexturePS::FParameters,_void___cdecl_InternalGenerateHairStrandsTextures(FRDGBuilder_&,FGlobalShaderMap_*,FShaderPrintData_const_*,bool,float,int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,FRHIBuffer_*,FRHIShaderResourceView_*,FRHIShaderResourceView_*,FRHIShaderResourceView_*,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&,UE::Math::TIntVector3<int>_const_&,float,unsigned_int,FRDGBuffer_*,FRDGBuffer_*,FHairStrandsInstanceRawParameters_&,FHairStrandsRDGTextures_&)_::_3_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FHairStrandsTexturePS::FParameters,_void___cdecl_InternalGenerateHairStrandsTextures(FRDGBuilder_&,FGlobalShaderMap_*,FShaderPrintData_const_*,bool,float,int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,FRHIBuffer_*,FRHIShaderResourceView_*,FRHIShaderResourceView_*,FRHIShaderResourceView_*,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&,UE::Math::TIntVector3<int>_const_&,float,unsigned_int,FRDGBuffer_*,FRDGBuffer_*,FHairStrandsInstanceRawParameters_&,FHairStrandsRDGTextures_&)_::_3_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_b8,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FHairStrandsTexturePS::FParameters,_void___cdecl_InternalGenerateHairStrandsTextures(FRDGBuilder_&,FGlobalShaderMap_*,FShaderPrintData_const_*,bool,float,int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,FRHIBuffer_*,FRHIShaderResourceView_*,FRHIShaderResourceView_*,FRHIShaderResourceView_*,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&,UE::Math::TIntVector3<int>_const_&,float,unsigned_int,FRDGBuffer_*,FRDGBuffer_*,FHairStrandsInstanceRawParameters_&,FHairStrandsRDGTextures_&)_::_3_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      goto LAB_14e0924b9;
    }
  }
  bVar3 = false;
  FVar10 = local_c8;
LAB_14e0924b9:
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
  `InternalGenerateHairStrandsTextures'::__l3::<lambda_1>::operator()
            ((void *)((longlong)this + 0x180),local_d0,(FRHICommandList *)param_1);
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

// Execute @ 14e0926b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FHairTangentCS::FParameters,`FComputeShaderUtils::AddPass<FHairTangentCS>'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  code *pcVar2;
  FRDGResource *this_00;
  FRHIResource *pFVar3;
  FParameters *pFVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  TStatIdData *pTVar10;
  FUniformBufferStaticBindings *pFVar11;
  undefined8 uVar12;
  FShaderParametersMetadata *pFVar13;
  IRHIComputeContext *pIVar14;
  undefined8 *puVar15;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar16;
  longlong *plVar17;
  FNameEntryId FVar18;
  FName FVar19;
  undefined1 auStackY_168 [32];
  FColor_u_0 local_108 [2];
  LARGE_INTEGER local_100;
  FName local_f8;
  FName local_f0;
  FStatMessage local_e0;
  FName local_d0;
  FName local_c8;
  FUniformBufferStaticBindings local_c0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<FHairTangentCS::FParameters,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairTangentCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairTangentCS,FShaderMapPointerTable>_const&___ptr64,FHairTangentCS::FParameters*___ptr64,FRDGBuffer*___ptr64,unsigned_int,TFunction<void___cdecl(void)>&&___ptr64)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FHairTangentCS::FParameters,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairTangentCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairTangentCS,FShaderMapPointerTable>_const&___ptr64,FHairTangentCS::FParameters*___ptr64,FRDGBuffer*___ptr64,unsigned_int,TFunction<void___cdecl(void)>&&___ptr64)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FHairTangentCS::FParameters,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairTangentCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairTangentCS,FShaderMapPointerTable>_const&___ptr64,FHairTangentCS::FParameters*___ptr64,FRDGBuffer*___ptr64,unsigned_int,TFunction<void___cdecl(void)>&&___ptr64)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar9 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FHairTangentCS::FParameters,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairTangentCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairTangentCS,FShaderMapPointerTable>_const&___ptr64,FHairTangentCS::FParameters*___ptr64,FRDGBuffer*___ptr64,unsigned_int,TFunction<void___cdecl(void)>&&___ptr64)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar9,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FHairTangentCS::FParameters,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairTangentCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairTangentCS,FShaderMapPointerTable>_const&___ptr64,FHairTangentCS::FParameters*___ptr64,FRDGBuffer*___ptr64,unsigned_int,TFunction<void___cdecl(void)>&&___ptr64)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar10 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar9 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar10 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<FHairTangentCS::FParameters,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairTangentCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairTangentCS,FShaderMapPointerTable>_const&___ptr64,FHairTangentCS::FParameters*___ptr64,FRDGBuffer*___ptr64,unsigned_int,TFunction<void___cdecl(void)>&&___ptr64)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                          ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar9,L"FRDGPass Execute",
                         "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar19 = *(FName *)&pTVar10->Name;
  bVar5 = false;
  bVar7 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar16 = FVar19.Number;
  if ((FVar18.Value != 0) || (uVar16 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_108[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_108[0]._s_0,(pTVar10->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar18.Value;
        local_f8.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(pTVar10->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_100.s.LowPart = FVar18.Value;
      local_100.s.HighPart = uVar16;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar6 = true;
      goto LAB_14e092838;
    }
  }
  bVar6 = false;
  FVar19 = local_f0;
LAB_14e092838:
  pFVar11 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_c0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar11);
  if (local_c0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_c0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_c0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_c0.Slots.AllocatorInstance.SecondaryData);
  }
  FRDGResource::MarkResourceAsUsed(*(FRDGResource **)((longlong)this + 0x198));
  if (*(void **)((longlong)this + 0x1b0) != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x1b0));
    pcVar2 = *(code **)((longlong)this + 0x1b0);
    plVar17 = (longlong *)((longlong)this + 0x1c0);
    if (*(longlong **)((longlong)this + 0x1d8) != (longlong *)0x0) {
      plVar17 = *(longlong **)((longlong)this + 0x1d8);
    }
    uVar12 = (**(code **)(*plVar17 + 8))();
    (*pcVar2)(uVar12);
  }
  this_00 = *(FRDGResource **)((longlong)this + 0x198);
  uVar16 = *(uint *)((longlong)this + 0x1a0);
  if ((((ulonglong)this_00[4].Name & 0x80) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Desc.Usage & EBufferUsageFlags::DrawIndirect",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                         ,0x53c,L"Buffer %s was not flagged for indirect draw usage."), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FRDGResource::ValidateRHIAccess(this_00);
  pFVar3 = this_00->ResourceRHI;
  pFVar4 = *(FParameters **)((longlong)this + 0x180);
  FComputeShaderUtils::ValidateIndirectArgsBuffer((uint)pFVar3[9]._padding_,uVar16);
  pFVar13 = FHairTangentCS::FParameters::FTypeInfo::GetStructMetadata();
  FComputeShaderUtils::Private::PrepareDispatch<FHairTangentCS>
            (param_1,(TShaderRefBase<FHairTangentCS,FShaderMapPointerTable> *)
                     ((longlong)this + 0x188),pFVar13,pFVar4);
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar15 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar15;
    *(undefined8 **)&param_1->field_0x30 = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &___7FRHICommandDispatchIndirectComputeShader__6B_;
    puVar15[2] = pFVar3;
    *(uint *)(puVar15 + 3) = uVar16;
  }
  else {
    pIVar14 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
    (**(code **)(pIVar14->_padding_ + 0x30))(pIVar14,pFVar3);
  }
  FComputeShaderUtils::Private::AfterDispatch<FHairTangentCS>
            (param_1,(TShaderRefBase<FHairTangentCS,FShaderMapPointerTable> *)
                     ((longlong)this + 0x188));
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
      local_e0.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_e0.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_100);
      local_e0.StatData.Pad[4] = '\0';
      local_e0.StatData.Pad[5] = '\0';
      local_e0.StatData.Pad[6] = '\0';
      local_e0.StatData.Pad[7] = '\0';
      local_e0.StatData.Pad[0] = local_100.s.LowPart._0_1_;
      local_e0.StatData.Pad[1] = local_100.s.LowPart._1_1_;
      local_e0.StatData.Pad[2] = local_100.s.LowPart._2_1_;
      local_e0.StatData.Pad[3] = local_100.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_e0);
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

// Execute @ 14e092b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FReadbackTextureParameters,`InternalGenerateFollicleTexture_GPU'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FReadbackTextureParameters,_void___cdecl_InternalGenerateFollicleTexture_GPU(FRDGBuilder_&,FGlobalShaderMap_*,bool,UE::Math::TIntPoint<int>,unsigned_int,EPixelFormat,unsigned_int,TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_>_const_&,TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_>_const_&,TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_>_const_&,TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_>_const_&,UTexture2D_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
  FName local_d0;
  FStatMessage local_c0;
  FUniformBufferStaticBindings local_b0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FVar11.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FReadbackTextureParameters,_void___cdecl_InternalGenerateFollicleTexture_GPU(FRDGBuilder_&,FGlobalShaderMap_*,bool,UE::Math::TIntPoint<int>,unsigned_int,EPixelFormat,unsigned_int,TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_>_const_&,TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_>_const_&,TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_>_const_&,TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_>_const_&,UTexture2D_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FReadbackTextureParameters,_void___cdecl_InternalGenerateFollicleTexture_GPU(FRDGBuilder_&,FGlobalShaderMap_*,bool,UE::Math::TIntPoint<int>,unsigned_int,EPixelFormat,unsigned_int,TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_>_const_&,TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_>_const_&,TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_>_const_&,TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_>_const_&,UTexture2D_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FReadbackTextureParameters,_void___cdecl_InternalGenerateFollicleTexture_GPU(FRDGBuilder_&,FGlobalShaderMap_*,bool,UE::Math::TIntPoint<int>,unsigned_int,EPixelFormat,unsigned_int,TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_>_const_&,TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_>_const_&,TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_>_const_&,TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_>_const_&,UTexture2D_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar5,
                         L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
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
      local_d0 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_d0.ComparisonIndex.Value;
      goto LAB_14e092ce6;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_14e092ce6:
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
  `InternalGenerateFollicleTexture_GPU'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x180),(FRHICommandListImmediate *)param_1);
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

// Execute @ 14e092ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FStrandsResourceBLASParameters,`AddBuildStrandsAccelerationStructurePass'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  FRHIGPUMask FVar2;
  longlong lVar3;
  LARGE_INTEGER this_00;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FStrandsResourceBLASParameters,_void___cdecl_AddBuildStrandsAccelerationStructurePass(FRDGBuilder_&,FHairGroupInstance_*,unsigned_int,bool,FRDGBuffer_*,FRDGBuffer_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar9;
  FUniformBufferStaticBindings *pFVar10;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName FVar11;
  FNameEntryId FVar12;
  FName this_03;
  undefined1 auStackY_148 [32];
  FStatMessage local_e8;
  LARGE_INTEGER local_d8;
  FName local_d0;
  FUniformBufferStaticBindings local_c0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  this_03.ComparisonIndex.Value = 0;
  this_03.Number = 0;
  FVar12.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FStrandsResourceBLASParameters,_void___cdecl_AddBuildStrandsAccelerationStructurePass(FRDGBuilder_&,FHairGroupInstance_*,unsigned_int,bool,FRDGBuffer_*,FRDGBuffer_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar8 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar8,
                   L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,
                   true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar9 = ::StatPtr_STAT_FRDGPass_Execute;
  if (::StatPtr_STAT_FRDGPass_Execute ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FStrandsResourceBLASParameters,_void___cdecl_AddBuildStrandsAccelerationStructurePass(FRDGBuilder_&,FHairGroupInstance_*,unsigned_int,bool,FRDGBuffer_*,FRDGBuffer_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar8 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
    FVar9 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FStrandsResourceBLASParameters,_void___cdecl_AddBuildStrandsAccelerationStructurePass(FRDGBuilder_&,FHairGroupInstance_*,unsigned_int,bool,FRDGBuffer_*,FRDGBuffer_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar8,
                         L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar9;
  bVar5 = false;
  bVar7 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  if ((FVar11.ComparisonIndex.Value.Value != 0) || (FVar11.Number != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_e8.StatData.Pad = local_e8.StatData.Pad & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e8,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e8.StatData.Pad = (uchar  [8])FVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_e8,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_e8.StatData.Pad = (uchar  [8])FVar11;
      local_d0 = FVar11;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar6 = true;
      FVar12.Value = local_d0.ComparisonIndex.Value;
      goto LAB_14e09305e;
    }
  }
  bVar6 = false;
  FVar11 = local_d0;
LAB_14e09305e:
  pFVar10 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_c0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar10);
  if (local_c0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_c0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_c0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_c0.Slots.AllocatorInstance.SecondaryData);
  }
  FVar2.GPUMask = *(uint *)&param_1->field_0x29c;
  FRHIComputeCommandList::SetGPUMask
            (param_1,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
  lVar3 = *(longlong *)(*(longlong *)((longlong)this + 0x180) + 0x78);
  if ((*(char *)(lVar3 + 0x1a9) == '\0') ||
     (*(int *)(*(longlong *)((longlong)this + 0x180) + 0x94) != *(int *)((longlong)this + 400))) {
    this_00 = (LARGE_INTEGER)((LARGE_INTEGER *)(*(longlong *)(lVar3 + 0x60) + 0x28))->QuadPart;
    local_d8 = this_00;
    if ((FRHIResource *)this_00.QuadPart != (FRHIResource *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (*(char *)((longlong)this + 0x18d) == '\0') {
      this_03 = *(FName *)(*(longlong *)
                            (*(longlong *)(*(longlong *)((longlong)this + 0x180) + 0x78) + 0x80) +
                          0x28);
      local_e8.StatData.Pad = (uchar  [8])this_03;
      if (this_03 != (FName)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_03);
      }
    }
    else {
      local_e8.StatData.Pad = (uchar  [8])0x0;
    }
    *(undefined4 *)(*(longlong *)((longlong)this + 0x180) + 0x94) =
         *(undefined4 *)((longlong)this + 400);
    lVar3 = *(longlong *)((longlong)this + 0x180);
    lVar4 = *(longlong *)(lVar3 + 0x78);
    BuildHairAccelerationStructure_Strands
              ((FRHICommandList *)param_1,*(uint *)(lVar4 + 0x1a0),*(uint *)(lVar4 + 0x1a4),
               (TRefCountPtr<FRHIBuffer> *)&local_d8.s,(TRefCountPtr<FRHIBuffer> *)&local_e8,
               (FRayTracingGeometry *)(lVar4 + 0xa0),(FString *)(lVar3 + 0x138),
               (FString *)(lVar3 + 0x170),*(uint *)((longlong)this + 0x188),
               *(bool *)((longlong)this + 0x18d),*(int *)((longlong)this + 400));
    if (this_03 != (FName)0x0) {
      FRHIResource::Release((FRHIResource *)this_03);
    }
    if ((FRHIResource *)this_00.QuadPart != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  else if (*(char *)((longlong)this + 0x18c) != '\0') {
    UpdateHairAccelerationStructure
              ((FRHICommandList *)param_1,(FRayTracingGeometry *)(lVar3 + 0xa0),
               (uint)(GHairStrands_Raytracing_ForceRebuildBVH < 1));
  }
  *(undefined1 *)(*(longlong *)(*(longlong *)((longlong)this + 0x180) + 0x78) + 0x1a9) = 1;
  FRHIComputeCommandList::SetGPUMask(param_1,FVar2);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_e8.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_e8.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_d8);
      local_e8.StatData.Pad = (uchar  [8])(local_d8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,&local_e8);
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

// Execute @ 14e0933c0

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FClearAABBCS>'::__l2::<lambda_1>_>::Execute
          (void *this,FRHIComputeCommandList *param_1)

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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FClearAABBCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FClearAABBCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FClearAABBCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FClearAABBCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FClearAABBCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FClearAABBCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FClearAABBCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FClearAABBCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FClearAABBCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FClearAABBCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FClearAABBCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FClearAABBCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FClearAABBCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FClearAABBCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FClearAABBCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FClearAABBCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FClearAABBCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FClearAABBCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e093541;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e093541:
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
  pFVar14 = TShaderRefBase<FClearAABBCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FClearAABBCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FClearAABBCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FClearAABBCS,FShaderMapPointerTable> *)
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

// Execute @ 14e093830

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FDeformGuideCS>'::__l2::<lambda_1>_>::Execute
          (void *this,FRHIComputeCommandList *param_1)

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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDeformGuideCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDeformGuideCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDeformGuideCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDeformGuideCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDeformGuideCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDeformGuideCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDeformGuideCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDeformGuideCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDeformGuideCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDeformGuideCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDeformGuideCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDeformGuideCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDeformGuideCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDeformGuideCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDeformGuideCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FDeformGuideCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FDeformGuideCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FDeformGuideCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e0939b1;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e0939b1:
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
  pFVar14 = TShaderRefBase<FDeformGuideCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FDeformGuideCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FDeformGuideCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FDeformGuideCS,FShaderMapPointerTable> *)
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

// Execute @ 14e093ca0

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FGroomCacheUpdatePassCS>'::__l2::<lambda_1>_>::
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FGroomCacheUpdatePassCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FGroomCacheUpdatePassCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FGroomCacheUpdatePassCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FGroomCacheUpdatePassCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FGroomCacheUpdatePassCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FGroomCacheUpdatePassCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FGroomCacheUpdatePassCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FGroomCacheUpdatePassCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FGroomCacheUpdatePassCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FGroomCacheUpdatePassCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FGroomCacheUpdatePassCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FGroomCacheUpdatePassCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FGroomCacheUpdatePassCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FGroomCacheUpdatePassCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FGroomCacheUpdatePassCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FGroomCacheUpdatePassCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FGroomCacheUpdatePassCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FGroomCacheUpdatePassCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e093e21;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e093e21:
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
  pFVar14 = TShaderRefBase<FGroomCacheUpdatePassCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FGroomCacheUpdatePassCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FGroomCacheUpdatePassCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FGroomCacheUpdatePassCS,FShaderMapPointerTable> *)
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

// Execute @ 14e094110

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FHairClusterAABBCS>'::__l2::<lambda_1>_>::Execute
          (void *this,FRHIComputeCommandList *param_1)

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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairClusterAABBCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairClusterAABBCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairClusterAABBCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairClusterAABBCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairClusterAABBCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairClusterAABBCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairClusterAABBCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairClusterAABBCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairClusterAABBCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairClusterAABBCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairClusterAABBCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairClusterAABBCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairClusterAABBCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairClusterAABBCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairClusterAABBCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairClusterAABBCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairClusterAABBCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairClusterAABBCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e094291;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e094291:
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
  pFVar14 = TShaderRefBase<FHairClusterAABBCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairClusterAABBCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FHairClusterAABBCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairClusterAABBCS,FShaderMapPointerTable> *)
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

// Execute @ 14e094580

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FHairClusterCullArgsCS>'::__l2::<lambda_1>_>::
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairClusterCullArgsCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairClusterCullArgsCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairClusterCullArgsCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairClusterCullArgsCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairClusterCullArgsCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairClusterCullArgsCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairClusterCullArgsCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairClusterCullArgsCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairClusterCullArgsCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairClusterCullArgsCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairClusterCullArgsCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairClusterCullArgsCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairClusterCullArgsCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairClusterCullArgsCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairClusterCullArgsCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairClusterCullArgsCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairClusterCullArgsCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairClusterCullArgsCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e094701;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e094701:
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
  pFVar14 = TShaderRefBase<FHairClusterCullArgsCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairClusterCullArgsCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FHairClusterCullArgsCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairClusterCullArgsCS,FShaderMapPointerTable> *)
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

// Execute @ 14e0949f0

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FHairClusterCullCS>'::__l2::<lambda_1>_>::Execute
          (void *this,FRHIComputeCommandList *param_1)

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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairClusterCullCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairClusterCullCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairClusterCullCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairClusterCullCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairClusterCullCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairClusterCullCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairClusterCullCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairClusterCullCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairClusterCullCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairClusterCullCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairClusterCullCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairClusterCullCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairClusterCullCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairClusterCullCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairClusterCullCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairClusterCullCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairClusterCullCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairClusterCullCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e094b71;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e094b71:
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
  pFVar14 = TShaderRefBase<FHairClusterCullCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairClusterCullCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FHairClusterCullCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairClusterCullCS,FShaderMapPointerTable> *)
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

// Execute @ 14e094e60

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FHairInitMeshSamplesCS>'::__l2::<lambda_1>_>::
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairInitMeshSamplesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairInitMeshSamplesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairInitMeshSamplesCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairInitMeshSamplesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairInitMeshSamplesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairInitMeshSamplesCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairInitMeshSamplesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairInitMeshSamplesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairInitMeshSamplesCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairInitMeshSamplesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairInitMeshSamplesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairInitMeshSamplesCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairInitMeshSamplesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairInitMeshSamplesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairInitMeshSamplesCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairInitMeshSamplesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairInitMeshSamplesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairInitMeshSamplesCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e094fe1;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e094fe1:
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
  pFVar14 = TShaderRefBase<FHairInitMeshSamplesCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairInitMeshSamplesCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FHairInitMeshSamplesCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairInitMeshSamplesCS,FShaderMapPointerTable> *)
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

// Execute @ 14e0952d0

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FHairInterpolationCS>'::__l2::<lambda_1>_>::
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairInterpolationCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairInterpolationCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairInterpolationCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairInterpolationCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairInterpolationCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairInterpolationCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairInterpolationCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairInterpolationCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairInterpolationCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairInterpolationCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairInterpolationCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairInterpolationCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairInterpolationCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairInterpolationCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairInterpolationCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairInterpolationCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairInterpolationCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairInterpolationCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e095451;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e095451:
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
  pFVar14 = TShaderRefBase<FHairInterpolationCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairInterpolationCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FHairInterpolationCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairInterpolationCS,FShaderMapPointerTable> *)
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

// Execute @ 14e095740

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FHairMeshesInterpolateCS>'::__l2::<lambda_1>_>::
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairMeshesInterpolateCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairMeshesInterpolateCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairMeshesInterpolateCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairMeshesInterpolateCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairMeshesInterpolateCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairMeshesInterpolateCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairMeshesInterpolateCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairMeshesInterpolateCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairMeshesInterpolateCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairMeshesInterpolateCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairMeshesInterpolateCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairMeshesInterpolateCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairMeshesInterpolateCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairMeshesInterpolateCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairMeshesInterpolateCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairMeshesInterpolateCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairMeshesInterpolateCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairMeshesInterpolateCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e0958c1;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e0958c1:
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
  pFVar14 = TShaderRefBase<FHairMeshesInterpolateCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairMeshesInterpolateCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FHairMeshesInterpolateCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairMeshesInterpolateCS,FShaderMapPointerTable> *)
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

// Execute @ 14e095bb0

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FHairPatchAttributeCS>'::__l2::<lambda_1>_>::
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairPatchAttributeCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairPatchAttributeCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairPatchAttributeCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairPatchAttributeCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairPatchAttributeCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairPatchAttributeCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairPatchAttributeCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairPatchAttributeCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairPatchAttributeCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairPatchAttributeCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairPatchAttributeCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairPatchAttributeCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairPatchAttributeCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairPatchAttributeCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairPatchAttributeCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairPatchAttributeCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairPatchAttributeCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairPatchAttributeCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e095d31;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e095d31:
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
  pFVar14 = TShaderRefBase<FHairPatchAttributeCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairPatchAttributeCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FHairPatchAttributeCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairPatchAttributeCS,FShaderMapPointerTable> *)
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

// Execute @ 14e096020

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FHairRaytracingGeometryCS>'::__l2::<lambda_1>_>::
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairRaytracingGeometryCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairRaytracingGeometryCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairRaytracingGeometryCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairRaytracingGeometryCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairRaytracingGeometryCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairRaytracingGeometryCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairRaytracingGeometryCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairRaytracingGeometryCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairRaytracingGeometryCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairRaytracingGeometryCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairRaytracingGeometryCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairRaytracingGeometryCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairRaytracingGeometryCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairRaytracingGeometryCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairRaytracingGeometryCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairRaytracingGeometryCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairRaytracingGeometryCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairRaytracingGeometryCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e0961a1;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e0961a1:
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
  pFVar14 = TShaderRefBase<FHairRaytracingGeometryCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairRaytracingGeometryCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FHairRaytracingGeometryCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairRaytracingGeometryCS,FShaderMapPointerTable> *)
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

// Execute @ 14e096490

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FHairStrandTextureClearCS>'::__l2::<lambda_1>_>::
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandTextureClearCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandTextureClearCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandTextureClearCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandTextureClearCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandTextureClearCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandTextureClearCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandTextureClearCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandTextureClearCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandTextureClearCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandTextureClearCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandTextureClearCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandTextureClearCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandTextureClearCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandTextureClearCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandTextureClearCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandTextureClearCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandTextureClearCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandTextureClearCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e096611;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e096611:
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
  pFVar14 = TShaderRefBase<FHairStrandTextureClearCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairStrandTextureClearCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FHairStrandTextureClearCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairStrandTextureClearCS,FShaderMapPointerTable> *)
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

// Execute @ 14e096900

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FHairStrandTextureCopyCS>'::__l2::<lambda_1>_>::
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandTextureCopyCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandTextureCopyCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandTextureCopyCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandTextureCopyCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandTextureCopyCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandTextureCopyCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandTextureCopyCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandTextureCopyCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandTextureCopyCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandTextureCopyCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandTextureCopyCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandTextureCopyCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandTextureCopyCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandTextureCopyCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandTextureCopyCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandTextureCopyCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandTextureCopyCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandTextureCopyCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e096a81;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e096a81:
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
  pFVar14 = TShaderRefBase<FHairStrandTextureCopyCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairStrandTextureCopyCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FHairStrandTextureCopyCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairStrandTextureCopyCS,FShaderMapPointerTable> *)
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

// Execute @ 14e096d70

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FHairStrandTextureDilationCS>'::__l2::<lambda_1>_>
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandTextureDilationCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandTextureDilationCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandTextureDilationCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandTextureDilationCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandTextureDilationCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandTextureDilationCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandTextureDilationCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandTextureDilationCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandTextureDilationCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandTextureDilationCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandTextureDilationCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandTextureDilationCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandTextureDilationCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandTextureDilationCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandTextureDilationCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandTextureDilationCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandTextureDilationCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandTextureDilationCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e096ef1;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e096ef1:
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
  pFVar14 = TShaderRefBase<FHairStrandTextureDilationCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairStrandTextureDilationCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FHairStrandTextureDilationCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairStrandTextureDilationCS,FShaderMapPointerTable> *)
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

// Execute @ 14e0971e0

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FHairStrandsTextureCS>'::__l2::<lambda_1>_>::
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandsTextureCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandsTextureCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandsTextureCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandsTextureCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandsTextureCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandsTextureCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandsTextureCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandsTextureCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandsTextureCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandsTextureCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandsTextureCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandsTextureCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandsTextureCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandsTextureCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandsTextureCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairStrandsTextureCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairStrandsTextureCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairStrandsTextureCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e097361;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e097361:
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
  pFVar14 = TShaderRefBase<FHairStrandsTextureCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairStrandsTextureCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FHairStrandsTextureCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairStrandsTextureCS,FShaderMapPointerTable> *)
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

// Execute @ 14e097650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FHairTangentCS>'::__l2::<lambda_1>_>::Execute
          (void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  FParameters *pFVar2;
  FShaderParametersMetadata *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  TStatIdData *pTVar8;
  FUniformBufferStaticBindings *pFVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  undefined1 auStackY_148 [32];
  LARGE_INTEGER local_e8 [2];
  TIntVector3<int>_u_0 local_d8;
  uint local_cc;
  FName local_c8;
  FUniformBufferStaticBindings local_b8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_148;
  FVar13.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairTangentCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairTangentCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairTangentCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairTangentCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairTangentCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairTangentCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairTangentCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairTangentCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairTangentCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar7 = ::FName::FName((FName *)&local_e8[0].s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairTangentCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairTangentCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairTangentCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar7,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairTangentCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairTangentCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairTangentCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar8 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName((FName *)&local_d8._s_0,"STAT_FRDGPass_Execute");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairTangentCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairTangentCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairTangentCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar7,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar12 = *(FName *)&pTVar8->Name;
  bVar4 = false;
  bVar6 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_e8[0].s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e8[0].s,(pTVar8->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e8[0]._0_4_ = FVar11.Value;
        local_e8[0]._4_4_ = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_e8[0].s,(pTVar8->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_e8[0]._0_4_ = FVar11.Value;
      local_e8[0]._4_4_ = uVar10;
      local_c8 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      FVar13.Value = local_c8.ComparisonIndex.Value;
      goto LAB_14e0977eb;
    }
  }
  bVar5 = false;
  FVar12 = local_c8;
LAB_14e0977eb:
  pFVar9 = FRDGParameterStruct::GetStaticUniformBuffers
                     ((FRDGParameterStruct *)((longlong)this + 0x30),&local_b8);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar9);
  if (local_b8.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_b8.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_b8.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_b8.Slots.AllocatorInstance.SecondaryData);
  }
  local_d8._0_8_ = *(undefined8 *)((longlong)this + 0x1a0);
  uVar10 = *(uint *)((longlong)this + 0x1a8);
  pFVar2 = *(FParameters **)((longlong)this + 0x188);
  pFVar3 = *(FShaderParametersMetadata **)((longlong)this + 0x180);
  local_d8._s_0.Z = uVar10;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_d8._s_0);
  FComputeShaderUtils::Private::PrepareDispatch<FHairTangentCS>
            (param_1,(TShaderRefBase<FHairTangentCS,FShaderMapPointerTable> *)((longlong)this + 400)
             ,pFVar3,pFVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_1,local_d8._s_0.X,local_d8._s_0.Y,uVar10);
  FComputeShaderUtils::Private::AfterDispatch<FHairTangentCS>
            (param_1,(TShaderRefBase<FHairTangentCS,FShaderMapPointerTable> *)((longlong)this + 400)
            );
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_cc = FVar12.Number & 0xffff6fff | 0x6000;
      local_d8._s_0.Z = FVar13.Value;
      QueryPerformanceCounter(local_e8);
      local_d8._0_8_ = ZEXT48((uint)local_e8[0]._0_4_);
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_d8._s_0);
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

// Execute @ 14e097a40

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FHairUpdateMeshSamplesCS>'::__l2::<lambda_1>_>::
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairUpdateMeshSamplesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairUpdateMeshSamplesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairUpdateMeshSamplesCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairUpdateMeshSamplesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairUpdateMeshSamplesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairUpdateMeshSamplesCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairUpdateMeshSamplesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairUpdateMeshSamplesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairUpdateMeshSamplesCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairUpdateMeshSamplesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairUpdateMeshSamplesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairUpdateMeshSamplesCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairUpdateMeshSamplesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairUpdateMeshSamplesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairUpdateMeshSamplesCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairUpdateMeshSamplesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairUpdateMeshSamplesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairUpdateMeshSamplesCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e097bc1;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e097bc1:
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
  pFVar14 = TShaderRefBase<FHairUpdateMeshSamplesCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairUpdateMeshSamplesCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FHairUpdateMeshSamplesCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairUpdateMeshSamplesCS,FShaderMapPointerTable> *)
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

// Execute @ 14e097eb0

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FHairUpdateMeshTriangleCS>'::__l2::<lambda_1>_>::
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairUpdateMeshTriangleCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairUpdateMeshTriangleCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairUpdateMeshTriangleCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairUpdateMeshTriangleCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairUpdateMeshTriangleCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairUpdateMeshTriangleCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairUpdateMeshTriangleCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairUpdateMeshTriangleCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairUpdateMeshTriangleCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairUpdateMeshTriangleCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairUpdateMeshTriangleCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairUpdateMeshTriangleCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairUpdateMeshTriangleCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairUpdateMeshTriangleCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairUpdateMeshTriangleCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairUpdateMeshTriangleCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairUpdateMeshTriangleCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairUpdateMeshTriangleCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e098031;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e098031:
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
  pFVar14 = TShaderRefBase<FHairUpdateMeshTriangleCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairUpdateMeshTriangleCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FHairUpdateMeshTriangleCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairUpdateMeshTriangleCS,FShaderMapPointerTable> *)
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

// Execute @ 14e098320

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FHairUpdatePositionOffsetCS>'::__l2::<lambda_1>_>
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairUpdatePositionOffsetCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairUpdatePositionOffsetCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairUpdatePositionOffsetCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairUpdatePositionOffsetCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairUpdatePositionOffsetCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairUpdatePositionOffsetCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairUpdatePositionOffsetCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairUpdatePositionOffsetCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairUpdatePositionOffsetCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairUpdatePositionOffsetCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairUpdatePositionOffsetCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairUpdatePositionOffsetCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairUpdatePositionOffsetCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairUpdatePositionOffsetCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairUpdatePositionOffsetCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FHairUpdatePositionOffsetCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FHairUpdatePositionOffsetCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FHairUpdatePositionOffsetCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e0984a1;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e0984a1:
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
  pFVar14 = TShaderRefBase<FHairUpdatePositionOffsetCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairUpdatePositionOffsetCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FHairUpdatePositionOffsetCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FHairUpdatePositionOffsetCS,FShaderMapPointerTable> *)
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

// Execute @ 14e098790

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FTransferVelocityPassCS>'::__l2::<lambda_1>_>::
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FTransferVelocityPassCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FTransferVelocityPassCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FTransferVelocityPassCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FTransferVelocityPassCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FTransferVelocityPassCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FTransferVelocityPassCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FTransferVelocityPassCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FTransferVelocityPassCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FTransferVelocityPassCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FTransferVelocityPassCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FTransferVelocityPassCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FTransferVelocityPassCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FTransferVelocityPassCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FTransferVelocityPassCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FTransferVelocityPassCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FTransferVelocityPassCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FTransferVelocityPassCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FTransferVelocityPassCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e098911;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e098911:
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
  pFVar14 = TShaderRefBase<FTransferVelocityPassCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FTransferVelocityPassCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FTransferVelocityPassCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FTransferVelocityPassCS,FShaderMapPointerTable> *)
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

// Execute @ 14e098c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<void,`AddSkinUpdatePass'::__l2::<lambda_1>_>::Execute
          (void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<void,_void___cdecl_AddSkinUpdatePass(FRDGBuilder_&,FGlobalShaderMap_*,FSkeletalMeshLODRenderData_&,TArray<FSkinUpdateSection,TSizedDefaultAllocator<32>_>_const_&,FRDGBuffer_*,FRDGBuffer_*,FRDGBuffer_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<void,_void___cdecl_AddSkinUpdatePass(FRDGBuilder_&,FGlobalShaderMap_*,FSkeletalMeshLODRenderData_&,TArray<FSkinUpdateSection,TSizedDefaultAllocator<32>_>_const_&,FRDGBuffer_*,FRDGBuffer_*,FRDGBuffer_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<void,_void___cdecl_AddSkinUpdatePass(FRDGBuilder_&,FGlobalShaderMap_*,FSkeletalMeshLODRenderData_&,TArray<FSkinUpdateSection,TSizedDefaultAllocator<32>_>_const_&,FRDGBuffer_*,FRDGBuffer_*,FRDGBuffer_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_b8,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<void,_void___cdecl_AddSkinUpdatePass(FRDGBuilder_&,FGlobalShaderMap_*,FSkeletalMeshLODRenderData_&,TArray<FSkinUpdateSection,TSizedDefaultAllocator<32>_>_const_&,FRDGBuffer_*,FRDGBuffer_*,FRDGBuffer_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      goto LAB_14e098d89;
    }
  }
  bVar3 = false;
  FVar10 = local_c8;
LAB_14e098d89:
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
  `AddSkinUpdatePass'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x180),local_d0,param_1);
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

// Execute @ 14e0e5940

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FClearPressureGridCS>'::__l2::<lambda_1>_>::
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FClearPressureGridCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FClearPressureGridCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FClearPressureGridCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FClearPressureGridCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FClearPressureGridCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FClearPressureGridCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FClearPressureGridCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FClearPressureGridCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FClearPressureGridCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FClearPressureGridCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FClearPressureGridCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FClearPressureGridCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FClearPressureGridCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FClearPressureGridCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FClearPressureGridCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FClearPressureGridCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FClearPressureGridCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FClearPressureGridCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e0e5ac1;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e0e5ac1:
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
  pFVar14 = TShaderRefBase<FClearPressureGridCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FClearPressureGridCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FClearPressureGridCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FClearPressureGridCS,FShaderMapPointerTable> *)
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

// Execute @ 14e0e5db0

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FClearVelocityGridCS>'::__l2::<lambda_1>_>::
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FClearVelocityGridCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FClearVelocityGridCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FClearVelocityGridCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FClearVelocityGridCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FClearVelocityGridCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FClearVelocityGridCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FClearVelocityGridCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FClearVelocityGridCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FClearVelocityGridCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FClearVelocityGridCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FClearVelocityGridCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FClearVelocityGridCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FClearVelocityGridCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FClearVelocityGridCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FClearVelocityGridCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FClearVelocityGridCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FClearVelocityGridCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FClearVelocityGridCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e0e5f31;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e0e5f31:
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
  pFVar14 = TShaderRefBase<FClearVelocityGridCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FClearVelocityGridCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FClearVelocityGridCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FClearVelocityGridCS,FShaderMapPointerTable> *)
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

// Execute @ 14e0e6220

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FCopyVelocityGridCS>'::__l2::<lambda_1>_>::Execute
          (void *this,FRHIComputeCommandList *param_1)

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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FCopyVelocityGridCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FCopyVelocityGridCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FCopyVelocityGridCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FCopyVelocityGridCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FCopyVelocityGridCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FCopyVelocityGridCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FCopyVelocityGridCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FCopyVelocityGridCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FCopyVelocityGridCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FCopyVelocityGridCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FCopyVelocityGridCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FCopyVelocityGridCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FCopyVelocityGridCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FCopyVelocityGridCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FCopyVelocityGridCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FCopyVelocityGridCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FCopyVelocityGridCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FCopyVelocityGridCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e0e63a1;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e0e63a1:
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
  pFVar14 = TShaderRefBase<FCopyVelocityGridCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FCopyVelocityGridCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FCopyVelocityGridCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FCopyVelocityGridCS,FShaderMapPointerTable> *)
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

// Execute @ 14e0e6690

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FInterpolateGroomGuidesCS>'::__l2::<lambda_1>_>::
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FInterpolateGroomGuidesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FInterpolateGroomGuidesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FInterpolateGroomGuidesCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FInterpolateGroomGuidesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FInterpolateGroomGuidesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FInterpolateGroomGuidesCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FInterpolateGroomGuidesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FInterpolateGroomGuidesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FInterpolateGroomGuidesCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FInterpolateGroomGuidesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FInterpolateGroomGuidesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FInterpolateGroomGuidesCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FInterpolateGroomGuidesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FInterpolateGroomGuidesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FInterpolateGroomGuidesCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FInterpolateGroomGuidesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FInterpolateGroomGuidesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FInterpolateGroomGuidesCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14e0e6811;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_14e0e6811:
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
  pFVar14 = TShaderRefBase<FInterpolateGroomGuidesCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FInterpolateGroomGuidesCS,FShaderMapPointerTable> *)
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
  pFVar14 = TShaderRefBase<FInterpolateGroomGuidesCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FInterpolateGroomGuidesCS,FShaderMapPointerTable> *)
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

