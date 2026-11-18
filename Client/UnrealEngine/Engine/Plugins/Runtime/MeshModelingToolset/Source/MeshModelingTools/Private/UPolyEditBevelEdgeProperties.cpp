// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cd413a0

UClass * __cdecl UPolyEditBevelEdgeProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditBevelEdgeProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditBevelEdgeProperties",
               &Z_Registration_Info_UClass_UPolyEditBevelEdgeProperties.InnerSingleton,
               StaticRegisterNativesUPolyEditBevelEdgeProperties,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditBevelEdgeProperties>,
               InternalVTableHelperCtorCaller<UPolyEditBevelEdgeProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditBevelEdgeProperties.InnerSingleton;
}

// UPolyEditBevelEdgeProperties @ 14cd4fb00

UPolyEditBevelEdgeProperties * __thiscall
UPolyEditBevelEdgeProperties::UPolyEditBevelEdgeProperties
          (UPolyEditBevelEdgeProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->RoundWeight = 1.0;
  this->_padding_ = (longlong)&___7UPolyEditBevelEdgeProperties__6B_;
  this->BevelDistance = 4.0;
  this->Subdivisions = 0;
  this->SetMaterialID = 0;
  this->bInferMaterialID = true;
  return this;
}

// UPolyEditBevelEdgeProperties @ 14cd4fb60

UPolyEditBevelEdgeProperties * __thiscall
UPolyEditBevelEdgeProperties::UPolyEditBevelEdgeProperties
          (UPolyEditBevelEdgeProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->RoundWeight = 1.0;
  this->_padding_ = (longlong)&___7UPolyEditBevelEdgeProperties__6B_;
  this->BevelDistance = 4.0;
  this->Subdivisions = 0;
  this->SetMaterialID = 0;
  this->bInferMaterialID = true;
  return this;
}

// ~UPolyEditBevelEdgeProperties @ 14cd53390

void __thiscall
UPolyEditBevelEdgeProperties::~UPolyEditBevelEdgeProperties(UPolyEditBevelEdgeProperties *this)

{
  this->_padding_ = (longlong)&___7UPolyEditBevelEdgeProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd6d9e0

UClass * __cdecl UPolyEditBevelEdgeProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditBevelEdgeProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditBevelEdgeProperties",
               &Z_Registration_Info_UClass_UPolyEditBevelEdgeProperties.InnerSingleton,
               StaticRegisterNativesUPolyEditBevelEdgeProperties,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditBevelEdgeProperties>,
               InternalVTableHelperCtorCaller<UPolyEditBevelEdgeProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditBevelEdgeProperties.InnerSingleton;
}

// StaticRegisterNativesUPolyEditBevelEdgeProperties @ 14cd813e0

void __cdecl UPolyEditBevelEdgeProperties::StaticRegisterNativesUPolyEditBevelEdgeProperties(void)

{
  return;
}

