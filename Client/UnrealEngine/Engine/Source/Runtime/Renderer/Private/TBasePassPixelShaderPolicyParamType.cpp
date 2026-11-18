// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 34

// TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<1>_> @ 14472b480

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

TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<1>_> * __thiscall
TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<1>_>::
TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<1>_>
          (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<1>_> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameterMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<1>_> *pTVar7;
  int iVar8;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  size_t sVar6;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  *(undefined2 *)&this->field_0x10c = 0xffff;
  *(undefined2 *)&this->field_0x10a = 0xffff;
  *(undefined2 *)&this->field_0x108 = 0xffff;
  (this->ReflectionCaptureBuffer).BaseIndex = 0xffff;
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
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FFogUniformParameters::GetStructMetadata();
  iVar8 = 0;
  local_48.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = 0;
  if (local_48.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_48.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_48);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FFogUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<1>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FReflectionUniformParameters::GetStructMetadata();
  local_38.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = 0;
  if (local_38.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_38.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_38._12_4_ = uStack_5c;
  local_38.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_38);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<1>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FPlanarReflectionUniformParameters::GetStructMetadata();
  local_28.DataPtr = pFVar5->ShaderVariableName;
  if (local_28.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_28.DataPtr);
    iVar8 = (int)sVar6;
  }
  local_28._12_4_ = uStack_4c;
  local_28.Size = iVar8;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_28);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FPlanarReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<1>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  return this;
}

// TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<2>_> @ 14472b680

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

TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<2>_> * __thiscall
TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<2>_>::
TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<2>_>
          (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<2>_> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameterMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<2>_> *pTVar7;
  int iVar8;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  size_t sVar6;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  *(undefined2 *)&this->field_0x10c = 0xffff;
  *(undefined2 *)&this->field_0x10a = 0xffff;
  *(undefined2 *)&this->field_0x108 = 0xffff;
  (this->ReflectionCaptureBuffer).BaseIndex = 0xffff;
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
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FFogUniformParameters::GetStructMetadata();
  iVar8 = 0;
  local_48.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = 0;
  if (local_48.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_48.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_48);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FFogUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<2>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FReflectionUniformParameters::GetStructMetadata();
  local_38.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = 0;
  if (local_38.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_38.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_38._12_4_ = uStack_5c;
  local_38.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_38);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<2>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FPlanarReflectionUniformParameters::GetStructMetadata();
  local_28.DataPtr = pFVar5->ShaderVariableName;
  if (local_28.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_28.DataPtr);
    iVar8 = (int)sVar6;
  }
  local_28._12_4_ = uStack_4c;
  local_28.Size = iVar8;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_28);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FPlanarReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<2>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  return this;
}

// TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<3>_> @ 14472b880

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

TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<3>_> * __thiscall
TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<3>_>::
TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<3>_>
          (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<3>_> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameterMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<3>_> *pTVar7;
  int iVar8;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  size_t sVar6;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  *(undefined2 *)&this->field_0x10c = 0xffff;
  *(undefined2 *)&this->field_0x10a = 0xffff;
  *(undefined2 *)&this->field_0x108 = 0xffff;
  (this->ReflectionCaptureBuffer).BaseIndex = 0xffff;
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
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FFogUniformParameters::GetStructMetadata();
  iVar8 = 0;
  local_48.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = 0;
  if (local_48.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_48.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_48);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FFogUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<3>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FReflectionUniformParameters::GetStructMetadata();
  local_38.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = 0;
  if (local_38.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_38.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_38._12_4_ = uStack_5c;
  local_38.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_38);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<3>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FPlanarReflectionUniformParameters::GetStructMetadata();
  local_28.DataPtr = pFVar5->ShaderVariableName;
  if (local_28.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_28.DataPtr);
    iVar8 = (int)sVar6;
  }
  local_28._12_4_ = uStack_4c;
  local_28.Size = iVar8;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_28);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FPlanarReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<3>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  return this;
}

// TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<4>_> @ 14472ba80

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

TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<4>_> * __thiscall
TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<4>_>::
TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<4>_>
          (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<4>_> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameterMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<4>_> *pTVar7;
  int iVar8;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  size_t sVar6;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  *(undefined2 *)&this->field_0x10c = 0xffff;
  *(undefined2 *)&this->field_0x10a = 0xffff;
  *(undefined2 *)&this->field_0x108 = 0xffff;
  (this->ReflectionCaptureBuffer).BaseIndex = 0xffff;
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
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FFogUniformParameters::GetStructMetadata();
  iVar8 = 0;
  local_48.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = 0;
  if (local_48.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_48.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_48);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FFogUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<4>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FReflectionUniformParameters::GetStructMetadata();
  local_38.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = 0;
  if (local_38.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_38.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_38._12_4_ = uStack_5c;
  local_38.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_38);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<4>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FPlanarReflectionUniformParameters::GetStructMetadata();
  local_28.DataPtr = pFVar5->ShaderVariableName;
  if (local_28.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_28.DataPtr);
    iVar8 = (int)sVar6;
  }
  local_28._12_4_ = uStack_4c;
  local_28.Size = iVar8;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_28);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FPlanarReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<4>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  return this;
}

// TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<5>_> @ 14472bc80

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

TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<5>_> * __thiscall
TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<5>_>::
TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<5>_>
          (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<5>_> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameterMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<5>_> *pTVar7;
  int iVar8;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  size_t sVar6;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  *(undefined2 *)&this->field_0x10c = 0xffff;
  *(undefined2 *)&this->field_0x10a = 0xffff;
  *(undefined2 *)&this->field_0x108 = 0xffff;
  (this->ReflectionCaptureBuffer).BaseIndex = 0xffff;
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
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FFogUniformParameters::GetStructMetadata();
  iVar8 = 0;
  local_48.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = 0;
  if (local_48.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_48.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_48);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FFogUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<5>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FReflectionUniformParameters::GetStructMetadata();
  local_38.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = 0;
  if (local_38.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_38.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_38._12_4_ = uStack_5c;
  local_38.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_38);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<5>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FPlanarReflectionUniformParameters::GetStructMetadata();
  local_28.DataPtr = pFVar5->ShaderVariableName;
  if (local_28.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_28.DataPtr);
    iVar8 = (int)sVar6;
  }
  local_28._12_4_ = uStack_4c;
  local_28.Size = iVar8;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_28);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FPlanarReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<5>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  return this;
}

// TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<6>_> @ 14472be80

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

TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<6>_> * __thiscall
TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<6>_>::
TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<6>_>
          (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<6>_> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameterMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<6>_> *pTVar7;
  int iVar8;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  size_t sVar6;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  *(undefined2 *)&this->field_0x10c = 0xffff;
  *(undefined2 *)&this->field_0x10a = 0xffff;
  *(undefined2 *)&this->field_0x108 = 0xffff;
  (this->ReflectionCaptureBuffer).BaseIndex = 0xffff;
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
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FFogUniformParameters::GetStructMetadata();
  iVar8 = 0;
  local_48.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = 0;
  if (local_48.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_48.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_48);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FFogUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<6>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FReflectionUniformParameters::GetStructMetadata();
  local_38.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = 0;
  if (local_38.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_38.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_38._12_4_ = uStack_5c;
  local_38.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_38);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<6>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FPlanarReflectionUniformParameters::GetStructMetadata();
  local_28.DataPtr = pFVar5->ShaderVariableName;
  if (local_28.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_28.DataPtr);
    iVar8 = (int)sVar6;
  }
  local_28._12_4_ = uStack_4c;
  local_28.Size = iVar8;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_28);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FPlanarReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<6>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  return this;
}

// TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<0>_> @ 14472c080

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

TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<0>_> * __thiscall
TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<0>_>::
TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<0>_>
          (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<0>_> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameterMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<0>_> *pTVar7;
  int iVar8;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  size_t sVar6;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  *(undefined2 *)&this->field_0x10c = 0xffff;
  *(undefined2 *)&this->field_0x10a = 0xffff;
  *(undefined2 *)&this->field_0x108 = 0xffff;
  (this->ReflectionCaptureBuffer).BaseIndex = 0xffff;
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
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FFogUniformParameters::GetStructMetadata();
  iVar8 = 0;
  local_48.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = 0;
  if (local_48.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_48.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_48);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FFogUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<0>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FReflectionUniformParameters::GetStructMetadata();
  local_38.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = 0;
  if (local_38.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_38.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_38._12_4_ = uStack_5c;
  local_38.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_38);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<0>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FPlanarReflectionUniformParameters::GetStructMetadata();
  local_28.DataPtr = pFVar5->ShaderVariableName;
  if (local_28.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_28.DataPtr);
    iVar8 = (int)sVar6;
  }
  local_28._12_4_ = uStack_4c;
  local_28.Size = iVar8;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_28);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FPlanarReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<0>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  return this;
}

// TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy> @ 14472c280

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

TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy> * __thiscall
TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::
TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>
          (TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy> *this
          ,CompiledShaderInitializerType *param_1)

