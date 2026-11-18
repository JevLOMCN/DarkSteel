// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// operator<TWeakObjectPtr<AActor,FWeakObjectPtr>,UE::Math::TTransform<double>_>_TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UE::Math::TTransform<double>_> @ 147366e60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UE::Math::TTransform<double>_> * __thiscall
TPairInitializer<AActor_*_&&,UE::Math::TTransform<double>_const_&>::
operator<TWeakObjectPtr<AActor,FWeakObjectPtr>,UE::Math::TTransform<double>_>_TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UE::Math::TTransform<double>_>
          (TPairInitializer<AActor_*_&&,UE::Math::TTransform<double>_const_&> *this,
          TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UE::Math::TTransform<double>_>
          *__return_storage_ptr__)

{
  TTransform<double> *pTVar1;
  AActor *pAVar2;
  double dVar3;
  AActor *local_res8;
  
  pTVar1 = this->Value;
  pAVar2 = *this->Key;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pAVar2 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar2);
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  local_res8 = pAVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar2 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar2);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)&local_res8);
  dVar3 = (pTVar1->Rotation).XY.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x10 = (pTVar1->Rotation).XY.m128d_f64[0];
  *(double *)&__return_storage_ptr__->field_0x18 = dVar3;
  dVar3 = (pTVar1->Rotation).ZW.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x20 = (pTVar1->Rotation).ZW.m128d_f64[0];
  *(double *)&__return_storage_ptr__->field_0x28 = dVar3;
  dVar3 = (pTVar1->Translation).XY.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x30 = (pTVar1->Translation).XY.m128d_f64[0];
  *(double *)&__return_storage_ptr__->field_0x38 = dVar3;
  dVar3 = (pTVar1->Translation).ZW.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x40 = (pTVar1->Translation).ZW.m128d_f64[0];
  *(double *)&__return_storage_ptr__->field_0x48 = dVar3;
  dVar3 = (pTVar1->Scale3D).XY.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x50 = (pTVar1->Scale3D).XY.m128d_f64[0];
  *(double *)&__return_storage_ptr__->field_0x58 = dVar3;
  dVar3 = (pTVar1->Scale3D).ZW.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x60 = (pTVar1->Scale3D).ZW.m128d_f64[0];
  *(double *)&__return_storage_ptr__->field_0x68 = dVar3;
  return __return_storage_ptr__;
}

// operator<FName,FReferencePose>_TTuple<FName,FReferencePose> @ 14758fb10

TTuple<FName,FReferencePose> * __thiscall
TPairInitializer<FName_const_&,FReferencePose_const_&>::
operator<FName,FReferencePose>_TTuple<FName,FReferencePose>
          (TPairInitializer<FName_const_&,FReferencePose_const_&> *this,
          TTuple<FName,FReferencePose> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  FReferencePose *pFVar3;
  FScriptContainerElement *_Src;
  uint uVar4;
  
  pFVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x10;
  uVar4 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar4;
  uVar4 = (pFVar3->PoseName).Number;
  *(uint *)&__return_storage_ptr__->field_0x8 = (pFVar3->PoseName).ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar4;
  *(undefined8 *)puVar1 = 0;
  iVar2 = (pFVar3->ReferencePose).ArrayNum;
  _Src = (pFVar3->ReferencePose).AllocatorInstance.Data;
  *(int *)&__return_storage_ptr__->field_0x18 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x1c);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 * 0x60);
  }
  return __return_storage_ptr__;
}

// operator<USoundClass_*,FSoundMixClassOverride>_TTuple<USoundClass_*,FSoundMixClassOverride> @ 1476087a0

TTuple<USoundClass_*,FSoundMixClassOverride> * __thiscall
TPairInitializer<USoundClass_*_const_&,FSoundMixClassOverride_const_&>::
operator<USoundClass_*,FSoundMixClassOverride>_TTuple<USoundClass_*,FSoundMixClassOverride>
          (TPairInitializer<USoundClass_*_const_&,FSoundMixClassOverride_const_&> *this,
          TTuple<USoundClass_*,FSoundMixClassOverride> *__return_storage_ptr__)

