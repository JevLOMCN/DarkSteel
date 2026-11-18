// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 147314c90

UClass * __cdecl UParticleModuleTypeDataAnimTrail::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleTypeDataAnimTrail.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleTypeDataAnimTrail",
               &Z_Registration_Info_UClass_UParticleModuleTypeDataAnimTrail.InnerSingleton,
               StaticRegisterNativesUParticleModuleTypeDataAnimTrail,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleTypeDataAnimTrail>,
               InternalVTableHelperCtorCaller<UParticleModuleTypeDataAnimTrail>,local_res8,
               UParticleModuleTypeDataBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleTypeDataAnimTrail.InnerSingleton;
}

// UParticleModuleTypeDataAnimTrail @ 147318d10

UParticleModuleTypeDataAnimTrail * __thiscall
UParticleModuleTypeDataAnimTrail::UParticleModuleTypeDataAnimTrail
          (UParticleModuleTypeDataAnimTrail *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleTypeDataAnimTrail__6B_;
  return this;
}

// ~UParticleModuleTypeDataAnimTrail @ 147319800

void __thiscall
UParticleModuleTypeDataAnimTrail::~UParticleModuleTypeDataAnimTrail
          (UParticleModuleTypeDataAnimTrail *this)

{
  this->_padding_ = (longlong)&___7UParticleModuleTypeDataBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// CanTickInAnyThread @ 14731b080

bool __thiscall
UParticleModuleTypeDataAnimTrail::CanTickInAnyThread(UParticleModuleTypeDataAnimTrail *this)

{
  return true;
}

// GetPrimitiveType @ 14731b370

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

EPrimitiveType __thiscall
UParticleModuleTypeDataAnimTrail::GetPrimitiveType(UParticleModuleTypeDataAnimTrail *this)

{
  return PT_TriangleStrip;
}

// GetPrivateStaticClass @ 14731be30

UClass * __cdecl UParticleModuleTypeDataAnimTrail::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleTypeDataAnimTrail.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleTypeDataAnimTrail",
               &Z_Registration_Info_UClass_UParticleModuleTypeDataAnimTrail.InnerSingleton,
               StaticRegisterNativesUParticleModuleTypeDataAnimTrail,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleTypeDataAnimTrail>,
               InternalVTableHelperCtorCaller<UParticleModuleTypeDataAnimTrail>,local_res8,
               UParticleModuleTypeDataBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleTypeDataAnimTrail.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleTypeDataAnimTrail @ 14731d020

void __cdecl
UParticleModuleTypeDataAnimTrail::StaticRegisterNativesUParticleModuleTypeDataAnimTrail(void)

{
  return;
}

// UParticleModuleTypeDataAnimTrail @ 1481c8640

UParticleModuleTypeDataAnimTrail * __thiscall
UParticleModuleTypeDataAnimTrail::UParticleModuleTypeDataAnimTrail
          (UParticleModuleTypeDataAnimTrail *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  UParticleModuleTypeDataBase::UParticleModuleTypeDataBase
            ((UParticleModuleTypeDataBase *)this,param_1);
  this->DistanceTessellationStepSize = 10.0;
  this->TangentTessellationStepSize = 0.0;
  this->_padding_ = (longlong)&___7UParticleModuleTypeDataAnimTrail__6B_;
  puVar2 = &this->field_0x30;
  this->bDeadTrailsOnDeactivate = 1;
  this->bTangentRecalculationEveryFrame = 0;
  this->bEnablePreviousTangentRecalculation = 1;
  return this;
}

// CollectPSOPrecacheData @ 1481da520

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
UParticleModuleTypeDataAnimTrail::CollectPSOPrecacheData
          (UParticleModuleTypeDataAnimTrail *this,UParticleEmitter *param_1,
          FPSOPrecacheParams *param_2)

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

// CreateInstance @ 1481de210

FParticleEmitterInstance * __thiscall
UParticleModuleTypeDataAnimTrail::CreateInstance
          (UParticleModuleTypeDataAnimTrail *this,UParticleEmitter *param_1,
          IParticleEmitterInstanceOwner *param_2)

{
  code *pcVar1;
  bool bVar2;
  FParticleAnimTrailEmitterInstance *this_00;
  FParticleEmitterInstance *pFVar3;
  
  this_00 = ::operator_new(800);
  if (this_00 == (FParticleAnimTrailEmitterInstance *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrailModules.cpp"
                       ,0x118,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FParticleEmitterInstance *)(*pcVar1)();
      return pFVar3;
    }
  }
  else {
    FParticleTrailsEmitterInstance_Base::FParticleTrailsEmitterInstance_Base
              ((FParticleTrailsEmitterInstance_Base *)this_00,param_2);
    this_00->_padding_ = (longlong)&___7FParticleAnimTrailEmitterInstance__6B_;
    this_00->TrailTypeData = (UParticleModuleTypeDataAnimTrail *)0x0;
    this_00->SpawnPerUnitModule = (UParticleModuleSpawnPerUnit *)0x0;
    (this_00->FirstSocketName).ComparisonIndex = 0;
    (this_00->FirstSocketName).Number = 0;
    (this_00->SecondSocketName).ComparisonIndex = 0;
    (this_00->SecondSocketName).Number = 0;
    this_00->Width = 1.0;
    this_00->WidthMode = ETrailWidthMode_FromCentre;
    this_00->Owner = (void *)0x0;
    this_00->bTagTrailAsDead = false;
    this_00->bTrailEnabled = false;
    this_00->HeadOnlyParticles = 0;
  }
  pcVar1 = *(code **)(this_00->_padding_ + 8);
  if (pcVar1 == FParticleAnimTrailEmitterInstance::InitParameters) {
    FParticleAnimTrailEmitterInstance::InitParameters(this_00,param_1);
    return (FParticleEmitterInstance *)this_00;
  }
  (*pcVar1)();
  return (FParticleEmitterInstance *)this_00;
}

// GetVertexFactoryType @ 148200de0

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
UParticleModuleTypeDataAnimTrail::GetVertexFactoryType(UParticleModuleTypeDataAnimTrail *this)

{
  return &FParticleBeamTrailVertexFactory::StaticType;
}

// RequiredBytes @ 148212df0

uint __thiscall
UParticleModuleTypeDataAnimTrail::RequiredBytes
          (UParticleModuleTypeDataAnimTrail *this,UParticleModuleTypeDataBase *param_1)

{
  return 0x48;
}

