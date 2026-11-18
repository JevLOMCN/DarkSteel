// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 34

// Execute @ 148e64760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FUniformBufferStaticBindings *pFVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  undefined1 auStackY_1f8 [32];
  FColor_u_0 local_198 [2];
  FName local_190;
  FName local_188;
  FNiagaraGpuReadbackManager *local_178;
  LARGE_INTEGER local_170;
  FStatMessage local_168;
  FRHITransitionInfo *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FBufferRequest *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  FRHITransitionInfo *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  FName local_128;
  FName local_120;
  TArrayView<FRHITransitionInfo_const_,int> local_118;
  TArrayView<FNiagaraGpuReadbackManager::FBufferRequest_const_,int> local_108;
  TArrayView<FRHITransitionInfo_const_,int> local_f8;
  code *local_e8 [5];
  undefined8 *local_c0;
  FUniformBufferStaticBindings local_b8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&local_128,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_120,"STAT_FRDGPass_Execute");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar9->Name;
  bVar5 = false;
  bVar7 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_198[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_198[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_190.ComparisonIndex.Value = FVar12.Value;
        local_190.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_190,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_190.ComparisonIndex.Value = FVar12.Value;
      local_190.Number = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_148e648e7;
    }
  }
  bVar6 = false;
  FVar13 = local_188;
LAB_148e648e7:
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
  local_158 = (FRHITransitionInfo *)((longlong)this + 0x1a0);
  uStack_150 = 2;
  local_118._12_4_ = uStack_14c;
  local_118.ArrayNum = 2;
  local_118.DataPtr = local_158;
  FRHIComputeCommandList::Transition(param_1,&local_118,None);
  local_178 = *(FNiagaraGpuReadbackManager **)((longlong)this + 0x278);
  uVar2 = *(undefined8 *)((longlong)this + 0x260);
  uVar3 = *(undefined8 *)((longlong)this + 0x268);
  uVar4 = *(undefined8 *)((longlong)this + 0x270);
  local_e8[0] = (code *)0x0;
  local_c0 = FMemory::Malloc(0x20,8);
  *local_c0 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_UFNiagaraMeshRendererMeshPropertiesBase__VUNiagaraDataInterfaceArrayMesh____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  local_c0[1] = uVar2;
  local_c0[2] = uVar3;
  local_c0[3] = uVar4;
  if (local_c0 + 1 != (undefined8 *)0x0) {
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
                  ::Call;
  }
  local_148 = (FBufferRequest *)((longlong)this + 0x180);
  uStack_140 = 2;
  local_108._12_4_ = uStack_13c;
  local_108.ArrayNum = 2;
  local_108.DataPtr = local_148;
  FNiagaraGpuReadbackManager::EnqueueReadbacks
            (local_178,(FRHICommandList *)param_1,&local_108,
             (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)local_e8
            );
  local_138 = (FRHITransitionInfo *)((longlong)this + 0x200);
  uStack_130 = 2;
  local_f8._12_4_ = uStack_12c;
  local_f8.ArrayNum = 2;
  local_f8.DataPtr = local_138;
  FRHIComputeCommandList::Transition(param_1,&local_f8,None);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_168.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_168.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_170);
      local_168.StatData.Pad[4] = '\0';
      local_168.StatData.Pad[5] = '\0';
      local_168.StatData.Pad[6] = '\0';
      local_168.StatData.Pad[7] = '\0';
      local_168.StatData.Pad[0] = local_170.s.LowPart._0_1_;
      local_168.StatData.Pad[1] = local_170.s.LowPart._1_1_;
      local_168.StatData.Pad[2] = local_170.s.LowPart._2_1_;
      local_168.StatData.Pad[3] = local_170.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_168);
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

// Execute @ 148eb6d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNDISimpleCounterProxy::PostSimulate'::__l8::<lambda_1>_>::
Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FUniformBufferStaticBindings *pFVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  undefined1 auStackY_228 [32];
  FColor_u_0 local_1c8 [2];
  FName local_1c0;
  FStatMessage local_1b8;
  FName local_1a8;
  FNiagaraGpuReadbackManager *local_198;
  LARGE_INTEGER local_190;
  FName local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined2 local_174;
  FRHITransitionInfo_u_8 local_170;
  EType local_168;
  ERHIAccess local_164;
  ERHIAccess local_160;
  EResourceTransitionFlags local_15c;
  bool local_150;
  undefined4 local_148;
  undefined2 local_144;
  undefined8 local_140;
  undefined1 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_12c;
  undefined1 local_120;
  FName local_118 [2];
  TArrayView<FRHITransitionInfo_const_,int> local_108;
  TArrayView<FRHITransitionInfo_const_,int> local_f8;
  code *local_e8 [5];
  undefined8 *local_c0;
  FUniformBufferStaticBindings local_b8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDISimpleCounterProxy::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`8'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDISimpleCounterProxy::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`8'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDISimpleCounterProxy::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`8'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(local_118,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDISimpleCounterProxy::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`8'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDISimpleCounterProxy::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`8'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_188,"STAT_FRDGPass_Execute");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDISimpleCounterProxy::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`8'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar9->Name;
  bVar5 = false;
  bVar7 = false;
  local_1a8.ComparisonIndex.Value = 0;
  local_1a8.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_1c8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1c8[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1c0.ComparisonIndex.Value = FVar12.Value;
        local_1c0.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1c0,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1c0.ComparisonIndex.Value = FVar12.Value;
      local_1c0.Number = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_148eb6eb5;
    }
  }
  bVar6 = false;
  FVar13 = local_1a8;
LAB_148eb6eb5:
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
  local_1b8.NameAndInfo.Index.Value = 1;
  local_174 = 0xffff;
  local_170 = *(FRHITransitionInfo_u_8 *)((longlong)this + 0x198);
  local_164 = *(ERHIAccess *)((longlong)this + 0x1a0);
  local_1b8.StatData.Pad = (uchar  [8])&local_178;
  local_108._12_4_ = local_1b8.NameAndInfo.Number;
  local_108.ArrayNum = 1;
  local_178 = 0xffffffff;
  local_168 = Buffer;
  local_160 = CopySrc;
  local_15c = None;
  local_150 = false;
  local_108.DataPtr = (FRHITransitionInfo *)local_1b8.StatData.Pad;
  FRHIComputeCommandList::Transition(param_1,&local_108,None);
  lVar2 = *(longlong *)((longlong)this + 0x1a8);
  local_198 = *(FNiagaraGpuReadbackManager **)((longlong)this + 400);
  uVar3 = *(undefined8 *)((longlong)this + 0x188);
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  local_e8[0] = (code *)0x0;
  local_c0 = FMemory::Malloc(0x20,8);
  *local_c0 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_7__PostSimulate_FNDISimpleCounterProxy__UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  local_c0[1] = uVar3;
  local_c0[2] = uVar4;
  local_c0[3] = lVar2;
  if (local_c0 + 1 != (undefined8 *)0x0) {
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``FNDISimpleCounterProxy::PostSimulate'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
                  ::Call;
  }
  FNiagaraGpuReadbackManager::EnqueueReadback
            (local_198,(FRHICommandList *)param_1,*(FRHIBuffer **)((longlong)this + 0x198),
             *(int *)(*(longlong *)((longlong)this + 0x180) + 8) << 2,4,
             (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)local_e8
            );
  uStack_180 = 1;
  local_144 = 0xffff;
  local_140 = *(undefined8 *)((longlong)this + 0x198);
  local_130 = *(undefined4 *)((longlong)this + 0x1a0);
  local_188 = (FName)&local_148;
  local_f8._12_4_ = uStack_17c;
  local_f8.ArrayNum = 1;
  local_148 = 0xffffffff;
  local_138 = 2;
  local_134 = 0x80;
  local_12c = 0;
  local_120 = 0;
  local_f8.DataPtr = (FRHITransitionInfo *)local_188;
  FRHIComputeCommandList::Transition(param_1,&local_f8,None);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_1b8.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_1b8.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_190);
      local_1b8.StatData.Pad[4] = '\0';
      local_1b8.StatData.Pad[5] = '\0';
      local_1b8.StatData.Pad[6] = '\0';
      local_1b8.StatData.Pad[7] = '\0';
      local_1b8.StatData.Pad[0] = local_190.s.LowPart._0_1_;
      local_1b8.StatData.Pad[1] = local_190.s.LowPart._1_1_;
      local_1b8.StatData.Pad[2] = local_190.s.LowPart._2_1_;
      local_1b8.StatData.Pad[3] = local_190.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_1b8);
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

// Execute @ 148eb71e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNDISimpleCounterProxy::PreStage'::__l8::<lambda_1>_>::
Execute(void *this,FRHIComputeCommandList *param_1)

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
  undefined1 auStackY_168 [32];
  LARGE_INTEGER local_108 [2];
  undefined1 local_f8 [16];
  undefined4 local_e8;
  undefined2 local_e4;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined1 local_c0;
  FName local_b8;
  FUniformBufferStaticBindings local_a8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDISimpleCounterProxy::PreStage(FNDIGpuComputePreStageContext_const&___ptr64)___ptr64'::`8'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDISimpleCounterProxy::PreStage(FNDIGpuComputePreStageContext_const&___ptr64)___ptr64'::`8'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDISimpleCounterProxy::PreStage(FNDIGpuComputePreStageContext_const&___ptr64)___ptr64'::`8'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_108[0].s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDISimpleCounterProxy::PreStage(FNDIGpuComputePreStageContext_const&___ptr64)___ptr64'::`8'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDISimpleCounterProxy::PreStage(FNDIGpuComputePreStageContext_const&___ptr64)___ptr64'::`8'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)local_f8,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDISimpleCounterProxy::PreStage(FNDIGpuComputePreStageContext_const&___ptr64)___ptr64'::`8'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar10 = *(FName *)&pTVar6->Name;
  bVar2 = false;
  bVar4 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_108[0].s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_108[0].s,(pTVar6->StatDescriptionAnsi).Ptr);
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108[0]._0_4_ = FVar9.Value;
        local_108[0]._4_4_ = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_108[0].s,(pTVar6->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_108[0]._0_4_ = FVar9.Value;
      local_108[0]._4_4_ = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      goto LAB_148eb7366;
    }
  }
  bVar3 = false;
  FVar10 = local_b8;
LAB_148eb7366:
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
  local_108[0]._0_4_ = *(uint *)((longlong)this + 0x188);
  local_108[0]._4_4_ = *(LONG *)((longlong)this + 0x18c);
  local_e0 = *(undefined8 *)((longlong)this + 0x180);
  local_d4 = *(undefined4 *)((longlong)this + 400);
  local_f8._8_4_ = 1;
  local_f8._0_8_ = &local_e8;
  local_e8 = 0xffffffff;
  local_e4 = 0xffff;
  local_d8 = 3;
  local_d0 = 0x400;
  local_cc = 0;
  local_c0 = 0;
  FRHIComputeCommandList::Transition
            (param_1,(TArrayView<FRHITransitionInfo_const_,int> *)local_f8,None);
  local_f8._0_8_ = local_108;
  local_f8._8_4_ = 1;
  NiagaraClearCounts::ClearCountsUInt
            ((FRHICommandList *)param_1,*(FRHIUnorderedAccessView **)((longlong)this + 0x180),
             (TArrayView<TTuple<unsigned_int,unsigned_int>_const_,int> *)local_f8);
  local_e0 = *(undefined8 *)((longlong)this + 0x180);
  local_d0 = *(undefined4 *)((longlong)this + 400);
  local_f8._8_4_ = 1;
  local_f8._0_8_ = &local_e8;
  local_e8 = 0xffffffff;
  local_e4 = 0xffff;
  local_d8 = 3;
  local_d4 = 0x400;
  local_cc = 0;
  local_c0 = 0;
  FRHIComputeCommandList::Transition
            (param_1,(TArrayView<FRHITransitionInfo_const_,int> *)local_f8,None);
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
      local_f8._8_8_ = (ulonglong)FVar10 & 0xffff6fffffffffff | 0x600000000000;
      QueryPerformanceCounter(local_108);
      local_f8._4_4_ = 0;
      local_f8._0_4_ = local_108[0].s.LowPart;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_f8);
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

