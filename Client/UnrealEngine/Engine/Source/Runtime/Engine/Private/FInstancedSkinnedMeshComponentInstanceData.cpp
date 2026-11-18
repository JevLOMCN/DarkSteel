// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 147889d10

UScriptStruct * __cdecl FInstancedSkinnedMeshComponentInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInstancedSkinnedMeshComponentInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FInstancedSkinnedMeshComponentInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInstancedSkinnedMeshComponentInstanceData,
                         (UObject *)pUVar1,L"InstancedSkinnedMeshComponentInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FInstancedSkinnedMeshComponentInstanceData.OuterSingleton
  ;
}

// ContainsData @ 147889d50

bool __thiscall
FInstancedSkinnedMeshComponentInstanceData::ContainsData
          (FInstancedSkinnedMeshComponentInstanceData *this)

{
  return true;
}

// ApplyToComponent @ 147889d60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FInstancedSkinnedMeshComponentInstanceData::ApplyToComponent
          (FInstancedSkinnedMeshComponentInstanceData *this,UActorComponent *param_1,
          ECacheApplyPhase param_2)

{
  CastChecked<UInstancedSkinnedMeshComponent,UActorComponent>(param_1);
  FSceneComponentInstanceData::ApplyToComponent((FSceneComponentInstanceData *)this,param_1,param_2)
  ;
  CastChecked<UInstancedSkinnedMeshComponent,UActorComponent>(param_1);
  return;
}

// AddReferencedObjects @ 147889db0

void __thiscall
FInstancedSkinnedMeshComponentInstanceData::AddReferencedObjects
          (FInstancedSkinnedMeshComponentInstanceData *this,FReferenceCollector *param_1)

{
  FSceneComponentInstanceData::AddReferencedObjects((FSceneComponentInstanceData *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000147889de2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->SkinnedAsset,0,0);
  return;
}

// FInstancedSkinnedMeshComponentInstanceData @ 1478a79b0

FInstancedSkinnedMeshComponentInstanceData * __thiscall
FInstancedSkinnedMeshComponentInstanceData::FInstancedSkinnedMeshComponentInstanceData
          (FInstancedSkinnedMeshComponentInstanceData *this)

{
  FSceneComponentInstanceData::FSceneComponentInstanceData((FSceneComponentInstanceData *)this);
  this->_padding_ = (longlong)&___7FInstancedSkinnedMeshComponentInstanceData__6B_;
  (this->SkinnedAsset).field0_0x0.DebugPtr = (USkinnedAsset *)0x0;
  (this->InstanceData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceData).ArrayNum = 0;
  (this->InstanceData).ArrayMax = 0;
  (this->SelectedInstances).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->SelectedInstances).NumBits = 0;
  (this->SelectedInstances).MaxBits = 0x80;
  this->bHasPerInstanceHitProxies = false;
  (this->PrimitiveBoundsOverride).IsValid = '\0';
  this->bIsInstanceDataGPUOnly = false;
  this->NumInstancesGPUOnly = 0;
  return this;
}

// ~FInstancedSkinnedMeshComponentInstanceData @ 1478ab930

void __thiscall
FInstancedSkinnedMeshComponentInstanceData::~FInstancedSkinnedMeshComponentInstanceData
          (FInstancedSkinnedMeshComponentInstanceData *this)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  
  FVar1 = (this->SelectedInstances).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  pFVar2 = (this->InstanceData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FSceneComponentInstanceData::~FSceneComponentInstanceData((FSceneComponentInstanceData *)this);
  return;
}