{
  FSoundMixClassOverride *pFVar1;
  USoundClass *pUVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  
  pFVar1 = this->Value;
  *(USoundClass **)__return_storage_ptr__ = *this->Key;
  pUVar2 = (pFVar1->SoundClassAdjustor).SoundClassObject.field0_0x0.DebugPtr;
  *(USoundClass **)&__return_storage_ptr__->field_0x8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (USoundClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  *(float *)&__return_storage_ptr__->field_0x10 = (pFVar1->SoundClassAdjustor).VolumeAdjuster;
  *(float *)&__return_storage_ptr__->field_0x14 = (pFVar1->SoundClassAdjustor).PitchAdjuster;
  *(float *)&__return_storage_ptr__->field_0x18 =
       (pFVar1->SoundClassAdjustor).LowPassFilterFrequency;
  *(uint *)&__return_storage_ptr__->field_0x1c =
       *(uint *)&__return_storage_ptr__->field_0x1c ^
       (*(uint *)&__return_storage_ptr__->field_0x1c ^ (pFVar1->SoundClassAdjustor).bApplyToChildren
       ) & 1;
  *(float *)&__return_storage_ptr__->field_0x20 =
       (pFVar1->SoundClassAdjustor).VoiceCenterChannelVolumeAdjuster;
  fVar3 = (pFVar1->VolumeOverride).StartValue;
  fVar4 = (pFVar1->VolumeOverride).DeltaValue;
  fVar5 = (pFVar1->VolumeOverride).CurrTimeSec;
  *(float *)&__return_storage_ptr__->field_0x28 = (pFVar1->VolumeOverride).CurrValue;
  *(float *)&__return_storage_ptr__->field_0x2c = fVar3;
  *(float *)&__return_storage_ptr__->field_0x30 = fVar4;
  *(float *)&__return_storage_ptr__->field_0x34 = fVar5;
  fVar3 = (pFVar1->VolumeOverride).LastTime;
  *(float *)&__return_storage_ptr__->field_0x38 = (pFVar1->VolumeOverride).DurationSec;
  *(float *)&__return_storage_ptr__->field_0x3c = fVar3;
  *(float *)&__return_storage_ptr__->field_0x40 = (pFVar1->VolumeOverride).TargetValue;
  fVar3 = (pFVar1->PitchOverride).StartValue;
  fVar4 = (pFVar1->PitchOverride).DeltaValue;
  fVar5 = (pFVar1->PitchOverride).CurrTimeSec;
  *(float *)&__return_storage_ptr__->field_0x44 = (pFVar1->PitchOverride).CurrValue;
  *(float *)&__return_storage_ptr__->field_0x48 = fVar3;
  *(float *)&__return_storage_ptr__->field_0x4c = fVar4;
  *(float *)&__return_storage_ptr__->field_0x50 = fVar5;
  fVar3 = (pFVar1->PitchOverride).LastTime;
  *(float *)&__return_storage_ptr__->field_0x54 = (pFVar1->PitchOverride).DurationSec;
  *(float *)&__return_storage_ptr__->field_0x58 = fVar3;
  *(float *)&__return_storage_ptr__->field_0x5c = (pFVar1->PitchOverride).TargetValue;
  *(float *)&__return_storage_ptr__->field_0x60 = pFVar1->FadeInTime;
  bVar6 = (__return_storage_ptr__->field_0x64 ^ pFVar1->bOverrideApplied) & 1 ^
          __return_storage_ptr__->field_0x64;
  __return_storage_ptr__->field_0x64 = bVar6;
  bVar6 = (bVar6 ^ pFVar1->field_0x5c) & 2 ^ bVar6;
  __return_storage_ptr__->field_0x64 = bVar6;
  bVar6 = (bVar6 ^ pFVar1->field_0x5c) & 4 ^ bVar6;
  __return_storage_ptr__->field_0x64 = bVar6;
  __return_storage_ptr__->field_0x64 = (bVar6 ^ pFVar1->field_0x5c) & 8 ^ bVar6;
  return __return_storage_ptr__;
}

// operator<FName,FBufferVisualizationData::Record>_TTuple<FName,FBufferVisualizationData::Record> @ 1476778e0

TTuple<FName,FBufferVisualizationData::Record> * __thiscall
TPairInitializer<FName_&&,FBufferVisualizationData::Record_const_&>::
operator<FName,FBufferVisualizationData::Record>_TTuple<FName,FBufferVisualizationData::Record>
          (TPairInitializer<FName_&&,FBufferVisualizationData::Record_const_&> *this,
          TTuple<FName,FBufferVisualizationData::Record> *__return_storage_ptr__)

{
  Record *pRVar1;
  ITextData *pIVar2;
  uint uVar3;
  undefined1 local_res8 [8];
  
  pRVar1 = this->Value;
  uVar3 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar3;
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x8,&pRVar1->Name);
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  pIVar2 = (pRVar1->DisplayName).TextData.Reference;
  *(ITextData **)&__return_storage_ptr__->field_0x18 = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  *(uint *)&__return_storage_ptr__->field_0x20 = (pRVar1->DisplayName).Flags;
  *(UMaterialInterface **)&__return_storage_ptr__->field_0x28 = pRVar1->Material;
  __return_storage_ptr__->field_0x30 = pRVar1->bApplyAutoExposure;
  return __return_storage_ptr__;
}

