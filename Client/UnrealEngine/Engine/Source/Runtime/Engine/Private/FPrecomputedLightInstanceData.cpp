// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticStruct @ 147890fc0

UScriptStruct * __cdecl FPrecomputedLightInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPrecomputedLightInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FPrecomputedLightInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPrecomputedLightInstanceData,(UObject *)pUVar1,
                         L"PrecomputedLightInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FPrecomputedLightInstanceData.OuterSingleton;
}

// ContainsData @ 147891010

bool __thiscall FPrecomputedLightInstanceData::ContainsData(FPrecomputedLightInstanceData *this)

{
  return true;
}

// ApplyToComponent @ 1478910e0

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
FPrecomputedLightInstanceData::ApplyToComponent
          (FPrecomputedLightInstanceData *this,UActorComponent *param_1,ECacheApplyPhase param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  FSceneComponentInstanceData::ApplyToComponent((FSceneComponentInstanceData *)this,param_1,param_2)
  ;
  if (param_1 == (UActorComponent *)0x0) {
    pFVar3 = GetTypeName<ULightComponent>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = ULightComponent::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    ULightComponent::ApplyComponentInstanceData((ULightComponent *)param_1,this);
    return;
  }
  pFVar3 = GetTypeName<ULightComponent>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UActorComponent>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// FPrecomputedLightInstanceData @ 1478a8140

FPrecomputedLightInstanceData * __thiscall
FPrecomputedLightInstanceData::FPrecomputedLightInstanceData(FPrecomputedLightInstanceData *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FSceneComponentInstanceData::FSceneComponentInstanceData((FSceneComponentInstanceData *)this);
  *(undefined ***)this = &___7FPrecomputedLightInstanceData__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Transform).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Transform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->OriginalLightGuid).A = 0;
  (this->OriginalLightGuid).B = 0;
  (this->OriginalLightGuid).C = 0;
  (this->OriginalLightGuid).D = 0;
  (this->LightGuid).A = 0;
  (this->LightGuid).B = 0;
  (this->LightGuid).C = 0;
  (this->LightGuid).D = 0;
  this->PreviewShadowMapChannel = 0;
  return this;
}

// ~FPrecomputedLightInstanceData @ 1478ab990

void __thiscall
FPrecomputedLightInstanceData::~FPrecomputedLightInstanceData(FPrecomputedLightInstanceData *this)

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

