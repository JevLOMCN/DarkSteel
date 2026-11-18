// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 5

// StaticClass @ 146c15430

UClass * __cdecl UMediaTimeStampInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaTimeStampInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaTimeStampInfo",
               &Z_Registration_Info_UClass_UMediaTimeStampInfo.InnerSingleton,
               StaticRegisterNativesUMediaTimeStampInfo,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMediaTimeStampInfo>,
               InternalVTableHelperCtorCaller<UMediaTimeStampInfo>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaTimeStampInfo.InnerSingleton;
}

// UMediaTimeStampInfo @ 146c1dc70

UMediaTimeStampInfo * __thiscall
UMediaTimeStampInfo::UMediaTimeStampInfo(UMediaTimeStampInfo *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMediaTimeStampInfo__6B_;
  (this->Time).Ticks = 0;
  return this;
}

// ~UMediaTimeStampInfo @ 146c1ed80

void __thiscall UMediaTimeStampInfo::~UMediaTimeStampInfo(UMediaTimeStampInfo *this)

{
  this->_padding_ = (longlong)&___7UMediaTimeStampInfo__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146c2cf80

UClass * __cdecl UMediaTimeStampInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaTimeStampInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaTimeStampInfo",
               &Z_Registration_Info_UClass_UMediaTimeStampInfo.InnerSingleton,
               StaticRegisterNativesUMediaTimeStampInfo,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMediaTimeStampInfo>,
               InternalVTableHelperCtorCaller<UMediaTimeStampInfo>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaTimeStampInfo.InnerSingleton;
}

// StaticRegisterNativesUMediaTimeStampInfo @ 146c38020

void __cdecl UMediaTimeStampInfo::StaticRegisterNativesUMediaTimeStampInfo(void)

{
  return;
}