// operator<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_> @ 1477406c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_> * __thiscall
TPairInitializer<TObjectPtr<USceneComponent>_&&,UE::Math::TTransform<double>_&&>::
operator<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>
          (TPairInitializer<TObjectPtr<USceneComponent>_&&,UE::Math::TTransform<double>_&&> *this,
          TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_> *__return_storage_ptr__)

{
  TTransform<double> *pTVar1;
  TObjectPtr<USceneComponent> TVar2;
  double dVar3;
  
  pTVar1 = this->Value;
  TVar2.field0_0x0 = (TObjectPtr<USceneComponent>_u_0)(this->Key->field0_0x0).DebugPtr;
  *(TObjectPtr<USceneComponent>_u_0 *)__return_storage_ptr__ = TVar2.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar2.field0_0x0 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
  }
  dVar3 = (pTVar1->Rotation).XY.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x10 = (pTVar1->Rotation).XY.m128d_f64[0];
  *(double *)&__return_storage_ptr__->field_0x18 = dVar3;
  dVar3 = (pTVar1->Rotation).ZW.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x20 = (pTVar1->Rotation).ZW.m128d_f64[0];
  *(double *)&__return_storage_ptr__->field_0x28 = dVar3;
  dVar3 = (pTVar1->Translation).XY.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x30 = (pTVar1->Translation).XY.m128d_f64[0];
  *(double *)&__return_storage_ptr__->field_0x38 = dVar3;
  dVar3 = (pTVar1->Translation).ZW.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x40 = (pTVar1->Translation).ZW.m128d_f64[0];
  *(double *)&__return_storage_ptr__->field_0x48 = dVar3;
  dVar3 = (pTVar1->Scale3D).XY.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x50 = (pTVar1->Scale3D).XY.m128d_f64[0];
  *(double *)&__return_storage_ptr__->field_0x58 = dVar3;
  dVar3 = (pTVar1->Scale3D).ZW.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x60 = (pTVar1->Scale3D).ZW.m128d_f64[0];
  *(double *)&__return_storage_ptr__->field_0x68 = dVar3;
  return __return_storage_ptr__;
}

// operator<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_> @ 14791c670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_> * __thiscall
TPairInitializer<USceneComponent_*_&,UE::Math::TTransform<double>_&&>::
operator<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>
          (TPairInitializer<USceneComponent_*_&,UE::Math::TTransform<double>_&&> *this,
          TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_> *__return_storage_ptr__)

