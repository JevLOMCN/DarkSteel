// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 3

// FD3D12RayTracingPipelineState @ 1459f18a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FD3D12RayTracingPipelineState * __thiscall
FD3D12RayTracingPipelineState::FD3D12RayTracingPipelineState
          (FD3D12RayTracingPipelineState *this,FD3D12Device *param_1,
          FRayTracingPipelineStateInitializer *param_2)

{
  FRHIRayTracingShader **ppFVar1;
  ulonglong uVar2;
  TAtomic<FMinimalName> TVar3;
  FRHIRayTracingPipelineState *pFVar4;
  FD3D12RayTracingShader *pFVar5;
  ID3D12StateObject *pIVar6;
  ID3D12StateObject *pIVar7;
  longlong *plVar8;
  FRayTracingPipelineStateInitializer *pFVar9;
  ID3D12StateObjectProperties *pIVar10;
  FEntry *pFVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  code *pcVar15;
  ulonglong uVar16;
  bool bVar17;
  bool bVar18;
  FD3D12Device *pFVar19;
  TRefCountPtr<ID3D12StateObjectProperties> *pTVar20;
  bool bVar21;
  bool bVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  undefined4 uVar26;
  TStatId TVar27;
  FD3D12RayTracingPipelineState *pFVar28;
  FRHIShaderBindingLayout *pFVar29;
  FD3D12RootSignature *pFVar30;
  FTaskGraphInterface *pFVar31;
  TRefCountPtr<ID3D12StateObject> TVar32;
  wchar_t *pwVar33;
  ulong64 *puVar34;
  ForElementType<FSetElementId> _Dst;
  ulonglong uVar35;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar36;
  uint uVar37;
  void *_Src;
  ulonglong uVar38;
  TArray<FD3D12RayTracingPipelineState::FShaderStats,TSizedDefaultAllocator<32>_> *pTVar39;
  FRHIShaderBindingLayout *pFVar40;
  FName FVar41;
  undefined8 *puVar42;
  FRHIRayTracingShader **ppFVar43;
  FD3D12RayTracingShaderLibrary *pFVar44;
  TArrayView<FDXILLibrary_const_*,int> *pTVar45;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *this_00;
  undefined8 *puVar46;
  longlong lVar47;
  ForAnyElementType FVar48;
  ulonglong uVar49;
  TRefCountPtr<ID3D12StateObject> *pTVar50;
  int *piVar51;
  bool bVar52;
  undefined4 uVar53;
  double dVar54;
  ulong64 uVar55;
  ulong64 uVar56;
  ulong64 uVar57;
  ulong64 uVar58;
  undefined1 auStackY_778 [32];
  ForAnyElementType in_stack_fffffffffffff8b0;
  FScriptContainerElement *pFVar59;
  undefined1 local_708;
  undefined1 local_707;
  undefined1 local_706;
  FIdentityFunctor local_705 [5];
  ForAnyElementType local_700;
  undefined8 local_6f8;
  TArrayView<FDXILLibrary_const_*,int> *local_6f0;
  int local_6e8;
  ForAnyElementType local_6e0;
  undefined8 local_6d8;
  ForAnyElementType local_6d0;
  undefined8 local_6c8;
  ForAnyElementType local_6c0;
  undefined8 local_6b8;
  ForAnyElementType local_6b0;
  undefined8 local_6a8;
  uint local_6a0;
  ForAnyElementType local_698;
  undefined8 local_690;
  TArray<FD3D12RayTracingPipelineCache::FEntry_*,TSizedDefaultAllocator<32>_> local_688;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_678;
  FRayTracingPipelineStateInitializer *local_670;
  FName local_668;
  FName local_660;
  longlong local_658;
  FD3D12RayTracingShader *local_650;
  FD3D12RayTracingShader *local_648;
  FD3D12RayTracingShader *local_640;
  undefined4 local_638;
  undefined4 local_634;
  FD3D12RayTracingShader *local_630;
  FEntry *local_628;
  FEntry *local_620;
  FEntry *local_618;
  FEntry *local_610;
  FRHIRayTracingShader **local_608;
  ulonglong uStack_600;
  wchar_t *local_5f8;
  undefined8 uStack_5f0;
  undefined4 local_5e8;
  undefined4 uStack_5e4;
  FD3D12Device *local_5e0;
  FRHIRayTracingPipelineState *local_5d8;
  TRefCountPtr<ID3D12StateObjectProperties> *local_5d0;
  TArray<FD3D12RayTracingPipelineState::FShaderStats,TSizedDefaultAllocator<32>_> *local_5c8;
  int *local_5c0;
  FColor_u_0 local_5b8 [2];
  FRHIRayTracingShader **local_5b0;
  ulonglong uStack_5a8;
  int local_5a0 [2];
  FD3D12RayTracingShaderLibrary *local_598;
  TRefCountPtr<ID3D12StateObject> *local_590;
  int *local_588;
  FName local_580;
  FD3D12RayTracingPipelineCache *local_578;
  FRHIRayTracingShader **local_570;
  ulonglong uStack_568;
  undefined4 local_560;
  undefined4 uStack_55c;
  undefined4 *puStack_558;
  undefined4 local_550;
  undefined4 uStack_54c;
  FScriptContainerElement *pFStack_548;
  FD3D12RayTracingShaderLibrary *local_540;
  FName local_538;
  undefined4 local_528;
  undefined4 uStack_524;
  uint uStack_520;
  undefined4 uStack_51c;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  TArray<FD3D12ShaderIdentifier,TSizedDefaultAllocator<32>_> *local_500;
  TArray<FD3D12ShaderIdentifier,TSizedDefaultAllocator<32>_> *local_4f8;
  LARGE_INTEGER local_4f0;
  TPairInitializer<FSHAHash_const_&,int_&&> local_4e8;
  FScriptContainerElement *local_4d8;
  int *local_4d0;
  FRHIRayTracingPipelineState *local_4c8;
  int *local_4c0;
  int *local_4b8;
  int *local_4b0;
  undefined4 local_4a8;
  LARGE_INTEGER local_4a0;
  LARGE_INTEGER local_498;
  LARGE_INTEGER local_490;
  ID3D12Device5 local_488;
  LARGE_INTEGER local_480;
  undefined4 local_478;
  undefined4 local_474;
  FScriptContainerElement *local_470;
  FString local_468;
  TArray<FD3D12ShaderIdentifier,TSizedDefaultAllocator<32>_> *local_458;
  TArray<FD3D12ShaderIdentifier,TSizedDefaultAllocator<32>_> *local_450;
  FScriptContainerElement *local_448;
  int local_440;
  TArrayView<D3D12_EXISTING_COLLECTION_DESC,int> local_438;
  TArrayView<unsigned_int,int> local_428;
  ID3D12RootSignature local_418;
  undefined4 local_410;
  undefined8 local_408;
  undefined4 local_400;
  TArrayView<wchar_t_const_*,int> local_3f8;
  longlong *local_3e8;
  int *local_3e0;
  FD3D12Device *local_3d8;
  uint local_3d0;
  ID3D12RootSignature *local_3c8;
  FD3D12RayTracingPipelineCache *local_3c0;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_3b8;
  TArray<FD3D12RayTracingPipelineCache::FEntry_*,TSizedDefaultAllocator<32>_> *local_3b0;
  FRayTracingPipelineStateInitializer *local_3a8;
  undefined4 *local_3a0;
  longlong *local_398;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *local_390;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_380;
  int local_358;
  undefined4 local_354 [3];
  TSet<TTuple<FSHAHash,int>,TDefaultMapHashableKeyFuncs<FSHAHash,int,0>,FDefaultSetAllocator>
  local_348;
  FRHIShaderBindingLayout local_2f8;
  FRHIShaderBindingLayout local_228;
  FRHIShaderBindingLayout local_158;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_778;
  local_670 = param_2;
  local_5e0 = param_1;
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_RayTracingPipelineState);
  RHIValidation::FRayTracingPipelineState::FRayTracingPipelineState
            ((FRayTracingPipelineState *)&this->_padding_,param_2);
  this_00 = &this->PipelineShaderHashes;
  this->Device = param_1;
  local_540 = &this->RayGenShaders;
  this->_padding_ = (longlong)&___7FD3D12RayTracingPipelineState__6B_;
  local_4c0 = &(this->RayGenShaders).Shaders.ArrayMax;
  (this->RayGenShaders).Identifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RayGenShaders).Identifiers.ArrayNum = 0;
  (this->RayGenShaders).Identifiers.ArrayMax = 0;
  local_450 = &(this->RayGenShaders).Identifiers;
  local_4b8 = &(this->MissShaders).Shaders.ArrayMax;
  (local_540->Shaders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RayGenShaders).Shaders.ArrayNum = 0;
  (this->RayGenShaders).Shaders.ArrayMax = 0;
  local_500 = &(this->MissShaders).Identifiers;
  (local_500->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MissShaders).Identifiers.ArrayNum = 0;
  (this->MissShaders).Identifiers.ArrayMax = 0;
  local_4b0 = &(this->HitGroupShaders).Shaders.ArrayMax;
  (this->MissShaders).Shaders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MissShaders).Shaders.ArrayNum = 0;
  (this->MissShaders).Shaders.ArrayMax = 0;
  (this->HitGroupShaders).Shaders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HitGroupShaders).Shaders.ArrayNum = 0;
  (this->HitGroupShaders).Shaders.ArrayMax = 0;
  local_458 = &(this->HitGroupShaders).Identifiers;
  (local_458->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->HitGroupShaders).Identifiers.ArrayNum = 0;
  (this->HitGroupShaders).Identifiers.ArrayMax = 0;
  local_598 = &this->CallableShaders;
  (local_598->Shaders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5c0 = &(this->CallableShaders).Shaders.ArrayMax;
  (this->CallableShaders).Shaders.ArrayNum = 0;
  (this->CallableShaders).Shaders.ArrayMax = 0;
  local_4f8 = &(this->CallableShaders).Identifiers;
  local_5d0 = &this->PipelineProperties;
  (local_4f8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->CallableShaders).Identifiers.ArrayNum = 0;
  (this->CallableShaders).Identifiers.ArrayMax = 0;
  local_590 = &this->StateObject;
  this->GlobalRootSignature = (ID3D12RootSignature *)0x0;
  (this->StateObject).Reference = (ID3D12StateObject *)0x0;
  local_5d0->Reference = (ID3D12StateObjectProperties *)0x0;
  (this->SpecializationIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpecializationIndices).ArrayNum = 0;
  (this->SpecializationIndices).ArrayMax = 0;
  (this->SpecializedStateObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpecializedStateObjects).ArrayNum = 0;
  (this->SpecializedStateObjects).ArrayMax = 0;
  this->MaxLocalRootSignatureSize = 0;
  this->MaxHitGroupViewDescriptors = 0;
  *(undefined4 *)&(this->PipelineShaderHashes).Elements.field_0x8 = 0;
  *(undefined4 *)&(this->PipelineShaderHashes).Elements.field_0xc = 0;
  *(undefined8 *)&(this->PipelineShaderHashes).Elements.field_0x20 = 0;
  *(undefined8 *)&this_00->Elements = 0;
  *(undefined4 *)&(this->PipelineShaderHashes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PipelineShaderHashes).Elements.field_0x2c = 0x80;
  local_4d0 = (int *)&(this->PipelineShaderHashes).Elements.field_0x8;
  local_4d8 = (FScriptContainerElement *)&(this->PipelineShaderHashes).Elements.field_0xc;
  *(undefined4 *)&(this->PipelineShaderHashes).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PipelineShaderHashes).Elements.field_0x34 = 0;
  local_4c8 = (FRHIRayTracingPipelineState *)&(this->PipelineShaderHashes).Elements.field_0x10;
  (this->PipelineShaderHashes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PipelineShaderHashes).HashSize = 0;
  this->PipelineStackSize = 0;
  local_5c8 = &this->ShaderStats;
  local_588 = &(this->ShaderStats).ArrayMax;
  (this->ShaderStats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderStats).ArrayNum = 0;
  (this->ShaderStats).ArrayMax = 0;
  (this->FrameCounter).LastUsedFrame = (atomic<unsigned_int>)0x0;
  local_678 = this_00;
  TVar27 = FThreadSafeStaticStatInner<FStat_STAT_RTPSO_CreatePipeline,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_RTPSO_CreatePipeline,1> *)
                      &StatPtr_STAT_RTPSO_CreatePipeline);
  bVar17 = false;
  bVar18 = false;
  local_538.ComparisonIndex.Value = 0;
  local_538.Number = 0;
  bVar21 = false;
  bVar52 = false;
  TVar3 = (TVar27.StatIdPtr)->Name;
  FVar41 = *(FName *)TVar3;
  if ((FVar41.ComparisonIndex.Value.Value == 0) && (FVar41.Number == 0)) {
LAB_1459f1b9e:
    bVar18 = bVar52;
    bVar17 = bVar21;
    bVar21 = false;
    local_668 = local_538;
    FVar41 = local_538;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_5b8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_5b8[0]._s_0,(char *)*(FName *)((longlong)TVar3 + 0x10));
      bVar17 = false;
      bVar18 = true;
      bVar21 = false;
      bVar52 = true;
      if (-1 < CpuChannel->Enabled) {
        local_580.ComparisonIndex.Value = FVar41.ComparisonIndex.Value.Value;
        local_580.Number = FVar41.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_580,(wchar_t *)*(FName *)((longlong)TVar3 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                   ,0xaa8);
        bVar17 = true;
        bVar18 = true;
        bVar21 = true;
        bVar52 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1459f1b9e;
    local_668 = FVar41;
    local_660 = FVar41;
    FThreadStats::AddMessage(FVar41,CycleScopeStart);
    bVar21 = true;
  }
  bVar52 = -1 < CpuChannel->Enabled;
  if (bVar52) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2729,"RTPSO_CreatePipeline",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
               ,0xaa9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2729);
  }
  if ((param_2->RayGenTable).ArrayNum < 1) {
    if (param_2->bPartial == false) {
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Initializer.GetRayGenTable().Num() > 0 || Initializer.bPartial",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0xaab,
                          L"Ray tracing pipelines must have at leat one ray generation shader.");
      if (bVar22) {
        pcVar15 = (code *)swi(3);
        pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
        return pFVar28;
      }
      goto LAB_1459f1c29;
    }
  }
  else {
LAB_1459f1c29:
    if (((param_2->bPartial == false) && ((param_2->HitGroupTable).ArrayNum < 1)) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Initializer.bPartial || Initializer.GetHitGroupTable().Num() > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0xaac,L"Ray tracing pipelines must have at leat one hit shader."),
       bVar22)) {
      pcVar15 = (code *)swi(3);
      pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
      return pFVar28;
    }
  }
  local_658 = 0;
  local_634 = 0;
  QueryPerformanceCounter((LARGE_INTEGER *)&local_4e8.Value);
  local_660 = (FName)-(longlong)local_4e8.Value;
  if ((*(longlong *)&param_1->field_0x10 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentAdapter != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x41,L""), bVar22)) {
    pcVar15 = (code *)swi(3);
    pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
    return pFVar28;
  }
  local_608 = (param_2->HitGroupTable).DataPtr;
  uVar35 = *(ulonglong *)&(param_2->HitGroupTable).ArrayNum;
  pFVar40 = param_2->ShaderBindingLayout;
  local_570 = (param_2->MissTable).DataPtr;
  uVar49 = *(ulonglong *)&(param_2->MissTable).ArrayNum;
  local_6f0 = *(TArrayView<FDXILLibrary_const_*,int> **)(*(longlong *)&param_1->field_0x10 + 0x30);
  local_528 = *(undefined4 *)&(param_2->RayGenTable).DataPtr;
  uStack_524 = *(undefined4 *)((longlong)&(param_2->RayGenTable).DataPtr + 4);
  uVar37 = (param_2->RayGenTable).ArrayNum;
  uStack_51c = *(undefined4 *)&(param_2->RayGenTable).field_0xc;
  local_5b0 = (param_2->CallableTable).DataPtr;
  uVar16 = *(ulonglong *)&(param_2->CallableTable).ArrayNum;
  uStack_600 = uVar35;
  uStack_5a8 = uVar16;
  uStack_568 = uVar49;
  uStack_520 = uVar37;
  if (pFVar40 == (FRHIShaderBindingLayout *)0x0) {
    memset(&local_158,0,0xd0);
    pFVar29 = FRHIShaderBindingLayout::FRHIShaderBindingLayout(&local_158);
  }
  else {
    local_228.Hash = pFVar40->Hash;
    local_228.Flags = pFVar40->Flags;
    local_228.NumUniformBufferEntries = pFVar40->NumUniformBufferEntries;
    TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>::
    TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>
              (&local_228.UniformBufferEntries,&pFVar40->UniformBufferEntries);
    pFVar29 = &local_228;
  }
  local_2f8.Hash = pFVar29->Hash;
  local_2f8.Flags = pFVar29->Flags;
  local_2f8.NumUniformBufferEntries = pFVar29->NumUniformBufferEntries;
  TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>::
  TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>
            (&local_2f8.UniformBufferEntries,&pFVar29->UniformBufferEntries);
  if (pFVar40 == (FRHIShaderBindingLayout *)0x0) {
    TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>::
    ~TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>
              (&local_158.UniformBufferEntries);
  }
  else {
    TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>::
    ~TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>
              (&local_228.UniformBufferEntries);
  }
  local_6a0 = uVar37 + (int)uVar49 + (int)uVar35 + (int)uVar16;
  if ((local_6a0 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("MaxTotalShaders >= 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0xabf,
                          L"Ray tracing pipelines are expected to contain at least one shader"),
     bVar22)) {
    pcVar15 = (code *)swi(3);
    pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
    return pFVar28;
  }
  local_578 = local_5e0->RayTracingPipelineCache;
  if ((local_578->_padding_ == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentAdapter != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x41,L""), bVar22)) {
    pcVar15 = (code *)swi(3);
    pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
    return pFVar28;
  }
  pFVar30 = FD3D12Adapter::GetGlobalRayTracingRootSignature
                      ((FD3D12Adapter *)local_578->_padding_,&local_2f8);
  this->GlobalRootSignature = (pFVar30->RootSignature).Reference;
  if (GRHIGlobals.RayTracing.SupportsPSOAdditions == false) {
    local_5d8 = (FRHIRayTracingPipelineState *)0x0;
  }
  else {
    pFVar4 = (local_670->BasePipeline).Reference;
    local_5d8 = pFVar4;
    if ((pFVar4 != (FRHIRayTracingPipelineState *)0x0) &&
       (this_00 = local_678,
       local_678 !=
       (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
       &pFVar4[3].field_0x38)) {
      local_6e8 = *(int *)&pFVar4[4].field_0x38;
      TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
      ResizeAllocation(&local_678->Hash,0,local_6e8,4);
      _Dst = (local_678->Hash).SecondaryData;
      if (local_6e8 != 0) {
        _Src = *(void **)&pFVar4[4].field_0x30;
        if (*(void **)&pFVar4[4].field_0x30 == (void *)0x0) {
          _Src = &pFVar4[4].field_0x28;
        }
        if (_Dst == (ForElementType<FSetElementId>)0x0) {
          _Dst = (ForElementType<FSetElementId>)&local_678->Hash;
        }
        memcpy((void *)_Dst,_Src,(longlong)local_6e8 << 2);
      }
      local_678->HashSize = local_6e8;
      local_6e8 = *(int *)&pFVar4[3].field_0x40;
      TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(&local_678->Elements,local_6e8);
      in_stack_fffffffffffff8b0.Data = local_4d8;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_6e8,(ForAnyElementType *)local_678,local_4d0,(int *)local_4d8);
      *(undefined4 *)&(local_678->Elements).field_0x30 = *(undefined4 *)&pFVar4[4].field_0x20;
      *(undefined4 *)&(local_678->Elements).field_0x34 = *(undefined4 *)&pFVar4[4].field_0x24;
      if (local_4c8 != pFVar4 + 4) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)local_4c8,
                   (TBitArray<FDefaultBitArrayAllocator> *)(pFVar4 + 4));
      }
      this_00 = local_678;
      if (local_6e8 != 0) {
        memcpy(*(void **)&local_678->Elements,*(void **)&pFVar4[3].field_0x38,
               (longlong)local_6e8 << 4);
      }
    }
  }
  uVar38 = (ulonglong)(int)local_6a0;
  if ((uint)(*(int *)&(this_00->Elements).field_0x8 - *(int *)&(this_00->Elements).field_0x34) <
      local_6a0) {
    if ((int)local_6a0 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum(uVar38);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_00,local_6a0);
    uVar38 = (ulonglong)local_6a0;
    if (local_6a0 < 4) {
      iVar23 = 1;
    }
    else {
      uVar2 = (ulonglong)((local_6a0 >> 1) + 7) * 2 + 1;
      lVar47 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar47 == 0; lVar47 = lVar47 + -1) {
        }
      }
      local_4a8 = (undefined4)lVar47;
      iVar23 = 1 << ((byte)lVar47 & 0x1f);
    }
    if ((this_00->HashSize != 0) && (iVar23 <= this_00->HashSize)) goto LAB_1459f26e6;
    this_00->HashSize = iVar23;
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Rehash(this_00)
    ;
    bVar22 = (int)local_6a0 < 0;
    uVar24 = local_6a0;
  }
  else {
LAB_1459f26e6:
    local_688.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_688.ArrayNum = 0;
    local_688.ArrayMax = 0;
    uVar24 = (uint)uVar38;
    if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar38 & 0xffffffff);
    }
    bVar22 = false;
  }
  local_688.ArrayNum = 0;
  local_688.ArrayMax = 0;
  local_688.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (uVar24 != 0 && !bVar22) {
    in_stack_fffffffffffff8b0.Data = (FScriptContainerElement *)&local_688.ArrayMax;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar24,&local_688.AllocatorInstance,0,(int *)in_stack_fffffffffffff8b0.Data);
    uVar24 = local_6a0;
  }
  local_354[0] = 4;
  local_380.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_358 = 0;
  if (4 < (int)uVar24) {
    in_stack_fffffffffffff8b0.Data = (FScriptContainerElement *)local_354;
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
              (8,8,uVar24,&local_380,0,(int *)in_stack_fffffffffffff8b0.Data);
  }
  local_3d8 = local_5e0;
  local_3d0 = local_2f8.Hash;
  local_6e0.Data = (FScriptContainerElement *)0x0;
  local_3c8 = this->GlobalRootSignature;
  local_3c0 = local_578;
  local_3b0 = &local_688;
  local_3a8 = local_670;
  local_3a0 = &local_634;
  local_398 = &local_658;
  local_390 = &local_380;
  local_6d8 = 0;
  local_3b8 = this_00;
  FD3D12RayTracingShaderLibrary::Reserve(local_540,uVar37);
  if ((int)uVar37 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar37);
  }
  if (local_6d8._4_4_ < (int)uVar37) {
    in_stack_fffffffffffff8b0.Data = (FScriptContainerElement *)((longlong)&local_6d8 + 4);
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar37,&local_6e0,(int)local_6d8,(int *)in_stack_fffffffffffff8b0.Data);
  }
  local_348.Elements._44_4_ = 0x80;
  local_348.Elements._0_8_ = 0;
  local_348.Elements._8_8_ = 0;
  local_348.Elements._32_8_ = 0;
  local_348.Elements._40_4_ = 0;
  local_348.Elements._48_4_ = 0xffffffff;
  local_348.Elements._52_4_ = 0;
  local_348.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_348.HashSize = 0;
  if ((local_688.ArrayNum != 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("UniqueShaderCollections.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0xb0b,
                          L"Ray generation shaders are expected to be first in the UniqueShaderCollections list."
                         ), bVar22)) {
    pcVar15 = (code *)swi(3);
    pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
    return pFVar28;
  }
  piVar51 = local_4c0;
  puVar46 = (undefined8 *)CONCAT44(uStack_524,local_528);
  puVar42 = puVar46 + (int)uVar37;
  for (; puVar46 != puVar42; puVar46 = puVar46 + 1) {
    pFVar5 = (FD3D12RayTracingShader *)*puVar46;
    if (((pFVar5->_padding_ & 1) != 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Shader->UsesGlobalUniformBuffer()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0xb10,
                            L"Global uniform buffers are not implemented for ray generation shaders"
                           ), bVar22)) {
      pcVar15 = (code *)swi(3);
      pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
      return pFVar28;
    }
    local_628 = `FD3D12RayTracingPipelineState::FD3D12RayTracingPipelineState'::__l2::<lambda_1>::
                operator()(&local_3d8,pFVar5,RayGen);
    if (((local_6e0.Data <= (FScriptContainerElement *)&local_628) &&
        ((FScriptContainerElement *)&local_628 < local_6e0.Data + (longlong)local_6d8._4_4_ * 8)) &&
       (in_stack_fffffffffffff8b0.Data = local_6e0.Data,
       bVar22 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar22)) {
      pcVar15 = (code *)swi(3);
      pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
      return pFVar28;
    }
    iVar23 = (int)local_6d8;
    if ((int)local_6d8 == local_6d8._4_4_) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_6e0,(int *)((longlong)&local_6d8 + 4));
    }
    local_6d8 = CONCAT44(local_6d8._4_4_,iVar23 + 1);
    *(FEntry **)(local_6e0.Data + (longlong)iVar23 * 8) = local_628;
    local_5a0[0] = (this->RayGenShaders).Shaders.ArrayNum;
    local_3e8 = &pFVar5->_padding_;
    local_3e0 = local_5a0;
    TSet<TTuple<FSHAHash,int>,TDefaultMapHashableKeyFuncs<FSHAHash,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FSHAHash_const_&,int_&&>_>(&local_348,&local_4e8,(bool *)&local_3e8);
    local_630 = pFVar5;
    FRHIResource::AddRef((FRHIResource *)pFVar5);
    pFVar44 = local_540;
    pFVar59 = (local_540->Shaders).AllocatorInstance.Data;
    if (((pFVar59 <= (FScriptContainerElement *)&local_630) &&
        ((FScriptContainerElement *)&local_630 < pFVar59 + (longlong)*piVar51 * 8)) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), in_stack_fffffffffffff8b0.Data = pFVar59, bVar22)) {
      pcVar15 = (code *)swi(3);
      pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
      return pFVar28;
    }
    iVar23 = (pFVar44->Shaders).ArrayNum;
    if (iVar23 == *piVar51) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)pFVar44,piVar51);
    }
    (pFVar44->Shaders).ArrayNum = iVar23 + 1;
    pFVar59 = (pFVar44->Shaders).AllocatorInstance.Data;
    *(undefined8 *)(pFVar59 + (longlong)iVar23 * 8) = 0;
    *(FD3D12RayTracingShader **)(pFVar59 + (longlong)iVar23 * 8) = local_630;
    local_630 = (FD3D12RayTracingShader *)0x0;
    FVar41 = local_668;
    uVar35 = uStack_600;
    uVar49 = uStack_568;
    uVar16 = uStack_5a8;
  }
  uVar37 = (uint)uVar49;
  local_6d0.Data = (FScriptContainerElement *)0x0;
  local_6c8 = 0;
  pFVar44 = &this->MissShaders;
  this->MaxLocalRootSignatureSize = 0;
  this->MaxHitGroupViewDescriptors = 0;
  FD3D12RayTracingShaderLibrary::Reserve(pFVar44,uVar37);
  if ((int)uVar37 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar49 & 0xffffffff);
  }
  if (local_6c8._4_4_ < (int)uVar37) {
    in_stack_fffffffffffff8b0.Data = (FScriptContainerElement *)((longlong)&local_6c8 + 4);
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar37,&local_6d0,(int)local_6c8,(int *)in_stack_fffffffffffff8b0.Data);
  }
  piVar51 = local_4b8;
  ppFVar1 = local_570 + (int)uVar37;
  for (ppFVar43 = local_570; ppFVar43 != ppFVar1; ppFVar43 = ppFVar43 + 1) {
    pFVar5 = (FD3D12RayTracingShader *)*ppFVar43;
    if ((pFVar5 == (FD3D12RayTracingShader *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0xb27,
                            L"A valid ray tracing shader must be provided for all elements in the FRayTracingPipelineStateInitializer miss shader table."
                           ), bVar22)) {
      pcVar15 = (code *)swi(3);
      pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
      return pFVar28;
    }
    if (((pFVar5->_padding_ & 1) != 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Shader->UsesGlobalUniformBuffer()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0xb28,
                            L"Global uniform buffers are not implemented for ray tracing miss shaders"
                           ), bVar22)) {
      pcVar15 = (code *)swi(3);
      pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
      return pFVar28;
    }
    uVar37 = (uint)*(byte *)((longlong)&pFVar5->_padding_ + 4) +
             (uint)*(byte *)((longlong)&pFVar5->_padding_ + 2);
    if (uVar37 < this->MaxHitGroupViewDescriptors) {
      uVar37 = this->MaxHitGroupViewDescriptors;
    }
    this->MaxHitGroupViewDescriptors = uVar37;
    uVar37 = (uint)pFVar5->LocalRootSignature->TotalRootSignatureSizeInDWORDs << 2;
    if (uVar37 < this->MaxLocalRootSignatureSize) {
      uVar37 = this->MaxLocalRootSignatureSize;
    }
    this->MaxLocalRootSignatureSize = uVar37;
    local_620 = `FD3D12RayTracingPipelineState::FD3D12RayTracingPipelineState'::__l2::<lambda_1>::
                operator()(&local_3d8,pFVar5,Miss);
    if (((local_6d0.Data <= (FScriptContainerElement *)&local_620) &&
        ((FScriptContainerElement *)&local_620 < local_6d0.Data + (longlong)local_6c8._4_4_ * 8)) &&
       (in_stack_fffffffffffff8b0.Data = local_6d0.Data,
       bVar22 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar22)) {
      pcVar15 = (code *)swi(3);
      pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
      return pFVar28;
    }
    iVar23 = (int)local_6c8;
    if ((int)local_6c8 == local_6c8._4_4_) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_6d0,(int *)((longlong)&local_6c8 + 4));
    }
    local_6c8 = CONCAT44(local_6c8._4_4_,iVar23 + 1);
    *(FEntry **)(local_6d0.Data + (longlong)iVar23 * 8) = local_620;
    local_650 = pFVar5;
    FRHIResource::AddRef((FRHIResource *)pFVar5);
    pFVar59 = (pFVar44->Shaders).AllocatorInstance.Data;
    if (((pFVar59 <= (FScriptContainerElement *)&local_650) &&
        ((FScriptContainerElement *)&local_650 < pFVar59 + (longlong)*piVar51 * 8)) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), in_stack_fffffffffffff8b0.Data = pFVar59, bVar22)) {
      pcVar15 = (code *)swi(3);
      pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
      return pFVar28;
    }
    iVar23 = (this->MissShaders).Shaders.ArrayNum;
    if (iVar23 == *piVar51) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)pFVar44,piVar51);
    }
    (this->MissShaders).Shaders.ArrayNum = iVar23 + 1;
    pFVar59 = (pFVar44->Shaders).AllocatorInstance.Data;
    *(undefined8 *)(pFVar59 + (longlong)iVar23 * 8) = 0;
    *(FD3D12RayTracingShader **)(pFVar59 + (longlong)iVar23 * 8) = local_650;
    local_650 = (FD3D12RayTracingShader *)0x0;
    FVar41 = local_668;
    uVar35 = uStack_600;
    uVar16 = uStack_5a8;
  }
  uVar37 = (uint)uVar35;
  pFVar44 = &this->HitGroupShaders;
  local_6c0.Data = (FScriptContainerElement *)0x0;
  local_6b8 = 0;
  FD3D12RayTracingShaderLibrary::Reserve(pFVar44,uVar37);
  if ((int)uVar37 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar35 & 0xffffffff);
  }
  lVar47 = 8;
  if (local_6b8._4_4_ < (int)uVar37) {
    in_stack_fffffffffffff8b0.Data = (FScriptContainerElement *)((longlong)&local_6b8 + 4);
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar37,&local_6c0,(int)local_6b8,(int *)in_stack_fffffffffffff8b0.Data);
  }
  piVar51 = local_4b0;
  ppFVar1 = local_608 + (int)uVar37;
  for (ppFVar43 = local_608; ppFVar43 != ppFVar1; ppFVar43 = ppFVar43 + 1) {
    pFVar5 = (FD3D12RayTracingShader *)*ppFVar43;
    if ((pFVar5 == (FD3D12RayTracingShader *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0xb3e,
                            L"A valid ray tracing hit group shader must be provided for all elements in the FRayTracingPipelineStateInitializer hit group table."
                           ), bVar22)) {
      pcVar15 = (code *)swi(3);
      pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
      return pFVar28;
    }
    uVar37 = (uint)*(byte *)((longlong)&pFVar5->_padding_ + 4) +
             (uint)*(byte *)((longlong)&pFVar5->_padding_ + 2);
    if (uVar37 < this->MaxHitGroupViewDescriptors) {
      uVar37 = this->MaxHitGroupViewDescriptors;
    }
    this->MaxHitGroupViewDescriptors = uVar37;
    uVar37 = (uint)pFVar5->LocalRootSignature->TotalRootSignatureSizeInDWORDs << 2;
    if (uVar37 < this->MaxLocalRootSignatureSize) {
      uVar37 = this->MaxLocalRootSignatureSize;
    }
    this->MaxLocalRootSignatureSize = uVar37;
    local_610 = `FD3D12RayTracingPipelineState::FD3D12RayTracingPipelineState'::__l2::<lambda_1>::
                operator()(&local_3d8,pFVar5,HitGroup);
    if (((local_6c0.Data <= (FScriptContainerElement *)&local_610) &&
        ((FScriptContainerElement *)&local_610 < local_6c0.Data + (longlong)local_6b8._4_4_ * 8)) &&
       (in_stack_fffffffffffff8b0.Data = local_6c0.Data,
       bVar22 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar22)) {
      pcVar15 = (code *)swi(3);
      pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
      return pFVar28;
    }
    iVar23 = (int)local_6b8;
    if ((int)local_6b8 == local_6b8._4_4_) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_6c0,(int *)((longlong)&local_6b8 + 4));
    }
    local_6b8 = CONCAT44(local_6b8._4_4_,iVar23 + 1);
    *(FEntry **)(local_6c0.Data + (longlong)iVar23 * 8) = local_610;
    local_648 = pFVar5;
    FRHIResource::AddRef((FRHIResource *)pFVar5);
    pFVar59 = (pFVar44->Shaders).AllocatorInstance.Data;
    if (((pFVar59 <= (FScriptContainerElement *)&local_648) &&
        ((FScriptContainerElement *)&local_648 < pFVar59 + (longlong)*piVar51 * 8)) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), in_stack_fffffffffffff8b0.Data = pFVar59, bVar22)) {
      pcVar15 = (code *)swi(3);
      pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
      return pFVar28;
    }
    iVar23 = (this->HitGroupShaders).Shaders.ArrayNum;
    if (iVar23 == *piVar51) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)pFVar44,piVar51);
    }
    (this->HitGroupShaders).Shaders.ArrayNum = iVar23 + 1;
    pFVar59 = (pFVar44->Shaders).AllocatorInstance.Data;
    *(undefined8 *)(pFVar59 + (longlong)iVar23 * 8) = 0;
    *(FD3D12RayTracingShader **)(pFVar59 + (longlong)iVar23 * 8) = local_648;
    local_648 = (FD3D12RayTracingShader *)0x0;
    uVar16 = uStack_5a8;
    FVar41 = local_668;
  }
  uVar37 = (uint)uVar16;
  local_6b0.Data = (FScriptContainerElement *)0x0;
  local_6a8 = 0;
  FD3D12RayTracingShaderLibrary::Reserve(local_598,uVar37);
  if ((int)uVar37 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar16 & 0xffffffff);
  }
  if (local_6a8._4_4_ < (int)uVar37) {
    in_stack_fffffffffffff8b0.Data = (FScriptContainerElement *)((longlong)&local_6a8 + 4);
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar37,&local_6b0,(int)local_6a8,(int *)in_stack_fffffffffffff8b0.Data);
  }
  pFVar44 = local_598;
  piVar51 = local_5c0;
  ppFVar1 = local_5b0 + (int)uVar37;
  pFVar9 = local_670;
  for (ppFVar43 = local_5b0; local_670 = pFVar9, ppFVar43 != ppFVar1; ppFVar43 = ppFVar43 + 1) {
    pFVar5 = (FD3D12RayTracingShader *)*ppFVar43;
    if ((pFVar5 == (FD3D12RayTracingShader *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0xb54,
                            L"A valid ray tracing shader must be provided for all elements in the FRayTracingPipelineStateInitializer callable shader table."
                           ), bVar22)) {
      pcVar15 = (code *)swi(3);
      pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
      return pFVar28;
    }
    if (((pFVar5->_padding_ & 1) != 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Shader->UsesGlobalUniformBuffer()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0xb55,
                            L"Global uniform buffers are not implemented for ray tracing callable shaders"
                           ), bVar22)) {
      pcVar15 = (code *)swi(3);
      pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
      return pFVar28;
    }
    uVar37 = (uint)*(byte *)((longlong)&pFVar5->_padding_ + 4) +
             (uint)*(byte *)((longlong)&pFVar5->_padding_ + 2);
    if (uVar37 < this->MaxHitGroupViewDescriptors) {
      uVar37 = this->MaxHitGroupViewDescriptors;
    }
    this->MaxHitGroupViewDescriptors = uVar37;
    uVar37 = (uint)pFVar5->LocalRootSignature->TotalRootSignatureSizeInDWORDs << 2;
    if (uVar37 < this->MaxLocalRootSignatureSize) {
      uVar37 = this->MaxLocalRootSignatureSize;
    }
    this->MaxLocalRootSignatureSize = uVar37;
    local_618 = `FD3D12RayTracingPipelineState::FD3D12RayTracingPipelineState'::__l2::<lambda_1>::
                operator()(&local_3d8,pFVar5,Callable);
    if (((local_6b0.Data <= (FScriptContainerElement *)&local_618) &&
        ((FScriptContainerElement *)&local_618 < local_6b0.Data + (longlong)local_6a8._4_4_ * 8)) &&
       (in_stack_fffffffffffff8b0.Data = local_6b0.Data,
       bVar22 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar22)) {
      pcVar15 = (code *)swi(3);
      pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
      return pFVar28;
    }
    iVar23 = (int)local_6a8;
    if ((int)local_6a8 == local_6a8._4_4_) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_6b0,(int *)((longlong)&local_6a8 + 4));
    }
    local_6a8 = CONCAT44(local_6a8._4_4_,iVar23 + 1);
    *(FEntry **)(local_6b0.Data + (longlong)iVar23 * 8) = local_618;
    local_640 = pFVar5;
    FRHIResource::AddRef((FRHIResource *)pFVar5);
    pFVar59 = (pFVar44->Shaders).AllocatorInstance.Data;
    if (((pFVar59 <= (FScriptContainerElement *)&local_640) &&
        ((FScriptContainerElement *)&local_640 < pFVar59 + (longlong)*piVar51 * 8)) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), in_stack_fffffffffffff8b0.Data = pFVar59, bVar22)) {
      pcVar15 = (code *)swi(3);
      pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
      return pFVar28;
    }
    iVar23 = (pFVar44->Shaders).ArrayNum;
    if (iVar23 == *piVar51) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)pFVar44,piVar51);
    }
    (pFVar44->Shaders).ArrayNum = iVar23 + 1;
    pFVar59 = (pFVar44->Shaders).AllocatorInstance.Data;
    *(undefined8 *)(pFVar59 + (longlong)iVar23 * 8) = 0;
    *(FD3D12RayTracingShader **)(pFVar59 + (longlong)iVar23 * 8) = local_640;
    local_640 = (FD3D12RayTracingShader *)0x0;
    FVar41 = local_668;
    pFVar9 = local_670;
  }
  uVar37 = this->MaxLocalRootSignatureSize;
  uVar24 = FRayTracingPipelineStateInitializer::GetMaxLocalBindingDataSize(pFVar9);
  if ((uVar24 < uVar37) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Initializer.GetMaxLocalBindingDataSize() >= MaxLocalRootSignatureSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0xb61,L""), bVar22)) {
    pcVar15 = (code *)swi(3);
    pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
    return pFVar28;
  }
  QueryPerformanceCounter(&local_4a0);
  local_658 = local_658 - (longlong)local_4a0;
  pFVar31 = FTaskGraphInterface::Get();
  (**(code **)((longlong)*pFVar31 + 0x60))(pFVar31,&local_380,0xff);
  QueryPerformanceCounter(&local_498);
  local_658 = local_658 + local_498.QuadPart;
  if (pFVar9->bPartial != false) {
    if (local_6b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b0.Data);
    }
    if (local_6c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6c0.Data);
    }
    if (local_6d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6d0.Data);
    }
    local_348.HashSize = 0;
    if (local_348.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_348.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FSHAHash,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FSHAHash,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_348.Elements);
    if (local_6e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6e0.Data);
    }
    FVar36 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_380;
    if (local_380.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar36 = local_380.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar36,local_358);
    if (local_380.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_380.SecondaryData);
    }
    if (local_688.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_688.AllocatorInstance.Data);
    }
    pFVar40 = &local_228;
    do {
      pFVar59 = pFVar40[-1].UniformBufferEntries.Elements[7].LayoutName.Data.AllocatorInstance.Data;
      pFVar40 = (FRHIShaderBindingLayout *)(pFVar40[-1].UniformBufferEntries.Elements + 7);
      lVar47 = lVar47 + -1;
      if (pFVar59 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar59);
      }
    } while (lVar47 != 0);
    goto LAB_1459f3fca;
  }
  local_698.Data = (FScriptContainerElement *)0x0;
  local_690 = 0;
  if (0 < (int)local_6a0) {
    in_stack_fffffffffffff8b0.Data = (FScriptContainerElement *)((longlong)&local_690 + 4);
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,local_6a0,&local_698,0,(int *)in_stack_fffffffffffff8b0.Data);
  }
  iVar23 = local_688.ArrayNum;
  uVar35 = (ulonglong)local_688.ArrayNum;
  pFVar59 = local_688.AllocatorInstance.Data + uVar35 * 8;
  FVar48.Data = local_688.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar35 != iVar23) {
      local_708 = 0;
      `TCheckedPointerIterator<FD3D12RayTracingPipelineCache::FEntry_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_708);
    }
    uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffff8b0.Data >> 0x20);
    if (FVar48.Data == pFVar59) break;
    lVar47 = *(longlong *)FVar48.Data;
    if (((*(char *)(lVar47 + 0x38) == '\0') &&
        ((*(longlong *)(lVar47 + 0x30) == 0 ||
         (*(char *)(*(longlong *)(lVar47 + 0x30) + 0xd0) == '\0')))) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("bDeserialized || (CompileEvent.IsValid() && CompileEvent->IsComplete())"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0x3c8,L""), bVar22)) {
      pcVar15 = (code *)swi(3);
      pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
      return pFVar28;
    }
    if (*(longlong *)(lVar47 + 0x10) == 0) {
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("StateObject",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x3c9,L"");
      if (bVar22) {
        pcVar15 = (code *)swi(3);
        pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
        return pFVar28;
      }
      if (*(longlong *)(lVar47 + 0x10) == 0) {
        UE::Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)
                   &`public:_struct_D3D12_EXISTING_COLLECTION_DESC___cdecl_FD3D12RayTracingPipelineCache::FEntry::GetCollectionDesc(void)___ptr64'
                    ::__l20::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
    }
    local_518 = *(undefined8 *)(lVar47 + 0x10);
    uStack_510 = 0;
    uStack_508 = 0;
    if (((local_698.Data <= (FScriptContainerElement *)&local_518) &&
        ((FScriptContainerElement *)&local_518 < local_698.Data + (longlong)local_690._4_4_ * 0x18))
       && (in_stack_fffffffffffff8b0.Data = local_698.Data,
          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar22)) {
      pcVar15 = (code *)swi(3);
      pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
      return pFVar28;
    }
    if ((int)local_690 == local_690._4_4_) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_698,(int *)((longlong)&local_690 + 4));
      local_690 = CONCAT44(local_690._4_4_,iVar25);
    }
    lVar47 = (longlong)(int)local_690;
    FVar48.Data = FVar48.Data + 8;
    local_690 = CONCAT44(local_690._4_4_,(int)local_690 + 1);
    *(undefined8 *)(local_698.Data + lVar47 * 0x18) = local_518;
    *(undefined8 *)(local_698.Data + lVar47 * 0x18 + 8) = uStack_510;
    *(undefined8 *)(local_698.Data + lVar47 * 0x18 + 0x10) = uStack_508;
    uVar35 = local_688._8_8_ & 0xffffffff;
  }
  QueryPerformanceCounter(&local_490);
  pTVar50 = local_590;
  iVar23 = (int)local_690;
  if ((local_5d8 == (FRHIRayTracingPipelineState *)0x0) || (GRayTracingSpecializeStateObjects != 0))
  {
    local_448 = local_698.Data;
    if (((int)local_690 < 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar22)) {
      pcVar15 = (code *)swi(3);
      pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
      return pFVar28;
    }
    pFVar9 = local_670;
    pTVar45 = local_6f0;
    local_438.DataPtr = (D3D12_EXISTING_COLLECTION_DESC *)0x0;
    local_438.ArrayNum = 0;
    local_428.DataPtr = (uint *)0x0;
    local_428.ArrayNum = 0;
    local_418 = (ID3D12RootSignature)0x0;
    local_410 = 0;
    local_408 = 0;
    local_400 = 0;
    local_3f8.DataPtr = (wchar_t **)0x0;
    local_3f8.ArrayNum = 0;
    local_440 = iVar23;
    TVar32 = CreateRayTracingStateObject
                       (&local_488,local_6f0,&local_3f8,(uint)&local_408,(uint)local_670->_padding_,
                        (TArrayView<D3D12_HIT_GROUP_DESC_const_,int> *)
                        CONCAT44(uVar26,*(undefined4 *)((longlong)&local_670->_padding_ + 4)),
                        &local_418,
                        (TArrayView<ID3D12RootSignature_*,int> *)this->GlobalRootSignature,
                        &local_428,&local_438,(D3D12_STATE_OBJECT_TYPE)&local_448);
    pTVar50 = &this->StateObject;
    if ((ID3D12StateObject *)pTVar50 != TVar32.Reference) {
      pIVar6 = pTVar50->Reference;
      pTVar50->Reference = (ID3D12StateObject *)*TVar32.Reference;
      *TVar32.Reference = (ID3D12StateObject)0x0;
      if (pIVar6 != (ID3D12StateObject *)0x0) {
        (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
      }
    }
    if (local_488 != (ID3D12Device5)0x0) {
      (**(code **)(*(longlong *)local_488 + 0x10))();
    }
    if (pTVar50->Reference == (ID3D12StateObject *)0x0) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
LAB_1459f3425:
    if ((GRayTracingSpecializeStateObjects != 0) && (1 < (local_670->RayGenTable).ArrayNum)) {
      CreateSpecializedStateObjects
                ((ID3D12Device5 *)pTVar45,this->GlobalRootSignature,(uint)local_670->_padding_,
                 *(uint *)((longlong)&pFVar9->_padding_ + 4),&this->RayGenShaders,&local_688,
                 (TMap<FSHAHash,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSHAHash,int,0>_>
                  *)&local_348,&this->SpecializedStateObjects,&this->SpecializationIndices);
    }
  }
  else {
    if ((int)local_690 != 0) {
      local_6f8._0_4_ = 0;
      uVar37 = (int)local_690 + 1;
      local_700.Data = (FScriptContainerElement *)0x0;
      local_6f8 = 0;
      if ((int)uVar37 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar37);
      }
      if (0 < (int)uVar37) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar37,&local_700,0,(int *)((longlong)&local_6f8 + 4));
      }
      puStack_558 = &local_638;
      local_638 = 4;
      local_560 = 0;
      iVar23 = (int)local_6f8;
      if ((local_700.Data <= (FScriptContainerElement *)&local_560) &&
         ((FScriptContainerElement *)&local_560 < local_700.Data + (longlong)local_6f8._4_4_ * 0x10)
         ) {
        bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar22) {
          pcVar15 = (code *)swi(3);
          pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
          return pFVar28;
        }
        iVar23 = (int)local_6f8;
      }
      if (iVar23 == local_6f8._4_4_) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_700,(int *)((longlong)&local_6f8 + 4));
      }
      local_6f8 = CONCAT44(local_6f8._4_4_,iVar23 + 1);
      *(ulonglong *)(local_700.Data + (longlong)iVar23 * 0x10) = CONCAT44(uStack_55c,local_560);
      *(undefined4 **)(local_700.Data + (longlong)iVar23 * 0x10 + 8) = puStack_558;
      iVar23 = (int)local_690;
      uVar35 = (ulonglong)(int)local_690;
      pFVar59 = local_698.Data + uVar35 * 0x18;
      FVar48.Data = local_698.Data;
      while( true ) {
        if ((int)uVar35 != iVar23) {
          local_707 = 0;
          `TCheckedPointerIterator<D3D12_EXISTING_COLLECTION_DESC,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_707);
        }
        pFVar19 = local_5e0;
        if (FVar48.Data == pFVar59) break;
        local_550 = 6;
        pFStack_548 = FVar48.Data;
        if (((local_700.Data <= (FScriptContainerElement *)&local_550) &&
            ((FScriptContainerElement *)&local_550 <
             local_700.Data + (longlong)local_6f8._4_4_ * 0x10)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar22)) {
          pcVar15 = (code *)swi(3);
          pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
          return pFVar28;
        }
        iVar25 = (int)local_6f8;
        if ((int)local_6f8 == local_6f8._4_4_) {
          iVar25 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_700,(int *)((longlong)&local_6f8 + 4));
        }
        local_6f8 = CONCAT44(local_6f8._4_4_,iVar25 + 1);
        FVar48.Data = FVar48.Data + 0x18;
        *(ulonglong *)(local_700.Data + (longlong)iVar25 * 0x10) = CONCAT44(uStack_54c,local_550);
        *(FScriptContainerElement **)(local_700.Data + (longlong)iVar25 * 0x10 + 8) = pFStack_548;
        uVar35 = local_690 & 0xffffffff;
      }
      local_474 = (int)local_6f8;
      local_478 = 3;
      local_470 = local_700.Data;
      if ((*(longlong *)&local_5e0->field_0x10 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParentAdapter != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                              ,0x41,L""), bVar22)) {
        pcVar15 = (code *)swi(3);
        pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
        return pFVar28;
      }
      pTVar50 = local_590;
      plVar8 = *(longlong **)(*(longlong *)&pFVar19->field_0x10 + 0x40);
      pIVar6 = local_590->Reference;
      pcVar15 = *(code **)(*plVar8 + 0x210);
      if (pIVar6 != (ID3D12StateObject *)0x0) {
        local_590->Reference = (ID3D12StateObject *)0x0;
        (**(code **)((longlong)*pIVar6 + 0x10))();
      }
      iVar23 = (*pcVar15)(plVar8,&local_478,*(undefined8 *)(local_5d8 + 3),
                          &_GUID_47016943_fca8_4594_93ea_af258b55346d);
      if (iVar23 < 0) {
        local_468.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_468.Data.ArrayNum = 0;
        local_468.Data.ArrayMax = 0;
        D3D12RHI::VerifyD3D12Result
                  (iVar23,
                   "Device7->AddToStateObject(&Desc, BasePipeline->StateObject.GetReference(), IID_PPV_ARGS(StateObject.GetInitReference()))"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                   ,0xb9e,(ID3D12Device *)0x0,&local_468);
      }
      pTVar45 = local_6f0;
      pFVar9 = local_670;
      if (local_700.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_700.Data);
        pTVar45 = local_6f0;
        pFVar9 = local_670;
      }
      goto LAB_1459f3425;
    }
    pIVar6 = *(ID3D12StateObject **)(local_5d8 + 3);
    pIVar7 = local_590->Reference;
    if (pIVar7 != pIVar6) {
      local_590->Reference = pIVar6;
      if (pIVar6 != (ID3D12StateObject *)0x0) {
        (**(code **)((longlong)*pIVar6 + 8))();
      }
      pTVar45 = local_6f0;
      pFVar9 = local_670;
      if (pIVar7 != (ID3D12StateObject *)0x0) {
        (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
        pTVar45 = local_6f0;
        pFVar9 = local_670;
      }
      goto LAB_1459f3425;
    }
  }
  QueryPerformanceCounter(&local_480);
  pTVar20 = local_5d0;
  local_5c0 = (int *)((longlong)local_480 - local_490.QuadPart);
  pIVar6 = pTVar50->Reference;
  uVar35 = 0;
  pIVar10 = local_5d0->Reference;
  pcVar15 = *(code **)*pIVar6;
  if (pIVar10 != (ID3D12StateObjectProperties *)0x0) {
    local_5d0->Reference = (ID3D12StateObjectProperties *)0x0;
    (**(code **)((longlong)*pIVar10 + 0x10))();
  }
  iVar23 = (*pcVar15)(pIVar6,&_GUID_de5fa827_9bf9_4f26_89ff_d7f56fde3860,pTVar20);
  if ((iVar23 < 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(((HRESULT)(QueryInterfaceResult)) >= 0)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0xbc8,
                          L"Failed to query pipeline properties from the ray tracing pipeline state object. Result=%08x"
                         ), bVar22)) {
    pcVar15 = (code *)swi(3);
    pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
    return pFVar28;
  }
  iVar23 = (int)uStack_600;
  if (((int)local_6b8 != iVar23) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("HitGroupEntries.Num() == InitializerHitGroups.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0xbcc,L""), bVar22)) {
    pcVar15 = (code *)swi(3);
    pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
    return pFVar28;
  }
  pIVar10 = pTVar20->Reference;
  TArray<FD3D12ShaderIdentifier,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (local_458,iVar23,Default);
  if (0 < (int)local_6b8) {
    local_6f0 = (TArrayView<FDXILLibrary_const_*,int> *)0x0;
    uVar49 = uVar35;
    do {
      pTVar45 = local_6f0;
      uVar24 = (uint)uVar49;
      uVar37 = 0;
      if ((int)uVar24 < (int)local_6b8) {
        uVar37 = ~uVar24 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar15 = (code *)swi(3);
        pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
        return pFVar28;
      }
      pFVar11 = *(FEntry **)(local_6c0.Data + (longlong)pTVar45);
      if (((((pFVar11->Identifier).Data[0] == 0xffffffffffffffff) &&
           ((pFVar11->Identifier).Data[1] == 0xffffffffffffffff)) &&
          ((pFVar11->Identifier).Data[2] == 0xffffffffffffffff)) &&
         ((pFVar11->Identifier).Data[3] == 0xffffffffffffffff)) {
        pwVar33 = FD3D12RayTracingPipelineCache::FEntry::GetPrimaryExportNameChars(pFVar11);
        puVar34 = (ulong64 *)(**(code **)((longlong)*pIVar10 + 0x18))(pIVar10,pwVar33);
        if ((puVar34 == (ulong64 *)0x0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("ShaderIdData",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0x2cc,
                                L"Couldn\'t find requested export in the ray tracing shader pipeline"
                               ), bVar22)) {
          pcVar15 = (code *)swi(3);
          pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
          return pFVar28;
        }
        uVar55 = *puVar34;
        uVar56 = puVar34[1];
        uVar57 = puVar34[2];
        uVar58 = puVar34[3];
        pTVar45 = local_6f0;
      }
      else {
        uVar55 = (pFVar11->Identifier).Data[0];
        uVar56 = (pFVar11->Identifier).Data[1];
        uVar57 = (pFVar11->Identifier).Data[2];
        uVar58 = (pFVar11->Identifier).Data[3];
      }
      uVar37 = 0;
      if ((int)uVar24 < (this->HitGroupShaders).Identifiers.ArrayNum) {
        uVar37 = ~uVar24 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar15 = (code *)swi(3);
        pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
        return pFVar28;
      }
      pFVar12 = (this->HitGroupShaders).Identifiers.AllocatorInstance.Data;
      local_6f0 = (TArrayView<FDXILLibrary_const_*,int> *)((longlong)pTVar45 + 8);
      uVar49 = (ulonglong)(uVar24 + 1);
      pFVar59 = pFVar12 + uVar35;
      *(ulong64 *)pFVar59 = uVar55;
      *(ulong64 *)(pFVar59 + 8) = uVar56;
      pFVar12 = pFVar12 + uVar35 + 0x10;
      *(ulong64 *)pFVar12 = uVar57;
      *(ulong64 *)(pFVar12 + 8) = uVar58;
      uVar35 = uVar35 + 0x20;
    } while ((int)(uVar24 + 1) < (int)local_6b8);
  }
  uVar35 = 0;
  TArray<FD3D12ShaderIdentifier,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (local_450,(int)local_6d8,Default);
  if (0 < (int)local_6d8) {
    local_6f0 = (TArrayView<FDXILLibrary_const_*,int> *)0x0;
    uVar49 = uVar35;
    do {
      pTVar45 = local_6f0;
      uVar24 = (uint)uVar49;
      uVar37 = 0;
      if ((int)uVar24 < (int)local_6d8) {
        uVar37 = ~uVar24 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar15 = (code *)swi(3);
        pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
        return pFVar28;
      }
      pFVar11 = *(FEntry **)(local_6e0.Data + (longlong)pTVar45);
      if (((((pFVar11->Identifier).Data[0] == 0xffffffffffffffff) &&
           ((pFVar11->Identifier).Data[1] == 0xffffffffffffffff)) &&
          ((pFVar11->Identifier).Data[2] == 0xffffffffffffffff)) &&
         ((pFVar11->Identifier).Data[3] == 0xffffffffffffffff)) {
        pwVar33 = FD3D12RayTracingPipelineCache::FEntry::GetPrimaryExportNameChars(pFVar11);
        puVar34 = (ulong64 *)(**(code **)((longlong)*pIVar10 + 0x18))(pIVar10,pwVar33);
        if ((puVar34 == (ulong64 *)0x0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("ShaderIdData",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0x2cc,
                                L"Couldn\'t find requested export in the ray tracing shader pipeline"
                               ), bVar22)) {
          pcVar15 = (code *)swi(3);
          pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
          return pFVar28;
        }
        uVar55 = *puVar34;
        uVar56 = puVar34[1];
        uVar57 = puVar34[2];
        uVar58 = puVar34[3];
        pTVar45 = local_6f0;
      }
      else {
        uVar55 = (pFVar11->Identifier).Data[0];
        uVar56 = (pFVar11->Identifier).Data[1];
        uVar57 = (pFVar11->Identifier).Data[2];
        uVar58 = (pFVar11->Identifier).Data[3];
      }
      uVar37 = 0;
      if ((int)uVar24 < (this->RayGenShaders).Identifiers.ArrayNum) {
        uVar37 = ~uVar24 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar15 = (code *)swi(3);
        pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
        return pFVar28;
      }
      pFVar12 = (this->RayGenShaders).Identifiers.AllocatorInstance.Data;
      local_6f0 = (TArrayView<FDXILLibrary_const_*,int> *)((longlong)pTVar45 + 8);
      uVar49 = (ulonglong)(uVar24 + 1);
      pFVar59 = pFVar12 + uVar35;
      *(ulong64 *)pFVar59 = uVar55;
      *(ulong64 *)(pFVar59 + 8) = uVar56;
      pFVar12 = pFVar12 + uVar35 + 0x10;
      *(ulong64 *)pFVar12 = uVar57;
      *(ulong64 *)(pFVar12 + 8) = uVar58;
      uVar35 = uVar35 + 0x20;
    } while ((int)(uVar24 + 1) < (int)local_6d8);
  }
  lVar47 = 0;
  TArray<FD3D12ShaderIdentifier,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (local_500,(int)local_6c8,Default);
  uVar37 = 0;
  if (0 < (int)local_6c8) {
    local_6f0 = (TArrayView<FDXILLibrary_const_*,int> *)0x0;
    do {
      pTVar45 = local_6f0;
      uVar24 = 0;
      if ((int)uVar37 < (int)local_6c8) {
        uVar24 = ~uVar37 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar15 = (code *)swi(3);
        pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
        return pFVar28;
      }
      pFVar11 = *(FEntry **)(local_6d0.Data + (longlong)pTVar45);
      if (((((pFVar11->Identifier).Data[0] == 0xffffffffffffffff) &&
           ((pFVar11->Identifier).Data[1] == 0xffffffffffffffff)) &&
          ((pFVar11->Identifier).Data[2] == 0xffffffffffffffff)) &&
         ((pFVar11->Identifier).Data[3] == 0xffffffffffffffff)) {
        pwVar33 = FD3D12RayTracingPipelineCache::FEntry::GetPrimaryExportNameChars(pFVar11);
        puVar34 = (ulong64 *)(**(code **)((longlong)*pIVar10 + 0x18))(pIVar10,pwVar33);
        if ((puVar34 == (ulong64 *)0x0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("ShaderIdData",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0x2cc,
                                L"Couldn\'t find requested export in the ray tracing shader pipeline"
                               ), bVar22)) {
          pcVar15 = (code *)swi(3);
          pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
          return pFVar28;
        }
        uVar55 = *puVar34;
        uVar56 = puVar34[1];
        uVar57 = puVar34[2];
        uVar58 = puVar34[3];
        pTVar45 = local_6f0;
      }
      else {
        uVar55 = (pFVar11->Identifier).Data[0];
        uVar56 = (pFVar11->Identifier).Data[1];
        uVar57 = (pFVar11->Identifier).Data[2];
        uVar58 = (pFVar11->Identifier).Data[3];
      }
      uVar24 = 0;
      if ((int)uVar37 < (this->MissShaders).Identifiers.ArrayNum) {
        uVar24 = ~uVar37 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar15 = (code *)swi(3);
        pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
        return pFVar28;
      }
      pFVar12 = (this->MissShaders).Identifiers.AllocatorInstance.Data;
      local_6f0 = (TArrayView<FDXILLibrary_const_*,int> *)((longlong)pTVar45 + 8);
      uVar37 = uVar37 + 1;
      pFVar59 = pFVar12 + lVar47;
      *(ulong64 *)pFVar59 = uVar55;
      *(ulong64 *)(pFVar59 + 8) = uVar56;
      pFVar12 = pFVar12 + lVar47 + 0x10;
      *(ulong64 *)pFVar12 = uVar57;
      *(ulong64 *)(pFVar12 + 8) = uVar58;
      lVar47 = lVar47 + 0x20;
    } while ((int)uVar37 < (int)local_6c8);
  }
  uVar35 = 0;
  TArray<FD3D12ShaderIdentifier,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (local_4f8,(int)local_6a8,Default);
  if (0 < (int)local_6a8) {
    local_6f0 = (TArrayView<FDXILLibrary_const_*,int> *)0x0;
    uVar49 = uVar35;
    do {
      pTVar45 = local_6f0;
      uVar24 = (uint)uVar49;
      uVar37 = 0;
      if ((int)uVar24 < (int)local_6a8) {
        uVar37 = ~uVar24 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar15 = (code *)swi(3);
        pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
        return pFVar28;
      }
      pFVar11 = *(FEntry **)(local_6b0.Data + (longlong)pTVar45);
      if (((((pFVar11->Identifier).Data[0] == 0xffffffffffffffff) &&
           ((pFVar11->Identifier).Data[1] == 0xffffffffffffffff)) &&
          ((pFVar11->Identifier).Data[2] == 0xffffffffffffffff)) &&
         ((pFVar11->Identifier).Data[3] == 0xffffffffffffffff)) {
        pwVar33 = FD3D12RayTracingPipelineCache::FEntry::GetPrimaryExportNameChars(pFVar11);
        puVar34 = (ulong64 *)(**(code **)((longlong)*pIVar10 + 0x18))(pIVar10,pwVar33);
        if ((puVar34 == (ulong64 *)0x0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("ShaderIdData",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0x2cc,
                                L"Couldn\'t find requested export in the ray tracing shader pipeline"
                               ), bVar22)) {
          pcVar15 = (code *)swi(3);
          pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
          return pFVar28;
        }
        uVar55 = *puVar34;
        uVar56 = puVar34[1];
        uVar57 = puVar34[2];
        uVar58 = puVar34[3];
        pTVar45 = local_6f0;
      }
      else {
        uVar55 = (pFVar11->Identifier).Data[0];
        uVar56 = (pFVar11->Identifier).Data[1];
        uVar57 = (pFVar11->Identifier).Data[2];
        uVar58 = (pFVar11->Identifier).Data[3];
      }
      uVar37 = 0;
      if ((int)uVar24 < (this->CallableShaders).Identifiers.ArrayNum) {
        uVar37 = ~uVar24 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar15 = (code *)swi(3);
        pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
        return pFVar28;
      }
      pFVar12 = (this->CallableShaders).Identifiers.AllocatorInstance.Data;
      local_6f0 = (TArrayView<FDXILLibrary_const_*,int> *)((longlong)pTVar45 + 8);
      uVar49 = (ulonglong)(uVar24 + 1);
      pFVar59 = pFVar12 + uVar35;
      *(ulong64 *)pFVar59 = uVar55;
      *(ulong64 *)(pFVar59 + 8) = uVar56;
      pFVar12 = pFVar12 + uVar35 + 0x10;
      *(ulong64 *)pFVar12 = uVar57;
      *(ulong64 *)(pFVar12 + 8) = uVar58;
      uVar35 = uVar35 + 0x20;
    } while ((int)(uVar24 + 1) < (int)local_6a8);
  }
  uVar37 = (**(code **)((longlong)*local_5d0->Reference + 0x28))();
  this->PipelineStackSize = uVar37;
  QueryPerformanceCounter(&local_4f0);
  piVar51 = local_588;
  pTVar39 = local_5c8;
  local_660 = (FName)((longlong)local_660 + local_4f0.QuadPart);
  uVar35 = local_688._8_8_ & 0xffffffff;
  if (local_688.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar35);
  }
  if (*local_588 < local_688.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,local_688.ArrayNum,&local_5c8->AllocatorInstance,local_5c8->ArrayNum,local_588
              );
    uVar35 = local_688._8_8_ & 0xffffffff;
  }
  pTVar20 = local_5d0;
  iVar23 = (int)uVar35;
  pFVar59 = local_688.AllocatorInstance.Data + (longlong)iVar23 * 8;
  FVar48.Data = local_688.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar35 != iVar23) {
      local_706 = 0;
      `TCheckedPointerIterator<FD3D12RayTracingPipelineCache::FEntry_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_706);
    }
    if (FVar48.Data == pFVar59) break;
    lVar47 = *(longlong *)FVar48.Data;
    lVar13 = *(longlong *)(lVar47 + 8);
    if (*(int *)(lVar13 + 0x160) == 0) {
      local_5f8 = L"";
    }
    else {
      local_5f8 = *(wchar_t **)(lVar13 + 0x158);
    }
    local_5e8 = *(undefined4 *)(lVar13 + 0x120);
    uStack_5f0 = (ulonglong)*(uint *)(lVar47 + 0xa8);
    if (*(char *)(lVar13 + 0x104) == '\x06') {
      pIVar10 = pTVar20->Reference;
      pcVar15 = *(code **)((longlong)*pIVar10 + 0x20);
      if ((*(int *)(lVar47 + 0x80) < 1) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar15 = (code *)swi(3);
        pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
        return pFVar28;
      }
      if (*(int *)(lVar47 + 0x48) == 0) {
        pwVar33 = L"";
      }
      else {
        pwVar33 = *(wchar_t **)(lVar47 + 0x40);
      }
      uVar26 = (*pcVar15)(pIVar10,pwVar33);
      uStack_5f0 = CONCAT44(uVar26,(undefined4)uStack_5f0);
      piVar51 = local_588;
    }
    pTVar39 = local_5c8;
    pFVar12 = (local_5c8->AllocatorInstance).Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_5f8) &&
        ((FScriptContainerElement *)&local_5f8 < pFVar12 + (longlong)*piVar51 * 0x18)) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar22)) {
      pcVar15 = (code *)swi(3);
      pFVar28 = (FD3D12RayTracingPipelineState *)(*pcVar15)();
      return pFVar28;
    }
    iVar25 = pTVar39->ArrayNum;
    if (iVar25 == *piVar51) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&pTVar39->AllocatorInstance,piVar51);
    }
    FVar48.Data = FVar48.Data + 8;
    pTVar39->ArrayNum = iVar25 + 1;
    pFVar14 = (pTVar39->AllocatorInstance).Data;
    pFVar12 = pFVar14 + (longlong)iVar25 * 0x18;
    *(wchar_t **)pFVar12 = local_5f8;
    *(ulonglong *)(pFVar12 + 8) = uStack_5f0;
    *(ulonglong *)(pFVar14 + (longlong)iVar25 * 0x18 + 0x10) = CONCAT44(uStack_5e4,local_5e8);
    uVar35 = local_688._8_8_ & 0xffffffff;
  }
  AlgoImpl::
  IntroSortInternal<FD3D12RayTracingPipelineState::FShaderStats,int,FIdentityFunctor,TDereferenceWrapper<FD3D12RayTracingPipelineState::FShaderStats,_FD3D12RayTracingPipelineState::FD3D12RayTracingPipelineState_::__l2::<lambda_3>_>_>
            ((FShaderStats *)(pTVar39->AllocatorInstance).Data,pTVar39->ArrayNum,local_705[0],
             (<lambda_3> *)local_705);
  FVar41 = local_668;
  dVar54 = (double)(ulonglong)local_660 * FGenericPlatformTime::SecondsPerCycle64 *
           __real_408f400000000000;
  if (local_670->bBackgroundCompilation == false) {
    uVar26 = SUB84(__real_408f400000000000,0);
    uVar53 = (undefined4)((ulonglong)__real_408f400000000000 >> 0x20);
  }
  else {
    uVar26 = (undefined4)__real_4024000000000000;
    uVar53 = (undefined4)((ulonglong)__real_4024000000000000 >> 0x20);
  }
  if (((double)CONCAT44(uVar53,uVar26) <= dVar54 && dVar54 != (double)CONCAT44(uVar53,uVar26)) &&
     (4 < (byte)LogD3D12RHI._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  if (local_698.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_698.Data);
  }
  if (local_6b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6b0.Data);
  }
  if (local_6c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6c0.Data);
  }
  if (local_6d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6d0.Data);
  }
  local_348.HashSize = 0;
  if (local_348.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_348.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FSHAHash,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSHAHash,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_348.Elements);
  if (local_6e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e0.Data);
  }
  FVar36 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_380;
  if (local_380.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar36 = local_380.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar36,local_358);
  if (local_380.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_380.SecondaryData);
  }
  if (local_688.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_688.AllocatorInstance.Data);
  }
  pFVar40 = &local_228;
  lVar47 = 8;
  do {
    pFVar59 = pFVar40[-1].UniformBufferEntries.Elements[7].LayoutName.Data.AllocatorInstance.Data;
    pFVar40 = (FRHIShaderBindingLayout *)(pFVar40[-1].UniformBufferEntries.Elements + 7);
    lVar47 = lVar47 + -1;
    if (pFVar59 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar59);
    }
  } while (lVar47 != 0);
