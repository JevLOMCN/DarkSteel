// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 42

// CacheFromCompiledData @ 149030630

void __thiscall
UNiagaraRendererProperties::CacheFromCompiledData
          (UNiagaraRendererProperties *this,FNiagaraDataSetCompiledData *param_1)

{
  return;
}

// CollectPSOPrecacheData @ 149032e20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraRendererProperties::CollectPSOPrecacheData
          (UNiagaraRendererProperties *this,FNiagaraEmitterInstance *param_1,
          TArray<UNiagaraRendererProperties::FPSOPrecacheParams,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  return;
}

// CreateBoundsCalculator @ 149034670

FNiagaraBoundsCalculator * __thiscall
UNiagaraRendererProperties::CreateBoundsCalculator(UNiagaraRendererProperties *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraRendererProperties.h"
             ,0x143,L"Pure virtual not implemented (%s)");
  return (FNiagaraBoundsCalculator *)0x0;
}

// CreateEmitterRenderer @ 14903b2f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FNiagaraRenderer * __thiscall
UNiagaraRendererProperties::CreateEmitterRenderer
          (UNiagaraRendererProperties *this,Type param_1,FNiagaraEmitterInstance *param_2,
          FNiagaraSystemInstanceController *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraRendererProperties.h"
             ,0x142,L"Pure virtual not implemented (%s)");
  return (FNiagaraRenderer *)0x0;
}

// GetCurrentSourceMode @ 1490449b0

ENiagaraRendererSourceDataMode __thiscall
UNiagaraRendererProperties::GetCurrentSourceMode(UNiagaraRendererProperties *this)

{
  return Particles;
}

// GetIsEnabled @ 149046d80

bool __thiscall UNiagaraRendererProperties::GetIsEnabled(UNiagaraRendererProperties *this)

{
  return this->bIsEnabled;
}

// GetMaterialStreamingScale @ 149047010

float __thiscall
UNiagaraRendererProperties::GetMaterialStreamingScale(UNiagaraRendererProperties *this)

{
  return __real_3f800000;
}

// GetStreamingMeshInfo @ 149049550

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraRendererProperties::GetStreamingMeshInfo
          (UNiagaraRendererProperties *this,TBoxSphereBounds<double,double> *param_1,
          FNiagaraEmitterInstance *param_2,
          TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *param_3)

{
  return;
}

// GetUsedMaterials @ 14904ab20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraRendererProperties::GetUsedMaterials
          (UNiagaraRendererProperties *this,FNiagaraEmitterInstance *param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraRendererProperties.h"
             ,0x144,L"Pure virtual not implemented (%s)");
  return;
}

// GetVertexFactoryType @ 14904c250

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

FVertexFactoryType * __thiscall
UNiagaraRendererProperties::GetVertexFactoryType(UNiagaraRendererProperties *this)

{
  return (FVertexFactoryType *)0x0;
}

// IsBackfaceCullingDisabled @ 149059280

bool __thiscall
UNiagaraRendererProperties::IsBackfaceCullingDisabled(UNiagaraRendererProperties *this)

{
  return false;
}

// IsSimTargetSupported @ 14905ac90

bool __thiscall
UNiagaraRendererProperties::IsSimTargetSupported
          (UNiagaraRendererProperties *this,ENiagaraSimTarget param_1)

{
  return false;
}

// NeedsMIDsForMaterials @ 14905bb60

bool __thiscall UNiagaraRendererProperties::NeedsMIDsForMaterials(UNiagaraRendererProperties *this)

{
  return false;
}

// NeedsSystemCompletion @ 14905bd50

bool __thiscall UNiagaraRendererProperties::NeedsSystemCompletion(UNiagaraRendererProperties *this)

{
  return false;
}

// NeedsSystemPostTick @ 14905bd70

bool __thiscall UNiagaraRendererProperties::NeedsSystemPostTick(UNiagaraRendererProperties *this)

{
  return false;
}

// StaticClass @ 14906a3f0

UClass * __cdecl UNiagaraRendererProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraRendererProperties.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraRendererProperties.InnerSingleton,
               StaticRegisterNativesUNiagaraRendererProperties,0xa0,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraRendererProperties>,aFStackX_8,
               UNiagaraMergeable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraRendererProperties.InnerSingleton;
}

// UseHeterogeneousVolumes @ 14906fb40

bool __thiscall
UNiagaraRendererProperties::UseHeterogeneousVolumes(UNiagaraRendererProperties *this)

{
  return false;
}

// InitParticleDataSetAccessor<FNiagaraDataSetAccessor<int>_> @ 149270470

void __thiscall
UNiagaraRendererProperties::InitParticleDataSetAccessor<FNiagaraDataSetAccessor<int>_>
          (UNiagaraRendererProperties *this,FNiagaraDataSetAccessor<int> *param_1,
          FNiagaraDataSetCompiledData *param_2,FNiagaraVariableAttributeBinding *param_3)

