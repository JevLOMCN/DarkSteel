// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LandscapePatch
// Functions: 5

// StaticStruct @ 14db0b170

UScriptStruct * __cdecl FLandscapePatchComponentInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLandscapePatchComponentInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LandscapePatch();
    Z_Registration_Info_UScriptStruct_FLandscapePatchComponentInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData,
                         (UObject *)pUVar1,L"LandscapePatchComponentInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FLandscapePatchComponentInstanceData.OuterSingleton;
}

// ContainsData @ 14db0b1b0

bool __thiscall
FLandscapePatchComponentInstanceData::ContainsData(FLandscapePatchComponentInstanceData *this)

{
  return true;
}

// ApplyToComponent @ 14db0b1c0

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
FLandscapePatchComponentInstanceData::ApplyToComponent
          (FLandscapePatchComponentInstanceData *this,UActorComponent *param_1,
          ECacheApplyPhase param_2)

{
  return;
}

// FLandscapePatchComponentInstanceData @ 14db12c50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FLandscapePatchComponentInstanceData * __thiscall
FLandscapePatchComponentInstanceData::FLandscapePatchComponentInstanceData
          (FLandscapePatchComponentInstanceData *this,ULandscapePatchComponent *param_1)

{
  FSceneComponentInstanceData::FSceneComponentInstanceData
            ((FSceneComponentInstanceData *)this,(USceneComponent *)param_1);
  *(undefined ***)this = &___7FLandscapePatchComponentInstanceData__6B_;
  return this;
}

// ~FLandscapePatchComponentInstanceData @ 14db13460

void __thiscall
FLandscapePatchComponentInstanceData::~FLandscapePatchComponentInstanceData
          (FLandscapePatchComponentInstanceData *this)

{
  *(undefined ***)this = &___7FSceneComponentInstanceData__6B_;
  *(undefined4 *)&this->field_0xb0 = 0;
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x68);
  FInstanceCacheDataBase::~FInstanceCacheDataBase((FInstanceCacheDataBase *)this);
  return;
}