// Execute @ 1490f3990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::PostSimulate'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FUniformBufferStaticBindings *pFVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  undefined1 auStackY_1f8 [32];
  FColor_u_0 local_198 [2];
  FName local_190;
  FName local_188;
  FNiagaraGpuReadbackManager *local_178;
  LARGE_INTEGER local_170;
  FStatMessage local_168;
  FRHITransitionInfo *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FBufferRequest *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  FRHITransitionInfo *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  FName local_128;
  FName local_120;
  TArrayView<FRHITransitionInfo_const_,int> local_118;
  TArrayView<FNiagaraGpuReadbackManager::FBufferRequest_const_,int> local_108;
  TArrayView<FRHITransitionInfo_const_,int> local_f8;
  code *local_e8 [5];
  undefined8 *local_c0;
  FUniformBufferStaticBindings local_b8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&local_128,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_120,"STAT_FRDGPass_Execute");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar9->Name;
  bVar5 = false;
  bVar7 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_198[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_198[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_190.ComparisonIndex.Value = FVar12.Value;
        local_190.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_190,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_190.ComparisonIndex.Value = FVar12.Value;
      local_190.Number = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_1490f3b17;
    }
  }
  bVar6 = false;
  FVar13 = local_188;
LAB_1490f3b17:
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
  local_158 = (FRHITransitionInfo *)((longlong)this + 0x1a0);
  uStack_150 = 2;
  local_118._12_4_ = uStack_14c;
  local_118.ArrayNum = 2;
  local_118.DataPtr = local_158;
  FRHIComputeCommandList::Transition(param_1,&local_118,None);
  local_178 = *(FNiagaraGpuReadbackManager **)((longlong)this + 0x278);
  uVar2 = *(undefined8 *)((longlong)this + 0x260);
  uVar3 = *(undefined8 *)((longlong)this + 0x268);
  uVar4 = *(undefined8 *)((longlong)this + 0x270);
  local_e8[0] = (code *)0x0;
  local_c0 = FMemory::Malloc(0x20,8);
  *local_c0 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_EVUNiagaraDataInterfaceArrayUInt8____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  local_c0[1] = uVar2;
  local_c0[2] = uVar3;
  local_c0[3] = uVar4;
  if (local_c0 + 1 != (undefined8 *)0x0) {
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
                  ::Call;
  }
  local_148 = (FBufferRequest *)((longlong)this + 0x180);
  uStack_140 = 2;
  local_108._12_4_ = uStack_13c;
  local_108.ArrayNum = 2;
  local_108.DataPtr = local_148;
  FNiagaraGpuReadbackManager::EnqueueReadbacks
            (local_178,(FRHICommandList *)param_1,&local_108,
             (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)local_e8
            );
  local_138 = (FRHITransitionInfo *)((longlong)this + 0x200);
  uStack_130 = 2;
  local_f8._12_4_ = uStack_12c;
  local_f8.ArrayNum = 2;
  local_f8.DataPtr = local_138;
  FRHIComputeCommandList::Transition(param_1,&local_f8,None);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_168.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_168.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_170);
      local_168.StatData.Pad[4] = '\0';
      local_168.StatData.Pad[5] = '\0';
      local_168.StatData.Pad[6] = '\0';
      local_168.StatData.Pad[7] = '\0';
      local_168.StatData.Pad[0] = local_170.s.LowPart._0_1_;
      local_168.StatData.Pad[1] = local_170.s.LowPart._1_1_;
      local_168.StatData.Pad[2] = local_170.s.LowPart._2_1_;
      local_168.StatData.Pad[3] = local_170.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_168);
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

// Execute @ 1490f3dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::PostSimulate'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FUniformBufferStaticBindings *pFVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  undefined1 auStackY_1f8 [32];
  FColor_u_0 local_198 [2];
  FName local_190;
  FName local_188;
  FNiagaraGpuReadbackManager *local_178;
  LARGE_INTEGER local_170;
  FStatMessage local_168;
  FRHITransitionInfo *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FBufferRequest *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  FRHITransitionInfo *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  FName local_128;
  FName local_120;
  TArrayView<FRHITransitionInfo_const_,int> local_118;
  TArrayView<FNiagaraGpuReadbackManager::FBufferRequest_const_,int> local_108;
  TArrayView<FRHITransitionInfo_const_,int> local_f8;
  code *local_e8 [5];
  undefined8 *local_c0;
  FUniformBufferStaticBindings local_b8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&local_128,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_120,"STAT_FRDGPass_Execute");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar9->Name;
  bVar5 = false;
  bVar7 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_198[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_198[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_190.ComparisonIndex.Value = FVar12.Value;
        local_190.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_190,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_190.ComparisonIndex.Value = FVar12.Value;
      local_190.Number = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_1490f3f57;
    }
  }
  bVar6 = false;
  FVar13 = local_188;
LAB_1490f3f57:
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
  local_158 = (FRHITransitionInfo *)((longlong)this + 0x1a0);
  uStack_150 = 2;
  local_118._12_4_ = uStack_14c;
  local_118.ArrayNum = 2;
  local_118.DataPtr = local_158;
  FRHIComputeCommandList::Transition(param_1,&local_118,None);
  local_178 = *(FNiagaraGpuReadbackManager **)((longlong)this + 0x278);
  uVar2 = *(undefined8 *)((longlong)this + 0x260);
  uVar3 = *(undefined8 *)((longlong)this + 0x268);
  uVar4 = *(undefined8 *)((longlong)this + 0x270);
  local_e8[0] = (code *)0x0;
  local_c0 = FMemory::Malloc(0x20,8);
  *local_c0 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_HVUNiagaraDataInterfaceArrayInt32____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  local_c0[1] = uVar2;
  local_c0[2] = uVar3;
  local_c0[3] = uVar4;
  if (local_c0 + 1 != (undefined8 *)0x0) {
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
                  ::Call;
  }
  local_148 = (FBufferRequest *)((longlong)this + 0x180);
  uStack_140 = 2;
  local_108._12_4_ = uStack_13c;
  local_108.ArrayNum = 2;
  local_108.DataPtr = local_148;
  FNiagaraGpuReadbackManager::EnqueueReadbacks
            (local_178,(FRHICommandList *)param_1,&local_108,
             (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)local_e8
            );
  local_138 = (FRHITransitionInfo *)((longlong)this + 0x200);
  uStack_130 = 2;
  local_f8._12_4_ = uStack_12c;
  local_f8.ArrayNum = 2;
  local_f8.DataPtr = local_138;
  FRHIComputeCommandList::Transition(param_1,&local_f8,None);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_168.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_168.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_170);
      local_168.StatData.Pad[4] = '\0';
      local_168.StatData.Pad[5] = '\0';
      local_168.StatData.Pad[6] = '\0';
      local_168.StatData.Pad[7] = '\0';
      local_168.StatData.Pad[0] = local_170.s.LowPart._0_1_;
      local_168.StatData.Pad[1] = local_170.s.LowPart._1_1_;
      local_168.StatData.Pad[2] = local_170.s.LowPart._2_1_;
      local_168.StatData.Pad[3] = local_170.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_168);
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

// Execute @ 1490f4210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::PostSimulate'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FUniformBufferStaticBindings *pFVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  undefined1 auStackY_1f8 [32];
  FColor_u_0 local_198 [2];
  FName local_190;
  FName local_188;
  FNiagaraGpuReadbackManager *local_178;
  LARGE_INTEGER local_170;
  FStatMessage local_168;
  FRHITransitionInfo *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FBufferRequest *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  FRHITransitionInfo *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  FName local_128;
  FName local_120;
  TArrayView<FRHITransitionInfo_const_,int> local_118;
  TArrayView<FNiagaraGpuReadbackManager::FBufferRequest_const_,int> local_108;
  TArrayView<FRHITransitionInfo_const_,int> local_f8;
  code *local_e8 [5];
  undefined8 *local_c0;
  FUniformBufferStaticBindings local_b8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&local_128,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_120,"STAT_FRDGPass_Execute");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar9->Name;
  bVar5 = false;
  bVar7 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_198[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_198[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_190.ComparisonIndex.Value = FVar12.Value;
        local_190.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_190,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_190.ComparisonIndex.Value = FVar12.Value;
      local_190.Number = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_1490f4397;
    }
  }
  bVar6 = false;
  FVar13 = local_188;
LAB_1490f4397:
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
  local_158 = (FRHITransitionInfo *)((longlong)this + 0x1a0);
  uStack_150 = 2;
  local_118._12_4_ = uStack_14c;
  local_118.ArrayNum = 2;
  local_118.DataPtr = local_158;
  FRHIComputeCommandList::Transition(param_1,&local_118,None);
  local_178 = *(FNiagaraGpuReadbackManager **)((longlong)this + 0x278);
  uVar2 = *(undefined8 *)((longlong)this + 0x260);
  uVar3 = *(undefined8 *)((longlong)this + 0x268);
  uVar4 = *(undefined8 *)((longlong)this + 0x270);
  local_e8[0] = (code *)0x0;
  local_c0 = FMemory::Malloc(0x20,8);
  *local_c0 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_MVUNiagaraDataInterfaceArrayFloat____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  local_c0[1] = uVar2;
  local_c0[2] = uVar3;
  local_c0[3] = uVar4;
  if (local_c0 + 1 != (undefined8 *)0x0) {
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
                  ::Call;
  }
  local_148 = (FBufferRequest *)((longlong)this + 0x180);
  uStack_140 = 2;
  local_108._12_4_ = uStack_13c;
  local_108.ArrayNum = 2;
  local_108.DataPtr = local_148;
  FNiagaraGpuReadbackManager::EnqueueReadbacks
            (local_178,(FRHICommandList *)param_1,&local_108,
             (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)local_e8
            );
  local_138 = (FRHITransitionInfo *)((longlong)this + 0x200);
  uStack_130 = 2;
  local_f8._12_4_ = uStack_12c;
  local_f8.ArrayNum = 2;
  local_f8.DataPtr = local_138;
  FRHIComputeCommandList::Transition(param_1,&local_f8,None);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_168.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_168.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_170);
      local_168.StatData.Pad[4] = '\0';
      local_168.StatData.Pad[5] = '\0';
      local_168.StatData.Pad[6] = '\0';
      local_168.StatData.Pad[7] = '\0';
      local_168.StatData.Pad[0] = local_170.s.LowPart._0_1_;
      local_168.StatData.Pad[1] = local_170.s.LowPart._1_1_;
      local_168.StatData.Pad[2] = local_170.s.LowPart._2_1_;
      local_168.StatData.Pad[3] = local_170.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_168);
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

// Execute @ 1490f4650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::PostSimulate'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FUniformBufferStaticBindings *pFVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  undefined1 auStackY_1f8 [32];
  FColor_u_0 local_198 [2];
  FName local_190;
  FName local_188;
  FNiagaraGpuReadbackManager *local_178;
  LARGE_INTEGER local_170;
  FStatMessage local_168;
  FRHITransitionInfo *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FBufferRequest *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  FRHITransitionInfo *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  FName local_128;
  FName local_120;
  TArrayView<FRHITransitionInfo_const_,int> local_118;
  TArrayView<FNiagaraGpuReadbackManager::FBufferRequest_const_,int> local_108;
  TArrayView<FRHITransitionInfo_const_,int> local_f8;
  code *local_e8 [5];
  undefined8 *local_c0;
  FUniformBufferStaticBindings local_b8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&local_128,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_120,"STAT_FRDGPass_Execute");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar9->Name;
  bVar5 = false;
  bVar7 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_198[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_198[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_190.ComparisonIndex.Value = FVar12.Value;
        local_190.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_190,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_190.ComparisonIndex.Value = FVar12.Value;
      local_190.Number = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_1490f47d7;
    }
  }
  bVar6 = false;
  FVar13 = local_188;
