// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cd437d0

UClass * __cdecl USmoothMeshToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USmoothMeshToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SmoothMeshToolProperties",
               &Z_Registration_Info_UClass_USmoothMeshToolProperties.InnerSingleton,
               StaticRegisterNativesUSmoothMeshToolProperties,0xb8,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<USmoothMeshToolProperties>,
               InternalVTableHelperCtorCaller<USmoothMeshToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USmoothMeshToolProperties.InnerSingleton;
}

// USmoothMeshToolProperties @ 14cd51590

USmoothMeshToolProperties * __thiscall
USmoothMeshToolProperties::USmoothMeshToolProperties
          (USmoothMeshToolProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->SmoothingType = Iterative;
  this->_padding_ = (longlong)&___7USmoothMeshToolProperties__6B_;
  return this;
}

// USmoothMeshToolProperties @ 14cd515c0

USmoothMeshToolProperties * __thiscall
USmoothMeshToolProperties::USmoothMeshToolProperties
          (USmoothMeshToolProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->SmoothingType = Iterative;
  this->_padding_ = (longlong)&___7USmoothMeshToolProperties__6B_;
  return this;
}

// ~USmoothMeshToolProperties @ 14cd538c0

void __thiscall
USmoothMeshToolProperties::~USmoothMeshToolProperties(USmoothMeshToolProperties *this)

{
  this->_padding_ = (longlong)&___7USmoothMeshToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd6e6a0

UClass * __cdecl USmoothMeshToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USmoothMeshToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SmoothMeshToolProperties",
               &Z_Registration_Info_UClass_USmoothMeshToolProperties.InnerSingleton,
               StaticRegisterNativesUSmoothMeshToolProperties,0xb8,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<USmoothMeshToolProperties>,
               InternalVTableHelperCtorCaller<USmoothMeshToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USmoothMeshToolProperties.InnerSingleton;
}

// StaticRegisterNativesUSmoothMeshToolProperties @ 14cd814f0

void __cdecl USmoothMeshToolProperties::StaticRegisterNativesUSmoothMeshToolProperties(void)

{
  return;
}

