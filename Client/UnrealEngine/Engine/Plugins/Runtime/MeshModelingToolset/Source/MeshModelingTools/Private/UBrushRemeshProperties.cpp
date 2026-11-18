// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cbff230

UClass * __cdecl UBrushRemeshProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrushRemeshProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"BrushRemeshProperties",
               &Z_Registration_Info_UClass_UBrushRemeshProperties.InnerSingleton,
               StaticRegisterNativesUBrushRemeshProperties,0xd0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UBrushRemeshProperties>,
               InternalVTableHelperCtorCaller<UBrushRemeshProperties>,local_res8,
               URemeshProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrushRemeshProperties.InnerSingleton;
}

// UBrushRemeshProperties @ 14cc1c1d0

UBrushRemeshProperties * __thiscall
UBrushRemeshProperties::UBrushRemeshProperties(UBrushRemeshProperties *this,FVTableHelper *param_1)

{
  URemeshProperties::URemeshProperties((URemeshProperties *)this,param_1);
  this->bEnableRemeshing = true;
  this->_padding_ = (longlong)&___7UBrushRemeshProperties__6B_;
  this->TriangleSize = 0;
  this->PreserveDetail = 0;
  this->Iterations = 5;
  return this;
}

// UBrushRemeshProperties @ 14cc1c220

UBrushRemeshProperties * __thiscall
UBrushRemeshProperties::UBrushRemeshProperties
          (UBrushRemeshProperties *this,FObjectInitializer *param_1)

{
  URemeshProperties::URemeshProperties((URemeshProperties *)this,param_1);
  this->bEnableRemeshing = true;
  this->_padding_ = (longlong)&___7UBrushRemeshProperties__6B_;
  this->TriangleSize = 0;
  this->PreserveDetail = 0;
  this->Iterations = 5;
  return this;
}

// ~UBrushRemeshProperties @ 14cc22490

void __thiscall UBrushRemeshProperties::~UBrushRemeshProperties(UBrushRemeshProperties *this)

{
  this->_padding_ = (longlong)&___7UBrushRemeshProperties__6B_;
  URemeshProperties::~URemeshProperties((URemeshProperties *)this);
  return;
}

// GetPrivateStaticClass @ 14cc5b870

UClass * __cdecl UBrushRemeshProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrushRemeshProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"BrushRemeshProperties",
               &Z_Registration_Info_UClass_UBrushRemeshProperties.InnerSingleton,
               StaticRegisterNativesUBrushRemeshProperties,0xd0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UBrushRemeshProperties>,
               InternalVTableHelperCtorCaller<UBrushRemeshProperties>,local_res8,
               URemeshProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrushRemeshProperties.InnerSingleton;
}

// StaticRegisterNativesUBrushRemeshProperties @ 14cc82280

void __cdecl UBrushRemeshProperties::StaticRegisterNativesUBrushRemeshProperties(void)

{
  return;
}