{
  FName FVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  FNiagaraTypeDefinition *pFVar5;
  FNiagaraDataSetAccessor<int> FVar6;
  FName *pFVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  FNiagaraDataSetCompiledData *pFVar11;
  FNiagaraTypeDefinitionHandle local_20;
  FName local_1c;
  FNiagaraTypeDefinitionHandle local_14 [3];
  
  pFVar5 = FNiagaraTypeDefinitionHandle::Resolve(&(param_3->ParamMapVariable).TypeDefHandle);
  FVar1 = param_3->DataSetName;
  local_20.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_20,pFVar5);
  pFVar11 = (FNiagaraDataSetCompiledData *)0x0;
  if (param_3->bIsCachedParticleValue != '\0') {
    pFVar11 = param_2;
  }
  *param_1 = (FNiagaraDataSetAccessor<int>)0xffffffff;
  if (pFVar11 != (FNiagaraDataSetCompiledData *)0x0) {
    local_1c = FVar1;
    local_14[0].RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register(local_14,&FNiagaraTypeDefinition::IntDef);
    pFVar2 = (FName *)(pFVar11->Variables).AllocatorInstance.Data;
    for (pFVar7 = pFVar2;
        pFVar7 != (FName *)((longlong)pFVar2 + (longlong)(pFVar11->Variables).ArrayNum * 0xc);
        pFVar7 = (FName *)&pFVar7[1].Number) {
      if ((*pFVar7 == local_1c) &&
         (pFVar7[1].ComparisonIndex.Value == local_14[0].RegisteredTypeIndex)) {
        lVar8 = ((longlong)pFVar7 - (longlong)pFVar2) / 6 +
                ((longlong)pFVar7 - (longlong)pFVar2 >> 0x3f);
        uVar9 = (int)(lVar8 >> 1) - (int)(lVar8 >> 0x3f);
        if (uVar9 == 0xffffffff) {
          return;
        }
        uVar10 = 0;
        if ((int)uVar9 < (pFVar11->VariableLayouts).ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar6._2_2_ = 0;
        FVar6._0_2_ = *(ushort *)
                       ((pFVar11->VariableLayouts).AllocatorInstance.Data +
                       (longlong)(int)uVar9 * 0x20 + 2);
        *param_1 = FVar6;
        return;
      }
    }
  }
  return;
}

// InitParticleDataSetAccessor<FNiagaraDataSetAccessor<float>_> @ 1492cd9b0

void __thiscall
UNiagaraRendererProperties::InitParticleDataSetAccessor<FNiagaraDataSetAccessor<float>_>
          (UNiagaraRendererProperties *this,FNiagaraDataSetAccessor<float> *param_1,
          FNiagaraDataSetCompiledData *param_2,FNiagaraVariableAttributeBinding *param_3)

