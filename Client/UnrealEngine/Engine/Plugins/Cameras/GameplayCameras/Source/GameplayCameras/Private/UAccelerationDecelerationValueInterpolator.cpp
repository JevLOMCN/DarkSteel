// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 9

// StaticClass @ 14d649fd0

UClass * __cdecl UAccelerationDecelerationValueInterpolator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAccelerationDecelerationValueInterpolator.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"AccelerationDecelerationValueInterpolator",
               &Z_Registration_Info_UClass_UAccelerationDecelerationValueInterpolator.InnerSingleton
               ,StaticRegisterNativesUAccelerationDecelerationValueInterpolator,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAccelerationDecelerationValueInterpolator>,
               InternalVTableHelperCtorCaller<UAccelerationDecelerationValueInterpolator>,local_res8
               ,UCameraValueInterpolator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAccelerationDecelerationValueInterpolator.InnerSingleton;
}

// UAccelerationDecelerationValueInterpolator @ 14d656580

UAccelerationDecelerationValueInterpolator * __thiscall
UAccelerationDecelerationValueInterpolator::UAccelerationDecelerationValueInterpolator
          (UAccelerationDecelerationValueInterpolator *this,FVTableHelper *param_1)

{
  UCameraValueInterpolator::UCameraValueInterpolator((UCameraValueInterpolator *)this,param_1);
  this->Acceleration = 1.0;
  this->_padding_ = (longlong)&___7UAccelerationDecelerationValueInterpolator__6B_;
  this->MaxSpeed = 10.0;
  this->Deceleration = 1.0;
  return this;
}

// UAccelerationDecelerationValueInterpolator @ 14d6565c0

UAccelerationDecelerationValueInterpolator * __thiscall
UAccelerationDecelerationValueInterpolator::UAccelerationDecelerationValueInterpolator
          (UAccelerationDecelerationValueInterpolator *this,FObjectInitializer *param_1)

{
  UCameraValueInterpolator::UCameraValueInterpolator((UCameraValueInterpolator *)this,param_1);
  this->Acceleration = 1.0;
  this->_padding_ = (longlong)&___7UAccelerationDecelerationValueInterpolator__6B_;
  this->MaxSpeed = 10.0;
  this->Deceleration = 1.0;
  return this;
}

// ~UAccelerationDecelerationValueInterpolator @ 14d658140

void __thiscall
UAccelerationDecelerationValueInterpolator::~UAccelerationDecelerationValueInterpolator
          (UAccelerationDecelerationValueInterpolator *this)

{
  this->_padding_ = (longlong)&___7UAccelerationDecelerationValueInterpolator__6B_;
  UCameraValueInterpolator::~UCameraValueInterpolator((UCameraValueInterpolator *)this);
  return;
}

// GetPrivateStaticClass @ 14d660160

UClass * __cdecl UAccelerationDecelerationValueInterpolator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAccelerationDecelerationValueInterpolator.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"AccelerationDecelerationValueInterpolator",
               &Z_Registration_Info_UClass_UAccelerationDecelerationValueInterpolator.InnerSingleton
               ,StaticRegisterNativesUAccelerationDecelerationValueInterpolator,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAccelerationDecelerationValueInterpolator>,
               InternalVTableHelperCtorCaller<UAccelerationDecelerationValueInterpolator>,local_res8
               ,UCameraValueInterpolator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAccelerationDecelerationValueInterpolator.InnerSingleton;
}

// OnBuildDoubleInterpolator @ 14d665390

TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
 __thiscall
UAccelerationDecelerationValueInterpolator::OnBuildDoubleInterpolator
          (UAccelerationDecelerationValueInterpolator *this)

{
  undefined8 *puVar1;
  TCameraValueInterpolator<double> *in_RDX;
  
  puVar1 = ::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = this;
    *puVar1 = &___7__TAccelerationDecelerationValueInterpolator_N_Cameras_UE__6B_;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    in_RDX->_padding_ = (longlong)puVar1;
    return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
          )in_RDX;
}

// OnBuildVector2dInterpolator @ 14d665eb0

TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>_>_>
 __thiscall
UAccelerationDecelerationValueInterpolator::OnBuildVector2dInterpolator
          (UAccelerationDecelerationValueInterpolator *this)

{
  undefined8 *puVar1;
  TCameraValueInterpolator<UE::Math::TVector2<double>_> *in_RDX;
  
  puVar1 = ::operator_new(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = this;
    in_RDX->_padding_ = (longlong)puVar1;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    *puVar1 = &
              ___7__TAccelerationDecelerationValueInterpolator_U__TVector2_N_Math_UE___Cameras_UE__6B_
    ;
    *(undefined4 *)(puVar1 + 7) = 0;
    return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>_>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>_>_>
          )in_RDX;
}

// OnBuildVector3dInterpolator @ 14d6660b0

TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>_>_>
 __thiscall
UAccelerationDecelerationValueInterpolator::OnBuildVector3dInterpolator
          (UAccelerationDecelerationValueInterpolator *this)

{
  undefined8 *puVar1;
  TCameraValueInterpolator<UE::Math::TVector<double>_> *in_RDX;
  
  puVar1 = ::operator_new(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = this;
    in_RDX->_padding_ = (longlong)puVar1;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(undefined1 *)(puVar1 + 8) = 0;
    *puVar1 = &
              ___7__TAccelerationDecelerationValueInterpolator_U__TVector_N_Math_UE___Cameras_UE__6B_
    ;
    *(undefined4 *)(puVar1 + 9) = 0;
    return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>_>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>_>_>
          )in_RDX;
}

// StaticRegisterNativesUAccelerationDecelerationValueInterpolator @ 14d6732b0

void __cdecl
UAccelerationDecelerationValueInterpolator::
StaticRegisterNativesUAccelerationDecelerationValueInterpolator(void)

{
  return;
}

