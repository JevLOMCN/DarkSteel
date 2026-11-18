// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 9

// StaticClass @ 14d6459b0

UClass * __cdecl UCriticalDamperValueInterpolator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCriticalDamperValueInterpolator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CriticalDamperValueInterpolator",
               &Z_Registration_Info_UClass_UCriticalDamperValueInterpolator.InnerSingleton,
               StaticRegisterNativesUCriticalDamperValueInterpolator,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCriticalDamperValueInterpolator>,
               InternalVTableHelperCtorCaller<UCriticalDamperValueInterpolator>,local_res8,
               UCameraValueInterpolator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCriticalDamperValueInterpolator.InnerSingleton;
}

// UCriticalDamperValueInterpolator @ 14d657050

UCriticalDamperValueInterpolator * __thiscall
UCriticalDamperValueInterpolator::UCriticalDamperValueInterpolator
          (UCriticalDamperValueInterpolator *this,FVTableHelper *param_1)

{
  UCameraValueInterpolator::UCameraValueInterpolator((UCameraValueInterpolator *)this,param_1);
  this->DampingFactor = 1.0;
  this->_padding_ = (longlong)&___7UCriticalDamperValueInterpolator__6B_;
  return this;
}

// UCriticalDamperValueInterpolator @ 14d657080

UCriticalDamperValueInterpolator * __thiscall
UCriticalDamperValueInterpolator::UCriticalDamperValueInterpolator
          (UCriticalDamperValueInterpolator *this,FObjectInitializer *param_1)

{
  UCameraValueInterpolator::UCameraValueInterpolator((UCameraValueInterpolator *)this,param_1);
  this->DampingFactor = 1.0;
  this->_padding_ = (longlong)&___7UCriticalDamperValueInterpolator__6B_;
  return this;
}

// ~UCriticalDamperValueInterpolator @ 14d658360

void __thiscall
UCriticalDamperValueInterpolator::~UCriticalDamperValueInterpolator
          (UCriticalDamperValueInterpolator *this)

{
  this->_padding_ = (longlong)&___7UCriticalDamperValueInterpolator__6B_;
  UCameraValueInterpolator::~UCameraValueInterpolator((UCameraValueInterpolator *)this);
  return;
}

// GetPrivateStaticClass @ 14d660810

UClass * __cdecl UCriticalDamperValueInterpolator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCriticalDamperValueInterpolator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CriticalDamperValueInterpolator",
               &Z_Registration_Info_UClass_UCriticalDamperValueInterpolator.InnerSingleton,
               StaticRegisterNativesUCriticalDamperValueInterpolator,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCriticalDamperValueInterpolator>,
               InternalVTableHelperCtorCaller<UCriticalDamperValueInterpolator>,local_res8,
               UCameraValueInterpolator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCriticalDamperValueInterpolator.InnerSingleton;
}

// OnBuildDoubleInterpolator @ 14d665400

TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
 __thiscall
UCriticalDamperValueInterpolator::OnBuildDoubleInterpolator(UCriticalDamperValueInterpolator *this)

{
  undefined8 *puVar1;
  TCameraValueInterpolator<double> *in_RDX;
  
  puVar1 = ::operator_new(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = this;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    *puVar1 = &___7__TCriticalDamperValueInterpolator_N_Cameras_UE__6B_;
    UE::Cameras::FCriticalDamper::FCriticalDamper((FCriticalDamper *)(puVar1 + 5));
    *(undefined1 *)((longlong)puVar1 + 0x34) = 1;
    in_RDX->_padding_ = (longlong)puVar1;
    return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
          )in_RDX;
}

// OnBuildVector2dInterpolator @ 14d665f30

TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>_>_>
 __thiscall
UCriticalDamperValueInterpolator::OnBuildVector2dInterpolator
          (UCriticalDamperValueInterpolator *this)

{
  undefined8 *puVar1;
  TCameraValueInterpolator<UE::Math::TVector2<double>_> *in_RDX;
  
  puVar1 = ::operator_new(0x48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = this;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    *puVar1 = &___7__TCriticalDamperValueInterpolator_U__TVector2_N_Math_UE___Cameras_UE__6B_;
    UE::Cameras::FCriticalDamper::FCriticalDamper((FCriticalDamper *)(puVar1 + 7));
    *(undefined1 *)((longlong)puVar1 + 0x44) = 1;
    in_RDX->_padding_ = (longlong)puVar1;
    return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>_>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>_>_>
          )in_RDX;
}

// OnBuildVector3dInterpolator @ 14d666130

TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>_>_>
 __thiscall
UCriticalDamperValueInterpolator::OnBuildVector3dInterpolator
          (UCriticalDamperValueInterpolator *this)

{
  undefined8 *puVar1;
  TCameraValueInterpolator<UE::Math::TVector<double>_> *in_RDX;
  
  puVar1 = ::operator_new(0x58);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = this;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(undefined1 *)(puVar1 + 8) = 0;
    *puVar1 = &___7__TCriticalDamperValueInterpolator_U__TVector_N_Math_UE___Cameras_UE__6B_;
    UE::Cameras::FCriticalDamper::FCriticalDamper((FCriticalDamper *)(puVar1 + 9));
    *(undefined1 *)((longlong)puVar1 + 0x54) = 1;
    in_RDX->_padding_ = (longlong)puVar1;
    return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>_>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>_>_>
          )in_RDX;
}

// StaticRegisterNativesUCriticalDamperValueInterpolator @ 14d673370

void __cdecl
UCriticalDamperValueInterpolator::StaticRegisterNativesUCriticalDamperValueInterpolator(void)

{
  return;
}

