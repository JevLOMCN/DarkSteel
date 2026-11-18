// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cbfeb40

UClass * __cdecl UDynamicMeshBrushProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshBrushProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DynamicMeshBrushProperties",
               &Z_Registration_Info_UClass_UDynamicMeshBrushProperties.InnerSingleton,
               StaticRegisterNativesUDynamicMeshBrushProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDynamicMeshBrushProperties>,
               InternalVTableHelperCtorCaller<UDynamicMeshBrushProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshBrushProperties.InnerSingleton;
}

// UDynamicMeshBrushProperties @ 14cc1dd70

UDynamicMeshBrushProperties * __thiscall
UDynamicMeshBrushProperties::UDynamicMeshBrushProperties
          (UDynamicMeshBrushProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->BrushFalloffAmount = 0.5;
  this->Depth = 0.0;
  this->_padding_ = (longlong)&___7UDynamicMeshBrushProperties__6B_;
  (this->BrushSize).SizeType = Adaptive;
  (this->BrushSize).AdaptiveSize = 0.25;
  (this->BrushSize).WorldRadius = 100.0;
  (this->BrushSize).bToolSupportsPressureSensitivity = false;
  (this->BrushSize).bEnablePressureSensitivity = false;
  (this->BrushSize).WorldSizeRange.Min = 1.0;
  (this->BrushSize).WorldSizeRange.Max = 1000.0;
  this->bHitBackFaces = true;
  return this;
}

// UDynamicMeshBrushProperties @ 14cc1ddf0

UDynamicMeshBrushProperties * __thiscall
UDynamicMeshBrushProperties::UDynamicMeshBrushProperties
          (UDynamicMeshBrushProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->BrushFalloffAmount = 0.5;
  this->Depth = 0.0;
  this->_padding_ = (longlong)&___7UDynamicMeshBrushProperties__6B_;
  (this->BrushSize).SizeType = Adaptive;
  (this->BrushSize).AdaptiveSize = 0.25;
  (this->BrushSize).WorldRadius = 100.0;
  (this->BrushSize).bToolSupportsPressureSensitivity = false;
  (this->BrushSize).bEnablePressureSensitivity = false;
  (this->BrushSize).WorldSizeRange.Min = 1.0;
  (this->BrushSize).WorldSizeRange.Max = 1000.0;
  this->bHitBackFaces = true;
  return this;
}

// ~UDynamicMeshBrushProperties @ 14cc22af0

void __thiscall
UDynamicMeshBrushProperties::~UDynamicMeshBrushProperties(UDynamicMeshBrushProperties *this)

{
  this->_padding_ = (longlong)&___7UDynamicMeshBrushProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cc5c9b0

UClass * __cdecl UDynamicMeshBrushProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshBrushProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DynamicMeshBrushProperties",
               &Z_Registration_Info_UClass_UDynamicMeshBrushProperties.InnerSingleton,
               StaticRegisterNativesUDynamicMeshBrushProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDynamicMeshBrushProperties>,
               InternalVTableHelperCtorCaller<UDynamicMeshBrushProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshBrushProperties.InnerSingleton;
}

// StaticRegisterNativesUDynamicMeshBrushProperties @ 14cc82420

void __cdecl UDynamicMeshBrushProperties::StaticRegisterNativesUDynamicMeshBrushProperties(void)

{
  return;
}

