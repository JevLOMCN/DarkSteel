// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cd41c30

UClass * __cdecl UGroupEdgeInsertionProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroupEdgeInsertionProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"GroupEdgeInsertionProperties",
               &Z_Registration_Info_UClass_UGroupEdgeInsertionProperties.InnerSingleton,
               StaticRegisterNativesUGroupEdgeInsertionProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGroupEdgeInsertionProperties>,
               InternalVTableHelperCtorCaller<UGroupEdgeInsertionProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroupEdgeInsertionProperties.InnerSingleton;
}

// UGroupEdgeInsertionProperties @ 14cd4f880

UGroupEdgeInsertionProperties * __thiscall
UGroupEdgeInsertionProperties::UGroupEdgeInsertionProperties
          (UGroupEdgeInsertionProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->InsertionMode = PlaneCut;
  this->_padding_ = (longlong)&___7UGroupEdgeInsertionProperties__6B_;
  this->VertexTolerance = 0.001;
  this->bContinuousInsertion = true;
  return this;
}

// UGroupEdgeInsertionProperties @ 14cd4f8d0

UGroupEdgeInsertionProperties * __thiscall
UGroupEdgeInsertionProperties::UGroupEdgeInsertionProperties
          (UGroupEdgeInsertionProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->InsertionMode = PlaneCut;
  this->_padding_ = (longlong)&___7UGroupEdgeInsertionProperties__6B_;
  this->VertexTolerance = 0.001;
  this->bContinuousInsertion = true;
  return this;
}

// ~UGroupEdgeInsertionProperties @ 14cd532e0

void __thiscall
UGroupEdgeInsertionProperties::~UGroupEdgeInsertionProperties(UGroupEdgeInsertionProperties *this)

{
  this->_padding_ = (longlong)&___7UGroupEdgeInsertionProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd6d6e0

UClass * __cdecl UGroupEdgeInsertionProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroupEdgeInsertionProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"GroupEdgeInsertionProperties",
               &Z_Registration_Info_UClass_UGroupEdgeInsertionProperties.InnerSingleton,
               StaticRegisterNativesUGroupEdgeInsertionProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGroupEdgeInsertionProperties>,
               InternalVTableHelperCtorCaller<UGroupEdgeInsertionProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroupEdgeInsertionProperties.InnerSingleton;
}

// StaticRegisterNativesUGroupEdgeInsertionProperties @ 14cd813a0

void __cdecl UGroupEdgeInsertionProperties::StaticRegisterNativesUGroupEdgeInsertionProperties(void)

{
  return;
}