{
  TTransform<double> *pTVar1;
  USceneComponent *pUVar2;
  double dVar3;
  
  pTVar1 = this->Value;
  pUVar2 = *this->Key;
  *(USceneComponent **)__return_storage_ptr__ = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  dVar3 = (pTVar1->Rotation).XY.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x10 = (pTVar1->Rotation).XY.m128d_f64[0];
  *(double *)&__return_storage_ptr__->field_0x18 = dVar3;
  dVar3 = (pTVar1->Rotation).ZW.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x20 = (pTVar1->Rotation).ZW.m128d_f64[0];
  *(double *)&__return_storage_ptr__->field_0x28 = dVar3;
  dVar3 = (pTVar1->Translation).XY.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x30 = (pTVar1->Translation).XY.m128d_f64[0];
  *(double *)&__return_storage_ptr__->field_0x38 = dVar3;
  dVar3 = (pTVar1->Translation).ZW.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x40 = (pTVar1->Translation).ZW.m128d_f64[0];
  *(double *)&__return_storage_ptr__->field_0x48 = dVar3;
  dVar3 = (pTVar1->Scale3D).XY.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x50 = (pTVar1->Scale3D).XY.m128d_f64[0];
  *(double *)&__return_storage_ptr__->field_0x58 = dVar3;
  dVar3 = (pTVar1->Scale3D).ZW.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x60 = (pTVar1->Scale3D).ZW.m128d_f64[0];
  *(double *)&__return_storage_ptr__->field_0x68 = dVar3;
  return __return_storage_ptr__;
}

// operator<FGuid,FExternalTextureRegistry::FExternalTextureEntry>_TTuple<FGuid,FExternalTextureRegistry::FExternalTextureEntry> @ 147bab4d0

TTuple<FGuid,FExternalTextureRegistry::FExternalTextureEntry> * __thiscall
TPairInitializer<FGuid_const_&,FExternalTextureRegistry::FExternalTextureEntry_&&>::
operator<FGuid,FExternalTextureRegistry::FExternalTextureEntry>_TTuple<FGuid,FExternalTextureRegistry::FExternalTextureEntry>
          (TPairInitializer<FGuid_const_&,FExternalTextureRegistry::FExternalTextureEntry_&&> *this,
          TTuple<FGuid,FExternalTextureRegistry::FExternalTextureEntry> *__return_storage_ptr__)

{
  FGuid *pFVar1;
  FExternalTextureEntry *pFVar2;
  FRHITexture *this_00;
  FRHIResource *this_01;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  pFVar1 = this->Key;
  pFVar2 = this->Value;
  uVar4 = pFVar1->B;
  uVar5 = pFVar1->C;
  uVar6 = pFVar1->D;
  *(uint *)&__return_storage_ptr__->field_0x0 = pFVar1->A;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar4;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar5;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar6;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  this_00 = (pFVar2->TextureRHI).Reference;
  *(FRHITexture **)&__return_storage_ptr__->field_0x10 = this_00;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  this_01 = (FRHIResource *)(pFVar2->SamplerStateRHI).Reference;
  *(FRHIResource **)&__return_storage_ptr__->field_0x18 = this_01;
  if (this_01 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this_01);
  }
  uVar3 = *(undefined8 *)((longlong)&(pFVar2->CoordinateScaleRotation).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field_0x20 =
       *(undefined8 *)&(pFVar2->CoordinateScaleRotation).field0_0x0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = uVar3;
  uVar3 = *(undefined8 *)((longlong)&(pFVar2->CoordinateOffset).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field_0x30 =
       *(undefined8 *)&(pFVar2->CoordinateOffset).field0_0x0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = uVar3;
  return __return_storage_ptr__;
}

// operator<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>_>_TTuple<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>_> @ 147bab680

TTuple<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>_> * __thiscall
TPairInitializer<FString_&&,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>_const_&>
::
operator<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>_>_TTuple<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>_>
          (TPairInitializer<FString_&&,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>_const_&>
           *this,TTuple<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>_>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  FString *pFVar3;
  TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  FContentComparisonAssetInfo *pFVar5;
  
  pFVar3 = this->Key;
  puVar1 = &__return_storage_ptr__->field_0x10;
  pTVar4 = this->Value;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(FScriptContainerElement **)__return_storage_ptr__ = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x8 = (pFVar3->Data).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0xc = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  *(undefined8 *)puVar1 = 0;
  iVar2 = pTVar4->ArrayNum;
  pFVar5 = (FContentComparisonAssetInfo *)(pTVar4->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x18 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x1c);
    ConstructItems<FContentComparisonAssetInfo,FContentComparisonAssetInfo,int>
              (*(void **)puVar1,pFVar5,iVar2);
  }
  return __return_storage_ptr__;
}

