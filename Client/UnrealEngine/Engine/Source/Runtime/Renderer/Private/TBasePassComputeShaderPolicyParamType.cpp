// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 52

// TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_> @ 144728d80

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

TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_> * __thiscall
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>
          (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameterMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_> *pTVar7;
  int iVar8;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  size_t sVar6;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  (this->ViewRectParam).BufferIndex = 0;
  (this->ViewRectParam).BaseIndex = 0;
  (this->ViewRectParam).NumBytes = 0;
  this_00 = &this->PassDataParam;
  this->Target2 = '\0';
  this->Target3 = '\0';
  this->Target4 = '\0';
  this->Target5 = '\0';
  this->Target6 = '\0';
  this->Target7 = '\0';
  (this->Targets).bIsBound = '\0';
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->PassDataParam).NumBytes = 0;
  (this->Target0).bIsBound = '\0';
  (this->Target1).bIsBound = '\0';
  *(undefined2 *)&this->field_0x108 = 0xffff;
  *(undefined2 *)&this->field_0x10a = 0xffff;
  *(undefined2 *)&this->field_0x10c = 0xffff;
  (this->ReflectionCaptureBuffer).BaseIndex = 0xffff;
  (this->ShadingOutputsParam).BaseIndex = 0xffff;
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x108,pFVar1,L"PrecomputedLightingBuffer"
             ,SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10a,pFVar1,L"IndirectLightingCache",
             SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10c,pFVar1,L"LightmapResourceCluster",
             SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->ReflectionCaptureBuffer,(FShaderParameterMap *)param_1->_padding_,
             L"ReflectionCapture",SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->ShadingOutputsParam,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs",SPF_Optional);
  FShaderParameter::Bind
            (&this->ViewRectParam,(FShaderParameterMap *)param_1->_padding_,L"ViewRect",SPF_Optional
            );
  FShaderParameter::Bind(this_00,(FShaderParameterMap *)param_1->_padding_,L"PassData",SPF_Optional)
  ;
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target0,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget0");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target1,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget1");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target2,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget2");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target3,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget3");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target4,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget4");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target5,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget5");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target6,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget6");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target7,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget7");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Targets,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTargets");
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FFogUniformParameters::GetStructMetadata();
  iVar8 = 0;
  local_68.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = iVar8;
  if (local_68.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_68.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_68._12_4_ = uStack_8c;
  local_68.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_68);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FFogUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FReflectionUniformParameters::GetStructMetadata();
  local_58.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = iVar8;
  if (local_58.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_58.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_58._12_4_ = uStack_7c;
  local_58.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_58);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FPlanarReflectionUniformParameters::GetStructMetadata();
  local_48.DataPtr = pFVar5->ShaderVariableName;
  if (local_48.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_48.DataPtr);
    iVar8 = (int)sVar6;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iVar8;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_48);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FPlanarReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  return this;
}

// TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_> @ 144729100

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

TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_> * __thiscall
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>
          (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameterMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_> *pTVar7;
  int iVar8;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  size_t sVar6;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  (this->ViewRectParam).BufferIndex = 0;
  (this->ViewRectParam).BaseIndex = 0;
  (this->ViewRectParam).NumBytes = 0;
  this_00 = &this->PassDataParam;
  this->Target2 = '\0';
  this->Target3 = '\0';
  this->Target4 = '\0';
  this->Target5 = '\0';
  this->Target6 = '\0';
  this->Target7 = '\0';
  (this->Targets).bIsBound = '\0';
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->PassDataParam).NumBytes = 0;
  (this->Target0).bIsBound = '\0';
  (this->Target1).bIsBound = '\0';
  *(undefined2 *)&this->field_0x108 = 0xffff;
  *(undefined2 *)&this->field_0x10a = 0xffff;
  *(undefined2 *)&this->field_0x10c = 0xffff;
  (this->ReflectionCaptureBuffer).BaseIndex = 0xffff;
  (this->ShadingOutputsParam).BaseIndex = 0xffff;
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x108,pFVar1,L"PrecomputedLightingBuffer"
             ,SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10a,pFVar1,L"IndirectLightingCache",
             SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10c,pFVar1,L"LightmapResourceCluster",
             SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->ReflectionCaptureBuffer,(FShaderParameterMap *)param_1->_padding_,
             L"ReflectionCapture",SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->ShadingOutputsParam,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs",SPF_Optional);
  FShaderParameter::Bind
            (&this->ViewRectParam,(FShaderParameterMap *)param_1->_padding_,L"ViewRect",SPF_Optional
            );
  FShaderParameter::Bind(this_00,(FShaderParameterMap *)param_1->_padding_,L"PassData",SPF_Optional)
  ;
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target0,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget0");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target1,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget1");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target2,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget2");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target3,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget3");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target4,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget4");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target5,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget5");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target6,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget6");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target7,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget7");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Targets,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTargets");
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FFogUniformParameters::GetStructMetadata();
  iVar8 = 0;
  local_68.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = iVar8;
  if (local_68.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_68.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_68._12_4_ = uStack_8c;
  local_68.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_68);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FFogUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FReflectionUniformParameters::GetStructMetadata();
  local_58.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = iVar8;
  if (local_58.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_58.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_58._12_4_ = uStack_7c;
  local_58.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_58);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FPlanarReflectionUniformParameters::GetStructMetadata();
  local_48.DataPtr = pFVar5->ShaderVariableName;
  if (local_48.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_48.DataPtr);
    iVar8 = (int)sVar6;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iVar8;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_48);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FPlanarReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  return this;
}

// TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_> @ 144729480

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

TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_> * __thiscall
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>
          (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameterMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_> *pTVar7;
  int iVar8;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  size_t sVar6;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  (this->ViewRectParam).BufferIndex = 0;
  (this->ViewRectParam).BaseIndex = 0;
  (this->ViewRectParam).NumBytes = 0;
  this_00 = &this->PassDataParam;
  this->Target2 = '\0';
  this->Target3 = '\0';
  this->Target4 = '\0';
  this->Target5 = '\0';
  this->Target6 = '\0';
  this->Target7 = '\0';
  (this->Targets).bIsBound = '\0';
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->PassDataParam).NumBytes = 0;
  (this->Target0).bIsBound = '\0';
  (this->Target1).bIsBound = '\0';
  *(undefined2 *)&this->field_0x108 = 0xffff;
  *(undefined2 *)&this->field_0x10a = 0xffff;
  *(undefined2 *)&this->field_0x10c = 0xffff;
  (this->ReflectionCaptureBuffer).BaseIndex = 0xffff;
  (this->ShadingOutputsParam).BaseIndex = 0xffff;
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x108,pFVar1,L"PrecomputedLightingBuffer"
             ,SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10a,pFVar1,L"IndirectLightingCache",
             SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10c,pFVar1,L"LightmapResourceCluster",
             SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->ReflectionCaptureBuffer,(FShaderParameterMap *)param_1->_padding_,
             L"ReflectionCapture",SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->ShadingOutputsParam,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs",SPF_Optional);
  FShaderParameter::Bind
            (&this->ViewRectParam,(FShaderParameterMap *)param_1->_padding_,L"ViewRect",SPF_Optional
            );
  FShaderParameter::Bind(this_00,(FShaderParameterMap *)param_1->_padding_,L"PassData",SPF_Optional)
  ;
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target0,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget0");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target1,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget1");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target2,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget2");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target3,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget3");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target4,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget4");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target5,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget5");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target6,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget6");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target7,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget7");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Targets,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTargets");
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FFogUniformParameters::GetStructMetadata();
  iVar8 = 0;
  local_68.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = iVar8;
  if (local_68.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_68.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_68._12_4_ = uStack_8c;
  local_68.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_68);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FFogUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FReflectionUniformParameters::GetStructMetadata();
  local_58.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = iVar8;
  if (local_58.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_58.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_58._12_4_ = uStack_7c;
  local_58.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_58);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FPlanarReflectionUniformParameters::GetStructMetadata();
  local_48.DataPtr = pFVar5->ShaderVariableName;
  if (local_48.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_48.DataPtr);
    iVar8 = (int)sVar6;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iVar8;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_48);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FPlanarReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  return this;
}

// TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_> @ 144729800

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

TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_> * __thiscall
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>
          (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameterMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_> *pTVar7;
  int iVar8;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  size_t sVar6;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  (this->ViewRectParam).BufferIndex = 0;
  (this->ViewRectParam).BaseIndex = 0;
  (this->ViewRectParam).NumBytes = 0;
  this_00 = &this->PassDataParam;
  this->Target2 = '\0';
  this->Target3 = '\0';
  this->Target4 = '\0';
  this->Target5 = '\0';
  this->Target6 = '\0';
  this->Target7 = '\0';
  (this->Targets).bIsBound = '\0';
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->PassDataParam).NumBytes = 0;
  (this->Target0).bIsBound = '\0';
  (this->Target1).bIsBound = '\0';
  *(undefined2 *)&this->field_0x108 = 0xffff;
  *(undefined2 *)&this->field_0x10a = 0xffff;
  *(undefined2 *)&this->field_0x10c = 0xffff;
  (this->ReflectionCaptureBuffer).BaseIndex = 0xffff;
  (this->ShadingOutputsParam).BaseIndex = 0xffff;
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x108,pFVar1,L"PrecomputedLightingBuffer"
             ,SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10a,pFVar1,L"IndirectLightingCache",
             SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10c,pFVar1,L"LightmapResourceCluster",
             SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->ReflectionCaptureBuffer,(FShaderParameterMap *)param_1->_padding_,
             L"ReflectionCapture",SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->ShadingOutputsParam,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs",SPF_Optional);
  FShaderParameter::Bind
            (&this->ViewRectParam,(FShaderParameterMap *)param_1->_padding_,L"ViewRect",SPF_Optional
            );
  FShaderParameter::Bind(this_00,(FShaderParameterMap *)param_1->_padding_,L"PassData",SPF_Optional)
  ;
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target0,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget0");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target1,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget1");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target2,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget2");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target3,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget3");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target4,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget4");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target5,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget5");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target6,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget6");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target7,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget7");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Targets,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTargets");
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FFogUniformParameters::GetStructMetadata();
  iVar8 = 0;
  local_68.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = iVar8;
  if (local_68.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_68.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_68._12_4_ = uStack_8c;
  local_68.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_68);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FFogUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FReflectionUniformParameters::GetStructMetadata();
  local_58.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = iVar8;
  if (local_58.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_58.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_58._12_4_ = uStack_7c;
  local_58.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_58);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FPlanarReflectionUniformParameters::GetStructMetadata();
  local_48.DataPtr = pFVar5->ShaderVariableName;
  if (local_48.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_48.DataPtr);
    iVar8 = (int)sVar6;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iVar8;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_48);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FPlanarReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  return this;
}

// TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_> @ 144729b80

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

TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_> * __thiscall
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>
          (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameterMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_> *pTVar7;
  int iVar8;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  size_t sVar6;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  (this->ViewRectParam).BufferIndex = 0;
  (this->ViewRectParam).BaseIndex = 0;
  (this->ViewRectParam).NumBytes = 0;
  this_00 = &this->PassDataParam;
  this->Target2 = '\0';
  this->Target3 = '\0';
  this->Target4 = '\0';
  this->Target5 = '\0';
  this->Target6 = '\0';
  this->Target7 = '\0';
  (this->Targets).bIsBound = '\0';
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->PassDataParam).NumBytes = 0;
  (this->Target0).bIsBound = '\0';
  (this->Target1).bIsBound = '\0';
  *(undefined2 *)&this->field_0x108 = 0xffff;
  *(undefined2 *)&this->field_0x10a = 0xffff;
  *(undefined2 *)&this->field_0x10c = 0xffff;
  (this->ReflectionCaptureBuffer).BaseIndex = 0xffff;
  (this->ShadingOutputsParam).BaseIndex = 0xffff;
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x108,pFVar1,L"PrecomputedLightingBuffer"
             ,SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10a,pFVar1,L"IndirectLightingCache",
             SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10c,pFVar1,L"LightmapResourceCluster",
             SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->ReflectionCaptureBuffer,(FShaderParameterMap *)param_1->_padding_,
             L"ReflectionCapture",SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->ShadingOutputsParam,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs",SPF_Optional);
  FShaderParameter::Bind
            (&this->ViewRectParam,(FShaderParameterMap *)param_1->_padding_,L"ViewRect",SPF_Optional
            );
  FShaderParameter::Bind(this_00,(FShaderParameterMap *)param_1->_padding_,L"PassData",SPF_Optional)
  ;
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target0,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget0");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target1,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget1");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target2,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget2");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target3,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget3");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target4,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget4");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target5,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget5");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target6,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget6");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target7,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget7");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Targets,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTargets");
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FFogUniformParameters::GetStructMetadata();
  iVar8 = 0;
  local_68.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = iVar8;
  if (local_68.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_68.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_68._12_4_ = uStack_8c;
  local_68.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_68);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FFogUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FReflectionUniformParameters::GetStructMetadata();
  local_58.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = iVar8;
  if (local_58.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_58.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_58._12_4_ = uStack_7c;
  local_58.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_58);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FPlanarReflectionUniformParameters::GetStructMetadata();
  local_48.DataPtr = pFVar5->ShaderVariableName;
  if (local_48.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_48.DataPtr);
    iVar8 = (int)sVar6;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iVar8;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_48);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FPlanarReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  return this;
}

// TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_> @ 144729f00

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

TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_> * __thiscall
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>
          (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameterMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_> *pTVar7;
  int iVar8;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  size_t sVar6;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  (this->ViewRectParam).BufferIndex = 0;
  (this->ViewRectParam).BaseIndex = 0;
  (this->ViewRectParam).NumBytes = 0;
  this_00 = &this->PassDataParam;
  this->Target2 = '\0';
  this->Target3 = '\0';
  this->Target4 = '\0';
  this->Target5 = '\0';
  this->Target6 = '\0';
  this->Target7 = '\0';
  (this->Targets).bIsBound = '\0';
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->PassDataParam).NumBytes = 0;
  (this->Target0).bIsBound = '\0';
  (this->Target1).bIsBound = '\0';
  *(undefined2 *)&this->field_0x108 = 0xffff;
  *(undefined2 *)&this->field_0x10a = 0xffff;
  *(undefined2 *)&this->field_0x10c = 0xffff;
  (this->ReflectionCaptureBuffer).BaseIndex = 0xffff;
  (this->ShadingOutputsParam).BaseIndex = 0xffff;
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x108,pFVar1,L"PrecomputedLightingBuffer"
             ,SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10a,pFVar1,L"IndirectLightingCache",
             SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10c,pFVar1,L"LightmapResourceCluster",
             SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->ReflectionCaptureBuffer,(FShaderParameterMap *)param_1->_padding_,
             L"ReflectionCapture",SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->ShadingOutputsParam,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs",SPF_Optional);
  FShaderParameter::Bind
            (&this->ViewRectParam,(FShaderParameterMap *)param_1->_padding_,L"ViewRect",SPF_Optional
            );
  FShaderParameter::Bind(this_00,(FShaderParameterMap *)param_1->_padding_,L"PassData",SPF_Optional)
  ;
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target0,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget0");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target1,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget1");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target2,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget2");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target3,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget3");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target4,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget4");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target5,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget5");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target6,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget6");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target7,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget7");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Targets,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTargets");
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FFogUniformParameters::GetStructMetadata();
  iVar8 = 0;
  local_68.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = iVar8;
  if (local_68.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_68.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_68._12_4_ = uStack_8c;
  local_68.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_68);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FFogUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FReflectionUniformParameters::GetStructMetadata();
  local_58.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = iVar8;
  if (local_58.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_58.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_58._12_4_ = uStack_7c;
  local_58.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_58);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FPlanarReflectionUniformParameters::GetStructMetadata();
  local_48.DataPtr = pFVar5->ShaderVariableName;
  if (local_48.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_48.DataPtr);
    iVar8 = (int)sVar6;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iVar8;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_48);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FPlanarReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  return this;
}

// TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_> @ 14472a280

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

TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_> * __thiscall
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>
          (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameterMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_> *pTVar7;
  int iVar8;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  size_t sVar6;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  (this->ViewRectParam).BufferIndex = 0;
  (this->ViewRectParam).BaseIndex = 0;
  (this->ViewRectParam).NumBytes = 0;
  this_00 = &this->PassDataParam;
  this->Target2 = '\0';
  this->Target3 = '\0';
  this->Target4 = '\0';
  this->Target5 = '\0';
  this->Target6 = '\0';
  this->Target7 = '\0';
  (this->Targets).bIsBound = '\0';
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->PassDataParam).NumBytes = 0;
  (this->Target0).bIsBound = '\0';
  (this->Target1).bIsBound = '\0';
  *(undefined2 *)&this->field_0x108 = 0xffff;
  *(undefined2 *)&this->field_0x10a = 0xffff;
  *(undefined2 *)&this->field_0x10c = 0xffff;
  (this->ReflectionCaptureBuffer).BaseIndex = 0xffff;
  (this->ShadingOutputsParam).BaseIndex = 0xffff;
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x108,pFVar1,L"PrecomputedLightingBuffer"
             ,SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10a,pFVar1,L"IndirectLightingCache",
             SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10c,pFVar1,L"LightmapResourceCluster",
             SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->ReflectionCaptureBuffer,(FShaderParameterMap *)param_1->_padding_,
             L"ReflectionCapture",SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->ShadingOutputsParam,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs",SPF_Optional);
  FShaderParameter::Bind
            (&this->ViewRectParam,(FShaderParameterMap *)param_1->_padding_,L"ViewRect",SPF_Optional
            );
  FShaderParameter::Bind(this_00,(FShaderParameterMap *)param_1->_padding_,L"PassData",SPF_Optional)
  ;
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target0,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget0");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target1,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget1");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target2,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget2");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target3,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget3");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target4,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget4");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target5,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget5");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target6,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget6");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target7,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget7");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Targets,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTargets");
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FFogUniformParameters::GetStructMetadata();
  iVar8 = 0;
  local_68.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = iVar8;
  if (local_68.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_68.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_68._12_4_ = uStack_8c;
  local_68.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_68);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FFogUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FReflectionUniformParameters::GetStructMetadata();
  local_58.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = iVar8;
  if (local_58.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_58.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_58._12_4_ = uStack_7c;
  local_58.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_58);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FPlanarReflectionUniformParameters::GetStructMetadata();
  local_48.DataPtr = pFVar5->ShaderVariableName;
  if (local_48.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_48.DataPtr);
    iVar8 = (int)sVar6;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iVar8;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_48);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FPlanarReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  return this;
}

// TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy> @ 14472a600

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

TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy> * __thiscall
TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::
TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>
          (TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>
           *this,CompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameterMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy> *pTVar7;
  int iVar8;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  size_t sVar6;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  this->ShadingOutputsParam = 0xffff;
  (this->ViewRectParam).BufferIndex = 0;
  (this->ViewRectParam).BaseIndex = 0;
  (this->ViewRectParam).NumBytes = 0;
  this_00 = &this->PassDataParam;
  *(undefined2 *)((longlong)&this->_padding_ + 2) = 0xffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0xffff;
  *(undefined2 *)((longlong)&this->_padding_ + 6) = 0xffff;
  *(undefined2 *)&this->_padding_ = 0xffff;
  (this->ReflectionCaptureBuffer).BaseIndex = 0xffff;
  this->Target2 = '\0';
  this->Target3 = '\0';
  this->Target4 = '\0';
  this->Target5 = '\0';
  this->Target6 = '\0';
  this->Target7 = '\0';
  (this->Targets).bIsBound = '\0';
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->PassDataParam).NumBytes = 0;
  (this->Target0).bIsBound = '\0';
  (this->Target1).bIsBound = '\0';
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->_padding_,pFVar1,L"PrecomputedLightingBuffer",
             SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)((longlong)&this->_padding_ + 2),pFVar1,
             L"IndirectLightingCache",SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)((longlong)&this->_padding_ + 4),pFVar1,
             L"LightmapResourceCluster",SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)((longlong)&this->_padding_ + 6),pFVar1,
             L"TranslucentSelfShadow",SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->ReflectionCaptureBuffer,(FShaderParameterMap *)param_1->_padding_,
             L"ReflectionCapture",SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->ShadingOutputsParam,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs",SPF_Optional);
  FShaderParameter::Bind
            (&this->ViewRectParam,(FShaderParameterMap *)param_1->_padding_,L"ViewRect",SPF_Optional
            );
  FShaderParameter::Bind(this_00,(FShaderParameterMap *)param_1->_padding_,L"PassData",SPF_Optional)
  ;
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target0,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget0");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target1,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget1");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target2,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget2");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target3,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget3");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target4,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget4");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target5,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget5");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target6,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget6");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target7,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget7");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Targets,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTargets");
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FFogUniformParameters::GetStructMetadata();
  iVar8 = 0;
  local_68.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = iVar8;
  if (local_68.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_68.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_68._12_4_ = uStack_8c;
  local_68.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_68);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FFogUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>
                *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FReflectionUniformParameters::GetStructMetadata();
  local_58.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = iVar8;
  if (local_58.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_58.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_58._12_4_ = uStack_7c;
  local_58.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_58);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>
                *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FPlanarReflectionUniformParameters::GetStructMetadata();
  local_48.DataPtr = pFVar5->ShaderVariableName;
  if (local_48.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_48.DataPtr);
    iVar8 = (int)sVar6;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iVar8;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_48);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FPlanarReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>
                *)(*pcVar2)();
      return pTVar7;
    }
  }
  return this;
}

// TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy> @ 14472a9a0

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

TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy> * __thiscall
TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::
TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>
          (TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameter *this_01;
  FShaderParameterMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy> *pTVar7;
  int iVar8;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  size_t sVar6;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  this_00 = &this->ViewRectParam;
  this_01 = &this->PassDataParam;
  this->_padding_ = -1;
  (this->ReflectionCaptureBuffer).BaseIndex = 0xffff;
  (this->ShadingOutputsParam).BaseIndex = 0xffff;
  this->Target4 = '\0';
  this->Target5 = '\0';
  this->Target6 = '\0';
  this->Target7 = '\0';
  (this->Targets).bIsBound = '\0';
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->ViewRectParam).NumBytes = 0;
  this_01->BufferIndex = 0;
  this_01->BaseIndex = 0;
  (this->PassDataParam).NumBytes = 0;
  (this->Target0).bIsBound = '\0';
  (this->Target1).bIsBound = '\0';
  (this->Target2).bIsBound = '\0';
  (this->Target3).bIsBound = '\0';
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->_padding_,
             (FShaderParameterMap *)param_1->_padding_,L"TranslucentSelfShadow",SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->ReflectionCaptureBuffer,(FShaderParameterMap *)param_1->_padding_,
             L"ReflectionCapture",SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->ShadingOutputsParam,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs",SPF_Optional);
  FShaderParameter::Bind(this_00,(FShaderParameterMap *)param_1->_padding_,L"ViewRect",SPF_Optional)
  ;
  FShaderParameter::Bind(this_01,(FShaderParameterMap *)param_1->_padding_,L"PassData",SPF_Optional)
  ;
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target0,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget0");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target1,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget1");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target2,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget2");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target3,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget3");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target4,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget4");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target5,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget5");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target6,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget6");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target7,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget7");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Targets,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTargets");
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FFogUniformParameters::GetStructMetadata();
  iVar8 = 0;
  local_68.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = iVar8;
  if (local_68.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_68.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_68._12_4_ = uStack_8c;
  local_68.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_68);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FFogUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy> *)(*pcVar2)()
      ;
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FReflectionUniformParameters::GetStructMetadata();
  local_58.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = iVar8;
  if (local_58.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_58.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_58._12_4_ = uStack_7c;
  local_58.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_58);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy> *)(*pcVar2)()
      ;
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FPlanarReflectionUniformParameters::GetStructMetadata();
  local_48.DataPtr = pFVar5->ShaderVariableName;
  if (local_48.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_48.DataPtr);
    iVar8 = (int)sVar6;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iVar8;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_48);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FPlanarReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy> *)(*pcVar2)()
      ;
      return pTVar7;
    }
  }
  return this;
}

// TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy> @ 14472ad00

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

TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy> * __thiscall
TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::
TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>
          (TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameterMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy> *pTVar7;
  int iVar8;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  size_t sVar6;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  this->ShadingOutputsParam = 0xffff;
  (this->ViewRectParam).BufferIndex = 0;
  (this->ViewRectParam).BaseIndex = 0;
  (this->ViewRectParam).NumBytes = 0;
  this_00 = &this->PassDataParam;
  *(undefined2 *)((longlong)&this->_padding_ + 2) = 0xffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0xffff;
  *(undefined2 *)((longlong)&this->_padding_ + 6) = 0xffff;
  *(undefined2 *)&this->_padding_ = 0xffff;
  (this->ReflectionCaptureBuffer).BaseIndex = 0xffff;
  this->Target2 = '\0';
  this->Target3 = '\0';
  this->Target4 = '\0';
  this->Target5 = '\0';
  this->Target6 = '\0';
  this->Target7 = '\0';
  (this->Targets).bIsBound = '\0';
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->PassDataParam).NumBytes = 0;
  (this->Target0).bIsBound = '\0';
  (this->Target1).bIsBound = '\0';
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->_padding_,pFVar1,L"PrecomputedLightingBuffer",
             SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)((longlong)&this->_padding_ + 2),pFVar1,
             L"IndirectLightingCache",SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)((longlong)&this->_padding_ + 4),pFVar1,
             L"LightmapResourceCluster",SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)((longlong)&this->_padding_ + 6),pFVar1,
             L"TranslucentSelfShadow",SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->ReflectionCaptureBuffer,(FShaderParameterMap *)param_1->_padding_,
             L"ReflectionCapture",SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->ShadingOutputsParam,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs",SPF_Optional);
  FShaderParameter::Bind
            (&this->ViewRectParam,(FShaderParameterMap *)param_1->_padding_,L"ViewRect",SPF_Optional
            );
  FShaderParameter::Bind(this_00,(FShaderParameterMap *)param_1->_padding_,L"PassData",SPF_Optional)
  ;
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target0,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget0");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target1,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget1");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target2,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget2");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target3,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget3");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target4,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget4");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target5,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget5");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target6,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget6");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target7,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget7");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Targets,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTargets");
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FFogUniformParameters::GetStructMetadata();
  iVar8 = 0;
  local_68.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = iVar8;
  if (local_68.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_68.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_68._12_4_ = uStack_8c;
  local_68.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_68);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FFogUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy> *)
               (*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FReflectionUniformParameters::GetStructMetadata();
  local_58.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = iVar8;
  if (local_58.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_58.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_58._12_4_ = uStack_7c;
  local_58.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_58);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy> *)
               (*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FPlanarReflectionUniformParameters::GetStructMetadata();
  local_48.DataPtr = pFVar5->ShaderVariableName;
  if (local_48.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_48.DataPtr);
    iVar8 = (int)sVar6;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iVar8;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_48);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FPlanarReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy> *)
               (*pcVar2)();
      return pTVar7;
    }
  }
  return this;
}

// TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy> @ 14472b0a0

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

TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy> * __thiscall
TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::
TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>
          (TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameterMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy> *pTVar7;
  int iVar8;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  size_t sVar6;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  (this->ViewRectParam).BufferIndex = 0;
  (this->ViewRectParam).BaseIndex = 0;
  (this->ViewRectParam).NumBytes = 0;
  this_00 = &this->PassDataParam;
  this->Target2 = '\0';
  this->Target3 = '\0';
  this->Target4 = '\0';
  this->Target5 = '\0';
  this->Target6 = '\0';
  this->Target7 = '\0';
  (this->Targets).bIsBound = '\0';
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->PassDataParam).NumBytes = 0;
  (this->Target0).bIsBound = '\0';
  (this->Target1).bIsBound = '\0';
  *(undefined2 *)&this->field_0x108 = 0xffff;
  *(undefined2 *)&this->field_0x10a = 0xffff;
  *(undefined2 *)&this->field_0x10c = 0xffff;
  (this->ReflectionCaptureBuffer).BaseIndex = 0xffff;
  (this->ShadingOutputsParam).BaseIndex = 0xffff;
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x108,pFVar1,L"PrecomputedLightingBuffer"
             ,SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10a,pFVar1,L"IndirectLightingCache",
             SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10c,pFVar1,L"LightmapResourceCluster",
             SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->ReflectionCaptureBuffer,(FShaderParameterMap *)param_1->_padding_,
             L"ReflectionCapture",SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->ShadingOutputsParam,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs",SPF_Optional);
  FShaderParameter::Bind
            (&this->ViewRectParam,(FShaderParameterMap *)param_1->_padding_,L"ViewRect",SPF_Optional
            );
  FShaderParameter::Bind(this_00,(FShaderParameterMap *)param_1->_padding_,L"PassData",SPF_Optional)
  ;
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target0,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget0");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target1,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget1");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target2,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget2");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target3,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget3");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target4,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget4");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target5,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget5");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target6,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget6");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Target7,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTarget7");
  FShaderUniformBufferMemberParameter::Bind
            (&this->Targets,(FShaderParameterMap *)param_1->_padding_,
             L"ComputeShadingOutputs.OutTargets");
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FFogUniformParameters::GetStructMetadata();
  iVar8 = 0;
  local_68.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = iVar8;
  if (local_68.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_68.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_68._12_4_ = uStack_8c;
  local_68.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_68);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FFogUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FReflectionUniformParameters::GetStructMetadata();
  local_58.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = iVar8;
  if (local_58.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_58.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_58._12_4_ = uStack_7c;
  local_58.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_58);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FPlanarReflectionUniformParameters::GetStructMetadata();
  local_48.DataPtr = pFVar5->ShaderVariableName;
  if (local_48.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_48.DataPtr);
    iVar8 = (int)sVar6;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iVar8;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_48);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FPlanarReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x18e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy> *)(*pcVar2)();
      return pTVar7;
    }
  }
  return this;
}

// TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy> @ 14472b420

TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy> * __thiscall
TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::
TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>
          (TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy> *this)

{
  FMaterialShader::FMaterialShader((FMaterialShader *)this);
  *(undefined8 *)&this->field_0x108 = 0xffffffffffffffff;
  *(undefined8 *)&this->field_0xf8 = 0;
  *(undefined2 *)&this->field_0x100 = 0xffff;
  this->ShadingOutputsParam = 0xffff;
  (this->ViewRectParam).BufferIndex = 0;
  (this->ViewRectParam).BaseIndex = 0;
  (this->ViewRectParam).NumBytes = 0;
  (this->PassDataParam).BufferIndex = 0;
  (this->PassDataParam).BaseIndex = 0;
  (this->PassDataParam).NumBytes = 0;
  this->Target0 = '\0';
  this->Target1 = '\0';
  this->Target2 = '\0';
  this->Target3 = '\0';
  this->Target4 = '\0';
  this->Target5 = '\0';
  this->Target6 = '\0';
  this->Target7 = '\0';
  (this->Targets).bIsBound = '\0';
  return this;
}

// ~TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy> @ 14472ec10

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

void __thiscall
TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::
~TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>
          (TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0xe0);
  FShader::~FShader((FShader *)this);
  return;
}

// GetBoundTargetMask @ 14475c0d0

uint __thiscall
TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::GetBoundTargetMask
          (TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy> *this)

{
  return -(uint)((this->Targets).bIsBound != '\0') & 0x100 |
         -(uint)((this->Target7).bIsBound != '\0') & 0x80 |
         -(uint)((this->Target6).bIsBound != '\0') & 0x40 |
         -(uint)((this->Target5).bIsBound != '\0') & 0x20 |
         -(uint)((this->Target4).bIsBound != '\0') & 0x10 |
         -(uint)((this->Target3).bIsBound != '\0') & 8 |
         -(uint)((this->Target2).bIsBound != '\0') & 4 |
         -(uint)((this->Target1).bIsBound != '\0') & 2 | (uint)((this->Target0).bIsBound != '\0');
}

// GetShaderBindings @ 14475fc30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::GetShaderBindings
          (TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy> *this,FScene *param_1,
          Type param_2,FPrimitiveSceneProxy *param_3,FMaterialRenderProxy *param_4,
          FMaterial *param_5,TBasePassShaderElementData<FUniformLightMapPolicy> *param_6,
          FMeshDrawSingleShaderBindings *param_7)

{
  FUniformLightMapPolicyShaderParametersType *pFVar1;
  
  FMeshMaterialShader::GetShaderBindings
            ((FMeshMaterialShader *)this,param_1,param_2,param_3,param_4,param_5,
             (FMeshMaterialShaderElementData *)param_6,param_7);
  pFVar1 = (FUniformLightMapPolicyShaderParametersType *)&this->field_0x108;
  if (this == (TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy> *)0x0) {
    pFVar1 = (FUniformLightMapPolicyShaderParametersType *)0x0;
  }
  FUniformLightMapPolicy::GetComputeShaderBindings
            (param_3,&param_6->LightMapPolicyElementData,pFVar1,param_7);
  return;
}

// GetTypeLayout @ 144777eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::GetTypeLayout
          (TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy> *this)