{
  FName FVar1;
  FNiagaraTypeRegistry *pFVar2;
  FNiagaraTypeDefinition *pFVar3;
  FNiagaraDataSetCompiledData *pFVar4;
  
  pFVar2 = FNiagaraTypeRegistry::Get();
  pFVar3 = FNiagaraTypeRegistry::GetRegisteredType
                     (pFVar2,(param_3->ParamMapVariable).TypeDefHandle.RegisteredTypeIndex);
  FVar1 = param_3->DataSetName;
  if ((pFVar3->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
    pFVar2 = FNiagaraTypeRegistry::Get();
    FNiagaraTypeRegistry::RegisterTypeInternal(pFVar2,pFVar3);
  }
  pFVar4 = (FNiagaraDataSetCompiledData *)0x0;
  if (param_3->bIsCachedParticleValue != '\0') {
    pFVar4 = param_2;
  }
  if (pFVar4 == (FNiagaraDataSetCompiledData *)0x0) {
    *(undefined1 *)param_1 = 1;
    *(undefined4 *)&param_1->field_0x4 = 0xffffffff;
  }
  else {
    FNiagaraDataSetAccessorFloat<float>::Init
              ((FNiagaraDataSetAccessorFloat<float> *)param_1,pFVar4,FVar1);
  }
  return;
}

// UNiagaraRendererProperties @ 1492d33e0

UNiagaraRendererProperties * __thiscall
UNiagaraRendererProperties::UNiagaraRendererProperties(UNiagaraRendererProperties *this)

{
  undefined1 *puVar1;
  int iVar2;
  FNiagaraTypeRegistry *this_00;
  
  UNiagaraMergeable::UNiagaraMergeable((UNiagaraMergeable *)this);
  this->_padding_ = (longlong)&___7UNiagaraRendererProperties__6B_;
  FNiagaraPlatformSet::FNiagaraPlatformSet(&this->Platforms);
  this->bIsEnabled = true;
  this->bAllowInCullProxies = true;
  (this->RendererEnabledBinding).RootName.ComparisonIndex = 0;
  (this->RendererEnabledBinding).RootName.Number = 0;
  (this->RendererEnabledBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RendererEnabledBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar2 = -1;
  }
  else {
    this_00 = FNiagaraTypeRegistry::Get();
    iVar2 = FNiagaraTypeRegistry::RegisterTypeInternal(this_00,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->RendererEnabledBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->RendererEnabledBinding).bBindingExistsOnSource = '\0';
  (this->RendererEnabledBinding).bIsCachedParticleValue = '\x01';
  (this->RendererEnabledBinding).DataSetName.ComparisonIndex = 0;
  (this->RendererEnabledBinding).DataSetName.Number = 0;
  (this->RendererEnabledBinding).BindingSourceMode.Value = '\0';
  (this->OuterEmitterVersion).A = 0;
  (this->OuterEmitterVersion).B = 0;
  (this->OuterEmitterVersion).C = 0;
  (this->OuterEmitterVersion).D = 0;
  (this->AttributeBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeBindings).ArrayNum = 0;
  (this->AttributeBindings).ArrayMax = 0;
  return this;
}

// UNiagaraRendererProperties @ 149335840

UNiagaraRendererProperties * __thiscall
UNiagaraRendererProperties::UNiagaraRendererProperties
          (UNiagaraRendererProperties *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  UNiagaraMergeable::UNiagaraMergeable((UNiagaraMergeable *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraRendererProperties__6B_;
  (this->Platforms).bEnabledForCurrentProfileAndEffectQuality = 0;
  (this->Platforms).DeviceProfileStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Platforms).DeviceProfileStates.ArrayNum = 0;
  (this->Platforms).DeviceProfileStates.ArrayMax = 0;
  (this->Platforms).CVarConditions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Platforms).CVarConditions.ArrayNum = 0;
  (this->Platforms).CVarConditions.ArrayMax = 0;
  (this->Platforms).QualityLevelMask = -1;
  (this->Platforms).LastBuiltFrame = 0;
  (this->RendererEnabledBinding).RootName.ComparisonIndex = 0;
  (this->RendererEnabledBinding).RootName.Number = 0;
  (this->RendererEnabledBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RendererEnabledBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->RendererEnabledBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->RendererEnabledBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->RendererEnabledBinding).bBindingExistsOnSource = '\0';
  (this->RendererEnabledBinding).bIsCachedParticleValue = '\x01';
  (this->RendererEnabledBinding).DataSetName.ComparisonIndex = 0;
  (this->RendererEnabledBinding).DataSetName.Number = 0;
  (this->RendererEnabledBinding).BindingSourceMode.Value = '\0';
  (this->OuterEmitterVersion).A = 0;
  (this->OuterEmitterVersion).B = 0;
  (this->OuterEmitterVersion).C = 0;
  (this->OuterEmitterVersion).D = 0;
  (this->AttributeBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeBindings).ArrayNum = 0;
  (this->AttributeBindings).ArrayMax = 0;
  return this;
}

// ~UNiagaraRendererProperties @ 149336e20

void __thiscall
UNiagaraRendererProperties::~UNiagaraRendererProperties(UNiagaraRendererProperties *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraRendererProperties__6B_;
  pFVar1 = (this->AttributeBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Platforms).CVarConditions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Platforms).DeviceProfileStates.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraMergeable::~UNiagaraMergeable((UNiagaraMergeable *)this);
  return;
}

// CollectPSOPrecacheData @ 14933fae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraRendererProperties::CollectPSOPrecacheData
          (UNiagaraRendererProperties *this,FNiagaraEmitterInstance *param_1,
          TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  ForElementType<FPSOPrecacheVertexFactoryData> _Dst;
  FPSOPrecacheParams *pFVar5;
  ForElementType<FPSOPrecacheVertexFactoryData> FVar6;
  ForElementType<FPSOPrecacheVertexFactoryData> _Src;
  undefined1 auStackY_158 [32];
  undefined1 local_118 [8];
  FMaterialInterfacePSOPrecacheParams local_110;
  FPSOPrecacheParams local_c8 [2];
  FPSOPrecacheParams *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  lVar4 = (**(code **)(this->_padding_ + 0x2c8))();
  if (lVar4 != 0) {
    local_110.PSOPrecacheParams.field0_0x0 =
         (FPSOPrecacheParams_u_0)
         ((ulonglong)(local_110.PSOPrecacheParams.field0_0x0.Data._0_4_ & 0x8000) | 0x413c00);
    local_110.Priority = Medium;
    local_110.MaterialInterface = (UMaterialInterface *)0x0;
    local_110.VertexFactoryDataList.AllocatorInstance.SecondaryData =
         (ForElementType<FPSOPrecacheVertexFactoryData>)0x0;
    local_110.VertexFactoryDataList.ArrayNum = 0;
    local_110.VertexFactoryDataList.ArrayMax = 2;
    bVar3 = (**(code **)(this->_padding_ + 0x2d0))(this);
    local_58 = (FPSOPrecacheParams *)0x0;
    local_110.PSOPrecacheParams.field0_0x0 =
         (FPSOPrecacheParams_u_0)
         ((ulonglong)(bVar3 & 1) << 0x12 |
         (ulonglong)local_110.PSOPrecacheParams.field0_0x0 & 0xfffffffffffbffff);
    local_50 = 0;
    local_4c = 2;
    (**(code **)(this->_padding_ + 0x300))(this,param_1,local_c8);
    iVar2 = local_50;
    lVar4 = (longlong)local_50;
    pFVar5 = local_c8;
    if (local_58 != (FPSOPrecacheParams *)0x0) {
      pFVar5 = local_58;
    }
    FVar6 = (ForElementType<FPSOPrecacheVertexFactoryData>)&pFVar5->VertexFactoryDataList;
    while( true ) {
      if (local_50 != iVar2) {
        `TCheckedPointerIterator<UNiagaraRendererProperties::FPSOPrecacheParams,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_118);
      }
      if ((FPSOPrecacheParams *)((longlong)FVar6 + -8) == pFVar5 + lVar4) break;
      local_110.MaterialInterface =
           ((FPSOPrecacheParams *)((longlong)FVar6 + -8))->MaterialInterface;
      if ((ForElementType<FPSOPrecacheVertexFactoryData>)&local_110.VertexFactoryDataList != FVar6)
      {
        iVar1 = *(int *)((longlong)FVar6 + 0x28);
        _Src = FVar6;
        if (*(ForElementType<FPSOPrecacheVertexFactoryData> *)((longlong)FVar6 + 0x20) !=
            (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
          _Src = *(ForElementType<FPSOPrecacheVertexFactoryData> *)((longlong)FVar6 + 0x20);
        }
        local_110.VertexFactoryDataList.ArrayNum = iVar1;
        if ((iVar1 == 0) && (local_110.VertexFactoryDataList.ArrayMax == 0)) {
          local_110.VertexFactoryDataList.ArrayMax = 2;
        }
        else {
          UE::Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                    (0x10,8,iVar1,local_110.VertexFactoryDataList.ArrayMax,
                     &local_110.VertexFactoryDataList.AllocatorInstance,iVar1,
                     &local_110.VertexFactoryDataList.ArrayMax);
          _Dst = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_110.VertexFactoryDataList;
          if (local_110.VertexFactoryDataList.AllocatorInstance.SecondaryData !=
              (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
            _Dst = local_110.VertexFactoryDataList.AllocatorInstance.SecondaryData;
          }
          if (iVar1 != 0) {
            memcpy((void *)_Dst,(void *)_Src,(longlong)iVar1 << 4);
          }
        }
      }
      local_110.PSOPrecacheParams.field0_0x0 =
           (FPSOPrecacheParams_u_0)
           ((ulonglong)local_110.PSOPrecacheParams.field0_0x0 & 0xfffffffffffdffff);
      AddMaterialInterfacePSOPrecacheParamsToList(&local_110,param_2);
      if ((((ulonglong)local_110.PSOPrecacheParams.field0_0x0 & 0x40000) == 0) &&
         (0 < GNiagaraPSOPrecacheReverseCulling)) {
        local_110.PSOPrecacheParams.field0_0x0 =
             (FPSOPrecacheParams_u_0)((ulonglong)local_110.PSOPrecacheParams.field0_0x0 | 0x20000);
        AddMaterialInterfacePSOPrecacheParamsToList(&local_110,param_2);
      }
      FVar6 = (ForElementType<FPSOPrecacheVertexFactoryData>)((longlong)FVar6 + 0x38);
    }
    pFVar5 = local_c8;
    if (local_58 != (FPSOPrecacheParams *)0x0) {
      pFVar5 = local_58;
    }
    DestructItems<UNiagaraRendererProperties::FPSOPrecacheParams,int>(pFVar5,local_50);
    if (local_58 != (FPSOPrecacheParams *)0x0) {
      FMemory::Free(local_58);
    }
    if (local_110.VertexFactoryDataList.AllocatorInstance.SecondaryData !=
        (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
      FMemory::Free((void *)local_110.VertexFactoryDataList.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// ComputeMaxUsedComponents @ 149340070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall
UNiagaraRendererProperties::ComputeMaxUsedComponents
          (UNiagaraRendererProperties *this,FNiagaraDataSetCompiledData *param_1)

{
  ForElementType<int> FVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FNiagaraTypeDefinition *pFVar8;
  ForElementType<int> FVar9;
  FScriptContainerElement *pFVar10;
  uint *puVar11;
  longlong lVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStack_288 [32];
  uint *local_268;
  ForElementType<int> local_260;
  longlong local_258;
  longlong local_250;
  undefined8 local_248;
  undefined1 local_238 [8];
  uint local_230 [2];
  uint local_228 [2];
  uint local_220 [2];
  longlong local_218;
  FNiagaraTypeDefinitionHandle local_210 [2];
  FScriptContainerElement *local_208;
  uint local_200 [6];
  ForElementType<int> local_1e8;
  int local_160;
  int local_15c;
  ForElementType<int> local_158;
  int local_d0;
  int local_cc;
  ForElementType<int> local_c8;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  pFVar15 = (this->AttributeBindings).AllocatorInstance.Data;
  iVar3 = (this->AttributeBindings).ArrayNum;
  local_1e8.SecondaryData = (ForElementType<int>)0x0;
  local_160 = 0;
  local_15c = 0x20;
  local_208 = pFVar15 + (longlong)iVar3 * 8;
  local_158.SecondaryData = (ForElementType<int>)0x0;
  local_d0 = 0;
  local_cc = 0x20;
  local_c8.SecondaryData = (ForElementType<int>)0x0;
  local_40 = 0;
  local_3c = 0x20;
  local_200[0] = 0;
  local_200[1] = 0;
  local_200[2] = 0;
LAB_149340120:
  do {
    pFVar14 = local_208;
    if ((this->AttributeBindings).ArrayNum != iVar3) {
      local_238[0] = 0;
      `TCheckedPointerIterator<FNiagaraVariableAttributeBinding_const_*_const,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_238);
    }
    if (pFVar15 == pFVar14) {
      puVar11 = local_200;
      uVar13 = 0;
      do {
        uVar6 = *puVar11;
        if (*puVar11 < uVar13) {
          uVar6 = uVar13;
        }
        puVar11 = puVar11 + 1;
        uVar13 = uVar6;
      } while (puVar11 != local_200 + 3);
      if (local_c8.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_c8.SecondaryData);
      }
      if (local_158.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_158.SecondaryData);
      }
      if (local_1e8.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_1e8.SecondaryData);
      }
      return uVar6;
    }
    lVar12 = *(longlong *)pFVar15;
    pFVar8 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)(lVar12 + 0x10));
    local_218 = *(longlong *)(lVar12 + 0x14);
    local_210[0].RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(local_210,pFVar8);
    pFVar14 = (param_1->Variables).AllocatorInstance.Data;
    for (pFVar10 = pFVar14; pFVar10 != pFVar14 + (longlong)(param_1->Variables).ArrayNum * 0xc;
        pFVar10 = pFVar10 + 0xc) {
      if ((*(longlong *)pFVar10 == local_218) &&
         (*(int *)(pFVar10 + 8) == local_210[0].RegisteredTypeIndex)) {
        lVar12 = ((longlong)pFVar10 - (longlong)pFVar14) / 6 +
                 ((longlong)pFVar10 - (longlong)pFVar14 >> 0x3f);
        uVar13 = (int)(lVar12 >> 1) - (int)(lVar12 >> 0x3f);
        if (uVar13 != 0xffffffff) {
          iVar7 = (param_1->VariableLayouts).ArrayNum;
          uVar6 = 0;
          if ((int)uVar13 < iVar7) {
            uVar6 = ~uVar13 >> 0x1f;
          }
          if (uVar6 == 0) {
            local_268 = (uint *)(longlong)(int)uVar13;
            local_260 = (ForElementType<int>)(longlong)iVar7;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              uVar13 = (*pcVar4)();
              return uVar13;
            }
          }
          pFVar14 = (param_1->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x20
          ;
          uVar2 = *(ushort *)(pFVar14 + 8);
          if (uVar2 == 0) goto LAB_14934036e;
          local_230[0] = (uint)*(ushort *)pFVar14;
          FVar9 = (ForElementType<int>)&local_158;
          if (local_158.SecondaryData != (ForElementType<int>)0x0) {
            FVar9 = local_158.SecondaryData;
          }
          FVar1 = (ForElementType<int>)((longlong)FVar9 + (longlong)local_d0 * 4);
          goto joined_r0x000149340270;
        }
        break;
      }
    }
    pFVar15 = pFVar15 + 8;
  } while( true );
