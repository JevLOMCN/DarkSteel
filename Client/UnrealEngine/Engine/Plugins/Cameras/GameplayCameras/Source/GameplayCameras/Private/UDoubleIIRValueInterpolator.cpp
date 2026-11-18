// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 9

// StaticClass @ 14d641f50

UClass * __cdecl UDoubleIIRValueInterpolator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDoubleIIRValueInterpolator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"DoubleIIRValueInterpolator",
               &Z_Registration_Info_UClass_UDoubleIIRValueInterpolator.InnerSingleton,
               StaticRegisterNativesUDoubleIIRValueInterpolator,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDoubleIIRValueInterpolator>,
               InternalVTableHelperCtorCaller<UDoubleIIRValueInterpolator>,local_res8,
               UCameraValueInterpolator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDoubleIIRValueInterpolator.InnerSingleton;
}

// UDoubleIIRValueInterpolator @ 14d657190

UDoubleIIRValueInterpolator * __thiscall
UDoubleIIRValueInterpolator::UDoubleIIRValueInterpolator
          (UDoubleIIRValueInterpolator *this,FVTableHelper *param_1)

{
  UCameraValueInterpolator::UCameraValueInterpolator((UCameraValueInterpolator *)this,param_1);
  this->PrimarySpeed = 1.0;
  this->_padding_ = (longlong)&___7UDoubleIIRValueInterpolator__6B_;
  this->IntermediateSpeed = 1.0;
  this->bUseFixedStep = true;
  return this;
}

// UDoubleIIRValueInterpolator @ 14d6571d0

UDoubleIIRValueInterpolator * __thiscall
UDoubleIIRValueInterpolator::UDoubleIIRValueInterpolator
          (UDoubleIIRValueInterpolator *this,FObjectInitializer *param_1)

{
  UCameraValueInterpolator::UCameraValueInterpolator((UCameraValueInterpolator *)this,param_1);
  this->PrimarySpeed = 1.0;
  this->_padding_ = (longlong)&___7UDoubleIIRValueInterpolator__6B_;
  this->IntermediateSpeed = 1.0;
  this->bUseFixedStep = true;
  return this;
}

// ~UDoubleIIRValueInterpolator @ 14d6583b0

void __thiscall
UDoubleIIRValueInterpolator::~UDoubleIIRValueInterpolator(UDoubleIIRValueInterpolator *this)

{
  this->_padding_ = (longlong)&___7UDoubleIIRValueInterpolator__6B_;
  UCameraValueInterpolator::~UCameraValueInterpolator((UCameraValueInterpolator *)this);
  return;
}

// GetPrivateStaticClass @ 14d660990

UClass * __cdecl UDoubleIIRValueInterpolator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDoubleIIRValueInterpolator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"DoubleIIRValueInterpolator",
               &Z_Registration_Info_UClass_UDoubleIIRValueInterpolator.InnerSingleton,
               StaticRegisterNativesUDoubleIIRValueInterpolator,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDoubleIIRValueInterpolator>,
               InternalVTableHelperCtorCaller<UDoubleIIRValueInterpolator>,local_res8,
               UCameraValueInterpolator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDoubleIIRValueInterpolator.InnerSingleton;
}

// OnBuildDoubleInterpolator @ 14d665490

TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
 __thiscall
UDoubleIIRValueInterpolator::OnBuildDoubleInterpolator(UDoubleIIRValueInterpolator *this)

{
  float fVar1;
  bool bVar2;
  undefined8 *puVar3;
  TCameraValueInterpolator<double> *in_RDX;
  
  puVar3 = ::operator_new(200);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = this;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined1 *)(puVar3 + 4) = 0;
    *puVar3 = &___7__TDoubleIIRValueInterpolator_N_Cameras_UE__6B_;
    bVar2 = this->bUseFixedStep;
    *(float *)((longlong)puVar3 + 100) = this->IntermediateSpeed;
    *(bool *)((longlong)puVar3 + 0x69) = bVar2;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    *(undefined1 *)(puVar3 + 9) = 0;
    puVar3[5] = &___7__TIIRValueInterpolator_N_Cameras_UE__6B_;
    *(undefined4 *)(puVar3 + 0xc) = 0;
    *(undefined1 *)(puVar3 + 0xd) = 1;
    fVar1 = this->PrimarySpeed;
    *(bool *)((longlong)puVar3 + 0xb1) = this->bUseFixedStep;
    *(float *)((longlong)puVar3 + 0xac) = fVar1;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    *(undefined1 *)(puVar3 + 0x12) = 0;
    puVar3[0xe] = &___7__TIIRValueInterpolator_N_Cameras_UE__6B_;
    *(undefined4 *)(puVar3 + 0x15) = 0;
    *(undefined1 *)(puVar3 + 0x16) = 1;
    *(bool *)(puVar3 + 0x18) = this->bUseFixedStep;
    in_RDX->_padding_ = (longlong)puVar3;
    return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
          )in_RDX;
}

// OnBuildVector2dInterpolator @ 14d665fc0

TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>_>_>
 __thiscall
UDoubleIIRValueInterpolator::OnBuildVector2dInterpolator(UDoubleIIRValueInterpolator *this)

{
  TDoubleIIRValueInterpolator<UE::Math::TVector2<double>_> *pTVar1;
  TCameraValueInterpolator<UE::Math::TVector2<double>_> *in_RDX;
  
  pTVar1 = ::operator_new(0x120);
  if (pTVar1 != (TDoubleIIRValueInterpolator<UE::Math::TVector2<double>_> *)0x0) {
    pTVar1 = UE::Cameras::TDoubleIIRValueInterpolator<UE::Math::TVector2<double>_>::
             TDoubleIIRValueInterpolator<UE::Math::TVector2<double>_>(pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>_>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>_>_>
          )in_RDX;
}

// OnBuildVector3dInterpolator @ 14d6661c0

TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>_>_>
 __thiscall
UDoubleIIRValueInterpolator::OnBuildVector3dInterpolator(UDoubleIIRValueInterpolator *this)

{
  TDoubleIIRValueInterpolator<UE::Math::TVector<double>_> *pTVar1;
  TCameraValueInterpolator<UE::Math::TVector<double>_> *in_RDX;
  
  pTVar1 = ::operator_new(0x178);
  if (pTVar1 != (TDoubleIIRValueInterpolator<UE::Math::TVector<double>_> *)0x0) {
    pTVar1 = UE::Cameras::TDoubleIIRValueInterpolator<UE::Math::TVector<double>_>::
             TDoubleIIRValueInterpolator<UE::Math::TVector<double>_>(pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>_>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>_>_>
          )in_RDX;
}

// StaticRegisterNativesUDoubleIIRValueInterpolator @ 14d673390

void __cdecl UDoubleIIRValueInterpolator::StaticRegisterNativesUDoubleIIRValueInterpolator(void)

{
  return;
}

