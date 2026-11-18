// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc95e90

UClass * __cdecl UIterativeOffsetProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIterativeOffsetProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"IterativeOffsetProperties",
               &Z_Registration_Info_UClass_UIterativeOffsetProperties.InnerSingleton,
               StaticRegisterNativesUIterativeOffsetProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UIterativeOffsetProperties>,
               InternalVTableHelperCtorCaller<UIterativeOffsetProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIterativeOffsetProperties.InnerSingleton;
}

// UIterativeOffsetProperties @ 14ccbb280

UIterativeOffsetProperties * __thiscall
UIterativeOffsetProperties::UIterativeOffsetProperties
          (UIterativeOffsetProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->Steps = 10;
  this->_padding_ = (longlong)&___7UIterativeOffsetProperties__6B_;
  this->bOffsetBoundaries = true;
  this->SmoothingPerStep = 0.0;
  this->bReprojectSmooth = false;
  return this;
}

// UIterativeOffsetProperties @ 14ccbb2d0

UIterativeOffsetProperties * __thiscall
UIterativeOffsetProperties::UIterativeOffsetProperties
          (UIterativeOffsetProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->Steps = 10;
  this->_padding_ = (longlong)&___7UIterativeOffsetProperties__6B_;
  this->bOffsetBoundaries = true;
  this->SmoothingPerStep = 0.0;
  this->bReprojectSmooth = false;
  return this;
}

// ~UIterativeOffsetProperties @ 14ccc3650

void __thiscall
UIterativeOffsetProperties::~UIterativeOffsetProperties(UIterativeOffsetProperties *this)

{
  this->_padding_ = (longlong)&___7UIterativeOffsetProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14ccff490

UClass * __cdecl UIterativeOffsetProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIterativeOffsetProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"IterativeOffsetProperties",
               &Z_Registration_Info_UClass_UIterativeOffsetProperties.InnerSingleton,
               StaticRegisterNativesUIterativeOffsetProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UIterativeOffsetProperties>,
               InternalVTableHelperCtorCaller<UIterativeOffsetProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIterativeOffsetProperties.InnerSingleton;
}

// StaticRegisterNativesUIterativeOffsetProperties @ 14cd2ee90

void __cdecl UIterativeOffsetProperties::StaticRegisterNativesUIterativeOffsetProperties(void)

{
  return;
}