joined_r0x000149340270:
  if (FVar9 == FVar1) goto LAB_149340283;
  if (*(uint *)FVar9 == local_230[0]) goto LAB_14934036e;
  FVar9 = (ForElementType<int>)((longlong)FVar9 + 4);
  goto joined_r0x000149340270;
LAB_149340283:
  FVar9 = (ForElementType<int>)&local_158;
  if (local_158.SecondaryData != (ForElementType<int>)0x0) {
    FVar9 = local_158.SecondaryData;
  }
  if ((ulonglong)FVar9 <= local_230) {
    FVar9 = (ForElementType<int>)&local_158;
    if (local_158.SecondaryData != (ForElementType<int>)0x0) {
      FVar9 = local_158.SecondaryData;
    }
    if (local_230 < (uint *)((longlong)FVar9 + (longlong)local_cc * 4)) {
      local_248 = 4;
      local_260 = (ForElementType<int>)&local_158;
      if (local_158.SecondaryData != (ForElementType<int>)0x0) {
        local_260 = local_158.SecondaryData;
      }
      local_268 = local_230;
      local_258 = (longlong)local_cc;
      local_250 = (longlong)local_d0;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return uVar13;
      }
    }
  }
  iVar7 = local_d0;
  if (local_d0 == local_cc) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (0x404,&local_158,&local_cc);
  }
  local_d0 = iVar7 + 1;
  FVar9 = (ForElementType<int>)&local_158;
  if (local_158.SecondaryData != (ForElementType<int>)0x0) {
    FVar9 = local_158.SecondaryData;
  }
  local_200[1] = local_200[1] + uVar2;
  *(uint *)((longlong)FVar9 + (longlong)iVar7 * 4) = local_230[0];