{
  FShaderUniformBufferParameter *this_00;
  FShaderUniformBufferParameter *this_01;
  FShaderParameterMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy> *pTVar7;
  int iVar8;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  size_t sVar6;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  this_00 = (FShaderUniformBufferParameter *)((longlong)&this->_padding_ + 2);
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0xffff;
  this_00->BaseIndex = 0xffff;
  this_01 = (FShaderUniformBufferParameter *)((longlong)&this->_padding_ + 6);
  *(undefined2 *)&this->_padding_ = 0xffff;
  this_01->BaseIndex = 0xffff;
  (this->ReflectionCaptureBuffer).BaseIndex = 0xffff;
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->_padding_,pFVar1,L"PrecomputedLightingBuffer",
             SPF_Optional);
  FShaderUniformBufferParameter::Bind(this_00,pFVar1,L"IndirectLightingCache",SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)((longlong)&this->_padding_ + 4),pFVar1,
             L"LightmapResourceCluster",SPF_Optional);
  FShaderUniformBufferParameter::Bind(this_01,pFVar1,L"TranslucentSelfShadow",SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->ReflectionCaptureBuffer,(FShaderParameterMap *)param_1->_padding_,
             L"ReflectionCapture",SPF_Optional);
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FFogUniformParameters::GetStructMetadata();
  iVar8 = 0;
  local_48.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = 0;
  if (local_48.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_48.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_48);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FFogUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>
                *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FReflectionUniformParameters::GetStructMetadata();
  local_38.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = 0;
  if (local_38.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_38.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_38._12_4_ = uStack_5c;
  local_38.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_38);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>
                *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FPlanarReflectionUniformParameters::GetStructMetadata();
  local_28.DataPtr = pFVar5->ShaderVariableName;
  if (local_28.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_28.DataPtr);
    iVar8 = (int)sVar6;
  }
  local_28._12_4_ = uStack_4c;
  local_28.Size = iVar8;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_28);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FPlanarReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>
                *)(*pcVar2)();
      return pTVar7;
    }
  }
  return this;
}

// TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy> @ 14472c4b0

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

TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy> * __thiscall
TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::
TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>
          (TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameterMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy> *pTVar7;
  int iVar8;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  size_t sVar6;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  this->_padding_ = -1;
  (this->ReflectionCaptureBuffer).BaseIndex = 0xffff;
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->_padding_,
             (FShaderParameterMap *)param_1->_padding_,L"TranslucentSelfShadow",SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->ReflectionCaptureBuffer,(FShaderParameterMap *)param_1->_padding_,
             L"ReflectionCapture",SPF_Optional);
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FFogUniformParameters::GetStructMetadata();
  iVar8 = 0;
  local_38.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = 0;
  if (local_38.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_38.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_38._12_4_ = uStack_5c;
  local_38.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_38);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FFogUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FReflectionUniformParameters::GetStructMetadata();
  local_28.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = 0;
  if (local_28.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_28.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_28._12_4_ = uStack_4c;
  local_28.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_28);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FPlanarReflectionUniformParameters::GetStructMetadata();
  local_18.DataPtr = pFVar5->ShaderVariableName;
  if (local_18.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_18.DataPtr);
    iVar8 = (int)sVar6;
  }
  local_18._12_4_ = uStack_3c;
  local_18.Size = iVar8;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_18);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FPlanarReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy> *)(*pcVar2)();
      return pTVar7;
    }
  }
  return this;
}

// TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy> @ 14472c670

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

TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy> * __thiscall
TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::
TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>
          (TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderUniformBufferParameter *this_00;
  FShaderUniformBufferParameter *this_01;
  FShaderParameterMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy> *pTVar7;
  int iVar8;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  size_t sVar6;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  this_00 = (FShaderUniformBufferParameter *)((longlong)&this->_padding_ + 2);
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0xffff;
  this_00->BaseIndex = 0xffff;
  this_01 = (FShaderUniformBufferParameter *)((longlong)&this->_padding_ + 6);
  *(undefined2 *)&this->_padding_ = 0xffff;
  this_01->BaseIndex = 0xffff;
  (this->ReflectionCaptureBuffer).BaseIndex = 0xffff;
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->_padding_,pFVar1,L"PrecomputedLightingBuffer",
             SPF_Optional);
  FShaderUniformBufferParameter::Bind(this_00,pFVar1,L"IndirectLightingCache",SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)((longlong)&this->_padding_ + 4),pFVar1,
             L"LightmapResourceCluster",SPF_Optional);
  FShaderUniformBufferParameter::Bind(this_01,pFVar1,L"TranslucentSelfShadow",SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->ReflectionCaptureBuffer,(FShaderParameterMap *)param_1->_padding_,
             L"ReflectionCapture",SPF_Optional);
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FFogUniformParameters::GetStructMetadata();
  iVar8 = 0;
  local_48.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = 0;
  if (local_48.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_48.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_48);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FFogUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy> *)
               (*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FReflectionUniformParameters::GetStructMetadata();
  local_38.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = 0;
  if (local_38.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_38.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_38._12_4_ = uStack_5c;
  local_38.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_38);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy> *)
               (*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FPlanarReflectionUniformParameters::GetStructMetadata();
  local_28.DataPtr = pFVar5->ShaderVariableName;
  if (local_28.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_28.DataPtr);
    iVar8 = (int)sVar6;
  }
  local_28._12_4_ = uStack_4c;
  local_28.Size = iVar8;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_28);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FPlanarReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy> *)
               (*pcVar2)();
      return pTVar7;
    }
  }
  return this;
}

// TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> @ 14472c8a0

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

TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> * __thiscall
TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>::
TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>
          (TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameterMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> *pTVar7;
  int iVar8;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  size_t sVar6;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  *(undefined2 *)&this->field_0x10c = 0xffff;
  *(undefined2 *)&this->field_0x10a = 0xffff;
  *(undefined2 *)&this->field_0x108 = 0xffff;
  (this->ReflectionCaptureBuffer).BaseIndex = 0xffff;
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
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FFogUniformParameters::GetStructMetadata();
  iVar8 = 0;
  local_48.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = 0;
  if (local_48.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_48.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_48);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FFogUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FReflectionUniformParameters::GetStructMetadata();
  local_38.DataPtr = pFVar5->ShaderVariableName;
  iVar4 = 0;
  if (local_38.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_38.DataPtr);
    iVar4 = (int)sVar6;
  }
  local_38._12_4_ = uStack_5c;
  local_38.Size = iVar4;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_38);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  pFVar5 = FPlanarReflectionUniformParameters::GetStructMetadata();
  local_28.DataPtr = pFVar5->ShaderVariableName;
  if (local_28.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_28.DataPtr);
    iVar8 = (int)sVar6;
  }
  local_28._12_4_ = uStack_4c;
  local_28.Size = iVar8;
  bVar3 = FShaderParameterMap::ContainsParameterAllocation(pFVar1,&local_28);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Initializer.ParameterMap.ContainsParameterAllocation(FPlanarReflectionUniformParameters::FTypeInfo::GetStructMetadata()->GetShaderVariableName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                       ,0x24c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> *)(*pcVar2)();
      return pTVar7;
    }
  }
  return this;
}

// TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> @ 14472caa0

TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> * __thiscall
TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>::
TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>
          (TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> *this)

{
  FMaterialShader::FMaterialShader((FMaterialShader *)this);
  *(undefined8 *)&this->field_0xf8 = 0;
  *(undefined2 *)&this->field_0x100 = 0xffff;
  *(undefined8 *)&this->field_0x108 = 0xffffffffffffffff;
  return this;
}

// ~TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> @ 14472ec40

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
TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>::
~TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>
          (TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0xe0);
  FShader::~FShader((FShader *)this);
  return;
}

// GetShaderBindings @ 14475fcc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::
GetShaderBindings(TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>
                  *this,FScene *param_1,Type param_2,FPrimitiveSceneProxy *param_3,
                 FMaterialRenderProxy *param_4,FMaterial *param_5,
                 TBasePassShaderElementData<FSelfShadowedCachedPointIndirectLightingPolicy> *param_6
                 ,FMeshDrawSingleShaderBindings *param_7)

{
  PixelParametersType *pPVar1;
  
  FMeshMaterialShader::GetShaderBindings
            ((FMeshMaterialShader *)this,param_1,param_2,param_3,param_4,param_5,
             (FMeshMaterialShaderElementData *)param_6,param_7);
  pPVar1 = (PixelParametersType *)&this->_padding_;
  if (this == (TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy> *
              )0x0) {
    pPVar1 = (PixelParametersType *)0x0;
  }
  FSelfShadowedCachedPointIndirectLightingPolicy::GetPixelShaderBindings
            (param_3,&param_6->LightMapPolicyElementData,pPVar1,param_7);
  return;
}

// GetShaderBindings @ 14475fd50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::GetShaderBindings
          (TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy> *this,
          FScene *param_1,Type param_2,FPrimitiveSceneProxy *param_3,FMaterialRenderProxy *param_4,
          FMaterial *param_5,TBasePassShaderElementData<FSelfShadowedTranslucencyPolicy> *param_6,
          FMeshDrawSingleShaderBindings *param_7)