{
  if ((DAT_15509151f & 2) == 0) {
    DAT_15509151f = DAT_15509151f | 2;
    _DAT_1550914c0 = L"TBasePassComputeShaderPolicyParamType";
    _DAT_155091510 = 0x128;
    _DAT_1550914d8 = Freeze::DefaultWriteMemoryImage;
    _DAT_1550914e0 = Freeze::DefaultUnfrozenCopy;
    _DAT_1550914e8 = Freeze::DefaultAppendHash;
    _DAT_1550914f0 = Freeze::DefaultGetTargetAlignment;
    _DAT_1550914f8 = Freeze::DefaultToString;
    _DAT_1550914d0 = InternalDestroy;
    _DAT_155091500 =
         TGetDefaultObjectHelper<TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>,0>::
         Do;
    _DAT_155091518 = 8;
    DAT_15509151c = 0;
    _DAT_155091514 = 0xffffffff;
    InternalLinkType<6>::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Target0";
    DAT_15509556a = Freeze::FindFieldNameLength(L"Target0");
    _DAT_155095548 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
    _DAT_155095550 = DAT_1550914c8;
    DAT_1550914c8 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155095558 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155095560 = 0x11e;
    _DAT_155095564 = 1;
    _DAT_155095568 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PassDataParam";
    DAT_15509496a = Freeze::FindFieldNameLength(L"PassDataParam");
    _DAT_155094948 = FShaderParameter::StaticGetTypeLayout();
    _DAT_155094950 = DAT_1550914c8;
    DAT_1550914c8 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155094958 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155094960 = 0x118;
    _DAT_155094964 = 1;
    _DAT_155094968 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ViewRectParam";
    DAT_15509480a = Freeze::FindFieldNameLength(L"ViewRectParam");
    _DAT_1550947e8 = FShaderParameter::StaticGetTypeLayout();
    _DAT_1550947f0 = DAT_1550914c8;
    DAT_1550914c8 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550947f8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155094800 = 0x112;
    _DAT_155094804 = 1;
    _DAT_155094808 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadingOutputsParam";
    DAT_15509467a = Freeze::FindFieldNameLength(L"ShadingOutputsParam");
    _DAT_155094658 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155094668 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155094670 = 0x110;
    _DAT_155094674 = 1;
    _DAT_155094678 = 0;
    _DAT_155094660 = DAT_1550914c8;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ReflectionCaptureBuffer";
    DAT_1550914c8 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    DAT_155092762 = Freeze::FindFieldNameLength(L"ReflectionCaptureBuffer");
    _DAT_155092740 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155092748 = DAT_1550914c8;
    DAT_1550914c8 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155092750 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155092758 = 0x10e;
    _DAT_15509275c = 1;
    _DAT_155092760 = 0;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
    DAT_15509151d = DAT_15509151d + '\x01';
    ::FieldBuffer._16_8_ = DAT_1550914c8;
    DAT_1550914c8 = (uchar **)::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\b';
    ::FieldBuffer[0x21] = '\x01';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      DAT_15509151e = DAT_15509151e + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    DAT_15509151d = DAT_15509151d + '\x01';
    ::FieldBuffer._16_8_ = DAT_1550914c8;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    DAT_1550914c8 = (uchar **)::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      DAT_15509151e = DAT_15509151e + '\x01';
    }
    FTypeLayoutDesc::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// Initialize @ 14477a3f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<6>::Initialize
          (FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Targets";
  DAT_155098fc2 = Freeze::FindFieldNameLength(L"Targets");
  _DAT_155098fa0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098fb8 = 0x126;
  _DAT_155098fb0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098fbc = 1;
  _DAT_155098fc0 = 0;
  _DAT_155098fa8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target7";
  DAT_155098de2 = Freeze::FindFieldNameLength(L"Target7");
  _DAT_155098dc0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098dd0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098dd8 = 0x125;
  _DAT_155098ddc = 1;
  _DAT_155098de0 = 0;
  _DAT_155098dc8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target6";
  DAT_155098c02 = Freeze::FindFieldNameLength(L"Target6");
  _DAT_155098be0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098bf0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098bf8 = 0x124;
  _DAT_155098bfc = 1;
  _DAT_155098c00 = 0;
  _DAT_155098be8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target5";
  DAT_155098a22 = Freeze::FindFieldNameLength(L"Target5");
  _DAT_155098a00 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098a10 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098a18 = 0x123;
  _DAT_155098a1c = 1;
  _DAT_155098a20 = 0;
  _DAT_155098a08 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target4";
  DAT_155098842 = Freeze::FindFieldNameLength(L"Target4");
  _DAT_155098820 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098830 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098838 = 0x122;
  _DAT_15509883c = 1;
  _DAT_155098840 = 0;
  _DAT_155098828 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target3";
  DAT_155098662 = Freeze::FindFieldNameLength(L"Target3");
  _DAT_155098640 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098650 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098658 = 0x121;
  _DAT_15509865c = 1;
  _DAT_155098660 = 0;
  _DAT_155098648 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target2";
  DAT_155098482 = Freeze::FindFieldNameLength(L"Target2");
  _DAT_155098460 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098470 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098478 = 0x120;
  _DAT_15509847c = 1;
  _DAT_155098480 = 0;
  _DAT_155098468 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target1";
  DAT_1550982a2 = Freeze::FindFieldNameLength(L"Target1");
  _DAT_155098280 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098290 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098298 = 0x11f;
  _DAT_15509829c = 1;
  _DAT_1550982a0 = 0;
  _DAT_155098288 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 14477a710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<6>::Initialize
          (FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Targets";
  DAT_155098f92 = Freeze::FindFieldNameLength(L"Targets");
  _DAT_155098f70 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098f88 = 0x126;
  _DAT_155098f80 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098f8c = 1;
  _DAT_155098f90 = 0;
  _DAT_155098f78 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target7";
  DAT_155098db2 = Freeze::FindFieldNameLength(L"Target7");
  _DAT_155098d90 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098da0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098da8 = 0x125;
  _DAT_155098dac = 1;
  _DAT_155098db0 = 0;
  _DAT_155098d98 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target6";
  DAT_155098bd2 = Freeze::FindFieldNameLength(L"Target6");
  _DAT_155098bb0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098bc0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098bc8 = 0x124;
  _DAT_155098bcc = 1;
  _DAT_155098bd0 = 0;
  _DAT_155098bb8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target5";
  DAT_1550989f2 = Freeze::FindFieldNameLength(L"Target5");
  _DAT_1550989d0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_1550989e0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550989e8 = 0x123;
  _DAT_1550989ec = 1;
  _DAT_1550989f0 = 0;
  _DAT_1550989d8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target4";
  DAT_155098812 = Freeze::FindFieldNameLength(L"Target4");
  _DAT_1550987f0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098800 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098808 = 0x122;
  _DAT_15509880c = 1;
  _DAT_155098810 = 0;
  _DAT_1550987f8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target3";
  DAT_155098632 = Freeze::FindFieldNameLength(L"Target3");
  _DAT_155098610 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098620 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098628 = 0x121;
  _DAT_15509862c = 1;
  _DAT_155098630 = 0;
  _DAT_155098618 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target2";
  DAT_155098452 = Freeze::FindFieldNameLength(L"Target2");
  _DAT_155098430 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098440 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098448 = 0x120;
  _DAT_15509844c = 1;
  _DAT_155098450 = 0;
  _DAT_155098438 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target1";
  DAT_155098272 = Freeze::FindFieldNameLength(L"Target1");
  _DAT_155098250 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098260 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098268 = 0x11f;
  _DAT_15509826c = 1;
  _DAT_155098270 = 0;
  _DAT_155098258 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 14477aa30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<6>::Initialize
          (FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Targets";
  DAT_155098f62 = Freeze::FindFieldNameLength(L"Targets");
  _DAT_155098f40 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098f58 = 0x126;
  _DAT_155098f50 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098f5c = 1;
  _DAT_155098f60 = 0;
  _DAT_155098f48 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target7";
  DAT_155098d82 = Freeze::FindFieldNameLength(L"Target7");
  _DAT_155098d60 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098d70 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098d78 = 0x125;
  _DAT_155098d7c = 1;
  _DAT_155098d80 = 0;
  _DAT_155098d68 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target6";
  DAT_155098ba2 = Freeze::FindFieldNameLength(L"Target6");
  _DAT_155098b80 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098b90 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098b98 = 0x124;
  _DAT_155098b9c = 1;
  _DAT_155098ba0 = 0;
  _DAT_155098b88 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target5";
  DAT_1550989c2 = Freeze::FindFieldNameLength(L"Target5");
  _DAT_1550989a0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_1550989b0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550989b8 = 0x123;
  _DAT_1550989bc = 1;
  _DAT_1550989c0 = 0;
  _DAT_1550989a8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target4";
  DAT_1550987e2 = Freeze::FindFieldNameLength(L"Target4");
  _DAT_1550987c0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_1550987d0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550987d8 = 0x122;
  _DAT_1550987dc = 1;
  _DAT_1550987e0 = 0;
  _DAT_1550987c8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target3";
  DAT_155098602 = Freeze::FindFieldNameLength(L"Target3");
  _DAT_1550985e0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_1550985f0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550985f8 = 0x121;
  _DAT_1550985fc = 1;
  _DAT_155098600 = 0;
  _DAT_1550985e8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target2";
  DAT_155098422 = Freeze::FindFieldNameLength(L"Target2");
  _DAT_155098400 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098410 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098418 = 0x120;
  _DAT_15509841c = 1;
  _DAT_155098420 = 0;
  _DAT_155098408 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target1";
  DAT_155098242 = Freeze::FindFieldNameLength(L"Target1");
  _DAT_155098220 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098230 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098238 = 0x11f;
  _DAT_15509823c = 1;
  _DAT_155098240 = 0;
  _DAT_155098228 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 14477ad50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<6>::Initialize
          (FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Targets";
  DAT_155098f32 = Freeze::FindFieldNameLength(L"Targets");
  _DAT_155098f10 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098f28 = 0x126;
  _DAT_155098f20 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098f2c = 1;
  _DAT_155098f30 = 0;
  _DAT_155098f18 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target7";
  DAT_155098d52 = Freeze::FindFieldNameLength(L"Target7");
  _DAT_155098d30 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098d40 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098d48 = 0x125;
  _DAT_155098d4c = 1;
  _DAT_155098d50 = 0;
  _DAT_155098d38 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target6";
  DAT_155098b72 = Freeze::FindFieldNameLength(L"Target6");
  _DAT_155098b50 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098b60 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098b68 = 0x124;
  _DAT_155098b6c = 1;
  _DAT_155098b70 = 0;
  _DAT_155098b58 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target5";
  DAT_155098992 = Freeze::FindFieldNameLength(L"Target5");
  _DAT_155098970 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098980 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098988 = 0x123;
  _DAT_15509898c = 1;
  _DAT_155098990 = 0;
  _DAT_155098978 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target4";
  DAT_1550987b2 = Freeze::FindFieldNameLength(L"Target4");
  _DAT_155098790 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_1550987a0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550987a8 = 0x122;
  _DAT_1550987ac = 1;
  _DAT_1550987b0 = 0;
  _DAT_155098798 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target3";
  DAT_1550985d2 = Freeze::FindFieldNameLength(L"Target3");
  _DAT_1550985b0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_1550985c0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550985c8 = 0x121;
  _DAT_1550985cc = 1;
  _DAT_1550985d0 = 0;
  _DAT_1550985b8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target2";
  DAT_1550983f2 = Freeze::FindFieldNameLength(L"Target2");
  _DAT_1550983d0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_1550983e0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550983e8 = 0x120;
  _DAT_1550983ec = 1;
  _DAT_1550983f0 = 0;
  _DAT_1550983d8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target1";
  DAT_155098212 = Freeze::FindFieldNameLength(L"Target1");
  _DAT_1550981f0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098200 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098208 = 0x11f;
  _DAT_15509820c = 1;
  _DAT_155098210 = 0;
  _DAT_1550981f8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 14477b070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<6>::Initialize
          (FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Targets";
  DAT_155098f02 = Freeze::FindFieldNameLength(L"Targets");
  _DAT_155098ee0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098ef8 = 0x126;
  _DAT_155098ef0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098efc = 1;
  _DAT_155098f00 = 0;
  _DAT_155098ee8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target7";
  DAT_155098d22 = Freeze::FindFieldNameLength(L"Target7");
  _DAT_155098d00 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098d10 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098d18 = 0x125;
  _DAT_155098d1c = 1;
  _DAT_155098d20 = 0;
  _DAT_155098d08 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target6";
  DAT_155098b42 = Freeze::FindFieldNameLength(L"Target6");
  _DAT_155098b20 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098b30 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098b38 = 0x124;
  _DAT_155098b3c = 1;
  _DAT_155098b40 = 0;
  _DAT_155098b28 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target5";
  DAT_155098962 = Freeze::FindFieldNameLength(L"Target5");
  _DAT_155098940 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098950 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098958 = 0x123;
  _DAT_15509895c = 1;
  _DAT_155098960 = 0;
  _DAT_155098948 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target4";
  DAT_155098782 = Freeze::FindFieldNameLength(L"Target4");
  _DAT_155098760 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098770 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098778 = 0x122;
  _DAT_15509877c = 1;
  _DAT_155098780 = 0;
  _DAT_155098768 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target3";
  DAT_1550985a2 = Freeze::FindFieldNameLength(L"Target3");
  _DAT_155098580 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098590 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098598 = 0x121;
  _DAT_15509859c = 1;
  _DAT_1550985a0 = 0;
  _DAT_155098588 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target2";
  DAT_1550983c2 = Freeze::FindFieldNameLength(L"Target2");
  _DAT_1550983a0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_1550983b0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550983b8 = 0x120;
  _DAT_1550983bc = 1;
  _DAT_1550983c0 = 0;
  _DAT_1550983a8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target1";
  DAT_1550981e2 = Freeze::FindFieldNameLength(L"Target1");
  _DAT_1550981c0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_1550981d0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550981d8 = 0x11f;
  _DAT_1550981dc = 1;
  _DAT_1550981e0 = 0;
  _DAT_1550981c8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 14477b390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<6>::Initialize
          (FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Targets";
  DAT_155098ed2 = Freeze::FindFieldNameLength(L"Targets");
  _DAT_155098eb0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098ec8 = 0x126;
  _DAT_155098ec0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098ecc = 1;
  _DAT_155098ed0 = 0;
  _DAT_155098eb8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target7";
  DAT_155098cf2 = Freeze::FindFieldNameLength(L"Target7");
  _DAT_155098cd0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098ce0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098ce8 = 0x125;
  _DAT_155098cec = 1;
  _DAT_155098cf0 = 0;
  _DAT_155098cd8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target6";
  DAT_155098b12 = Freeze::FindFieldNameLength(L"Target6");
  _DAT_155098af0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098b00 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098b08 = 0x124;
  _DAT_155098b0c = 1;
  _DAT_155098b10 = 0;
  _DAT_155098af8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target5";
  DAT_155098932 = Freeze::FindFieldNameLength(L"Target5");
  _DAT_155098910 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098920 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098928 = 0x123;
  _DAT_15509892c = 1;
  _DAT_155098930 = 0;
  _DAT_155098918 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target4";
  DAT_155098752 = Freeze::FindFieldNameLength(L"Target4");
  _DAT_155098730 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098740 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098748 = 0x122;
  _DAT_15509874c = 1;
  _DAT_155098750 = 0;
  _DAT_155098738 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target3";
  DAT_155098572 = Freeze::FindFieldNameLength(L"Target3");
  _DAT_155098550 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098560 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098568 = 0x121;
  _DAT_15509856c = 1;
  _DAT_155098570 = 0;
  _DAT_155098558 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target2";
  DAT_155098392 = Freeze::FindFieldNameLength(L"Target2");
  _DAT_155098370 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098380 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098388 = 0x120;
  _DAT_15509838c = 1;
  _DAT_155098390 = 0;
  _DAT_155098378 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target1";
  DAT_1550981b2 = Freeze::FindFieldNameLength(L"Target1");
  _DAT_155098190 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_1550981a0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550981a8 = 0x11f;
  _DAT_1550981ac = 1;
  _DAT_1550981b0 = 0;
  _DAT_155098198 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 14477b6b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<6>::Initialize
          (FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Targets";
  DAT_155098ff2 = Freeze::FindFieldNameLength(L"Targets");
  _DAT_155098fd0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098fe8 = 0x126;
  _DAT_155098fe0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098fec = 1;
  _DAT_155098ff0 = 0;
  _DAT_155098fd8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target7";
  DAT_155098e12 = Freeze::FindFieldNameLength(L"Target7");
  _DAT_155098df0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098e00 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098e08 = 0x125;
  _DAT_155098e0c = 1;
  _DAT_155098e10 = 0;
  _DAT_155098df8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target6";
  DAT_155098c32 = Freeze::FindFieldNameLength(L"Target6");
  _DAT_155098c10 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098c20 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098c28 = 0x124;
  _DAT_155098c2c = 1;
  _DAT_155098c30 = 0;
  _DAT_155098c18 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target5";
  DAT_155098a52 = Freeze::FindFieldNameLength(L"Target5");
  _DAT_155098a30 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098a40 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098a48 = 0x123;
  _DAT_155098a4c = 1;
  _DAT_155098a50 = 0;
  _DAT_155098a38 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target4";
  DAT_155098872 = Freeze::FindFieldNameLength(L"Target4");
  _DAT_155098850 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098860 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098868 = 0x122;
  _DAT_15509886c = 1;
  _DAT_155098870 = 0;
  _DAT_155098858 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target3";
  DAT_155098692 = Freeze::FindFieldNameLength(L"Target3");
  _DAT_155098670 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098680 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098688 = 0x121;
  _DAT_15509868c = 1;
  _DAT_155098690 = 0;
  _DAT_155098678 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target2";
  DAT_1550984b2 = Freeze::FindFieldNameLength(L"Target2");
  _DAT_155098490 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_1550984a0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550984a8 = 0x120;
  _DAT_1550984ac = 1;
  _DAT_1550984b0 = 0;
  _DAT_155098498 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target1";
  DAT_1550982d2 = Freeze::FindFieldNameLength(L"Target1");
  _DAT_1550982b0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_1550982c0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550982c8 = 0x11f;
  _DAT_1550982cc = 1;
  _DAT_1550982d0 = 0;
  _DAT_1550982b8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 14477b9d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::
InternalLinkType<6>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Targets";
  DAT_155099052 = Freeze::FindFieldNameLength(L"Targets");
  _DAT_155099030 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155099048 = 0x128;
  _DAT_155099040 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15509904c = 1;
  _DAT_155099050 = 0;
  _DAT_155099038 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target7";
  DAT_155098e72 = Freeze::FindFieldNameLength(L"Target7");
  _DAT_155098e50 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098e60 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098e68 = 0x127;
  _DAT_155098e6c = 1;
  _DAT_155098e70 = 0;
  _DAT_155098e58 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target6";
  DAT_155098c92 = Freeze::FindFieldNameLength(L"Target6");
  _DAT_155098c70 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098c80 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098c88 = 0x126;
  _DAT_155098c8c = 1;
  _DAT_155098c90 = 0;
  _DAT_155098c78 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target5";
  DAT_155098ab2 = Freeze::FindFieldNameLength(L"Target5");
  _DAT_155098a90 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098aa0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098aa8 = 0x125;
  _DAT_155098aac = 1;
  _DAT_155098ab0 = 0;
  _DAT_155098a98 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target4";
  DAT_1550988d2 = Freeze::FindFieldNameLength(L"Target4");
  _DAT_1550988b0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_1550988c0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550988c8 = 0x124;
  _DAT_1550988cc = 1;
  _DAT_1550988d0 = 0;
  _DAT_1550988b8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target3";
  DAT_1550986f2 = Freeze::FindFieldNameLength(L"Target3");
  _DAT_1550986d0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_1550986e0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550986e8 = 0x123;
  _DAT_1550986ec = 1;
  _DAT_1550986f0 = 0;
  _DAT_1550986d8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target2";
  DAT_155098512 = Freeze::FindFieldNameLength(L"Target2");
  _DAT_1550984f0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098500 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098508 = 0x122;
  _DAT_15509850c = 1;
  _DAT_155098510 = 0;
  _DAT_1550984f8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target1";
  DAT_155098332 = Freeze::FindFieldNameLength(L"Target1");
  _DAT_155098310 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098320 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098328 = 0x121;
  _DAT_15509832c = 1;
  _DAT_155098330 = 0;
  _DAT_155098318 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 14477bcf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<6>::
Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Targets";
  DAT_155099082 = Freeze::FindFieldNameLength(L"Targets");
  _DAT_155099060 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155099078 = 0x122;
  _DAT_155099070 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15509907c = 1;
  _DAT_155099080 = 0;
  _DAT_155099068 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target7";
  DAT_155098ea2 = Freeze::FindFieldNameLength(L"Target7");
  _DAT_155098e80 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098e90 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098e98 = 0x121;
  _DAT_155098e9c = 1;
  _DAT_155098ea0 = 0;
  _DAT_155098e88 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target6";
  DAT_155098cc2 = Freeze::FindFieldNameLength(L"Target6");
  _DAT_155098ca0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098cb0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098cb8 = 0x120;
  _DAT_155098cbc = 1;
  _DAT_155098cc0 = 0;
  _DAT_155098ca8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target5";
  DAT_155098ae2 = Freeze::FindFieldNameLength(L"Target5");
  _DAT_155098ac0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098ad0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098ad8 = 0x11f;
  _DAT_155098adc = 1;
  _DAT_155098ae0 = 0;
  _DAT_155098ac8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target4";
  DAT_155098902 = Freeze::FindFieldNameLength(L"Target4");
  _DAT_1550988e0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_1550988f0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550988f8 = 0x11e;
  _DAT_1550988fc = 1;
  _DAT_155098900 = 0;
  _DAT_1550988e8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target3";
  DAT_155098722 = Freeze::FindFieldNameLength(L"Target3");
  _DAT_155098700 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098710 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098718 = 0x11d;
  _DAT_15509871c = 1;
  _DAT_155098720 = 0;
  _DAT_155098708 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target2";
  DAT_155098542 = Freeze::FindFieldNameLength(L"Target2");
  _DAT_155098520 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098530 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098538 = 0x11c;
  _DAT_15509853c = 1;
  _DAT_155098540 = 0;
  _DAT_155098528 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target1";
  DAT_155098362 = Freeze::FindFieldNameLength(L"Target1");
  _DAT_155098340 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098350 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098358 = 0x11b;
  _DAT_15509835c = 1;
  _DAT_155098360 = 0;
  _DAT_155098348 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 14477c010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<6>::
Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Targets";
  DAT_155099022 = Freeze::FindFieldNameLength(L"Targets");
  _DAT_155099000 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155099018 = 0x128;
  _DAT_155099010 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15509901c = 1;
  _DAT_155099020 = 0;
  _DAT_155099008 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target7";
  DAT_155098e42 = Freeze::FindFieldNameLength(L"Target7");
  _DAT_155098e20 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098e30 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098e38 = 0x127;
  _DAT_155098e3c = 1;
  _DAT_155098e40 = 0;
  _DAT_155098e28 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target6";
  DAT_155098c62 = Freeze::FindFieldNameLength(L"Target6");
  _DAT_155098c40 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098c50 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098c58 = 0x126;
  _DAT_155098c5c = 1;
  _DAT_155098c60 = 0;
  _DAT_155098c48 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target5";
  DAT_155098a82 = Freeze::FindFieldNameLength(L"Target5");
  _DAT_155098a60 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098a70 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098a78 = 0x125;
  _DAT_155098a7c = 1;
  _DAT_155098a80 = 0;
  _DAT_155098a68 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target4";
  DAT_1550988a2 = Freeze::FindFieldNameLength(L"Target4");
  _DAT_155098880 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155098890 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155098898 = 0x124;
  _DAT_15509889c = 1;
  _DAT_1550988a0 = 0;
  _DAT_155098888 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target3";
  DAT_1550986c2 = Freeze::FindFieldNameLength(L"Target3");
  _DAT_1550986a0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_1550986b0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550986b8 = 0x123;
  _DAT_1550986bc = 1;
  _DAT_1550986c0 = 0;
  _DAT_1550986a8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target2";
  DAT_1550984e2 = Freeze::FindFieldNameLength(L"Target2");
  _DAT_1550984c0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_1550984d0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550984d8 = 0x122;
  _DAT_1550984dc = 1;
  _DAT_1550984e0 = 0;
  _DAT_1550984c8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target1";
  DAT_155098302 = Freeze::FindFieldNameLength(L"Target1");
  _DAT_1550982e0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_1550982f0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550982f8 = 0x121;
  _DAT_1550982fc = 1;
  _DAT_155098300 = 0;
  _DAT_1550982e8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 14477c330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<6>::Initialize
          (FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Targets";
  DAT_1550970a2 = Freeze::FindFieldNameLength(L"Targets");
  _DAT_155097080 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155097098 = 0x126;
  _DAT_155097090 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15509709c = 1;
  _DAT_1550970a0 = 0;
  _DAT_155097088 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target7";
  DAT_155096e62 = Freeze::FindFieldNameLength(L"Target7");
  _DAT_155096e40 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155096e50 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155096e58 = 0x125;
  _DAT_155096e5c = 1;
  _DAT_155096e60 = 0;
  _DAT_155096e48 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target6";
  DAT_15509685a = Freeze::FindFieldNameLength(L"Target6");
  _DAT_155096838 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155096848 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155096850 = 0x124;
  _DAT_155096854 = 1;
  _DAT_155096858 = 0;
  _DAT_155096840 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target5";
  DAT_155095c62 = Freeze::FindFieldNameLength(L"Target5");
  _DAT_155095c40 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155095c50 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155095c58 = 0x123;
  _DAT_155095c5c = 1;
  _DAT_155095c60 = 0;
  _DAT_155095c48 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target4";
  DAT_155095c32 = Freeze::FindFieldNameLength(L"Target4");
  _DAT_155095c10 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155095c20 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155095c28 = 0x122;
  _DAT_155095c2c = 1;
  _DAT_155095c30 = 0;
  _DAT_155095c18 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target3";
  DAT_155095c02 = Freeze::FindFieldNameLength(L"Target3");
  _DAT_155095be0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155095bf0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155095bf8 = 0x121;
  _DAT_155095bfc = 1;
  _DAT_155095c00 = 0;
  _DAT_155095be8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target2";
  DAT_155095632 = Freeze::FindFieldNameLength(L"Target2");
  _DAT_155095610 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_155095620 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155095628 = 0x120;
  _DAT_15509562c = 1;
  _DAT_155095630 = 0;
  _DAT_155095618 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Target1";
  DAT_155095602 = Freeze::FindFieldNameLength(L"Target1");
  _DAT_1550955e0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  _DAT_1550955f0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550955f8 = 0x11f;
  _DAT_1550955fc = 1;
  _DAT_155095600 = 0;
  _DAT_1550955e8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 14477e850

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
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x128);
  return;
}

// InternalDestroy @ 14477e890

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
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x128);
  return;
}

// InternalDestroy @ 14477e8d0

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
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x128);
  return;
}

// InternalDestroy @ 14477e910

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
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x128);
  return;
}

// InternalDestroy @ 14477e950

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
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x128);
  return;
}

