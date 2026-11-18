// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 33

// ConstructCompiledInstance @ 1449c5010

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
FHairVisibilityPS<1>::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  code *pcVar1;
  bool bVar2;
  EShadingPath EVar3;
  FMeshMaterialShader *this;
  FShader *pFVar4;
  uint uVar5;
  
  this = ::operator_new(0x120);
  if (this == (FMeshMaterialShader *)0x0) {
    return (FShader *)0x0;
  }
  FMeshMaterialShader::FMeshMaterialShader(this,(CompiledShaderInitializerType *)param_1);
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  uVar5 = (param_1->Target).field0_0x0.Packed >> 4 & 0xffff;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar5].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FShader *)(*pcVar1)();
      return pFVar4;
    }
  }
  EVar3 = FSceneInterface::GetShadingPath
                    (FGenericDataDrivenShaderPlatformInfo::Infos[uVar5].MaxFeatureLevel);
  if (EVar3 == Mobile) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FSceneInterface::GetShadingPath(FeatureLevel) != EShadingPath::Mobile",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\HairStrands\\HairStrandsVisibility.cpp"
                       ,0x5ac,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FShader *)(*pcVar1)();
      return pFVar4;
    }
  }
  FShaderParameter::Bind
            ((FShaderParameter *)(this + 1),param_1->ParameterMap,
             L"HairVisibilityPass_HairMacroGroupIndex",SPF_Optional);
  FShaderParameter::Bind
            ((FShaderParameter *)((longlong)&this[1]._padding_ + 6),param_1->ParameterMap,
             L"HairVisibilityPass_HairMaterialId",SPF_Optional);
  FShaderParameter::Bind
            ((FShaderParameter *)((longlong)&this[1]._padding_ + 4),param_1->ParameterMap,
             L"HairVisibilityPass_LightChannelMask",SPF_Optional);
  FShaderParameter::Bind
            ((FShaderParameter *)((longlong)&this[1]._padding_ + 2),param_1->ParameterMap,
             L"HairVisibilityPass_HairCoverageScale",SPF_Optional);
  return (FShader *)this;
}

// ConstructCompiledInstance @ 1449c5190

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
FHairVisibilityPS<2>::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  code *pcVar1;
  bool bVar2;
  EShadingPath EVar3;
  FMeshMaterialShader *this;
  FShader *pFVar4;
  uint uVar5;
  
  this = ::operator_new(0x120);
  if (this == (FMeshMaterialShader *)0x0) {
    return (FShader *)0x0;
  }
  FMeshMaterialShader::FMeshMaterialShader(this,(CompiledShaderInitializerType *)param_1);
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  uVar5 = (param_1->Target).field0_0x0.Packed >> 4 & 0xffff;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar5].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FShader *)(*pcVar1)();
      return pFVar4;
    }
  }
  EVar3 = FSceneInterface::GetShadingPath
                    (FGenericDataDrivenShaderPlatformInfo::Infos[uVar5].MaxFeatureLevel);
  if (EVar3 == Mobile) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FSceneInterface::GetShadingPath(FeatureLevel) != EShadingPath::Mobile",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\HairStrands\\HairStrandsVisibility.cpp"
                       ,0x5ac,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FShader *)(*pcVar1)();
      return pFVar4;
    }
  }
  FShaderParameter::Bind
            ((FShaderParameter *)(this + 1),param_1->ParameterMap,
             L"HairVisibilityPass_HairMacroGroupIndex",SPF_Optional);
  FShaderParameter::Bind
            ((FShaderParameter *)((longlong)&this[1]._padding_ + 6),param_1->ParameterMap,
             L"HairVisibilityPass_HairMaterialId",SPF_Optional);
  FShaderParameter::Bind
            ((FShaderParameter *)((longlong)&this[1]._padding_ + 4),param_1->ParameterMap,
             L"HairVisibilityPass_LightChannelMask",SPF_Optional);
  FShaderParameter::Bind
            ((FShaderParameter *)((longlong)&this[1]._padding_ + 2),param_1->ParameterMap,
             L"HairVisibilityPass_HairCoverageScale",SPF_Optional);
  return (FShader *)this;
}