LAB_1490f47d7:
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
  local_158 = (FRHITransitionInfo *)((longlong)this + 0x1a0);
  uStack_150 = 2;
  local_118._12_4_ = uStack_14c;
  local_118.ArrayNum = 2;
  local_118.DataPtr = local_158;
  FRHIComputeCommandList::Transition(param_1,&local_118,None);
  local_178 = *(FNiagaraGpuReadbackManager **)((longlong)this + 0x278);
  uVar2 = *(undefined8 *)((longlong)this + 0x260);
  uVar3 = *(undefined8 *)((longlong)this + 0x268);
  uVar4 = *(undefined8 *)((longlong)this + 0x270);
  local_e8[0] = (code *)0x0;
  local_c0 = FMemory::Malloc(0x20,8);
  *local_c0 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_U__TMatrix_M_Math_UE__VUNiagaraDataInterfaceArrayMatrix____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  local_c0[1] = uVar2;
  local_c0[2] = uVar3;
  local_c0[3] = uVar4;
  if (local_c0 + 1 != (undefined8 *)0x0) {
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
                  ::Call;
  }
  local_148 = (FBufferRequest *)((longlong)this + 0x180);
  uStack_140 = 2;
  local_108._12_4_ = uStack_13c;
  local_108.ArrayNum = 2;
  local_108.DataPtr = local_148;
  FNiagaraGpuReadbackManager::EnqueueReadbacks
            (local_178,(FRHICommandList *)param_1,&local_108,
             (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)local_e8
            );
  local_138 = (FRHITransitionInfo *)((longlong)this + 0x200);
  uStack_130 = 2;
  local_f8._12_4_ = uStack_12c;
  local_f8.ArrayNum = 2;
  local_f8.DataPtr = local_138;
  FRHIComputeCommandList::Transition(param_1,&local_f8,None);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_168.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_168.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_170);
      local_168.StatData.Pad[4] = '\0';
      local_168.StatData.Pad[5] = '\0';
      local_168.StatData.Pad[6] = '\0';
      local_168.StatData.Pad[7] = '\0';
      local_168.StatData.Pad[0] = local_170.s.LowPart._0_1_;
      local_168.StatData.Pad[1] = local_170.s.LowPart._1_1_;
      local_168.StatData.Pad[2] = local_170.s.LowPart._2_1_;
      local_168.StatData.Pad[3] = local_170.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_168);
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

// Execute @ 1490f4a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::PostSimulate'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FUniformBufferStaticBindings *pFVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  undefined1 auStackY_1f8 [32];
  FColor_u_0 local_198 [2];
  FName local_190;
  FName local_188;
  FNiagaraGpuReadbackManager *local_178;
  LARGE_INTEGER local_170;
  FStatMessage local_168;
  FRHITransitionInfo *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FBufferRequest *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  FRHITransitionInfo *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  FName local_128;
  FName local_120;
  TArrayView<FRHITransitionInfo_const_,int> local_118;
  TArrayView<FNiagaraGpuReadbackManager::FBufferRequest_const_,int> local_108;
  TArrayView<FRHITransitionInfo_const_,int> local_f8;
  code *local_e8 [5];
  undefined8 *local_c0;
  FUniformBufferStaticBindings local_b8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&local_128,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_120,"STAT_FRDGPass_Execute");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar9->Name;
  bVar5 = false;
  bVar7 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_198[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_198[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_190.ComparisonIndex.Value = FVar12.Value;
        local_190.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_190,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_190.ComparisonIndex.Value = FVar12.Value;
      local_190.Number = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_1490f4c17;
    }
  }
  bVar6 = false;
  FVar13 = local_188;
LAB_1490f4c17:
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
  local_158 = (FRHITransitionInfo *)((longlong)this + 0x1a0);
  uStack_150 = 2;
  local_118._12_4_ = uStack_14c;
  local_118.ArrayNum = 2;
  local_118.DataPtr = local_158;
  FRHIComputeCommandList::Transition(param_1,&local_118,None);
  local_178 = *(FNiagaraGpuReadbackManager **)((longlong)this + 0x278);
  uVar2 = *(undefined8 *)((longlong)this + 0x260);
  uVar3 = *(undefined8 *)((longlong)this + 0x268);
  uVar4 = *(undefined8 *)((longlong)this + 0x270);
  local_e8[0] = (code *)0x0;
  local_c0 = FMemory::Malloc(0x20,8);
  *local_c0 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_U__TQuat_M_Math_UE__VUNiagaraDataInterfaceArrayQuat____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  local_c0[1] = uVar2;
  local_c0[2] = uVar3;
  local_c0[3] = uVar4;
  if (local_c0 + 1 != (undefined8 *)0x0) {
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
                  ::Call;
  }
  local_148 = (FBufferRequest *)((longlong)this + 0x180);
  uStack_140 = 2;
  local_108._12_4_ = uStack_13c;
  local_108.ArrayNum = 2;
  local_108.DataPtr = local_148;
  FNiagaraGpuReadbackManager::EnqueueReadbacks
            (local_178,(FRHICommandList *)param_1,&local_108,
             (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)local_e8
            );
  local_138 = (FRHITransitionInfo *)((longlong)this + 0x200);
  uStack_130 = 2;
  local_f8._12_4_ = uStack_12c;
  local_f8.ArrayNum = 2;
  local_f8.DataPtr = local_138;
  FRHIComputeCommandList::Transition(param_1,&local_f8,None);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_168.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_168.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_170);
      local_168.StatData.Pad[4] = '\0';
      local_168.StatData.Pad[5] = '\0';
      local_168.StatData.Pad[6] = '\0';
      local_168.StatData.Pad[7] = '\0';
      local_168.StatData.Pad[0] = local_170.s.LowPart._0_1_;
      local_168.StatData.Pad[1] = local_170.s.LowPart._1_1_;
      local_168.StatData.Pad[2] = local_170.s.LowPart._2_1_;
      local_168.StatData.Pad[3] = local_170.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_168);
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

// Execute @ 1490f4ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::PostSimulate'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FUniformBufferStaticBindings *pFVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  undefined1 auStackY_1f8 [32];
  FColor_u_0 local_198 [2];
  FName local_190;
  FName local_188;
  FNiagaraGpuReadbackManager *local_178;
  LARGE_INTEGER local_170;
  FStatMessage local_168;
  FRHITransitionInfo *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FBufferRequest *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  FRHITransitionInfo *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  FName local_128;
  FName local_120;
  TArrayView<FRHITransitionInfo_const_,int> local_118;
  TArrayView<FNiagaraGpuReadbackManager::FBufferRequest_const_,int> local_108;
  TArrayView<FRHITransitionInfo_const_,int> local_f8;
  code *local_e8 [5];
  undefined8 *local_c0;
  FUniformBufferStaticBindings local_b8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&local_128,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_120,"STAT_FRDGPass_Execute");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar9->Name;
  bVar5 = false;
  bVar7 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_198[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_198[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_190.ComparisonIndex.Value = FVar12.Value;
        local_190.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_190,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_190.ComparisonIndex.Value = FVar12.Value;
      local_190.Number = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_1490f5057;
    }
  }
  bVar6 = false;
  FVar13 = local_188;
LAB_1490f5057:
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
  local_158 = (FRHITransitionInfo *)((longlong)this + 0x1a0);
  uStack_150 = 2;
  local_118._12_4_ = uStack_14c;
  local_118.ArrayNum = 2;
  local_118.DataPtr = local_158;
  FRHIComputeCommandList::Transition(param_1,&local_118,None);
  local_178 = *(FNiagaraGpuReadbackManager **)((longlong)this + 0x278);
  uVar2 = *(undefined8 *)((longlong)this + 0x260);
  uVar3 = *(undefined8 *)((longlong)this + 0x268);
  uVar4 = *(undefined8 *)((longlong)this + 0x270);
  local_e8[0] = (code *)0x0;
  local_c0 = FMemory::Malloc(0x20,8);
  *local_c0 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_U__TVector2_M_Math_UE__VUNiagaraDataInterfaceArrayFloat2____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  local_c0[1] = uVar2;
  local_c0[2] = uVar3;
  local_c0[3] = uVar4;
  if (local_c0 + 1 != (undefined8 *)0x0) {
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
                  ::Call;
  }
  local_148 = (FBufferRequest *)((longlong)this + 0x180);
  uStack_140 = 2;
  local_108._12_4_ = uStack_13c;
  local_108.ArrayNum = 2;
  local_108.DataPtr = local_148;
  FNiagaraGpuReadbackManager::EnqueueReadbacks
            (local_178,(FRHICommandList *)param_1,&local_108,
             (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)local_e8
            );
  local_138 = (FRHITransitionInfo *)((longlong)this + 0x200);
  uStack_130 = 2;
  local_f8._12_4_ = uStack_12c;
  local_f8.ArrayNum = 2;
  local_f8.DataPtr = local_138;
  FRHIComputeCommandList::Transition(param_1,&local_f8,None);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_168.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_168.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_170);
      local_168.StatData.Pad[4] = '\0';
      local_168.StatData.Pad[5] = '\0';
      local_168.StatData.Pad[6] = '\0';
      local_168.StatData.Pad[7] = '\0';
      local_168.StatData.Pad[0] = local_170.s.LowPart._0_1_;
      local_168.StatData.Pad[1] = local_170.s.LowPart._1_1_;
      local_168.StatData.Pad[2] = local_170.s.LowPart._2_1_;
      local_168.StatData.Pad[3] = local_170.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_168);
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

// Execute @ 1490f5310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::PostSimulate'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FUniformBufferStaticBindings *pFVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  undefined1 auStackY_1f8 [32];
  FColor_u_0 local_198 [2];
  FName local_190;
  FName local_188;
  FNiagaraGpuReadbackManager *local_178;
  LARGE_INTEGER local_170;
  FStatMessage local_168;
  FRHITransitionInfo *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FBufferRequest *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  FRHITransitionInfo *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  FName local_128;
  FName local_120;
  TArrayView<FRHITransitionInfo_const_,int> local_118;
  TArrayView<FNiagaraGpuReadbackManager::FBufferRequest_const_,int> local_108;
  TArrayView<FRHITransitionInfo_const_,int> local_f8;
  code *local_e8 [5];
  undefined8 *local_c0;
  FUniformBufferStaticBindings local_b8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&local_128,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_120,"STAT_FRDGPass_Execute");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar9->Name;
  bVar5 = false;
  bVar7 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_198[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_198[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_190.ComparisonIndex.Value = FVar12.Value;
        local_190.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_190,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_190.ComparisonIndex.Value = FVar12.Value;
      local_190.Number = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_1490f5497;
    }
  }
  bVar6 = false;
  FVar13 = local_188;
LAB_1490f5497:
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
  local_158 = (FRHITransitionInfo *)((longlong)this + 0x1a0);
  uStack_150 = 2;
  local_118._12_4_ = uStack_14c;
  local_118.ArrayNum = 2;
  local_118.DataPtr = local_158;
  FRHIComputeCommandList::Transition(param_1,&local_118,None);
  local_178 = *(FNiagaraGpuReadbackManager **)((longlong)this + 0x278);
  uVar2 = *(undefined8 *)((longlong)this + 0x260);
  uVar3 = *(undefined8 *)((longlong)this + 0x268);
  uVar4 = *(undefined8 *)((longlong)this + 0x270);
  local_e8[0] = (code *)0x0;
  local_c0 = FMemory::Malloc(0x20,8);
  *local_c0 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_U__TVector4_M_Math_UE__VUNiagaraDataInterfaceArrayFloat4____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  local_c0[1] = uVar2;
  local_c0[2] = uVar3;
  local_c0[3] = uVar4;
  if (local_c0 + 1 != (undefined8 *)0x0) {
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
                  ::Call;
  }
  local_148 = (FBufferRequest *)((longlong)this + 0x180);
  uStack_140 = 2;
  local_108._12_4_ = uStack_13c;
  local_108.ArrayNum = 2;
  local_108.DataPtr = local_148;
  FNiagaraGpuReadbackManager::EnqueueReadbacks
            (local_178,(FRHICommandList *)param_1,&local_108,
             (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)local_e8
            );
  local_138 = (FRHITransitionInfo *)((longlong)this + 0x200);
  uStack_130 = 2;
  local_f8._12_4_ = uStack_12c;
  local_f8.ArrayNum = 2;
  local_f8.DataPtr = local_138;
  FRHIComputeCommandList::Transition(param_1,&local_f8,None);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_168.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_168.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_170);
      local_168.StatData.Pad[4] = '\0';
      local_168.StatData.Pad[5] = '\0';
      local_168.StatData.Pad[6] = '\0';
      local_168.StatData.Pad[7] = '\0';
      local_168.StatData.Pad[0] = local_170.s.LowPart._0_1_;
      local_168.StatData.Pad[1] = local_170.s.LowPart._1_1_;
      local_168.StatData.Pad[2] = local_170.s.LowPart._2_1_;
      local_168.StatData.Pad[3] = local_170.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_168);
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