// operator<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>_TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_> @ 147d5e6a0

TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_> * __thiscall
TPairInitializer<FString_const_&&,TArray<FString,TSizedDefaultAllocator<32>_>_const_&>::
operator<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>_TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>
          (TPairInitializer<FString_const_&&,TArray<FString,TSizedDefaultAllocator<32>_>_const_&>
           *this,TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar3 = this->Value;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  puVar1 = &__return_storage_ptr__->field_0x10;
  *(undefined8 *)puVar1 = 0;
  iVar2 = pTVar3->ArrayNum;
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x18 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x1c);
    ConstructItems<FString,FString,int>(*(void **)puVar1,(FString *)pFVar4,iVar2);
  }
  return __return_storage_ptr__;
}

// operator<FHLODInstancingKey,TObjectPtr<UInstancedStaticMeshComponent>_>_TTuple<FHLODInstancingKey,TObjectPtr<UInstancedStaticMeshComponent>_> @ 147e906a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TTuple<FHLODInstancingKey,TObjectPtr<UInstancedStaticMeshComponent>_> * __thiscall
TPairInitializer<FHLODInstancingKey_&,UInstancedStaticMeshComponent_*_&>::
operator<FHLODInstancingKey,TObjectPtr<UInstancedStaticMeshComponent>_>_TTuple<FHLODInstancingKey,TObjectPtr<UInstancedStaticMeshComponent>_>
          (TPairInitializer<FHLODInstancingKey_&,UInstancedStaticMeshComponent_*_&> *this,
          TTuple<FHLODInstancingKey,TObjectPtr<UInstancedStaticMeshComponent>_>
          *__return_storage_ptr__)

{
  FHLODInstancingKey *pFVar1;
  UInstancedStaticMeshComponent **ppUVar2;
  UStaticMesh *pUVar3;
  UMaterialInterface *pUVar4;
  UInstancedStaticMeshComponent *pUVar5;
  
  pFVar1 = this->Key;
  ppUVar2 = this->Value;
  pUVar3 = (pFVar1->StaticMesh).field0_0x0.DebugPtr;
  *(UStaticMesh **)__return_storage_ptr__ = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar4 = (pFVar1->Material).field0_0x0.DebugPtr;
  *(UMaterialInterface **)&__return_storage_ptr__->field_0x8 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pUVar5 = *ppUVar2;
  *(UInstancedStaticMeshComponent **)&__return_storage_ptr__->field_0x10 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UInstancedStaticMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  return __return_storage_ptr__;
}

// operator<FName,FChannelDefinition>_TTuple<FName,FChannelDefinition> @ 148009290

TTuple<FName,FChannelDefinition> * __thiscall
TPairInitializer<FName_const_&,FChannelDefinition_const_&>::
operator<FName,FChannelDefinition>_TTuple<FName,FChannelDefinition>
          (TPairInitializer<FName_const_&,FChannelDefinition_const_&> *this,
          TTuple<FName,FChannelDefinition> *__return_storage_ptr__)

