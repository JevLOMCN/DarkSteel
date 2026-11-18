// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 9

// StaticClass @ 14cbd2730

UClass * __cdecl UBaseKelvinletBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseKelvinletBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"BaseKelvinletBrushOpProps",
               &Z_Registration_Info_UClass_UBaseKelvinletBrushOpProps.InnerSingleton,
               StaticRegisterNativesUBaseKelvinletBrushOpProps,200,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UBaseKelvinletBrushOpProps>,
               InternalVTableHelperCtorCaller<UBaseKelvinletBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseKelvinletBrushOpProps.InnerSingleton;
}

// UBaseKelvinletBrushOpProps @ 14cbdcc10

UBaseKelvinletBrushOpProps * __thiscall
UBaseKelvinletBrushOpProps::UBaseKelvinletBrushOpProps
          (UBaseKelvinletBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UBaseKelvinletBrushOpProps__6B_;
  this->Stiffness = 1.0;
  this->Incompressiblity = 1.0;
  this->BrushSteps = 3;
  return this;
}

// UBaseKelvinletBrushOpProps @ 14cbdcc60

UBaseKelvinletBrushOpProps * __thiscall
UBaseKelvinletBrushOpProps::UBaseKelvinletBrushOpProps
          (UBaseKelvinletBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UBaseKelvinletBrushOpProps__6B_;
  this->Stiffness = 1.0;
  this->Incompressiblity = 1.0;
  this->BrushSteps = 3;
  return this;
}

// ~UBaseKelvinletBrushOpProps @ 14cbe0090

void __thiscall
UBaseKelvinletBrushOpProps::~UBaseKelvinletBrushOpProps(UBaseKelvinletBrushOpProps *this)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetIncompressiblity @ 14cbee5e0

float __thiscall UBaseKelvinletBrushOpProps::GetIncompressiblity(UBaseKelvinletBrushOpProps *this)

{
  return this->Incompressiblity;
}

// GetNumSteps @ 14cbee650

int __thiscall UBaseKelvinletBrushOpProps::GetNumSteps(UBaseKelvinletBrushOpProps *this)

{
  return this->BrushSteps;
}

// GetPrivateStaticClass @ 14cbeefc0

UClass * __cdecl UBaseKelvinletBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseKelvinletBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"BaseKelvinletBrushOpProps",
               &Z_Registration_Info_UClass_UBaseKelvinletBrushOpProps.InnerSingleton,
               StaticRegisterNativesUBaseKelvinletBrushOpProps,200,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UBaseKelvinletBrushOpProps>,
               InternalVTableHelperCtorCaller<UBaseKelvinletBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseKelvinletBrushOpProps.InnerSingleton;
}

// GetStiffness @ 14cbf1be0

float __thiscall UBaseKelvinletBrushOpProps::GetStiffness(UBaseKelvinletBrushOpProps *this)

{
  return this->Stiffness;
}

// StaticRegisterNativesUBaseKelvinletBrushOpProps @ 14cbf6a60

void __cdecl UBaseKelvinletBrushOpProps::StaticRegisterNativesUBaseKelvinletBrushOpProps(void)

{
  return;
}