LAB_14934036e:
  uVar2 = *(ushort *)(pFVar14 + 10);
  if (uVar2 != 0) {
    local_228[0] = (uint)*(ushort *)(pFVar14 + 2);
    FVar9 = (ForElementType<int>)&local_1e8;
    if (local_1e8.SecondaryData != (ForElementType<int>)0x0) {
      FVar9 = local_1e8.SecondaryData;
    }
    FVar1 = (ForElementType<int>)((longlong)FVar9 + (longlong)local_160 * 4);
    for (; FVar9 != FVar1; FVar9 = (ForElementType<int>)((longlong)FVar9 + 4)) {
      if (*(uint *)FVar9 == local_228[0]) goto LAB_14934048b;
    }
    FVar9 = (ForElementType<int>)&local_1e8;
    if (local_1e8.SecondaryData != (ForElementType<int>)0x0) {
      FVar9 = local_1e8.SecondaryData;
    }
    if ((ulonglong)FVar9 <= local_228) {
      FVar9 = (ForElementType<int>)&local_1e8;
      if (local_1e8.SecondaryData != (ForElementType<int>)0x0) {
        FVar9 = local_1e8.SecondaryData;
      }
      if (local_228 < (uint *)((longlong)FVar9 + (longlong)local_15c * 4)) {
        local_248 = 4;
        local_260 = (ForElementType<int>)&local_1e8;
        if (local_1e8.SecondaryData != (ForElementType<int>)0x0) {
          local_260 = local_1e8.SecondaryData;
        }
        local_268 = local_228;
        local_258 = (longlong)local_15c;
        local_250 = (longlong)local_160;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar13 = (*pcVar4)();
          return uVar13;
        }
      }
    }
    iVar7 = local_160;
    if (local_160 == local_15c) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                        (0x404,&local_1e8,&local_15c);
    }
    local_160 = iVar7 + 1;
    FVar9 = (ForElementType<int>)&local_1e8;
    if (local_1e8.SecondaryData != (ForElementType<int>)0x0) {
      FVar9 = local_1e8.SecondaryData;
    }
    local_200[0] = local_200[0] + uVar2;
    *(uint *)((longlong)FVar9 + (longlong)iVar7 * 4) = local_228[0];
  }
LAB_14934048b:
  uVar2 = *(ushort *)(pFVar14 + 0xc);
  if (uVar2 != 0) {
    local_220[0] = (uint)*(ushort *)(pFVar14 + 4);
    FVar9 = (ForElementType<int>)&local_c8;
    if (local_c8.SecondaryData != (ForElementType<int>)0x0) {
      FVar9 = local_c8.SecondaryData;
    }
    FVar1 = (ForElementType<int>)((longlong)FVar9 + (longlong)local_40 * 4);
    for (; FVar9 != FVar1; FVar9 = (ForElementType<int>)((longlong)FVar9 + 4)) {
      if (*(uint *)FVar9 == local_220[0]) goto LAB_1493405e4;
    }
    FVar9 = (ForElementType<int>)&local_c8;
    if (local_c8.SecondaryData != (ForElementType<int>)0x0) {
      FVar9 = local_c8.SecondaryData;
    }
    if ((ulonglong)FVar9 <= local_220) {
      FVar9 = (ForElementType<int>)&local_c8;
      if (local_c8.SecondaryData != (ForElementType<int>)0x0) {
        FVar9 = local_c8.SecondaryData;
      }
      if (local_220 < (uint *)((longlong)FVar9 + (longlong)local_3c * 4)) {
        local_248 = 4;
        local_260 = (ForElementType<int>)&local_c8;
        if (local_c8.SecondaryData != (ForElementType<int>)0x0) {
          local_260 = local_c8.SecondaryData;
        }
        local_268 = local_220;
        local_258 = (longlong)local_3c;
        local_250 = (longlong)local_40;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar13 = (*pcVar4)();
          return uVar13;
        }
      }
    }
    iVar7 = local_40;
    if (local_40 == local_3c) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                        (0x404,&local_c8,&local_3c);
    }
    local_40 = iVar7 + 1;
    FVar9 = (ForElementType<int>)&local_c8;
    if (local_c8.SecondaryData != (ForElementType<int>)0x0) {
      FVar9 = local_c8.SecondaryData;
    }
    local_200[2] = local_200[2] + uVar2;
    *(uint *)((longlong)FVar9 + (longlong)iVar7 * 4) = local_220[0];
  }
