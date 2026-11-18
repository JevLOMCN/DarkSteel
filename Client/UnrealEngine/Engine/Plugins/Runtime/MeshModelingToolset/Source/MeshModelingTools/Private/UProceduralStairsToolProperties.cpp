// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cbd24b0

UClass * __cdecl UProceduralStairsToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralStairsToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralStairsToolProperties",
               &Z_Registration_Info_UClass_UProceduralStairsToolProperties.InnerSingleton,
               StaticRegisterNativesUProceduralStairsToolProperties,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralStairsToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralStairsToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralStairsToolProperties.InnerSingleton;
}

// UProceduralStairsToolProperties @ 14cbde940

UProceduralStairsToolProperties * __thiscall
UProceduralStairsToolProperties::UProceduralStairsToolProperties
          (UProceduralStairsToolProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UProceduralStairsToolProperties__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->StairsType = Linear;
  this->NumSteps = 8;
  this->StepWidth = 150.0;
  this->StepHeight = 20.0;
  this->StepDepth = 30.0;
  this->CurveAngle = 90.0;
  this->SpiralAngle = 90.0;
  this->InnerRadius = 150.0;
  return this;
}

// UProceduralStairsToolProperties @ 14cbde9e0

UProceduralStairsToolProperties * __thiscall
UProceduralStairsToolProperties::UProceduralStairsToolProperties
          (UProceduralStairsToolProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UProceduralStairsToolProperties__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->StairsType = Linear;
  this->NumSteps = 8;
  this->StepWidth = 150.0;
  this->StepHeight = 20.0;
  this->StepDepth = 30.0;
  this->CurveAngle = 90.0;
  this->SpiralAngle = 90.0;
  this->InnerRadius = 150.0;
  return this;
}

// ~UProceduralStairsToolProperties @ 14cbe0770

void __thiscall
UProceduralStairsToolProperties::~UProceduralStairsToolProperties
          (UProceduralStairsToolProperties *this)

{
  this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cbf0da0

UClass * __cdecl UProceduralStairsToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralStairsToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralStairsToolProperties",
               &Z_Registration_Info_UClass_UProceduralStairsToolProperties.InnerSingleton,
               StaticRegisterNativesUProceduralStairsToolProperties,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralStairsToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralStairsToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralStairsToolProperties.InnerSingleton;
}

// StaticRegisterNativesUProceduralStairsToolProperties @ 14cbf6d40

void __cdecl
UProceduralStairsToolProperties::StaticRegisterNativesUProceduralStairsToolProperties(void)

{
  return;
}

