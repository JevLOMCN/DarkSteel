// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 72

// AddPass<FHairStrandCopyPositionCS> @ 14dfe5170

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FHairStrandCopyPositionCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FHairStrandCopyPositionCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FHairStrandCopyPositionCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FHairStrandCopyPositionCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFHairStrandCopyPositionCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFHairStrandCopyPositionCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FHairStrandCopyPositionCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FHairStrandCopyPositionCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// operator() @ 14dff3510

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FHairStrandCopyPositionCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FHairStrandCopyPositionCS,FShaderMapPointerTable> *this_00;
  int iVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FRHIComputeShader *pFVar4;
  IRHIComputeContext *pIVar5;
  undefined8 *puVar6;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(ulonglong *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FHairStrandCopyPositionCS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  iVar1 = *(int *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = iVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar4 = (FRHIComputeShader *)
           TShaderRefBase<FHairStrandCopyPositionCS,FShaderMapPointerTable>::GetRHIShaderBase
                     (this_00,SF_Compute,true);
  SetComputePipelineState(param_2,pFVar4);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar4,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  if ((GRHICommandList.bLatchedBypass == false) || ((param_2->field_0x29b & 0x20) == 0)) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)param_2,0x20,8);
    *(int *)&param_2->field_0x60 = *(int *)&param_2->field_0x60 + 1;
    **(undefined8 **)&param_2->field_0x30 = puVar6;
    *(undefined8 **)&param_2->field_0x30 = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &___7FRHICommandDispatchComputeShader__6B_;
    *(int *)(puVar6 + 2) = local_38._s_0.X;
    *(int *)((longlong)puVar6 + 0x14) = local_38._s_0.Y;
    *(int *)(puVar6 + 3) = iVar1;
  }
  else {
    pIVar5 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_2);
    (**(code **)(pIVar5->_padding_ + 0x18))
              (pIVar5,local_38._0_8_ & 0xffffffff,local_38._s_0.Y,iVar1);
  }
  pFVar4 = (FRHIComputeShader *)
           TShaderRefBase<FHairStrandCopyPositionCS,FShaderMapPointerTable>::GetRHIShaderBase
                     (this_00,SF_Compute,true);
  UnsetShaderUAVs<FRHIComputeCommandList,FHairStrandCopyPositionCS>(param_2,this_00,pFVar4);
  return;
}