// Execute @ 1490f5750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::PostSimulate'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FUniformBufferStaticBindings *pFVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  undefined1 auStackY_1f8 [32];
  FColor_u_0 local_198 [2];
  FName local_190;
  FName local_188;
  FNiagaraGpuReadbackManager *local_178;
  LARGE_INTEGER local_170;
  FStatMessage local_168;
  FRHITransitionInfo *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FBufferRequest *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  FRHITransitionInfo *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  FName local_128;
  FName local_120;
  TArrayView<FRHITransitionInfo_const_,int> local_118;
  TArrayView<FNiagaraGpuReadbackManager::FBufferRequest_const_,int> local_108;
  TArrayView<FRHITransitionInfo_const_,int> local_f8;
  code *local_e8 [5];
  undefined8 *local_c0;
  FUniformBufferStaticBindings local_b8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&local_128,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_120,"STAT_FRDGPass_Execute");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar9->Name;
  bVar5 = false;
  bVar7 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_198[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_198[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_190.ComparisonIndex.Value = FVar12.Value;
        local_190.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_190,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_190.ComparisonIndex.Value = FVar12.Value;
      local_190.Number = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_1490f58d7;
    }
  }
  bVar6 = false;
  FVar13 = local_188;
LAB_1490f58d7:
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
  local_158 = (FRHITransitionInfo *)((longlong)this + 0x1a0);
  uStack_150 = 2;
  local_118._12_4_ = uStack_14c;
  local_118.ArrayNum = 2;
  local_118.DataPtr = local_158;
  FRHIComputeCommandList::Transition(param_1,&local_118,None);
  local_178 = *(FNiagaraGpuReadbackManager **)((longlong)this + 0x278);
  uVar2 = *(undefined8 *)((longlong)this + 0x260);
  uVar3 = *(undefined8 *)((longlong)this + 0x268);
  uVar4 = *(undefined8 *)((longlong)this + 0x270);
  local_e8[0] = (code *)0x0;
  local_c0 = FMemory::Malloc(0x20,8);
  *local_c0 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_U__TVector_M_Math_UE__VUNiagaraDataInterfaceArrayFloat3____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  local_c0[1] = uVar2;
  local_c0[2] = uVar3;
  local_c0[3] = uVar4;
  if (local_c0 + 1 != (undefined8 *)0x0) {
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
                  ::Call;
  }
  local_148 = (FBufferRequest *)((longlong)this + 0x180);
  uStack_140 = 2;
  local_108._12_4_ = uStack_13c;
  local_108.ArrayNum = 2;
  local_108.DataPtr = local_148;
  FNiagaraGpuReadbackManager::EnqueueReadbacks
            (local_178,(FRHICommandList *)param_1,&local_108,
             (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)local_e8
            );
  local_138 = (FRHITransitionInfo *)((longlong)this + 0x200);
  uStack_130 = 2;
  local_f8._12_4_ = uStack_12c;
  local_f8.ArrayNum = 2;
  local_f8.DataPtr = local_138;
  FRHIComputeCommandList::Transition(param_1,&local_f8,None);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_168.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_168.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_170);
      local_168.StatData.Pad[4] = '\0';
      local_168.StatData.Pad[5] = '\0';
      local_168.StatData.Pad[6] = '\0';
      local_168.StatData.Pad[7] = '\0';
      local_168.StatData.Pad[0] = local_170.s.LowPart._0_1_;
      local_168.StatData.Pad[1] = local_170.s.LowPart._1_1_;
      local_168.StatData.Pad[2] = local_170.s.LowPart._2_1_;
      local_168.StatData.Pad[3] = local_170.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_168);
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

// Execute @ 1490f5b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::PostSimulate'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FUniformBufferStaticBindings *pFVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  undefined1 auStackY_1f8 [32];
  FColor_u_0 local_198 [2];
  FName local_190;
  FName local_188;
  FNiagaraGpuReadbackManager *local_178;
  LARGE_INTEGER local_170;
  FStatMessage local_168;
  FRHITransitionInfo *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FBufferRequest *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  FRHITransitionInfo *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  FName local_128;
  FName local_120;
  TArrayView<FRHITransitionInfo_const_,int> local_118;
  TArrayView<FNiagaraGpuReadbackManager::FBufferRequest_const_,int> local_108;
  TArrayView<FRHITransitionInfo_const_,int> local_f8;
  code *local_e8 [5];
  undefined8 *local_c0;
  FUniformBufferStaticBindings local_b8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&local_128,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_120,"STAT_FRDGPass_Execute");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar9->Name;
  bVar5 = false;
  bVar7 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_198[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_198[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_190.ComparisonIndex.Value = FVar12.Value;
        local_190.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_190,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_190.ComparisonIndex.Value = FVar12.Value;
      local_190.Number = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_1490f5d17;
    }
  }
  bVar6 = false;
  FVar13 = local_188;
LAB_1490f5d17:
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
  local_158 = (FRHITransitionInfo *)((longlong)this + 0x1a0);
  uStack_150 = 2;
  local_118._12_4_ = uStack_14c;
  local_118.ArrayNum = 2;
  local_118.DataPtr = local_158;
  FRHIComputeCommandList::Transition(param_1,&local_118,None);
  local_178 = *(FNiagaraGpuReadbackManager **)((longlong)this + 0x278);
  uVar2 = *(undefined8 *)((longlong)this + 0x260);
  uVar3 = *(undefined8 *)((longlong)this + 0x268);
  uVar4 = *(undefined8 *)((longlong)this + 0x270);
  local_e8[0] = (code *)0x0;
  local_c0 = FMemory::Malloc(0x20,8);
  *local_c0 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_UFLinearColor__VUNiagaraDataInterfaceArrayColor____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  local_c0[1] = uVar2;
  local_c0[2] = uVar3;
  local_c0[3] = uVar4;
  if (local_c0 + 1 != (undefined8 *)0x0) {
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
                  ::Call;
  }
  local_148 = (FBufferRequest *)((longlong)this + 0x180);
  uStack_140 = 2;
  local_108._12_4_ = uStack_13c;
  local_108.ArrayNum = 2;
  local_108.DataPtr = local_148;
  FNiagaraGpuReadbackManager::EnqueueReadbacks
            (local_178,(FRHICommandList *)param_1,&local_108,
             (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)local_e8
            );
  local_138 = (FRHITransitionInfo *)((longlong)this + 0x200);
  uStack_130 = 2;
  local_f8._12_4_ = uStack_12c;
  local_f8.ArrayNum = 2;
  local_f8.DataPtr = local_138;
  FRHIComputeCommandList::Transition(param_1,&local_f8,None);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_168.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_168.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_170);
      local_168.StatData.Pad[4] = '\0';
      local_168.StatData.Pad[5] = '\0';
      local_168.StatData.Pad[6] = '\0';
      local_168.StatData.Pad[7] = '\0';
      local_168.StatData.Pad[0] = local_170.s.LowPart._0_1_;
      local_168.StatData.Pad[1] = local_170.s.LowPart._1_1_;
      local_168.StatData.Pad[2] = local_170.s.LowPart._2_1_;
      local_168.StatData.Pad[3] = local_170.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_168);
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

// Execute @ 1490f5fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::PostSimulate'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FUniformBufferStaticBindings *pFVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  undefined1 auStackY_1f8 [32];
  FColor_u_0 local_198 [2];
  FName local_190;
  FName local_188;
  FNiagaraGpuReadbackManager *local_178;
  LARGE_INTEGER local_170;
  FStatMessage local_168;
  FRHITransitionInfo *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FBufferRequest *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  FRHITransitionInfo *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  FName local_128;
  FName local_120;
  TArrayView<FRHITransitionInfo_const_,int> local_118;
  TArrayView<FNiagaraGpuReadbackManager::FBufferRequest_const_,int> local_108;
  TArrayView<FRHITransitionInfo_const_,int> local_f8;
  code *local_e8 [5];
  undefined8 *local_c0;
  FUniformBufferStaticBindings local_b8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&local_128,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_120,"STAT_FRDGPass_Execute");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar9->Name;
  bVar5 = false;
  bVar7 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_198[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_198[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_190.ComparisonIndex.Value = FVar12.Value;
        local_190.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_190,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_190.ComparisonIndex.Value = FVar12.Value;
      local_190.Number = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_1490f6157;
    }
  }
  bVar6 = false;
  FVar13 = local_188;
LAB_1490f6157:
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
  local_158 = (FRHITransitionInfo *)((longlong)this + 0x1a0);
  uStack_150 = 2;
  local_118._12_4_ = uStack_14c;
  local_118.ArrayNum = 2;
  local_118.DataPtr = local_158;
  FRHIComputeCommandList::Transition(param_1,&local_118,None);
  local_178 = *(FNiagaraGpuReadbackManager **)((longlong)this + 0x278);
  uVar2 = *(undefined8 *)((longlong)this + 0x260);
  uVar3 = *(undefined8 *)((longlong)this + 0x268);
  uVar4 = *(undefined8 *)((longlong)this + 0x270);
  local_e8[0] = (code *)0x0;
  local_c0 = FMemory::Malloc(0x20,8);
  *local_c0 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_UFNiagaraID__VUNiagaraDataInterfaceArrayNiagaraID____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  local_c0[1] = uVar2;
  local_c0[2] = uVar3;
  local_c0[3] = uVar4;
  if (local_c0 + 1 != (undefined8 *)0x0) {
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
                  ::Call;
  }
  local_148 = (FBufferRequest *)((longlong)this + 0x180);
  uStack_140 = 2;
  local_108._12_4_ = uStack_13c;
  local_108.ArrayNum = 2;
  local_108.DataPtr = local_148;
  FNiagaraGpuReadbackManager::EnqueueReadbacks
            (local_178,(FRHICommandList *)param_1,&local_108,
             (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)local_e8
            );
  local_138 = (FRHITransitionInfo *)((longlong)this + 0x200);
  uStack_130 = 2;
  local_f8._12_4_ = uStack_12c;
  local_f8.ArrayNum = 2;
  local_f8.DataPtr = local_138;
  FRHIComputeCommandList::Transition(param_1,&local_f8,None);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_168.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_168.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_170);
      local_168.StatData.Pad[4] = '\0';
      local_168.StatData.Pad[5] = '\0';
      local_168.StatData.Pad[6] = '\0';
      local_168.StatData.Pad[7] = '\0';
      local_168.StatData.Pad[0] = local_170.s.LowPart._0_1_;
      local_168.StatData.Pad[1] = local_170.s.LowPart._1_1_;
      local_168.StatData.Pad[2] = local_170.s.LowPart._2_1_;
      local_168.StatData.Pad[3] = local_170.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_168);
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

