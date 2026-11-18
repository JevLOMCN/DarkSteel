// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cbfec40

UClass * __cdecl UDynamicMeshBrushSculptProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshBrushSculptProperties.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DynamicMeshBrushSculptProperties",
               &Z_Registration_Info_UClass_UDynamicMeshBrushSculptProperties.InnerSingleton,
               StaticRegisterNativesUDynamicMeshBrushSculptProperties,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDynamicMeshBrushSculptProperties>,
               InternalVTableHelperCtorCaller<UDynamicMeshBrushSculptProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshBrushSculptProperties.InnerSingleton;
}

// UDynamicMeshBrushSculptProperties @ 14cc1de70

UDynamicMeshBrushSculptProperties * __thiscall
UDynamicMeshBrushSculptProperties::UDynamicMeshBrushSculptProperties
          (UDynamicMeshBrushSculptProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bIsRemeshingEnabled = false;
  this->PrimaryBrushType = Move;
  this->_padding_ = (longlong)&___7UDynamicMeshBrushSculptProperties__6B_;
  this->PrimaryBrushSpeed = 0.5;
  this->bPreserveUVFlow = false;
  this->bFreezeTarget = false;
  this->SmoothBrushSpeed = 0.25;
  this->bDetailPreservingSmooth = true;
  return this;
}

// UDynamicMeshBrushSculptProperties @ 14cc1ded0

UDynamicMeshBrushSculptProperties * __thiscall
UDynamicMeshBrushSculptProperties::UDynamicMeshBrushSculptProperties
          (UDynamicMeshBrushSculptProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bIsRemeshingEnabled = false;
  this->PrimaryBrushType = Move;
  this->_padding_ = (longlong)&___7UDynamicMeshBrushSculptProperties__6B_;
  this->PrimaryBrushSpeed = 0.5;
  this->bPreserveUVFlow = false;
  this->bFreezeTarget = false;
  this->SmoothBrushSpeed = 0.25;
  this->bDetailPreservingSmooth = true;
  return this;
}

// ~UDynamicMeshBrushSculptProperties @ 14cc22b10

void __thiscall
UDynamicMeshBrushSculptProperties::~UDynamicMeshBrushSculptProperties
          (UDynamicMeshBrushSculptProperties *this)

{
  this->_padding_ = (longlong)&___7UDynamicMeshBrushSculptProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cc5ca70

UClass * __cdecl UDynamicMeshBrushSculptProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshBrushSculptProperties.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DynamicMeshBrushSculptProperties",
               &Z_Registration_Info_UClass_UDynamicMeshBrushSculptProperties.InnerSingleton,
               StaticRegisterNativesUDynamicMeshBrushSculptProperties,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDynamicMeshBrushSculptProperties>,
               InternalVTableHelperCtorCaller<UDynamicMeshBrushSculptProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshBrushSculptProperties.InnerSingleton;
}

// StaticRegisterNativesUDynamicMeshBrushSculptProperties @ 14cc82430

void __cdecl
UDynamicMeshBrushSculptProperties::StaticRegisterNativesUDynamicMeshBrushSculptProperties(void)

{
  return;
}

