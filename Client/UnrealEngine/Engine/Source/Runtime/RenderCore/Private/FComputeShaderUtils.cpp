// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 24

// AddPass<FBuildIndirectDispatchArgsBufferCS> @ 145cfe510

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
FComputeShaderUtils::AddPass<FBuildIndirectDispatchArgsBufferCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FBuildIndirectDispatchArgsBufferCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FBuildIndirectDispatchArgsBufferCS *pFVar3;
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
  FBuildIndirectDispatchArgsBufferCS *local_50;
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFBuildIndirectDispatchArgsBufferCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFBuildIndirectDispatchArgsBufferCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FBuildIndirectDispatchArgsBufferCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FBuildIndirectDispatchArgsBufferCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
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

// AddPass<FClearMessageBufferCS> @ 145cfe770

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
FComputeShaderUtils::AddPass<FClearMessageBufferCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FClearMessageBufferCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FClearMessageBufferCS *pFVar3;
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
  FClearMessageBufferCS *local_50;
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFClearMessageBufferCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFClearMessageBufferCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FClearMessageBufferCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FClearMessageBufferCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
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

// AddPass<FGPUDebugCrashUtilsCS> @ 145cfe9d0

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
FComputeShaderUtils::AddPass<FGPUDebugCrashUtilsCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FGPUDebugCrashUtilsCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FGPUDebugCrashUtilsCS *pFVar3;
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
  FGPUDebugCrashUtilsCS *local_50;
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFGPUDebugCrashUtilsCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFGPUDebugCrashUtilsCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FGPUDebugCrashUtilsCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FGPUDebugCrashUtilsCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
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

// AddPass<FGenerateMipsCS> @ 145cfec30

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
FComputeShaderUtils::AddPass<FGenerateMipsCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FGenerateMipsCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FGenerateMipsCS *pFVar3;
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
  FGenerateMipsCS *local_50;
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFGenerateMipsCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFGenerateMipsCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FGenerateMipsCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FGenerateMipsCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
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

// AddPass<FGenerateMipsIndirectCS> @ 145cfee90

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
FComputeShaderUtils::AddPass<FGenerateMipsIndirectCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FGenerateMipsIndirectCS,FShaderMapPointerTable> *param_4,
          FParameters *param_5,FRDGBuffer *param_6,uint param_7,
          TFunction<void___cdecl(void)> *param_8)

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
  pFVar5 = FGenerateMipsIndirectCS::FParameters::FTypeInfo::GetStructMetadata();
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
  local_a8.ComputeShader.ShaderContent = (FPCGSceneWriterCS *)pFVar2->Name;
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
  pFVar5 = FGenerateMipsIndirectCS::FParameters::FTypeInfo::GetStructMetadata();
  pFVar4 = FRDGBuilder::
           AddPassInternal<FGenerateMipsIndirectCS::FParameters,_FComputeShaderUtils::AddPass<FGenerateMipsIndirectCS>_::__l2::<lambda_1>_>
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

// operator() @ 145d0c450

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
`FComputeShaderUtils::AddPass<FBuildIndirectDispatchArgsBufferCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FBuildIndirectDispatchArgsBufferCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FBuildIndirectDispatchArgsBufferCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FBuildIndirectDispatchArgsBufferCS,FShaderMapPointerTable> *)
            ((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FBuildIndirectDispatchArgsBufferCS,FShaderMapPointerTable>::
           GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FBuildIndirectDispatchArgsBufferCS,FShaderMapPointerTable>::
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

// operator() @ 145d0c590

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
`FComputeShaderUtils::AddPass<FClearMessageBufferCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FClearMessageBufferCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FClearMessageBufferCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FClearMessageBufferCS,FShaderMapPointerTable> *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FClearMessageBufferCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FClearMessageBufferCS,FShaderMapPointerTable>::GetComputeShader(this_00);
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

