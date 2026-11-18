// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc93380

UClass * __cdecl USculptMaxBrushProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USculptMaxBrushProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SculptMaxBrushProperties",
               &Z_Registration_Info_UClass_USculptMaxBrushProperties.InnerSingleton,
               StaticRegisterNativesUSculptMaxBrushProperties,0xb8,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<USculptMaxBrushProperties>,
               InternalVTableHelperCtorCaller<USculptMaxBrushProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USculptMaxBrushProperties.InnerSingleton;
}

// USculptMaxBrushProperties @ 14ccc0140

USculptMaxBrushProperties * __thiscall
USculptMaxBrushProperties::USculptMaxBrushProperties
          (USculptMaxBrushProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->MaxHeight = 0.5;
  this->_padding_ = (longlong)&___7USculptMaxBrushProperties__6B_;
  this->bFreezeCurrentHeight = false;
  return this;
}

// USculptMaxBrushProperties @ 14ccc0180

USculptMaxBrushProperties * __thiscall
USculptMaxBrushProperties::USculptMaxBrushProperties
          (USculptMaxBrushProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->MaxHeight = 0.5;
  this->_padding_ = (longlong)&___7USculptMaxBrushProperties__6B_;
  this->bFreezeCurrentHeight = false;
  return this;
}

// ~USculptMaxBrushProperties @ 14ccc4ec0

void __thiscall
USculptMaxBrushProperties::~USculptMaxBrushProperties(USculptMaxBrushProperties *this)

{
  this->_padding_ = (longlong)&___7USculptMaxBrushProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd01c20

UClass * __cdecl USculptMaxBrushProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USculptMaxBrushProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SculptMaxBrushProperties",
               &Z_Registration_Info_UClass_USculptMaxBrushProperties.InnerSingleton,
               StaticRegisterNativesUSculptMaxBrushProperties,0xb8,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<USculptMaxBrushProperties>,
               InternalVTableHelperCtorCaller<USculptMaxBrushProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USculptMaxBrushProperties.InnerSingleton;
}

// StaticRegisterNativesUSculptMaxBrushProperties @ 14cd2f360

void __cdecl USculptMaxBrushProperties::StaticRegisterNativesUSculptMaxBrushProperties(void)

{
  return;
}

