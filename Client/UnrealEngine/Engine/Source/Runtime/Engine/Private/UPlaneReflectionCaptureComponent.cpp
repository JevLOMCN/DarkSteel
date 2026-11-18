// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147322250

UClass * __cdecl UPlaneReflectionCaptureComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlaneReflectionCaptureComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlaneReflectionCaptureComponent",
               &Z_Registration_Info_UClass_UPlaneReflectionCaptureComponent.InnerSingleton,
               StaticRegisterNativesUPlaneReflectionCaptureComponent,0x2d0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPlaneReflectionCaptureComponent>,
               InternalVTableHelperCtorCaller<UPlaneReflectionCaptureComponent>,local_res8,
               UReflectionCaptureComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlaneReflectionCaptureComponent.InnerSingleton;
}

// UPlaneReflectionCaptureComponent @ 147324bc0

UPlaneReflectionCaptureComponent * __thiscall
UPlaneReflectionCaptureComponent::UPlaneReflectionCaptureComponent
          (UPlaneReflectionCaptureComponent *this,FVTableHelper *param_1)

{
  UReflectionCaptureComponent::UReflectionCaptureComponent
            ((UReflectionCaptureComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->PreviewInfluenceRadius).field0_0x0.DebugPtr = (UDrawSphereComponent *)0x0;
  (this->PreviewCaptureBox).field0_0x0.DebugPtr = (UBoxComponent *)0x0;
  return this;
}

// ~UPlaneReflectionCaptureComponent @ 1473252e0

void __thiscall
UPlaneReflectionCaptureComponent::~UPlaneReflectionCaptureComponent
          (UPlaneReflectionCaptureComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UReflectionCaptureComponent::~UReflectionCaptureComponent((UReflectionCaptureComponent *)this);
  return;
}

// GetPrivateStaticClass @ 147327250

UClass * __cdecl UPlaneReflectionCaptureComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlaneReflectionCaptureComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlaneReflectionCaptureComponent",
               &Z_Registration_Info_UClass_UPlaneReflectionCaptureComponent.InnerSingleton,
               StaticRegisterNativesUPlaneReflectionCaptureComponent,0x2d0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPlaneReflectionCaptureComponent>,
               InternalVTableHelperCtorCaller<UPlaneReflectionCaptureComponent>,local_res8,
               UReflectionCaptureComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlaneReflectionCaptureComponent.InnerSingleton;
}

// StaticRegisterNativesUPlaneReflectionCaptureComponent @ 147328260

void __cdecl
UPlaneReflectionCaptureComponent::StaticRegisterNativesUPlaneReflectionCaptureComponent(void)

{
  return;
}

// UPlaneReflectionCaptureComponent @ 147929e60

UPlaneReflectionCaptureComponent * __thiscall
UPlaneReflectionCaptureComponent::UPlaneReflectionCaptureComponent
          (UPlaneReflectionCaptureComponent *this,FObjectInitializer *param_1)

{
  UReflectionCaptureComponent::UReflectionCaptureComponent
            ((UReflectionCaptureComponent *)this,param_1);
  this->InfluenceRadiusScale = 2.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->PreviewInfluenceRadius).field0_0x0.DebugPtr = (UDrawSphereComponent *)0x0;
  (this->PreviewCaptureBox).field0_0x0.DebugPtr = (UBoxComponent *)0x0;
  return this;
}

// GetInfluenceBoundingRadius @ 1479494c0

float __thiscall
UPlaneReflectionCaptureComponent::GetInfluenceBoundingRadius(UPlaneReflectionCaptureComponent *this)

{
  return (float)(SQRT((double)this->_padding_ * (double)this->_padding_ +
                      (double)this->_padding_ * (double)this->_padding_) *
                (double)this->InfluenceRadiusScale);
}

// UpdatePreviewShape @ 14797ad50

void __thiscall
UPlaneReflectionCaptureComponent::UpdatePreviewShape(UPlaneReflectionCaptureComponent *this)

{
  UDrawSphereComponent *pUVar1;
  undefined4 uVar2;
  
  pUVar1 = (this->PreviewInfluenceRadius).field0_0x0.DebugPtr;
  if (pUVar1 != (UDrawSphereComponent *)0x0) {
    uVar2 = (**(code **)(this->_padding_ + 0x648))();
    *(undefined4 *)&pUVar1->field_0x568 = uVar2;
  }
  UReflectionCaptureComponent::UpdatePreviewShape((UReflectionCaptureComponent *)this);
  return;
}