// AddPass<FDrawDebugCardAtlasCS> @ 14e033300

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FDrawDebugCardAtlasCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FDrawDebugCardAtlasCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FDrawDebugCardAtlasCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FDrawDebugCardAtlasCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFDrawDebugCardAtlasCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFDrawDebugCardAtlasCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FDrawDebugCardAtlasCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FDrawDebugCardAtlasCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FDrawDebugCardGuidesCS> @ 14e033560

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FDrawDebugCardGuidesCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FDrawDebugCardGuidesCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FDrawDebugCardGuidesCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FDrawDebugCardGuidesCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFDrawDebugCardGuidesCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFDrawDebugCardGuidesCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FDrawDebugCardGuidesCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FDrawDebugCardGuidesCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FDrawDebugClusterAABBCS> @ 14e0337c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FDrawDebugClusterAABBCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FDrawDebugClusterAABBCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FDrawDebugClusterAABBCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FDrawDebugClusterAABBCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFDrawDebugClusterAABBCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFDrawDebugClusterAABBCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FDrawDebugClusterAABBCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FDrawDebugClusterAABBCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FDrawDebugStrandsCVsCS> @ 14e033a20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FDrawDebugStrandsCVsCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FDrawDebugStrandsCVsCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FDrawDebugStrandsCVsCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FDrawDebugStrandsCVsCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFDrawDebugStrandsCVsCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFDrawDebugStrandsCVsCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FDrawDebugStrandsCVsCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FDrawDebugStrandsCVsCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FHairDebugPrintHairSkinCacheCS> @ 14e033c80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FHairDebugPrintHairSkinCacheCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FHairDebugPrintHairSkinCacheCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FHairDebugPrintHairSkinCacheCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FHairDebugPrintHairSkinCacheCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFHairDebugPrintHairSkinCacheCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFHairDebugPrintHairSkinCacheCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FHairDebugPrintHairSkinCacheCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FHairDebugPrintHairSkinCacheCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FHairDebugPrintInstanceCS> @ 14e033ee0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FHairDebugPrintInstanceCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FHairDebugPrintInstanceCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FHairDebugPrintInstanceCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FHairDebugPrintInstanceCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFHairDebugPrintInstanceCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFHairDebugPrintInstanceCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FHairDebugPrintInstanceCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FHairDebugPrintInstanceCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FHairDebugPrintMemoryCS> @ 14e034140

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FHairDebugPrintMemoryCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FHairDebugPrintMemoryCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FHairDebugPrintMemoryCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FHairDebugPrintMemoryCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFHairDebugPrintMemoryCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFHairDebugPrintMemoryCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FHairDebugPrintMemoryCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FHairDebugPrintMemoryCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FHairProjectionHairDebugCS> @ 14e0343a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FHairProjectionHairDebugCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FHairProjectionHairDebugCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FHairProjectionHairDebugCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FHairProjectionHairDebugCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFHairProjectionHairDebugCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFHairProjectionHairDebugCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FHairProjectionHairDebugCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FHairProjectionHairDebugCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FHairTranscodeCS> @ 14e034600

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FHairTranscodeCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FHairTranscodeCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FHairTranscodeCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FHairTranscodeCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFHairTranscodeCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFHairTranscodeCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FHairTranscodeCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FHairTranscodeCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// operator() @ 14e03f760

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FDrawDebugCardAtlasCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FDrawDebugCardAtlasCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FDrawDebugCardAtlasCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FDrawDebugCardAtlasCS,FShaderMapPointerTable> *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FDrawDebugCardAtlasCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FDrawDebugCardAtlasCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e03f8a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FDrawDebugCardGuidesCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FDrawDebugCardGuidesCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FDrawDebugCardGuidesCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FDrawDebugCardGuidesCS,FShaderMapPointerTable> *)((longlong)this + 0x10)
  ;
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FDrawDebugCardGuidesCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FDrawDebugCardGuidesCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e03f9e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FDrawDebugClusterAABBCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FDrawDebugClusterAABBCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FDrawDebugClusterAABBCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FDrawDebugClusterAABBCS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FDrawDebugClusterAABBCS,FShaderMapPointerTable>::GetComputeShader(this_00)
  ;
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FDrawDebugClusterAABBCS,FShaderMapPointerTable>::GetComputeShader(this_00)
  ;
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e03fb20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FDrawDebugStrandsCVsCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FDrawDebugStrandsCVsCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FDrawDebugStrandsCVsCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FDrawDebugStrandsCVsCS,FShaderMapPointerTable> *)((longlong)this + 0x10)
  ;
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FDrawDebugStrandsCVsCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FDrawDebugStrandsCVsCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e03fc60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FHairDebugPrintHairSkinCacheCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FHairDebugPrintHairSkinCacheCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FHairDebugPrintHairSkinCacheCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FHairDebugPrintHairSkinCacheCS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FHairDebugPrintHairSkinCacheCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FHairDebugPrintHairSkinCacheCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e03fda0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FHairDebugPrintInstanceCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FHairDebugPrintInstanceCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FHairDebugPrintInstanceCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FHairDebugPrintInstanceCS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FHairDebugPrintInstanceCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FHairDebugPrintInstanceCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e03fee0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FHairDebugPrintMemoryCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FHairDebugPrintMemoryCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FHairDebugPrintMemoryCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FHairDebugPrintMemoryCS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FHairDebugPrintMemoryCS,FShaderMapPointerTable>::GetComputeShader(this_00)
  ;
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FHairDebugPrintMemoryCS,FShaderMapPointerTable>::GetComputeShader(this_00)
  ;
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e040020

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FHairProjectionHairDebugCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FHairProjectionHairDebugCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FHairProjectionHairDebugCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FHairProjectionHairDebugCS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FHairProjectionHairDebugCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FHairProjectionHairDebugCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e040160

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FHairTranscodeCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FHairTranscodeCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FHairTranscodeCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FHairTranscodeCS,FShaderMapPointerTable> *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FHairTranscodeCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FHairTranscodeCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// AddPass<FClearAABBCS> @ 14e0703b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FClearAABBCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FClearAABBCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FClearAABBCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FClearAABBCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFClearAABBCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFClearAABBCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FClearAABBCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FClearAABBCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FDeformGuideCS> @ 14e070610

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FDeformGuideCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FDeformGuideCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FDeformGuideCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FDeformGuideCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFDeformGuideCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFDeformGuideCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FDeformGuideCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FDeformGuideCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FGroomCacheUpdatePassCS> @ 14e070870

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FGroomCacheUpdatePassCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FGroomCacheUpdatePassCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FGroomCacheUpdatePassCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FGroomCacheUpdatePassCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFGroomCacheUpdatePassCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFGroomCacheUpdatePassCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FGroomCacheUpdatePassCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FGroomCacheUpdatePassCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FHairClusterAABBCS> @ 14e070ad0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FHairClusterAABBCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FHairClusterAABBCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FHairClusterAABBCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FHairClusterAABBCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFHairClusterAABBCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFHairClusterAABBCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FHairClusterAABBCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FHairClusterAABBCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FHairClusterCullArgsCS> @ 14e070d30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FHairClusterCullArgsCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FHairClusterCullArgsCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FHairClusterCullArgsCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FHairClusterCullArgsCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFHairClusterCullArgsCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFHairClusterCullArgsCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FHairClusterCullArgsCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FHairClusterCullArgsCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FHairClusterCullCS> @ 14e070f90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FHairClusterCullCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FHairClusterCullCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FHairClusterCullCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FHairClusterCullCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFHairClusterCullCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFHairClusterCullCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FHairClusterCullCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FHairClusterCullCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FHairInitMeshSamplesCS> @ 14e0711f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FHairInitMeshSamplesCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FHairInitMeshSamplesCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FHairInitMeshSamplesCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FHairInitMeshSamplesCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFHairInitMeshSamplesCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFHairInitMeshSamplesCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FHairInitMeshSamplesCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FHairInitMeshSamplesCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FHairInterpolationCS> @ 14e071450

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FHairInterpolationCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FHairInterpolationCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FHairInterpolationCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FHairInterpolationCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFHairInterpolationCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFHairInterpolationCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FHairInterpolationCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FHairInterpolationCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FHairMeshesInterpolateCS> @ 14e0716b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FHairMeshesInterpolateCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FHairMeshesInterpolateCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FHairMeshesInterpolateCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FHairMeshesInterpolateCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFHairMeshesInterpolateCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFHairMeshesInterpolateCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FHairMeshesInterpolateCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FHairMeshesInterpolateCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FHairPatchAttributeCS> @ 14e071910

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FHairPatchAttributeCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FHairPatchAttributeCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FHairPatchAttributeCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FHairPatchAttributeCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFHairPatchAttributeCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFHairPatchAttributeCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FHairPatchAttributeCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FHairPatchAttributeCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FHairRaytracingGeometryCS> @ 14e071b70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FHairRaytracingGeometryCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FHairRaytracingGeometryCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FHairRaytracingGeometryCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FHairRaytracingGeometryCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFHairRaytracingGeometryCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFHairRaytracingGeometryCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FHairRaytracingGeometryCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FHairRaytracingGeometryCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FHairStrandTextureClearCS> @ 14e071dd0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FHairStrandTextureClearCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FHairStrandTextureClearCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FHairStrandTextureClearCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FHairStrandTextureClearCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFHairStrandTextureClearCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFHairStrandTextureClearCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FHairStrandTextureClearCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FHairStrandTextureClearCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FHairStrandTextureCopyCS> @ 14e072030

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FHairStrandTextureCopyCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FHairStrandTextureCopyCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FHairStrandTextureCopyCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FHairStrandTextureCopyCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFHairStrandTextureCopyCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFHairStrandTextureCopyCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FHairStrandTextureCopyCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FHairStrandTextureCopyCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FHairStrandTextureDilationCS> @ 14e072290

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FHairStrandTextureDilationCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FHairStrandTextureDilationCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FHairStrandTextureDilationCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FHairStrandTextureDilationCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFHairStrandTextureDilationCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFHairStrandTextureDilationCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FHairStrandTextureDilationCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FHairStrandTextureDilationCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FHairStrandsTextureCS> @ 14e0724f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FHairStrandsTextureCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FHairStrandsTextureCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FHairStrandsTextureCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FHairStrandsTextureCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFHairStrandsTextureCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFHairStrandsTextureCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FHairStrandsTextureCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FHairStrandsTextureCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FHairTangentCS> @ 14e072750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FHairTangentCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FHairTangentCS,FShaderMapPointerTable> *param_4,FParameters *param_5,
          FRDGBuffer *param_6,uint param_7,TFunction<void___cdecl(void)> *param_8)

