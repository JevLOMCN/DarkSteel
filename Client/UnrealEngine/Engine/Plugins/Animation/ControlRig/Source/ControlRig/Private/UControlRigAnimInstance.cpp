// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticClass @ 14a1ff650

UClass * __cdecl UControlRigAnimInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigAnimInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigAnimInstance",
               &Z_Registration_Info_UClass_UControlRigAnimInstance.InnerSingleton,
               StaticRegisterNativesUControlRigAnimInstance,0x430,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UControlRigAnimInstance>,
               InternalVTableHelperCtorCaller<UControlRigAnimInstance>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigAnimInstance.InnerSingleton;
}

// UControlRigAnimInstance @ 14a2223f0

UControlRigAnimInstance * __thiscall
UControlRigAnimInstance::UControlRigAnimInstance
          (UControlRigAnimInstance *this,FVTableHelper *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  *(undefined ***)this = &___7UControlRigAnimInstance__6B_;
  return this;
}

// UControlRigAnimInstance @ 14a222420

UControlRigAnimInstance * __thiscall
UControlRigAnimInstance::UControlRigAnimInstance
          (UControlRigAnimInstance *this,FObjectInitializer *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->field_0x31 = this->field_0x31 & 0xfe;
  *(undefined ***)this = &___7UControlRigAnimInstance__6B_;
  return this;
}

// ~UControlRigAnimInstance @ 14a226910

void __thiscall UControlRigAnimInstance::~UControlRigAnimInstance(UControlRigAnimInstance *this)

{
  *(undefined ***)this = &___7UControlRigAnimInstance__6B_;
  UAnimInstance::~UAnimInstance((UAnimInstance *)this);
  return;
}

// CreateAnimInstanceProxy @ 14a24a220

FAnimInstanceProxy * __thiscall
UControlRigAnimInstance::CreateAnimInstanceProxy(UControlRigAnimInstance *this)

{
  FAnimInstanceProxy *this_00;
  
  this_00 = ::operator_new(0x8f0);
  if (this_00 != (FAnimInstanceProxy *)0x0) {
    FAnimInstanceProxy::FAnimInstanceProxy(this_00,(UAnimInstance *)this);
    *(undefined ***)this_00 = &___7FControlRigAnimInstanceProxy__6B_;
    *(undefined8 *)&this_00->field_0x808 = 0;
    *(undefined8 *)(this_00 + 1) = 0;
    this_00[1].QueuedDrawDebugItems.ArrayNum = 0;
    this_00[1].QueuedDrawDebugItems.ArrayMax = 0;
    *(undefined4 *)this_00[1].ComponentTransform.Rotation.XY.m128d_f64 = 0;
    *(undefined4 *)((longlong)this_00[1].ComponentTransform.Rotation.XY.m128d_f64 + 4) = 0x80;
    *(undefined4 *)((longlong)this_00[1].ComponentTransform.Rotation.XY.m128d_f64 + 0xc) = 0;
    *(undefined4 *)(this_00[1].ComponentTransform.Rotation.XY.m128d_f64 + 1) = 0xffffffff;
    this_00[1].ComponentTransform.Rotation.ZW.m128d_f64[1] = 0.0;
    *(undefined4 *)this_00[1].ComponentTransform.Translation.XY.m128d_f64 = 0;
    this_00[1].ComponentTransform.Translation.XY.m128d_f64[1] = 0.0;
    this_00[1].ComponentTransform.Translation.ZW.m128d_f64[0] = 0.0;
    this_00[1].ComponentTransform.Scale3D.XY.m128d_f64[1] = 0.0;
    *(undefined4 *)this_00[1].ComponentTransform.Scale3D.ZW.m128d_f64 = 0;
    *(undefined4 *)((longlong)this_00[1].ComponentTransform.Scale3D.ZW.m128d_f64 + 4) = 0x80;
    *(undefined4 *)((longlong)this_00[1].ComponentTransform.Scale3D.ZW.m128d_f64 + 0xc) = 0;
    *(undefined4 *)(this_00[1].ComponentTransform.Scale3D.ZW.m128d_f64 + 1) = 0xffffffff;
    this_00[1].ComponentRelativeTransform.Rotation.XY.m128d_f64[1] = 0.0;
    *(undefined4 *)this_00[1].ComponentRelativeTransform.Rotation.ZW.m128d_f64 = 0;
    this_00[1].ComponentRelativeTransform.Rotation.ZW.m128d_f64[1] = 0.0;
    this_00[1].ComponentRelativeTransform.Translation.XY.m128d_f64[0] = 0.0;
    this_00[1].ComponentRelativeTransform.Translation.XY.m128d_f64[1] = 0.0;
    this_00[1].ComponentRelativeTransform.Translation.ZW.m128d_f64[0] = 0.0;
    this_00[1].ComponentRelativeTransform.Translation.ZW.m128d_f64[1] = 0.0;
    this_00[1].ComponentRelativeTransform.Scale3D.XY.m128d_f64[0] = 0.0;
    this_00[1].ComponentRelativeTransform.Scale3D.XY.m128d_f64[1] = 0.0;
    this_00[1].ComponentRelativeTransform.Scale3D.ZW.m128d_f64[0] = 0.0;
    return this_00;
  }
  return (FAnimInstanceProxy *)0x0;
}

// GetPrivateStaticClass @ 14a267b10

UClass * __cdecl UControlRigAnimInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigAnimInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigAnimInstance",
               &Z_Registration_Info_UClass_UControlRigAnimInstance.InnerSingleton,
               StaticRegisterNativesUControlRigAnimInstance,0x430,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UControlRigAnimInstance>,
               InternalVTableHelperCtorCaller<UControlRigAnimInstance>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigAnimInstance.InnerSingleton;
}

// StaticRegisterNativesUControlRigAnimInstance @ 14a297fb0

void __cdecl UControlRigAnimInstance::StaticRegisterNativesUControlRigAnimInstance(void)

{
  return;
}