// Execute @ 1490f6410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::PostSimulate'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FUniformBufferStaticBindings *pFVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  undefined1 auStackY_1f8 [32];
  FColor_u_0 local_198 [2];
  FName local_190;
  FName local_188;
  FNiagaraGpuReadbackManager *local_178;
  LARGE_INTEGER local_170;
  FStatMessage local_168;
  FRHITransitionInfo *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FBufferRequest *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  FRHITransitionInfo *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  FName local_128;
  FName local_120;
  TArrayView<FRHITransitionInfo_const_,int> local_118;
  TArrayView<FNiagaraGpuReadbackManager::FBufferRequest_const_,int> local_108;
  TArrayView<FRHITransitionInfo_const_,int> local_f8;
  code *local_e8 [5];
  undefined8 *local_c0;
  FUniformBufferStaticBindings local_b8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&local_128,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_120,"STAT_FRDGPass_Execute");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar9->Name;
  bVar5 = false;
  bVar7 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_198[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_198[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_190.ComparisonIndex.Value = FVar12.Value;
        local_190.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_190,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_190.ComparisonIndex.Value = FVar12.Value;
      local_190.Number = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_1490f6597;
    }
  }
  bVar6 = false;
  FVar13 = local_188;
LAB_1490f6597:
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
  local_158 = (FRHITransitionInfo *)((longlong)this + 0x1a0);
  uStack_150 = 2;
  local_118._12_4_ = uStack_14c;
  local_118.ArrayNum = 2;
  local_118.DataPtr = local_158;
  FRHIComputeCommandList::Transition(param_1,&local_118,None);
  local_178 = *(FNiagaraGpuReadbackManager **)((longlong)this + 0x278);
  uVar2 = *(undefined8 *)((longlong)this + 0x260);
  uVar3 = *(undefined8 *)((longlong)this + 0x268);
  uVar4 = *(undefined8 *)((longlong)this + 0x270);
  local_e8[0] = (code *)0x0;
  local_c0 = FMemory::Malloc(0x20,8);
  *local_c0 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_UFNiagaraPosition__VUNiagaraDataInterfaceArrayPosition____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  local_c0[1] = uVar2;
  local_c0[2] = uVar3;
  local_c0[3] = uVar4;
  if (local_c0 + 1 != (undefined8 *)0x0) {
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
                  ::Call;
  }
  local_148 = (FBufferRequest *)((longlong)this + 0x180);
  uStack_140 = 2;
  local_108._12_4_ = uStack_13c;
  local_108.ArrayNum = 2;
  local_108.DataPtr = local_148;
  FNiagaraGpuReadbackManager::EnqueueReadbacks
            (local_178,(FRHICommandList *)param_1,&local_108,
             (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)local_e8
            );
  local_138 = (FRHITransitionInfo *)((longlong)this + 0x200);
  uStack_130 = 2;
  local_f8._12_4_ = uStack_12c;
  local_f8.ArrayNum = 2;
  local_f8.DataPtr = local_138;
  FRHIComputeCommandList::Transition(param_1,&local_f8,None);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_168.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_168.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_170);
      local_168.StatData.Pad[4] = '\0';
      local_168.StatData.Pad[5] = '\0';
      local_168.StatData.Pad[6] = '\0';
      local_168.StatData.Pad[7] = '\0';
      local_168.StatData.Pad[0] = local_170.s.LowPart._0_1_;
      local_168.StatData.Pad[1] = local_170.s.LowPart._1_1_;
      local_168.StatData.Pad[2] = local_170.s.LowPart._2_1_;
      local_168.StatData.Pad[3] = local_170.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_168);
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

// Execute @ 1490f6850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::PostSimulate'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FUniformBufferStaticBindings *pFVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  undefined1 auStackY_1f8 [32];
  FColor_u_0 local_198 [2];
  FName local_190;
  FName local_188;
  FNiagaraGpuReadbackManager *local_178;
  LARGE_INTEGER local_170;
  FStatMessage local_168;
  FRHITransitionInfo *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FBufferRequest *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  FRHITransitionInfo *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  FName local_128;
  FName local_120;
  TArrayView<FRHITransitionInfo_const_,int> local_118;
  TArrayView<FNiagaraGpuReadbackManager::FBufferRequest_const_,int> local_108;
  TArrayView<FRHITransitionInfo_const_,int> local_f8;
  code *local_e8 [5];
  undefined8 *local_c0;
  FUniformBufferStaticBindings local_b8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&local_128,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_120,"STAT_FRDGPass_Execute");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,`public:_virtual_void___cdecl_FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar9->Name;
  bVar5 = false;
  bVar7 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_198[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_198[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_190.ComparisonIndex.Value = FVar12.Value;
        local_190.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_190,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_190.ComparisonIndex.Value = FVar12.Value;
      local_190.Number = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_1490f69d7;
    }
  }
  bVar6 = false;
  FVar13 = local_188;
LAB_1490f69d7:
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
  local_158 = (FRHITransitionInfo *)((longlong)this + 0x1a0);
  uStack_150 = 2;
  local_118._12_4_ = uStack_14c;
  local_118.ArrayNum = 2;
  local_118.DataPtr = local_158;
  FRHIComputeCommandList::Transition(param_1,&local_118,None);
  local_178 = *(FNiagaraGpuReadbackManager **)((longlong)this + 0x278);
  uVar2 = *(undefined8 *)((longlong)this + 0x260);
  uVar3 = *(undefined8 *)((longlong)this + 0x268);
  uVar4 = *(undefined8 *)((longlong)this + 0x270);
  local_e8[0] = (code *)0x0;
  local_c0 = FMemory::Malloc(0x20,8);
  *local_c0 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl__NVUNiagaraDataInterfaceArrayBool____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  local_c0[1] = uVar2;
  local_c0[2] = uVar3;
  local_c0[3] = uVar4;
  if (local_c0 + 1 != (undefined8 *)0x0) {
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
                  ::Call;
  }
  local_148 = (FBufferRequest *)((longlong)this + 0x180);
  uStack_140 = 2;
  local_108._12_4_ = uStack_13c;
  local_108.ArrayNum = 2;
  local_108.DataPtr = local_148;
  FNiagaraGpuReadbackManager::EnqueueReadbacks
            (local_178,(FRHICommandList *)param_1,&local_108,
             (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)local_e8
            );
  local_138 = (FRHITransitionInfo *)((longlong)this + 0x200);
  uStack_130 = 2;
  local_f8._12_4_ = uStack_12c;
  local_f8.ArrayNum = 2;
  local_f8.DataPtr = local_138;
  FRHIComputeCommandList::Transition(param_1,&local_f8,None);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_168.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_168.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_170);
      local_168.StatData.Pad[4] = '\0';
      local_168.StatData.Pad[5] = '\0';
      local_168.StatData.Pad[6] = '\0';
      local_168.StatData.Pad[7] = '\0';
      local_168.StatData.Pad[0] = local_170.s.LowPart._0_1_;
      local_168.StatData.Pad[1] = local_170.s.LowPart._1_1_;
      local_168.StatData.Pad[2] = local_170.s.LowPart._2_1_;
      local_168.StatData.Pad[3] = local_170.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_168);
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

// Execute @ 1490f6c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraDataChannelDataProxy::AddTransition'::__l5::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_public:_void___cdecl_FNiagaraDataChannelDataProxy::AddTransition(FRDGBuilder_&,ERHIAccess,ERHIAccess,FNiagaraDataBuffer_*)_::_5_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_public:_void___cdecl_FNiagaraDataChannelDataProxy::AddTransition(FRDGBuilder_&,ERHIAccess,ERHIAccess,FNiagaraDataBuffer_*)_::_5_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_public:_void___cdecl_FNiagaraDataChannelDataProxy::AddTransition(FRDGBuilder_&,ERHIAccess,ERHIAccess,FNiagaraDataBuffer_*)_::_5_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_public:_void___cdecl_FNiagaraDataChannelDataProxy::AddTransition(FRDGBuilder_&,ERHIAccess,ERHIAccess,FNiagaraDataBuffer_*)_::_5_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      goto LAB_1490f6e16;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_1490f6e16:
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
  `FNiagaraDataChannelDataProxy::AddTransition'::__l5::<lambda_1>::operator()
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

// Execute @ 1491c2140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FNiagaraCopySVTToDenseBufferCS::FParameters,``UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l27::<lambda_1>::operator()'::__l8::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  int iVar2;
  FParameters *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNiagaraCopySVTToDenseBufferCS::FParameters,_public:___cdecl__public:_virtual_bool___cdecl_UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame(FNiagaraSimCacheDataInterfaceReadContext_const_&)_::_27_::<lambda_1>::operator()(FRHICommandListImmediate_&)const_::_8_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar8;
  FUniformBufferStaticBindings *pFVar9;
  FShaderParametersMetadata *pFVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  LARGE_INTEGER LVar11;
  undefined4 uVar12;
  undefined1 auStackY_138 [32];
  LARGE_INTEGER local_d8 [2];
  TIntVector3<int>_u_0 local_c8;
  uint local_bc;
  LARGE_INTEGER local_b8;
  FUniformBufferStaticBindings local_a8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar12 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNiagaraCopySVTToDenseBufferCS::FParameters,_public:___cdecl__public:_virtual_bool___cdecl_UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame(FNiagaraSimCacheDataInterfaceReadContext_const_&)_::_27_::<lambda_1>::operator()(FRHICommandListImmediate_&)const_::_8_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar7 = ::FName::FName((FName *)&local_d8[0].s,"STAT_FRDGPass_Execute");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar7,
                   L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,
                   true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = ::StatPtr_STAT_FRDGPass_Execute;
  if (::StatPtr_STAT_FRDGPass_Execute ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNiagaraCopySVTToDenseBufferCS::FParameters,_public:___cdecl__public:_virtual_bool___cdecl_UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame(FNiagaraSimCacheDataInterfaceReadContext_const_&)_::_27_::<lambda_1>::operator()(FRHICommandListImmediate_&)const_::_8_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar7 = ::FName::FName((FName *)&local_c8._s_0,"STAT_FRDGPass_Execute");
    FVar8 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNiagaraCopySVTToDenseBufferCS::FParameters,_public:___cdecl__public:_virtual_bool___cdecl_UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame(FNiagaraSimCacheDataInterfaceReadContext_const_&)_::_27_::<lambda_1>::operator()(FRHICommandListImmediate_&)const_::_8_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar7,
                         L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  LVar11 = *(LARGE_INTEGER *)FVar8;
  bVar4 = false;
  bVar6 = false;
  local_b8.s.LowPart = 0;
  local_b8.s.HighPart = 0;
  if ((LVar11.s.LowPart != 0) || (LVar11.s.HighPart != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_d8[0].QuadPart = local_d8[0].QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d8[0].s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8[0] = LVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_d8[0].s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_d8[0] = LVar11;
      local_b8 = LVar11;
      FThreadStats::AddMessage((FName)LVar11.s,CycleScopeStart);
      bVar5 = true;
      uVar12 = local_b8._0_4_;
      goto LAB_1491c22dd;
    }
  }
  bVar5 = false;
  LVar11 = local_b8;
LAB_1491c22dd:
  pFVar9 = FRDGParameterStruct::GetStaticUniformBuffers
                     ((FRDGParameterStruct *)((longlong)this + 0x30),&local_a8);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar9);
  if (local_a8.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_a8.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_a8.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_a8.Slots.AllocatorInstance.SecondaryData);
  }
  local_d8[0] = *(LARGE_INTEGER *)((longlong)this + 0x198);
  iVar2 = *(int *)((longlong)this + 0x1a0);
  pFVar3 = *(FParameters **)((longlong)this + 0x180);
  pFVar10 = FNiagaraCopySVTToDenseBufferCS::FParameters::FTypeInfo::GetStructMetadata();
  local_c8._0_8_ = local_d8[0];
  local_c8._s_0.Z = iVar2;
  FComputeShaderUtils::Dispatch<FNiagaraCopySVTToDenseBufferCS>
            (param_1,(TShaderRefBase<FNiagaraCopySVTToDenseBufferCS,FShaderMapPointerTable> *)
                     ((longlong)this + 0x188),pFVar10,pFVar3,(TIntVector3<int> *)&local_c8._s_0);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && ((FName)LVar11.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_bc = LVar11.s.HighPart & 0xffff6fffU | 0x6000;
      local_c8._s_0.Z = uVar12;
      QueryPerformanceCounter(local_d8);
      local_c8._0_8_ = local_d8[0].QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_c8._s_0);
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

