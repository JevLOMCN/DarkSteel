// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cd40970

UClass * __cdecl UPolyEditCutProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditCutProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditCutProperties",
               &Z_Registration_Info_UClass_UPolyEditCutProperties.InnerSingleton,
               StaticRegisterNativesUPolyEditCutProperties,0xb8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPolyEditCutProperties>,
               InternalVTableHelperCtorCaller<UPolyEditCutProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditCutProperties.InnerSingleton;
}

// UPolyEditCutProperties @ 14cd4fd40

UPolyEditCutProperties * __thiscall
UPolyEditCutProperties::UPolyEditCutProperties(UPolyEditCutProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->Orientation = FaceNormals;
  this->_padding_ = (longlong)&___7UPolyEditCutProperties__6B_;
  this->bSnapToVertices = true;
  return this;
}

// UPolyEditCutProperties @ 14cd4fd80

UPolyEditCutProperties * __thiscall
UPolyEditCutProperties::UPolyEditCutProperties
          (UPolyEditCutProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->Orientation = FaceNormals;
  this->_padding_ = (longlong)&___7UPolyEditCutProperties__6B_;
  this->bSnapToVertices = true;
  return this;
}

// ~UPolyEditCutProperties @ 14cd533e0

void __thiscall UPolyEditCutProperties::~UPolyEditCutProperties(UPolyEditCutProperties *this)

{
  this->_padding_ = (longlong)&___7UPolyEditCutProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd6db60

UClass * __cdecl UPolyEditCutProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditCutProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditCutProperties",
               &Z_Registration_Info_UClass_UPolyEditCutProperties.InnerSingleton,
               StaticRegisterNativesUPolyEditCutProperties,0xb8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPolyEditCutProperties>,
               InternalVTableHelperCtorCaller<UPolyEditCutProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditCutProperties.InnerSingleton;
}

// StaticRegisterNativesUPolyEditCutProperties @ 14cd81400

void __cdecl UPolyEditCutProperties::StaticRegisterNativesUPolyEditCutProperties(void)

{
  return;
}

