// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc8f520

UClass * __cdecl URemoveOccludedTrianglesAdvancedProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URemoveOccludedTrianglesAdvancedProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RemoveOccludedTrianglesAdvancedProperties",
               &Z_Registration_Info_UClass_URemoveOccludedTrianglesAdvancedProperties.InnerSingleton
               ,StaticRegisterNativesURemoveOccludedTrianglesAdvancedProperties,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<URemoveOccludedTrianglesAdvancedProperties>,
               InternalVTableHelperCtorCaller<URemoveOccludedTrianglesAdvancedProperties>,local_res8
               ,UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URemoveOccludedTrianglesAdvancedProperties.InnerSingleton;
}

// URemoveOccludedTrianglesAdvancedProperties @ 14ccbf970

URemoveOccludedTrianglesAdvancedProperties * __thiscall
URemoveOccludedTrianglesAdvancedProperties::URemoveOccludedTrianglesAdvancedProperties
          (URemoveOccludedTrianglesAdvancedProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7URemoveOccludedTrianglesAdvancedProperties__6B_;
  this->NormalOffset = 1e-08;
  return this;
}

// URemoveOccludedTrianglesAdvancedProperties @ 14ccbf9b0

URemoveOccludedTrianglesAdvancedProperties * __thiscall
URemoveOccludedTrianglesAdvancedProperties::URemoveOccludedTrianglesAdvancedProperties
          (URemoveOccludedTrianglesAdvancedProperties *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,pFVar1);
  this->_padding_ = (longlong)&___7URemoveOccludedTrianglesAdvancedProperties__6B_;
  this->NormalOffset = 1e-08;
  return this;
}

// ~URemoveOccludedTrianglesAdvancedProperties @ 14ccc4cb0

void __thiscall
URemoveOccludedTrianglesAdvancedProperties::~URemoveOccludedTrianglesAdvancedProperties
          (URemoveOccludedTrianglesAdvancedProperties *this)

{
  this->_padding_ = (longlong)&___7URemoveOccludedTrianglesAdvancedProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd016f0

UClass * __cdecl URemoveOccludedTrianglesAdvancedProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URemoveOccludedTrianglesAdvancedProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RemoveOccludedTrianglesAdvancedProperties",
               &Z_Registration_Info_UClass_URemoveOccludedTrianglesAdvancedProperties.InnerSingleton
               ,StaticRegisterNativesURemoveOccludedTrianglesAdvancedProperties,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<URemoveOccludedTrianglesAdvancedProperties>,
               InternalVTableHelperCtorCaller<URemoveOccludedTrianglesAdvancedProperties>,local_res8
               ,UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URemoveOccludedTrianglesAdvancedProperties.InnerSingleton;
}

// StaticRegisterNativesURemoveOccludedTrianglesAdvancedProperties @ 14cd2f2f0

void __cdecl
URemoveOccludedTrianglesAdvancedProperties::
StaticRegisterNativesURemoveOccludedTrianglesAdvancedProperties(void)

{
  return;
}

