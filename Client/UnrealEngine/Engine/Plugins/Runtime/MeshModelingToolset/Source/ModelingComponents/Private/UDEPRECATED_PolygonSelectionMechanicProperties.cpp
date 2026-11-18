// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// StaticClass @ 14cb591c0

UClass * __cdecl UDEPRECATED_PolygonSelectionMechanicProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_PolygonSelectionMechanicProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PolygonSelectionMechanicProperties",
               &Z_Registration_Info_UClass_UDEPRECATED_PolygonSelectionMechanicProperties.
                InnerSingleton,StaticRegisterNativesUDEPRECATED_PolygonSelectionMechanicProperties,
               200,8,CLASS_Intrinsic|CLASS_Deprecated|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_PolygonSelectionMechanicProperties>,
               InternalVTableHelperCtorCaller<UDEPRECATED_PolygonSelectionMechanicProperties>,
               local_res8,UMeshTopologySelectionMechanicProperties::StaticClass,UObject::StaticClass
              );
  }
  return Z_Registration_Info_UClass_UDEPRECATED_PolygonSelectionMechanicProperties.InnerSingleton;
}

// UDEPRECATED_PolygonSelectionMechanicProperties @ 14cb625a0

UDEPRECATED_PolygonSelectionMechanicProperties * __thiscall
UDEPRECATED_PolygonSelectionMechanicProperties::UDEPRECATED_PolygonSelectionMechanicProperties
          (UDEPRECATED_PolygonSelectionMechanicProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined4 *)&this->field_0xb0 = 0x10101;
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined ***)this = &___7UDEPRECATED_PolygonSelectionMechanicProperties__6B_;
  *(undefined4 *)&this->field_0xb4 = 0x1010100;
  *(undefined4 *)&this->field_0xb8 = 0x1000101;
  *(undefined2 *)&this->field_0xbc = 0x101;
  this->field_0xbe = 1;
  return this;
}

// UDEPRECATED_PolygonSelectionMechanicProperties @ 14cb62600

UDEPRECATED_PolygonSelectionMechanicProperties * __thiscall
UDEPRECATED_PolygonSelectionMechanicProperties::UDEPRECATED_PolygonSelectionMechanicProperties
          (UDEPRECATED_PolygonSelectionMechanicProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined4 *)&this->field_0xb0 = 0x10101;
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined ***)this = &___7UDEPRECATED_PolygonSelectionMechanicProperties__6B_;
  *(undefined4 *)&this->field_0xb4 = 0x1010100;
  *(undefined4 *)&this->field_0xb8 = 0x1000101;
  *(undefined2 *)&this->field_0xbc = 0x101;
  this->field_0xbe = 1;
  return this;
}

// ~UDEPRECATED_PolygonSelectionMechanicProperties @ 14cb64c80

void __thiscall
UDEPRECATED_PolygonSelectionMechanicProperties::~UDEPRECATED_PolygonSelectionMechanicProperties
          (UDEPRECATED_PolygonSelectionMechanicProperties *this)

{
  *(undefined ***)this = &___7UMeshTopologySelectionMechanicProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cb98ed0

UClass * __cdecl UDEPRECATED_PolygonSelectionMechanicProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_PolygonSelectionMechanicProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PolygonSelectionMechanicProperties",
               &Z_Registration_Info_UClass_UDEPRECATED_PolygonSelectionMechanicProperties.
                InnerSingleton,StaticRegisterNativesUDEPRECATED_PolygonSelectionMechanicProperties,
               200,8,CLASS_Intrinsic|CLASS_Deprecated|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_PolygonSelectionMechanicProperties>,
               InternalVTableHelperCtorCaller<UDEPRECATED_PolygonSelectionMechanicProperties>,
               local_res8,UMeshTopologySelectionMechanicProperties::StaticClass,UObject::StaticClass
              );
  }
  return Z_Registration_Info_UClass_UDEPRECATED_PolygonSelectionMechanicProperties.InnerSingleton;
}

// StaticRegisterNativesUDEPRECATED_PolygonSelectionMechanicProperties @ 14cbb4590

void __cdecl
UDEPRECATED_PolygonSelectionMechanicProperties::
StaticRegisterNativesUDEPRECATED_PolygonSelectionMechanicProperties(void)

{
  return;
}

