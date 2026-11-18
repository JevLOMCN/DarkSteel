// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 9

// ConstructCompiledInstance @ 145d17a10

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShader * __cdecl
FRayTracingDispatchDescCS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  FShader *this;
  
  this = ::operator_new(0x100);
  if (this != (FShader *)0x0) {
    FShader::FShader(this,param_1);
    *(undefined4 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x4 = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x6 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayMax + 2) = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x6 = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayMax + 2) = 0;
    FShaderParameter::Bind
              ((FShaderParameter *)(this + 1),param_1->ParameterMap,L"DispatchDescInput",
               SPF_Mandatory);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x6,
               param_1->ParameterMap,L"DispatchDescSizeDwords",SPF_Mandatory);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.Parameters.ArrayMax,param_1->ParameterMap,
               L"DispatchDescDimensionsOffsetDwords",SPF_Mandatory);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2,
               param_1->ParameterMap,L"DimensionsBufferOffsetDwords",SPF_Mandatory);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)&this[1].Bindings.ResourceParameters.ArrayNum,
               param_1->ParameterMap,L"DispatchDimensions",SPF_Mandatory);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)&this[1].Bindings.ResourceParameters.ArrayMax,
               param_1->ParameterMap,L"DispatchDescOutput",SPF_Mandatory);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145d1a920

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShader * __cdecl FRayTracingDispatchDescCS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x100);
  if (this != (FShader *)0x0) {
    memset(this,0,0x100);
    FShader::FShader(this);
    this[1].Bindings.Parameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.Parameters.ArrayNum = 0;
    this[1].Bindings.Parameters.ArrayMax = 0;
    this[1].Bindings.ResourceParameters.AllocatorInstance = (ForAnyElementType)0x0;
    *(undefined2 *)&this[1].Bindings.ResourceParameters.ArrayNum = 0;
    *(undefined4 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2) = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayMax + 2) = 0;
    return this;
  }
  return (FShader *)0x0;
}

// Dispatch @ 145d1bca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
FRayTracingDispatchDescCS::Dispatch
          (FRHICommandList *param_1,void *param_2,uint param_3,uint param_4,
          FRHIShaderResourceView *param_5,uint param_6,FRHIUnorderedAccessView *param_7)

