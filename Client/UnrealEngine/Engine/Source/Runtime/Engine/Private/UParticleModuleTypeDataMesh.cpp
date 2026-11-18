// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// StaticClass @ 147313070

UClass * __cdecl UParticleModuleTypeDataMesh::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleTypeDataMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleTypeDataMesh",
               &Z_Registration_Info_UClass_UParticleModuleTypeDataMesh.InnerSingleton,
               StaticRegisterNativesUParticleModuleTypeDataMesh,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleTypeDataMesh>,
               InternalVTableHelperCtorCaller<UParticleModuleTypeDataMesh>,local_res8,
               UParticleModuleTypeDataBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleTypeDataMesh.InnerSingleton;
}

// UParticleModuleTypeDataMesh @ 147318eb0

UParticleModuleTypeDataMesh * __thiscall
UParticleModuleTypeDataMesh::UParticleModuleTypeDataMesh
          (UParticleModuleTypeDataMesh *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleTypeDataMesh__6B_;
  (this->Mesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (this->RandomStream).InitialSeed = 0;
  (this->RandomStream).Seed = 0;
  (this->RollPitchYawRange)._padding_ = 0;
  (this->RollPitchYawRange)._padding_ = 0;
  (this->RollPitchYawRange)._padding_ = 0;
  *(undefined4 *)&(this->RollPitchYawRange)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->RollPitchYawRange)._padding_ + 4) = 0;
  (this->RollPitchYawRange).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RollPitchYawRange).MaxValue = 0.0;
  (this->RollPitchYawRange).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RollPitchYawRange).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->RollPitchYawRange).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RollPitchYawRange).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RollPitchYawRange).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->RollPitchYawRange).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->RollPitchYawRange).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  return this;
}

// ~UParticleModuleTypeDataMesh @ 147319970

void __thiscall
UParticleModuleTypeDataMesh::~UParticleModuleTypeDataMesh(UParticleModuleTypeDataMesh *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleTypeDataMesh__6B_;
  pvVar1 = (void *)(this->RollPitchYawRange)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleTypeDataBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14731c130

UClass * __cdecl UParticleModuleTypeDataMesh::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleTypeDataMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleTypeDataMesh",
               &Z_Registration_Info_UClass_UParticleModuleTypeDataMesh.InnerSingleton,
               StaticRegisterNativesUParticleModuleTypeDataMesh,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleTypeDataMesh>,
               InternalVTableHelperCtorCaller<UParticleModuleTypeDataMesh>,local_res8,
               UParticleModuleTypeDataBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleTypeDataMesh.InnerSingleton;
}

// IsAMeshEmitter @ 14731ce30

bool __thiscall UParticleModuleTypeDataMesh::IsAMeshEmitter(UParticleModuleTypeDataMesh *this)

{
  return true;
}

// IsMotionBlurEnabled @ 14731ce50

bool __thiscall UParticleModuleTypeDataMesh::IsMotionBlurEnabled(UParticleModuleTypeDataMesh *this)

{
  int iVar1;
  int iVar2;
  
  if (this->bOverrideDefaultMotionBlurSettings != '\0') {
    return this->bEnableMotionBlur;
  }
  iVar1 = GetMeshParticleMotionBlurMinDetailMode();
  if (-1 < iVar1) {
    iVar1 = GetCurrentDetailMode();
    iVar2 = GetMeshParticleMotionBlurMinDetailMode();
    if (iVar2 <= iVar1) {
      return true;
    }
  }
  return false;
}

// Serialize @ 14731ced0