LAB_1459f3fca:
  if (bVar52) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar18) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar21) {
    FThreadStats::AddMessage(FVar41,CycleScopeEnd);
  }
  return this;
}

// ~FD3D12RayTracingPipelineState @ 1459f9200

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingPipelineState::~FD3D12RayTracingPipelineState(FD3D12RayTracingPipelineState *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  ID3D12StateObjectProperties *pIVar3;
  ID3D12StateObject *pIVar4;
  
  pFVar1 = (this->ShaderStats).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->PipelineShaderHashes).HashSize = 0;
  FVar2 = (this->PipelineShaderHashes).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PipelineShaderHashes).Elements);
  DestructItems<TRefCountPtr<ID3D12StateObject>,int>
            ((TRefCountPtr<ID3D12StateObject> *)
             (this->SpecializedStateObjects).AllocatorInstance.Data,
             (this->SpecializedStateObjects).ArrayNum);
  pFVar1 = (this->SpecializedStateObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpecializationIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar3 = (this->PipelineProperties).Reference;
  if (pIVar3 != (ID3D12StateObjectProperties *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar4 = (this->StateObject).Reference;
  if (pIVar4 != (ID3D12StateObject *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pFVar1 = (this->CallableShaders).Identifiers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TRefCountPtr<FD3D12RayTracingShader>,int>
            ((TRefCountPtr<FD3D12RayTracingShader> *)
             (this->CallableShaders).Shaders.AllocatorInstance.Data,
             (this->CallableShaders).Shaders.ArrayNum);
  pFVar1 = (this->CallableShaders).Shaders.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HitGroupShaders).Identifiers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TRefCountPtr<FD3D12RayTracingShader>,int>
            ((TRefCountPtr<FD3D12RayTracingShader> *)
             (this->HitGroupShaders).Shaders.AllocatorInstance.Data,
             (this->HitGroupShaders).Shaders.ArrayNum);
  pFVar1 = (this->HitGroupShaders).Shaders.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MissShaders).Identifiers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TRefCountPtr<FD3D12RayTracingShader>,int>
            ((TRefCountPtr<FD3D12RayTracingShader> *)
             (this->MissShaders).Shaders.AllocatorInstance.Data,(this->MissShaders).Shaders.ArrayNum
            );
  pFVar1 = (this->MissShaders).Shaders.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RayGenShaders).Identifiers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TRefCountPtr<FD3D12RayTracingShader>,int>
            ((TRefCountPtr<FD3D12RayTracingShader> *)
             (this->RayGenShaders).Shaders.AllocatorInstance.Data,
             (this->RayGenShaders).Shaders.ArrayNum);
  pFVar1 = (this->RayGenShaders).Shaders.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// operator() @ 1459fa180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FEntry * __thiscall
`FD3D12RayTracingPipelineState::FD3D12RayTracingPipelineState'::__l2::<lambda_1>::operator()
          (void *this,FD3D12RayTracingShader *param_1,ECollectionType param_2)

{
  int *piVar1;
  uint *puVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FEntry *pFVar7;
  bool local_res10 [16];
  ulong64 local_res20;
  FEntry *local_38;
  longlong local_30;
  LARGE_INTEGER local_28;
  LARGE_INTEGER local_20;
  
  if (((uint)*(byte *)((longlong)&param_1->_padding_ + 4) +
       (uint)*(byte *)((longlong)&param_1->_padding_ + 3) +
       (uint)*(byte *)((longlong)&param_1->_padding_ + 2) +
       (uint)*(byte *)((longlong)&param_1->_padding_ + 1) != 0) &&
     ((int)param_1->_padding_ != *(int *)((longlong)this + 8))) {
    if (2 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8588839787656377628>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0xae4,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FEntry *)(*pcVar4)();
      return pFVar7;
    }
  }
  local_30 = param_1->_padding_;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
  Emplace<unsigned___int64_const_&>
            (*(TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> **)
              ((longlong)this + 0x20),&local_res20,(bool *)&local_30);
  local_res10[0] = false;
  QueryPerformanceCounter(&local_28);
  **(longlong **)((longlong)this + 0x40) =
       **(longlong **)((longlong)this + 0x40) - (longlong)local_28;
  puVar2 = *(uint **)((longlong)this + 0x30);
  local_38 = FD3D12RayTracingPipelineCache::GetOrCompileShader
                       (*(FD3D12RayTracingPipelineCache **)((longlong)this + 0x18),
                        *(FD3D12Device **)this,param_1,
                        *(ID3D12RootSignature **)((longlong)this + 0x10),*puVar2,puVar2[1],
                        (char)puVar2[10] == '\0',param_2,
                        *(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                          **)((longlong)this + 0x48),local_res10);
  QueryPerformanceCounter(&local_20);
  **(longlong **)((longlong)this + 0x40) =
       **(longlong **)((longlong)this + 0x40) + local_20.QuadPart;
  pFVar3 = *(ForAnyElementType **)((longlong)this + 0x28);
  if (((pFVar3->Data <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 <
       pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FEntry *)(*pcVar4)();
    return pFVar7;
  }
  iVar6 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar6 + 1;
  *(FEntry **)(pFVar3->Data + (longlong)iVar6 * 8) = local_38;
  if (local_res10[0] != false) {
    **(int **)((longlong)this + 0x38) = **(int **)((longlong)this + 0x38) + 1;
  }
  return local_38;
}