{
  FChannelDefinition *pFVar1;
  UClass *pUVar2;
  uint uVar3;
  byte bVar4;
  
  pFVar1 = this->Value;
  uVar3 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar3;
  uVar3 = (pFVar1->ChannelName).Number;
  *(uint *)&__return_storage_ptr__->field_0x8 = (pFVar1->ChannelName).ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar3;
  uVar3 = (pFVar1->ClassName).Number;
  *(uint *)&__return_storage_ptr__->field_0x10 = (pFVar1->ClassName).ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x14 = uVar3;
  pUVar2 = (pFVar1->ChannelClass).field0_0x0.DebugPtr;
  *(UClass **)&__return_storage_ptr__->field_0x18 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  *(int *)&__return_storage_ptr__->field_0x20 = pFVar1->StaticChannelIndex;
  bVar4 = (__return_storage_ptr__->field_0x24 ^ pFVar1->bTickOnCreate) & 1 ^
          __return_storage_ptr__->field_0x24;
  __return_storage_ptr__->field_0x24 = bVar4;
  bVar4 = (bVar4 ^ pFVar1->field_0x1c) & 2 ^ bVar4;
  __return_storage_ptr__->field_0x24 = bVar4;
  bVar4 = (bVar4 ^ pFVar1->field_0x1c) & 4 ^ bVar4;
  __return_storage_ptr__->field_0x24 = bVar4;
  bVar4 = (bVar4 ^ pFVar1->field_0x1c) & 8 ^ bVar4;
  __return_storage_ptr__->field_0x24 = bVar4;
  __return_storage_ptr__->field_0x24 = (bVar4 ^ pFVar1->field_0x1c) & 0x10 ^ bVar4;
  return __return_storage_ptr__;
}

// operator<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>_>_TTuple<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>_> @ 148230400

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TTuple<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>_> * __thiscall
TPairInitializer<UPrimitiveComponent_*_const_&,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>_const_&>
::
operator<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>_>_TTuple<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>_>
          (TPairInitializer<UPrimitiveComponent_*_const_&,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>_const_&>
           *this,TTuple<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>_>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *_Src;
  
  pTVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(UPrimitiveComponent **)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)puVar1 = 0;
  iVar2 = pTVar3->ArrayNum;
  _Src = (pTVar3->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 << 3);
  }
  return __return_storage_ptr__;
}

// operator<TObjectKey<AActor>,FClusteredActorData>_TTuple<TObjectKey<AActor>,FClusteredActorData> @ 1482306a0

TTuple<TObjectKey<AActor>,FClusteredActorData> * __thiscall
TPairInitializer<TObjectKey<AActor>_&&,FClusteredActorData_const_&>::
operator<TObjectKey<AActor>,FClusteredActorData>_TTuple<TObjectKey<AActor>,FClusteredActorData>
          (TPairInitializer<TObjectKey<AActor>_&&,FClusteredActorData_const_&> *this,
          TTuple<TObjectKey<AActor>,FClusteredActorData> *__return_storage_ptr__)

{
  FClusteredActorData *pFVar1;
  int iVar2;
  
  pFVar1 = this->Value;
  iVar2 = (this->Key->ObjectKey).ObjectSerialNumber;
  *(int *)&__return_storage_ptr__->field_0x0 = (this->Key->ObjectKey).ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = iVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = 0;
  TSet<TObjectKey<UPrimitiveComponent>,DefaultKeyFuncs<TObjectKey<UPrimitiveComponent>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TObjectKey<UPrimitiveComponent>,DefaultKeyFuncs<TObjectKey<UPrimitiveComponent>,0>,FDefaultSetAllocator>
               *)&__return_storage_ptr__->field_0x8,&pFVar1->Components);
  __return_storage_ptr__->field_0x58 = pFVar1->bWasReplicatingMovement;
  return __return_storage_ptr__;
}

// operator<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData>_TTuple<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData> @ 1483d0a20

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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

