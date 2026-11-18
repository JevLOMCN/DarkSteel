// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 9

// StaticClass @ 14d642010

UClass * __cdecl UIIRValueInterpolator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIIRValueInterpolator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"IIRValueInterpolator",
               &Z_Registration_Info_UClass_UIIRValueInterpolator.InnerSingleton,
               StaticRegisterNativesUIIRValueInterpolator,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIIRValueInterpolator>,
               InternalVTableHelperCtorCaller<UIIRValueInterpolator>,local_res8,
               UCameraValueInterpolator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIIRValueInterpolator.InnerSingleton;
}

// UIIRValueInterpolator @ 14d657490

UIIRValueInterpolator * __thiscall
UIIRValueInterpolator::UIIRValueInterpolator(UIIRValueInterpolator *this,FVTableHelper *param_1)

{
  UCameraValueInterpolator::UCameraValueInterpolator((UCameraValueInterpolator *)this,param_1);
  this->Speed = 1.0;
  this->_padding_ = (longlong)&___7UIIRValueInterpolator__6B_;
  this->bUseFixedStep = true;
  return this;
}

// UIIRValueInterpolator @ 14d6574d0

UIIRValueInterpolator * __thiscall
UIIRValueInterpolator::UIIRValueInterpolator
          (UIIRValueInterpolator *this,FObjectInitializer *param_1)

{
  UCameraValueInterpolator::UCameraValueInterpolator((UCameraValueInterpolator *)this,param_1);
  this->Speed = 1.0;
  this->_padding_ = (longlong)&___7UIIRValueInterpolator__6B_;
  this->bUseFixedStep = true;
  return this;
}

// ~UIIRValueInterpolator @ 14d658510

void __thiscall UIIRValueInterpolator::~UIIRValueInterpolator(UIIRValueInterpolator *this)

{
  this->_padding_ = (longlong)&___7UIIRValueInterpolator__6B_;
  UCameraValueInterpolator::~UCameraValueInterpolator((UCameraValueInterpolator *)this);
  return;
}

// GetPrivateStaticClass @ 14d660d50

UClass * __cdecl UIIRValueInterpolator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIIRValueInterpolator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"IIRValueInterpolator",
               &Z_Registration_Info_UClass_UIIRValueInterpolator.InnerSingleton,
               StaticRegisterNativesUIIRValueInterpolator,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIIRValueInterpolator>,
               InternalVTableHelperCtorCaller<UIIRValueInterpolator>,local_res8,
               UCameraValueInterpolator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIIRValueInterpolator.InnerSingleton;
}

// OnBuildDoubleInterpolator @ 14d665590

TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
 __thiscall UIIRValueInterpolator::OnBuildDoubleInterpolator(UIIRValueInterpolator *this)

{
  undefined8 *puVar1;
  TCameraValueInterpolator<double> *in_RDX;
  
  puVar1 = ::operator_new(0x48);
  if (puVar1 != (undefined8 *)0x0) {
    in_RDX->_padding_ = (longlong)puVar1;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *puVar1 = &___7__TIIRValueInterpolator_N_Cameras_UE__6B_;
    *(float *)((longlong)puVar1 + 0x3c) = this->Speed;
    *(undefined1 *)(puVar1 + 8) = 1;
    *(bool *)((longlong)puVar1 + 0x41) = this->bUseFixedStep;
    return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
          )in_RDX;
}

// OnBuildVector2dInterpolator @ 14d666020

TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>_>_>
 __thiscall UIIRValueInterpolator::OnBuildVector2dInterpolator(UIIRValueInterpolator *this)

{
  undefined8 *puVar1;
  TCameraValueInterpolator<UE::Math::TVector2<double>_> *in_RDX;
  
  puVar1 = ::operator_new(0x68);
  if (puVar1 != (undefined8 *)0x0) {
    in_RDX->_padding_ = (longlong)puVar1;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0;
    *puVar1 = &___7__TIIRValueInterpolator_U__TVector2_N_Math_UE___Cameras_UE__6B_;
    *(float *)((longlong)puVar1 + 0x5c) = this->Speed;
    *(undefined1 *)(puVar1 + 0xc) = 1;
    *(bool *)((longlong)puVar1 + 0x61) = this->bUseFixedStep;
    return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>_>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>_>_>
          )in_RDX;
}

// OnBuildVector3dInterpolator @ 14d666220

TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>_>_>
 __thiscall UIIRValueInterpolator::OnBuildVector3dInterpolator(UIIRValueInterpolator *this)

{
  undefined8 *puVar1;
  TCameraValueInterpolator<UE::Math::TVector<double>_> *in_RDX;
  
  puVar1 = ::operator_new(0x88);
  if (puVar1 != (undefined8 *)0x0) {
    in_RDX->_padding_ = (longlong)puVar1;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(undefined1 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *puVar1 = &___7__TIIRValueInterpolator_U__TVector_N_Math_UE___Cameras_UE__6B_;
    *(float *)((longlong)puVar1 + 0x7c) = this->Speed;
    *(undefined1 *)(puVar1 + 0x10) = 1;
    *(bool *)((longlong)puVar1 + 0x81) = this->bUseFixedStep;
    return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>_>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>_>_>
          )in_RDX;
}

// StaticRegisterNativesUIIRValueInterpolator @ 14d6733e0

void __cdecl UIIRValueInterpolator::StaticRegisterNativesUIIRValueInterpolator(void)

{
  return;
}

