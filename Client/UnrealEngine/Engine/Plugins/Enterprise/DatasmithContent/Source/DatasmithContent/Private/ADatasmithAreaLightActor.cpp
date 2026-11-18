// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 6

// StaticClass @ 14e2edbd0

UClass * __cdecl ADatasmithAreaLightActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADatasmithAreaLightActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithAreaLightActor",
               &Z_Registration_Info_UClass_ADatasmithAreaLightActor.InnerSingleton,
               StaticRegisterNativesADatasmithAreaLightActor,0x338,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADatasmithAreaLightActor>,
               InternalVTableHelperCtorCaller<ADatasmithAreaLightActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADatasmithAreaLightActor.InnerSingleton;
}

// ADatasmithAreaLightActor @ 14e2f39f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADatasmithAreaLightActor * __thiscall
ADatasmithAreaLightActor::ADatasmithAreaLightActor
          (ADatasmithAreaLightActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADatasmithAreaLightActor__6B_;
  (this->IESTexture).field0_0x0.DebugPtr = (UTextureLightProfile *)0x0;
  return this;
}

// ADatasmithAreaLightActor @ 14e2f3a30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADatasmithAreaLightActor * __thiscall
ADatasmithAreaLightActor::ADatasmithAreaLightActor(ADatasmithAreaLightActor *this)

{
  FLinearColor FVar1;
  
  AActor::AActor((AActor *)this);
  this->LightShape = Rectangle;
  this->_padding_ = (longlong)&___7ADatasmithAreaLightActor__6B_;
  (this->Dimensions).field0_0x0._s_0.X = 100.0;
  (this->Dimensions).field0_0x0._s_0.Y = 100.0;
  this->Mobility = '\0';
  this->LightType = Point;
  this->Intensity = 10.0;
  this->IntensityUnits = Candelas;
  FVar1 = FLinearColor::White;
  this->SourceRadius = 0.0;
  this->SourceLength = 0.0;
  this->Temperature = 6500.0;
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->IESTexture).field0_0x0.DebugPtr = (UTextureLightProfile *)0x0;
  (this->Rotation).Pitch = 0.0;
  (this->Rotation).Yaw = 0.0;
  (this->Rotation).Roll = 0.0;
  this->AttenuationRadius = 1000.0;
  this->SpotlightInnerAngle = 1.0;
  this->SpotlightOuterAngle = 44.0;
  return this;
}

// ~ADatasmithAreaLightActor @ 14e2f5c50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADatasmithAreaLightActor::~ADatasmithAreaLightActor(ADatasmithAreaLightActor *this)

{
  this->_padding_ = (longlong)&___7ADatasmithAreaLightActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14e2fba10

UClass * __cdecl ADatasmithAreaLightActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADatasmithAreaLightActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithAreaLightActor",
               &Z_Registration_Info_UClass_ADatasmithAreaLightActor.InnerSingleton,
               StaticRegisterNativesADatasmithAreaLightActor,0x338,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADatasmithAreaLightActor>,
               InternalVTableHelperCtorCaller<ADatasmithAreaLightActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADatasmithAreaLightActor.InnerSingleton;
}

// StaticRegisterNativesADatasmithAreaLightActor @ 14e2febd0

void __cdecl ADatasmithAreaLightActor::StaticRegisterNativesADatasmithAreaLightActor(void)

{
  return;
}