// ConstructCompiledInstance @ 1449c5310

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
FHairVisibilityPS<3>::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  code *pcVar1;
  bool bVar2;
  EShadingPath EVar3;
  FMeshMaterialShader *this;
  FShader *pFVar4;
  uint uVar5;
  
  this = ::operator_new(0x120);
  if (this == (FMeshMaterialShader *)0x0) {
    return (FShader *)0x0;
  }
  FMeshMaterialShader::FMeshMaterialShader(this,(CompiledShaderInitializerType *)param_1);
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  uVar5 = (param_1->Target).field0_0x0.Packed >> 4 & 0xffff;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar5].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FShader *)(*pcVar1)();
      return pFVar4;
    }
  }
  EVar3 = FSceneInterface::GetShadingPath
                    (FGenericDataDrivenShaderPlatformInfo::Infos[uVar5].MaxFeatureLevel);
  if (EVar3 == Mobile) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FSceneInterface::GetShadingPath(FeatureLevel) != EShadingPath::Mobile",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\HairStrands\\HairStrandsVisibility.cpp"
                       ,0x5ac,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FShader *)(*pcVar1)();
      return pFVar4;
    }
  }
  FShaderParameter::Bind
            ((FShaderParameter *)(this + 1),param_1->ParameterMap,
             L"HairVisibilityPass_HairMacroGroupIndex",SPF_Optional);
  FShaderParameter::Bind
            ((FShaderParameter *)((longlong)&this[1]._padding_ + 6),param_1->ParameterMap,
             L"HairVisibilityPass_HairMaterialId",SPF_Optional);
  FShaderParameter::Bind
            ((FShaderParameter *)((longlong)&this[1]._padding_ + 4),param_1->ParameterMap,
             L"HairVisibilityPass_LightChannelMask",SPF_Optional);
  FShaderParameter::Bind
            ((FShaderParameter *)((longlong)&this[1]._padding_ + 2),param_1->ParameterMap,
             L"HairVisibilityPass_HairCoverageScale",SPF_Optional);
  return (FShader *)this;
}

// ConstructCompiledInstance @ 1449c5490

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
FHairVisibilityPS<0>::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  code *pcVar1;
  bool bVar2;
  EShadingPath EVar3;
  FMeshMaterialShader *this;
  FShader *pFVar4;
  uint uVar5;
  
  this = ::operator_new(0x120);
  if (this == (FMeshMaterialShader *)0x0) {
    return (FShader *)0x0;
  }
  FMeshMaterialShader::FMeshMaterialShader(this,(CompiledShaderInitializerType *)param_1);
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  uVar5 = (param_1->Target).field0_0x0.Packed >> 4 & 0xffff;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar5].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FShader *)(*pcVar1)();
      return pFVar4;
    }
  }
  EVar3 = FSceneInterface::GetShadingPath
                    (FGenericDataDrivenShaderPlatformInfo::Infos[uVar5].MaxFeatureLevel);
  if (EVar3 == Mobile) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FSceneInterface::GetShadingPath(FeatureLevel) != EShadingPath::Mobile",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\HairStrands\\HairStrandsVisibility.cpp"
                       ,0x5ac,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FShader *)(*pcVar1)();
      return pFVar4;
    }
  }
  FShaderParameter::Bind
            ((FShaderParameter *)(this + 1),param_1->ParameterMap,
             L"HairVisibilityPass_HairMacroGroupIndex",SPF_Optional);
  FShaderParameter::Bind
            ((FShaderParameter *)((longlong)&this[1]._padding_ + 6),param_1->ParameterMap,
             L"HairVisibilityPass_HairMaterialId",SPF_Optional);
  FShaderParameter::Bind
            ((FShaderParameter *)((longlong)&this[1]._padding_ + 4),param_1->ParameterMap,
             L"HairVisibilityPass_LightChannelMask",SPF_Optional);
  FShaderParameter::Bind
            ((FShaderParameter *)((longlong)&this[1]._padding_ + 2),param_1->ParameterMap,
             L"HairVisibilityPass_HairCoverageScale",SPF_Optional);
  return (FShader *)this;
}

// ConstructSerializedInstance @ 1449c7e70

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

FShader * __cdecl FHairVisibilityPS<1>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x120);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 1449c7ed0

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

FShader * __cdecl FHairVisibilityPS<2>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x120);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 1449c7f30

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

FShader * __cdecl FHairVisibilityPS<3>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x120);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 1449c7f90

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

FShader * __cdecl FHairVisibilityPS<0>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x120);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// GetShaderBindings @ 1449e1860

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
FHairVisibilityPS<2>::GetShaderBindings
          (FHairVisibilityPS<2> *this,FScene *param_1,Type param_2,FPrimitiveSceneProxy *param_3,
          FMaterialRenderProxy *param_4,FMaterial *param_5,FHairVisibilityShaderElementData *param_6
          ,FMeshDrawSingleShaderBindings *param_7)