// InternalDestroy @ 14477e990

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
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x128);
  return;
}

// InternalDestroy @ 14477e9d0

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
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x128);
  return;
}

// InternalDestroy @ 14477ea10

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
TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::
InternalDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x130);
  return;
}

// InternalDestroy @ 14477ea50

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
TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x128);
  return;
}

// InternalDestroy @ 14477ea90

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
TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x130);
  return;
}

// InternalDestroy @ 14477ead0

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
TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x128);
  return;
}

// ModifyCompilationEnvironment @ 144781240

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
TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::ModifyCompilationEnvironment
          (FMeshMaterialShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  FShaderCompilerEnvironment::SetDefine(param_2,L"FORWARD_LIGHT_DATA_STRIDE",6);
  FShaderCompilerEnvironment::SetDefine
            (param_2,L"NUM_CULLED_LIGHTS_GRID_STRIDE",NumCulledLightsGridStride);
  FShaderCompilerEnvironment::SetDefine
            (param_2,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",NumCulledGridPrimitiveTypes);
  return;
}

// SetPassParameters @ 14478e380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::SetPassParameters
          (TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy> *this,
          FRHIBatchedShaderParameters *param_1,TIntVector4<unsigned_int> *param_2,
          TIntVector4<unsigned_int> *param_3,FRHIUniformBuffer *param_4)

{
  ushort uVar1;
  uint uVar2;
  
  SetUniformBufferParameter(param_1,&this->ShadingOutputsParam,param_4);
  uVar1 = (this->ViewRectParam).NumBytes;
  uVar2 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar2 = 0x10;
  }
  if (uVar2 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ViewRectParam).BufferIndex,(uint)(this->ViewRectParam).BaseIndex
               ,uVar2,param_2);
  }
  uVar1 = (this->PassDataParam).NumBytes;
  uVar2 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar2 = 0x10;
  }
  if (uVar2 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PassDataParam).BufferIndex,(uint)(this->PassDataParam).BaseIndex
               ,uVar2,param_3);
  }
  return;
}

// StaticGetTypeLayout @ 1447ae970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::StaticGetTypeLayout(void)