{
  code *pcVar1;
  FRDGResource *pFVar2;
  bool bVar3;
  FRDGPass *pFVar4;
  FShaderParametersMetadata *pFVar5;
  longlong *plVar6;
  undefined1 auStackY_108 [32];
  FRDGBuffer *local_d8;
  FRDGResource *local_d0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_c8;
  initializer_list<FRDGResource_*> local_b8;
  <lambda_1> local_a8;
  longlong local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_d0 = (FRDGResource *)param_4;
  if ((param_3 - Compute & 0xfffd) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PassFlags == ERDGPassFlags::Compute || PassFlags == ERDGPassFlags::AsyncCompute"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x295,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGPass *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (((param_6->Desc).Usage & DrawIndirect) == None) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IndirectArgsBuffer->Desc.Usage & EBufferUsageFlags::DrawIndirect",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x296,L"The buffer %s was not flagged for indirect draw parameters");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGPass *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (((param_6->Desc).Usage & (VertexBuffer|ByteAddressBuffer)) == None) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(IndirectArgsBuffer->Desc.Usage, EBufferUsageFlags::VertexBuffer | EBufferUsageFlags::ByteAddressBuffer)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x1c5,
                       L"The buffer %s needs to be a vertex or byte address buffer to be used as an indirect dispatch parameters"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGPass *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (((param_6->Desc).Usage & DrawIndirect) == None) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(IndirectArgsBuffer->Desc.Usage, EBufferUsageFlags::DrawIndirect)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x1c6,
                       L"The buffer %s for indirect dispatch parameters was not flagged with BUF_DrawIndirect"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGPass *)(*pcVar1)();
      return pFVar4;
    }
  }
  ValidateIndirectArgsBuffer((param_6->Desc).NumElements * (param_6->Desc).BytesPerElement,param_7);
  local_d8 = param_6;
  pFVar5 = FHairTangentCS::FParameters::FTypeInfo::GetStructMetadata();
  local_c8.ShaderContent = (FShader *)local_d0->_padding_;
  local_c8.ShaderMap = (FShaderMapBase *)local_d0->Name;
  ValidateShaderParameters(&local_c8,pFVar5,param_5);
  pFVar2 = local_d0;
  local_b8._First = (FRDGResource **)&local_d8;
  local_b8._Last = &local_d0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)local_d0->_padding_,pFVar5,param_5,&local_b8);
  local_50 = *(longlong **)&param_8->field_0x28;
  local_a8.Parameters = (FParameters *)pFVar2->_padding_;
  local_a8.ComputeShader.ShaderContent = (FNonLocalMeanReshapeBufferCS *)pFVar2->Name;
  local_78 = *(longlong *)param_8;
  *(undefined8 *)&param_8->field_0x28 = 0;
  local_58 = *(undefined8 *)&param_8->field_0x20;
  local_a8.ParametersMetadata = (FShaderParametersMetadata *)param_5;
  local_a8.ComputeShader.ShaderMap = (FShaderMapBase *)param_6;
  local_a8.GroupCount.field0_0x0._s_0.X = param_7;
  local_68 = *(longlong *)&param_8->field_0x10;
  uStack_60 = *(undefined8 *)&param_8->field_0x18;
  if (local_78 != 0) {
    *(undefined8 *)param_8 = 0;
  }
  pFVar5 = FHairTangentCS::FParameters::FTypeInfo::GetStructMetadata();
  pFVar4 = FRDGBuilder::
           AddPassInternal<FHairTangentCS::FParameters,_FComputeShaderUtils::AddPass<FHairTangentCS>_::__l2::<lambda_1>_>
                     (param_1,param_2,pFVar5,param_5,param_3,&local_a8);
  if (local_78 != 0) {
    plVar6 = &local_68;
    if (local_50 != (longlong *)0x0) {
      plVar6 = local_50;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return pFVar4;
}

// AddPass<FHairTangentCS> @ 14e0729e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FHairTangentCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FHairTangentCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FHairTangentCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FHairTangentCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFHairTangentCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFHairTangentCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FHairTangentCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FHairTangentCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FHairUpdateMeshSamplesCS> @ 14e072c40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FHairUpdateMeshSamplesCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FHairUpdateMeshSamplesCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FHairUpdateMeshSamplesCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FHairUpdateMeshSamplesCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFHairUpdateMeshSamplesCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFHairUpdateMeshSamplesCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FHairUpdateMeshSamplesCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FHairUpdateMeshSamplesCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FHairUpdateMeshTriangleCS> @ 14e072ea0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FHairUpdateMeshTriangleCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FHairUpdateMeshTriangleCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FHairUpdateMeshTriangleCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FHairUpdateMeshTriangleCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFHairUpdateMeshTriangleCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFHairUpdateMeshTriangleCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FHairUpdateMeshTriangleCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FHairUpdateMeshTriangleCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FHairUpdatePositionOffsetCS> @ 14e073100

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FHairUpdatePositionOffsetCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FHairUpdatePositionOffsetCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FHairUpdatePositionOffsetCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FHairUpdatePositionOffsetCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFHairUpdatePositionOffsetCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFHairUpdatePositionOffsetCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FHairUpdatePositionOffsetCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FHairUpdatePositionOffsetCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FTransferVelocityPassCS> @ 14e073b30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FTransferVelocityPassCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FTransferVelocityPassCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FTransferVelocityPassCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FTransferVelocityPassCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFTransferVelocityPassCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFTransferVelocityPassCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FTransferVelocityPassCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FTransferVelocityPassCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AfterDispatch<FHairTangentCS> @ 14e0760b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
FComputeShaderUtils::Private::AfterDispatch<FHairTangentCS>
          (FRHIComputeCommandList *param_1,
          TShaderRefBase<FHairTangentCS,FShaderMapPointerTable> *param_2)

{
  FHairTangentCS *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRHIComputeShader *pFVar4;
  FRHIBatchedShaderUnbinds *pFVar5;
  
  pFVar4 = TShaderRefBase<FHairTangentCS,FShaderMapPointerTable>::GetComputeShader(param_2);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar5 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    pFVar1 = param_2->ShaderContent;
    if (*(ushort *)&pFVar1->field_0x54 != 0xffff) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar5,(FShaderParameterBindings *)pFVar1);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,pFVar4,pFVar5);
  }
  return;
}