{
  FHairVisibilityShaderElementData *pFVar1;
  FMeshDrawSingleShaderBindings *this_00;
  undefined4 local_res8;
  ushort local_resc;
  undefined4 local_28;
  ushort local_24;
  undefined4 local_18;
  ushort local_14;
  
  this_00 = param_7;
  pFVar1 = param_6;
  FMeshMaterialShader::GetShaderBindings
            ((FMeshMaterialShader *)this,param_1,param_2,param_3,param_4,param_5,
             (FMeshMaterialShaderElementData *)param_6,param_7);
  param_6._0_2_ = (this->HairVisibilityPass_HairMacroGroupIndex).BufferIndex;
  param_6._2_2_ = (this->HairVisibilityPass_HairMacroGroupIndex).BaseIndex;
  param_6._4_2_ = (this->HairVisibilityPass_HairMacroGroupIndex).NumBytes;
  FMeshDrawSingleShaderBindings::Add<unsigned_int>
            (this_00,SUB86(&param_6,0),&pFVar1->HairMacroGroupId);
  local_res8._0_2_ = (this->HairVisibilityPass_HairMaterialId).BufferIndex;
  local_res8._2_2_ = (this->HairVisibilityPass_HairMaterialId).BaseIndex;
  local_resc = (this->HairVisibilityPass_HairMaterialId).NumBytes;
  FMeshDrawSingleShaderBindings::Add<unsigned_int>
            (this_00,SUB86(&local_res8,0),&pFVar1->HairMaterialId);
  local_28._0_2_ = (this->HairVisibilityPass_LightChannelMask).BufferIndex;
  local_28._2_2_ = (this->HairVisibilityPass_LightChannelMask).BaseIndex;
  local_24 = (this->HairVisibilityPass_LightChannelMask).NumBytes;
  FMeshDrawSingleShaderBindings::Add<unsigned_int>
            (this_00,SUB86(&local_28,0),&pFVar1->LightChannelMask);
  local_18._0_2_ = (this->HairVisibilityPass_HairCoverageScale).BufferIndex;
  local_18._2_2_ = (this->HairVisibilityPass_HairCoverageScale).BaseIndex;
  local_14 = (this->HairVisibilityPass_HairCoverageScale).NumBytes;
  FMeshDrawSingleShaderBindings::Add<float>(this_00,SUB86(&local_18,0),&pFVar1->HairCoverageScale);
  return;
}

// GetStaticType @ 1449e1a10

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

FMeshMaterialShaderType * __cdecl FHairVisibilityPS<1>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FMeshMaterialShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,MeshMaterial,pFVar4,
                 L"FHairVisibilityPS<HairVisibilityRenderMode_PPLL>",
                 L"/Engine/Private/HairStrands/HairStrandsVisibilityPS.usf",L"MainVisibility",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x120,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/HairStrands/HairStrandsVisibilityPS.usf");
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
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshMaterialShaderType.h"
                           ,0x2e,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FMeshMaterialShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`FHairVisibilityPS<1>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1449e1c20

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

FMeshMaterialShaderType * __cdecl FHairVisibilityPS<2>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FMeshMaterialShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,MeshMaterial,pFVar4,
                 L"FHairVisibilityPS<HairVisibilityRenderMode_MSAA_Visibility>",
                 L"/Engine/Private/HairStrands/HairStrandsVisibilityPS.usf",L"MainVisibility",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x120,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/HairStrands/HairStrandsVisibilityPS.usf");
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
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshMaterialShaderType.h"
                           ,0x2e,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FMeshMaterialShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`FHairVisibilityPS<2>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1449e1e30

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

