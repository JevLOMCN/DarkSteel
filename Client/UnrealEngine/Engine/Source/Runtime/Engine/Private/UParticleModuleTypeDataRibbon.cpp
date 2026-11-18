// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 147313f30

UClass * __cdecl UParticleModuleTypeDataRibbon::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleTypeDataRibbon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleTypeDataRibbon",
               &Z_Registration_Info_UClass_UParticleModuleTypeDataRibbon.InnerSingleton,
               StaticRegisterNativesUParticleModuleTypeDataRibbon,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleTypeDataRibbon>,
               InternalVTableHelperCtorCaller<UParticleModuleTypeDataRibbon>,local_res8,
               UParticleModuleTypeDataBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleTypeDataRibbon.InnerSingleton;
}

// UParticleModuleTypeDataRibbon @ 147318f40

UParticleModuleTypeDataRibbon * __thiscall
UParticleModuleTypeDataRibbon::UParticleModuleTypeDataRibbon
          (UParticleModuleTypeDataRibbon *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleTypeDataRibbon__6B_;
  return this;
}

// ~UParticleModuleTypeDataRibbon @ 1473199b0

void __thiscall
UParticleModuleTypeDataRibbon::~UParticleModuleTypeDataRibbon(UParticleModuleTypeDataRibbon *this)

{
  this->_padding_ = (longlong)&___7UParticleModuleTypeDataBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrimitiveType @ 14731b3a0

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

EPrimitiveType __thiscall
UParticleModuleTypeDataRibbon::GetPrimitiveType(UParticleModuleTypeDataRibbon *this)

{
  return PT_TriangleStrip;
}

// GetPrivateStaticClass @ 14731c1f0

UClass * __cdecl UParticleModuleTypeDataRibbon::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleTypeDataRibbon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleTypeDataRibbon",
               &Z_Registration_Info_UClass_UParticleModuleTypeDataRibbon.InnerSingleton,
               StaticRegisterNativesUParticleModuleTypeDataRibbon,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleTypeDataRibbon>,
               InternalVTableHelperCtorCaller<UParticleModuleTypeDataRibbon>,local_res8,
               UParticleModuleTypeDataBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleTypeDataRibbon.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleTypeDataRibbon @ 14731d070

void __cdecl UParticleModuleTypeDataRibbon::StaticRegisterNativesUParticleModuleTypeDataRibbon(void)

{
  return;
}

// UParticleModuleTypeDataRibbon @ 1481c8680

UParticleModuleTypeDataRibbon * __thiscall
UParticleModuleTypeDataRibbon::UParticleModuleTypeDataRibbon
          (UParticleModuleTypeDataRibbon *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  UParticleModuleTypeDataBase::UParticleModuleTypeDataBase
            ((UParticleModuleTypeDataBase *)this,param_1);
  this->MaxTessellationBetweenParticles = 0x19;
  this->_padding_ = (longlong)&___7UParticleModuleTypeDataRibbon__6B_;
  this->SheetsPerTrail = 1;
  this->MaxTrailCount = 1;
  puVar2 = &this->field_0x40;
  this->bDeadTrailsOnDeactivate = 1;
  this->bTangentRecalculationEveryFrame = 0;
  this->bEnablePreviousTangentRecalculation = 1;
  this->bClipSourceSegement = 1;
  this->bDeadTrailsOnSourceLoss = 1;
  this->MaxParticleInTrailCount = 500;
  this->TangentSpawningScalar = 0.0;
  puVar2 = &this->field_0x4c;
  this->bRenderGeometry = 1;
  this->bRenderTessellation = 0;
  this->bRenderTangents = 0;
  this->bRenderSpawnPoints = 0;
  this->DistanceTessellationStepSize = 15.0;
  this->TangentTessellationScalar = 5.0;
  return this;
}

// CollectPSOPrecacheData @ 1481da630

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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
UParticleModuleTypeDataRibbon::CollectPSOPrecacheData
          (UParticleModuleTypeDataRibbon *this,UParticleEmitter *param_1,FPSOPrecacheParams *param_2
          )

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
  
  local_18 = &FParticleBeamTrailVertexFactory::StaticType;
  uStack_10 = FParticleBeamTrailVertexFactory::GetPSOPrecacheVertexDeclaration
                        (0 < param_1->DynamicParameterDataOffset);
  FVar8 = (param_2->VertexFactoryDataList).AllocatorInstance.SecondaryData;
  pTVar1 = &param_2->VertexFactoryDataList;
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
  EVar7 = (**(code **)(this->_padding_ + 0x3b8))(this);
  param_2->PrimitiveType = EVar7;
  return;
}

// CreateInstance @ 1481de300

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FParticleEmitterInstance * __thiscall
UParticleModuleTypeDataRibbon::CreateInstance
          (UParticleModuleTypeDataRibbon *this,UParticleEmitter *param_1,
          IParticleEmitterInstanceOwner *param_2)

{
  code *pcVar1;
  bool bVar2;
  FParticleRibbonEmitterInstance *pFVar3;
  FParticleEmitterInstance *pFVar4;
  
  pFVar3 = ::operator_new(0x430);
  if (pFVar3 == (FParticleRibbonEmitterInstance *)0x0) {
    pFVar3 = (FParticleRibbonEmitterInstance *)0x0;
  }
  else {
    pFVar3 = FParticleRibbonEmitterInstance::FParticleRibbonEmitterInstance(pFVar3,param_2);
    if (pFVar3 != (FParticleRibbonEmitterInstance *)0x0) goto LAB_1481de35c;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Instance",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrailModules.cpp"
                     ,0xee,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FParticleEmitterInstance *)(*pcVar1)();
    return pFVar4;
  }
LAB_1481de35c:
  (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,param_1);
  return (FParticleEmitterInstance *)pFVar3;
}

// GetVertexFactoryType @ 148200df0

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
UParticleModuleTypeDataRibbon::GetVertexFactoryType(UParticleModuleTypeDataRibbon *this)

{
  return &FParticleBeamTrailVertexFactory::StaticType;
}

// RequiredBytes @ 148212e00

uint __thiscall
UParticleModuleTypeDataRibbon::RequiredBytes
          (UParticleModuleTypeDataRibbon *this,UParticleModuleTypeDataBase *param_1)

{
  return 0x44;
}