// Execute @ 14922e8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FNDIGpuComputeDispatchArgsGenParameters,`FNDIGpuComputeDispatchArgsGenContext::FlushPass'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNDIGpuComputeDispatchArgsGenParameters,_protected:_void___cdecl_FNDIGpuComputeDispatchArgsGenContext::FlushPass(void)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNDIGpuComputeDispatchArgsGenParameters,_protected:_void___cdecl_FNDIGpuComputeDispatchArgsGenContext::FlushPass(void)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNDIGpuComputeDispatchArgsGenParameters,_protected:_void___cdecl_FNDIGpuComputeDispatchArgsGenContext::FlushPass(void)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNDIGpuComputeDispatchArgsGenParameters,_protected:_void___cdecl_FNDIGpuComputeDispatchArgsGenContext::FlushPass(void)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      goto LAB_14922ea56;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_14922ea56:
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
  `FNDIGpuComputeDispatchArgsGenContext::FlushPass'::__l2::<lambda_1>::operator()
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

// Execute @ 1492e5bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l8::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  uchar auVar2 [8];
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_8_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar7;
  FUniformBufferStaticBindings *pFVar8;
  IRHIComputeContext *pIVar9;
  undefined8 *puVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  longlong lVar14;
  undefined1 auStackY_138 [32];
  LARGE_INTEGER local_d8 [2];
  FStatMessage local_c8;
  FName local_b8;
  FUniformBufferStaticBindings local_a8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_8_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar6 = ::FName::FName((FName *)&local_d8[0].s,"STAT_FRDGPass_Execute");
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_8_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar6 = ::FName::FName((FName *)&local_c8,"STAT_FRDGPass_Execute");
    FVar7 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_8_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar6,
                         L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_d8[0].s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d8[0].s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8[0]._0_4_ = FVar12.Value;
        local_d8[0]._4_4_ = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_d8[0].s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_d8[0]._0_4_ = FVar12.Value;
      local_d8[0]._4_4_ = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      goto LAB_1492e5d7d;
    }
  }
  bVar4 = false;
  FVar13 = local_b8;
LAB_1492e5d7d:
  pFVar8 = FRDGParameterStruct::GetStaticUniformBuffers
                     ((FRDGParameterStruct *)((longlong)this + 0x30),&local_a8);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar8);
  if (local_a8.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_a8.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_a8.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_a8.Slots.AllocatorInstance.SecondaryData);
  }
  lVar14 = (ulonglong)*(uint *)((longlong)this + 400) + 0x8b;
  auVar2 = (uchar  [8])(*(longlong *)((longlong)this + 0x180) + lVar14 * 8);
  if (*(longlong *)(*(longlong *)((longlong)this + 0x180) + lVar14 * 8) != 0) {
    local_c8.NameAndInfo.Index.Value = 1;
    local_c8.StatData.Pad = auVar2;
    if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
      puVar10 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar10;
      *(undefined8 **)&param_1->field_0x30 = puVar10 + 1;
      local_c8.StatData.Pad = (uchar  [8])FMemStackBase::Alloc((FMemStackBase *)param_1,8,8);
      local_c8.NameAndInfo.Index.Value = 1;
      *(undefined8 *)local_c8.StatData.Pad = *(undefined8 *)auVar2;
      *puVar10 = &___7FRHICommandCrossGPUTransferWait__6B_;
      puVar10[1] = 0;
      *(uchar (*) [8])(puVar10 + 2) = local_c8.StatData.Pad;
      puVar10[3] = CONCAT44(local_c8.NameAndInfo.Number,1);
    }
    else {
      pIVar9 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
      (**(code **)(pIVar9->_padding_ + 0x120))(pIVar9,&local_c8);
    }
    *(undefined8 *)auVar2 = 0;
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_c8.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_c8.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_d8);
      local_c8.StatData.Pad[4] = '\0';
      local_c8.StatData.Pad[5] = '\0';
      local_c8.StatData.Pad[6] = '\0';
      local_c8.StatData.Pad[7] = '\0';
      local_c8.StatData.Pad[0] = local_d8[0]._0_1_;
      local_c8.StatData.Pad[1] = local_d8[0]._1_1_;
      local_c8.StatData.Pad[2] = local_d8[0]._2_1_;
      local_c8.StatData.Pad[3] = local_d8[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_c8);
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

// Execute @ 1492e6030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush'::__l37::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_public:_void___cdecl_FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush(FRHICommandListImmediate_&,bool)_::_37_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_public:_void___cdecl_FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush(FRHICommandListImmediate_&,bool)_::_37_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_public:_void___cdecl_FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush(FRHICommandListImmediate_&,bool)_::_37_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_public:_void___cdecl_FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush(FRHICommandListImmediate_&,bool)_::_37_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      goto LAB_1492e61b6;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_1492e61b6:
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
  FNiagaraGPUInstanceCountManager::UpdateDrawIndirectBuffers
            (&(*(FNiagaraGpuComputeDispatchInterface **)((longlong)this + 0x180))->
              GPUInstanceCounterManager,
             *(FNiagaraGpuComputeDispatchInterface **)((longlong)this + 0x180),
             (FRHICommandList *)param_1,PreOpaque);
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

// Execute @ 1492e63b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush'::__l37::<lambda_2>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_public:_void___cdecl_FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush(FRHICommandListImmediate_&,bool)_::_37_::<lambda_2>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_public:_void___cdecl_FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush(FRHICommandListImmediate_&,bool)_::_37_::<lambda_2>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_public:_void___cdecl_FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush(FRHICommandListImmediate_&,bool)_::_37_::<lambda_2>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_public:_void___cdecl_FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush(FRHICommandListImmediate_&,bool)_::_37_::<lambda_2>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      goto LAB_1492e6536;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_1492e6536:
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
  FNiagaraGPUInstanceCountManager::UpdateDrawIndirectBuffers
            (&(*(FNiagaraGpuComputeDispatchInterface **)((longlong)this + 0x180))->
              GPUInstanceCounterManager,
             *(FNiagaraGpuComputeDispatchInterface **)((longlong)this + 0x180),
             (FRHICommandList *)param_1,PostOpaque);
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

// Execute @ 1492e6730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l11::<lambda_2>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  FNiagaraComputeExecutionContext *this_00;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_11_::<lambda_2>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar9;
  FUniformBufferStaticBindings *pFVar10;
  longlong lVar11;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  undefined8 *puVar15;
  undefined1 auStackY_158 [32];
  FName local_f8;
  undefined1 local_f0 [8];
  LARGE_INTEGER local_e8;
  FName local_e0;
  FStatMessage local_d0;
  FRHIComputeCommandList *local_c0;
  FUniformBufferStaticBindings local_b8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_e8 = (LARGE_INTEGER)this;
  local_c0 = param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_11_::<lambda_2>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar8 = ::FName::FName(&local_f8,"STAT_FRDGPass_Execute");
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_11_::<lambda_2>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar8 = ::FName::FName((FName *)&local_d0,"STAT_FRDGPass_Execute");
    FVar9 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_11_::<lambda_2>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar8,
                         L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar9;
  bVar5 = false;
  bVar7 = false;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_f8.ComparisonIndex.Value = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar13.Value;
        local_f8.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f8.ComparisonIndex.Value = FVar13.Value;
      local_f8.Number = uVar12;
      local_e0 = FVar14;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_1492e68cb;
    }
  }
  bVar6 = false;
  FVar14 = local_e0;
LAB_1492e68cb:
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
  lVar4 = *(longlong *)((longlong)this + 0x180);
  puVar15 = *(undefined8 **)(lVar4 + 0x3a8);
  iVar3 = *(int *)(lVar4 + 0x3b0);
  puVar2 = puVar15 + iVar3;
  while( true ) {
    if (*(int *)(lVar4 + 0x3b0) != iVar3) {
      `TCheckedPointerIterator<FNiagaraComputeExecutionContext_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_f0);
    }
    if (puVar15 == puVar2) break;
    this_00 = (FNiagaraComputeExecutionContext *)*puVar15;
    FNiagaraComputeExecutionContext::SetMultiViewPreviousDataToRender
              (this_00,(FNiagaraDataBuffer *)0x0);
    lVar11 = (**(code **)(this_00->_padding_ + 0x10))(this_00);
    puVar15 = puVar15 + 1;
    *(undefined4 *)(lVar11 + 0x58) = 0;
    this_00->DataBuffers_RT[0]->GPUInstanceCountBufferOffset = 0xffffffff;
    this_00->DataBuffers_RT[1]->GPUInstanceCountBufferOffset = 0xffffffff;
  }
  FVar13.Value = local_e0.ComparisonIndex.Value;
  lVar4 = *(longlong *)(local_e8.QuadPart + 0x180);
  *(undefined4 *)(lVar4 + 0x3b0) = 0;
  if (*(int *)(lVar4 + 0x3b4) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)(lVar4 + 0x3a8),0,(int *)(lVar4 + 0x3b4));
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_d0.NameAndInfo.Index.Value = FVar13.Value;
      local_d0.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_e8);
      local_d0.StatData.Pad = (uchar  [8])(local_e8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,&local_d0);
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

// Execute @ 1492e6b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l35::<lambda_5>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_35_::<lambda_5>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_35_::<lambda_5>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_35_::<lambda_5>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_35_::<lambda_5>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      goto LAB_1492e6cf6;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_1492e6cf6:
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
  `FNiagaraGpuComputeDispatch::ExecuteTicks'::__l35::<lambda_5>::operator()
            ((void *)((longlong)this + 0x180),(FRHICommandList *)param_1);
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

// Execute @ 1492e6ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l35::<lambda_6>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_35_::<lambda_6>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar9;
  FUniformBufferStaticBindings *pFVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar11;
  undefined1 auStackY_198 [32];
  FColor_u_0 local_138 [2];
  FName local_130;
  FName local_128;
  FName local_120;
  LARGE_INTEGER local_110;
  FStatMessage local_108;
  FName *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  FRHITransitionInfo *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FName local_d8;
  FName local_d0;
  TArrayView<FRHIUnorderedAccessView_*_const,int> local_c8;
  TArrayView<FRHITransitionInfo_const_,int> local_b8;
  FUniformBufferStaticBindings local_a8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_35_::<lambda_6>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar8 = ::FName::FName(&local_d8,"STAT_FRDGPass_Execute");
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_35_::<lambda_6>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar8 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FVar9 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_35_::<lambda_6>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar8,
                         L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_120.ComparisonIndex.Value = 0;
  local_120.Number = 0;
  if ((FVar11.ComparisonIndex.Value.Value != 0) || (FVar11.Number != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_138[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_138[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_128.ComparisonIndex.Value = FVar11.ComparisonIndex.Value.Value;
        local_128.Number = FVar11.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_128,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_130 = FVar11;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar5 = true;
      goto LAB_1492e7067;
    }
  }
  bVar5 = false;
  FVar11 = local_120;
LAB_1492e7067:
  pFVar10 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_a8);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar10);
  if (local_a8.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_a8.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_a8.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_a8.Slots.AllocatorInstance.SecondaryData);
  }
  lVar2 = *(longlong *)((longlong)this + 0x180);
  if (*(int *)(lVar2 + 0x54) < *(int *)(lVar2 + 0x50)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("UsedInstanceCounts <= AllocatedInstanceCounts",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                       ,0x44,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_130 = *(FName *)(lVar2 + 0x70);
  local_f8 = &local_130;
  uStack_f0 = 1;
  local_c8._12_4_ = uStack_ec;
  local_c8.ArrayNum = 1;
  local_c8.DataPtr = (FRHIUnorderedAccessView **)local_f8;
  FRHIComputeCommandList::EndUAVOverlap(param_1,&local_c8);
  local_e8 = *(FRHITransitionInfo **)((longlong)this + 0x188);
  iStack_e0 = *(int *)((longlong)this + 400);
  if (iStack_e0 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_b8._12_4_ = uStack_dc;
  local_b8.ArrayNum = iStack_e0;
  local_b8.DataPtr = local_e8;
  FRHIComputeCommandList::Transition(param_1,&local_b8,None);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_108.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_108.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_110);
      local_108.StatData.Pad[4] = '\0';
      local_108.StatData.Pad[5] = '\0';
      local_108.StatData.Pad[6] = '\0';
      local_108.StatData.Pad[7] = '\0';
      local_108.StatData.Pad[0] = local_110.s.LowPart._0_1_;
      local_108.StatData.Pad[1] = local_110.s.LowPart._1_1_;
      local_108.StatData.Pad[2] = local_110.s.LowPart._2_1_;
      local_108.StatData.Pad[3] = local_110.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_108);
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

// Execute @ 1492e72e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l118::<lambda_7>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_118_::<lambda_7>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_118_::<lambda_7>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_118_::<lambda_7>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_118_::<lambda_7>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      goto LAB_1492e7466;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_1492e7466:
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
  `FNiagaraGpuComputeDispatch::ExecuteTicks'::__l118::<lambda_7>::operator()
            ((void *)((longlong)this + 0x180),(FRHICommandList *)param_1);
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

