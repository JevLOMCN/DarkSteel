// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147265eb0

UClass * __cdecl UBoxReflectionCaptureComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBoxReflectionCaptureComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BoxReflectionCaptureComponent",
               &Z_Registration_Info_UClass_UBoxReflectionCaptureComponent.InnerSingleton,
               StaticRegisterNativesUBoxReflectionCaptureComponent,0x2d0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UBoxReflectionCaptureComponent>,
               InternalVTableHelperCtorCaller<UBoxReflectionCaptureComponent>,local_res8,
               UReflectionCaptureComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBoxReflectionCaptureComponent.InnerSingleton;
}

// UBoxReflectionCaptureComponent @ 14726ca60

UBoxReflectionCaptureComponent * __thiscall
UBoxReflectionCaptureComponent::UBoxReflectionCaptureComponent
          (UBoxReflectionCaptureComponent *this,FVTableHelper *param_1)

{
  UReflectionCaptureComponent::UReflectionCaptureComponent
            ((UReflectionCaptureComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->PreviewInfluenceBox).field0_0x0.DebugPtr = (UBoxComponent *)0x0;
  (this->PreviewCaptureBox).field0_0x0.DebugPtr = (UBoxComponent *)0x0;
  return this;
}

// ~UBoxReflectionCaptureComponent @ 14726d2e0

void __thiscall
UBoxReflectionCaptureComponent::~UBoxReflectionCaptureComponent
          (UBoxReflectionCaptureComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UReflectionCaptureComponent::~UReflectionCaptureComponent((UReflectionCaptureComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14726f090

UClass * __cdecl UBoxReflectionCaptureComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBoxReflectionCaptureComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BoxReflectionCaptureComponent",
               &Z_Registration_Info_UClass_UBoxReflectionCaptureComponent.InnerSingleton,
               StaticRegisterNativesUBoxReflectionCaptureComponent,0x2d0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UBoxReflectionCaptureComponent>,
               InternalVTableHelperCtorCaller<UBoxReflectionCaptureComponent>,local_res8,
               UReflectionCaptureComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBoxReflectionCaptureComponent.InnerSingleton;
}

// StaticRegisterNativesUBoxReflectionCaptureComponent @ 147270980

void __cdecl
UBoxReflectionCaptureComponent::StaticRegisterNativesUBoxReflectionCaptureComponent(void)

{
  return;
}

// UBoxReflectionCaptureComponent @ 147929c10

UBoxReflectionCaptureComponent * __thiscall
UBoxReflectionCaptureComponent::UBoxReflectionCaptureComponent
          (UBoxReflectionCaptureComponent *this,FObjectInitializer *param_1)

{
  UReflectionCaptureComponent::UReflectionCaptureComponent
            ((UReflectionCaptureComponent *)this,param_1);
  this->BoxTransitionDistance = 100.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->PreviewInfluenceBox).field0_0x0.DebugPtr = (UBoxComponent *)0x0;
  (this->PreviewCaptureBox).field0_0x0.DebugPtr = (UBoxComponent *)0x0;
  return this;
}

// GetInfluenceBoundingRadius @ 147949470

float __thiscall
UBoxReflectionCaptureComponent::GetInfluenceBoundingRadius(UBoxReflectionCaptureComponent *this)

{
  return (float)SQRT((double)this->_padding_ * (double)this->_padding_ +
                     (double)this->_padding_ * (double)this->_padding_ +
                     (double)this->_padding_ * (double)this->_padding_);
}

// UpdatePreviewShape @ 14797ac70

void __thiscall
UBoxReflectionCaptureComponent::UpdatePreviewShape(UBoxReflectionCaptureComponent *this)

{
  UBoxComponent *pUVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pUVar1 = (this->PreviewCaptureBox).field0_0x0.DebugPtr;
  if (pUVar1 != (UBoxComponent *)0x0) {
    dVar3 = (double)this->BoxTransitionDistance;
    uVar4 = ((double)this->_padding_ - dVar3) / (double)this->_padding_;
    if ((double)uVar4 <= UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z) {
      uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    uVar2 = ((double)this->_padding_ - dVar3) / (double)this->_padding_;
    uVar5 = ((double)this->_padding_ - dVar3) / (double)this->_padding_;
    if ((double)uVar2 <= UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y) {
      uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    }
    if ((double)uVar5 <= UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) {
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    }
    (pUVar1->BoxExtent).field0_0x0._s_0.X = (double)uVar5;
    (pUVar1->BoxExtent).field0_0x0._s_0.Y = (double)uVar2;
    (pUVar1->BoxExtent).field0_0x0._s_0.Z = (double)uVar4;
  }
  UReflectionCaptureComponent::UpdatePreviewShape((UReflectionCaptureComponent *)this);
  return;
}

