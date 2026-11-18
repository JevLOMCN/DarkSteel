// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 25

// AddPass<FUploadHeightFieldToAtlasCS> @ 147aab430

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
FComputeShaderUtils::AddPass<FUploadHeightFieldToAtlasCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FUploadHeightFieldToAtlasCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FUploadHeightFieldToAtlasCS *pFVar3;
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
  FUploadHeightFieldToAtlasCS *local_50;
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFUploadHeightFieldToAtlasCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFUploadHeightFieldToAtlasCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FUploadHeightFieldToAtlasCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FUploadHeightFieldToAtlasCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
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

// AddPass<FUploadVisibilityToAtlasCS> @ 147aab690

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
FComputeShaderUtils::AddPass<FUploadVisibilityToAtlasCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FUploadVisibilityToAtlasCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FUploadVisibilityToAtlasCS *pFVar3;
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
  FUploadVisibilityToAtlasCS *local_50;
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFUploadVisibilityToAtlasCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFUploadVisibilityToAtlasCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FUploadVisibilityToAtlasCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FUploadVisibilityToAtlasCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
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

// operator() @ 147ac1250

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
`FComputeShaderUtils::AddPass<FUploadHeightFieldToAtlasCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FUploadHeightFieldToAtlasCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FUploadHeightFieldToAtlasCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FUploadHeightFieldToAtlasCS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FUploadHeightFieldToAtlasCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FUploadHeightFieldToAtlasCS,FShaderMapPointerTable>::GetComputeShader
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

// operator() @ 147ac1390

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
`FComputeShaderUtils::AddPass<FUploadVisibilityToAtlasCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FUploadVisibilityToAtlasCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FUploadVisibilityToAtlasCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FUploadVisibilityToAtlasCS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FUploadVisibilityToAtlasCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FUploadVisibilityToAtlasCS,FShaderMapPointerTable>::GetComputeShader
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

// AddPass<Nanite::FClearStreamingRequestCount_CS> @ 147f92e30

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
FComputeShaderUtils::AddPass<Nanite::FClearStreamingRequestCount_CS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<Nanite::FClearStreamingRequestCount_CS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FClearStreamingRequestCount_CS *pFVar3;
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
  FClearStreamingRequestCount_CS *local_50;
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFClearStreamingRequestCount_CS_Nanite___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFClearStreamingRequestCount_CS_Nanite__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FClearStreamingRequestCount_CS_Nanite__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FClearStreamingRequestCount_CS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
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

// AddPass<Nanite::FScatterUpdates_CS> @ 147f93340

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
FComputeShaderUtils::AddPass<Nanite::FScatterUpdates_CS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<Nanite::FScatterUpdates_CS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FScatterUpdates_CS *pFVar3;
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
  FScatterUpdates_CS *local_50;
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFScatterUpdates_CS_Nanite___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFScatterUpdates_CS_Nanite__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FScatterUpdates_CS_Nanite__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FScatterUpdates_CS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
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

// AddPass<Nanite::FTranscodePageToGPU_CS> @ 147f935a0

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
FComputeShaderUtils::AddPass<Nanite::FTranscodePageToGPU_CS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<Nanite::FTranscodePageToGPU_CS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FTranscodePageToGPU_CS *pFVar3;
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
  FTranscodePageToGPU_CS *local_50;
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFTranscodePageToGPU_CS_Nanite___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFTranscodePageToGPU_CS_Nanite__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FTranscodePageToGPU_CS_Nanite__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FTranscodePageToGPU_CS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
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

// operator() @ 147fad6a0

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
`FComputeShaderUtils::AddPass<Nanite::FClearStreamingRequestCount_CS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<Nanite::FClearStreamingRequestCount_CS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FClearStreamingRequestCount_CS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<Nanite::FClearStreamingRequestCount_CS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<Nanite::FClearStreamingRequestCount_CS,FShaderMapPointerTable>::
           GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<Nanite::FClearStreamingRequestCount_CS,FShaderMapPointerTable>::
           GetComputeShader(this_00);
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

// operator() @ 147fad7e0

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
`FComputeShaderUtils::AddPass<Nanite::FScatterUpdates_CS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<Nanite::FScatterUpdates_CS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FScatterUpdates_CS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<Nanite::FScatterUpdates_CS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<Nanite::FScatterUpdates_CS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<Nanite::FScatterUpdates_CS,FShaderMapPointerTable>::GetComputeShader
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

