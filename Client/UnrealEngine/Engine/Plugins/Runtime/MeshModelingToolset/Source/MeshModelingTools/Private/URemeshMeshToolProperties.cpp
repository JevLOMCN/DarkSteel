// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc8f5e0

UClass * __cdecl URemeshMeshToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URemeshMeshToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RemeshMeshToolProperties",
               &Z_Registration_Info_UClass_URemeshMeshToolProperties.InnerSingleton,
               StaticRegisterNativesURemeshMeshToolProperties,0xe8,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<URemeshMeshToolProperties>,
               InternalVTableHelperCtorCaller<URemeshMeshToolProperties>,local_res8,
               URemeshProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URemeshMeshToolProperties.InnerSingleton;
}

// URemeshMeshToolProperties @ 14ccbf880

URemeshMeshToolProperties * __thiscall
URemeshMeshToolProperties::URemeshMeshToolProperties
          (URemeshMeshToolProperties *this,FVTableHelper *param_1)

{
  URemeshProperties::URemeshProperties((URemeshProperties *)this,param_1);
  this->bShowGroupColors = false;
  this->_padding_ = (longlong)&___7URemeshMeshToolProperties__6B_;
  return this;
}

// URemeshMeshToolProperties @ 14ccbf8b0

URemeshMeshToolProperties * __thiscall
URemeshMeshToolProperties::URemeshMeshToolProperties(URemeshMeshToolProperties *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  URemeshProperties::URemeshProperties((URemeshProperties *)this,pFVar1);
  this->TargetTriangleCount = 5000;
  this->_padding_ = (longlong)&___7URemeshMeshToolProperties__6B_;
  *(undefined4 *)&this->_padding_ = 0x3e800000;
  this->RemeshIterations = 0x14;
  this->MaxRemeshIterations = 0x14;
  this->ExtraProjectionIterations = 5;
  this->SmoothingType = MeanValue;
  this->bDiscardAttributes = false;
  this->bShowGroupColors = false;
  this->RemeshType = Standard;
  *(undefined1 *)&this->_padding_ = 1;
  this->TargetEdgeLength = 5.0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 1;
  this->bReproject = true;
  this->bReprojectConstraints = false;
  this->BoundaryCornerAngleThreshold = 45.0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x101;
  this->bUseTargetEdgeLength = false;
  return this;
}

// ~URemeshMeshToolProperties @ 14ccc4c90

void __thiscall
URemeshMeshToolProperties::~URemeshMeshToolProperties(URemeshMeshToolProperties *this)

{
  this->_padding_ = (longlong)&___7URemeshMeshToolProperties__6B_;
  URemeshProperties::~URemeshProperties((URemeshProperties *)this);
  return;
}

// GetPrivateStaticClass @ 14cd01630

UClass * __cdecl URemeshMeshToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URemeshMeshToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RemeshMeshToolProperties",
               &Z_Registration_Info_UClass_URemeshMeshToolProperties.InnerSingleton,
               StaticRegisterNativesURemeshMeshToolProperties,0xe8,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<URemeshMeshToolProperties>,
               InternalVTableHelperCtorCaller<URemeshMeshToolProperties>,local_res8,
               URemeshProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URemeshMeshToolProperties.InnerSingleton;
}

// StaticRegisterNativesURemeshMeshToolProperties @ 14cd2f2e0

void __cdecl URemeshMeshToolProperties::StaticRegisterNativesURemeshMeshToolProperties(void)

{
  return;
}