LAB_1493405e4:
  pFVar15 = pFVar15 + 8;
  goto LAB_149340120;
}

// GetAssetTagsForContext @ 14934e8e0

void __thiscall
UNiagaraRendererProperties::GetAssetTagsForContext
          (UNiagaraRendererProperties *this,UObject *param_1,FGuid *param_2,
          TArray<UNiagaraRendererProperties_const_*,TSizedDefaultAllocator<32>_> *param_3,
          TMap<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
          *param_4,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                   *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  FName *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  FName local_res8;
  FName local_48;
  FName *local_40;
  FString local_38;
  
  lVar3 = this->_padding_;
  if (lVar3 != 0) {
    pFVar6 = (param_3->AllocatorInstance).Data;
    iVar2 = param_3->ArrayNum;
    iVar8 = 0;
    iVar7 = 0;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_3->ArrayNum != iVar2) {
        `TCheckedPointerIterator<UNiagaraRendererProperties_const_*_const,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(&local_res8);
      }
      if (pFVar6 == pFVar1) break;
      if (*(longlong *)pFVar6 != 0) {
        lVar4 = *(longlong *)(*(longlong *)pFVar6 + 0x10);
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) {
          iVar7 = iVar7 + 1;
        }
      }
      pFVar6 = pFVar6 + 8;
    }
    if ((iVar7 != 0) ||
       ((param_1 != (UObject *)0x0 && ((*(uint *)&param_1->field_0x8 >> 4 & 1) != 0)))) {
      local_res8 = *(FName *)(lVar3 + 0x18);
      ::FName::ToString(&local_res8,&local_38);
      ::FString::ReplaceInline(&local_38,L"Niagara",L"",IgnoreCase);
      ::FString::ReplaceInline(&local_38,L"Properties",L"",IgnoreCase);
      if (local_38.Data.ArrayNum != 0) {
        iVar8 = local_38.Data.ArrayNum + -1;
      }
      pFVar5 = ::FName::FName(&local_res8,iVar8,(wchar_t *)local_38.Data.AllocatorInstance.Data,
                              FNAME_Add);
      local_48 = *pFVar5;
      local_40 = &local_48;
      TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FName_&&>_>
                ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
                  *)param_4,(TKeyInitializer<FName_&&> *)&local_res8,(bool *)&local_40);
      *(int *)(*(longlong *)param_4 + 8 + (longlong)(int)local_res8.ComparisonIndex.Value * 0x14) =
           iVar7;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetEmitterData @ 149354770

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVersionedNiagaraEmitterData * __thiscall
UNiagaraRendererProperties::GetEmitterData(UNiagaraRendererProperties *this)

{
  UClass *pUVar1;
  UNiagaraEmitter *this_00;
  FVersionedNiagaraEmitterData *pFVar2;
  
  pUVar1 = Z_Construct_UClass_UNiagaraEmitter_NoRegister();
  this_00 = (UNiagaraEmitter *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  if (this_00 != (UNiagaraEmitter *)0x0) {
    pFVar2 = UNiagaraEmitter::GetEmitterData(this_00,&this->OuterEmitterVersion);
    return pFVar2;
  }
  return (FVersionedNiagaraEmitterData *)0x0;
}

// GetIsActive @ 149354930

bool __thiscall UNiagaraRendererProperties::GetIsActive(UNiagaraRendererProperties *this)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 0x318))();
  if (cVar1 != '\0') {
    bVar2 = FNiagaraPlatformSet::IsActive(&this->Platforms);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// GetOuterEmitter @ 149355000

FVersionedNiagaraEmitter * __thiscall
UNiagaraRendererProperties::GetOuterEmitter
          (UNiagaraRendererProperties *this,FVersionedNiagaraEmitter *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  UClass *pUVar4;
  UNiagaraEmitter *pUVar5;
  
  pUVar4 = Z_Construct_UClass_UNiagaraEmitter_NoRegister();
  pUVar5 = (UNiagaraEmitter *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  if (pUVar5 != (UNiagaraEmitter *)0x0) {
    (__return_storage_ptr__->Emitter).field0_0x0.DebugPtr = pUVar5;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    uVar1 = (this->OuterEmitterVersion).B;
    uVar2 = (this->OuterEmitterVersion).C;
    uVar3 = (this->OuterEmitterVersion).D;
    (__return_storage_ptr__->Version).A = (this->OuterEmitterVersion).A;
    (__return_storage_ptr__->Version).B = uVar1;
    (__return_storage_ptr__->Version).C = uVar2;
    (__return_storage_ptr__->Version).D = uVar3;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Emitter).field0_0x0.DebugPtr = (UNiagaraEmitter *)0x0;
  (__return_storage_ptr__->Version).A = 0;
  (__return_storage_ptr__->Version).B = 0;
  (__return_storage_ptr__->Version).C = 0;
  (__return_storage_ptr__->Version).D = 0;
  return __return_storage_ptr__;
}

// GetOuterEmitterBase @ 149355080

FVersionedNiagaraEmitterBase * __thiscall
UNiagaraRendererProperties::GetOuterEmitterBase
          (UNiagaraRendererProperties *this,FVersionedNiagaraEmitterBase *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  UClass *pUVar4;
  UNiagaraEmitterBase *pUVar5;
  
  pUVar4 = Z_Construct_UClass_UNiagaraEmitterBase_NoRegister();
  pUVar5 = (UNiagaraEmitterBase *)
           UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  if (pUVar5 != (UNiagaraEmitterBase *)0x0) {
    __return_storage_ptr__->Emitter = pUVar5;
    uVar1 = (this->OuterEmitterVersion).B;
    uVar2 = (this->OuterEmitterVersion).C;
    uVar3 = (this->OuterEmitterVersion).D;
    (__return_storage_ptr__->Version).A = (this->OuterEmitterVersion).A;
    (__return_storage_ptr__->Version).B = uVar1;
    (__return_storage_ptr__->Version).C = uVar2;
    (__return_storage_ptr__->Version).D = uVar3;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Emitter = (UNiagaraEmitterBase *)0x0;
  (__return_storage_ptr__->Version).A = 0;
  (__return_storage_ptr__->Version).B = 0;
  (__return_storage_ptr__->Version).C = 0;
  (__return_storage_ptr__->Version).D = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149356420

UClass * __cdecl UNiagaraRendererProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraRendererProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraRendererProperties.InnerSingleton,
               StaticRegisterNativesUNiagaraRendererProperties,0xa0,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraRendererProperties>,local_res8,
               UNiagaraMergeable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraRendererProperties.InnerSingleton;
}

// IsGpuTranslucentThisFrame @ 14935f290

bool __cdecl
UNiagaraRendererProperties::IsGpuTranslucentThisFrame
          (Type param_1,ENiagaraRendererGpuTranslucentLatency param_2)

{
  UClass *this;
  
  if ((int)param_1 < 3) {
    return false;
  }
  if (param_2 == ProjectDefault) {
    this = Z_Construct_UClass_UNiagaraSettings_NoRegister();
    if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this);
    }
    return (this->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x1d == '\0';
  }
  return param_2 == Immediate;
}

// IsSortHighPrecision @ 14935f420

bool __cdecl UNiagaraRendererProperties::IsSortHighPrecision(ENiagaraRendererSortPrecision param_1)

{
  UClass *this;
  
  if (param_1 == Default) {
    this = Z_Construct_UClass_UNiagaraSettings_NoRegister();
    if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this);
    }
    return (this->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x1c == '\x01';
  }
  return param_1 == High;
}

// NeedsLoadForTargetPlatform @ 14935f710

bool __thiscall
UNiagaraRendererProperties::NeedsLoadForTargetPlatform
          (UNiagaraRendererProperties *this,ITargetPlatform *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FString *pFVar6;
  void *local_18 [2];
  
  bVar2 = false;
  bVar3 = false;
  pUVar4 = Z_Construct_UClass_UNiagaraEmitter_NoRegister();
  pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  if (pUVar5 == (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UNiagaraStatelessEmitter_NoRegister();
    pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
    if (pUVar5 == (UObject *)0x0) {
      return false;
    }
    cVar1 = (**(code **)(*(longlong *)pUVar5 + 0x110))(pUVar5,param_1);
    if (cVar1 == '\0') {
      return false;
    }
    if (this->bIsEnabled != false) {
      bVar2 = true;
      pFVar6 = (FString *)(**(code **)(*(longlong *)param_1 + 8))(param_1,local_18);
      bVar3 = FNiagaraPlatformSet::IsEnabledForPlatform(&this->Platforms,pFVar6);
      if (bVar3) {
        bVar3 = true;
        goto LAB_14935f813;
      }
    }
    bVar3 = false;
LAB_14935f813:
    if ((bVar2) && (local_18[0] != (void *)0x0)) {
      FMemory::Free(local_18[0]);
    }
    return bVar3;
  }
  cVar1 = (**(code **)(*(longlong *)pUVar5 + 0x110))(pUVar5,param_1);
  if (cVar1 == '\0') {
    return false;
  }
  if (this->bIsEnabled != false) {
    bVar3 = true;
    pFVar6 = (FString *)(**(code **)(*(longlong *)param_1 + 8))(param_1,local_18);
    bVar2 = FNiagaraPlatformSet::IsEnabledForPlatform(&this->Platforms,pFVar6);
    if (bVar2) {
      bVar2 = true;
      goto LAB_14935f788;
    }
  }
  bVar2 = false;
LAB_14935f788:
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (!bVar2) {
    return false;
  }
  return true;
}

// NeedsPreciseMotionVectors @ 14935f860

bool __thiscall
UNiagaraRendererProperties::NeedsPreciseMotionVectors(UNiagaraRendererProperties *this)

{
  UClass *this_00;
  
  if (this->MotionVectorSetting == AutoDetect) {
    this_00 = Z_Construct_UClass_UNiagaraSettings_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    return (this_00->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x1a == '\0';
  }
  return this->MotionVectorSetting == Precise;
}

// PopulateRequiredBindings @ 149361260

bool __thiscall
UNiagaraRendererProperties::PopulateRequiredBindings
          (UNiagaraRendererProperties *this,FNiagaraParameterStore *param_1)

{
  undefined1 uVar1;
  FNiagaraTypeDefinition *pFVar2;
  FName local_28;
  int local_20;
  void *local_18;
  undefined8 local_10;
  
  if (((this->RendererEnabledBinding).ParamMapVariable.Name != (FName)0x0) &&
     (pFVar2 = FNiagaraTypeDefinitionHandle::Resolve
                         (&(this->RendererEnabledBinding).ParamMapVariable.TypeDefHandle),
     (pFVar2->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0)) {
    local_20 = (this->RendererEnabledBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex;
    local_28 = (this->RendererEnabledBinding).ParamMapVariable.Name;
    local_18 = (void *)0x0;
    local_10 = 0;
    uVar1 = (**(code **)(param_1->_padding_ + 0x10))(param_1,&local_28,0,1,0);
    if (local_18 == (void *)0x0) {
      return (bool)uVar1;
    }
    FMemory::Free(local_18);
    return (bool)uVar1;
  }
  return false;
}

// PostInitProperties @ 1493612f0

void __thiscall UNiagaraRendererProperties::PostInitProperties(UNiagaraRendererProperties *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UNiagaraRendererProperties *pUStack_28;
  code *pcStack_20;
  undefined1 *puStack_18;
  
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_18 = auStackX_8;
  pcStack_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_20,puVar5);
  FVar1 = (FTlsAutoCleanup)(pFVar6 + 0xb);
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  pUStack_28 = this;
  if (((ulonglong)FVar7 <= &pUStack_28) &&
     (&pUStack_28 <
      (UNiagaraRendererProperties **)
      ((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(pFVar6 + 0x1c);
  if (iVar4 == *(int *)&pFVar6[0x1c].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                      (0x808,(ForElementType<UObject_*> *)FVar1,(int *)&pFVar6[0x1c].field_0x4);
  }
  *(int *)(pFVar6 + 0x1c) = iVar4 + 1;
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  *(UNiagaraRendererProperties **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// PostLoad @ 149361470

void __thiscall UNiagaraRendererProperties::PostLoad(UNiagaraRendererProperties *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UNiagaraRendererProperties **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// PostLoadBindings @ 149361480

void __thiscall
UNiagaraRendererProperties::PostLoadBindings
          (UNiagaraRendererProperties *this,ENiagaraRendererSourceDataMode param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  FNiagaraVariableAttributeBinding::PostLoad(&this->RendererEnabledBinding,Emitter);
  uVar4 = 0;
  if (0 < (this->AttributeBindings).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->AttributeBindings).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FNiagaraVariableAttributeBinding::PostLoad
                (*(FNiagaraVariableAttributeBinding **)
                  ((this->AttributeBindings).AllocatorInstance.Data + lVar5),param_1);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->AttributeBindings).ArrayNum);
  }
  return;
}

// SetIsEnabled @ 14936a400

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraRendererProperties::SetIsEnabled(UNiagaraRendererProperties *this,bool param_1)

{
  UClass *pUVar1;
  UNiagaraSystem *pUVar2;
  FNiagaraSystemUpdateContext local_a8;
  
  if (this->bIsEnabled != param_1) {
    local_a8.bDestroySystemSim = true;
    local_a8.ComponentsToReset.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ComponentsToReset.ArrayNum = 0;
    local_a8.ComponentsToReset.ArrayMax = 0;
    local_a8.ComponentsToReInit.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ComponentsToReInit.ArrayNum = 0;
    local_a8.ComponentsToReInit.ArrayMax = 0;
    local_a8.ComponentsToNotifySimDestroy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ComponentsToNotifySimDestroy.ArrayNum = 0;
    local_a8.ComponentsToNotifySimDestroy.ArrayMax = 0;
    local_a8.ComponentsToDestroyInstance.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ComponentsToDestroyInstance.ArrayNum = 0;
    local_a8.ComponentsToDestroyInstance.ArrayMax = 0;
    local_a8.SystemSimsToDestroy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.SystemSimsToDestroy.ArrayNum = 0;
    local_a8.SystemSimsToDestroy.ArrayMax = 0;
    local_a8.SystemSimsToRecache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.SystemSimsToRecache.ArrayNum = 0;
    local_a8.SystemSimsToRecache.ArrayMax = 0;
    local_a8.bDestroyOnAdd = false;
    local_a8.bOnlyActive = false;
    local_a8.PreWork._0_8_ = 0;
    local_a8.PreWork._8_8_ = 0;
    local_a8.PreWork._16_4_ = 0;
    local_a8.PostWork._0_8_ = 0;
    local_a8.PostWork._8_8_ = 0;
    local_a8.PostWork._16_4_ = 0;
    pUVar1 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
    pUVar2 = (UNiagaraSystem *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
    FNiagaraSystemUpdateContext::Add(&local_a8,pUVar2,true);
    this->bIsEnabled = param_1;
    FNiagaraSystemUpdateContext::~FNiagaraSystemUpdateContext(&local_a8);
  }
  return;
}

// ShouldGpuTranslucentThisFrame @ 14936ed30

bool __cdecl
UNiagaraRendererProperties::ShouldGpuTranslucentThisFrame
          (ENiagaraRendererGpuTranslucentLatency param_1)

{
  UClass *this;
  
  if (param_1 == ProjectDefault) {
    this = Z_Construct_UClass_UNiagaraSettings_NoRegister();
    if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this);
    }
    return (this->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x1d == '\0';
  }
  return param_1 == Immediate;
}

// StaticRegisterNativesUNiagaraRendererProperties @ 149370410

void __cdecl UNiagaraRendererProperties::StaticRegisterNativesUNiagaraRendererProperties(void)

{
  return;
}

// UpdateSourceModeDerivates @ 149375130

void __thiscall
UNiagaraRendererProperties::UpdateSourceModeDerivates
          (UNiagaraRendererProperties *this,ENiagaraRendererSourceDataMode param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UClass *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res20 [8];
  FVersionedNiagaraEmitterBase local_38;
  
  pUVar3 = Z_Construct_UClass_UNiagaraEmitterBase_NoRegister();
  local_38.Emitter =
       (UNiagaraEmitterBase *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  if (local_38.Emitter != (UNiagaraEmitterBase *)0x0) {
    local_38.Version.A = (this->OuterEmitterVersion).A;
    local_38.Version.B = (this->OuterEmitterVersion).B;
    local_38.Version.C = (this->OuterEmitterVersion).C;
    local_38.Version.D = (this->OuterEmitterVersion).D;
    pFVar4 = (this->AttributeBindings).AllocatorInstance.Data;
    iVar2 = (this->AttributeBindings).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->AttributeBindings).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FNiagaraVariableAttributeBinding_const_*,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res20);
      }
      if (pFVar4 == pFVar1) break;
      FNiagaraVariableAttributeBinding::CacheValues
                (*(FNiagaraVariableAttributeBinding **)pFVar4,&local_38,param_1);
      pFVar4 = pFVar4 + 8;
    }
    FNiagaraVariableAttributeBinding::CacheValues(&this->RendererEnabledBinding,&local_38,param_1);
  }
  return;
}

