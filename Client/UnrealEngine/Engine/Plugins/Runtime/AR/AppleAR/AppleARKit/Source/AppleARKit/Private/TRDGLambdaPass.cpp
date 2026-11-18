// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 1

// Execute @ 14cfd52b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FAppleARKitXRCamera::FPostBasePassViewExtensionParameters,`FAppleARKitXRCamera::PostRenderBasePassDeferred_RenderThread'::__l5::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  TStatIdData *pTVar10;
  FUniformBufferStaticBindings *pFVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  float fVar15;
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<FAppleARKitXRCamera::FPostBasePassViewExtensionParameters,`private:_virtual_void___cdecl_FAppleARKitXRCamera::PostRenderBasePassDeferred_RenderThread(FRDGBuilder&___ptr64,FSceneView&___ptr64,FRenderTargetBindingSlots_const&___ptr64,TRDGUniformBuffer<FSceneTextureUniformParameters>*___ptr64)___ptr64'::`5'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FAppleARKitXRCamera::FPostBasePassViewExtensionParameters,`private:_virtual_void___cdecl_FAppleARKitXRCamera::PostRenderBasePassDeferred_RenderThread(FRDGBuilder&___ptr64,FSceneView&___ptr64,FRenderTargetBindingSlots_const&___ptr64,TRDGUniformBuffer<FSceneTextureUniformParameters>*___ptr64)___ptr64'::`5'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FAppleARKitXRCamera::FPostBasePassViewExtensionParameters,`private:_virtual_void___cdecl_FAppleARKitXRCamera::PostRenderBasePassDeferred_RenderThread(FRDGBuilder&___ptr64,FSceneView&___ptr64,FRenderTargetBindingSlots_const&___ptr64,TRDGUniformBuffer<FSceneTextureUniformParameters>*___ptr64)___ptr64'::`5'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar9 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FAppleARKitXRCamera::FPostBasePassViewExtensionParameters,`private:_virtual_void___cdecl_FAppleARKitXRCamera::PostRenderBasePassDeferred_RenderThread(FRDGBuilder&___ptr64,FSceneView&___ptr64,FRenderTargetBindingSlots_const&___ptr64,TRDGUniformBuffer<FSceneTextureUniformParameters>*___ptr64)___ptr64'::`5'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar9,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FAppleARKitXRCamera::FPostBasePassViewExtensionParameters,`private:_virtual_void___cdecl_FAppleARKitXRCamera::PostRenderBasePassDeferred_RenderThread(FRDGBuilder&___ptr64,FSceneView&___ptr64,FRenderTargetBindingSlots_const&___ptr64,TRDGUniformBuffer<FSceneTextureUniformParameters>*___ptr64)___ptr64'::`5'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar10 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar9 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar10 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<FAppleARKitXRCamera::FPostBasePassViewExtensionParameters,`private:_virtual_void___cdecl_FAppleARKitXRCamera::PostRenderBasePassDeferred_RenderThread(FRDGBuilder&___ptr64,FSceneView&___ptr64,FRenderTargetBindingSlots_const&___ptr64,TRDGUniformBuffer<FSceneTextureUniformParameters>*___ptr64)___ptr64'::`5'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                          ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar9,L"FRDGPass Execute",
                         "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar14 = *(FName *)&pTVar10->Name;
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
                ((FColor *)&local_108[0]._s_0,(pTVar10->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar13.Value;
        local_f8.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(pTVar10->StatDescriptionWide).Ptr,
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
      goto LAB_14cfd543c;
    }
  }
  bVar6 = false;
  FVar14 = local_f0;
LAB_14cfd543c:
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
  lVar2 = *(longlong *)((longlong)this + 0x180);
  fVar15 = (float)(**(code **)(*(longlong *)(*(longlong *)(lVar2 + 0x238) + 0x70) + 0x98))();
  lVar3 = *(longlong *)(*(longlong *)((longlong)this + 0x180) + 0x238);
  if ((*(longlong *)(lVar3 + 0x310) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FAppleARKitVideoOverlay::RenderVideoOverlay_RenderThread
            ((FAppleARKitVideoOverlay *)(lVar2 + 0x240),(FRHICommandList *)param_1,
             *(FSceneView **)((longlong)this + 0x188),*(FAppleARKitFrame **)(lVar3 + 0x310),fVar15);
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

