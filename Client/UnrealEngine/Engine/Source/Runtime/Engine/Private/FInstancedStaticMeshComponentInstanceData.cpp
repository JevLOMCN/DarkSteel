// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 14727da70

UScriptStruct * __cdecl FInstancedStaticMeshComponentInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInstancedStaticMeshComponentInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FInstancedStaticMeshComponentInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData,
                         (UObject *)pUVar1,L"InstancedStaticMeshComponentInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FInstancedStaticMeshComponentInstanceData.OuterSingleton;
}

// ContainsData @ 14727dab0

bool __thiscall
FInstancedStaticMeshComponentInstanceData::ContainsData
          (FInstancedStaticMeshComponentInstanceData *this)

{
  return true;
}

// ApplyToComponent @ 14727dac0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FInstancedStaticMeshComponentInstanceData::ApplyToComponent
          (FInstancedStaticMeshComponentInstanceData *this,UActorComponent *param_1,
          ECacheApplyPhase param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  UInstancedStaticMeshComponent *pUVar1;
  
  pUVar1 = CastChecked<UInstancedStaticMeshComponent,UActorComponent>(param_1);
  UInstancedStaticMeshComponent::PreApplyComponentInstanceData(pUVar1,this);
  FSceneComponentInstanceData::ApplyToComponent((FSceneComponentInstanceData *)this,param_1,param_2)
  ;
  pUVar1 = CastChecked<UInstancedStaticMeshComponent,UActorComponent>(param_1);
  UNRECOVERED_JUMPTABLE = *(code **)(pUVar1->_padding_ + 0xc60);
                    /* WARNING: Could not recover jumptable at 0x00014727db20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pUVar1,this,UNRECOVERED_JUMPTABLE);
  return;
}

// AddReferencedObjects @ 14727db30

void __thiscall
FInstancedStaticMeshComponentInstanceData::AddReferencedObjects
          (FInstancedStaticMeshComponentInstanceData *this,FReferenceCollector *param_1)

{
  FSceneComponentInstanceData::AddReferencedObjects((FSceneComponentInstanceData *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014727db62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->StaticMesh,0,0);
  return;
}

// FInstancedStaticMeshComponentInstanceData @ 14727f610

/* WARNING: Type propagation algorithm not settling */

FInstancedStaticMeshComponentInstanceData * __thiscall
FInstancedStaticMeshComponentInstanceData::FInstancedStaticMeshComponentInstanceData
          (FInstancedStaticMeshComponentInstanceData *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FSceneComponentInstanceData::FSceneComponentInstanceData((FSceneComponentInstanceData *)this);
  this->_padding_ = (longlong)&___7FInstancedStaticMeshComponentInstanceData__6B_;
  (this->StaticMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->CachedStaticLighting).Transform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->CachedStaticLighting).Transform.Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedStaticLighting).Transform.Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedStaticLighting).Transform.Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->CachedStaticLighting).Transform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->CachedStaticLighting).Transform.Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedStaticLighting).Transform.Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedStaticLighting).Transform.Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->CachedStaticLighting).Transform.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->CachedStaticLighting).Transform.Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedStaticLighting).Transform.Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedStaticLighting).Transform.Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->CachedStaticLighting).MapBuildDataIds.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedStaticLighting).MapBuildDataIds.ArrayNum = 0;
  (this->CachedStaticLighting).MapBuildDataIds.ArrayMax = 0;
  (this->PerInstanceSMData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerInstanceSMData).ArrayNum = 0;
  (this->PerInstanceSMData).ArrayMax = 0;
  (this->SelectedInstances).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->SelectedInstances).NumBits = 0;
  *(undefined8 *)&(this->SelectedInstances).MaxBits = 0x80;
  (this->AdditionalRandomSeeds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalRandomSeeds).ArrayNum = 0;
  (this->AdditionalRandomSeeds).ArrayMax = 0;
  this->bHasPerInstanceHitProxies = false;
  return this;
}

// ~FInstancedStaticMeshComponentInstanceData @ 14727fbf0

void __thiscall
FInstancedStaticMeshComponentInstanceData::~FInstancedStaticMeshComponentInstanceData
          (FInstancedStaticMeshComponentInstanceData *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<unsigned_int> FVar2;
  
  pFVar1 = (this->AdditionalRandomSeeds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->SelectedInstances).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  pFVar1 = (this->PerInstanceSMData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedStaticLighting).MapBuildDataIds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSceneComponentInstanceData::~FSceneComponentInstanceData((FSceneComponentInstanceData *)this);
  return;
}

