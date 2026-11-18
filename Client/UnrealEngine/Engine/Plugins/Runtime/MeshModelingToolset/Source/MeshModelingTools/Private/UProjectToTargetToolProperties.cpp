// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 5

// StaticClass @ 14cc8fdd0

UClass * __cdecl UProjectToTargetToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProjectToTargetToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProjectToTargetToolProperties",
               &Z_Registration_Info_UClass_UProjectToTargetToolProperties.InnerSingleton,
               StaticRegisterNativesUProjectToTargetToolProperties,0x108,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProjectToTargetToolProperties>,
               InternalVTableHelperCtorCaller<UProjectToTargetToolProperties>,local_res8,
               URemeshMeshToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProjectToTargetToolProperties.InnerSingleton;
}

// UProjectToTargetToolProperties @ 14ccbf460

UProjectToTargetToolProperties * __thiscall
UProjectToTargetToolProperties::UProjectToTargetToolProperties
          (UProjectToTargetToolProperties *this,FVTableHelper *param_1)

{
  URemeshProperties::URemeshProperties((URemeshProperties *)this,param_1);
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 0;
  this->_padding_ = (longlong)&___7UProjectToTargetToolProperties__6B_;
  this->bWorldSpace = true;
  this->bParallel = true;
  this->FaceProjectionPassesPerRemeshIteration = 1;
  this->SurfaceProjectionSpeed = 0.2;
  this->NormalAlignmentSpeed = 0.2;
  this->bSmoothInFillAreas = true;
  this->FillAreaDistanceMultiplier = 0.25;
  this->FillAreaSmoothMultiplier = 0.25;
  return this;
}

// ~UProjectToTargetToolProperties @ 14ccc4b30

void __thiscall
UProjectToTargetToolProperties::~UProjectToTargetToolProperties
          (UProjectToTargetToolProperties *this)

{
  this->_padding_ = (longlong)&___7URemeshMeshToolProperties__6B_;
  URemeshProperties::~URemeshProperties((URemeshProperties *)this);
  return;
}

// GetPrivateStaticClass @ 14cd01270

UClass * __cdecl UProjectToTargetToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProjectToTargetToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProjectToTargetToolProperties",
               &Z_Registration_Info_UClass_UProjectToTargetToolProperties.InnerSingleton,
               StaticRegisterNativesUProjectToTargetToolProperties,0x108,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProjectToTargetToolProperties>,
               InternalVTableHelperCtorCaller<UProjectToTargetToolProperties>,local_res8,
               URemeshMeshToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProjectToTargetToolProperties.InnerSingleton;
}

// StaticRegisterNativesUProjectToTargetToolProperties @ 14cd2f290

void __cdecl
UProjectToTargetToolProperties::StaticRegisterNativesUProjectToTargetToolProperties(void)

{
  return;
}

