// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 6

// StaticClass @ 145ef8260

UClass * __cdecl ULandscapeWeightmapUsage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeWeightmapUsage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeWeightmapUsage",
               &Z_Registration_Info_UClass_ULandscapeWeightmapUsage.InnerSingleton,
               StaticRegisterNativesULandscapeWeightmapUsage,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULandscapeWeightmapUsage>,
               InternalVTableHelperCtorCaller<ULandscapeWeightmapUsage>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeWeightmapUsage.InnerSingleton;
}

// ULandscapeWeightmapUsage @ 145f03130

ULandscapeWeightmapUsage * __thiscall
ULandscapeWeightmapUsage::ULandscapeWeightmapUsage
          (ULandscapeWeightmapUsage *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULandscapeWeightmapUsage__6B_;
  this->ChannelUsage[0].field0_0x0.DebugPtr = (ULandscapeComponent *)0x0;
  this->ChannelUsage[1].field0_0x0 = (TObjectPtr<ULandscapeComponent>_u_0)0x0;
  this->ChannelUsage[2].field0_0x0 = (TObjectPtr<ULandscapeComponent>_u_0)0x0;
  this->ChannelUsage[3].field0_0x0 = (TObjectPtr<ULandscapeComponent>_u_0)0x0;
  (this->LayerGuid).A = 0;
  (this->LayerGuid).B = 0;
  (this->LayerGuid).C = 0;
  (this->LayerGuid).D = 0;
  return this;
}

// ULandscapeWeightmapUsage @ 145f03180

ULandscapeWeightmapUsage * __thiscall
ULandscapeWeightmapUsage::ULandscapeWeightmapUsage
          (ULandscapeWeightmapUsage *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULandscapeWeightmapUsage__6B_;
  (this->LayerGuid).A = 0;
  (this->LayerGuid).B = 0;
  (this->LayerGuid).C = 0;
  (this->LayerGuid).D = 0;
  this->ChannelUsage[0].field0_0x0.DebugPtr = (ULandscapeComponent *)0x0;
  this->ChannelUsage[1].field0_0x0 = (TObjectPtr<ULandscapeComponent>_u_0)0x0;
  this->ChannelUsage[2].field0_0x0 = (TObjectPtr<ULandscapeComponent>_u_0)0x0;
  this->ChannelUsage[3].field0_0x0 = (TObjectPtr<ULandscapeComponent>_u_0)0x0;
  return this;
}

// ~ULandscapeWeightmapUsage @ 145f04300

void __thiscall ULandscapeWeightmapUsage::~ULandscapeWeightmapUsage(ULandscapeWeightmapUsage *this)

{
  this->_padding_ = (longlong)&___7ULandscapeWeightmapUsage__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 145f12ba0

UClass * __cdecl ULandscapeWeightmapUsage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeWeightmapUsage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeWeightmapUsage",
               &Z_Registration_Info_UClass_ULandscapeWeightmapUsage.InnerSingleton,
               StaticRegisterNativesULandscapeWeightmapUsage,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULandscapeWeightmapUsage>,
               InternalVTableHelperCtorCaller<ULandscapeWeightmapUsage>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeWeightmapUsage.InnerSingleton;
}

// StaticRegisterNativesULandscapeWeightmapUsage @ 145f1ef70

void __cdecl ULandscapeWeightmapUsage::StaticRegisterNativesULandscapeWeightmapUsage(void)

{
  return;
}

