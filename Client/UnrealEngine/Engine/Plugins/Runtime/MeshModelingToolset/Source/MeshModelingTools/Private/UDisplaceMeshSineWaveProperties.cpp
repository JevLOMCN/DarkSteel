// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cbfed00

UClass * __cdecl UDisplaceMeshSineWaveProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDisplaceMeshSineWaveProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DisplaceMeshSineWaveProperties",
               &Z_Registration_Info_UClass_UDisplaceMeshSineWaveProperties.InnerSingleton,
               StaticRegisterNativesUDisplaceMeshSineWaveProperties,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDisplaceMeshSineWaveProperties>,
               InternalVTableHelperCtorCaller<UDisplaceMeshSineWaveProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDisplaceMeshSineWaveProperties.InnerSingleton;
}

// UDisplaceMeshSineWaveProperties @ 14cc1d0c0

UDisplaceMeshSineWaveProperties * __thiscall
UDisplaceMeshSineWaveProperties::UDisplaceMeshSineWaveProperties
          (UDisplaceMeshSineWaveProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->SineWaveFrequency = 0.1;
  this->SineWavePhaseShift = 0.0;
  this->_padding_ = (longlong)&___7UDisplaceMeshSineWaveProperties__6B_;
  (this->SineWaveDirection).field0_0x0._s_0.X = 0.0;
  (this->SineWaveDirection).field0_0x0._s_0.Y = 0.0;
  (this->SineWaveDirection).field0_0x0._s_0.Z = 1.0;
  return this;
}

// UDisplaceMeshSineWaveProperties @ 14cc1d120

UDisplaceMeshSineWaveProperties * __thiscall
UDisplaceMeshSineWaveProperties::UDisplaceMeshSineWaveProperties
          (UDisplaceMeshSineWaveProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->SineWaveFrequency = 0.1;
  this->SineWavePhaseShift = 0.0;
  this->_padding_ = (longlong)&___7UDisplaceMeshSineWaveProperties__6B_;
  (this->SineWaveDirection).field0_0x0._s_0.X = 0.0;
  (this->SineWaveDirection).field0_0x0._s_0.Y = 0.0;
  (this->SineWaveDirection).field0_0x0._s_0.Z = 1.0;
  return this;
}

// ~UDisplaceMeshSineWaveProperties @ 14cc22880

void __thiscall
UDisplaceMeshSineWaveProperties::~UDisplaceMeshSineWaveProperties
          (UDisplaceMeshSineWaveProperties *this)

{
  this->_padding_ = (longlong)&___7UDisplaceMeshSineWaveProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cc5c230

UClass * __cdecl UDisplaceMeshSineWaveProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDisplaceMeshSineWaveProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DisplaceMeshSineWaveProperties",
               &Z_Registration_Info_UClass_UDisplaceMeshSineWaveProperties.InnerSingleton,
               StaticRegisterNativesUDisplaceMeshSineWaveProperties,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDisplaceMeshSineWaveProperties>,
               InternalVTableHelperCtorCaller<UDisplaceMeshSineWaveProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDisplaceMeshSineWaveProperties.InnerSingleton;
}

// StaticRegisterNativesUDisplaceMeshSineWaveProperties @ 14cc82380

void __cdecl
UDisplaceMeshSineWaveProperties::StaticRegisterNativesUDisplaceMeshSineWaveProperties(void)

{
  return;
}