// operator() @ 145d0c6d0

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
`FComputeShaderUtils::AddPass<FGPUDebugCrashUtilsCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FGPUDebugCrashUtilsCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FGPUDebugCrashUtilsCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FGPUDebugCrashUtilsCS,FShaderMapPointerTable> *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FGPUDebugCrashUtilsCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FGPUDebugCrashUtilsCS,FShaderMapPointerTable>::GetComputeShader(this_00);
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

// operator() @ 145d0c810

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
`FComputeShaderUtils::AddPass<FGenerateMipsCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FGenerateMipsCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FGenerateMipsCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FGenerateMipsCS,FShaderMapPointerTable> *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FGenerateMipsCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FGenerateMipsCS,FShaderMapPointerTable>::GetComputeShader(this_00);
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

// operator() @ 145d0c950

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FGenerateMipsIndirectCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FGenerateMipsIndirectCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  code *pcVar2;
  FRDGResource *this_01;
  FRHIResource *pFVar3;
  void *pvVar4;
  FGenerateMipsIndirectCS *pFVar5;
  bool bVar6;
  undefined8 uVar7;
  FShaderParametersMetadata *pFVar8;
  FRHIComputeShader *pFVar9;
  IRHIComputeContext *pIVar10;
  undefined8 *puVar11;
  FRHIBatchedShaderUnbinds *pFVar12;
  longlong *plVar13;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  FRDGResource::MarkResourceAsUsed(*(FRDGResource **)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x30));
    pcVar2 = *(code **)((longlong)this + 0x30);
    plVar13 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar13 = *(longlong **)((longlong)this + 0x58);
    }
    uVar7 = (**(code **)(*plVar13 + 8))();
    (*pcVar2)(uVar7);
  }
  this_01 = *(FRDGResource **)((longlong)this + 0x18);
  uVar1 = *(uint *)((longlong)this + 0x20);
  if (((ulonglong)this_01[4].Name & 0x80) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Desc.Usage & EBufferUsageFlags::DrawIndirect",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                       ,0x53c,L"Buffer %s was not flagged for indirect draw usage.");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FRDGResource::ValidateRHIAccess(this_01);
  pFVar3 = this_01->ResourceRHI;
  this_00 = (TShaderRefBase<FGenerateMipsIndirectCS,FShaderMapPointerTable> *)((longlong)this + 8);
  pvVar4 = *(void **)this;
  FComputeShaderUtils::ValidateIndirectArgsBuffer((uint)pFVar3[9]._padding_,uVar1);
  pFVar8 = FGenerateMipsIndirectCS::FParameters::FTypeInfo::GetStructMetadata();
  pFVar9 = TShaderRefBase<FGenerateMipsIndirectCS,FShaderMapPointerTable>::GetComputeShader(this_00)
  ;
  SetComputePipelineState(param_2,pFVar9);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x10);
  ValidateShaderParameters(&local_28,pFVar8,pvVar4);
  ::SetShaderParameters
            (param_2,pFVar9,(FShaderParameterBindings *)this_00->ShaderContent,pFVar8,pvVar4);
  if ((GRHICommandList.bLatchedBypass == false) || ((param_2->field_0x29b & 0x20) == 0)) {
    puVar11 = FMemStackBase::Alloc((FMemStackBase *)param_2,0x20,8);
    *(int *)&param_2->field_0x60 = *(int *)&param_2->field_0x60 + 1;
    **(undefined8 **)&param_2->field_0x30 = puVar11;
    *(undefined8 **)&param_2->field_0x30 = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &___7FRHICommandDispatchIndirectComputeShader__6B_;
    puVar11[2] = pFVar3;
    *(uint *)(puVar11 + 3) = uVar1;
  }
  else {
    pIVar10 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_2);
    (**(code **)(pIVar10->_padding_ + 0x30))(pIVar10,pFVar3,uVar1);
  }
  pFVar9 = TShaderRefBase<FGenerateMipsIndirectCS,FShaderMapPointerTable>::GetComputeShader(this_00)
  ;
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar12 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar5 = this_00->ShaderContent;
    if (*(short *)&pFVar5->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar12,(FShaderParameterBindings *)pFVar5);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar9,pFVar12);
  }
  return;
}

