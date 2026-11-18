// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticClass @ 147312330

UClass * __cdecl UParticleModuleTypeDataGpu::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleTypeDataGpu.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleTypeDataGpu",
               &Z_Registration_Info_UClass_UParticleModuleTypeDataGpu.InnerSingleton,
               StaticRegisterNativesUParticleModuleTypeDataGpu,0x5d0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleTypeDataGpu>,
               InternalVTableHelperCtorCaller<UParticleModuleTypeDataGpu>,local_res8,
               UParticleModuleTypeDataBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleTypeDataGpu.InnerSingleton;
}

// UParticleModuleTypeDataGpu @ 147318e70

UParticleModuleTypeDataGpu * __thiscall
UParticleModuleTypeDataGpu::UParticleModuleTypeDataGpu
          (UParticleModuleTypeDataGpu *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  *(undefined ***)this = &___7UParticleModuleTypeDataGpu__6B_;
  FGPUSpriteEmitterInfo::FGPUSpriteEmitterInfo(&this->EmitterInfo);
  FGPUSpriteResourceData::FGPUSpriteResourceData(&this->ResourceData);
  return this;
}

// ~UParticleModuleTypeDataGpu @ 147319900

void __thiscall
UParticleModuleTypeDataGpu::~UParticleModuleTypeDataGpu(UParticleModuleTypeDataGpu *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7UParticleModuleTypeDataGpu__6B_;
  pFVar1 = (this->ResourceData).QuantizedSimulationAttrSamples.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ResourceData).QuantizedMiscSamples.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ResourceData).QuantizedColorSamples.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FGPUSpriteEmitterInfo::~FGPUSpriteEmitterInfo(&this->EmitterInfo);
  *(undefined ***)this = &___7UParticleModuleTypeDataBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14731c070

UClass * __cdecl UParticleModuleTypeDataGpu::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleTypeDataGpu.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleTypeDataGpu",
               &Z_Registration_Info_UClass_UParticleModuleTypeDataGpu.InnerSingleton,
               StaticRegisterNativesUParticleModuleTypeDataGpu,0x5d0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleTypeDataGpu>,
               InternalVTableHelperCtorCaller<UParticleModuleTypeDataGpu>,local_res8,
               UParticleModuleTypeDataBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleTypeDataGpu.InnerSingleton;
}

// RequiresBuild @ 14731cec0

bool __thiscall UParticleModuleTypeDataGpu::RequiresBuild(UParticleModuleTypeDataGpu *this)

{
  return true;
}

// StaticRegisterNativesUParticleModuleTypeDataGpu @ 14731d050

void __cdecl UParticleModuleTypeDataGpu::StaticRegisterNativesUParticleModuleTypeDataGpu(void)

{
  return;
}

// UParticleModuleTypeDataGpu @ 14815e810

UParticleModuleTypeDataGpu * __thiscall
UParticleModuleTypeDataGpu::UParticleModuleTypeDataGpu
          (UParticleModuleTypeDataGpu *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x29 = this->field_0x29 & 0xf3 | 3;
  this->field_0x28 = this->field_0x28 & 0x14 | 0x80;
  *(undefined ***)this = &___7UParticleModuleTypeDataGpu__6B_;
  FGPUSpriteEmitterInfo::FGPUSpriteEmitterInfo(&this->EmitterInfo);
  FGPUSpriteResourceData::FGPUSpriteResourceData(&this->ResourceData);
  this->bClearExistingParticlesOnInit = 0;
  return this;
}

// BeginDestroy @ 148167370

void __thiscall UParticleModuleTypeDataGpu::BeginDestroy(UParticleModuleTypeDataGpu *this)

