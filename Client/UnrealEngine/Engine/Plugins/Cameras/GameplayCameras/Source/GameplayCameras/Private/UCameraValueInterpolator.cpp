// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 12

// StaticClass @ 14d56eb80

UClass * __cdecl UCameraValueInterpolator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraValueInterpolator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraValueInterpolator",
               &Z_Registration_Info_UClass_UCameraValueInterpolator.InnerSingleton,
               StaticRegisterNativesUCameraValueInterpolator,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraValueInterpolator>,
               InternalVTableHelperCtorCaller<UCameraValueInterpolator>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraValueInterpolator.InnerSingleton;
}

// UCameraValueInterpolator @ 14d58f9f0

UCameraValueInterpolator * __thiscall
UCameraValueInterpolator::UCameraValueInterpolator
          (UCameraValueInterpolator *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCameraValueInterpolator__6B_;
  return this;
}

// UCameraValueInterpolator @ 14d58fa20

UCameraValueInterpolator * __thiscall
UCameraValueInterpolator::UCameraValueInterpolator
          (UCameraValueInterpolator *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCameraValueInterpolator__6B_;
  return this;
}

// ~UCameraValueInterpolator @ 14d591d60

void __thiscall UCameraValueInterpolator::~UCameraValueInterpolator(UCameraValueInterpolator *this)

{
  *(undefined ***)this = &___7UCameraValueInterpolator__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BuildDoubleInterpolator @ 14d59ba30

TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
 __thiscall UCameraValueInterpolator::BuildDoubleInterpolator(UCameraValueInterpolator *this)

{
  TCameraValueInterpolator<double> *in_RDX;
  
  (**(code **)(*(longlong *)this + 0x2c8))();
  return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
          )in_RDX;
}

// BuildVector2dInterpolator @ 14d59bb50

TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>_>_>
 __thiscall UCameraValueInterpolator::BuildVector2dInterpolator(UCameraValueInterpolator *this)

{
  TCameraValueInterpolator<UE::Math::TVector2<double>_> *in_RDX;
  
  (**(code **)(*(longlong *)this + 0x2d0))();
  return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>_>_>
          )in_RDX;
}

// BuildVector3dInterpolator @ 14d59bb80

TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>_>_>
 __thiscall UCameraValueInterpolator::BuildVector3dInterpolator(UCameraValueInterpolator *this)

{
  TCameraValueInterpolator<UE::Math::TVector<double>_> *in_RDX;
  
  (**(code **)(*(longlong *)this + 0x2d8))();
  return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>_>_>
          )in_RDX;
}

// GetPrivateStaticClass @ 14d5a9bc0

UClass * __cdecl UCameraValueInterpolator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraValueInterpolator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraValueInterpolator",
               &Z_Registration_Info_UClass_UCameraValueInterpolator.InnerSingleton,
               StaticRegisterNativesUCameraValueInterpolator,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraValueInterpolator>,
               InternalVTableHelperCtorCaller<UCameraValueInterpolator>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraValueInterpolator.InnerSingleton;
}

// OnBuildDoubleInterpolator @ 14d5b88e0

TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
 __thiscall UCameraValueInterpolator::OnBuildDoubleInterpolator(UCameraValueInterpolator *this)

{
  TCameraValueInterpolator<double> *in_RDX;
  
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
          )in_RDX;
}

// OnBuildVector2dInterpolator @ 14d5b8c40

TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>_>_>
 __thiscall UCameraValueInterpolator::OnBuildVector2dInterpolator(UCameraValueInterpolator *this)

{
  TCameraValueInterpolator<UE::Math::TVector2<double>_> *in_RDX;
  
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>_>_>
          )in_RDX;
}

// OnBuildVector3dInterpolator @ 14d5b8cd0

TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>_>_>
 __thiscall UCameraValueInterpolator::OnBuildVector3dInterpolator(UCameraValueInterpolator *this)

{
  TCameraValueInterpolator<UE::Math::TVector<double>_> *in_RDX;
  
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>_>_>
          )in_RDX;
}

// StaticRegisterNativesUCameraValueInterpolator @ 14d5d0e10

void __cdecl UCameraValueInterpolator::StaticRegisterNativesUCameraValueInterpolator(void)

{
  return;
}

