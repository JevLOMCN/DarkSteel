// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 148997440

UClass * __cdecl ARuntimeVirtualTextureVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ARuntimeVirtualTextureVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimeVirtualTextureVolume",
               &Z_Registration_Info_UClass_ARuntimeVirtualTextureVolume.InnerSingleton,
               StaticRegisterNativesARuntimeVirtualTextureVolume,0x2c8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ARuntimeVirtualTextureVolume>,
               InternalVTableHelperCtorCaller<ARuntimeVirtualTextureVolume>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ARuntimeVirtualTextureVolume.InnerSingleton;
}

// ARuntimeVirtualTextureVolume @ 1489b2fd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ARuntimeVirtualTextureVolume * __thiscall
ARuntimeVirtualTextureVolume::ARuntimeVirtualTextureVolume
          (ARuntimeVirtualTextureVolume *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ARuntimeVirtualTextureVolume__6B_;
  (this->VirtualTextureComponent).field0_0x0.DebugPtr = (URuntimeVirtualTextureComponent *)0x0;
  return this;
}

// ARuntimeVirtualTextureVolume @ 1489b3010

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ARuntimeVirtualTextureVolume * __thiscall
ARuntimeVirtualTextureVolume::ARuntimeVirtualTextureVolume
          (ARuntimeVirtualTextureVolume *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  URuntimeVirtualTextureComponent *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ARuntimeVirtualTextureVolume__6B_;
  (this->VirtualTextureComponent).field0_0x0.DebugPtr = (URuntimeVirtualTextureComponent *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"VirtualTextureComponent");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_URuntimeVirtualTextureComponent_NoRegister();
  pUVar4 = (URuntimeVirtualTextureComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (URuntimeVirtualTextureComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->VirtualTextureComponent).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (URuntimeVirtualTextureComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->VirtualTextureComponent).field0_0x0;
  return this;
}

// ~ARuntimeVirtualTextureVolume @ 1489b9130

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
ARuntimeVirtualTextureVolume::~ARuntimeVirtualTextureVolume(ARuntimeVirtualTextureVolume *this)

{
  this->_padding_ = (longlong)&___7ARuntimeVirtualTextureVolume__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 1489eb420

UClass * __cdecl ARuntimeVirtualTextureVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ARuntimeVirtualTextureVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimeVirtualTextureVolume",
               &Z_Registration_Info_UClass_ARuntimeVirtualTextureVolume.InnerSingleton,
               StaticRegisterNativesARuntimeVirtualTextureVolume,0x2c8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ARuntimeVirtualTextureVolume>,
               InternalVTableHelperCtorCaller<ARuntimeVirtualTextureVolume>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ARuntimeVirtualTextureVolume.InnerSingleton;
}

// IsLevelBoundsRelevant @ 1489f8d50

bool __thiscall
ARuntimeVirtualTextureVolume::IsLevelBoundsRelevant(ARuntimeVirtualTextureVolume *this)

{
  return false;
}

// NeedsLoadForServer @ 1489fd7f0

bool __thiscall ARuntimeVirtualTextureVolume::NeedsLoadForServer(ARuntimeVirtualTextureVolume *this)

{
  return false;
}

// Serialize @ 148a10f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
ARuntimeVirtualTextureVolume::Serialize(ARuntimeVirtualTextureVolume *this,FArchive *param_1)

{
  URuntimeVirtualTextureComponent *this_00;
  int iVar1;
  TQuat<double> *pTVar2;
  TTransform<double> *pTVar3;
  undefined1 auStack_1a8 [32];
  TRotator<double> local_178;
  TQuat<double> local_158;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  AActor::Serialize((AActor *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0x26) {
      local_178.Roll = 0.0;
      local_178.Pitch = 0.0;
      local_178.Yaw = 0.0;
      pTVar2 = UE::Math::TRotator<double>::Quaternion(&local_178,&local_158);
      this_00 = (this->VirtualTextureComponent).field0_0x0.DebugPtr;
      local_d8.Rotation.XY.m128d_f64[0] = pTVar2->X;
      local_d8.Rotation.XY.m128d_f64[1] = pTVar2->Y;
      local_d8.Rotation.ZW.m128d_f64[0] = pTVar2->Z;
      local_d8.Rotation.ZW.m128d_f64[1] = pTVar2->W;
      local_d8.Translation.XY.m128d_f64[0] = ___xmm_bfe0000000000000bfe0000000000000;
      local_d8.Translation.XY.m128d_f64[1] = _UNK_150689738;
      local_d8.Translation.ZW.m128d_f64[0] = ___xmm_0000000000000000bff0000000000000;
      local_d8.Translation.ZW.m128d_f64[1] = _UNK_15076ad98;
      local_d8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
      local_d8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
      local_d8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000004000000000000000;
      local_d8.Scale3D.ZW.m128d_f64[1] = _UNK_15076ace8;
      pTVar3 = USceneComponent::GetRelativeTransform((USceneComponent *)this_00,&local_78);
      local_138.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_138.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_138.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_138.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_138.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_138.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_138.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_138.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_138.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_138.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_138.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_138.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(&local_138,&local_d8,pTVar3);
      USceneComponent::SetRelativeTransform
                ((USceneComponent *)this_00,&local_138,false,(FHitResult *)0x0,None);
    }
  }
  return;
}

// Serialize @ 148a11100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
ARuntimeVirtualTextureVolume::Serialize
          (ARuntimeVirtualTextureVolume *this,FStructuredArchiveRecord param_1)

{
  URuntimeVirtualTextureComponent *this_00;
  int iVar1;
  FArchiveState *this_01;
  TQuat<double> *pTVar2;
  TTransform<double> *pTVar3;
  undefined1 auStack_1a8 [32];
  FSlotBase local_178;
  TRotator<double> local_170;
  TQuat<double> local_158;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_178.StructuredArchive = (FStructuredArchive *)param_1;
  this_01 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_178);
  AActor::Serialize((AActor *)this,(FArchive *)this_01);
  (**(code **)(this_01->_padding_ + 0x230))(this_01,&FFortniteMainBranchObjectVersion::GUID);
  if (this_01->ArIsLoading != 0) {
    iVar1 = FArchiveState::CustomVer(this_01,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0x26) {
      local_170.Roll = 0.0;
      local_170.Pitch = 0.0;
      local_170.Yaw = 0.0;
      pTVar2 = UE::Math::TRotator<double>::Quaternion(&local_170,&local_158);
      this_00 = (this->VirtualTextureComponent).field0_0x0.DebugPtr;
      local_d8.Rotation.XY.m128d_f64[0] = pTVar2->X;
      local_d8.Rotation.XY.m128d_f64[1] = pTVar2->Y;
      local_d8.Rotation.ZW.m128d_f64[0] = pTVar2->Z;
      local_d8.Rotation.ZW.m128d_f64[1] = pTVar2->W;
      local_d8.Translation.XY.m128d_f64[0] = ___xmm_bfe0000000000000bfe0000000000000;
      local_d8.Translation.XY.m128d_f64[1] = _UNK_150689738;
      local_d8.Translation.ZW.m128d_f64[0] = ___xmm_0000000000000000bff0000000000000;
      local_d8.Translation.ZW.m128d_f64[1] = _UNK_15076ad98;
      local_d8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
      local_d8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
      local_d8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000004000000000000000;
      local_d8.Scale3D.ZW.m128d_f64[1] = _UNK_15076ace8;
      pTVar3 = USceneComponent::GetRelativeTransform((USceneComponent *)this_00,&local_78);
      local_138.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_138.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_138.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_138.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_138.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_138.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_138.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_138.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_138.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_138.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_138.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_138.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(&local_138,&local_d8,pTVar3);
      USceneComponent::SetRelativeTransform
                ((USceneComponent *)this_00,&local_138,false,(FHitResult *)0x0,None);
    }
  }
  return;
}

// StaticRegisterNativesARuntimeVirtualTextureVolume @ 148a18710

void __cdecl ARuntimeVirtualTextureVolume::StaticRegisterNativesARuntimeVirtualTextureVolume(void)

{
  return;
}