void __thiscall
UParticleModuleTypeDataMesh::Serialize
          (UParticleModuleTypeDataMesh *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUParticleModuleTypeDataMesh @ 14731d060

void __cdecl UParticleModuleTypeDataMesh::StaticRegisterNativesUParticleModuleTypeDataMesh(void)

{
  return;
}

// SupportsSpecificScreenAlignmentFlags @ 14731d180

bool __thiscall
UParticleModuleTypeDataMesh::SupportsSpecificScreenAlignmentFlags(UParticleModuleTypeDataMesh *this)

{
  return true;
}

// SupportsSubUV @ 14731d1a0

bool __thiscall UParticleModuleTypeDataMesh::SupportsSubUV(UParticleModuleTypeDataMesh *this)

{
  return true;
}

// UParticleModuleTypeDataMesh @ 14815e870

UParticleModuleTypeDataMesh * __thiscall
UParticleModuleTypeDataMesh::UParticleModuleTypeDataMesh
          (UParticleModuleTypeDataMesh *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x14 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleTypeDataMesh__6B_;
  (this->Mesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (this->RandomStream).InitialSeed = 0;
  (this->RandomStream).Seed = 0;
  (this->RollPitchYawRange)._padding_ = 0;
  (this->RollPitchYawRange)._padding_ = 0;
  (this->RollPitchYawRange)._padding_ = 0;
  *(undefined4 *)&(this->RollPitchYawRange)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->RollPitchYawRange)._padding_ + 4) = 0;
  (this->RollPitchYawRange).MinValue = 0.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RollPitchYawRange).MaxValue = 0.0;
  (this->RollPitchYawRange).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RollPitchYawRange).MinValueVec.field0_0x0._s_0.Y = (double)uVar2;
  (this->RollPitchYawRange).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RollPitchYawRange).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RollPitchYawRange).MaxValueVec.field0_0x0._s_0.Y = (double)uVar2;
  (this->RollPitchYawRange).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->RollPitchYawRange).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  this->bCollisionsConsiderPartilceSize = '\x01';
  this->CastShadows = '\0';
  this->DoCollisions = '\0';
  this->bUseStaticMeshLODs = '\x01';
  (this->MeshAlignment).Value = '\0';
  (this->AxisLockOption).Value = '\0';
  this->CameraFacingUpAxisOption_DEPRECATED = '\0';
  this->CameraFacingOption = '\0';
  this->LODSizeScale = 1.0;
  return this;
}