// Execute @ 1492e7650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FNiagaraGpuComputeDispatchParameters,`FNiagaraGpuComputeDispatch::PostRenderOpaque'::__l19::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  FNiagaraAsyncGpuTraceHelper *this_00;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNiagaraGpuComputeDispatchParameters,_public:_virtual_void___cdecl_FNiagaraGpuComputeDispatch::PostRenderOpaque(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,FSceneUniformBuffer_&,bool)_::_19_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar6;
  FUniformBufferStaticBindings *pFVar7;
  TUniformBufferRef<FSceneUniformParameters> TVar8;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  LARGE_INTEGER LVar9;
  undefined4 uVar10;
  undefined1 auStackY_138 [32];
  LARGE_INTEGER local_d8;
  undefined8 uStack_d0;
  LARGE_INTEGER local_c8;
  FStatMessage local_b8;
  FUniformBufferStaticBindings local_a8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar10 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNiagaraGpuComputeDispatchParameters,_public:_virtual_void___cdecl_FNiagaraGpuComputeDispatch::PostRenderOpaque(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,FSceneUniformBuffer_&,bool)_::_19_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNiagaraGpuComputeDispatchParameters,_public:_virtual_void___cdecl_FNiagaraGpuComputeDispatch::PostRenderOpaque(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,FSceneUniformBuffer_&,bool)_::_19_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_b8,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNiagaraGpuComputeDispatchParameters,_public:_virtual_void___cdecl_FNiagaraGpuComputeDispatch::PostRenderOpaque(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,FSceneUniformBuffer_&,bool)_::_19_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar5,
                         L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  LVar9 = *(LARGE_INTEGER *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_c8.s.LowPart = 0;
  local_c8.s.HighPart = 0;
  if ((LVar9.s.LowPart != 0) || (LVar9.s.HighPart != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_d8.QuadPart = local_d8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8 = LVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_d8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_d8 = LVar9;
      local_c8 = LVar9;
      FThreadStats::AddMessage((FName)LVar9.s,CycleScopeStart);
      bVar3 = true;
      uVar10 = local_c8._0_4_;
      goto LAB_1492e77d9;
    }
  }
  bVar3 = false;
  LVar9 = local_c8;
LAB_1492e77d9:
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
  this_00 = *(FNiagaraAsyncGpuTraceHelper **)(*(longlong *)((longlong)this + 0x180) + 0x270);
  TVar8 = TRDGUniformBuffer<FSceneUniformParameters>::GetRHIRef
                    ((TRDGUniformBuffer<FSceneUniformParameters> *)
                     **(undefined8 **)((longlong)this + 0x198));
  local_d8 = *(LARGE_INTEGER *)((longlong)this + 0x188);
  uStack_d0 = *(undefined8 *)((longlong)this + 400);
  FNiagaraAsyncGpuTraceHelper::PostRenderOpaque
            (this_00,(FRHICommandList *)param_1,
             *(FNiagaraGpuComputeDispatchInterface **)((longlong)this + 0x180),
             (TStridedView<FSceneView_const_,int> *)&local_d8.s,TVar8);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && ((FName)LVar9.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_b8.NameAndInfo.Number = LVar9.s.HighPart & 0xffff6fffU | 0x6000;
      local_b8.NameAndInfo.Index.Value = uVar10;
      QueryPerformanceCounter(&local_d8);
      local_b8.StatData.Pad = (uchar  [8])(local_d8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,&local_b8);
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

// Execute @ 1492e7a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FNiagaraGpuComputeDispatchParameters,`FNiagaraGpuComputeDispatch::PostRenderOpaque'::__l20::<lambda_2>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  FNiagaraAsyncGpuTraceHelper *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNiagaraGpuComputeDispatchParameters,_public:_virtual_void___cdecl_FNiagaraGpuComputeDispatch::PostRenderOpaque(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,FSceneUniformBuffer_&,bool)_::_20_::<lambda_2>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar9;
  FUniformBufferStaticBindings *pFVar10;
  TUniformBufferRef<FSceneUniformParameters> TVar11;
  FRHIGPUBufferReadback *pFVar12;
  FRHIGPUBufferReadback *pFVar13;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar14;
  FNameEntryId FVar15;
  FName FVar16;
  undefined1 auStackY_168 [32];
  FColor_u_0 local_108 [2];
  LARGE_INTEGER local_100;
  FName local_f8;
  FName local_f0;
  FStatMessage local_e0;
  FName local_d0;
  FName local_c8 [2];
  FName local_b8;
  FUniformBufferStaticBindings local_b0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pFVar13 = (FRHIGPUBufferReadback *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (::StatPtr_STAT_FRDGPass_Execute ==
        (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNiagaraGpuComputeDispatchParameters,_public:_virtual_void___cdecl_FNiagaraGpuComputeDispatch::PostRenderOpaque(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,FSceneUniformBuffer_&,bool)_::_20_::<lambda_2>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
         )0x0) {
      pFVar8 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar8,
                 L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,
                 true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = ::StatPtr_STAT_FRDGPass_Execute;
  if (::StatPtr_STAT_FRDGPass_Execute ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNiagaraGpuComputeDispatchParameters,_public:_virtual_void___cdecl_FNiagaraGpuComputeDispatch::PostRenderOpaque(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,FSceneUniformBuffer_&,bool)_::_20_::<lambda_2>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar8 = ::FName::FName(local_c8,"STAT_FRDGPass_Execute");
    FVar9 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNiagaraGpuComputeDispatchParameters,_public:_virtual_void___cdecl_FNiagaraGpuComputeDispatch::PostRenderOpaque(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,FSceneUniformBuffer_&,bool)_::_20_::<lambda_2>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar8,
                         L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar14 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar14 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_108[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_108[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar15.Value;
        local_f8.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_100.s.LowPart = FVar15.Value;
      local_100.s.HighPart = uVar14;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar5 = true;
      goto LAB_1492e7b94;
    }
  }
  bVar5 = false;
  FVar16 = local_f0;
LAB_1492e7b94:
  pFVar10 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_b0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar10);
  if (local_b0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_b0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_b0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_b0.Slots.AllocatorInstance.SecondaryData);
  }
  if (*(char *)((longlong)this + 0x198) != '\0') {
    this_00 = *(FNiagaraAsyncGpuTraceHelper **)(*(longlong *)((longlong)this + 0x180) + 0x270);
    TVar11 = TRDGUniformBuffer<FSceneUniformParameters>::GetRHIRef
                       ((TRDGUniformBuffer<FSceneUniformParameters> *)
                        **(undefined8 **)((longlong)this + 400));
    FNiagaraAsyncGpuTraceHelper::EndFrame
              (this_00,(FRHICommandList *)param_1,
               *(FNiagaraGpuComputeDispatchInterface **)((longlong)this + 0x180),TVar11);
  }
  (**(code **)(**(longlong **)((longlong)this + 0x180) + 0x110))
            (*(longlong **)((longlong)this + 0x180),param_1);
  if (*(char *)((longlong)this + 0x188) != '\0') {
    bVar7 = FNiagaraGPUInstanceCountManager::HasPendingGPUReadback
                      ((FNiagaraGPUInstanceCountManager *)
                       (*(longlong *)((longlong)this + 0x180) + 0x48));
    if ((bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!GPUInstanceCounterManager.HasPendingGPUReadback()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                           ,0x88b,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar2 = *(longlong *)((longlong)this + 0x180);
    bVar7 = IsInRenderingThread();
    if ((!bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                           ,0x286,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((0 < *(int *)(lVar2 + 0x50)) && (*(int *)(lVar2 + 0x50) != *(int *)(lVar2 + 0xd0))) {
      pFVar12 = *(FRHIGPUBufferReadback **)(lVar2 + 0xd8);
      if (*(FRHIGPUBufferReadback **)(lVar2 + 0xd8) == (FRHIGPUBufferReadback *)0x0) {
        pFVar12 = ::operator_new(0x58);
        if (pFVar12 != (FRHIGPUBufferReadback *)0x0) {
          pFVar8 = ::FName::FName(&local_b8,L"Niagara GPU Instance Count Readback");
          pFVar13 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(pFVar12,*pFVar8);
        }
        *(FRHIGPUBufferReadback **)(lVar2 + 0xd8) = pFVar13;
        pFVar12 = pFVar13;
      }
      *(undefined4 *)(lVar2 + 0xe0) = *(undefined4 *)(lVar2 + 0x50);
      (**(code **)(pFVar12->_padding_ + 0x10))(pFVar12,param_1,*(undefined8 *)(lVar2 + 0x68),0);
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_e0.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_e0.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
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

// Execute @ 1492e7ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FReadbackBufferParameters,`FNiagaraGpuReadbackManager::EnqueueReadback'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  uint uVar2;
  FRDGResource *this_00;
  FRHIStagingBuffer *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FReadbackBufferParameters,_public:_void___cdecl_FNiagaraGpuReadbackManager::EnqueueReadback(FRDGBuilder_&,FRDGBuffer_*,unsigned_int,unsigned_int,TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)>)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar8;
  FUniformBufferStaticBindings *pFVar9;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  undefined1 auStackY_148 [32];
  FName local_e8;
  LARGE_INTEGER local_e0;
  FName local_d8;
  FStatMessage local_c8;
  FUniformBufferStaticBindings local_b8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_148;
  FVar13.Value = 0;
  local_e0 = (LARGE_INTEGER)param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FReadbackBufferParameters,_public:_void___cdecl_FNiagaraGpuReadbackManager::EnqueueReadback(FRDGBuilder_&,FRDGBuffer_*,unsigned_int,unsigned_int,TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)>)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar7 = ::FName::FName(&local_e8,"STAT_FRDGPass_Execute");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar7,
                   L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,
                   true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = ::StatPtr_STAT_FRDGPass_Execute;
  if (::StatPtr_STAT_FRDGPass_Execute ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FReadbackBufferParameters,_public:_void___cdecl_FNiagaraGpuReadbackManager::EnqueueReadback(FRDGBuilder_&,FRDGBuffer_*,unsigned_int,unsigned_int,TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)>)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar7 = ::FName::FName((FName *)&local_c8,"STAT_FRDGPass_Execute");
    FVar8 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FReadbackBufferParameters,_public:_void___cdecl_FNiagaraGpuReadbackManager::EnqueueReadback(FRDGBuilder_&,FRDGBuffer_*,unsigned_int,unsigned_int,TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)>)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar7,
                         L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar8;
  bVar4 = false;
  bVar6 = false;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_e8.ComparisonIndex.Value = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e8,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e8.ComparisonIndex.Value = FVar11.Value;
        local_e8.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e8,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_e8.ComparisonIndex.Value = FVar11.Value;
      local_e8.Number = uVar10;
      local_d8 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      FVar13.Value = local_d8.ComparisonIndex.Value;
      goto LAB_1492e8057;
    }
  }
  bVar5 = false;
  FVar12 = local_d8;
LAB_1492e8057:
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
  this_00 = *(FRDGResource **)((longlong)this + 0x180);
  uVar10 = *(uint *)((longlong)this + 0x194);
  uVar2 = *(uint *)((longlong)this + 400);
  pFVar3 = *(FRHIStagingBuffer **)((longlong)this + 0x188);
  FRDGResource::ValidateRHIAccess(this_00);
  FRHIComputeCommandList::CopyToStagingBuffer
            ((FRHIComputeCommandList *)local_e0,(FRHIBuffer *)this_00->ResourceRHI,pFVar3,uVar2,
             uVar10);
  (**(code **)(GDynamicRHI->_padding_ + 0xc0))(GDynamicRHI,local_e0.QuadPart);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_c8.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_c8.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_e0);
      local_c8.StatData.Pad = (uchar  [8])(local_e0.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,&local_c8);
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

// Execute @ 1492e8290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FReadbackBufferParameters,`FNiagaraGpuReadbackManager::EnqueueReadbacks'::__l11::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  uint uVar2;
  FRDGResource *this_00;
  FRHIStagingBuffer *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  LARGE_INTEGER LVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FReadbackBufferParameters,_public:_void___cdecl_FNiagaraGpuReadbackManager::EnqueueReadbacks(FRDGBuilder_&,TArrayView<FNiagaraGpuReadbackManager::FRDGBufferRequest_const_,int>,TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)>)_::_11_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar9;
  FUniformBufferStaticBindings *pFVar10;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  FNameEntryId FVar14;
  undefined1 auStackY_148 [32];
  FName local_e8;
  LARGE_INTEGER local_e0;
  FName local_d8;
  FStatMessage local_c8;
  FUniformBufferStaticBindings local_b8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_148;
  FVar14.Value = 0;
  local_e0 = (LARGE_INTEGER)param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FReadbackBufferParameters,_public:_void___cdecl_FNiagaraGpuReadbackManager::EnqueueReadbacks(FRDGBuilder_&,TArrayView<FNiagaraGpuReadbackManager::FRDGBufferRequest_const_,int>,TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)>)_::_11_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar8 = ::FName::FName(&local_e8,"STAT_FRDGPass_Execute");
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FReadbackBufferParameters,_public:_void___cdecl_FNiagaraGpuReadbackManager::EnqueueReadbacks(FRDGBuilder_&,TArrayView<FNiagaraGpuReadbackManager::FRDGBufferRequest_const_,int>,TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)>)_::_11_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar8 = ::FName::FName((FName *)&local_c8,"STAT_FRDGPass_Execute");
    FVar9 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FReadbackBufferParameters,_public:_void___cdecl_FNiagaraGpuReadbackManager::EnqueueReadbacks(FRDGBuilder_&,TArrayView<FNiagaraGpuReadbackManager::FRDGBufferRequest_const_,int>,TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)>)_::_11_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar8,
                         L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_e8.ComparisonIndex.Value = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e8,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e8.ComparisonIndex.Value = FVar12.Value;
        local_e8.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e8,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_e8.ComparisonIndex.Value = FVar12.Value;
      local_e8.Number = uVar11;
      local_d8 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      FVar14.Value = local_d8.ComparisonIndex.Value;
      goto LAB_1492e8427;
    }
  }
  bVar5 = false;
  FVar13 = local_d8;
