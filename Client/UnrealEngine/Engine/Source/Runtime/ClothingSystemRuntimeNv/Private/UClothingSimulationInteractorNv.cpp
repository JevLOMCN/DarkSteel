// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeNv
// Functions: 18

// StaticClass @ 148c35ab0

UClass * __cdecl UClothingSimulationInteractorNv::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothingSimulationInteractorNv.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeNv",L"ClothingSimulationInteractorNv",
               &Z_Registration_Info_UClass_UClothingSimulationInteractorNv.InnerSingleton,
               StaticRegisterNativesUClothingSimulationInteractorNv,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UClothingSimulationInteractorNv>,
               InternalVTableHelperCtorCaller<UClothingSimulationInteractorNv>,local_res8,
               UClothingSimulationInteractor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothingSimulationInteractorNv.InnerSingleton;
}

// UClothingSimulationInteractorNv @ 148c369b0

UClothingSimulationInteractorNv * __thiscall
UClothingSimulationInteractorNv::UClothingSimulationInteractorNv
          (UClothingSimulationInteractorNv *this,FVTableHelper *param_1)

{
  UClothingSimulationInteractor::UClothingSimulationInteractor
            ((UClothingSimulationInteractor *)this,param_1);
  *(undefined ***)this = &___7UClothingSimulationInteractorNv__6B_;
  return this;
}

// UClothingSimulationInteractorNv @ 148c369e0

UClothingSimulationInteractorNv * __thiscall
UClothingSimulationInteractorNv::UClothingSimulationInteractorNv
          (UClothingSimulationInteractorNv *this,FObjectInitializer *param_1)

{
  UClothingSimulationInteractor::UClothingSimulationInteractor
            ((UClothingSimulationInteractor *)this,param_1);
  *(undefined ***)this = &___7UClothingSimulationInteractorNv__6B_;
  return this;
}

// ~UClothingSimulationInteractorNv @ 148c36ac0

void __thiscall
UClothingSimulationInteractorNv::~UClothingSimulationInteractorNv
          (UClothingSimulationInteractorNv *this)

{
  *(undefined ***)this = &___7UClothingSimulationInteractorNv__6B_;
  UClothingSimulationInteractor::~UClothingSimulationInteractor
            ((UClothingSimulationInteractor *)this);
  return;
}

// ClothConfigUpdated @ 148c36cf0

void __thiscall
UClothingSimulationInteractorNv::ClothConfigUpdated(UClothingSimulationInteractorNv *this)

{
  return;
}

// CreateClothingInteractor @ 148c36d00

UClothingInteractor * __thiscall
UClothingSimulationInteractorNv::CreateClothingInteractor(UClothingSimulationInteractorNv *this)

{
  return (UClothingInteractor *)0x0;
}

// DisableGravityOverride @ 148c36d40

void __thiscall
UClothingSimulationInteractorNv::DisableGravityOverride(UClothingSimulationInteractorNv *this)

{
  return;
}

// EnableGravityOverride @ 148c36da0

void __thiscall
UClothingSimulationInteractorNv::EnableGravityOverride
          (UClothingSimulationInteractorNv *this,TVector<double> *param_1)

{
  return;
}

// GetPrivateStaticClass @ 148c37040

UClass * __cdecl UClothingSimulationInteractorNv::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothingSimulationInteractorNv.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeNv",L"ClothingSimulationInteractorNv",
               &Z_Registration_Info_UClass_UClothingSimulationInteractorNv.InnerSingleton,
               StaticRegisterNativesUClothingSimulationInteractorNv,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UClothingSimulationInteractorNv>,
               InternalVTableHelperCtorCaller<UClothingSimulationInteractorNv>,local_res8,
               UClothingSimulationInteractor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothingSimulationInteractorNv.InnerSingleton;
}

// PhysicsAssetUpdated @ 148c375c0

void __thiscall
UClothingSimulationInteractorNv::PhysicsAssetUpdated(UClothingSimulationInteractorNv *this)

{
  return;
}

// SetAnimDriveDamperStiffness @ 148c37740

void __thiscall
UClothingSimulationInteractorNv::SetAnimDriveDamperStiffness
          (UClothingSimulationInteractorNv *this,float param_1)

{
  return;
}

// SetAnimDriveSpringStiffness @ 148c37750

void __thiscall
UClothingSimulationInteractorNv::SetAnimDriveSpringStiffness
          (UClothingSimulationInteractorNv *this,float param_1)

{
  return;
}

// SetMaxNumIterations @ 148c37760

void __thiscall
UClothingSimulationInteractorNv::SetMaxNumIterations
          (UClothingSimulationInteractorNv *this,int param_1)

{
  return;
}

// SetNumIterations @ 148c37770

void __thiscall
UClothingSimulationInteractorNv::SetNumIterations(UClothingSimulationInteractorNv *this,int param_1)

{
  return;
}

// SetNumSubsteps @ 148c37780

void __thiscall
UClothingSimulationInteractorNv::SetNumSubsteps(UClothingSimulationInteractorNv *this,int param_1)

{
  return;
}

// StaticRegisterNativesUClothingSimulationInteractorNv @ 148c377e0

void __cdecl
UClothingSimulationInteractorNv::StaticRegisterNativesUClothingSimulationInteractorNv(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UClothingSimulationInteractorNv_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Sync @ 148c37840

void __thiscall
UClothingSimulationInteractorNv::Sync
          (UClothingSimulationInteractorNv *this,IClothingSimulationInterface *param_1,
          IClothingSimulationContext *param_2)

{
  return;
}

// execSetAnimDriveDamperStiffness @ 148c37b50

void __cdecl
UClothingSimulationInteractorNv::execSetAnimDriveDamperStiffness
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