// PrepareDispatch<FHairTangentCS> @ 14e07b8b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FComputeShaderUtils::Private::PrepareDispatch<FHairTangentCS>
          (FRHIComputeCommandList *param_1,
          TShaderRefBase<FHairTangentCS,FShaderMapPointerTable> *param_2,
          FShaderParametersMetadata *param_3,FParameters *param_4)

{
  FRHIComputeShader *pFVar1;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  pFVar1 = TShaderRefBase<FHairTangentCS,FShaderMapPointerTable>::GetComputeShader(param_2);
  SetComputePipelineState(param_1,pFVar1);
  local_18.ShaderContent = (FShader *)param_2->ShaderContent;
  local_18.ShaderMap = param_2->ShaderMap;
  ValidateShaderParameters(&local_18,param_3,param_4);
  ::SetShaderParameters
            (param_1,pFVar1,(FShaderParameterBindings *)param_2->ShaderContent,param_3,param_4);
  return;
}

// operator() @ 14e07d9e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FClearAABBCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FClearAABBCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FClearAABBCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FClearAABBCS,FShaderMapPointerTable> *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FClearAABBCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FClearAABBCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e07db20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FDeformGuideCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FDeformGuideCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FDeformGuideCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FDeformGuideCS,FShaderMapPointerTable> *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FDeformGuideCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FDeformGuideCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e07dc60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FGroomCacheUpdatePassCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FGroomCacheUpdatePassCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FGroomCacheUpdatePassCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FGroomCacheUpdatePassCS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FGroomCacheUpdatePassCS,FShaderMapPointerTable>::GetComputeShader(this_00)
  ;
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FGroomCacheUpdatePassCS,FShaderMapPointerTable>::GetComputeShader(this_00)
  ;
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e07dda0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FHairClusterAABBCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FHairClusterAABBCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FHairClusterAABBCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FHairClusterAABBCS,FShaderMapPointerTable> *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FHairClusterAABBCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FHairClusterAABBCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e07dee0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FHairClusterCullArgsCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FHairClusterCullArgsCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FHairClusterCullArgsCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FHairClusterCullArgsCS,FShaderMapPointerTable> *)((longlong)this + 0x10)
  ;
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FHairClusterCullArgsCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FHairClusterCullArgsCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e07e020

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FHairClusterCullCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FHairClusterCullCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FHairClusterCullCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FHairClusterCullCS,FShaderMapPointerTable> *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FHairClusterCullCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FHairClusterCullCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e07e160

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FHairInitMeshSamplesCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FHairInitMeshSamplesCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FHairInitMeshSamplesCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FHairInitMeshSamplesCS,FShaderMapPointerTable> *)((longlong)this + 0x10)
  ;
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FHairInitMeshSamplesCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FHairInitMeshSamplesCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e07e2a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FHairInterpolationCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FHairInterpolationCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FHairInterpolationCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FHairInterpolationCS,FShaderMapPointerTable> *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FHairInterpolationCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FHairInterpolationCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e07e3e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FHairMeshesInterpolateCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FHairMeshesInterpolateCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FHairMeshesInterpolateCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FHairMeshesInterpolateCS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FHairMeshesInterpolateCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FHairMeshesInterpolateCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e07e520

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FHairPatchAttributeCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FHairPatchAttributeCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FHairPatchAttributeCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FHairPatchAttributeCS,FShaderMapPointerTable> *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FHairPatchAttributeCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FHairPatchAttributeCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e07e660

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FHairRaytracingGeometryCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FHairRaytracingGeometryCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FHairRaytracingGeometryCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FHairRaytracingGeometryCS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FHairRaytracingGeometryCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FHairRaytracingGeometryCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e07e7a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FHairStrandTextureClearCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FHairStrandTextureClearCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FHairStrandTextureClearCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FHairStrandTextureClearCS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FHairStrandTextureClearCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FHairStrandTextureClearCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e07e8e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FHairStrandTextureCopyCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FHairStrandTextureCopyCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FHairStrandTextureCopyCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FHairStrandTextureCopyCS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FHairStrandTextureCopyCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FHairStrandTextureCopyCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e07ea20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FHairStrandTextureDilationCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FHairStrandTextureDilationCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FHairStrandTextureDilationCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FHairStrandTextureDilationCS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FHairStrandTextureDilationCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FHairStrandTextureDilationCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e07eb60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FHairStrandsTextureCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FHairStrandsTextureCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FHairStrandsTextureCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FHairStrandsTextureCS,FShaderMapPointerTable> *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FHairStrandsTextureCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FHairStrandsTextureCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e07eca0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FHairTangentCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  uint uVar1;
  code *pcVar2;
  FRDGResource *this_00;
  FRHIResource *pFVar3;
  FParameters *pFVar4;
  bool bVar5;
  undefined8 uVar6;
  FShaderParametersMetadata *pFVar7;
  IRHIComputeContext *pIVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  
  FRDGResource::MarkResourceAsUsed(*(FRDGResource **)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x30));
    pcVar2 = *(code **)((longlong)this + 0x30);
    plVar10 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar10 = *(longlong **)((longlong)this + 0x58);
    }
    uVar6 = (**(code **)(*plVar10 + 8))();
    (*pcVar2)(uVar6);
  }
  this_00 = *(FRDGResource **)((longlong)this + 0x18);
  uVar1 = *(uint *)((longlong)this + 0x20);
  if (((ulonglong)this_00[4].Name & 0x80) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Desc.Usage & EBufferUsageFlags::DrawIndirect",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                       ,0x53c,L"Buffer %s was not flagged for indirect draw usage.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FRDGResource::ValidateRHIAccess(this_00);
  pFVar3 = this_00->ResourceRHI;
  pFVar4 = *(FParameters **)this;
  FComputeShaderUtils::ValidateIndirectArgsBuffer((uint)pFVar3[9]._padding_,uVar1);
  pFVar7 = FHairTangentCS::FParameters::FTypeInfo::GetStructMetadata();
  FComputeShaderUtils::Private::PrepareDispatch<FHairTangentCS>
            (param_2,(TShaderRefBase<FHairTangentCS,FShaderMapPointerTable> *)((longlong)this + 8),
             pFVar7,pFVar4);
  if ((GRHICommandList.bLatchedBypass == false) || ((param_2->field_0x29b & 0x20) == 0)) {
    puVar9 = FMemStackBase::Alloc((FMemStackBase *)param_2,0x20,8);
    *(int *)&param_2->field_0x60 = *(int *)&param_2->field_0x60 + 1;
    **(undefined8 **)&param_2->field_0x30 = puVar9;
    *(undefined8 **)&param_2->field_0x30 = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &___7FRHICommandDispatchIndirectComputeShader__6B_;
    puVar9[2] = pFVar3;
    *(uint *)(puVar9 + 3) = uVar1;
  }
  else {
    pIVar8 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_2);
    (**(code **)(pIVar8->_padding_ + 0x30))(pIVar8,pFVar3,uVar1);
  }
  FComputeShaderUtils::Private::AfterDispatch<FHairTangentCS>
            (param_2,(TShaderRefBase<FHairTangentCS,FShaderMapPointerTable> *)((longlong)this + 8));
  return;
}

