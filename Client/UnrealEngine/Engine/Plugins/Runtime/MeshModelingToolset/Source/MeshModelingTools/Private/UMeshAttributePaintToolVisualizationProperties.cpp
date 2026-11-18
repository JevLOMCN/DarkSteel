// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc95510

UClass * __cdecl UMeshAttributePaintToolVisualizationProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshAttributePaintToolVisualizationProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshAttributePaintToolVisualizationProperties",
               &Z_Registration_Info_UClass_UMeshAttributePaintToolVisualizationProperties.
                InnerSingleton,StaticRegisterNativesUMeshAttributePaintToolVisualizationProperties,
               0xb8,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshAttributePaintToolVisualizationProperties>,
               InternalVTableHelperCtorCaller<UMeshAttributePaintToolVisualizationProperties>,
               local_res8,UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshAttributePaintToolVisualizationProperties.InnerSingleton;
}

// UMeshAttributePaintToolVisualizationProperties @ 14ccbbfa0

UMeshAttributePaintToolVisualizationProperties * __thiscall
UMeshAttributePaintToolVisualizationProperties::UMeshAttributePaintToolVisualizationProperties
          (UMeshAttributePaintToolVisualizationProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->MaterialMode = Shaded;
  this->_padding_ = (longlong)&___7UMeshAttributePaintToolVisualizationProperties__6B_;
  this->bFlatShading = true;
  return this;
}

// UMeshAttributePaintToolVisualizationProperties @ 14ccbbfe0

UMeshAttributePaintToolVisualizationProperties * __thiscall
UMeshAttributePaintToolVisualizationProperties::UMeshAttributePaintToolVisualizationProperties
          (UMeshAttributePaintToolVisualizationProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->MaterialMode = Shaded;
  this->_padding_ = (longlong)&___7UMeshAttributePaintToolVisualizationProperties__6B_;
  this->bFlatShading = true;
  return this;
}

// ~UMeshAttributePaintToolVisualizationProperties @ 14ccc3ae0

void __thiscall
UMeshAttributePaintToolVisualizationProperties::~UMeshAttributePaintToolVisualizationProperties
          (UMeshAttributePaintToolVisualizationProperties *this)

{
  this->_padding_ = (longlong)&___7UMeshAttributePaintToolVisualizationProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14ccffcc0

UClass * __cdecl UMeshAttributePaintToolVisualizationProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshAttributePaintToolVisualizationProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshAttributePaintToolVisualizationProperties",
               &Z_Registration_Info_UClass_UMeshAttributePaintToolVisualizationProperties.
                InnerSingleton,StaticRegisterNativesUMeshAttributePaintToolVisualizationProperties,
               0xb8,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshAttributePaintToolVisualizationProperties>,
               InternalVTableHelperCtorCaller<UMeshAttributePaintToolVisualizationProperties>,
               local_res8,UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshAttributePaintToolVisualizationProperties.InnerSingleton;
}

// StaticRegisterNativesUMeshAttributePaintToolVisualizationProperties @ 14cd2efa0

void __cdecl
UMeshAttributePaintToolVisualizationProperties::
StaticRegisterNativesUMeshAttributePaintToolVisualizationProperties(void)

{
  return;
}