FMeshMaterialShaderType * __cdecl FHairVisibilityPS<3>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FMeshMaterialShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,MeshMaterial,pFVar4,
                 L"FHairVisibilityPS<HairVisibilityRenderMode_TransmittanceAndHairCount>",
                 L"/Engine/Private/HairStrands/HairStrandsVisibilityPS.usf",L"MainVisibility",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x120,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/HairStrands/HairStrandsVisibilityPS.usf");
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
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshMaterialShaderType.h"
                           ,0x2e,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FMeshMaterialShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`FHairVisibilityPS<3>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1449e2040

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

FMeshMaterialShaderType * __cdecl FHairVisibilityPS<0>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FMeshMaterialShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,MeshMaterial,pFVar4,
                 L"FHairVisibilityPS<HairVisibilityRenderMode_Transmittance>",
                 L"/Engine/Private/HairStrands/HairStrandsVisibilityPS.usf",L"MainVisibility",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x120,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/HairStrands/HairStrandsVisibilityPS.usf");
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
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshMaterialShaderType.h"
                           ,0x2e,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FMeshMaterialShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`FHairVisibilityPS<0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 1449f20a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FHairVisibilityPS<1>::GetTypeLayout(FHairVisibilityPS<1> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FHairVisibility;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FHairVisibilityPS<1>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FHairVisibilityPS<1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_HairCoverageScale";
    DAT_1550b38aa = Freeze::FindFieldNameLength(L"HairVisibilityPass_HairCoverageScale");
    _DAT_1550b3888 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b3890 = ::TypeBuffer[0x10];
    DAT_1550b3890_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b3890_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b3890_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b3890_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b3890_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b3890_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b3890_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b3898 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b38a0 = 0x11a;
    _DAT_1550b38a4 = 1;
    _DAT_1550b38a8 = 0;
    `public:_static_void___cdecl_FHairVisibilityPS<1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_LightChannelMask";
    DAT_1550b37ea = Freeze::FindFieldNameLength(L"HairVisibilityPass_LightChannelMask");
    _DAT_1550b37c8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b37d0 = ::TypeBuffer[0x10];
    DAT_1550b37d0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b37d0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b37d0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b37d0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b37d0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b37d0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b37d0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b37d8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b37e0 = 0x114;
    _DAT_1550b37e4 = 1;
    _DAT_1550b37e8 = 0;
    `public:_static_void___cdecl_FHairVisibilityPS<1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_HairMaterialId";
    DAT_1550b2722 = Freeze::FindFieldNameLength(L"HairVisibilityPass_HairMaterialId");
    _DAT_1550b2700 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b2708 = ::TypeBuffer[0x10];
    DAT_1550b2708_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b2708_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b2708_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b2708_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b2708_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b2708_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b2708_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b2710 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b2718 = 0x10e;
    _DAT_1550b271c = 1;
    _DAT_1550b2720 = 0;
    `public:_static_void___cdecl_FHairVisibilityPS<1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_HairMacroGroupIndex";
    DAT_1550b264a = Freeze::FindFieldNameLength(L"HairVisibilityPass_HairMacroGroupIndex");
    _DAT_1550b2628 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b2630 = ::TypeBuffer[0x10];
    DAT_1550b2630_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b2630_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b2630_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b2630_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b2630_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b2630_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b2630_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1550b2638 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b2640 = 0x108;
    _DAT_1550b2644 = 1;
    _DAT_1550b2648 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
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

// GetTypeLayout @ 1449f20b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FHairVisibilityPS<2>::GetTypeLayout(FHairVisibilityPS<2> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FHairVisibility;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FHairVisibilityPS<2>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FHairVisibilityPS<2>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_HairCoverageScale";
    DAT_1550b393a = Freeze::FindFieldNameLength(L"HairVisibilityPass_HairCoverageScale");
    _DAT_1550b3918 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b3920 = ::TypeBuffer[0x10];
    DAT_1550b3920_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b3920_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b3920_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b3920_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b3920_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b3920_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b3920_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<2>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b3928 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b3930 = 0x11a;
    _DAT_1550b3934 = 1;
    _DAT_1550b3938 = 0;
    `public:_static_void___cdecl_FHairVisibilityPS<2>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_LightChannelMask";
    DAT_1550b387a = Freeze::FindFieldNameLength(L"HairVisibilityPass_LightChannelMask");
    _DAT_1550b3858 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b3860 = ::TypeBuffer[0x10];
    DAT_1550b3860_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b3860_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b3860_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b3860_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b3860_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b3860_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b3860_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<2>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b3868 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b3870 = 0x114;
    _DAT_1550b3874 = 1;
    _DAT_1550b3878 = 0;
    `public:_static_void___cdecl_FHairVisibilityPS<2>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_HairMaterialId";
    DAT_1550b27b2 = Freeze::FindFieldNameLength(L"HairVisibilityPass_HairMaterialId");
    _DAT_1550b2790 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b2798 = ::TypeBuffer[0x10];
    DAT_1550b2798_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b2798_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b2798_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b2798_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b2798_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b2798_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b2798_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<2>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b27a0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b27a8 = 0x10e;
    _DAT_1550b27ac = 1;
    _DAT_1550b27b0 = 0;
    `public:_static_void___cdecl_FHairVisibilityPS<2>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_HairMacroGroupIndex";
    DAT_1550b26da = Freeze::FindFieldNameLength(L"HairVisibilityPass_HairMacroGroupIndex");
    _DAT_1550b26b8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b26c0 = ::TypeBuffer[0x10];
    DAT_1550b26c0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b26c0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b26c0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b26c0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b26c0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b26c0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b26c0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<2>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1550b26c8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b26d0 = 0x108;
    _DAT_1550b26d4 = 1;
    _DAT_1550b26d8 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
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

// GetTypeLayout @ 1449f20c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FHairVisibilityPS<3>::GetTypeLayout(FHairVisibilityPS<3> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FHairVisibility;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FHairVisibilityPS<3>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FHairVisibilityPS<3>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_HairCoverageScale";
    DAT_1550b38da = Freeze::FindFieldNameLength(L"HairVisibilityPass_HairCoverageScale");
    _DAT_1550b38b8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b38c0 = ::TypeBuffer[0x10];
    DAT_1550b38c0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b38c0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b38c0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b38c0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b38c0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b38c0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b38c0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<3>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b38c8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b38d0 = 0x11a;
    _DAT_1550b38d4 = 1;
    _DAT_1550b38d8 = 0;
    `public:_static_void___cdecl_FHairVisibilityPS<3>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_LightChannelMask";
    DAT_1550b381a = Freeze::FindFieldNameLength(L"HairVisibilityPass_LightChannelMask");
    _DAT_1550b37f8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b3800 = ::TypeBuffer[0x10];
    DAT_1550b3800_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b3800_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b3800_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b3800_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b3800_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b3800_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b3800_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<3>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b3808 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b3810 = 0x114;
    _DAT_1550b3814 = 1;
    _DAT_1550b3818 = 0;
    `public:_static_void___cdecl_FHairVisibilityPS<3>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_HairMaterialId";
    DAT_1550b2752 = Freeze::FindFieldNameLength(L"HairVisibilityPass_HairMaterialId");
    _DAT_1550b2730 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b2738 = ::TypeBuffer[0x10];
    DAT_1550b2738_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b2738_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b2738_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b2738_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b2738_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b2738_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b2738_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<3>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b2740 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b2748 = 0x10e;
    _DAT_1550b274c = 1;
    _DAT_1550b2750 = 0;
    `public:_static_void___cdecl_FHairVisibilityPS<3>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_HairMacroGroupIndex";
    DAT_1550b267a = Freeze::FindFieldNameLength(L"HairVisibilityPass_HairMacroGroupIndex");
    _DAT_1550b2658 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b2660 = ::TypeBuffer[0x10];
    DAT_1550b2660_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b2660_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b2660_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b2660_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b2660_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b2660_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b2660_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<3>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1550b2668 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b2670 = 0x108;
    _DAT_1550b2674 = 1;
    _DAT_1550b2678 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
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

// GetTypeLayout @ 1449f20d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FHairVisibilityPS<0>::GetTypeLayout(FHairVisibilityPS<0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FHairVisibility;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FHairVisibilityPS<0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FHairVisibilityPS<0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_HairCoverageScale";
    DAT_1550b390a = Freeze::FindFieldNameLength(L"HairVisibilityPass_HairCoverageScale");
    _DAT_1550b38e8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b38f0 = ::TypeBuffer[0x10];
    DAT_1550b38f0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b38f0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b38f0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b38f0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b38f0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b38f0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b38f0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b38f8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b3900 = 0x11a;
    _DAT_1550b3904 = 1;
    _DAT_1550b3908 = 0;
    `public:_static_void___cdecl_FHairVisibilityPS<0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_LightChannelMask";
    DAT_1550b384a = Freeze::FindFieldNameLength(L"HairVisibilityPass_LightChannelMask");
    _DAT_1550b3828 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b3830 = ::TypeBuffer[0x10];
    DAT_1550b3830_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b3830_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b3830_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b3830_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b3830_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b3830_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b3830_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b3838 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b3840 = 0x114;
    _DAT_1550b3844 = 1;
    _DAT_1550b3848 = 0;
    `public:_static_void___cdecl_FHairVisibilityPS<0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_HairMaterialId";
    DAT_1550b2782 = Freeze::FindFieldNameLength(L"HairVisibilityPass_HairMaterialId");
    _DAT_1550b2760 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b2768 = ::TypeBuffer[0x10];
    DAT_1550b2768_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b2768_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b2768_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b2768_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b2768_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b2768_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b2768_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b2770 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b2778 = 0x10e;
    _DAT_1550b277c = 1;
    _DAT_1550b2780 = 0;
    `public:_static_void___cdecl_FHairVisibilityPS<0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_HairMacroGroupIndex";
    DAT_1550b26aa = Freeze::FindFieldNameLength(L"HairVisibilityPass_HairMacroGroupIndex");
    _DAT_1550b2688 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b2690 = ::TypeBuffer[0x10];
    DAT_1550b2690_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b2690_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b2690_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b2690_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b2690_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b2690_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b2690_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1550b2698 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b26a0 = 0x108;
    _DAT_1550b26a4 = 1;
    _DAT_1550b26a8 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
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

// InternalDestroy @ 1449f3e40

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
FHairVisibilityPS<1>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x120);
  return;
}