// operator() @ 14e07ee00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FHairTangentCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  uint uVar1;
  FParameters *pFVar2;
  FShaderParametersMetadata *pFVar3;
  TIntVector3<int>_u_0 local_18;
  
  local_18._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pFVar2 = *(FParameters **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_18._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_18._s_0);
  FComputeShaderUtils::Private::PrepareDispatch<FHairTangentCS>
            (param_2,(TShaderRefBase<FHairTangentCS,FShaderMapPointerTable> *)
                     ((longlong)this + 0x10),pFVar3,pFVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_18._s_0.X,local_18._s_0.Y,uVar1);
  FComputeShaderUtils::Private::AfterDispatch<FHairTangentCS>
            (param_2,(TShaderRefBase<FHairTangentCS,FShaderMapPointerTable> *)
                     ((longlong)this + 0x10));
  return;
}

// operator() @ 14e07ee90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FHairUpdateMeshSamplesCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FHairUpdateMeshSamplesCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FHairUpdateMeshSamplesCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FHairUpdateMeshSamplesCS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FHairUpdateMeshSamplesCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FHairUpdateMeshSamplesCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e07efd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FHairUpdateMeshTriangleCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FHairUpdateMeshTriangleCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FHairUpdateMeshTriangleCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FHairUpdateMeshTriangleCS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FHairUpdateMeshTriangleCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FHairUpdateMeshTriangleCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e07f110

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FHairUpdatePositionOffsetCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FHairUpdatePositionOffsetCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FHairUpdatePositionOffsetCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FHairUpdatePositionOffsetCS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FHairUpdatePositionOffsetCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FHairUpdatePositionOffsetCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e07f250

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FTransferVelocityPassCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FTransferVelocityPassCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FTransferVelocityPassCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FTransferVelocityPassCS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FTransferVelocityPassCS,FShaderMapPointerTable>::GetComputeShader(this_00)
  ;
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FTransferVelocityPassCS,FShaderMapPointerTable>::GetComputeShader(this_00)
  ;
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// AddPass<FClearPressureGridCS> @ 14e0cc1f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FClearPressureGridCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FClearPressureGridCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FClearPressureGridCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FClearPressureGridCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFClearPressureGridCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFClearPressureGridCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FClearPressureGridCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FClearPressureGridCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FClearVelocityGridCS> @ 14e0cc450

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FClearVelocityGridCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FClearVelocityGridCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FClearVelocityGridCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FClearVelocityGridCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFClearVelocityGridCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFClearVelocityGridCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FClearVelocityGridCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FClearVelocityGridCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FCopyVelocityGridCS> @ 14e0cc6b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FCopyVelocityGridCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FCopyVelocityGridCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FCopyVelocityGridCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FCopyVelocityGridCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFCopyVelocityGridCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFCopyVelocityGridCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FCopyVelocityGridCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FCopyVelocityGridCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// AddPass<FInterpolateGroomGuidesCS> @ 14e0cc910

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGPass * __cdecl
FComputeShaderUtils::AddPass<FInterpolateGroomGuidesCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FInterpolateGroomGuidesCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FInterpolateGroomGuidesCS *pFVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FRDGPass *pFVar8;
  wchar_t *pwVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  initializer_list<FRDGResource_*> local_88;
  FRDGParameterStruct local_78;
  FShaderParametersMetadata *local_60;
  FParameters *pFStack_58;
  FInterpolateGroomGuidesCS *local_50;
  FShaderMapBase *pFStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (((param_3 & (AsyncCompute|Compute)) == None) || ((param_3 & (Copy|Raster)) != None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PassFlags, ERDGPassFlags::Compute | ERDGPassFlags::AsyncCompute) && !EnumHasAnyFlags(PassFlags, ERDGPassFlags::Copy | ERDGPassFlags::Raster)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x231,L"AddPass only supports \'Compute\' or \'AsyncCompute\'.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  ValidateGroupCount(param_7);
  local_98.ShaderContent = (FShader *)param_4->ShaderContent;
  local_98.ShaderMap = param_4->ShaderMap;
  ValidateShaderParameters(&local_98,param_5,param_6);
  local_88._First = (FRDGResource **)0x0;
  local_88._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_4->ShaderContent,param_5,param_6,&local_88);
  pFVar3 = param_4->ShaderContent;
  pFVar4 = param_4->ShaderMap;
  iStack_38 = (param_7->field0_0x0)._s_0.Z;
  local_40 = *(FScriptContainerElement **)&param_7->field0_0x0;
  local_60 = param_5;
  pFStack_58 = param_6;
  local_50 = pFVar3;
  pFStack_48 = pFVar4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_6,param_5,param_2,param_3);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar9 = FRDGEventName::GetTCHAR(param_2);
  EVar6 = FRDGBuilder::OverridePassFlags(param_1,pwVar9,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_78.Contents = (uchar *)param_6;
  if ((param_5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_78.Layout.Reference = (param_5->Layout).Reference;
  if (local_78.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78.Layout.Reference);
  }
  local_78.Metadata = param_5;
  FRDGPass::FRDGPass(pFVar8,param_2,&local_78,EVar6,Async);
  pFVar8[1].ParameterStruct.Contents = (uchar *)param_6;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFInterpolateGroomGuidesCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFInterpolateGroomGuidesCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FInterpolateGroomGuidesCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FInterpolateGroomGuidesCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar8[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_40;
  pFVar8[1].Name.FormattedEventName.Data.ArrayNum = iStack_38;
  pFVar8[1].Name.FormattedEventName.Data.ArrayMax = uStack_34;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar8);
  iVar7 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar7 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar8;
  (pFVar8->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar8);
  return pFVar8;
}

// operator() @ 14e0d1720

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FClearPressureGridCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FClearPressureGridCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FClearPressureGridCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FClearPressureGridCS,FShaderMapPointerTable> *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FClearPressureGridCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FClearPressureGridCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e0d1860

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FClearVelocityGridCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FClearVelocityGridCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FClearVelocityGridCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FClearVelocityGridCS,FShaderMapPointerTable> *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FClearVelocityGridCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FClearVelocityGridCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e0d19a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FCopyVelocityGridCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FCopyVelocityGridCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FCopyVelocityGridCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FCopyVelocityGridCS,FShaderMapPointerTable> *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FCopyVelocityGridCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FCopyVelocityGridCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

// operator() @ 14e0d1ae0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FInterpolateGroomGuidesCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FInterpolateGroomGuidesCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FInterpolateGroomGuidesCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FInterpolateGroomGuidesCS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FInterpolateGroomGuidesCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FInterpolateGroomGuidesCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
  }
  return;
}