// AfterDispatch<FInitIndirectArgs1DCS> @ 145d7a260

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
FComputeShaderUtils::Private::AfterDispatch<FInitIndirectArgs1DCS>
          (FRHIComputeCommandList *param_1,
          TShaderRefBase<FInitIndirectArgs1DCS,FShaderMapPointerTable> *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  FInitIndirectArgs1DCS *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FRHIComputeShader *pFVar9;
  FRHIBatchedShaderUnbinds *pFVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  undefined1 local_res18 [8];
  
  pFVar9 = TShaderRefBase<FInitIndirectArgs1DCS,FShaderMapPointerTable>::GetComputeShader(param_2);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar10 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    pFVar4 = param_2->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    puVar11 = *(undefined1 **)&pFVar4->field_0x10;
    if (((ulonglong)puVar11 & 1) != 0) {
      puVar11 = &pFVar4->field_0x10 + ((longlong)puVar11 >> 0x18);
    }
    iVar3 = *(int *)&pFVar4->field_0x18;
    pbVar12 = puVar11 + 2;
    while( true ) {
      if (*(int *)&pFVar4->field_0x18 != iVar3) {
        `TCheckedPointerIterator<FShaderParameterBindings::FResourceParameter_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pbVar12 + -2 == puVar11 + (longlong)iVar3 * 4) break;
      if ((pbVar12[1] == 7) || ((pbVar12[1] - 0xe & 0xfb) == 0)) {
        iVar8 = (pFVar10->Unbinds).ArrayNum;
        piVar1 = &(pFVar10->Unbinds).ArrayMax;
        bVar2 = *pbVar12;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x204,(ForAnyElementType *)pFVar10,piVar1);
        }
        (pFVar10->Unbinds).ArrayNum = iVar8 + 1;
        pFVar5 = (pFVar10->Unbinds).AllocatorInstance.Data;
        *(ushort *)(pFVar5 + (longlong)iVar8 * 4) = (ushort)bVar2;
        pFVar5[(longlong)iVar8 * 4 + 2] = (FScriptContainerElement)0x1;
      }
      pbVar12 = pbVar12 + 4;
    }
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,pFVar9,pFVar10);
  }
  return;
}

// operator() @ 145d92480

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

void __thiscall
`FComputeShaderUtils::AddPass<FInitIndirectArgs1DCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FInitIndirectArgs1DCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FRHIComputeShader *pFVar4;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FInitIndirectArgs1DCS,FShaderMapPointerTable> *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar4 = TShaderRefBase<FInitIndirectArgs1DCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar4);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar4,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  FComputeShaderUtils::Private::AfterDispatch<FInitIndirectArgs1DCS>(param_2,this_00);
  return;
}

// AddIndirectArgsSetupCsPass1D @ 145d9e710

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FRDGBuffer * __cdecl
FComputeShaderUtils::AddIndirectArgsSetupCsPass1D
          (FRDGBuilder *param_1,Type param_2,FRDGBuffer *param_3,wchar_t *param_4,uint param_5,
          uint param_6,uint param_7)

{
  int *piVar1;
  FParameters *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FRDGBuffer *pFVar6;
  undefined8 *puVar7;
  TVector2<float>_u_0 TVar8;
  FRDGBufferUAV *pFVar9;
  FGlobalShaderMap *this;
  FGlobalShaderType *pFVar10;
  FShaderType *pFVar11;
  FName this_00;
  FShaderParametersMetadata *pFVar12;
  undefined8 *puVar13;
  undefined1 local_res8 [8];
  Type local_res10;
  undefined1 local_res18 [8];
  undefined8 *local_158 [2];
  TIntVector3<int>_u_0 local_148;
  initializer_list<FRDGResource_*> local_138;
  undefined8 local_128;
  FRDGBufferUAVDesc local_118;
  FRDGEventName local_108;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_e8;
  FRDGBufferSRVDesc local_d8;
  <lambda_1> local_b8;
  FString local_88;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_78;
  undefined1 local_68 [16];
  FShaderParametersMetadata *local_58;
  
  local_138._Last =
       (FRDGResource **)
       CONCAT44(local_138._Last._4_4_,
                VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static);
  puVar13 = (undefined8 *)0x0;
  local_138._First = (FRDGResource **)0x10000000c;
  local_128 = 0;
  local_58 = (FShaderParametersMetadata *)0x0;
  local_68._0_4_ = 0xc;
  local_68._4_4_ = 1;
  local_68._8_8_ = local_138._Last;
  local_res10 = param_2;
  pFVar6 = FRDGBuilder::CreateBuffer(param_1,(FRDGBufferDesc *)local_68,param_4,None);
  puVar7 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
  if (puVar7 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FRDGBuffer *)(*pcVar3)();
      return pFVar6;
    }
  }
  else {
    puVar7[2] = 0;
    *puVar7 = &___7__TObject_VFParameters_FInitIndirectArgs1DCS___FRDGAllocator__6B_;
    puVar7[5] = 0;
    puVar13 = puVar7;
  }
  local_158[0] = puVar13;
  if ((((undefined8 **)param_1->_padding_ <= local_158) &&
      (local_158 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FRDGBuffer *)(*pcVar3)();
    return pFVar6;
  }
  iVar5 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  pFVar2 = (FParameters *)(puVar13 + 2);
  *(int *)&param_1->_padding_ = iVar5 + 1;
  local_d8._padding_._4_4_ = 0;
  local_d8._padding_._0_4_ = 0xffffffff;
  local_d8._padding_ = 0;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar5 * 8) = local_158[0];
  local_d8._padding_._0_1_ = 0;
  if (((param_3->Desc).Usage & DrawIndirect) != None) {
    local_d8._padding_._0_1_ = 0x1c;
  }
  local_d8.Buffer = param_3;
  TVar8 = (TVector2<float>_u_0)FRDGBuilder::CreateSRV(param_1,&local_d8);
  (pFVar2->ThreadIdToUV).field0_0x0 = TVar8;
  *(uint *)(puVar13 + 3) = param_7;
  *(uint *)((longlong)puVar13 + 0x1c) = param_5;
  *(uint *)(puVar13 + 4) = param_6;
  local_118._padding_._0_2_ = 0x1c;
  local_118._padding_._2_1_ = 0;
  local_118.Buffer = pFVar6;
  pFVar9 = FRDGBuilder::CreateUAV(param_1,&local_118,None);
  puVar13[5] = pFVar9;
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)local_res10]);
  pFVar10 = FInitIndirectArgs1DCS::GetStaticType();
  if (*(int *)&pFVar10->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<FInitIndirectArgs1DCS>'::__l2::<lambda_1>::operator()(local_res8);
  }
  pFVar11 = (FShaderType *)FInitIndirectArgs1DCS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&local_e8,pFVar11,0);
  if (local_e8.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res18);
    ::FName::ToString((FName *)this_00,&local_88);
    FInitIndirectArgs1DCS::GetStaticType();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FRDGBuffer *)(*pcVar3)();
      return pFVar6;
    }
  }
  FInitIndirectArgs1DCS::GetStaticType();
  local_108.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.EventFormat = L"InitIndirectArgs1D";
  local_108.FormattedEventName.Data.ArrayNum = 0;
  local_108.FormattedEventName.Data.ArrayMax = 0;
  local_148._s_0.X = 1;
  local_148._s_0.Y = 1;
  local_148._s_0.Z = 1;
  pFVar12 = FInitIndirectArgs1DCS::FParameters::FTypeInfo::GetStructMetadata();
  ValidateGroupCount((TIntVector3<int> *)&local_148._s_0);
  local_78.ShaderContent = local_e8.ShaderContent;
  local_78.ShaderMap = local_e8.ShaderMap;
  ValidateShaderParameters(&local_78,pFVar12,pFVar2);
  local_138._First = (FRDGResource **)0x0;
  local_138._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl(&(local_e8.ShaderContent)->Bindings,pFVar12,pFVar2,&local_138);
  local_b8.GroupCount.field0_0x0._0_8_ = CONCAT44(local_148._s_0.Y,local_148._s_0.X);
  local_b8.ComputeShader.ShaderContent = (FBlendDistortionDisplacementMapCS *)local_e8.ShaderContent
  ;
  local_b8.ComputeShader.ShaderMap = local_e8.ShaderMap;
  local_b8.GroupCount.field0_0x0._s_0.Z = 1;
  local_b8.ParametersMetadata = pFVar12;
  local_b8.Parameters = pFVar2;
  FRDGBuilder::
  AddPassInternal<void,_FComputeShaderUtils::AddPass<FInitIndirectArgs1DCS>_::__l2::<lambda_1>_>
            (param_1,&local_108,pFVar12,pFVar2,Compute,&local_b8);
  if (local_108.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return pFVar6;
}