// InternalDestroy @ 1449f3e80

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
FHairVisibilityPS<2>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x120);
  return;
}

// InternalDestroy @ 1449f3ec0

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
FHairVisibilityPS<3>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x120);
  return;
}

// InternalDestroy @ 1449f3f00

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
FHairVisibilityPS<0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x120);
  return;
}

// ShouldCompilePermutationImpl @ 1449fe940

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FHairVisibilityPS<1>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  bool bVar1;
  FName *pFVar2;
  FName local_res8 [4];
  
  pFVar2 = ::FName::FName(local_res8,L"FHairStrandsVertexFactory");
  if (*(FName *)(*(longlong *)&param_1[7].PermutationId + 0x28) == *pFVar2) {
    bVar1 = IsCompatibleWithHairStrands
                      (param_1->Platform,(FMaterialShaderParameters *)&param_1[1].PermutationId);
    if (bVar1) {
      bVar1 = IsPCPlatform((FStaticShaderPlatform)param_1->Platform);
      if (bVar1) {
        bVar1 = IsMobilePlatform((FStaticShaderPlatform)param_1->Platform);
        if (!bVar1) {
          return true;
        }
      }
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 1449fe9b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FHairVisibilityPS<2>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  bool bVar1;
  FName *pFVar2;
  FName local_res8 [4];
  
  pFVar2 = ::FName::FName(local_res8,L"FHairStrandsVertexFactory");
  if (*(FName *)(*(longlong *)&param_1[7].PermutationId + 0x28) != *pFVar2) {
    return false;
  }
  bVar1 = IsCompatibleWithHairStrands
                    (param_1->Platform,(FMaterialShaderParameters *)&param_1[1].PermutationId);
  return bVar1;
}

// ShouldCompilePermutationImpl @ 1449fea00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FHairVisibilityPS<3>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  bool bVar1;
  FName *pFVar2;
  FName local_res8 [4];
  
  pFVar2 = ::FName::FName(local_res8,L"FHairStrandsVertexFactory");
  if (*(FName *)(*(longlong *)&param_1[7].PermutationId + 0x28) != *pFVar2) {
    return false;
  }
  bVar1 = IsCompatibleWithHairStrands
                    (param_1->Platform,(FMaterialShaderParameters *)&param_1[1].PermutationId);
  return bVar1;
}

