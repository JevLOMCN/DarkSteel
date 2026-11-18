// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc95dd0

UClass * __cdecl UOffsetWeightMapSetProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOffsetWeightMapSetProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"OffsetWeightMapSetProperties",
               &Z_Registration_Info_UClass_UOffsetWeightMapSetProperties.InnerSingleton,
               StaticRegisterNativesUOffsetWeightMapSetProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UOffsetWeightMapSetProperties>,
               InternalVTableHelperCtorCaller<UOffsetWeightMapSetProperties>,local_res8,
               UWeightMapSetProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOffsetWeightMapSetProperties.InnerSingleton;
}

// UOffsetWeightMapSetProperties @ 14ccbf320

UOffsetWeightMapSetProperties * __thiscall
UOffsetWeightMapSetProperties::UOffsetWeightMapSetProperties
          (UOffsetWeightMapSetProperties *this,FVTableHelper *param_1)

{
  UWeightMapSetProperties::UWeightMapSetProperties((UWeightMapSetProperties *)this,param_1);
  this->MinDistance = 1.0;
  this->_padding_ = (longlong)&___7UOffsetWeightMapSetProperties__6B_;
  return this;
}

// UOffsetWeightMapSetProperties @ 14ccbf360

UOffsetWeightMapSetProperties * __thiscall
UOffsetWeightMapSetProperties::UOffsetWeightMapSetProperties
          (UOffsetWeightMapSetProperties *this,FObjectInitializer *param_1)

{
  UWeightMapSetProperties::UWeightMapSetProperties((UWeightMapSetProperties *)this,param_1);
  this->MinDistance = 1.0;
  this->_padding_ = (longlong)&___7UOffsetWeightMapSetProperties__6B_;
  return this;
}

// ~UOffsetWeightMapSetProperties @ 14ccc4a70

void __thiscall
UOffsetWeightMapSetProperties::~UOffsetWeightMapSetProperties(UOffsetWeightMapSetProperties *this)

{
  this->_padding_ = (longlong)&___7UOffsetWeightMapSetProperties__6B_;
  UWeightMapSetProperties::~UWeightMapSetProperties((UWeightMapSetProperties *)this);
  return;
}

// GetPrivateStaticClass @ 14cd01030

UClass * __cdecl UOffsetWeightMapSetProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOffsetWeightMapSetProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"OffsetWeightMapSetProperties",
               &Z_Registration_Info_UClass_UOffsetWeightMapSetProperties.InnerSingleton,
               StaticRegisterNativesUOffsetWeightMapSetProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UOffsetWeightMapSetProperties>,
               InternalVTableHelperCtorCaller<UOffsetWeightMapSetProperties>,local_res8,
               UWeightMapSetProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOffsetWeightMapSetProperties.InnerSingleton;
}

// StaticRegisterNativesUOffsetWeightMapSetProperties @ 14cd2f260

void __cdecl UOffsetWeightMapSetProperties::StaticRegisterNativesUOffsetWeightMapSetProperties(void)

{
  return;
}

