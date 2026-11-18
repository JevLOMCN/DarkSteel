// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 7

// StaticClass @ 146c442c0

UClass * __cdecl UDefaultLevelSequenceInstanceData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDefaultLevelSequenceInstanceData.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"DefaultLevelSequenceInstanceData",
               &Z_Registration_Info_UClass_UDefaultLevelSequenceInstanceData.InnerSingleton,
               StaticRegisterNativesUDefaultLevelSequenceInstanceData,0xa0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDefaultLevelSequenceInstanceData>,
               InternalVTableHelperCtorCaller<UDefaultLevelSequenceInstanceData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDefaultLevelSequenceInstanceData.InnerSingleton;
}

// UDefaultLevelSequenceInstanceData @ 146c4e590

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDefaultLevelSequenceInstanceData * __thiscall
UDefaultLevelSequenceInstanceData::UDefaultLevelSequenceInstanceData
          (UDefaultLevelSequenceInstanceData *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this,param_1);
  (this->TransformOriginActor).field0_0x0.DebugPtr = (AActor *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTransformOrigin__;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->TransformOrigin).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->TransformOrigin).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->TransformOrigin).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->TransformOrigin).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->TransformOrigin).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->TransformOrigin).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->TransformOrigin).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->TransformOrigin).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->TransformOrigin).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->TransformOrigin).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->TransformOrigin).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->TransformOrigin).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// ~UDefaultLevelSequenceInstanceData @ 146c4f070

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
UDefaultLevelSequenceInstanceData::~UDefaultLevelSequenceInstanceData
          (UDefaultLevelSequenceInstanceData *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IMovieSceneTransformOrigin__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146c555f0

UClass * __cdecl UDefaultLevelSequenceInstanceData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDefaultLevelSequenceInstanceData.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"DefaultLevelSequenceInstanceData",
               &Z_Registration_Info_UClass_UDefaultLevelSequenceInstanceData.InnerSingleton,
               StaticRegisterNativesUDefaultLevelSequenceInstanceData,0xa0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDefaultLevelSequenceInstanceData>,
               InternalVTableHelperCtorCaller<UDefaultLevelSequenceInstanceData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDefaultLevelSequenceInstanceData.InnerSingleton;
}

// NativeGetTransformOrigin @ 146c57c50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
UDefaultLevelSequenceInstanceData::NativeGetTransformOrigin
          (UDefaultLevelSequenceInstanceData *this,TTransform<double> *__return_storage_ptr__)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TTransform<double> *pTVar6;
  
  if (this->_padding_ == 0) {
    pTVar6 = (TTransform<double> *)&this->_padding_;
  }
  else {
    lVar1 = *(longlong *)(this->_padding_ + 0x1b8);
    if (lVar1 == 0) {
      pTVar6 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar6 = (TTransform<double> *)(lVar1 + 0x1f0);
    }
  }
  dVar2 = (pTVar6->Rotation).XY.m128d_f64[1];
  dVar3 = (pTVar6->Rotation).ZW.m128d_f64[0];
  dVar4 = (pTVar6->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar6->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar2;
  dVar2 = (pTVar6->Translation).XY.m128d_f64[0];
  dVar5 = (pTVar6->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar4;
  dVar3 = (pTVar6->Translation).ZW.m128d_f64[0];
  dVar4 = (pTVar6->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar5;
  dVar2 = (pTVar6->Scale3D).XY.m128d_f64[0];
  dVar5 = (pTVar6->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar4;
  dVar3 = (pTVar6->Scale3D).ZW.m128d_f64[0];
  dVar4 = (pTVar6->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar5;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar4;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUDefaultLevelSequenceInstanceData @ 146c5c540

void __cdecl
UDefaultLevelSequenceInstanceData::StaticRegisterNativesUDefaultLevelSequenceInstanceData(void)

{
  return;
}

// _getUObject @ 146c5e440

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall
UDefaultLevelSequenceInstanceData::_getUObject(UDefaultLevelSequenceInstanceData *this)

{
  return (UObject *)(this[-1].TransformOrigin.Translation.ZW.m128d_f64 + 1);
}