{
  short *psVar1;
  
  FMeshMaterialShader::GetShaderBindings
            ((FMeshMaterialShader *)this,param_1,param_2,param_3,param_4,param_5,
             (FMeshMaterialShaderElementData *)param_6,param_7);
  psVar1 = &this->_padding_;
  if (this == (TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy> *)0x0) {
    psVar1 = (short *)0x0;
  }
  FSelfShadowedTranslucencyPolicy::GetPixelShaderBindings
            (param_3,&param_6->LightMapPolicyElementData,(PixelParametersType *)psVar1,param_7);
  return;
}

// GetShaderBindings @ 14475fde0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::GetShaderBindings
          (TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy> *this,
          FScene *param_1,Type param_2,FPrimitiveSceneProxy *param_3,FMaterialRenderProxy *param_4,
          FMaterial *param_5,
          TBasePassShaderElementData<FSelfShadowedVolumetricLightmapPolicy> *param_6,
          FMeshDrawSingleShaderBindings *param_7)

{
  PixelParametersType *pPVar1;
  
  FMeshMaterialShader::GetShaderBindings
            ((FMeshMaterialShader *)this,param_1,param_2,param_3,param_4,param_5,
             (FMeshMaterialShaderElementData *)param_6,param_7);
  pPVar1 = (PixelParametersType *)&this->_padding_;
  if (this == (TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy> *)0x0) {
    pPVar1 = (PixelParametersType *)0x0;
  }
  FSelfShadowedVolumetricLightmapPolicy::GetPixelShaderBindings
            (param_3,&param_6->LightMapPolicyElementData,pPVar1,param_7);
  return;
}

// GetShaderBindings @ 14475fe70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>::GetShaderBindings
          (TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> *this,FScene *param_1,
          Type param_2,FPrimitiveSceneProxy *param_3,FMaterialRenderProxy *param_4,
          FMaterial *param_5,TBasePassShaderElementData<FUniformLightMapPolicy> *param_6,
          FMeshDrawSingleShaderBindings *param_7)

{
  FUniformLightMapPolicyShaderParametersType *pFVar1;
  
  FMeshMaterialShader::GetShaderBindings
            ((FMeshMaterialShader *)this,param_1,param_2,param_3,param_4,param_5,
             (FMeshMaterialShaderElementData *)param_6,param_7);
  pFVar1 = (FUniformLightMapPolicyShaderParametersType *)&this->field_0x108;
  if (this == (TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> *)0x0) {
    pFVar1 = (FUniformLightMapPolicyShaderParametersType *)0x0;
  }
  FUniformLightMapPolicy::GetPixelShaderBindings
            (param_3,&param_6->LightMapPolicyElementData,pFVar1,param_7);
  return;
}

// GetTypeLayout @ 144778140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>::GetTypeLayout
          (TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> *this)

{
  if ((DAT_15509144f & 2) == 0) {
    DAT_15509144f = DAT_15509144f | 2;
    _DAT_155091440 = 0x110;
    _DAT_1550913f0 = L"TBasePassPixelShaderPolicyParamType";
    _DAT_155091408 = Freeze::DefaultWriteMemoryImage;
    _DAT_155091410 = Freeze::DefaultUnfrozenCopy;
    _DAT_155091418 = Freeze::DefaultAppendHash;
    _DAT_155091420 = Freeze::DefaultGetTargetAlignment;
    _DAT_155091428 = Freeze::DefaultToString;
    _DAT_155091400 = InternalDestroy;
    _DAT_155091430 =
         TGetDefaultObjectHelper<TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,0>::Do;
    _DAT_155091448 = 8;
    DAT_15509144c = 0;
    _DAT_155091444 = 0xffffffff;
    `public:_static_void___cdecl_TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ReflectionCaptureBuffer";
    DAT_155092792 = Freeze::FindFieldNameLength(L"ReflectionCaptureBuffer");
    _DAT_155092770 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155092778 = DAT_1550913f8;
    DAT_1550913f8 =
         &`public:_static_void___cdecl_TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155092780 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155092788 = 0x10e;
    _DAT_15509278c = 1;
    _DAT_155092790 = 0;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
    DAT_15509144d = DAT_15509144d + '\x01';
    ::FieldBuffer._16_8_ = DAT_1550913f8;
    DAT_1550913f8 = (uchar **)::FieldBuffer;
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
      DAT_15509144e = DAT_15509144e + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    DAT_15509144d = DAT_15509144d + '\x01';
    ::FieldBuffer._16_8_ = DAT_1550913f8;
    DAT_1550913f8 = (uchar **)::FieldBuffer;
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
      DAT_15509144e = DAT_15509144e + '\x01';
    }
    FTypeLayoutDesc::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// InternalDestroy @ 14477f790

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
TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x110);
  return;
}

