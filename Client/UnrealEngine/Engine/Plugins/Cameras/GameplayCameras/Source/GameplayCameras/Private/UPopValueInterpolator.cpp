// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 9

// StaticClass @ 14d56f800

UClass * __cdecl UPopValueInterpolator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPopValueInterpolator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"PopValueInterpolator",
               &Z_Registration_Info_UClass_UPopValueInterpolator.InnerSingleton,
               StaticRegisterNativesUPopValueInterpolator,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPopValueInterpolator>,
               InternalVTableHelperCtorCaller<UPopValueInterpolator>,local_res8,
               UCameraValueInterpolator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPopValueInterpolator.InnerSingleton;
}

// UPopValueInterpolator @ 14d5900b0

UPopValueInterpolator * __thiscall
UPopValueInterpolator::UPopValueInterpolator(UPopValueInterpolator *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPopValueInterpolator__6B_;
  return this;
}

// UPopValueInterpolator @ 14d5900e0

UPopValueInterpolator * __thiscall
UPopValueInterpolator::UPopValueInterpolator
          (UPopValueInterpolator *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPopValueInterpolator__6B_;
  return this;
}

// ~UPopValueInterpolator @ 14d591ee0

void __thiscall UPopValueInterpolator::~UPopValueInterpolator(UPopValueInterpolator *this)

{
  *(undefined ***)this = &___7UCameraValueInterpolator__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14d5aa300

UClass * __cdecl UPopValueInterpolator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPopValueInterpolator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"PopValueInterpolator",
               &Z_Registration_Info_UClass_UPopValueInterpolator.InnerSingleton,
               StaticRegisterNativesUPopValueInterpolator,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPopValueInterpolator>,
               InternalVTableHelperCtorCaller<UPopValueInterpolator>,local_res8,
               UCameraValueInterpolator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPopValueInterpolator.InnerSingleton;
}

// OnBuildDoubleInterpolator @ 14d5b8900

TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
 __thiscall UPopValueInterpolator::OnBuildDoubleInterpolator(UPopValueInterpolator *this)

{
  undefined8 *puVar1;
  TCameraValueInterpolator<double> *in_RDX;
  
  puVar1 = ::operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    *puVar1 = &___7__TPopValueInterpolator_N_Cameras_UE__6B_;
    puVar1[1] = this;
    in_RDX->_padding_ = (longlong)puVar1;
    return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
          )in_RDX;
}

// OnBuildVector2dInterpolator @ 14d5b8c60

TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>_>_>
 __thiscall UPopValueInterpolator::OnBuildVector2dInterpolator(UPopValueInterpolator *this)

{
  undefined8 *puVar1;
  TCameraValueInterpolator<UE::Math::TVector2<double>_> *in_RDX;
  
  puVar1 = ::operator_new(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = this;
    in_RDX->_padding_ = (longlong)puVar1;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    *puVar1 = &___7__TPopValueInterpolator_U__TVector2_N_Math_UE___Cameras_UE__6B_;
    return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>_>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>_>_>
          )in_RDX;
}

// OnBuildVector3dInterpolator @ 14d5b8cf0

TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>_>_>
 __thiscall UPopValueInterpolator::OnBuildVector3dInterpolator(UPopValueInterpolator *this)

{
  undefined8 *puVar1;
  TCameraValueInterpolator<UE::Math::TVector<double>_> *in_RDX;
  
  puVar1 = ::operator_new(0x48);
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
    *puVar1 = &___7__TPopValueInterpolator_U__TVector_N_Math_UE___Cameras_UE__6B_;
    return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>_>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>_>_>
          )in_RDX;
}

// StaticRegisterNativesUPopValueInterpolator @ 14d5d0eb0

void __cdecl UPopValueInterpolator::StaticRegisterNativesUPopValueInterpolator(void)

{
  return;
}