TTuple<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData> * __thiscall
TPairInitializer<FMaterialPSOPrecacheParams_const_&,FMaterialPSORequestManager::FPrecacheData_const_&>
::
operator<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData>_TTuple<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData>
          (TPairInitializer<FMaterialPSOPrecacheParams_const_&,FMaterialPSORequestManager::FPrecacheData_const_&>
           *this,TTuple<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  FMaterialPSOPrecacheParams *pFVar3;
  FPrecacheData *pFVar4;
  FBaseGraphTask *pFVar5;
  FPSOPrecacheData *pFVar6;
  FMaterial *pFVar7;
  FRHIVertexDeclaration *pFVar8;
  undefined4 uVar9;
  void *pvVar10;
  ForElementType<FPSOPrecacheRequestResult> FVar11;
  
  pFVar3 = this->Key;
  pFVar4 = this->Value;
  uVar9 = *(undefined4 *)&pFVar3->field_0x4;
  pFVar7 = pFVar3->Material;
  *(Type *)&__return_storage_ptr__->field_0x0 = pFVar3->FeatureLevel;
  *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar9;
  *(FMaterial **)&__return_storage_ptr__->field_0x8 = pFVar7;
  pFVar8 = (pFVar3->VertexFactoryData).CustomDefaultVertexDeclaration;
  *(FVertexFactoryType **)&__return_storage_ptr__->field_0x10 =
       (pFVar3->VertexFactoryData).VertexFactoryType;
  *(FRHIVertexDeclaration **)&__return_storage_ptr__->field_0x18 = pFVar8;
  *(FPSOPrecacheParams_u_0 *)&__return_storage_ptr__->field_0x20 =
       (pFVar3->PrecachePSOParams).field0_0x0;
  *(uint *)&__return_storage_ptr__->field_0x28 = pFVar4->RequestID;
  __return_storage_ptr__->field_0x2c = pFVar4->State;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  pFVar5 = (pFVar4->CollectionGraphEvent).Reference;
  *(FBaseGraphTask **)&__return_storage_ptr__->field_0x30 = pFVar5;
  if (pFVar5 != (FBaseGraphTask *)0x0) {
    LOCK();
    *(int *)&pFVar5->field_0x30 = *(int *)&pFVar5->field_0x30 + 1;
    UNLOCK();
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x78 = 0;
  FVar11 = (pFVar4->ActivePSOPrecacheRequests).AllocatorInstance.SecondaryData;
  iVar2 = (pFVar4->ActivePSOPrecacheRequests).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x80 = iVar2;
  if (FVar11 == (ForElementType<FPSOPrecacheRequestResult>)0x0) {
    FVar11 = (ForElementType<FPSOPrecacheRequestResult>)&pFVar4->ActivePSOPrecacheRequests;
  }
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x84 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheRequestResult>_>
              (0x10,8,iVar2,0,
               (ForElementType<FPSOPrecacheRequestResult> *)&__return_storage_ptr__->field_0x38,
               iVar2,(int *)&__return_storage_ptr__->field_0x84);
    pvVar10 = *(void **)&__return_storage_ptr__->field_0x78;
    if (*(void **)&__return_storage_ptr__->field_0x78 == (void *)0x0) {
      pvVar10 = &__return_storage_ptr__->field_0x38;
    }
    ConstructItems<FPSOPrecacheRequestResult,FPSOPrecacheRequestResult,int>
              (pvVar10,(FPSOPrecacheRequestResult *)FVar11,iVar2);
  }
  puVar1 = &__return_storage_ptr__->field_0x90;
  __return_storage_ptr__->field_0x88 = pFVar4->Priority;
  *(undefined8 *)puVar1 = 0;
  iVar2 = (pFVar4->PSOPrecachaData).ArrayNum;
  pFVar6 = (FPSOPrecacheData *)(pFVar4->PSOPrecachaData).AllocatorInstance.Data;
  *(int *)&__return_storage_ptr__->field_0x98 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x9c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x138,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x9c);
    ConstructItems<FPSOPrecacheData,FPSOPrecacheData,int>(*(void **)puVar1,pFVar6,iVar2);
  }
  return __return_storage_ptr__;
}

// operator<TWeakObjectPtr<UObject,FWeakObjectPtr>,FReplayHelper::FExternalDataWrapper>_TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FReplayHelper::FExternalDataWrapper> @ 148431ce0

TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FReplayHelper::FExternalDataWrapper> * __thiscall
TPairInitializer<UObject_*_&,FReplayHelper::FExternalDataWrapper_&&>::
operator<TWeakObjectPtr<UObject,FWeakObjectPtr>,FReplayHelper::FExternalDataWrapper>_TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FReplayHelper::FExternalDataWrapper>
          (TPairInitializer<UObject_*_&,FReplayHelper::FExternalDataWrapper_&&> *this,
          TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FReplayHelper::FExternalDataWrapper>
          *__return_storage_ptr__)