// AddPass<FRDGMemcpyCS> @ 145e750d0

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
FComputeShaderUtils::AddPass<FRDGMemcpyCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FRDGMemcpyCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FRDGMemcpyCS *pFVar3;
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
  FRDGMemcpyCS *local_50;
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFRDGMemcpyCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFRDGMemcpyCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FRDGMemcpyCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FRDGMemcpyCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
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

// AddPass<FRDGMemsetBufferCS> @ 145e75330

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
FComputeShaderUtils::AddPass<FRDGMemsetBufferCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FRDGMemsetBufferCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FRDGMemsetBufferCS *pFVar3;
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
  FRDGMemsetBufferCS *local_50;
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFRDGMemsetBufferCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFRDGMemsetBufferCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FRDGByteBufferShader__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FRDGMemsetBufferCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
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

// AddPass<FRDGScatterCopyCS> @ 145e75590

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
FComputeShaderUtils::AddPass<FRDGScatterCopyCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FRDGScatterCopyCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FRDGScatterCopyCS *pFVar3;
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
  FRDGScatterCopyCS *local_50;
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFRDGScatterCopyCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFRDGScatterCopyCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FRDGScatterCopyCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FRDGScatterCopyCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
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

// Dispatch<FMemcpyCS> @ 145e77090

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
FComputeShaderUtils::Dispatch<FMemcpyCS>
          (FRHIComputeCommandList *param_1,TShaderRefBase<FMemcpyCS,FShaderMapPointerTable> *param_2
          ,FParameters *param_3,TIntVector3<int> *param_4)

