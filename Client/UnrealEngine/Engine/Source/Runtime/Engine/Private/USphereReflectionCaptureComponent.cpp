// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 14732eca0

UClass * __cdecl USphereReflectionCaptureComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USphereReflectionCaptureComponent.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SphereReflectionCaptureComponent",
               &Z_Registration_Info_UClass_USphereReflectionCaptureComponent.InnerSingleton,
               StaticRegisterNativesUSphereReflectionCaptureComponent,0x2d0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USphereReflectionCaptureComponent>,
               InternalVTableHelperCtorCaller<USphereReflectionCaptureComponent>,local_res8,
               UReflectionCaptureComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USphereReflectionCaptureComponent.InnerSingleton;
}

// USphereReflectionCaptureComponent @ 147331120

USphereReflectionCaptureComponent * __thiscall
USphereReflectionCaptureComponent::USphereReflectionCaptureComponent
          (USphereReflectionCaptureComponent *this,FVTableHelper *param_1)

{
  UReflectionCaptureComponent::UReflectionCaptureComponent
            ((UReflectionCaptureComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->PreviewInfluenceRadius).field0_0x0.DebugPtr = (UDrawSphereComponent *)0x0;
  return this;
}

// ~USphereReflectionCaptureComponent @ 1473314d0

void __thiscall
USphereReflectionCaptureComponent::~USphereReflectionCaptureComponent
          (USphereReflectionCaptureComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  UReflectionCaptureComponent::~UReflectionCaptureComponent((UReflectionCaptureComponent *)this);
  return;
}

// GetInfluenceBoundingRadius @ 147332490

float __thiscall
USphereReflectionCaptureComponent::GetInfluenceBoundingRadius
          (USphereReflectionCaptureComponent *this)

{
  return this->InfluenceRadius;
}

// GetPrivateStaticClass @ 147332cd0

UClass * __cdecl USphereReflectionCaptureComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USphereReflectionCaptureComponent.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SphereReflectionCaptureComponent",
               &Z_Registration_Info_UClass_USphereReflectionCaptureComponent.InnerSingleton,
               StaticRegisterNativesUSphereReflectionCaptureComponent,0x2d0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USphereReflectionCaptureComponent>,
               InternalVTableHelperCtorCaller<USphereReflectionCaptureComponent>,local_res8,
               UReflectionCaptureComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USphereReflectionCaptureComponent.InnerSingleton;
}

// StaticRegisterNativesUSphereReflectionCaptureComponent @ 147333460

void __cdecl
USphereReflectionCaptureComponent::StaticRegisterNativesUSphereReflectionCaptureComponent(void)

{
  return;
}

// USphereReflectionCaptureComponent @ 14792c350

USphereReflectionCaptureComponent * __thiscall
USphereReflectionCaptureComponent::USphereReflectionCaptureComponent
          (USphereReflectionCaptureComponent *this,FObjectInitializer *param_1)

{
  UReflectionCaptureComponent::UReflectionCaptureComponent
            ((UReflectionCaptureComponent *)this,param_1);
  this->InfluenceRadius = 3000.0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->PreviewInfluenceRadius).field0_0x0.DebugPtr = (UDrawSphereComponent *)0x0;
  return this;
}

// UpdatePreviewShape @ 14797ae80

void __thiscall
USphereReflectionCaptureComponent::UpdatePreviewShape(USphereReflectionCaptureComponent *this)

{
  UDrawSphereComponent *pUVar1;
  
  pUVar1 = (this->PreviewInfluenceRadius).field0_0x0.DebugPtr;
  if (pUVar1 != (UDrawSphereComponent *)0x0) {
    *(float *)&pUVar1->field_0x568 = this->InfluenceRadius;
  }
  UReflectionCaptureComponent::UpdatePreviewShape((UReflectionCaptureComponent *)this);
  return;
}