// operator() @ 147fad920

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
`FComputeShaderUtils::AddPass<Nanite::FTranscodePageToGPU_CS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<Nanite::FTranscodePageToGPU_CS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FTranscodePageToGPU_CS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<Nanite::FTranscodePageToGPU_CS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<Nanite::FTranscodePageToGPU_CS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<Nanite::FTranscodePageToGPU_CS,FShaderMapPointerTable>::GetComputeShader
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

// Dispatch<FMoveWholeIndirectionTextureCS> @ 14833bbf0

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

void __cdecl
FComputeShaderUtils::Dispatch<FMoveWholeIndirectionTextureCS>
          (FRHIComputeCommandList *param_1,
          TShaderRefBase<FMoveWholeIndirectionTextureCS,FShaderMapPointerTable> *param_2,
          FParameters *param_3,TIntVector3<int> *param_4)

{
  uint uVar1;
  FMoveWholeIndirectionTextureCS *pFVar2;
  code *pcVar3;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  FRHIComputeShader *pFVar6;
  FRHIBatchedShaderUnbinds *pFVar7;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  pFVar5 = FMoveWholeIndirectionTextureCS::FParameters::FTypeInfo::GetStructMetadata();
  local_38._0_8_ = *(undefined8 *)&param_4->field0_0x0;
  uVar1 = (param_4->field0_0x0)._s_0.Z;
  local_38._s_0.Z = uVar1;
  ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar6 = TShaderRefBase<FMoveWholeIndirectionTextureCS,FShaderMapPointerTable>::GetComputeShader
                     (param_2);
  SetComputePipelineState(param_1,pFVar6);
  local_28.ShaderContent = (FShader *)param_2->ShaderContent;
  local_28.ShaderMap = param_2->ShaderMap;
  ValidateShaderParameters(&local_28,pFVar5,param_3);
  ::SetShaderParameters
            (param_1,pFVar6,(FShaderParameterBindings *)param_2->ShaderContent,pFVar5,param_3);
  FRHIComputeCommandList::DispatchComputeShader(param_1,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar6 = TShaderRefBase<FMoveWholeIndirectionTextureCS,FShaderMapPointerTable>::GetComputeShader
                     (param_2);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar7 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    pFVar2 = param_2->ShaderContent;
    if (*(ushort *)&pFVar2->field_0x54 != 0xffff) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar7,(FShaderParameterBindings *)pFVar2);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,pFVar6,pFVar7);
  }
  return;
}

// Dispatch<FPatchIndirectionTextureCS> @ 14833bd30

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

void __cdecl
FComputeShaderUtils::Dispatch<FPatchIndirectionTextureCS>
          (FRHIComputeCommandList *param_1,
          TShaderRefBase<FPatchIndirectionTextureCS,FShaderMapPointerTable> *param_2,
          FParameters *param_3,TIntVector3<int> *param_4)

{
  uint uVar1;
  FPatchIndirectionTextureCS *pFVar2;
  code *pcVar3;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  FRHIComputeShader *pFVar6;
  FRHIBatchedShaderUnbinds *pFVar7;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  pFVar5 = FPatchIndirectionTextureCS::FParameters::FTypeInfo::GetStructMetadata();
  local_38._0_8_ = *(undefined8 *)&param_4->field0_0x0;
  uVar1 = (param_4->field0_0x0)._s_0.Z;
  local_38._s_0.Z = uVar1;
  ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar6 = TShaderRefBase<FPatchIndirectionTextureCS,FShaderMapPointerTable>::GetComputeShader
                     (param_2);
  SetComputePipelineState(param_1,pFVar6);
  local_28.ShaderContent = (FShader *)param_2->ShaderContent;
  local_28.ShaderMap = param_2->ShaderMap;
  ValidateShaderParameters(&local_28,pFVar5,param_3);
  ::SetShaderParameters
            (param_1,pFVar6,(FShaderParameterBindings *)param_2->ShaderContent,pFVar5,param_3);
  FRHIComputeCommandList::DispatchComputeShader(param_1,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar6 = TShaderRefBase<FPatchIndirectionTextureCS,FShaderMapPointerTable>::GetComputeShader
                     (param_2);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar7 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    pFVar2 = param_2->ShaderContent;
    if (*(ushort *)&pFVar2->field_0x54 != 0xffff) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar7,(FShaderParameterBindings *)pFVar2);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,pFVar6,pFVar7);
  }
  return;
}

// AddPass<Nanite::FMemcpy_CS> @ 148432470

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
FComputeShaderUtils::AddPass<Nanite::FMemcpy_CS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<Nanite::FMemcpy_CS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FMemcpy_CS *pFVar3;
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
  FMemcpy_CS *local_50;
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFMemcpy_CS_Nanite___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFMemcpy_CS_Nanite__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FMemcpy_CS_Nanite__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FMemcpy_CS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
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

// AddPass<FSpecularProfileConvolveCS> @ 1484328a0

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
FComputeShaderUtils::AddPass<FSpecularProfileConvolveCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FSpecularProfileConvolveCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FSpecularProfileConvolveCS *pFVar3;
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
  FSpecularProfileConvolveCS *local_50;
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFSpecularProfileConvolveCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFSpecularProfileConvolveCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FSpecularProfileConvolveCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FSpecularProfileConvolveCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
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

// AddPass<FSpecularProfileCopyCS> @ 148432b00

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
FComputeShaderUtils::AddPass<FSpecularProfileCopyCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FSpecularProfileCopyCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FSpecularProfileCopyCS *pFVar3;
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
  FSpecularProfileCopyCS *local_50;
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFSpecularProfileCopyCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFSpecularProfileCopyCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FSpecularProfileCopyCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FSpecularProfileCopyCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
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

// operator() @ 148449c80

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
`FComputeShaderUtils::AddPass<Nanite::FMemcpy_CS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<Nanite::FMemcpy_CS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FMemcpy_CS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<Nanite::FMemcpy_CS,FShaderMapPointerTable> *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<Nanite::FMemcpy_CS,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<Nanite::FMemcpy_CS,FShaderMapPointerTable>::GetComputeShader(this_00);
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