// InternalDestroy @ 14477f7d0

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
TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x110);
  return;
}

// InternalDestroy @ 14477f810

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
TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x110);
  return;
}

// InternalDestroy @ 14477f850

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
TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x110);
  return;
}

// InternalDestroy @ 14477f890

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
TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x110);
  return;
}

// InternalDestroy @ 14477f8d0

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
TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x110);
  return;
}

// InternalDestroy @ 14477f910

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
TBasePassPixelShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x110);
  return;
}

// InternalDestroy @ 14477f950

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
TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x118);
  return;
}

// InternalDestroy @ 14477f990

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
TBasePassPixelShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x110);
  return;
}

// InternalDestroy @ 14477f9d0

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
TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x118);
  return;
}

// InternalDestroy @ 14477fa10

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
TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x110);
  return;
}

// ModifyCompilationEnvironment @ 144781480

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
TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>::ModifyCompilationEnvironment
          (FMeshMaterialShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  bool bVar1;
  
  FShaderCompilerEnvironment::SetDefine(param_2,L"FORWARD_LIGHT_DATA_STRIDE",6);
  FShaderCompilerEnvironment::SetDefine
            (param_2,L"NUM_CULLED_LIGHTS_GRID_STRIDE",NumCulledLightsGridStride);
  FShaderCompilerEnvironment::SetDefine
            (param_2,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",NumCulledGridPrimitiveTypes);
  bVar1 = HardwareVariableRateShadingSupportedByPlatform((EShaderPlatform)param_1->_padding_);
  if ((bVar1) && (param_1->_padding_ < 0)) {
    FShaderCompilerEnvironment::SetCompileArgument<bool>
              (param_2,L"USING_VARIABLE_RATE_SHADING",true);
  }
  return;
}

// StaticGetTypeLayout @ 1447b4b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl
TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::
StaticGetTypeLayout(void)

{
  uchar **ppuVar1;
  
  if ((DAT_15509668f & 2) == 0) {
    DAT_15509668f = DAT_15509668f | 2;
    _DAT_155096630 = L"TBasePassPixelShaderPolicyParamType";
    _DAT_155096668 = Freeze::DefaultToString;
    _DAT_155096640 = InternalDestroy;
    _DAT_155096670 =
         TGetDefaultObjectHelper<TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>,0>
         ::Do;
    _DAT_155096648 = Freeze::DefaultWriteMemoryImage;
    _DAT_155096650 = Freeze::DefaultUnfrozenCopy;
    _DAT_155096658 = Freeze::DefaultAppendHash;
    _DAT_155096660 = Freeze::DefaultGetTargetAlignment;
    _DAT_155096680 = 0x118;
    _DAT_155096688 = 8;
    DAT_15509668c = 0;
    _DAT_155096684 = 0xffffffff;
    `public:_static_void___cdecl_TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ReflectionCaptureBuffer";
    DAT_155096d72 = Freeze::FindFieldNameLength(L"ReflectionCaptureBuffer");
    _DAT_155096d50 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155096d58 = DAT_155096638;
    DAT_155096638 =
         &`public:_static_void___cdecl_TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155096d60 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155096d68 = 0x110;
    _DAT_155096d6c = 1;
    _DAT_155096d70 = 0;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ppuVar1 = &`public:_static_void___cdecl_TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
               ::__l2::FieldBuffer;
    if ((DAT_155083fd7 & 2) == 0) {
      _DAT_155083f90 = Freeze::DefaultWriteMemoryImage;
      _DAT_155083f78 = L"PixelParametersType";
      DAT_155083fd7 = DAT_155083fd7 | 2;
      _DAT_155083fb0 = Freeze::DefaultToString;
      _DAT_155083f88 =
           FSelfShadowedCachedPointIndirectLightingPolicy::PixelParametersType::InternalDestroy;
      _DAT_155083fb8 =
           TGetDefaultObjectHelper<FSelfShadowedCachedPointIndirectLightingPolicy::PixelParametersType,0>
           ::Do;
      _DAT_155083f98 = Freeze::DefaultUnfrozenCopy;
      _DAT_155083fa0 = Freeze::DefaultAppendHash;
      _DAT_155083fa8 = Freeze::DefaultGetTargetAlignment;
      _DAT_155083fc8 = 8;
      _DAT_155083fd0 = 2;
      DAT_155083fd4 = '\0';
      _DAT_155083fcc = 0xffffffff;
      ::FieldBuffer._0_8_ = u_BASE;
      ::FieldBuffer[0x2a] = '\x04';
      ::FieldBuffer._8_8_ =
           StaticGetTypeLayoutDesc<FSelfShadowedTranslucencyPolicy::PixelParametersType>();
      DAT_155083fd5 = DAT_155083fd5 + '\x01';
      ::FieldBuffer._16_8_ = DAT_155083f80;
      DAT_155083f80 = ::FieldBuffer;
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
        DAT_155083fd6 = DAT_155083fd6 + '\x01';
      }
      ::FieldBuffer._0_8_ = u_BASE;
      ::FieldBuffer[0x2a] = '\x04';
      ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
      DAT_155083fd5 = DAT_155083fd5 + '\x01';
      ::FieldBuffer._16_8_ = DAT_155083f80;
      DAT_155083f80 = ::FieldBuffer;
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
        DAT_155083fd6 = DAT_155083fd6 + '\x01';
      }
      FTypeLayoutDesc::Initialize
                ((FTypeLayoutDesc *)
                 &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_FSelfShadowedCachedPointIndirectLightingPolicy::PixelParametersType::StaticGetTypeLayout(void)'
                  ::__l2::TypeBuffer);
      ppuVar1 = DAT_155096638;
    }
    DAT_15509668d = DAT_15509668d + '\x01';
    ::FieldBuffer._8_8_ =
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_FSelfShadowedCachedPointIndirectLightingPolicy::PixelParametersType::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
    DAT_155096638 = (uchar **)::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\b';
    ::FieldBuffer[0x21] = '\x01';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (DAT_155083fd4 != '\0') {
      DAT_15509668e = DAT_15509668e + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._16_8_ = ppuVar1;
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    DAT_15509668d = DAT_15509668d + '\x01';
    ::FieldBuffer._16_8_ = DAT_155096638;
    DAT_155096638 = (uchar **)::FieldBuffer;
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
      DAT_15509668e = DAT_15509668e + '\x01';
    }
    FTypeLayoutDesc::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassPixelShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// StaticGetTypeLayout @ 1447b4ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl
TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::StaticGetTypeLayout
          (void)

{
  uchar **ppuVar1;
  
  if ((DAT_155096557 & 2) == 0) {
    DAT_155096557 = DAT_155096557 | 2;
    _DAT_1550964f8 = L"TBasePassPixelShaderPolicyParamType";
    _DAT_155096530 = Freeze::DefaultToString;
    _DAT_155096508 = InternalDestroy;
    _DAT_155096538 =
         TGetDefaultObjectHelper<TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>,0>
         ::Do;
    _DAT_155096510 = Freeze::DefaultWriteMemoryImage;
    _DAT_155096518 = Freeze::DefaultUnfrozenCopy;
    _DAT_155096520 = Freeze::DefaultAppendHash;
    _DAT_155096528 = Freeze::DefaultGetTargetAlignment;
    _DAT_155096548 = 0x118;
    _DAT_155096550 = 8;
    DAT_155096554 = 0;
    _DAT_15509654c = 0xffffffff;
    `public:_static_void___cdecl_TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ReflectionCaptureBuffer";
    DAT_155096ce2 = Freeze::FindFieldNameLength(L"ReflectionCaptureBuffer");
    _DAT_155096cc0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155096cc8 = DAT_155096500;
    DAT_155096500 =
         &`public:_static_void___cdecl_TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155096cd0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155096cd8 = 0x110;
    _DAT_155096cdc = 1;
    _DAT_155096ce0 = 0;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ppuVar1 = &`public:_static_void___cdecl_TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
               ::__l2::FieldBuffer;
    if ((DAT_1550840a7 & 2) == 0) {
      _DAT_155084060 = Freeze::DefaultWriteMemoryImage;
      _DAT_155084048 = L"PixelParametersType";
      DAT_1550840a7 = DAT_1550840a7 | 2;
      _DAT_155084080 = Freeze::DefaultToString;
      _DAT_155084058 = FSelfShadowedVolumetricLightmapPolicy::PixelParametersType::InternalDestroy;
      _DAT_155084088 =
           TGetDefaultObjectHelper<FSelfShadowedVolumetricLightmapPolicy::PixelParametersType,0>::Do
      ;
      _DAT_155084068 = Freeze::DefaultUnfrozenCopy;
      _DAT_155084070 = Freeze::DefaultAppendHash;
      _DAT_155084078 = Freeze::DefaultGetTargetAlignment;
      _DAT_155084098 = 8;
      _DAT_1550840a0 = 2;
      DAT_1550840a4 = '\0';
      _DAT_15508409c = 0xffffffff;
      ::FieldBuffer._0_8_ = u_BASE;
      ::FieldBuffer[0x2a] = '\x04';
      ::FieldBuffer._8_8_ =
           StaticGetTypeLayoutDesc<FSelfShadowedTranslucencyPolicy::PixelParametersType>();
      DAT_1550840a5 = DAT_1550840a5 + '\x01';
      ::FieldBuffer._16_8_ = DAT_155084050;
      DAT_155084050 = ::FieldBuffer;
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
        DAT_1550840a6 = DAT_1550840a6 + '\x01';
      }
      ::FieldBuffer._0_8_ = u_BASE;
      ::FieldBuffer[0x2a] = '\x04';
      ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
      DAT_1550840a5 = DAT_1550840a5 + '\x01';
      ::FieldBuffer._16_8_ = DAT_155084050;
      DAT_155084050 = ::FieldBuffer;
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
        DAT_1550840a6 = DAT_1550840a6 + '\x01';
      }
      FTypeLayoutDesc::Initialize
                ((FTypeLayoutDesc *)
                 &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_FSelfShadowedVolumetricLightmapPolicy::PixelParametersType::StaticGetTypeLayout(void)'
                  ::__l2::TypeBuffer);
      ppuVar1 = DAT_155096500;
    }
    DAT_155096555 = DAT_155096555 + '\x01';
    ::FieldBuffer._8_8_ =
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_FSelfShadowedVolumetricLightmapPolicy::PixelParametersType::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
    DAT_155096500 = (uchar **)::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\b';
    ::FieldBuffer[0x21] = '\x01';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (DAT_1550840a4 != '\0') {
      DAT_155096556 = DAT_155096556 + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._16_8_ = ppuVar1;
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    DAT_155096555 = DAT_155096555 + '\x01';
    ::FieldBuffer._16_8_ = DAT_155096500;
    DAT_155096500 = (uchar **)::FieldBuffer;
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
      DAT_155096556 = DAT_155096556 + '\x01';
    }
    FTypeLayoutDesc::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassPixelShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// StaticGetTypeLayout @ 1447b5280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl
TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>::StaticGetTypeLayout(void)

{
  if ((DAT_15509144f & 2) == 0) {
    DAT_15509144f = DAT_15509144f | 2;
    _DAT_155091440 = 0x110;
    _DAT_1550913f0 = L"TBasePassPixelShaderPolicyParamType";
    _DAT_155091408 = Freeze::DefaultWriteMemoryImage;
    _DAT_155091410 = Freeze::DefaultUnfrozenCopy;
    _DAT_155091418 = Freeze::DefaultAppendHash;
    _DAT_155091420 = Freeze::DefaultGetTargetAlignment;
    _DAT_155091428 = Freeze::DefaultToString;
    _DAT_155091400 = InternalDestroy;
    _DAT_155091430 =
         TGetDefaultObjectHelper<TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,0>::Do;
    _DAT_155091448 = 8;
    DAT_15509144c = 0;
    _DAT_155091444 = 0xffffffff;
    `public:_static_void___cdecl_TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ReflectionCaptureBuffer";
    DAT_155092792 = Freeze::FindFieldNameLength(L"ReflectionCaptureBuffer");
    _DAT_155092770 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_155092778 = DAT_1550913f8;
    DAT_1550913f8 =
         &`public:_static_void___cdecl_TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155092780 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155092788 = 0x10e;
    _DAT_15509278c = 1;
    _DAT_155092790 = 0;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
    DAT_15509144d = DAT_15509144d + '\x01';
    ::FieldBuffer._16_8_ = DAT_1550913f8;
    DAT_1550913f8 = (uchar **)::FieldBuffer;
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
      DAT_15509144e = DAT_15509144e + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    DAT_15509144d = DAT_15509144d + '\x01';
    ::FieldBuffer._16_8_ = DAT_1550913f8;
    DAT_1550913f8 = (uchar **)::FieldBuffer;
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
      DAT_15509144e = DAT_15509144e + '\x01';
    }
    FTypeLayoutDesc::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// ValidateCompiledResult @ 1447bab00

/* WARNING: Removing unreachable block (ram,0x0001447bac30) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>::ValidateCompiledResult
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