{
  int *piVar1;
  EShaderPlatform EVar2;
  ushort uVar3;
  FGlobalShaderMap *this;
  FRHIBatchedShaderParameters *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FGlobalShaderType *pFVar9;
  FGlobalShaderMapSection **ppFVar10;
  FRayTracingDispatchDescCS *pFVar11;
  FName this_00;
  FRHIComputeShader *pFVar12;
  FRHIBatchedShaderParameters *this_01;
  ushort *puVar13;
  FRHIBatchedShaderUnbinds *pFVar14;
  FRHIBatchedShaderParametersAllocator *pFVar15;
  FMemStackBase *pFVar16;
  FShaderMapBase *pFVar17;
  TArrayView<FRHIShaderParameterResource,int> *pTVar18;
  uint uVar19;
  FRHIShaderResourceView **ppFVar20;
  FRHIUnorderedAccessView **ppFVar21;
  undefined1 auStackY_178 [32];
  ushort local_148;
  ushort local_146;
  ushort local_144;
  ushort local_142;
  uint local_140;
  uint local_13c;
  uint local_138 [2];
  TShaderRefBase<FRayTracingDispatchDescCS,FShaderMapPointerTable> local_130;
  FRHIShaderResourceView *local_118;
  FRHIShaderResourceView *local_110;
  FRHIUnorderedAccessView *local_108;
  FRHIUnorderedAccessView *local_100;
  undefined1 local_f8 [8];
  FString local_f0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_178;
  uVar19 = param_3 >> 2;
  local_13c = param_4 >> 2;
  local_140 = uVar19;
  if (((param_6 & 3) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DimensionsBufferOffset % 4 == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\BuiltInRayTracingShaders.cpp"
                         ,0x38,L"Dispatch dimensions buffer offset must be DWORD-aligned"), bVar7))
  {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_138[0] = param_6 >> 2;
  if ((0x20 < uVar19) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DispatchDescSizeDwords <= DispatchDescMaxSizeDwords",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\BuiltInRayTracingShaders.cpp"
                         ,0x3b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  EVar2 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel];
  if ((GGlobalShaderMap[EVar2] == (FGlobalShaderMap *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GGlobalShaderMap[Platform]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalShader.cpp"
                         ,0x21e,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this = GGlobalShaderMap[EVar2];
  pFVar9 = GetStaticType();
  ppFVar10 = TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
             ::Find((TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
                     *)this,(FHashedName *)&pFVar9->field_0x30);
  if (ppFVar10 == (FGlobalShaderMapSection **)0x0) {
    pFVar11 = (FRayTracingDispatchDescCS *)0x0;
  }
  else {
    pFVar17 = (FShaderMapBase *)*ppFVar10;
    pFVar11 = (FRayTracingDispatchDescCS *)
              FShaderMapContent::GetShader
                        ((pFVar17->Content).Object,(FHashedName *)&pFVar9->field_0x28,0);
    if (pFVar11 != (FRayTracingDispatchDescCS *)0x0) goto LAB_145d1be4b;
  }
  pFVar17 = (FShaderMapBase *)0x0;
  this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_f8);
  ::FName::ToString((FName *)this_00,&local_f0);
  GetStaticType();
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Shader.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                     ,0xc0,L"Failed to find shader type %s in Platform %s");
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_145d1be4b:
  GetStaticType();
  local_130.ShaderContent = pFVar11;
  local_130.ShaderMap = pFVar17;
  pFVar12 = TShaderRefBase<FRayTracingDispatchDescCS,FShaderMapPointerTable>::GetComputeShader
                      (&local_130);
  SetComputePipelineState((FRHIComputeCommandList *)param_1,pFVar12);
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  memcpy(&local_d8,param_2,(ulonglong)param_3);
  this_01 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  uVar3 = (pFVar11->DispatchDescInputParam).NumBytes;
  uVar19 = (uint)uVar3;
  if (0x80 < uVar3) {
    uVar19 = 0x80;
  }
  if (uVar19 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_01,(uint)(pFVar11->DispatchDescInputParam).BufferIndex,
               (uint)(pFVar11->DispatchDescInputParam).BaseIndex,uVar19,&local_d8);
  }
  uVar3 = (pFVar11->DispatchDescSizeDwordsParam).NumBytes;
  uVar19 = (uint)uVar3;
  if (4 < uVar3) {
    uVar19 = 4;
  }
  if (uVar19 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_01,(uint)(pFVar11->DispatchDescSizeDwordsParam).BufferIndex,
               (uint)(pFVar11->DispatchDescSizeDwordsParam).BaseIndex,uVar19,&local_140);
  }
  uVar3 = (pFVar11->DispatchDescDimensionsOffsetDwordsParam).NumBytes;
  uVar19 = (uint)uVar3;
  if (4 < uVar3) {
    uVar19 = 4;
  }
  if (uVar19 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_01,(uint)(pFVar11->DispatchDescDimensionsOffsetDwordsParam).BufferIndex,
               (uint)(pFVar11->DispatchDescDimensionsOffsetDwordsParam).BaseIndex,uVar19,&local_13c)
    ;
  }
  uVar3 = (pFVar11->DimensionsBufferOffsetDwordsParam).NumBytes;
  uVar19 = (uint)uVar3;
  if (4 < uVar3) {
    uVar19 = 4;
  }
  if (uVar19 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_01,(uint)(pFVar11->DimensionsBufferOffsetDwordsParam).BufferIndex,
               (uint)(pFVar11->DimensionsBufferOffsetDwordsParam).BaseIndex,uVar19,local_138);
  }
  if ((pFVar11->DispatchDimensionsParam).NumResources != '\0') {
    pFVar15 = this_01->Allocator;
    uVar3 = (pFVar11->DispatchDimensionsParam).BaseIndex;
    pFVar4 = pFVar15->AttachedParameters;
    if ((pFVar11->DispatchDimensionsParam).Type == BindlessSRV) {
      local_118 = param_5;
      local_148 = uVar3;
      if (pFVar4 != this_01) {
        if ((pFVar4 != (FRHIBatchedShaderParameters *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!AttachedParameters",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                               ,0x82,
                               L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar15->AttachedParameters = this_01;
      }
      pFVar15 = this_01->Allocator;
      pTVar18 = &this_01->BindlessParameters;
      puVar13 = &local_148;
      ppFVar20 = &local_118;
      pFVar16 = &pFVar15->BindlessParameters;
    }
    else {
      local_110 = param_5;
      local_146 = uVar3;
      if (pFVar4 != this_01) {
        if ((pFVar4 != (FRHIBatchedShaderParameters *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!AttachedParameters",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                               ,0x82,
                               L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar15->AttachedParameters = this_01;
      }
      pFVar15 = this_01->Allocator;
      pTVar18 = &this_01->ResourceParameters;
      puVar13 = &local_146;
      ppFVar20 = &local_110;
      pFVar16 = &pFVar15->ResourceParameters;
    }
    FRHIBatchedShaderParametersAllocator::
    Emplace<FRHIShaderParameterResource,FRHIShaderResourceView_*_&,unsigned_short_&>
              (pFVar15,pFVar16,pTVar18,ppFVar20,puVar13);
  }
  if (((local_130.ShaderContent)->DispatchDescOutputParam).NumResources != '\0') {
    pFVar15 = this_01->Allocator;
    uVar3 = ((local_130.ShaderContent)->DispatchDescOutputParam).BaseIndex;
    pFVar4 = pFVar15->AttachedParameters;
    if (((local_130.ShaderContent)->DispatchDescOutputParam).Type == BindlessUAV) {
      local_108 = param_7;
      local_144 = uVar3;
      if (pFVar4 != this_01) {
        if ((pFVar4 != (FRHIBatchedShaderParameters *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!AttachedParameters",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                               ,0x82,
                               L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar15->AttachedParameters = this_01;
      }
      pFVar15 = this_01->Allocator;
      pTVar18 = &this_01->BindlessParameters;
      puVar13 = &local_144;
      ppFVar21 = &local_108;
      pFVar16 = &pFVar15->BindlessParameters;
    }
    else {
      local_100 = param_7;
      local_142 = uVar3;
      if (pFVar4 != this_01) {
        if ((pFVar4 != (FRHIBatchedShaderParameters *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!AttachedParameters",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                               ,0x82,
                               L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar15->AttachedParameters = this_01;
      }
      pFVar15 = this_01->Allocator;
      pTVar18 = &this_01->ResourceParameters;
      puVar13 = &local_142;
      ppFVar21 = &local_100;
      pFVar16 = &pFVar15->ResourceParameters;
    }
    FRHIBatchedShaderParametersAllocator::
    Emplace<FRHIShaderParameterResource,FRHIUnorderedAccessView_*_&,unsigned_short_&>
              (pFVar15,pFVar16,pTVar18,ppFVar21,puVar13);
  }
  pFVar12 = TShaderRefBase<FRayTracingDispatchDescCS,FShaderMapPointerTable>::GetComputeShader
                      (&local_130);
  FRHIComputeCommandList::SetBatchedShaderParameters
            ((FRHIComputeCommandList *)param_1,pFVar12,this_01);
  FRHIComputeCommandList::DispatchComputeShader((FRHIComputeCommandList *)param_1,1,1,1);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar14 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    if ((((local_130.ShaderContent)->DispatchDimensionsParam).NumResources != '\0') &&
       (((local_130.ShaderContent)->DispatchDimensionsParam).Type != BindlessSRV)) {
      uVar3 = ((local_130.ShaderContent)->DispatchDimensionsParam).BaseIndex;
      piVar1 = &(pFVar14->Unbinds).ArrayMax;
      iVar8 = (pFVar14->Unbinds).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,(ForAnyElementType *)pFVar14,piVar1);
      }
      (pFVar14->Unbinds).ArrayNum = iVar8 + 1;
      pFVar5 = (pFVar14->Unbinds).AllocatorInstance.Data;
      *(ushort *)(pFVar5 + (longlong)iVar8 * 4) = uVar3;
      pFVar5[(longlong)iVar8 * 4 + 2] = (FScriptContainerElement)0x0;
    }
    if ((((local_130.ShaderContent)->DispatchDescOutputParam).NumResources != '\0') &&
       (((local_130.ShaderContent)->DispatchDescOutputParam).Type != BindlessSRV)) {
      uVar3 = ((local_130.ShaderContent)->DispatchDescOutputParam).BaseIndex;
      piVar1 = &(pFVar14->Unbinds).ArrayMax;
      iVar8 = (pFVar14->Unbinds).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,(ForAnyElementType *)pFVar14,piVar1);
      }
      (pFVar14->Unbinds).ArrayNum = iVar8 + 1;
      pFVar5 = (pFVar14->Unbinds).AllocatorInstance.Data;
      *(ushort *)(pFVar5 + (longlong)iVar8 * 4) = uVar3;
      pFVar5[(longlong)iVar8 * 4 + 2] = (FScriptContainerElement)0x1;
    }
    pFVar12 = TShaderRefBase<FRayTracingDispatchDescCS,FShaderMapPointerTable>::GetComputeShader
                        (&local_130);
    FRHIComputeCommandList::SetBatchedShaderUnbinds
              ((FRHIComputeCommandList *)param_1,pFVar12,pFVar14);
  }
  return;
}

// GetStaticType @ 145d3b150

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FGlobalShaderType * __cdecl FRayTracingDispatchDescCS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FRayTracingDispatchDescCS",
                 L"/Engine/Private/RayTracing/RayTracingDispatchDesc.usf",
                 L"RayTracingDispatchDescCS",5,1,ConstructSerializedInstance,
                 ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x100,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/RayTracing/RayTracingDispatchDesc.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`FRayTracingDispatchDescCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 145d40ed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FRayTracingDispatchDescCS::GetTypeLayout(FRayTracingDispatchDescCS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\0';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FRayTracingDisp;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FRayTracingDispatchDescCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FRayTracingDispatchDescCS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DispatchDescOutputParam";
    DAT_15517b7da = Freeze::FindFieldNameLength(L"DispatchDescOutputParam");
    _DAT_15517b7b8 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15517b7c0 = ::TypeBuffer[0x10];
    DAT_15517b7c0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517b7c0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517b7c0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517b7c0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517b7c0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517b7c0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517b7c0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingDispatchDescCS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517b7c8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517b7d0 = 0xfc;
    _DAT_15517b7d4 = 1;
    _DAT_15517b7d8 = 0;
    `public:_static_void___cdecl_FRayTracingDispatchDescCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DispatchDimensionsParam";
    DAT_15517b7aa = Freeze::FindFieldNameLength(L"DispatchDimensionsParam");
    _DAT_15517b788 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15517b790 = ::TypeBuffer[0x10];
    DAT_15517b790_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517b790_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517b790_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517b790_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517b790_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517b790_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517b790_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingDispatchDescCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517b798 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517b7a0 = 0xf8;
    _DAT_15517b7a4 = 1;
    _DAT_15517b7a8 = 0;
    `public:_static_void___cdecl_FRayTracingDispatchDescCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DimensionsBufferOffsetDwordsParam";
    DAT_15517b77a = Freeze::FindFieldNameLength(L"DimensionsBufferOffsetDwordsParam");
    _DAT_15517b758 = FShaderParameter::StaticGetTypeLayout();
    DAT_15517b760 = ::TypeBuffer[0x10];
    DAT_15517b760_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517b760_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517b760_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517b760_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517b760_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517b760_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517b760_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingDispatchDescCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517b768 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517b770 = 0xf2;
    _DAT_15517b774 = 1;
    _DAT_15517b778 = 0;
    `public:_static_void___cdecl_FRayTracingDispatchDescCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DispatchDescDimensionsOffsetDwordsParam";
    DAT_15517b74a = Freeze::FindFieldNameLength(L"DispatchDescDimensionsOffsetDwordsParam");
    _DAT_15517b728 = FShaderParameter::StaticGetTypeLayout();
    DAT_15517b730 = ::TypeBuffer[0x10];
    DAT_15517b730_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517b730_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517b730_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517b730_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517b730_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517b730_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517b730_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingDispatchDescCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517b738 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517b740 = 0xec;
    _DAT_15517b744 = 1;
    _DAT_15517b748 = 0;
    `public:_static_void___cdecl_FRayTracingDispatchDescCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DispatchDescSizeDwordsParam";
    DAT_15517b71a = Freeze::FindFieldNameLength(L"DispatchDescSizeDwordsParam");
    _DAT_15517b6f8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15517b700 = ::TypeBuffer[0x10];
    DAT_15517b700_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517b700_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517b700_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517b700_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517b700_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517b700_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517b700_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingDispatchDescCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517b708 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517b710 = 0xe6;
    _DAT_15517b714 = 1;
    _DAT_15517b718 = 0;
    `public:_static_void___cdecl_FRayTracingDispatchDescCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DispatchDescInputParam";
    DAT_15517b6ea = Freeze::FindFieldNameLength(L"DispatchDescInputParam");
    _DAT_15517b6c8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15517b6d0 = ::TypeBuffer[0x10];
    DAT_15517b6d0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517b6d0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517b6d0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517b6d0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517b6d0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517b6d0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517b6d0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingDispatchDescCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15517b6d8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517b6e0 = 0xe0;
    _DAT_15517b6e4 = 1;
    _DAT_15517b6e8 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 145d43c70

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FRayTracingDispatchDescCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x100);
  return;
}

// ShouldCompilePermutationImpl @ 145d4fe20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FRayTracingDispatchDescCS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  bool bVar1;
  
  bVar1 = ShouldCompileRayTracingShadersForProject(param_1->Platform);
  return bVar1;
}

// ShouldPrecachePermutationImpl @ 145d507c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FRayTracingDispatchDescCS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 145d5e000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FRayTracingDispatchDescCS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\0';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FRayTracingDisp;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FRayTracingDispatchDescCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FRayTracingDispatchDescCS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DispatchDescOutputParam";
    DAT_15517b7da = Freeze::FindFieldNameLength(L"DispatchDescOutputParam");
    _DAT_15517b7b8 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15517b7c0 = ::TypeBuffer[0x10];
    DAT_15517b7c0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517b7c0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517b7c0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517b7c0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517b7c0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517b7c0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517b7c0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingDispatchDescCS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517b7c8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517b7d0 = 0xfc;
    _DAT_15517b7d4 = 1;
    _DAT_15517b7d8 = 0;
    `public:_static_void___cdecl_FRayTracingDispatchDescCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DispatchDimensionsParam";
    DAT_15517b7aa = Freeze::FindFieldNameLength(L"DispatchDimensionsParam");
    _DAT_15517b788 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15517b790 = ::TypeBuffer[0x10];
    DAT_15517b790_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517b790_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517b790_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517b790_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517b790_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517b790_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517b790_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingDispatchDescCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517b798 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517b7a0 = 0xf8;
    _DAT_15517b7a4 = 1;
    _DAT_15517b7a8 = 0;
    `public:_static_void___cdecl_FRayTracingDispatchDescCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DimensionsBufferOffsetDwordsParam";
    DAT_15517b77a = Freeze::FindFieldNameLength(L"DimensionsBufferOffsetDwordsParam");
    _DAT_15517b758 = FShaderParameter::StaticGetTypeLayout();
    DAT_15517b760 = ::TypeBuffer[0x10];
    DAT_15517b760_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517b760_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517b760_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517b760_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517b760_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517b760_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517b760_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingDispatchDescCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517b768 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517b770 = 0xf2;
    _DAT_15517b774 = 1;
    _DAT_15517b778 = 0;
    `public:_static_void___cdecl_FRayTracingDispatchDescCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DispatchDescDimensionsOffsetDwordsParam";
    DAT_15517b74a = Freeze::FindFieldNameLength(L"DispatchDescDimensionsOffsetDwordsParam");
    _DAT_15517b728 = FShaderParameter::StaticGetTypeLayout();
    DAT_15517b730 = ::TypeBuffer[0x10];
    DAT_15517b730_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517b730_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517b730_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517b730_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517b730_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517b730_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517b730_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingDispatchDescCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517b738 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517b740 = 0xec;
    _DAT_15517b744 = 1;
    _DAT_15517b748 = 0;
    `public:_static_void___cdecl_FRayTracingDispatchDescCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DispatchDescSizeDwordsParam";
    DAT_15517b71a = Freeze::FindFieldNameLength(L"DispatchDescSizeDwordsParam");
    _DAT_15517b6f8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15517b700 = ::TypeBuffer[0x10];
    DAT_15517b700_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517b700_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517b700_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517b700_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517b700_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517b700_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517b700_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingDispatchDescCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517b708 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517b710 = 0xe6;
    _DAT_15517b714 = 1;
    _DAT_15517b718 = 0;
    `public:_static_void___cdecl_FRayTracingDispatchDescCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DispatchDescInputParam";
    DAT_15517b6ea = Freeze::FindFieldNameLength(L"DispatchDescInputParam");
    _DAT_15517b6c8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15517b6d0 = ::TypeBuffer[0x10];
    DAT_15517b6d0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517b6d0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517b6d0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517b6d0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517b6d0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517b6d0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517b6d0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingDispatchDescCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15517b6d8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517b6e0 = 0xe0;
    _DAT_15517b6e4 = 1;
    _DAT_15517b6e8 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