// operator() @ 148449dc0

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
`FComputeShaderUtils::AddPass<FSpecularProfileConvolveCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FSpecularProfileConvolveCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FSpecularProfileConvolveCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FSpecularProfileConvolveCS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FSpecularProfileConvolveCS,FShaderMapPointerTable>::GetComputeShader
                     (this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FSpecularProfileConvolveCS,FShaderMapPointerTable>::GetComputeShader
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

// operator() @ 148449f00

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
`FComputeShaderUtils::AddPass<FSpecularProfileCopyCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FSpecularProfileCopyCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FSpecularProfileCopyCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FSpecularProfileCopyCS,FShaderMapPointerTable> *)((longlong)this + 0x10)
  ;
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FSpecularProfileCopyCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FSpecularProfileCopyCS,FShaderMapPointerTable>::GetComputeShader(this_00);
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

// AddPass<FSparseVolumeTextureUpdateFromSparseBufferCS> @ 148703ff0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
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
FComputeShaderUtils::AddPass<FSparseVolumeTextureUpdateFromSparseBufferCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FSparseVolumeTextureUpdateFromSparseBufferCS,FShaderMapPointerTable>
          *param_4,FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7
          )

{
  int *piVar1;
  code *pcVar2;
  FSparseVolumeTextureUpdateFromSparseBufferCS *pFVar3;
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
  FSparseVolumeTextureUpdateFromSparseBufferCS *local_50;
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFSparseVolumeTextureUpdateFromSparseBufferCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFSparseVolumeTextureUpdateFromSparseBufferCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FSparseVolumeTextureUpdateFromSparseBufferCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FSparseVolumeTextureUpdateFromSparseBufferCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum =
       pFVar3;
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

// AddPass<FSparseVolumeTextureUpdatePageTableCS> @ 148704250

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
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
FComputeShaderUtils::AddPass<FSparseVolumeTextureUpdatePageTableCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FSparseVolumeTextureUpdatePageTableCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FSparseVolumeTextureUpdatePageTableCS *pFVar3;
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
  FSparseVolumeTextureUpdatePageTableCS *local_50;
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFSparseVolumeTextureUpdatePageTableCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFSparseVolumeTextureUpdatePageTableCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FSparseVolumeTextureUpdatePageTableCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FSparseVolumeTextureUpdatePageTableCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
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

// operator() @ 148717e50

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
`FComputeShaderUtils::AddPass<FSparseVolumeTextureUpdateFromSparseBufferCS>'::__l2::<lambda_1>::
operator()(void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FSparseVolumeTextureUpdateFromSparseBufferCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FSparseVolumeTextureUpdateFromSparseBufferCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FSparseVolumeTextureUpdateFromSparseBufferCS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FSparseVolumeTextureUpdateFromSparseBufferCS,FShaderMapPointerTable>::
           GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FSparseVolumeTextureUpdateFromSparseBufferCS,FShaderMapPointerTable>::
           GetComputeShader(this_00);
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

// operator() @ 148717f90

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
`FComputeShaderUtils::AddPass<FSparseVolumeTextureUpdatePageTableCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FSparseVolumeTextureUpdatePageTableCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FSparseVolumeTextureUpdatePageTableCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FSparseVolumeTextureUpdatePageTableCS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FSparseVolumeTextureUpdatePageTableCS,FShaderMapPointerTable>::
           GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FSparseVolumeTextureUpdatePageTableCS,FShaderMapPointerTable>::
           GetComputeShader(this_00);
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

// AddPass<FCopyCompressCS> @ 14899f880

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
FComputeShaderUtils::AddPass<FCopyCompressCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FCopyCompressCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FCopyCompressCS *pFVar3;
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
  FCopyCompressCS *local_50;
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFCopyCompressCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFCopyCompressCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FCopyCompressCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FCopyCompressCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
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

// Dispatch<FCopyCompressCS> @ 1489a7850

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
FComputeShaderUtils::Dispatch<FCopyCompressCS>
          (FRHIComputeCommandList *param_1,
          TShaderRefBase<FCopyCompressCS,FShaderMapPointerTable> *param_2,
          FShaderParametersMetadata *param_3,FParameters *param_4,TIntVector3<int> *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FRHIComputeShader *pFVar4;
  IRHIComputeContext *pIVar5;
  undefined8 *puVar6;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  ValidateGroupCount(param_5);
  pFVar4 = (FRHIComputeShader *)
           TShaderRefBase<FCopyCompressCS,FShaderMapPointerTable>::GetRHIShaderBase
                     (param_2,SF_Compute,true);
  SetComputePipelineState(param_1,pFVar4);
  local_28.ShaderContent = (FShader *)param_2->ShaderContent;
  local_28.ShaderMap = param_2->ShaderMap;
  ValidateShaderParameters(&local_28,param_3,param_4);
  ::SetShaderParameters
            (param_1,pFVar4,(FShaderParameterBindings *)param_2->ShaderContent,param_3,param_4);
  iVar1 = (param_5->field0_0x0)._s_0.Z;
  iVar2 = (param_5->field0_0x0)._s_0.Y;
  iVar3 = (param_5->field0_0x0)._s_0.X;
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar6;
    *(undefined8 **)&param_1->field_0x30 = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &___7FRHICommandDispatchComputeShader__6B_;
    *(int *)(puVar6 + 2) = iVar3;
    *(int *)((longlong)puVar6 + 0x14) = iVar2;
    *(int *)(puVar6 + 3) = iVar1;
  }
  else {
    pIVar5 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
    (**(code **)(pIVar5->_padding_ + 0x18))(pIVar5,iVar3,iVar2,iVar1);
  }
  pFVar4 = (FRHIComputeShader *)
           TShaderRefBase<FCopyCompressCS,FShaderMapPointerTable>::GetRHIShaderBase
                     (param_2,SF_Compute,true);
  UnsetShaderUAVs<FRHIComputeCommandList,FCopyCompressCS>(param_1,param_2,pFVar4);
  return;
}

// operator() @ 1489be6c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FCopyCompressCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TIntVector3<int>_u_0 local_18 [2];
  
  local_18[0]._8_4_ = *(int *)((longlong)this + 0x28);
  local_18[0]._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  FComputeShaderUtils::Dispatch<FCopyCompressCS>
            (param_2,(TShaderRefBase<FCopyCompressCS,FShaderMapPointerTable> *)
                     ((longlong)this + 0x10),*(FShaderParametersMetadata **)this,
             *(FParameters **)((longlong)this + 8),(TIntVector3<int> *)&local_18[0]._s_0);
  return;
}