{
  uint uVar1;
  FMemcpyCS *pFVar2;
  code *pcVar3;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  FRHIComputeShader *pFVar6;
  FRHIBatchedShaderUnbinds *pFVar7;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  pFVar5 = FMemcpyCS::FParameters::FTypeInfo::GetStructMetadata();
  local_38._0_8_ = *(undefined8 *)&param_4->field0_0x0;
  uVar1 = (param_4->field0_0x0)._s_0.Z;
  local_38._s_0.Z = uVar1;
  ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar6 = TShaderRefBase<FMemcpyCS,FShaderMapPointerTable>::GetComputeShader(param_2);
  SetComputePipelineState(param_1,pFVar6);
  local_28.ShaderContent = (FShader *)param_2->ShaderContent;
  local_28.ShaderMap = param_2->ShaderMap;
  ValidateShaderParameters(&local_28,pFVar5,param_3);
  ::SetShaderParameters
            (param_1,pFVar6,(FShaderParameterBindings *)param_2->ShaderContent,pFVar5,param_3);
  FRHIComputeCommandList::DispatchComputeShader(param_1,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar6 = TShaderRefBase<FMemcpyCS,FShaderMapPointerTable>::GetComputeShader(param_2);
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

// Dispatch<FMemsetBufferCS> @ 145e771d0

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
FComputeShaderUtils::Dispatch<FMemsetBufferCS>
          (FRHIComputeCommandList *param_1,
          TShaderRefBase<FMemsetBufferCS,FShaderMapPointerTable> *param_2,FParameters *param_3,
          TIntVector3<int> *param_4)

{
  uint uVar1;
  FMemsetBufferCS *pFVar2;
  code *pcVar3;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  FRHIComputeShader *pFVar6;
  FRHIBatchedShaderUnbinds *pFVar7;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  pFVar5 = FByteBufferShader::FParameters::FTypeInfo::GetStructMetadata();
  local_38._0_8_ = *(undefined8 *)&param_4->field0_0x0;
  uVar1 = (param_4->field0_0x0)._s_0.Z;
  local_38._s_0.Z = uVar1;
  ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar6 = TShaderRefBase<FMemsetBufferCS,FShaderMapPointerTable>::GetComputeShader(param_2);
  SetComputePipelineState(param_1,pFVar6);
  local_28.ShaderContent = (FShader *)param_2->ShaderContent;
  local_28.ShaderMap = param_2->ShaderMap;
  ValidateShaderParameters(&local_28,pFVar5,param_3);
  ::SetShaderParameters
            (param_1,pFVar6,(FShaderParameterBindings *)param_2->ShaderContent,pFVar5,param_3);
  FRHIComputeCommandList::DispatchComputeShader(param_1,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar6 = TShaderRefBase<FMemsetBufferCS,FShaderMapPointerTable>::GetComputeShader(param_2);
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

// Dispatch<FRDGScatterCopyCS> @ 145e77310

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
FComputeShaderUtils::Dispatch<FRDGScatterCopyCS>
          (FRHIComputeCommandList *param_1,
          TShaderRefBase<FRDGScatterCopyCS,FShaderMapPointerTable> *param_2,
          FShaderParametersMetadata *param_3,FParameters *param_4,TIntVector3<int> *param_5)

{
  FRDGScatterCopyCS *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRHIComputeShader *pFVar4;
  FRHIBatchedShaderUnbinds *pFVar5;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  ValidateGroupCount(param_5);
  pFVar4 = TShaderRefBase<FRDGScatterCopyCS,FShaderMapPointerTable>::GetComputeShader(param_2);
  SetComputePipelineState(param_1,pFVar4);
  local_28.ShaderMap = param_2->ShaderMap;
  local_28.ShaderContent = (FShader *)param_2->ShaderContent;
  ValidateShaderParameters(&local_28,param_3,param_4);
  ::SetShaderParameters
            (param_1,pFVar4,(FShaderParameterBindings *)param_2->ShaderContent,param_3,param_4);
  FRHIComputeCommandList::DispatchComputeShader
            (param_1,(param_5->field0_0x0)._s_0.X,(param_5->field0_0x0)._s_0.Y,
             (param_5->field0_0x0)._s_0.Z);
  pFVar4 = TShaderRefBase<FRDGScatterCopyCS,FShaderMapPointerTable>::GetComputeShader(param_2);
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

// Dispatch<FScatterCopyCS> @ 145e77430

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
FComputeShaderUtils::Dispatch<FScatterCopyCS>
          (FRHIComputeCommandList *param_1,
          TShaderRefBase<FScatterCopyCS,FShaderMapPointerTable> *param_2,FParameters *param_3,
          TIntVector3<int> *param_4)

{
  uint uVar1;
  FScatterCopyCS *pFVar2;
  code *pcVar3;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  FRHIComputeShader *pFVar6;
  FRHIBatchedShaderUnbinds *pFVar7;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  pFVar5 = FScatterCopyCS::FParameters::FTypeInfo::GetStructMetadata();
  local_38._0_8_ = *(undefined8 *)&param_4->field0_0x0;
  uVar1 = (param_4->field0_0x0)._s_0.Z;
  local_38._s_0.Z = uVar1;
  ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar6 = TShaderRefBase<FScatterCopyCS,FShaderMapPointerTable>::GetComputeShader(param_2);
  SetComputePipelineState(param_1,pFVar6);
  local_28.ShaderContent = (FShader *)param_2->ShaderContent;
  local_28.ShaderMap = param_2->ShaderMap;
  ValidateShaderParameters(&local_28,pFVar5,param_3);
  ::SetShaderParameters
            (param_1,pFVar6,(FShaderParameterBindings *)param_2->ShaderContent,pFVar5,param_3);
  FRHIComputeCommandList::DispatchComputeShader(param_1,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar6 = TShaderRefBase<FScatterCopyCS,FShaderMapPointerTable>::GetComputeShader(param_2);
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

// operator() @ 145e86a20

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
`FComputeShaderUtils::AddPass<FRDGMemcpyCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FRDGMemcpyCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FRDGMemcpyCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FRDGMemcpyCS,FShaderMapPointerTable> *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FRDGMemcpyCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FRDGMemcpyCS,FShaderMapPointerTable>::GetComputeShader(this_00);
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

// operator() @ 145e86b60

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
`FComputeShaderUtils::AddPass<FRDGMemsetBufferCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FRDGMemsetBufferCS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FRDGMemsetBufferCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FRDGMemsetBufferCS,FShaderMapPointerTable> *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = uVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar7 = TShaderRefBase<FRDGMemsetBufferCS,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar7);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_28,pFVar3,pvVar2);
  ::SetShaderParameters
            (param_2,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_2,local_38._s_0.X,local_38._s_0.Y,uVar1);
  pFVar7 = TShaderRefBase<FRDGMemsetBufferCS,FShaderMapPointerTable>::GetComputeShader(this_00);
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

// operator() @ 145e86ca0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FRDGScatterCopyCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  TIntVector3<int>_u_0 local_28;
  TIntVector3<int> local_18;
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
  pcVar1 = *(code **)((longlong)this + 0x20);
  plVar3 = (longlong *)((longlong)this + 0x30);
  if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)this + 0x48);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(&local_28,uVar2);
  if (((0 < local_28._s_0.X) && (0 < local_28._s_0.Y)) && (0 < local_28._s_0.Z)) {
    FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_28._s_0);
    local_18.field0_0x0._s_0.Z = local_28._s_0.Z;
    FComputeShaderUtils::Dispatch<FRDGScatterCopyCS>
              (param_2,(TShaderRefBase<FRDGScatterCopyCS,FShaderMapPointerTable> *)
                       ((longlong)this + 0x10),*(FShaderParametersMetadata **)this,
               *(FParameters **)((longlong)this + 8),&local_18);
  }
  return;
}

// operator() @ 145e86d50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FComputeShaderUtils::AddPass<FRDGScatterCopyCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TIntVector3<int>_u_0 local_18 [2];
  
  local_18[0]._8_4_ = *(int *)((longlong)this + 0x28);
  local_18[0]._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  FComputeShaderUtils::Dispatch<FRDGScatterCopyCS>
            (param_2,(TShaderRefBase<FRDGScatterCopyCS,FShaderMapPointerTable> *)
                     ((longlong)this + 0x10),*(FShaderParametersMetadata **)this,
             *(FParameters **)((longlong)this + 8),(TIntVector3<int> *)&local_18[0]._s_0);
  return;
}