// ShouldCompilePermutationImpl @ 1449fea50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FHairVisibilityPS<0>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  bool bVar1;
  FName *pFVar2;
  FName local_res8 [4];
  
  pFVar2 = ::FName::FName(local_res8,L"FHairStrandsVertexFactory");
  if (*(FName *)(*(longlong *)&param_1[7].PermutationId + 0x28) != *pFVar2) {
    return false;
  }
  bVar1 = IsCompatibleWithHairStrands
                    (param_1->Platform,(FMaterialShaderParameters *)&param_1[1].PermutationId);
  return bVar1;
}

// ShouldPrecachePermutationImpl @ 144a00320

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FHairVisibilityPS<1>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 144a00330

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FHairVisibilityPS<2>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 144a00340

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FHairVisibilityPS<3>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 144a00350

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FHairVisibilityPS<0>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 144a00900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FHairVisibilityPS<1>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FHairVisibility;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FHairVisibilityPS<1>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FHairVisibilityPS<1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_HairCoverageScale";
    DAT_1550b38aa = Freeze::FindFieldNameLength(L"HairVisibilityPass_HairCoverageScale");
    _DAT_1550b3888 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b3890 = ::TypeBuffer[0x10];
    DAT_1550b3890_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b3890_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b3890_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b3890_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b3890_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b3890_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b3890_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b3898 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b38a0 = 0x11a;
    _DAT_1550b38a4 = 1;
    _DAT_1550b38a8 = 0;
    `public:_static_void___cdecl_FHairVisibilityPS<1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_LightChannelMask";
    DAT_1550b37ea = Freeze::FindFieldNameLength(L"HairVisibilityPass_LightChannelMask");
    _DAT_1550b37c8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b37d0 = ::TypeBuffer[0x10];
    DAT_1550b37d0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b37d0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b37d0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b37d0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b37d0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b37d0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b37d0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b37d8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b37e0 = 0x114;
    _DAT_1550b37e4 = 1;
    _DAT_1550b37e8 = 0;
    `public:_static_void___cdecl_FHairVisibilityPS<1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_HairMaterialId";
    DAT_1550b2722 = Freeze::FindFieldNameLength(L"HairVisibilityPass_HairMaterialId");
    _DAT_1550b2700 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b2708 = ::TypeBuffer[0x10];
    DAT_1550b2708_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b2708_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b2708_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b2708_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b2708_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b2708_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b2708_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b2710 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b2718 = 0x10e;
    _DAT_1550b271c = 1;
    _DAT_1550b2720 = 0;
    `public:_static_void___cdecl_FHairVisibilityPS<1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_HairMacroGroupIndex";
    DAT_1550b264a = Freeze::FindFieldNameLength(L"HairVisibilityPass_HairMacroGroupIndex");
    _DAT_1550b2628 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b2630 = ::TypeBuffer[0x10];
    DAT_1550b2630_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b2630_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b2630_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b2630_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b2630_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b2630_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b2630_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1550b2638 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b2640 = 0x108;
    _DAT_1550b2644 = 1;
    _DAT_1550b2648 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
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

// StaticGetTypeLayout @ 144a00bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FHairVisibilityPS<2>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FHairVisibility;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FHairVisibilityPS<2>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FHairVisibilityPS<2>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_HairCoverageScale";
    DAT_1550b393a = Freeze::FindFieldNameLength(L"HairVisibilityPass_HairCoverageScale");
    _DAT_1550b3918 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b3920 = ::TypeBuffer[0x10];
    DAT_1550b3920_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b3920_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b3920_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b3920_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b3920_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b3920_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b3920_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<2>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b3928 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b3930 = 0x11a;
    _DAT_1550b3934 = 1;
    _DAT_1550b3938 = 0;
    `public:_static_void___cdecl_FHairVisibilityPS<2>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_LightChannelMask";
    DAT_1550b387a = Freeze::FindFieldNameLength(L"HairVisibilityPass_LightChannelMask");
    _DAT_1550b3858 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b3860 = ::TypeBuffer[0x10];
    DAT_1550b3860_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b3860_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b3860_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b3860_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b3860_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b3860_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b3860_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<2>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b3868 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b3870 = 0x114;
    _DAT_1550b3874 = 1;
    _DAT_1550b3878 = 0;
    `public:_static_void___cdecl_FHairVisibilityPS<2>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_HairMaterialId";
    DAT_1550b27b2 = Freeze::FindFieldNameLength(L"HairVisibilityPass_HairMaterialId");
    _DAT_1550b2790 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b2798 = ::TypeBuffer[0x10];
    DAT_1550b2798_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b2798_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b2798_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b2798_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b2798_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b2798_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b2798_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<2>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b27a0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b27a8 = 0x10e;
    _DAT_1550b27ac = 1;
    _DAT_1550b27b0 = 0;
    `public:_static_void___cdecl_FHairVisibilityPS<2>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_HairMacroGroupIndex";
    DAT_1550b26da = Freeze::FindFieldNameLength(L"HairVisibilityPass_HairMacroGroupIndex");
    _DAT_1550b26b8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b26c0 = ::TypeBuffer[0x10];
    DAT_1550b26c0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b26c0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b26c0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b26c0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b26c0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b26c0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b26c0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<2>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1550b26c8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b26d0 = 0x108;
    _DAT_1550b26d4 = 1;
    _DAT_1550b26d8 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
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

