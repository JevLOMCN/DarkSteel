// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc95450

UClass * __cdecl UMeshAttributePaintBrushOperationProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshAttributePaintBrushOperationProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshAttributePaintBrushOperationProperties",
               &Z_Registration_Info_UClass_UMeshAttributePaintBrushOperationProperties.
                InnerSingleton,StaticRegisterNativesUMeshAttributePaintBrushOperationProperties,0xc0
               ,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshAttributePaintBrushOperationProperties>,
               InternalVTableHelperCtorCaller<UMeshAttributePaintBrushOperationProperties>,
               local_res8,UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshAttributePaintBrushOperationProperties.InnerSingleton;
}

// UMeshAttributePaintBrushOperationProperties @ 14ccbb880

UMeshAttributePaintBrushOperationProperties * __thiscall
UMeshAttributePaintBrushOperationProperties::UMeshAttributePaintBrushOperationProperties
          (UMeshAttributePaintBrushOperationProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bIsolateGeometrySelection = false;
  this->bToolHasSelection = false;
  this->_padding_ = (longlong)&___7UMeshAttributePaintBrushOperationProperties__6B_;
  this->BrushAction = Paint;
  this->BrushValue = 1.0;
  return this;
}

// UMeshAttributePaintBrushOperationProperties @ 14ccbb8d0

UMeshAttributePaintBrushOperationProperties * __thiscall
UMeshAttributePaintBrushOperationProperties::UMeshAttributePaintBrushOperationProperties
          (UMeshAttributePaintBrushOperationProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bIsolateGeometrySelection = false;
  this->bToolHasSelection = false;
  this->_padding_ = (longlong)&___7UMeshAttributePaintBrushOperationProperties__6B_;
  this->BrushAction = Paint;
  this->BrushValue = 1.0;
  return this;
}

// ~UMeshAttributePaintBrushOperationProperties @ 14ccc37b0

void __thiscall
UMeshAttributePaintBrushOperationProperties::~UMeshAttributePaintBrushOperationProperties
          (UMeshAttributePaintBrushOperationProperties *this)

{
  this->_padding_ = (longlong)&___7UMeshAttributePaintBrushOperationProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14ccff900

UClass * __cdecl UMeshAttributePaintBrushOperationProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshAttributePaintBrushOperationProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshAttributePaintBrushOperationProperties",
               &Z_Registration_Info_UClass_UMeshAttributePaintBrushOperationProperties.
                InnerSingleton,StaticRegisterNativesUMeshAttributePaintBrushOperationProperties,0xc0
               ,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshAttributePaintBrushOperationProperties>,
               InternalVTableHelperCtorCaller<UMeshAttributePaintBrushOperationProperties>,
               local_res8,UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshAttributePaintBrushOperationProperties.InnerSingleton;
}

// StaticRegisterNativesUMeshAttributePaintBrushOperationProperties @ 14cd2ef20

void __cdecl
UMeshAttributePaintBrushOperationProperties::
StaticRegisterNativesUMeshAttributePaintBrushOperationProperties(void)

{
  return;
}