{
  FGPUSpriteResources *pFVar1;
  
  pFVar1 = (this->EmitterInfo).Resources;
  if (pFVar1 != (FGPUSpriteResources *)0x0) {
    (this->EmitterInfo).Resources = (FGPUSpriteResources *)0x0;
    BeginReleaseGPUSpriteResources(pFVar1);
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// Build @ 1481677c0

void __thiscall
UParticleModuleTypeDataGpu::Build
          (UParticleModuleTypeDataGpu *this,FParticleEmitterBuildInfo *param_1)

{
  FGPUSpriteResources *pFVar1;
  
  pFVar1 = (this->EmitterInfo).Resources;
  if (pFVar1 != (FGPUSpriteResources *)0x0) {
    BeginUpdateGPUSpriteResources(pFVar1,&this->ResourceData);
    return;
  }
  pFVar1 = BeginCreateGPUSpriteResources(&this->ResourceData);
  (this->EmitterInfo).Resources = pFVar1;
  return;
}

// CollectPSOPrecacheData @ 148168fd0

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
UParticleModuleTypeDataGpu::CollectPSOPrecacheData
          (UParticleModuleTypeDataGpu *this,UParticleEmitter *param_1,FPSOPrecacheParams *param_2)

{
  TArray<FPSOPrecacheVertexFactoryData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  undefined4 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  EPrimitiveType EVar7;
  ForElementType<FPSOPrecacheVertexFactoryData> FVar8;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pTVar1 = &param_2->VertexFactoryDataList;
  local_18 = (**(code **)(*(longlong *)this + 0x3b0))();
  FVar8 = (param_2->VertexFactoryDataList).AllocatorInstance.SecondaryData;
  uStack_10 = 0;
  if (FVar8 == (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
    FVar8 = (ForElementType<FPSOPrecacheVertexFactoryData>)pTVar1;
  }
  if (((ulonglong)FVar8 <= &local_18) &&
     (&local_18 <
      (undefined8 *)((longlong)(param_2->VertexFactoryDataList).ArrayMax * 0x10 + (longlong)FVar8)))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (param_2->VertexFactoryDataList).ArrayNum;
  piVar2 = &(param_2->VertexFactoryDataList).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (param_2->VertexFactoryDataList).ArrayNum = iVar6 + 1;
  FVar8 = (param_2->VertexFactoryDataList).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
    FVar8 = (ForElementType<FPSOPrecacheVertexFactoryData>)pTVar1;
  }
  puVar3 = (undefined4 *)((longlong)FVar8 + (longlong)iVar6 * 0x10);
  *puVar3 = (undefined4)local_18;
  puVar3[1] = local_18._4_4_;
  puVar3[2] = (undefined4)uStack_10;
  puVar3[3] = uStack_10._4_4_;
  EVar7 = (**(code **)(*(longlong *)this + 0x3b8))(this);
  param_2->PrimitiveType = EVar7;
  return;
}

// CreateInstance @ 14816dcd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FParticleEmitterInstance * __thiscall
UParticleModuleTypeDataGpu::CreateInstance
          (UParticleModuleTypeDataGpu *this,UParticleEmitter *param_1,
          IParticleEmitterInstanceOwner *param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  FParticleEmitterInstance *pFVar5;
  FFXSystem *this_00;
  undefined4 local_res18 [2];
  FName local_res20;
  FMemScope local_38;
  FString local_30;
  
  local_res18[0] = 0;
  if (5 < (byte)LogParticles._0_1_) {
    lVar3 = (**(code **)((longlong)*param_2 + 0xd8))(param_2);
    if (lVar3 != 0) {
      lVar4 = (**(code **)((longlong)*param_2 + 0xd8))(param_2);
      local_res20 = *(FName *)(lVar4 + 0x18);
      ::FName::ToString(&local_res20,&local_30);
    }
    (**(code **)((longlong)*param_2 + 0x50))(param_2);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if ((lVar3 != 0) && (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  lVar3 = (**(code **)((longlong)*param_2 + 0x68))(param_2);
  if ((((lVar3 != 0) && (FXConsoleVariables::bAllowGPUParticles != 0)) &&
      (GRHIGlobals.SupportsWideMRT != false)) &&
     ((ZPULL(GPixelFormats[0x11],0,1) != 0 && (GRHIGlobals.SupportsTexture3D != false)))) {
    FLLMScope::FLLMScope((FLLMScope *)local_res18,Particles,false,None,Default,true);
    FMemScope::FMemScope(&local_38,Particles,true);
    lVar3 = (**(code **)((longlong)*param_2 + 0xd0))(param_2);
    if ((lVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InComponent.GetFXSystem()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                           ,0x1396,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FParticleEmitterInstance *)(*pcVar1)();
      return pFVar5;
    }
    this_00 = (FFXSystem *)(**(code **)((longlong)*param_2 + 0xd0))(param_2);
    pFVar5 = FFXSystem::CreateGPUSpriteEmitterInstance(this_00,param_2,&this->EmitterInfo);
    (**(code **)(pFVar5->_padding_ + 8))(pFVar5,param_1);
    FMemScope::~FMemScope(&local_38);
    FLLMScope::~FLLMScope((FLLMScope *)local_res18);
    return pFVar5;
  }
  return (FParticleEmitterInstance *)0x0;
}

// GetVertexFactoryType @ 148180560

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
UParticleModuleTypeDataGpu::GetVertexFactoryType(UParticleModuleTypeDataGpu *this)

{
  return &FGPUSpriteVertexFactory::StaticType;
}

// PostLoad @ 14818c650

void __thiscall UParticleModuleTypeDataGpu::PostLoad(UParticleModuleTypeDataGpu *this)

{
  FPackageFileVersion FVar1;
  
  UObject::PostLoad((UObject *)this);
  FVar1 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if (*(int *)FVar1 < 0x1b4) {
    this->bClearExistingParticlesOnInit = 1;
  }
  return;
}

