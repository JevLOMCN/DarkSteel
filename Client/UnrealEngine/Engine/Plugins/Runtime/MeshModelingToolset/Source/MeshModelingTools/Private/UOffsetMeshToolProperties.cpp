// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc95b30

UClass * __cdecl UOffsetMeshToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOffsetMeshToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"OffsetMeshToolProperties",
               &Z_Registration_Info_UClass_UOffsetMeshToolProperties.InnerSingleton,
               StaticRegisterNativesUOffsetMeshToolProperties,0xc0,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UOffsetMeshToolProperties>,
               InternalVTableHelperCtorCaller<UOffsetMeshToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOffsetMeshToolProperties.InnerSingleton;
}

// UOffsetMeshToolProperties @ 14ccbf2a0

UOffsetMeshToolProperties * __thiscall
UOffsetMeshToolProperties::UOffsetMeshToolProperties
          (UOffsetMeshToolProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->OffsetType = Iterative;
  this->_padding_ = (longlong)&___7UOffsetMeshToolProperties__6B_;
  this->Distance = 1.0;
  this->bCreateShell = false;
  return this;
}

// UOffsetMeshToolProperties @ 14ccbf2e0

UOffsetMeshToolProperties * __thiscall
UOffsetMeshToolProperties::UOffsetMeshToolProperties
          (UOffsetMeshToolProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->OffsetType = Iterative;
  this->_padding_ = (longlong)&___7UOffsetMeshToolProperties__6B_;
  this->Distance = 1.0;
  this->bCreateShell = false;
  return this;
}

// ~UOffsetMeshToolProperties @ 14ccc4a50

void __thiscall
UOffsetMeshToolProperties::~UOffsetMeshToolProperties(UOffsetMeshToolProperties *this)

{
  this->_padding_ = (longlong)&___7UOffsetMeshToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd00f70

UClass * __cdecl UOffsetMeshToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOffsetMeshToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"OffsetMeshToolProperties",
               &Z_Registration_Info_UClass_UOffsetMeshToolProperties.InnerSingleton,
               StaticRegisterNativesUOffsetMeshToolProperties,0xc0,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UOffsetMeshToolProperties>,
               InternalVTableHelperCtorCaller<UOffsetMeshToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOffsetMeshToolProperties.InnerSingleton;
}

// StaticRegisterNativesUOffsetMeshToolProperties @ 14cd2f250

void __cdecl UOffsetMeshToolProperties::StaticRegisterNativesUOffsetMeshToolProperties(void)

{
  return;
}