{
  FExternalDataWrapper *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  pFVar1 = this->Value;
  pUVar2 = *this->Key;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  local_res8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)&local_res8);
  *(FNetworkGUID_u_0 *)&__return_storage_ptr__->field_0x8 = (pFVar1->NetGUID).field0_0x0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x10 =
       (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x18 = (pFVar1->Data).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x1c = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  *(int *)&__return_storage_ptr__->field_0x20 = pFVar1->NumBits;
  return __return_storage_ptr__;
}

// operator<FSoftObjectPath,FStreamableManager::FRedirectedPath>_TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath> @ 148767d80

TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath> * __thiscall
TPairInitializer<FSoftObjectPath_const_&,FStreamableManager::FRedirectedPath_&&>::
operator<FSoftObjectPath,FStreamableManager::FRedirectedPath>_TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>
          (TPairInitializer<FSoftObjectPath_const_&,FStreamableManager::FRedirectedPath_&&> *this,
          TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath> *__return_storage_ptr__)

{
  FRedirectedPath *pFVar1;
  UObjectRedirector *pUVar2;
  uint uVar3;
  FNameEntryId FVar4;
  uint uVar5;
  
  pFVar1 = this->Value;
  FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)__return_storage_ptr__,this->Key);
  uVar3 = (pFVar1->NewPath).AssetPath.PackageName.Number;
  FVar4.Value = (pFVar1->NewPath).AssetPath.AssetName.ComparisonIndex.Value;
  uVar5 = (pFVar1->NewPath).AssetPath.AssetName.Number;
  *(uint *)&__return_storage_ptr__->field_0x20 =
       (pFVar1->NewPath).AssetPath.PackageName.ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x24 = uVar3;
  *(uint *)&__return_storage_ptr__->field_0x28 = FVar4.Value;
  *(uint *)&__return_storage_ptr__->field_0x2c = uVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x30 =
       (pFVar1->NewPath).SubPathString.Data.AllocatorInstance.Data;
  (pFVar1->NewPath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x38 = (pFVar1->NewPath).SubPathString.Data.ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x3c = (pFVar1->NewPath).SubPathString.Data.ArrayMax;
  (pFVar1->NewPath).SubPathString.Data.ArrayNum = 0;
  (pFVar1->NewPath).SubPathString.Data.ArrayMax = 0;
  pUVar2 = (pFVar1->LoadedRedirector).field0_0x0.DebugPtr;
  *(UObjectRedirector **)&__return_storage_ptr__->field_0x40 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObjectRedirector *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return __return_storage_ptr__;
}

// operator<FString,FTestConsoleVariable>_TTuple<FString,FTestConsoleVariable> @ 1487f1fd0

TTuple<FString,FTestConsoleVariable> * __thiscall
TPairInitializer<FString_const_&,FTestConsoleVariable_&&>::
operator<FString,FTestConsoleVariable>_TTuple<FString,FTestConsoleVariable>
          (TPairInitializer<FString_const_&,FTestConsoleVariable_&&> *this,
          TTuple<FString,FTestConsoleVariable> *__return_storage_ptr__)

{
  FTestConsoleVariable *pFVar1;
  
  pFVar1 = this->Value;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  __return_storage_ptr__->field_0x10 = pFVar1->bModified;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x18 =
       (pFVar1->ConsoleVariableName).Data.AllocatorInstance.Data;
  (pFVar1->ConsoleVariableName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x20 = (pFVar1->ConsoleVariableName).Data.ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x24 = (pFVar1->ConsoleVariableName).Data.ArrayMax;
  (pFVar1->ConsoleVariableName).Data.ArrayNum = 0;
  (pFVar1->ConsoleVariableName).Data.ArrayMax = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x28 =
       (pFVar1->OriginalValue).Data.AllocatorInstance.Data;
  (pFVar1->OriginalValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x30 = (pFVar1->OriginalValue).Data.ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x34 = (pFVar1->OriginalValue).Data.ArrayMax;
  (pFVar1->OriginalValue).Data.ArrayNum = 0;
  (pFVar1->OriginalValue).Data.ArrayMax = 0;
  pFVar1->bModified = false;
  return __return_storage_ptr__;
}

