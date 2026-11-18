// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// AddPass<FAllocateNewPageMappingsCS> @ 1457aa680

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

void __thiscall
FPerPageShaderDispatcher::AddPass<FAllocateNewPageMappingsCS>
          (FPerPageShaderDispatcher *this,FRDGBuilder *param_1,FRDGEventName *param_2,
          TShaderRefBase<FAllocateNewPageMappingsCS,FShaderMapPointerTable> *param_3,
          FParameters *param_4)

{
  int *piVar1;
  code *pcVar2;
  FAllocateNewPageMappingsCS *pFVar3;
  FShaderMapBase *pFVar4;
  FBin FVar5;
  FBin FVar6;
  FBin FVar7;
  FBin FVar8;
  bool bVar9;
  ERDGPassFlags EVar10;
  int iVar11;
  FShaderParametersMetadata *pFVar12;
  wchar_t *pwVar13;
  FRDGPass *this_00;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_d8;
  FRDGParameterStruct local_c8;
  FShaderParametersMetadata *local_a8;
  FParameters *pFStack_a0;
  FAllocateNewPageMappingsCS *local_98;
  FShaderMapBase *pFStack_90;
  FBin local_88;
  FBin FStack_80;
  FBin local_78;
  FBin FStack_70;
  initializer_list<FRDGResource_*> local_68 [4];
  
  pFVar12 = FAllocateNewPageMappingsCS::FParameters::FTypeInfo::GetStructMetadata();
  (param_4->VirtualShadowMapPerPageShader).VirtualShadowMapIds = this->VirtualShadowMapIdsSRV;
  local_d8.ShaderContent = (FShader *)param_3->ShaderContent;
  local_d8.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_d8,pFVar12,param_4);
  local_68[0]._First = (FRDGResource **)0x0;
  local_68[0]._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_3->ShaderContent,pFVar12,param_4,local_68);
  pFVar3 = param_3->ShaderContent;
  pFVar4 = param_3->ShaderMap;
  FVar5 = (this->Bins).Elements[0];
  FVar6 = (this->Bins).Elements[1];
  FVar7 = (this->Bins).Elements[2];
  FVar8 = (this->Bins).Elements[3];
  pFStack_a0 = param_4;
  local_a8 = pFVar12;
  local_98 = pFVar3;
  pFStack_90 = pFVar4;
  local_88 = FVar5;
  FStack_80 = FVar6;
  local_78 = FVar7;
  FStack_70 = FVar8;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_4,pFVar12,param_2,Compute);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar13 = FRDGEventName::GetTCHAR(param_2);
  EVar10 = FRDGBuilder::OverridePassFlags(param_1,pwVar13,Compute);
  this_00 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1c8,8);
  local_c8.Contents = (uchar *)param_4;
  if ((pFVar12->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_c8.Layout.Reference = (pFVar12->Layout).Reference;
  if (local_c8.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_c8.Layout.Reference);
  }
  local_c8.Metadata = pFVar12;
  FRDGPass::FRDGPass(this_00,param_2,&local_c8,EVar10,Async);
  this_00[1]._padding_ = (longlong)local_a8;
  this_00[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_a0;
  *(FAllocateNewPageMappingsCS **)&this_00[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  this_00[1].Name.EventFormat = (wchar_t *)pFVar4;
  this_00->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFAllocateNewPageMappingsCS___FPerPageShaderDispatcher__QEAAXAEAVFRDGBuilder____QEAVFRDGEventName__AEBV__TShaderRefBase_VFAllocateNewPageMappingsCS__VFShaderMapPointerTable____PEAVFParameters_FAllocateNewPageMappingsCS___Z___6B_
  ;
  this_00[1].Name.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar5;
  this_00[1].Name.FormattedEventName.Data.ArrayNum = FVar6.VirtualShadowMapIdsOffset;
  this_00[1].Name.FormattedEventName.Data.ArrayMax = FVar6.NumVirtualShadowMapIds;
  this_00[1].ParameterStruct.Metadata = (FShaderParametersMetadata *)param_4;
  this_00[1].ParameterStruct.Contents = (uchar *)FVar7;
  this_00[1].ParameterStruct.Layout.Reference = (FRHIUniformBufferLayout *)FVar8;
  FRDGBuilder::ClobberPassOutputs(param_1,this_00);
  iVar11 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                       (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar11 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar11] = this_00;
  (this_00->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,this_00);
  return;
}

// AddPass<FClearPageTableCS> @ 1457aab10

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

void __thiscall
FPerPageShaderDispatcher::AddPass<FClearPageTableCS>
          (FPerPageShaderDispatcher *this,FRDGBuilder *param_1,FRDGEventName *param_2,
          TShaderRefBase<FClearPageTableCS,FShaderMapPointerTable> *param_3,FParameters *param_4)

{
  int *piVar1;
  code *pcVar2;
  FClearPageTableCS *pFVar3;
  FShaderMapBase *pFVar4;
  FBin FVar5;
  FBin FVar6;
  FBin FVar7;
  FBin FVar8;
  bool bVar9;
  ERDGPassFlags EVar10;
  int iVar11;
  FShaderParametersMetadata *pFVar12;
  wchar_t *pwVar13;
  FRDGPass *this_00;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_d8;
  FRDGParameterStruct local_c8;
  FShaderParametersMetadata *local_a8;
  FParameters *pFStack_a0;
  FClearPageTableCS *local_98;
  FShaderMapBase *pFStack_90;
  FBin local_88;
  FBin FStack_80;
  FBin local_78;
  FBin FStack_70;
  initializer_list<FRDGResource_*> local_68 [4];
  
  pFVar12 = FClearPageTableCS::FParameters::FTypeInfo::GetStructMetadata();
  (param_4->VirtualShadowMapPerPageShader).VirtualShadowMapIds = this->VirtualShadowMapIdsSRV;
  local_d8.ShaderContent = (FShader *)param_3->ShaderContent;
  local_d8.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_d8,pFVar12,param_4);
  local_68[0]._First = (FRDGResource **)0x0;
  local_68[0]._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_3->ShaderContent,pFVar12,param_4,local_68);
  pFVar3 = param_3->ShaderContent;
  pFVar4 = param_3->ShaderMap;
  FVar5 = (this->Bins).Elements[0];
  FVar6 = (this->Bins).Elements[1];
  FVar7 = (this->Bins).Elements[2];
  FVar8 = (this->Bins).Elements[3];
  pFStack_a0 = param_4;
  local_a8 = pFVar12;
  local_98 = pFVar3;
  pFStack_90 = pFVar4;
  local_88 = FVar5;
  FStack_80 = FVar6;
  local_78 = FVar7;
  FStack_70 = FVar8;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_4,pFVar12,param_2,Compute);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar13 = FRDGEventName::GetTCHAR(param_2);
  EVar10 = FRDGBuilder::OverridePassFlags(param_1,pwVar13,Compute);
  this_00 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1c8,8);
  local_c8.Contents = (uchar *)param_4;
  if ((pFVar12->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_c8.Layout.Reference = (pFVar12->Layout).Reference;
  if (local_c8.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_c8.Layout.Reference);
  }
  local_c8.Metadata = pFVar12;
  FRDGPass::FRDGPass(this_00,param_2,&local_c8,EVar10,Async);
  this_00[1]._padding_ = (longlong)local_a8;
  this_00[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_a0;
  *(FClearPageTableCS **)&this_00[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  this_00[1].Name.EventFormat = (wchar_t *)pFVar4;
  this_00->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFClearPageTableCS___FPerPageShaderDispatcher__QEAAXAEAVFRDGBuilder____QEAVFRDGEventName__AEBV__TShaderRefBase_VFClearPageTableCS__VFShaderMapPointerTable____PEAVFParameters_FClearPageTableCS___Z___6B_
  ;
  this_00[1].Name.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar5;
  this_00[1].Name.FormattedEventName.Data.ArrayNum = FVar6.VirtualShadowMapIdsOffset;
  this_00[1].Name.FormattedEventName.Data.ArrayMax = FVar6.NumVirtualShadowMapIds;
  this_00[1].ParameterStruct.Metadata = (FShaderParametersMetadata *)param_4;
  this_00[1].ParameterStruct.Contents = (uchar *)FVar7;
  this_00[1].ParameterStruct.Layout.Reference = (FRHIUniformBufferLayout *)FVar8;
  FRDGBuilder::ClobberPassOutputs(param_1,this_00);
  iVar11 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                       (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar11 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar11] = this_00;
  (this_00->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,this_00);
  return;
}

// AddPass<FPropagateMappedMipsCS> @ 1457adf30

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

void __thiscall
FPerPageShaderDispatcher::AddPass<FPropagateMappedMipsCS>
          (FPerPageShaderDispatcher *this,FRDGBuilder *param_1,FRDGEventName *param_2,
          TShaderRefBase<FPropagateMappedMipsCS,FShaderMapPointerTable> *param_3,
          FParameters *param_4)

{
  int *piVar1;
  code *pcVar2;
  FPropagateMappedMipsCS *pFVar3;
  FShaderMapBase *pFVar4;
  FBin FVar5;
  FBin FVar6;
  FBin FVar7;
  FBin FVar8;
  bool bVar9;
  ERDGPassFlags EVar10;
  int iVar11;
  FShaderParametersMetadata *pFVar12;
  wchar_t *pwVar13;
  FRDGPass *this_00;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_d8;
  FRDGParameterStruct local_c8;
  FShaderParametersMetadata *local_a8;
  FParameters *pFStack_a0;
  FPropagateMappedMipsCS *local_98;
  FShaderMapBase *pFStack_90;
  FBin local_88;
  FBin FStack_80;
  FBin local_78;
  FBin FStack_70;
  initializer_list<FRDGResource_*> local_68 [4];
  
  pFVar12 = FPropagateMappedMipsCS::FParameters::FTypeInfo::GetStructMetadata();
  (param_4->VirtualShadowMapPerPageShader).VirtualShadowMapIds = this->VirtualShadowMapIdsSRV;
  local_d8.ShaderContent = (FShader *)param_3->ShaderContent;
  local_d8.ShaderMap = param_3->ShaderMap;
  ValidateShaderParameters(&local_d8,pFVar12,param_4);
  local_68[0]._First = (FRDGResource **)0x0;
  local_68[0]._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_3->ShaderContent,pFVar12,param_4,local_68);
  pFVar3 = param_3->ShaderContent;
  pFVar4 = param_3->ShaderMap;
  FVar5 = (this->Bins).Elements[0];
  FVar6 = (this->Bins).Elements[1];
  FVar7 = (this->Bins).Elements[2];
  FVar8 = (this->Bins).Elements[3];
  pFStack_a0 = param_4;
  local_a8 = pFVar12;
  local_98 = pFVar3;
  pFStack_90 = pFVar4;
  local_88 = FVar5;
  FStack_80 = FVar6;
  local_78 = FVar7;
  FStack_70 = FVar8;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_4,pFVar12,param_2,Compute);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar13 = FRDGEventName::GetTCHAR(param_2);
  EVar10 = FRDGBuilder::OverridePassFlags(param_1,pwVar13,Compute);
  this_00 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1c8,8);
  local_c8.Contents = (uchar *)param_4;
  if ((pFVar12->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_c8.Layout.Reference = (pFVar12->Layout).Reference;
  if (local_c8.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_c8.Layout.Reference);
  }
  local_c8.Metadata = pFVar12;
  FRDGPass::FRDGPass(this_00,param_2,&local_c8,EVar10,Async);
  this_00[1]._padding_ = (longlong)local_a8;
  this_00[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_a0;
  *(FPropagateMappedMipsCS **)&this_00[1].FullPathIfDebug.Data.ArrayNum = pFVar3;
  this_00[1].Name.EventFormat = (wchar_t *)pFVar4;
  this_00->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFPropagateMappedMipsCS___FPerPageShaderDispatcher__QEAAXAEAVFRDGBuilder____QEAVFRDGEventName__AEBV__TShaderRefBase_VFPropagateMappedMipsCS__VFShaderMapPointerTable____PEAVFParameters_FPropagateMappedMipsCS___Z___6B_
  ;
  this_00[1].Name.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar5;
  this_00[1].Name.FormattedEventName.Data.ArrayNum = FVar6.VirtualShadowMapIdsOffset;
  this_00[1].Name.FormattedEventName.Data.ArrayMax = FVar6.NumVirtualShadowMapIds;
  this_00[1].ParameterStruct.Metadata = (FShaderParametersMetadata *)param_4;
  this_00[1].ParameterStruct.Contents = (uchar *)FVar7;
  this_00[1].ParameterStruct.Layout.Reference = (FRHIUniformBufferLayout *)FVar8;
  FRDGBuilder::ClobberPassOutputs(param_1,this_00);
  iVar11 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                       (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar11 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar11] = this_00;
  (this_00->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,this_00);
  return;
}

// operator() @ 1457c4f10

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
`FPerPageShaderDispatcher::AddPass<FAllocateNewPageMappingsCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  void *pvVar1;
  FShaderParametersMetadata *pFVar2;
  FShaderParameterBindings *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  uint *puVar13;
  longlong local_68;
  TIntVector3<int>_u_0 local_58;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  
  piVar11 = FPerPageShaderDispatcher::BinDispatchGroupDimXY;
  puVar13 = (uint *)((longlong)this + 0x24);
  local_68 = 4;
  do {
    if (0 < (int)*puVar13) {
      *(uint *)(*(longlong *)((longlong)this + 8) + 0x18) = puVar13[-1];
      *(uint *)(*(longlong *)((longlong)this + 8) + 0x1c) = *puVar13;
      uVar10 = *piVar11;
      *(uint *)(*(longlong *)((longlong)this + 8) + 0x24) = (uint)(uVar10 == 0);
      if (uVar10 == 0) {
        iVar9 = *puVar13 + 0x3f;
        if (iVar9 < 0) {
          iVar9 = *puVar13 + 0x7e;
        }
        uVar10 = iVar9 >> 6;
        *(uint *)(*(longlong *)((longlong)this + 8) + 0x20) = uVar10 * 8;
        uVar6 = 1;
        uVar12 = 1;
      }
      else {
        *(int *)(*(longlong *)((longlong)this + 8) + 0x20) = *piVar11 << 3;
        uVar10 = *piVar11;
        uVar6 = *puVar13;
        uVar12 = uVar10;
      }
      pvVar1 = *(void **)((longlong)this + 8);
      pFVar2 = *(FShaderParametersMetadata **)this;
      local_58._s_0.X = uVar10;
      local_58._s_0.Y = uVar12;
      local_58._s_0.Z = uVar6;
      FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_58._s_0);
      pFVar7 = TShaderRefBase<FAllocateNewPageMappingsCS,FShaderMapPointerTable>::GetComputeShader
                         ((TShaderRefBase<FAllocateNewPageMappingsCS,FShaderMapPointerTable> *)
                          ((longlong)this + 0x10));
      SetComputePipelineState(param_2,pFVar7);
      local_48.ShaderContent = *(FShader **)((longlong)this + 0x10);
      local_48.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
      ValidateShaderParameters(&local_48,pFVar2,pvVar1);
      ::SetShaderParameters
                (param_2,pFVar7,*(FShaderParameterBindings **)((longlong)this + 0x10),pFVar2,pvVar1)
      ;
      FRHIComputeCommandList::DispatchComputeShader(param_2,uVar10,uVar12,uVar6);
      pFVar7 = TShaderRefBase<FAllocateNewPageMappingsCS,FShaderMapPointerTable>::GetComputeShader
                         ((TShaderRefBase<FAllocateNewPageMappingsCS,FShaderMapPointerTable> *)
                          ((longlong)this + 0x10));
      if (GRHIGlobals.NeedsShaderUnbinds != false) {
        pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
        pFVar3 = *(FShaderParameterBindings **)((longlong)this + 0x10);
        if ((pFVar3->RootParameterBufferIndex != 0xffff) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                               ,0xb3,
                               L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UnsetShaderUAVs(pFVar8,pFVar3);
        FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
      }
    }
    puVar13 = puVar13 + 2;
    piVar11 = piVar11 + 1;
    local_68 = local_68 + -1;
    if (local_68 == 0) {
      return;
    }
  } while( true );
}

// operator() @ 1457c5260

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
`FPerPageShaderDispatcher::AddPass<FClearPageTableCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  void *pvVar1;
  FShaderParametersMetadata *pFVar2;
  FShaderParameterBindings *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  uint *puVar13;
  longlong local_68;
  TIntVector3<int>_u_0 local_58;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  
  piVar11 = FPerPageShaderDispatcher::BinDispatchGroupDimXY;
  puVar13 = (uint *)((longlong)this + 0x24);
  local_68 = 4;
  do {
    if (0 < (int)*puVar13) {
      *(uint *)(*(longlong *)((longlong)this + 8) + 0x18) = puVar13[-1];
      *(uint *)(*(longlong *)((longlong)this + 8) + 0x1c) = *puVar13;
      uVar10 = *piVar11;
      *(uint *)(*(longlong *)((longlong)this + 8) + 0x24) = (uint)(uVar10 == 0);
      if (uVar10 == 0) {
        iVar9 = *puVar13 + 0x3f;
        if (iVar9 < 0) {
          iVar9 = *puVar13 + 0x7e;
        }
        uVar10 = iVar9 >> 6;
        *(uint *)(*(longlong *)((longlong)this + 8) + 0x20) = uVar10 * 8;
        uVar6 = 1;
        uVar12 = 1;
      }
      else {
        *(int *)(*(longlong *)((longlong)this + 8) + 0x20) = *piVar11 << 3;
        uVar10 = *piVar11;
        uVar6 = *puVar13;
        uVar12 = uVar10;
      }
      pvVar1 = *(void **)((longlong)this + 8);
      pFVar2 = *(FShaderParametersMetadata **)this;
      local_58._s_0.X = uVar10;
      local_58._s_0.Y = uVar12;
      local_58._s_0.Z = uVar6;
      FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_58._s_0);
      pFVar7 = TShaderRefBase<FClearPageTableCS,FShaderMapPointerTable>::GetComputeShader
                         ((TShaderRefBase<FClearPageTableCS,FShaderMapPointerTable> *)
                          ((longlong)this + 0x10));
      SetComputePipelineState(param_2,pFVar7);
      local_48.ShaderContent = *(FShader **)((longlong)this + 0x10);
      local_48.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
      ValidateShaderParameters(&local_48,pFVar2,pvVar1);
      ::SetShaderParameters
                (param_2,pFVar7,*(FShaderParameterBindings **)((longlong)this + 0x10),pFVar2,pvVar1)
      ;
      FRHIComputeCommandList::DispatchComputeShader(param_2,uVar10,uVar12,uVar6);
      pFVar7 = TShaderRefBase<FClearPageTableCS,FShaderMapPointerTable>::GetComputeShader
                         ((TShaderRefBase<FClearPageTableCS,FShaderMapPointerTable> *)
                          ((longlong)this + 0x10));
      if (GRHIGlobals.NeedsShaderUnbinds != false) {
        pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
        pFVar3 = *(FShaderParameterBindings **)((longlong)this + 0x10);
        if ((pFVar3->RootParameterBufferIndex != 0xffff) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                               ,0xb3,
                               L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UnsetShaderUAVs(pFVar8,pFVar3);
        FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
      }
    }
    puVar13 = puVar13 + 2;
    piVar11 = piVar11 + 1;
    local_68 = local_68 + -1;
    if (local_68 == 0) {
      return;
    }
  } while( true );
}