// StaticGetTypeLayout @ 144a00ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FHairVisibilityPS<3>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FHairVisibility;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FHairVisibilityPS<3>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FHairVisibilityPS<3>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_HairCoverageScale";
    DAT_1550b38da = Freeze::FindFieldNameLength(L"HairVisibilityPass_HairCoverageScale");
    _DAT_1550b38b8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b38c0 = ::TypeBuffer[0x10];
    DAT_1550b38c0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b38c0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b38c0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b38c0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b38c0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b38c0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b38c0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<3>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b38c8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b38d0 = 0x11a;
    _DAT_1550b38d4 = 1;
    _DAT_1550b38d8 = 0;
    `public:_static_void___cdecl_FHairVisibilityPS<3>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_LightChannelMask";
    DAT_1550b381a = Freeze::FindFieldNameLength(L"HairVisibilityPass_LightChannelMask");
    _DAT_1550b37f8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b3800 = ::TypeBuffer[0x10];
    DAT_1550b3800_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b3800_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b3800_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b3800_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b3800_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b3800_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b3800_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<3>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b3808 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b3810 = 0x114;
    _DAT_1550b3814 = 1;
    _DAT_1550b3818 = 0;
    `public:_static_void___cdecl_FHairVisibilityPS<3>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_HairMaterialId";
    DAT_1550b2752 = Freeze::FindFieldNameLength(L"HairVisibilityPass_HairMaterialId");
    _DAT_1550b2730 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b2738 = ::TypeBuffer[0x10];
    DAT_1550b2738_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b2738_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b2738_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b2738_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b2738_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b2738_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b2738_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<3>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b2740 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b2748 = 0x10e;
    _DAT_1550b274c = 1;
    _DAT_1550b2750 = 0;
    `public:_static_void___cdecl_FHairVisibilityPS<3>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_HairMacroGroupIndex";
    DAT_1550b267a = Freeze::FindFieldNameLength(L"HairVisibilityPass_HairMacroGroupIndex");
    _DAT_1550b2658 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b2660 = ::TypeBuffer[0x10];
    DAT_1550b2660_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b2660_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b2660_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b2660_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b2660_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b2660_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b2660_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<3>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1550b2668 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b2670 = 0x108;
    _DAT_1550b2674 = 1;
    _DAT_1550b2678 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
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

// StaticGetTypeLayout @ 144a011d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FHairVisibilityPS<0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FHairVisibility;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FHairVisibilityPS<0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FHairVisibilityPS<0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_HairCoverageScale";
    DAT_1550b390a = Freeze::FindFieldNameLength(L"HairVisibilityPass_HairCoverageScale");
    _DAT_1550b38e8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b38f0 = ::TypeBuffer[0x10];
    DAT_1550b38f0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b38f0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b38f0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b38f0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b38f0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b38f0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b38f0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b38f8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b3900 = 0x11a;
    _DAT_1550b3904 = 1;
    _DAT_1550b3908 = 0;
    `public:_static_void___cdecl_FHairVisibilityPS<0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_LightChannelMask";
    DAT_1550b384a = Freeze::FindFieldNameLength(L"HairVisibilityPass_LightChannelMask");
    _DAT_1550b3828 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b3830 = ::TypeBuffer[0x10];
    DAT_1550b3830_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b3830_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b3830_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b3830_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b3830_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b3830_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b3830_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b3838 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b3840 = 0x114;
    _DAT_1550b3844 = 1;
    _DAT_1550b3848 = 0;
    `public:_static_void___cdecl_FHairVisibilityPS<0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_HairMaterialId";
    DAT_1550b2782 = Freeze::FindFieldNameLength(L"HairVisibilityPass_HairMaterialId");
    _DAT_1550b2760 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b2768 = ::TypeBuffer[0x10];
    DAT_1550b2768_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b2768_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b2768_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b2768_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b2768_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b2768_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b2768_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b2770 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b2778 = 0x10e;
    _DAT_1550b277c = 1;
    _DAT_1550b2780 = 0;
    `public:_static_void___cdecl_FHairVisibilityPS<0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairVisibilityPass_HairMacroGroupIndex";
    DAT_1550b26aa = Freeze::FindFieldNameLength(L"HairVisibilityPass_HairMacroGroupIndex");
    _DAT_1550b2688 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550b2690 = ::TypeBuffer[0x10];
    DAT_1550b2690_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b2690_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b2690_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b2690_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b2690_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b2690_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b2690_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairVisibilityPS<0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1550b2698 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550b26a0 = 0x108;
    _DAT_1550b26a4 = 1;
    _DAT_1550b26a8 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
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