// CollectPSOPrecacheData @ 1481690e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UParticleModuleTypeDataMesh::CollectPSOPrecacheData
          (UParticleModuleTypeDataMesh *this,UParticleEmitter *param_1,FPSOPrecacheParams *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  UStaticMesh *this_00;
  code *pcVar3;
  FRHIVertexDeclaration *pFVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  EPrimitiveType EVar8;
  FStaticMeshRenderData *pFVar9;
  ForElementType<FPSOPrecacheVertexFactoryData> FVar10;
  ForElementType<FPSOPrecacheVertexFactoryData> FVar11;
  ForElementType<FPSOPrecacheVertexFactoryData> FVar12;
  ForElementType<FPSOPrecacheVertexFactoryData> FVar13;
  undefined1 auStackY_278 [32];
  FPSOPrecacheVertexFactoryData local_228;
  FDataType local_218;
  TArray<FVertexElement,TFixedAllocator<17>_> local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  this_00 = (this->Mesh).field0_0x0.DebugPtr;
  if (this_00 != (UStaticMesh *)0x0) {
    pFVar9 = UStaticMesh::GetRenderData(this_00);
    iVar6 = UStaticMesh::GetMinLODIdx((this->Mesh).field0_0x0.DebugPtr,false);
    if ((-1 < iVar6) && (iVar6 < (pFVar9->LODResources).Array.ArrayNum)) {
      iVar7 = 0;
      local_d8.ArrayNum = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_._0_4_ = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_._6_1_ = 0;
      local_218.ParticleColorComponent.VertexBuffer = (FVertexBuffer *)0x0;
      local_218.ParticleColorComponent.StreamOffset = 0;
      local_218.ParticleColorComponent.Offset = '\0';
      local_218.ParticleColorComponent.Stride = '\0';
      local_218.ParticleColorComponent.Type.Value = '\0';
      local_218.ParticleColorComponent.VertexStreamUsage = Default;
      local_218.TransformComponent[0].VertexBuffer = (FVertexBuffer *)0x0;
      local_218.TransformComponent[0].StreamOffset = 0;
      local_218.TransformComponent[0].Offset = '\0';
      local_218.TransformComponent[0].Stride = '\0';
      local_218.TransformComponent[0].Type.Value = '\0';
      local_218.TransformComponent[0].VertexStreamUsage = Default;
      local_218.TransformComponent[1].VertexBuffer = (FVertexBuffer *)0x0;
      local_218.TransformComponent[1].StreamOffset = 0;
      local_218.TransformComponent[1].Offset = '\0';
      local_218.TransformComponent[1].Stride = '\0';
      local_218.TransformComponent[1].Type.Value = '\0';
      local_218.TransformComponent[1].VertexStreamUsage = Default;
      local_218.TransformComponent[2].VertexBuffer = (FVertexBuffer *)0x0;
      local_218.TransformComponent[2].StreamOffset = 0;
      local_218.TransformComponent[2].Offset = '\0';
      local_218.TransformComponent[2].Stride = '\0';
      local_218.TransformComponent[2].Type.Value = '\0';
      local_218.TransformComponent[2].VertexStreamUsage = Default;
      local_218.VelocityComponent.VertexBuffer = (FVertexBuffer *)0x0;
      local_218.VelocityComponent.StreamOffset = 0;
      local_218.VelocityComponent.Offset = '\0';
      local_218.VelocityComponent.Stride = '\0';
      local_218.VelocityComponent.Type.Value = '\0';
      local_218.VelocityComponent.VertexStreamUsage = Default;
      local_218.SubUVs.VertexBuffer = (FVertexBuffer *)0x0;
      local_218.SubUVs.StreamOffset = 0;
      local_218.SubUVs.Offset = '\0';
      local_218.SubUVs.Stride = '\0';
      local_218.SubUVs.Type.Value = '\0';
      local_218.SubUVs.VertexStreamUsage = Default;
      local_218.SubUVLerpAndRelTime.VertexBuffer = (FVertexBuffer *)0x0;
      local_218.SubUVLerpAndRelTime.StreamOffset = 0;
      local_218.SubUVLerpAndRelTime.Offset = '\0';
      local_218.SubUVLerpAndRelTime.Stride = '\0';
      local_218.SubUVLerpAndRelTime.Type.Value = '\0';
      local_218.SubUVLerpAndRelTime.VertexStreamUsage = Default;
      local_218.bInitialized = false;
      local_d8.ArrayMax = 0x11;
      if (0 < param_1->DynamicParameterDataOffset) {
        iVar7 = 0x10;
      }
      local_218._padding_._4_4_ = 4;
      local_218._padding_._0_4_ = 0xffffffff;
      local_218._padding_._4_2_ = 0xff;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      if ((iVar6 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      InitMeshParticleVertexFactoryComponents
                ((FMeshParticleVertexFactory *)0x0,
                 *(FStaticMeshLODResources **)
                  ((pFVar9->LODResources).Array.AllocatorInstance.Data + (longlong)iVar6 * 8),
                 &local_218);
      FMeshParticleVertexFactory::GetVertexElements
                (GMaxRHIFeatureLevel,0x60,iVar7,&local_218,&local_d8);
      EVar8 = (**(code **)(this->_padding_ + 0x3b8))(this);
      param_2->PrimitiveType = EVar8;
      FVar13 = (ForElementType<FPSOPrecacheVertexFactoryData>)&param_2->VertexFactoryDataList;
      FVar10 = (ForElementType<FPSOPrecacheVertexFactoryData>)
               FPSOPrecacheVertexFactoryData::FPSOPrecacheVertexFactoryData
                         (&local_228,&FMeshParticleVertexFactory::StaticType,&local_d8);
      FVar12 = (param_2->VertexFactoryDataList).AllocatorInstance.SecondaryData;
      FVar11 = FVar12;
      if (FVar12 == (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
        FVar11 = FVar13;
      }
      if ((ulonglong)FVar11 <= (ulonglong)FVar10) {
        if (FVar12 == (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
          FVar12 = FVar13;
        }
        if (((ulonglong)FVar10 <
             (ulonglong)
             ((longlong)FVar12 + (longlong)(param_2->VertexFactoryDataList).ArrayMax * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar6 = (param_2->VertexFactoryDataList).ArrayNum;
      piVar1 = &(param_2->VertexFactoryDataList).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                          (0x810,(ForElementType<FPSOPrecacheVertexFactoryData> *)FVar13,piVar1);
      }
      (param_2->VertexFactoryDataList).ArrayNum = iVar6 + 1;
      FVar12 = (param_2->VertexFactoryDataList).AllocatorInstance.SecondaryData;
      pFVar4 = *(FRHIVertexDeclaration **)((longlong)FVar10 + 8);
      if (FVar12 != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
        FVar13 = FVar12;
      }
      puVar2 = (undefined8 *)((longlong)FVar13 + (longlong)iVar6 * 0x10);
      *puVar2 = *(undefined8 *)FVar10;
      puVar2[1] = pFVar4;
    }
  }
  return;
}

// CreateDistribution @ 14816bf80

void __thiscall UParticleModuleTypeDataMesh::CreateDistribution(UParticleModuleTypeDataMesh *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorUniform *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->RollPitchYawRange);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionRollPitchYaw");
    pUVar3 = NewObject<UDistributionVectorUniform>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorUniform *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->RollPitchYawRange).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  return;
}

// CreateInstance @ 14816dec0

FParticleEmitterInstance * __thiscall
UParticleModuleTypeDataMesh::CreateInstance
          (UParticleModuleTypeDataMesh *this,UParticleEmitter *param_1,
          IParticleEmitterInstanceOwner *param_2)

{
  code *pcVar1;
  bool bVar2;
  FParticleMeshEmitterInstance *pFVar3;
  FParticleEmitterInstance *pFVar4;
  
  (**(code **)(this->_padding_ + 0x2e8))();
  pFVar3 = ::operator_new(0x2b0);
  if (pFVar3 == (FParticleMeshEmitterInstance *)0x0) {
    pFVar3 = (FParticleMeshEmitterInstance *)0x0;
  }
  else {
    pFVar3 = FParticleMeshEmitterInstance::FParticleMeshEmitterInstance(pFVar3,param_2);
    if (pFVar3 != (FParticleMeshEmitterInstance *)0x0) goto LAB_14816df2d;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Instance",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                     ,0xd70,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FParticleEmitterInstance *)(*pcVar1)();
    return pFVar4;
  }
LAB_14816df2d:
  (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,param_1);
  CreateDistribution(this);
  return (FParticleEmitterInstance *)pFVar3;
}

// GetCurrentDetailMode @ 148178e50

int __cdecl UParticleModuleTypeDataMesh::GetCurrentDetailMode(void)

{
  FCachedSystemScalabilityCVars *pFVar1;
  
  pFVar1 = GetCachedScalabilityCVars();
  return pFVar1->DetailMode;
}

// GetMeshParticleMotionBlurMinDetailMode @ 14817a8c0

int __cdecl UParticleModuleTypeDataMesh::GetMeshParticleMotionBlurMinDetailMode(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarMinDetailModeForMeshParticleMotionBlur.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1];
    }
  }
  return pTVar1->ShadowedValue[0];
}

// GetVertexFactoryType @ 148180570

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
UParticleModuleTypeDataMesh::GetVertexFactoryType(UParticleModuleTypeDataMesh *this)

{
  return &FMeshParticleVertexFactory::StaticType;
}

// IsPostLoadThreadSafe @ 148185c20

bool __thiscall UParticleModuleTypeDataMesh::IsPostLoadThreadSafe(UParticleModuleTypeDataMesh *this)

{
  return false;
}

// PostLoad @ 14818c690

void __thiscall UParticleModuleTypeDataMesh::PostLoad(UParticleModuleTypeDataMesh *this)

{
  UStaticMesh *this_00;
  
  UObject::PostLoad((UObject *)this);
  this_00 = (this->Mesh).field0_0x0.DebugPtr;
  if (this_00 != (UStaticMesh *)0x0) {
    UObject::ConditionalPostLoad((UObject *)this_00);
    return;
  }
  return;
}

// Serialize @ 148194a00

void __thiscall
UParticleModuleTypeDataMesh::Serialize(UParticleModuleTypeDataMesh *this,FArchive *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  UDistributionVector *pUVar3;
  
  UObject::Serialize((UObject *)this,param_1);
  if ((param_1->field_0x28 & 1) != 0) {
    if (*(int *)&param_1->field_0x40 < 0x173) {
      CreateDistribution(this);
      pUVar3 = (UDistributionVector *)0x0;
      if ((this->RollPitchYawRange).Distribution.field0_0x0.DebugPtr != (UDistributionVector *)0x0)
      {
        pUVar2 = Z_Construct_UClass_UDistributionVectorUniform_NoRegister();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&(this->RollPitchYawRange).Distribution,pUVar2);
        if (bVar1) {
          pUVar3 = (this->RollPitchYawRange).Distribution.field0_0x0.DebugPtr;
        }
      }
      pUVar3[1]._padding_ = 0;
      pUVar3[1]._padding_ = 0;
      pUVar3[1]._padding_ = 0;
      pUVar3[1]._padding_ = 0;
      pUVar3[1]._padding_ = 0;
      pUVar3[1]._padding_ = 0;
      pUVar3->bIsDirty = '\x01';
    }
    if (((param_1->field_0x28 & 1) != 0) && (*(int *)&param_1->field_0x40 < 0x1df)) {
      this->bCollisionsConsiderPartilceSize = '\0';
    }
  }
  return;
}

// SetToSensibleDefaults @ 1481982f0

void __thiscall
UParticleModuleTypeDataMesh::SetToSensibleDefaults
          (UParticleModuleTypeDataMesh *this,UParticleEmitter *param_1)

{
  return;
}

