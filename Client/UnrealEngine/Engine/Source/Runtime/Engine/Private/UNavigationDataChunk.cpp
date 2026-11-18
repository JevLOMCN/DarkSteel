// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// UNavigationDataChunk @ 14737cc30

UNavigationDataChunk * __thiscall
UNavigationDataChunk::UNavigationDataChunk(UNavigationDataChunk *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNavigationDataChunk__6B_;
  (this->NavigationDataName).ComparisonIndex = 0;
  (this->NavigationDataName).Number = 0;
  return this;
}

// UNavigationDataChunk @ 14737cc60

UNavigationDataChunk * __thiscall
UNavigationDataChunk::UNavigationDataChunk(UNavigationDataChunk *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNavigationDataChunk__6B_;
  (this->NavigationDataName).ComparisonIndex = 0;
  (this->NavigationDataName).Number = 0;
  return this;
}

// ~UNavigationDataChunk @ 14737db80

void __thiscall UNavigationDataChunk::~UNavigationDataChunk(UNavigationDataChunk *this)

{
  this->_padding_ = (longlong)&___7UNavigationDataChunk__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1473a0b50

UClass * __cdecl UNavigationDataChunk::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationDataChunk.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavigationDataChunk",
               &Z_Registration_Info_UClass_UNavigationDataChunk.InnerSingleton,
               StaticRegisterNativesUNavigationDataChunk,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavigationDataChunk>,
               InternalVTableHelperCtorCaller<UNavigationDataChunk>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationDataChunk.InnerSingleton;
}

// StaticRegisterNativesUNavigationDataChunk @ 1473b8960

void __cdecl UNavigationDataChunk::StaticRegisterNativesUNavigationDataChunk(void)

{
  return;
}