{
  if ((DAT_1550962e7 & 2) == 0) {
    DAT_1550962e7 = DAT_1550962e7 | 2;
    _DAT_155096288 = L"TBasePassComputeShaderPolicyParamType";
    _DAT_1550962d8 = 0x128;
    _DAT_1550962a0 = Freeze::DefaultWriteMemoryImage;
    _DAT_1550962a8 = Freeze::DefaultUnfrozenCopy;
    _DAT_1550962b0 = Freeze::DefaultAppendHash;
    _DAT_1550962b8 = Freeze::DefaultGetTargetAlignment;
    _DAT_1550962c0 = Freeze::DefaultToString;
    _DAT_155096298 = InternalDestroy;
    _DAT_1550962c8 =
         TGetDefaultObjectHelper<TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>,0>
         ::Do;
    _DAT_1550962e0 = 8;
    DAT_1550962e4 = 0;
    _DAT_1550962dc = 0xffffffff;
    InternalLinkType<6>::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Target0";
    DAT_1550980c2 = Freeze::FindFieldNameLength(L"Target0");
    _DAT_1550980a0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
    _DAT_1550980a8 = DAT_155096290;
    DAT_155096290 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550980b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550980b8 = 0x11e;
    _DAT_1550980bc = 1;
    _DAT_1550980c0 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PassDataParam";
    DAT_155097ee2 = Freeze::FindFieldNameLength(L"PassDataParam");
    _DAT_155097ec0 = FShaderParameter::StaticGetTypeLayout();
    _DAT_155097ec8 = DAT_155096290;
    DAT_155096290 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155097ed0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155097ed8 = 0x118;
    _DAT_155097edc = 1;
    _DAT_155097ee0 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ViewRectParam";
    DAT_155097762 = Freeze::FindFieldNameLength(L"ViewRectParam");
    _DAT_155097740 = FShaderParameter::StaticGetTypeLayout();
    _DAT_155097748 = DAT_155096290;
    DAT_155096290 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155097750 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155097758 = 0x112;
    _DAT_15509775c = 1;
    _DAT_155097760 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadingOutputsParam";
    DAT_155096fb2 = Freeze::FindFieldNameLength(L"ShadingOutputsParam");
    _DAT_155096f90 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155096fa0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155096fa8 = 0x110;
    _DAT_155096fac = 1;
    _DAT_155096fb0 = 0;
    _DAT_155096f98 = DAT_155096290;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ReflectionCaptureBuffer";
    DAT_155096290 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    DAT_155096bc2 = Freeze::FindFieldNameLength(L"ReflectionCaptureBuffer");
    _DAT_155096ba0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155096ba8 = DAT_155096290;
    DAT_155096290 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155096bb0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155096bb8 = 0x10e;
    _DAT_155096bbc = 1;
    _DAT_155096bc0 = 0;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
    DAT_1550962e5 = DAT_1550962e5 + '\x01';
    ::FieldBuffer._16_8_ = DAT_155096290;
    DAT_155096290 = (uchar **)::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\b';
    ::FieldBuffer[0x21] = '\x01';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      DAT_1550962e6 = DAT_1550962e6 + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    DAT_1550962e5 = DAT_1550962e5 + '\x01';
    ::FieldBuffer._16_8_ = DAT_155096290;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    DAT_155096290 = (uchar **)::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      DAT_1550962e6 = DAT_1550962e6 + '\x01';
    }
    FTypeLayoutDesc::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<1>_>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// StaticGetTypeLayout @ 1447aed40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::StaticGetTypeLayout(void)

{
  if ((DAT_1550961af & 2) == 0) {
    DAT_1550961af = DAT_1550961af | 2;
    _DAT_155096150 = L"TBasePassComputeShaderPolicyParamType";
    _DAT_1550961a0 = 0x128;
    _DAT_155096168 = Freeze::DefaultWriteMemoryImage;
    _DAT_155096170 = Freeze::DefaultUnfrozenCopy;
    _DAT_155096178 = Freeze::DefaultAppendHash;
    _DAT_155096180 = Freeze::DefaultGetTargetAlignment;
    _DAT_155096188 = Freeze::DefaultToString;
    _DAT_155096160 = InternalDestroy;
    _DAT_155096190 =
         TGetDefaultObjectHelper<TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>,0>
         ::Do;
    _DAT_1550961a8 = 8;
    DAT_1550961ac = 0;
    _DAT_1550961a4 = 0xffffffff;
    InternalLinkType<6>::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Target0";
    DAT_155098092 = Freeze::FindFieldNameLength(L"Target0");
    _DAT_155098070 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
    _DAT_155098078 = DAT_155096158;
    DAT_155096158 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155098080 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155098088 = 0x11e;
    _DAT_15509808c = 1;
    _DAT_155098090 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PassDataParam";
    DAT_155097eb2 = Freeze::FindFieldNameLength(L"PassDataParam");
    _DAT_155097e90 = FShaderParameter::StaticGetTypeLayout();
    _DAT_155097e98 = DAT_155096158;
    DAT_155096158 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155097ea0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155097ea8 = 0x118;
    _DAT_155097eac = 1;
    _DAT_155097eb0 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ViewRectParam";
    DAT_155097732 = Freeze::FindFieldNameLength(L"ViewRectParam");
    _DAT_155097710 = FShaderParameter::StaticGetTypeLayout();
    _DAT_155097718 = DAT_155096158;
    DAT_155096158 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155097720 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155097728 = 0x112;
    _DAT_15509772c = 1;
    _DAT_155097730 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadingOutputsParam";
    DAT_155096f82 = Freeze::FindFieldNameLength(L"ShadingOutputsParam");
    _DAT_155096f60 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155096f70 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155096f78 = 0x110;
    _DAT_155096f7c = 1;
    _DAT_155096f80 = 0;
    _DAT_155096f68 = DAT_155096158;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ReflectionCaptureBuffer";
    DAT_155096158 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    DAT_155096b32 = Freeze::FindFieldNameLength(L"ReflectionCaptureBuffer");
    _DAT_155096b10 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155096b18 = DAT_155096158;
    DAT_155096158 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155096b20 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155096b28 = 0x10e;
    _DAT_155096b2c = 1;
    _DAT_155096b30 = 0;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
    DAT_1550961ad = DAT_1550961ad + '\x01';
    ::FieldBuffer._16_8_ = DAT_155096158;
    DAT_155096158 = (uchar **)::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\b';
    ::FieldBuffer[0x21] = '\x01';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      DAT_1550961ae = DAT_1550961ae + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    DAT_1550961ad = DAT_1550961ad + '\x01';
    ::FieldBuffer._16_8_ = DAT_155096158;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    DAT_155096158 = (uchar **)::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      DAT_1550961ae = DAT_1550961ae + '\x01';
    }
    FTypeLayoutDesc::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<2>_>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// StaticGetTypeLayout @ 1447af110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::StaticGetTypeLayout(void)

{
  if ((DAT_155096077 & 2) == 0) {
    DAT_155096077 = DAT_155096077 | 2;
    _DAT_155096018 = L"TBasePassComputeShaderPolicyParamType";
    _DAT_155096068 = 0x128;
    _DAT_155096030 = Freeze::DefaultWriteMemoryImage;
    _DAT_155096038 = Freeze::DefaultUnfrozenCopy;
    _DAT_155096040 = Freeze::DefaultAppendHash;
    _DAT_155096048 = Freeze::DefaultGetTargetAlignment;
    _DAT_155096050 = Freeze::DefaultToString;
    _DAT_155096028 = InternalDestroy;
    _DAT_155096058 =
         TGetDefaultObjectHelper<TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>,0>
         ::Do;
    _DAT_155096070 = 8;
    DAT_155096074 = 0;
    _DAT_15509606c = 0xffffffff;
    InternalLinkType<6>::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Target0";
    DAT_155098062 = Freeze::FindFieldNameLength(L"Target0");
    _DAT_155098040 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
    _DAT_155098048 = DAT_155096020;
    DAT_155096020 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155098050 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155098058 = 0x11e;
    _DAT_15509805c = 1;
    _DAT_155098060 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PassDataParam";
    DAT_155097e82 = Freeze::FindFieldNameLength(L"PassDataParam");
    _DAT_155097e60 = FShaderParameter::StaticGetTypeLayout();
    _DAT_155097e68 = DAT_155096020;
    DAT_155096020 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155097e70 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155097e78 = 0x118;
    _DAT_155097e7c = 1;
    _DAT_155097e80 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ViewRectParam";
    DAT_155097702 = Freeze::FindFieldNameLength(L"ViewRectParam");
    _DAT_1550976e0 = FShaderParameter::StaticGetTypeLayout();
    _DAT_1550976e8 = DAT_155096020;
    DAT_155096020 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550976f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550976f8 = 0x112;
    _DAT_1550976fc = 1;
    _DAT_155097700 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadingOutputsParam";
    DAT_155096f52 = Freeze::FindFieldNameLength(L"ShadingOutputsParam");
    _DAT_155096f30 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155096f40 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155096f48 = 0x110;
    _DAT_155096f4c = 1;
    _DAT_155096f50 = 0;
    _DAT_155096f38 = DAT_155096020;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ReflectionCaptureBuffer";
    DAT_155096020 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    DAT_155096aa2 = Freeze::FindFieldNameLength(L"ReflectionCaptureBuffer");
    _DAT_155096a80 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155096a88 = DAT_155096020;
    DAT_155096020 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155096a90 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155096a98 = 0x10e;
    _DAT_155096a9c = 1;
    _DAT_155096aa0 = 0;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
    DAT_155096075 = DAT_155096075 + '\x01';
    ::FieldBuffer._16_8_ = DAT_155096020;
    DAT_155096020 = (uchar **)::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\b';
    ::FieldBuffer[0x21] = '\x01';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      DAT_155096076 = DAT_155096076 + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    DAT_155096075 = DAT_155096075 + '\x01';
    ::FieldBuffer._16_8_ = DAT_155096020;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    DAT_155096020 = (uchar **)::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      DAT_155096076 = DAT_155096076 + '\x01';
    }
    FTypeLayoutDesc::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<3>_>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// StaticGetTypeLayout @ 1447af4e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::StaticGetTypeLayout(void)

{
  if ((DAT_155095f3f & 2) == 0) {
    DAT_155095f3f = DAT_155095f3f | 2;
    _DAT_155095ee0 = L"TBasePassComputeShaderPolicyParamType";
    _DAT_155095f30 = 0x128;
    _DAT_155095ef8 = Freeze::DefaultWriteMemoryImage;
    _DAT_155095f00 = Freeze::DefaultUnfrozenCopy;
    _DAT_155095f08 = Freeze::DefaultAppendHash;
    _DAT_155095f10 = Freeze::DefaultGetTargetAlignment;
    _DAT_155095f18 = Freeze::DefaultToString;
    _DAT_155095ef0 = InternalDestroy;
    _DAT_155095f20 =
         TGetDefaultObjectHelper<TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>,0>
         ::Do;
    _DAT_155095f38 = 8;
    DAT_155095f3c = 0;
    _DAT_155095f34 = 0xffffffff;
    InternalLinkType<6>::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Target0";
    DAT_155098032 = Freeze::FindFieldNameLength(L"Target0");
    _DAT_155098010 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
    _DAT_155098018 = DAT_155095ee8;
    DAT_155095ee8 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155098020 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155098028 = 0x11e;
    _DAT_15509802c = 1;
    _DAT_155098030 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PassDataParam";
    DAT_155097e52 = Freeze::FindFieldNameLength(L"PassDataParam");
    _DAT_155097e30 = FShaderParameter::StaticGetTypeLayout();
    _DAT_155097e38 = DAT_155095ee8;
    DAT_155095ee8 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155097e40 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155097e48 = 0x118;
    _DAT_155097e4c = 1;
    _DAT_155097e50 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ViewRectParam";
    DAT_1550976d2 = Freeze::FindFieldNameLength(L"ViewRectParam");
    _DAT_1550976b0 = FShaderParameter::StaticGetTypeLayout();
    _DAT_1550976b8 = DAT_155095ee8;
    DAT_155095ee8 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550976c0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550976c8 = 0x112;
    _DAT_1550976cc = 1;
    _DAT_1550976d0 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadingOutputsParam";
    DAT_155096f22 = Freeze::FindFieldNameLength(L"ShadingOutputsParam");
    _DAT_155096f00 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155096f10 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155096f18 = 0x110;
    _DAT_155096f1c = 1;
    _DAT_155096f20 = 0;
    _DAT_155096f08 = DAT_155095ee8;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ReflectionCaptureBuffer";
    DAT_155095ee8 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    DAT_155096a12 = Freeze::FindFieldNameLength(L"ReflectionCaptureBuffer");
    _DAT_1550969f0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_1550969f8 = DAT_155095ee8;
    DAT_155095ee8 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155096a00 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155096a08 = 0x10e;
    _DAT_155096a0c = 1;
    _DAT_155096a10 = 0;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
    DAT_155095f3d = DAT_155095f3d + '\x01';
    ::FieldBuffer._16_8_ = DAT_155095ee8;
    DAT_155095ee8 = (uchar **)::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\b';
    ::FieldBuffer[0x21] = '\x01';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      DAT_155095f3e = DAT_155095f3e + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    DAT_155095f3d = DAT_155095f3d + '\x01';
    ::FieldBuffer._16_8_ = DAT_155095ee8;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    DAT_155095ee8 = (uchar **)::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      DAT_155095f3e = DAT_155095f3e + '\x01';
    }
    FTypeLayoutDesc::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<4>_>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// StaticGetTypeLayout @ 1447af8b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::StaticGetTypeLayout(void)

{
  if ((DAT_155095e07 & 2) == 0) {
    DAT_155095e07 = DAT_155095e07 | 2;
    _DAT_155095da8 = L"TBasePassComputeShaderPolicyParamType";
    _DAT_155095df8 = 0x128;
    _DAT_155095dc0 = Freeze::DefaultWriteMemoryImage;
    _DAT_155095dc8 = Freeze::DefaultUnfrozenCopy;
    _DAT_155095dd0 = Freeze::DefaultAppendHash;
    _DAT_155095dd8 = Freeze::DefaultGetTargetAlignment;
    _DAT_155095de0 = Freeze::DefaultToString;
    _DAT_155095db8 = InternalDestroy;
    _DAT_155095de8 =
         TGetDefaultObjectHelper<TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>,0>
         ::Do;
    _DAT_155095e00 = 8;
    DAT_155095e04 = 0;
    _DAT_155095dfc = 0xffffffff;
    InternalLinkType<6>::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Target0";
    DAT_155098002 = Freeze::FindFieldNameLength(L"Target0");
    _DAT_155097fe0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
    _DAT_155097fe8 = DAT_155095db0;
    DAT_155095db0 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155097ff0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155097ff8 = 0x11e;
    _DAT_155097ffc = 1;
    _DAT_155098000 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PassDataParam";
    DAT_155097e22 = Freeze::FindFieldNameLength(L"PassDataParam");
    _DAT_155097e00 = FShaderParameter::StaticGetTypeLayout();
    _DAT_155097e08 = DAT_155095db0;
    DAT_155095db0 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155097e10 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155097e18 = 0x118;
    _DAT_155097e1c = 1;
    _DAT_155097e20 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ViewRectParam";
    DAT_1550976a2 = Freeze::FindFieldNameLength(L"ViewRectParam");
    _DAT_155097680 = FShaderParameter::StaticGetTypeLayout();
    _DAT_155097688 = DAT_155095db0;
    DAT_155095db0 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155097690 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155097698 = 0x112;
    _DAT_15509769c = 1;
    _DAT_1550976a0 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadingOutputsParam";
    DAT_155096ef2 = Freeze::FindFieldNameLength(L"ShadingOutputsParam");
    _DAT_155096ed0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155096ee0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155096ee8 = 0x110;
    _DAT_155096eec = 1;
    _DAT_155096ef0 = 0;
    _DAT_155096ed8 = DAT_155095db0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ReflectionCaptureBuffer";
    DAT_155095db0 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    DAT_155096982 = Freeze::FindFieldNameLength(L"ReflectionCaptureBuffer");
    _DAT_155096960 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155096968 = DAT_155095db0;
    DAT_155095db0 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155096970 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155096978 = 0x10e;
    _DAT_15509697c = 1;
    _DAT_155096980 = 0;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
    DAT_155095e05 = DAT_155095e05 + '\x01';
    ::FieldBuffer._16_8_ = DAT_155095db0;
    DAT_155095db0 = (uchar **)::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\b';
    ::FieldBuffer[0x21] = '\x01';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      DAT_155095e06 = DAT_155095e06 + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    DAT_155095e05 = DAT_155095e05 + '\x01';
    ::FieldBuffer._16_8_ = DAT_155095db0;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    DAT_155095db0 = (uchar **)::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      DAT_155095e06 = DAT_155095e06 + '\x01';
    }
    FTypeLayoutDesc::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<5>_>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// StaticGetTypeLayout @ 1447afc80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::StaticGetTypeLayout(void)

{
  if ((DAT_155095ccf & 2) == 0) {
    DAT_155095ccf = DAT_155095ccf | 2;
    _DAT_155095c70 = L"TBasePassComputeShaderPolicyParamType";
    _DAT_155095cc0 = 0x128;
    _DAT_155095c88 = Freeze::DefaultWriteMemoryImage;
    _DAT_155095c90 = Freeze::DefaultUnfrozenCopy;
    _DAT_155095c98 = Freeze::DefaultAppendHash;
    _DAT_155095ca0 = Freeze::DefaultGetTargetAlignment;
    _DAT_155095ca8 = Freeze::DefaultToString;
    _DAT_155095c80 = InternalDestroy;
    _DAT_155095cb0 =
         TGetDefaultObjectHelper<TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>,0>
         ::Do;
    _DAT_155095cc8 = 8;
    DAT_155095ccc = 0;
    _DAT_155095cc4 = 0xffffffff;
    InternalLinkType<6>::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Target0";
    DAT_155097fd2 = Freeze::FindFieldNameLength(L"Target0");
    _DAT_155097fb0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
    _DAT_155097fb8 = DAT_155095c78;
    DAT_155095c78 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155097fc0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155097fc8 = 0x11e;
    _DAT_155097fcc = 1;
    _DAT_155097fd0 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PassDataParam";
    DAT_155097df2 = Freeze::FindFieldNameLength(L"PassDataParam");
    _DAT_155097dd0 = FShaderParameter::StaticGetTypeLayout();
    _DAT_155097dd8 = DAT_155095c78;
    DAT_155095c78 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155097de0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155097de8 = 0x118;
    _DAT_155097dec = 1;
    _DAT_155097df0 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ViewRectParam";
    DAT_155097672 = Freeze::FindFieldNameLength(L"ViewRectParam");
    _DAT_155097650 = FShaderParameter::StaticGetTypeLayout();
    _DAT_155097658 = DAT_155095c78;
    DAT_155095c78 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155097660 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155097668 = 0x112;
    _DAT_15509766c = 1;
    _DAT_155097670 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadingOutputsParam";
    DAT_155096ec2 = Freeze::FindFieldNameLength(L"ShadingOutputsParam");
    _DAT_155096ea0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155096eb0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155096eb8 = 0x110;
    _DAT_155096ebc = 1;
    _DAT_155096ec0 = 0;
    _DAT_155096ea8 = DAT_155095c78;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ReflectionCaptureBuffer";
    DAT_155095c78 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    DAT_1550968f2 = Freeze::FindFieldNameLength(L"ReflectionCaptureBuffer");
    _DAT_1550968d0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_1550968d8 = DAT_155095c78;
    DAT_155095c78 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550968e0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550968e8 = 0x10e;
    _DAT_1550968ec = 1;
    _DAT_1550968f0 = 0;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
    DAT_155095ccd = DAT_155095ccd + '\x01';
    ::FieldBuffer._16_8_ = DAT_155095c78;
    DAT_155095c78 = (uchar **)::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\b';
    ::FieldBuffer[0x21] = '\x01';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      DAT_155095cce = DAT_155095cce + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    DAT_155095ccd = DAT_155095ccd + '\x01';
    ::FieldBuffer._16_8_ = DAT_155095c78;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    DAT_155095c78 = (uchar **)::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      DAT_155095cce = DAT_155095cce + '\x01';
    }
    FTypeLayoutDesc::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<6>_>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// StaticGetTypeLayout @ 1447b0050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl
TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::StaticGetTypeLayout(void)

{
  if ((DAT_15509641f & 2) == 0) {
    DAT_15509641f = DAT_15509641f | 2;
    _DAT_1550963c0 = L"TBasePassComputeShaderPolicyParamType";
    _DAT_155096410 = 0x128;
    _DAT_1550963d8 = Freeze::DefaultWriteMemoryImage;
    _DAT_1550963e0 = Freeze::DefaultUnfrozenCopy;
    _DAT_1550963e8 = Freeze::DefaultAppendHash;
    _DAT_1550963f0 = Freeze::DefaultGetTargetAlignment;
    _DAT_1550963f8 = Freeze::DefaultToString;
    _DAT_1550963d0 = InternalDestroy;
    _DAT_155096400 =
         TGetDefaultObjectHelper<TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>,0>
         ::Do;
    _DAT_155096418 = 8;
    DAT_15509641c = 0;
    _DAT_155096414 = 0xffffffff;
    InternalLinkType<6>::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Target0";
    DAT_1550980f2 = Freeze::FindFieldNameLength(L"Target0");
    _DAT_1550980d0 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
    _DAT_1550980d8 = DAT_1550963c8;
    DAT_1550963c8 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550980e0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550980e8 = 0x11e;
    _DAT_1550980ec = 1;
    _DAT_1550980f0 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PassDataParam";
    DAT_155097f12 = Freeze::FindFieldNameLength(L"PassDataParam");
    _DAT_155097ef0 = FShaderParameter::StaticGetTypeLayout();
    _DAT_155097ef8 = DAT_1550963c8;
    DAT_1550963c8 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155097f00 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155097f08 = 0x118;
    _DAT_155097f0c = 1;
    _DAT_155097f10 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ViewRectParam";
    DAT_155097792 = Freeze::FindFieldNameLength(L"ViewRectParam");
    _DAT_155097770 = FShaderParameter::StaticGetTypeLayout();
    _DAT_155097778 = DAT_1550963c8;
    DAT_1550963c8 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155097780 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155097788 = 0x112;
    _DAT_15509778c = 1;
    _DAT_155097790 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadingOutputsParam";
    DAT_155096fe2 = Freeze::FindFieldNameLength(L"ShadingOutputsParam");
    _DAT_155096fc0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155096fd0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155096fd8 = 0x110;
    _DAT_155096fdc = 1;
    _DAT_155096fe0 = 0;
    _DAT_155096fc8 = DAT_1550963c8;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ReflectionCaptureBuffer";
    DAT_1550963c8 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    DAT_155096c52 = Freeze::FindFieldNameLength(L"ReflectionCaptureBuffer");
    _DAT_155096c30 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155096c38 = DAT_1550963c8;
    DAT_1550963c8 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155096c40 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155096c48 = 0x10e;
    _DAT_155096c4c = 1;
    _DAT_155096c50 = 0;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
    DAT_15509641d = DAT_15509641d + '\x01';
    ::FieldBuffer._16_8_ = DAT_1550963c8;
    DAT_1550963c8 = (uchar **)::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\b';
    ::FieldBuffer[0x21] = '\x01';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      DAT_15509641e = DAT_15509641e + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    DAT_15509641d = DAT_15509641d + '\x01';
    ::FieldBuffer._16_8_ = DAT_1550963c8;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    DAT_1550963c8 = (uchar **)::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      DAT_15509641e = DAT_15509641e + '\x01';
    }
    FTypeLayoutDesc::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<TUniformLightMapPolicy<0>_>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// StaticGetTypeLayout @ 1447b0420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl
TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::
StaticGetTypeLayout(void)

{
  uchar **ppuVar1;
  
  if ((DAT_155096627 & 2) == 0) {
    DAT_155096627 = DAT_155096627 | 2;
    _DAT_1550965c8 = L"TBasePassComputeShaderPolicyParamType";
    _DAT_1550965f8 = Freeze::DefaultGetTargetAlignment;
    _DAT_155096600 = Freeze::DefaultToString;
    _DAT_1550965d8 = InternalDestroy;
    _DAT_155096608 =
         TGetDefaultObjectHelper<TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,0>
         ::Do;
    _DAT_1550965e0 = Freeze::DefaultWriteMemoryImage;
    _DAT_1550965e8 = Freeze::DefaultUnfrozenCopy;
    _DAT_1550965f0 = Freeze::DefaultAppendHash;
    _DAT_155096618 = 0x130;
    _DAT_155096620 = 8;
    DAT_155096624 = 0;
    _DAT_15509661c = 0xffffffff;
    InternalLinkType<6>::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Target0";
    DAT_155098152 = Freeze::FindFieldNameLength(L"Target0");
    _DAT_155098130 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
    _DAT_155098138 = DAT_1550965d0;
    DAT_1550965d0 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155098140 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155098148 = 0x120;
    _DAT_15509814c = 1;
    _DAT_155098150 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PassDataParam";
    DAT_155097f72 = Freeze::FindFieldNameLength(L"PassDataParam");
    _DAT_155097f50 = FShaderParameter::StaticGetTypeLayout();
    _DAT_155097f58 = DAT_1550965d0;
    DAT_1550965d0 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155097f60 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155097f68 = 0x11a;
    _DAT_155097f6c = 1;
    _DAT_155097f70 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ViewRectParam";
    DAT_1550977f2 = Freeze::FindFieldNameLength(L"ViewRectParam");
    _DAT_1550977d0 = FShaderParameter::StaticGetTypeLayout();
    _DAT_1550977d8 = DAT_1550965d0;
    DAT_1550965d0 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550977e0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550977e8 = 0x114;
    _DAT_1550977ec = 1;
    _DAT_1550977f0 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadingOutputsParam";
    DAT_155097042 = Freeze::FindFieldNameLength(L"ShadingOutputsParam");
    _DAT_155097020 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155097030 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155097028 = DAT_1550965d0;
    DAT_1550965d0 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155097038 = 0x112;
    _DAT_15509703c = 1;
    _DAT_155097040 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ReflectionCaptureBuffer";
    DAT_155096d42 = Freeze::FindFieldNameLength(L"ReflectionCaptureBuffer");
    _DAT_155096d20 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155096d28 = DAT_1550965d0;
    _DAT_155096d30 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155096d38 = 0x110;
    _DAT_155096d3c = 1;
    _DAT_155096d40 = 0;
    DAT_1550965d0 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ppuVar1 = &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
               ::__l2::FieldBuffer;
    if ((DAT_15508403f & 2) == 0) {
      DAT_15508403f = DAT_15508403f | 2;
      _DAT_155083ff8 = Freeze::DefaultWriteMemoryImage;
      _DAT_155083fe0 = L"ComputeParametersType";
      _DAT_155084010 = Freeze::DefaultGetTargetAlignment;
      _DAT_155084018 = Freeze::DefaultToString;
      _DAT_155083ff0 =
           FSelfShadowedCachedPointIndirectLightingPolicy::ComputeParametersType::InternalDestroy;
      _DAT_155084020 =
           TGetDefaultObjectHelper<FSelfShadowedCachedPointIndirectLightingPolicy::ComputeParametersType,0>
           ::Do;
      _DAT_155084000 = Freeze::DefaultUnfrozenCopy;
      _DAT_155084008 = Freeze::DefaultAppendHash;
      _DAT_155084030 = 8;
      _DAT_155084038 = 2;
      DAT_15508403c = '\0';
      _DAT_155084034 = 0xffffffff;
      ::FieldBuffer._0_8_ = u_BASE;
      ::FieldBuffer[0x2a] = '\x04';
      ::FieldBuffer._8_8_ =
           StaticGetTypeLayoutDesc<FSelfShadowedTranslucencyPolicy::ComputeParametersType>();
      DAT_15508403d = DAT_15508403d + '\x01';
      ::FieldBuffer._16_8_ = DAT_155083fe8;
      DAT_155083fe8 = ::FieldBuffer;
      ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
      ::FieldBuffer[0x20] = '\x06';
      ::FieldBuffer[0x21] = '\0';
      ::FieldBuffer[0x22] = '\0';
      ::FieldBuffer[0x23] = '\0';
      ::FieldBuffer[0x24] = '\x01';
      ::FieldBuffer[0x25] = '\0';
      ::FieldBuffer[0x26] = '\0';
      ::FieldBuffer[0x27] = '\0';
      if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
        DAT_15508403e = DAT_15508403e + '\x01';
      }
      ::FieldBuffer._0_8_ = u_BASE;
      ::FieldBuffer[0x2a] = '\x04';
      ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
      DAT_15508403d = DAT_15508403d + '\x01';
      ::FieldBuffer._16_8_ = DAT_155083fe8;
      DAT_155083fe8 = ::FieldBuffer;
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
        DAT_15508403e = DAT_15508403e + '\x01';
      }
      FTypeLayoutDesc::Initialize
                ((FTypeLayoutDesc *)
                 &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_FSelfShadowedCachedPointIndirectLightingPolicy::ComputeParametersType::StaticGetTypeLayout(void)'
                  ::__l2::TypeBuffer);
      ppuVar1 = DAT_1550965d0;
    }
    DAT_155096625 = DAT_155096625 + '\x01';
    ::FieldBuffer._8_8_ =
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_FSelfShadowedCachedPointIndirectLightingPolicy::ComputeParametersType::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\b';
    ::FieldBuffer[0x21] = '\x01';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    DAT_1550965d0 = (uchar **)::FieldBuffer;
    if (DAT_15508403c != '\0') {
      DAT_155096626 = DAT_155096626 + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._16_8_ = ppuVar1;
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    DAT_155096625 = DAT_155096625 + '\x01';
    ::FieldBuffer._16_8_ = DAT_1550965d0;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    DAT_1550965d0 = (uchar **)::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      DAT_155096626 = DAT_155096626 + '\x01';
    }
    FTypeLayoutDesc::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// StaticGetTypeLayout @ 1447b0980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl
TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::StaticGetTypeLayout(void)

{
  if ((DAT_15509675f & 2) == 0) {
    DAT_15509675f = DAT_15509675f | 2;
    _DAT_155096700 = L"TBasePassComputeShaderPolicyParamType";
    _DAT_155096750 = 0x128;
    _DAT_155096718 = Freeze::DefaultWriteMemoryImage;
    _DAT_155096720 = Freeze::DefaultUnfrozenCopy;
    _DAT_155096728 = Freeze::DefaultAppendHash;
    _DAT_155096730 = Freeze::DefaultGetTargetAlignment;
    _DAT_155096738 = Freeze::DefaultToString;
    _DAT_155096710 = InternalDestroy;
    _DAT_155096740 =
         TGetDefaultObjectHelper<TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>,0>
         ::Do;
    _DAT_155096758 = 8;
    DAT_15509675c = 0;
    _DAT_155096754 = 0xffffffff;
    InternalLinkType<6>::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Target0";
    DAT_155098182 = Freeze::FindFieldNameLength(L"Target0");
    _DAT_155098160 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
    _DAT_155098168 = DAT_155096708;
    DAT_155096708 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155098170 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155098178 = 0x11a;
    _DAT_15509817c = 1;
    _DAT_155098180 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PassDataParam";
    DAT_155097fa2 = Freeze::FindFieldNameLength(L"PassDataParam");
    _DAT_155097f80 = FShaderParameter::StaticGetTypeLayout();
    _DAT_155097f88 = DAT_155096708;
    DAT_155096708 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155097f90 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155097f98 = 0x114;
    _DAT_155097f9c = 1;
    _DAT_155097fa0 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ViewRectParam";
    DAT_155097822 = Freeze::FindFieldNameLength(L"ViewRectParam");
    _DAT_155097800 = FShaderParameter::StaticGetTypeLayout();
    _DAT_155097808 = DAT_155096708;
    DAT_155096708 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155097810 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155097818 = 0x10e;
    _DAT_15509781c = 1;
    _DAT_155097820 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadingOutputsParam";
    DAT_155097072 = Freeze::FindFieldNameLength(L"ShadingOutputsParam");
    _DAT_155097050 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155097060 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155097068 = 0x10c;
    _DAT_15509706c = 1;
    _DAT_155097070 = 0;
    _DAT_155097058 = DAT_155096708;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ReflectionCaptureBuffer";
    DAT_155096708 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    DAT_155096dd2 = Freeze::FindFieldNameLength(L"ReflectionCaptureBuffer");
    _DAT_155096db0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155096db8 = DAT_155096708;
    DAT_155096708 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155096dc0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155096dc8 = 0x10a;
    _DAT_155096dcc = 1;
    _DAT_155096dd0 = 0;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ =
         StaticGetTypeLayoutDesc<FSelfShadowedTranslucencyPolicy::ComputeParametersType>();
    DAT_15509675d = DAT_15509675d + '\x01';
    ::FieldBuffer._16_8_ = DAT_155096708;
    DAT_155096708 = (uchar **)::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\b';
    ::FieldBuffer[0x21] = '\x01';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      DAT_15509675e = DAT_15509675e + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    DAT_15509675d = DAT_15509675d + '\x01';
    ::FieldBuffer._16_8_ = DAT_155096708;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    DAT_155096708 = (uchar **)::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      DAT_15509675e = DAT_15509675e + '\x01';
    }
    FTypeLayoutDesc::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// StaticGetTypeLayout @ 1447b0d50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl
TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::StaticGetTypeLayout
          (void)

{
  uchar **ppuVar1;
  
  if ((DAT_1550964ef & 2) == 0) {
    DAT_1550964ef = DAT_1550964ef | 2;
    _DAT_155096490 = L"TBasePassComputeShaderPolicyParamType";
    _DAT_1550964c0 = Freeze::DefaultGetTargetAlignment;
    _DAT_1550964c8 = Freeze::DefaultToString;
    _DAT_1550964a0 = InternalDestroy;
    _DAT_1550964d0 =
         TGetDefaultObjectHelper<TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,0>
         ::Do;
    _DAT_1550964a8 = Freeze::DefaultWriteMemoryImage;
    _DAT_1550964b0 = Freeze::DefaultUnfrozenCopy;
    _DAT_1550964b8 = Freeze::DefaultAppendHash;
    _DAT_1550964e0 = 0x130;
    _DAT_1550964e8 = 8;
    DAT_1550964ec = 0;
    _DAT_1550964e4 = 0xffffffff;
    InternalLinkType<6>::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Target0";
    DAT_155098122 = Freeze::FindFieldNameLength(L"Target0");
    _DAT_155098100 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
    _DAT_155098108 = DAT_155096498;
    DAT_155096498 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155098110 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155098118 = 0x120;
    _DAT_15509811c = 1;
    _DAT_155098120 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PassDataParam";
    DAT_155097f42 = Freeze::FindFieldNameLength(L"PassDataParam");
    _DAT_155097f20 = FShaderParameter::StaticGetTypeLayout();
    _DAT_155097f28 = DAT_155096498;
    DAT_155096498 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155097f30 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155097f38 = 0x11a;
    _DAT_155097f3c = 1;
    _DAT_155097f40 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ViewRectParam";
    DAT_1550977c2 = Freeze::FindFieldNameLength(L"ViewRectParam");
    _DAT_1550977a0 = FShaderParameter::StaticGetTypeLayout();
    _DAT_1550977a8 = DAT_155096498;
    DAT_155096498 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550977b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550977b8 = 0x114;
    _DAT_1550977bc = 1;
    _DAT_1550977c0 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadingOutputsParam";
    DAT_155097012 = Freeze::FindFieldNameLength(L"ShadingOutputsParam");
    _DAT_155096ff0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155097000 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155096ff8 = DAT_155096498;
    DAT_155096498 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155097008 = 0x112;
    _DAT_15509700c = 1;
    _DAT_155097010 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ReflectionCaptureBuffer";
    DAT_155096cb2 = Freeze::FindFieldNameLength(L"ReflectionCaptureBuffer");
    _DAT_155096c90 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155096c98 = DAT_155096498;
    _DAT_155096ca0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155096ca8 = 0x110;
    _DAT_155096cac = 1;
    _DAT_155096cb0 = 0;
    DAT_155096498 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ppuVar1 = &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
               ::__l2::FieldBuffer;
    if ((DAT_15508410f & 2) == 0) {
      DAT_15508410f = DAT_15508410f | 2;
      _DAT_1550840c8 = Freeze::DefaultWriteMemoryImage;
      _DAT_1550840b0 = L"ComputeParametersType";
      _DAT_1550840e0 = Freeze::DefaultGetTargetAlignment;
      _DAT_1550840e8 = Freeze::DefaultToString;
      _DAT_1550840c0 = FSelfShadowedVolumetricLightmapPolicy::ComputeParametersType::InternalDestroy
      ;
      _DAT_1550840f0 =
           TGetDefaultObjectHelper<FSelfShadowedVolumetricLightmapPolicy::ComputeParametersType,0>::
           Do;
      _DAT_1550840d0 = Freeze::DefaultUnfrozenCopy;
      _DAT_1550840d8 = Freeze::DefaultAppendHash;
      _DAT_155084100 = 8;
      _DAT_155084108 = 2;
      DAT_15508410c = '\0';
      _DAT_155084104 = 0xffffffff;
      ::FieldBuffer._0_8_ = u_BASE;
      ::FieldBuffer[0x2a] = '\x04';
      ::FieldBuffer._8_8_ =
           StaticGetTypeLayoutDesc<FSelfShadowedTranslucencyPolicy::ComputeParametersType>();
      DAT_15508410d = DAT_15508410d + '\x01';
      ::FieldBuffer._16_8_ = DAT_1550840b8;
      DAT_1550840b8 = ::FieldBuffer;
      ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
      ::FieldBuffer[0x20] = '\x06';
      ::FieldBuffer[0x21] = '\0';
      ::FieldBuffer[0x22] = '\0';
      ::FieldBuffer[0x23] = '\0';
      ::FieldBuffer[0x24] = '\x01';
      ::FieldBuffer[0x25] = '\0';
      ::FieldBuffer[0x26] = '\0';
      ::FieldBuffer[0x27] = '\0';
      if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
        DAT_15508410e = DAT_15508410e + '\x01';
      }
      ::FieldBuffer._0_8_ = u_BASE;
      ::FieldBuffer[0x2a] = '\x04';
      ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
      DAT_15508410d = DAT_15508410d + '\x01';
      ::FieldBuffer._16_8_ = DAT_1550840b8;
      DAT_1550840b8 = ::FieldBuffer;
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
        DAT_15508410e = DAT_15508410e + '\x01';
      }
      FTypeLayoutDesc::Initialize
                ((FTypeLayoutDesc *)
                 &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_FSelfShadowedVolumetricLightmapPolicy::ComputeParametersType::StaticGetTypeLayout(void)'
                  ::__l2::TypeBuffer);
      ppuVar1 = DAT_155096498;
    }
    DAT_1550964ed = DAT_1550964ed + '\x01';
    ::FieldBuffer._8_8_ =
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_FSelfShadowedVolumetricLightmapPolicy::ComputeParametersType::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\b';
    ::FieldBuffer[0x21] = '\x01';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    DAT_155096498 = (uchar **)::FieldBuffer;
    if (DAT_15508410c != '\0') {
      DAT_1550964ee = DAT_1550964ee + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._16_8_ = ppuVar1;
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    DAT_1550964ed = DAT_1550964ed + '\x01';
    ::FieldBuffer._16_8_ = DAT_155096498;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    DAT_155096498 = (uchar **)::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      DAT_1550964ee = DAT_1550964ee + '\x01';
    }
    FTypeLayoutDesc::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// StaticGetTypeLayout @ 1447b12b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl
TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::StaticGetTypeLayout(void)

{
  if ((DAT_15509151f & 2) == 0) {
    DAT_15509151f = DAT_15509151f | 2;
    _DAT_1550914c0 = L"TBasePassComputeShaderPolicyParamType";
    _DAT_155091510 = 0x128;
    _DAT_1550914d8 = Freeze::DefaultWriteMemoryImage;
    _DAT_1550914e0 = Freeze::DefaultUnfrozenCopy;
    _DAT_1550914e8 = Freeze::DefaultAppendHash;
    _DAT_1550914f0 = Freeze::DefaultGetTargetAlignment;
    _DAT_1550914f8 = Freeze::DefaultToString;
    _DAT_1550914d0 = InternalDestroy;
    _DAT_155091500 =
         TGetDefaultObjectHelper<TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>,0>::
         Do;
    _DAT_155091518 = 8;
    DAT_15509151c = 0;
    _DAT_155091514 = 0xffffffff;
    InternalLinkType<6>::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Target0";
    DAT_15509556a = Freeze::FindFieldNameLength(L"Target0");
    _DAT_155095548 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
    _DAT_155095550 = DAT_1550914c8;
    DAT_1550914c8 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155095558 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155095560 = 0x11e;
    _DAT_155095564 = 1;
    _DAT_155095568 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PassDataParam";
    DAT_15509496a = Freeze::FindFieldNameLength(L"PassDataParam");
    _DAT_155094948 = FShaderParameter::StaticGetTypeLayout();
    _DAT_155094950 = DAT_1550914c8;
    DAT_1550914c8 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155094958 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155094960 = 0x118;
    _DAT_155094964 = 1;
    _DAT_155094968 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ViewRectParam";
    DAT_15509480a = Freeze::FindFieldNameLength(L"ViewRectParam");
    _DAT_1550947e8 = FShaderParameter::StaticGetTypeLayout();
    _DAT_1550947f0 = DAT_1550914c8;
    DAT_1550914c8 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550947f8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155094800 = 0x112;
    _DAT_155094804 = 1;
    _DAT_155094808 = 0;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadingOutputsParam";
    DAT_15509467a = Freeze::FindFieldNameLength(L"ShadingOutputsParam");
    _DAT_155094658 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155094668 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155094670 = 0x110;
    _DAT_155094674 = 1;
    _DAT_155094678 = 0;
    _DAT_155094660 = DAT_1550914c8;
    `public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ReflectionCaptureBuffer";
    DAT_1550914c8 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    DAT_155092762 = Freeze::FindFieldNameLength(L"ReflectionCaptureBuffer");
    _DAT_155092740 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155092748 = DAT_1550914c8;
    DAT_1550914c8 =
         &`public:_static_void___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155092750 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155092758 = 0x10e;
    _DAT_15509275c = 1;
    _DAT_155092760 = 0;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
    DAT_15509151d = DAT_15509151d + '\x01';
    ::FieldBuffer._16_8_ = DAT_1550914c8;
    DAT_1550914c8 = (uchar **)::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\b';
    ::FieldBuffer[0x21] = '\x01';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      DAT_15509151e = DAT_15509151e + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    DAT_15509151d = DAT_15509151d + '\x01';
    ::FieldBuffer._16_8_ = DAT_1550914c8;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    DAT_1550914c8 = (uchar **)::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      DAT_15509151e = DAT_15509151e + '\x01';
    }
    FTypeLayoutDesc::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// ValidateCompiledResult @ 1447ba9a0

/* WARNING: Removing unreachable block (ram,0x0001447baad0) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TBasePassComputeShaderPolicyParamType<FUniformLightMapPolicy>::ValidateCompiledResult
          (EShaderPlatform param_1,FShaderParameterMap *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  size_t sVar6;
  FScriptContainerElement *pFVar7;
  FString local_38;
  wchar_t *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TStringView<wchar_t> local_18;
  
  pFVar5 = FSceneTextureUniformParameters::GetStructMetadata();
  local_28 = pFVar5->ShaderVariableName;
  iStack_20 = 0;
  if (local_28 != (wchar_t *)0x0) {
    sVar6 = wcslen(local_28);
    iStack_20 = (int)sVar6;
  }
  local_18._12_4_ = uStack_1c;
  local_18.Size = iStack_20;
  local_18.DataPtr = local_28;
  bVar2 = FShaderParameterMap::ContainsParameterAllocation(param_2,&local_18);
  if (bVar2) {
    ::FString::FString(&local_38,L"Base pass shaders cannot read from the SceneTexturesStruct.");
    pFVar7 = (param_3->AllocatorInstance).Data;
    if (((pFVar7 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar7 + (longlong)param_3->ArrayMax * 0x10)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    iVar4 = param_3->ArrayNum;
    if (iVar4 == param_3->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar4 + 1;
    pFVar7 = (param_3->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar7 = 0;
    *(FScriptContainerElement **)pFVar7 = local_38.Data.AllocatorInstance.Data;
    *(int *)(pFVar7 + 8) = local_38.Data.ArrayNum;
    *(int *)(pFVar7 + 0xc) = local_38.Data.ArrayMax;
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