LAB_1492e8427:
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
  this_00 = *(FRDGResource **)((longlong)this + 0x180);
  uVar11 = *(uint *)((longlong)this + 0x194);
  uVar2 = *(uint *)((longlong)this + 400);
  pFVar3 = *(FRHIStagingBuffer **)((longlong)this + 0x188);
  FRDGResource::ValidateRHIAccess(this_00);
  LVar7 = local_e0;
  FRHIComputeCommandList::CopyToStagingBuffer
            ((FRHIComputeCommandList *)local_e0,(FRHIBuffer *)this_00->ResourceRHI,pFVar3,uVar2,
             uVar11);
  if (*(longlong *)((longlong)this + 0x198) != 0) {
    (**(code **)(GDynamicRHI->_padding_ + 0xc0))(GDynamicRHI,LVar7.QuadPart);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_c8.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      local_c8.NameAndInfo.Index.Value = FVar14.Value;
      QueryPerformanceCounter(&local_e0);
      local_c8.StatData.Pad = (uchar  [8])(local_e0.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,&local_c8);
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

// Execute @ 1492e8670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FReadbackBufferParameters,`FNiagaraGpuReadbackManager::EnqueueReadbacks'::__l11::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  uint uVar2;
  FRDGResource *this_00;
  FRHIStagingBuffer *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  LARGE_INTEGER LVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FReadbackBufferParameters,_public:_void___cdecl_FNiagaraGpuReadbackManager::EnqueueReadbacks(FRDGBuilder_&,TArrayView<FRDGBuffer_*_const,int>,TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)>)_::_11_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar9;
  FUniformBufferStaticBindings *pFVar10;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  FNameEntryId FVar14;
  undefined1 auStackY_148 [32];
  FName local_e8;
  LARGE_INTEGER local_e0;
  FName local_d8;
  FStatMessage local_c8;
  FUniformBufferStaticBindings local_b8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_148;
  FVar14.Value = 0;
  local_e0 = (LARGE_INTEGER)param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FReadbackBufferParameters,_public:_void___cdecl_FNiagaraGpuReadbackManager::EnqueueReadbacks(FRDGBuilder_&,TArrayView<FRDGBuffer_*_const,int>,TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)>)_::_11_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar8 = ::FName::FName(&local_e8,"STAT_FRDGPass_Execute");
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FReadbackBufferParameters,_public:_void___cdecl_FNiagaraGpuReadbackManager::EnqueueReadbacks(FRDGBuilder_&,TArrayView<FRDGBuffer_*_const,int>,TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)>)_::_11_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar8 = ::FName::FName((FName *)&local_c8,"STAT_FRDGPass_Execute");
    FVar9 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FReadbackBufferParameters,_public:_void___cdecl_FNiagaraGpuReadbackManager::EnqueueReadbacks(FRDGBuilder_&,TArrayView<FRDGBuffer_*_const,int>,TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)>)_::_11_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar8,
                         L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_e8.ComparisonIndex.Value = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e8,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e8.ComparisonIndex.Value = FVar12.Value;
        local_e8.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e8,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_e8.ComparisonIndex.Value = FVar12.Value;
      local_e8.Number = uVar11;
      local_d8 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      FVar14.Value = local_d8.ComparisonIndex.Value;
      goto LAB_1492e8807;
    }
  }
  bVar5 = false;
  FVar13 = local_d8;
LAB_1492e8807:
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
  this_00 = *(FRDGResource **)((longlong)this + 0x180);
  uVar11 = *(uint *)((longlong)this + 0x194);
  uVar2 = *(uint *)((longlong)this + 400);
  pFVar3 = *(FRHIStagingBuffer **)((longlong)this + 0x188);
  FRDGResource::ValidateRHIAccess(this_00);
  LVar7 = local_e0;
  FRHIComputeCommandList::CopyToStagingBuffer
            ((FRHIComputeCommandList *)local_e0,(FRHIBuffer *)this_00->ResourceRHI,pFVar3,uVar2,
             uVar11);
  if (*(longlong *)((longlong)this + 0x198) != 0) {
    (**(code **)(GDynamicRHI->_padding_ + 0xc0))(GDynamicRHI,LVar7.QuadPart);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_c8.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      local_c8.NameAndInfo.Index.Value = FVar14.Value;
      QueryPerformanceCounter(&local_e0);
      local_c8.StatData.Pad = (uchar  [8])(local_e0.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,&local_c8);
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

// Execute @ 1492e8a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<void,`FNiagaraGpuComputeDispatch::DispatchStage'::__l126::<lambda_1>_>::Execute
          (void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<void,_private:_void___cdecl_FNiagaraGpuComputeDispatch::DispatchStage(FRDGBuilder_&,FNiagaraGPUSystemTick_const_&,FNiagaraComputeInstanceData_const_&,FNiagaraSimStageData_const_&)_::_126_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<void,_private:_void___cdecl_FNiagaraGpuComputeDispatch::DispatchStage(FRDGBuilder_&,FNiagaraGPUSystemTick_const_&,FNiagaraComputeInstanceData_const_&,FNiagaraSimStageData_const_&)_::_126_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<void,_private:_void___cdecl_FNiagaraGpuComputeDispatch::DispatchStage(FRDGBuilder_&,FNiagaraGPUSystemTick_const_&,FNiagaraComputeInstanceData_const_&,FNiagaraSimStageData_const_&)_::_126_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<void,_private:_void___cdecl_FNiagaraGpuComputeDispatch::DispatchStage(FRDGBuilder_&,FNiagaraGPUSystemTick_const_&,FNiagaraComputeInstanceData_const_&,FNiagaraSimStageData_const_&)_::_126_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      goto LAB_1492e8bd6;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_1492e8bd6:
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
  `FNiagaraGpuComputeDispatch::DispatchStage'::__l126::<lambda_1>::operator()
            ((void *)((longlong)this + 0x180),(FRHICommandList *)param_1);
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

// Execute @ 1492e8dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<void,`FNiagaraGpuComputeDispatch::DispatchStage'[::A]::<lambda_2>_>::Execute
          (void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<void,_private:_void___cdecl_FNiagaraGpuComputeDispatch::DispatchStage(FRDGBuilder_&,FNiagaraGPUSystemTick_const_&,FNiagaraComputeInstanceData_const_&,FNiagaraSimStageData_const_&)_[::A]::<lambda_2>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<void,_private:_void___cdecl_FNiagaraGpuComputeDispatch::DispatchStage(FRDGBuilder_&,FNiagaraGPUSystemTick_const_&,FNiagaraComputeInstanceData_const_&,FNiagaraSimStageData_const_&)_[::A]::<lambda_2>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<void,_private:_void___cdecl_FNiagaraGpuComputeDispatch::DispatchStage(FRDGBuilder_&,FNiagaraGPUSystemTick_const_&,FNiagaraComputeInstanceData_const_&,FNiagaraSimStageData_const_&)_[::A]::<lambda_2>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<void,_private:_void___cdecl_FNiagaraGpuComputeDispatch::DispatchStage(FRDGBuilder_&,FNiagaraGPUSystemTick_const_&,FNiagaraComputeInstanceData_const_&,FNiagaraSimStageData_const_&)_[::A]::<lambda_2>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      goto LAB_1492e8f46;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_1492e8f46:
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
  `FNiagaraGpuComputeDispatch::DispatchStage'[::A]::<lambda_2>::operator()
            ((void *)((longlong)this + 0x180),(FRHICommandList *)param_1);
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

// Execute @ 149443370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraStatelessComputeManager::OnPostPostRender'::__l2::<lambda_3>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraStatelessComputeManager::OnPostPostRender(FRDGBuilder_&)_::_2_::<lambda_3>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraStatelessComputeManager::OnPostPostRender(FRDGBuilder_&)_::_2_::<lambda_3>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraStatelessComputeManager::OnPostPostRender(FRDGBuilder_&)_::_2_::<lambda_3>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraStatelessComputeManager::OnPostPostRender(FRDGBuilder_&)_::_2_::<lambda_3>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      goto LAB_1494434f6;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_1494434f6:
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
  `FNiagaraStatelessComputeManager::OnPostPostRender'::__l2::<lambda_3>::operator()
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

// Execute @ 1494436e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraStatelessComputeManager::OnPreRender'::__l2::<lambda_3>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraStatelessComputeManager::OnPreRender(FRDGBuilder_&)_::_2_::<lambda_3>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraStatelessComputeManager::OnPreRender(FRDGBuilder_&)_::_2_::<lambda_3>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraStatelessComputeManager::OnPreRender(FRDGBuilder_&)_::_2_::<lambda_3>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_private:_void___cdecl_FNiagaraStatelessComputeManager::OnPreRender(FRDGBuilder_&)_::_2_::<lambda_3>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      goto LAB_149443866;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_149443866:
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
  `FNiagaraStatelessComputeManager::OnPreRender'::__l2::<lambda_3>::operator()
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

