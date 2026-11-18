// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicWind
// Functions: 2

// AddPass<FDynamicWindEvalCS> @ 14da4a690

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
FComputeShaderUtils::AddPass<FDynamicWindEvalCS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,ERDGPassFlags param_3,
          TShaderRefBase<FDynamicWindEvalCS,FShaderMapPointerTable> *param_4,
          FShaderParametersMetadata *param_5,FParameters *param_6,TIntVector3<int> *param_7)

{
  int *piVar1;
  code *pcVar2;
  FDynamicWindEvalCS *pFVar3;
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
  FDynamicWindEvalCS *local_50;
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFDynamicWindEvalCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFDynamicWindEvalCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FDynamicWindEvalCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar8[1]._padding_ = (longlong)local_60;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_58;
  *(FDynamicWindEvalCS **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
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

// operator() @ 14da4da20

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
`FComputeShaderUtils::AddPass<FDynamicWindEvalCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FDynamicWindEvalCS,FShaderMapPointerTable> *this_00;
  int iVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FRHIComputeShader *pFVar4;
  IRHIComputeContext *pIVar5;
  undefined8 *puVar6;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  local_38._0_8_ = *(ulonglong *)((longlong)this + 0x20);
  this_00 = (TShaderRefBase<FDynamicWindEvalCS,FShaderMapPointerTable> *)((longlong)this + 0x10);
  iVar1 = *(int *)((longlong)this + 0x28);
  pvVar2 = *(void **)((longlong)this + 8);
  pFVar3 = *(FShaderParametersMetadata **)this;
  local_38._s_0.Z = iVar1;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
  pFVar4 = (FRHIComputeShader *)
           TShaderRefBase<FDynamicWindEvalCS,FShaderMapPointerTable>::GetRHIShaderBase
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
           TShaderRefBase<FDynamicWindEvalCS,FShaderMapPointerTable>::GetRHIShaderBase
                     (this_00,SF_Compute,true);
  UnsetShaderUAVs<FRHIComputeCommandList,FDynamicWindEvalCS>(param_2,this_00,pFVar4);
  return;
}

