// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 6

// StaticClass @ 14e031b60

UClass * __cdecl UGroomCreateBindingOptions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomCreateBindingOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomCreateBindingOptions",
               &Z_Registration_Info_UClass_UGroomCreateBindingOptions.InnerSingleton,
               StaticRegisterNativesUGroomCreateBindingOptions,0x68,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"EditorPerProjectUserSettings",InternalConstructor<UGroomCreateBindingOptions>,
               InternalVTableHelperCtorCaller<UGroomCreateBindingOptions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomCreateBindingOptions.InnerSingleton;
}

// UGroomCreateBindingOptions @ 14e03dc80

UGroomCreateBindingOptions * __thiscall
UGroomCreateBindingOptions::UGroomCreateBindingOptions
          (UGroomCreateBindingOptions *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGroomCreateBindingOptions__6B_;
  (this->GroomAsset).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SourceSkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  (this->TargetSkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  (this->SourceGeometryCache).field0_0x0.DebugPtr = (UGeometryCache *)0x0;
  (this->TargetGeometryCache).field0_0x0.DebugPtr = (UGeometryCache *)0x0;
  (this->TargetBindingAttribute).ComparisonIndex = 0;
  (this->TargetBindingAttribute).Number = 0;
  return this;
}

// UGroomCreateBindingOptions @ 14e03dcd0

UGroomCreateBindingOptions * __thiscall
UGroomCreateBindingOptions::UGroomCreateBindingOptions
          (UGroomCreateBindingOptions *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGroomCreateBindingOptions__6B_;
  (this->GroomAsset).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SourceSkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  (this->TargetSkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  (this->SourceGeometryCache).field0_0x0.DebugPtr = (UGeometryCache *)0x0;
  (this->TargetGeometryCache).field0_0x0.DebugPtr = (UGeometryCache *)0x0;
  (this->TargetBindingAttribute).ComparisonIndex = 0;
  (this->TargetBindingAttribute).Number = 0;
  this->GroomBindingType = SkeletalMesh;
  this->NumInterpolationPoints = 100;
  this->MatchingSection = 0;
  return this;
}

// ~UGroomCreateBindingOptions @ 14e03ee30

void __thiscall
UGroomCreateBindingOptions::~UGroomCreateBindingOptions(UGroomCreateBindingOptions *this)

{
  this->_padding_ = (longlong)&___7UGroomCreateBindingOptions__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e052000

UClass * __cdecl UGroomCreateBindingOptions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomCreateBindingOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomCreateBindingOptions",
               &Z_Registration_Info_UClass_UGroomCreateBindingOptions.InnerSingleton,
               StaticRegisterNativesUGroomCreateBindingOptions,0x68,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"EditorPerProjectUserSettings",InternalConstructor<UGroomCreateBindingOptions>,
               InternalVTableHelperCtorCaller<UGroomCreateBindingOptions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomCreateBindingOptions.InnerSingleton;
}

// StaticRegisterNativesUGroomCreateBindingOptions @ 14e064c70

void __cdecl UGroomCreateBindingOptions::StaticRegisterNativesUGroomCreateBindingOptions(void)

{
  return;
}