// operator() @ 1457c6b00

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
`FPerPageShaderDispatcher::AddPass<FPropagateMappedMipsCS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  void *pvVar1;
  FShaderParametersMetadata *pFVar2;
  FShaderParameterBindings *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  uint *puVar13;
  longlong local_68;
  TIntVector3<int>_u_0 local_58;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  
  piVar11 = FPerPageShaderDispatcher::BinDispatchGroupDimXY;
  puVar13 = (uint *)((longlong)this + 0x24);
  local_68 = 4;
  do {
    if (0 < (int)*puVar13) {
      *(uint *)(*(longlong *)((longlong)this + 8) + 0x18) = puVar13[-1];
      *(uint *)(*(longlong *)((longlong)this + 8) + 0x1c) = *puVar13;
      uVar10 = *piVar11;
      *(uint *)(*(longlong *)((longlong)this + 8) + 0x24) = (uint)(uVar10 == 0);
      if (uVar10 == 0) {
        iVar9 = *puVar13 + 0x3f;
        if (iVar9 < 0) {
          iVar9 = *puVar13 + 0x7e;
        }
        uVar10 = iVar9 >> 6;
        *(uint *)(*(longlong *)((longlong)this + 8) + 0x20) = uVar10 * 8;
        uVar6 = 1;
        uVar12 = 1;
      }
      else {
        *(int *)(*(longlong *)((longlong)this + 8) + 0x20) = *piVar11 << 3;
        uVar10 = *piVar11;
        uVar6 = *puVar13;
        uVar12 = uVar10;
      }
      pvVar1 = *(void **)((longlong)this + 8);
      pFVar2 = *(FShaderParametersMetadata **)this;
      local_58._s_0.X = uVar10;
      local_58._s_0.Y = uVar12;
      local_58._s_0.Z = uVar6;
      FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_58._s_0);
      pFVar7 = TShaderRefBase<FPropagateMappedMipsCS,FShaderMapPointerTable>::GetComputeShader
                         ((TShaderRefBase<FPropagateMappedMipsCS,FShaderMapPointerTable> *)
                          ((longlong)this + 0x10));
      SetComputePipelineState(param_2,pFVar7);
      local_48.ShaderContent = *(FShader **)((longlong)this + 0x10);
      local_48.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
      ValidateShaderParameters(&local_48,pFVar2,pvVar1);
      ::SetShaderParameters
                (param_2,pFVar7,*(FShaderParameterBindings **)((longlong)this + 0x10),pFVar2,pvVar1)
      ;
      FRHIComputeCommandList::DispatchComputeShader(param_2,uVar10,uVar12,uVar6);
      pFVar7 = TShaderRefBase<FPropagateMappedMipsCS,FShaderMapPointerTable>::GetComputeShader
                         ((TShaderRefBase<FPropagateMappedMipsCS,FShaderMapPointerTable> *)
                          ((longlong)this + 0x10));
      if (GRHIGlobals.NeedsShaderUnbinds != false) {
        pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
        pFVar3 = *(FShaderParameterBindings **)((longlong)this + 0x10);
        if ((pFVar3->RootParameterBufferIndex != 0xffff) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                               ,0xb3,
                               L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UnsetShaderUAVs(pFVar8,pFVar3);
        FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar7,pFVar8);
      }
    }
    puVar13 = puVar13 + 2;
    piVar11 = piVar11 + 1;
    local_68 = local_68 + -1;
    if (local_68 == 0) {
      return;
    }
  } while( true );
}

// Init @ 145801040

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPerPageShaderDispatcher::Init
          (FPerPageShaderDispatcher *this,FRDGBuilder *param_1,FBuilder *param_2)

{
  FIdBinIndex *pFVar1;
  FBin *pFVar2;
  int iVar3;
  code *pcVar4;
  FBin FVar5;
  FIdBinIndex FVar6;
  bool bVar7;
  uint uVar8;
  FRDGBufferSRV *pFVar9;
  int iVar10;
  FIdBinIndex *pFVar11;
  int iVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  FRDGBuilder *local_res10;
  TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> local_68;
  FRDGBufferSRVDesc local_58;
  
  FVar5 = (param_2->Bins).Elements[1];
  local_68.AllocatorInstance.Data = (uint *)0x0;
  (this->Bins).Elements[0] = (param_2->Bins).Elements[0];
  (this->Bins).Elements[1] = FVar5;
  iVar12 = 0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  FVar5 = (param_2->Bins).Elements[3];
  (this->Bins).Elements[2] = (param_2->Bins).Elements[2];
  (this->Bins).Elements[3] = FVar5;
  (this->Bins).Elements[0].VirtualShadowMapIdsOffset = 0;
  iVar3 = (this->Bins).Elements[0].NumVirtualShadowMapIds;
  (this->Bins).Elements[0].NumVirtualShadowMapIds = 0;
  (this->Bins).Elements[1].VirtualShadowMapIdsOffset = iVar3;
  iVar10 = (this->Bins).Elements[1].NumVirtualShadowMapIds;
  (this->Bins).Elements[1].NumVirtualShadowMapIds = 0;
  iVar10 = iVar10 + iVar3;
  (this->Bins).Elements[2].VirtualShadowMapIdsOffset = iVar10;
  iVar3 = (this->Bins).Elements[2].NumVirtualShadowMapIds;
  (this->Bins).Elements[2].NumVirtualShadowMapIds = 0;
  (this->Bins).Elements[3].VirtualShadowMapIdsOffset = iVar10 + iVar3;
  (this->Bins).Elements[3].NumVirtualShadowMapIds = 0;
  uVar8 = (param_2->Tmp).ArrayNum;
  local_res10 = param_1;
  if ((int)uVar8 < 1) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
  }
  else {
    UE::Core::Private::
    ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
              (4,4,uVar8,&local_68.AllocatorInstance,&local_68.ArrayNum,&local_68.ArrayMax);
    iVar12 = local_68.ArrayNum;
  }
  pFVar11 = (param_2->Tmp).AllocatorInstance.Data;
  iVar3 = (param_2->Tmp).ArrayNum;
  pFVar1 = pFVar11 + iVar3;
  while( true ) {
    if ((param_2->Tmp).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPerPageShaderDispatcher::FBuilder::FIdBinIndex_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar1) {
      local_58.Buffer =
           CreateStructuredBuffer<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                     (local_res10,L"Shadow.Virtual.PerPageBinIds",&local_68);
      local_58._padding_._4_4_ = 0;
      local_58._padding_ = 0;
      local_58._padding_._0_4_ = 0xffffffff;
      local_58._padding_._0_1_ = 0;
      if ((((local_58.Buffer)->Desc).Usage & DrawIndirect) != None) {
        local_58._padding_._0_1_ = 0x1c;
      }
      pFVar9 = FRDGBuilder::CreateSRV(local_res10,&local_58);
      this->VirtualShadowMapIdsSRV = pFVar9;
      if (local_68.AllocatorInstance.Data != (uint *)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_68.AllocatorInstance.Data);
      }
      return;
    }
    uVar8 = pFVar11->BinIndex;
    iVar10 = (this->Bins).Elements[uVar8].NumVirtualShadowMapIds;
    pFVar2 = (this->Bins).Elements + uVar8;
    uVar13 = pFVar2->VirtualShadowMapIdsOffset + iVar10;
    pFVar2->NumVirtualShadowMapIds = iVar10 + 1;
    uVar8 = 0;
    if ((int)uVar13 < iVar12) {
      uVar8 = ~uVar13 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    pFVar11 = pFVar11 + 1;
    local_68.AllocatorInstance.Data[(int)uVar13] = pFVar11->VirtualShadowMapId;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

