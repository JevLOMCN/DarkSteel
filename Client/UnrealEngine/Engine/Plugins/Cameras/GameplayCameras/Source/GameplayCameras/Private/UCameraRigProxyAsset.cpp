// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// StaticClass @ 14d576670

UClass * __cdecl UCameraRigProxyAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigProxyAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigProxyAsset",
               &Z_Registration_Info_UClass_UCameraRigProxyAsset.InnerSingleton,
               StaticRegisterNativesUCameraRigProxyAsset,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCameraRigProxyAsset>,
               InternalVTableHelperCtorCaller<UCameraRigProxyAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigProxyAsset.InnerSingleton;
}

// UCameraRigProxyAsset @ 14d58f6c0

UCameraRigProxyAsset * __thiscall
UCameraRigProxyAsset::UCameraRigProxyAsset(UCameraRigProxyAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCameraRigProxyAsset__6B_;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  return this;
}

// UCameraRigProxyAsset @ 14d58f700

UCameraRigProxyAsset * __thiscall
UCameraRigProxyAsset::UCameraRigProxyAsset(UCameraRigProxyAsset *this,FObjectInitializer *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCameraRigProxyAsset__6B_;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  pFVar4 = FGuid::NewGuid(&local_18);
  uVar1 = pFVar4->B;
  uVar2 = pFVar4->C;
  uVar3 = pFVar4->D;
  (this->Guid).A = pFVar4->A;
  (this->Guid).B = uVar1;
  (this->Guid).C = uVar2;
  (this->Guid).D = uVar3;
  return this;
}

// ~UCameraRigProxyAsset @ 14d591c50

void __thiscall UCameraRigProxyAsset::~UCameraRigProxyAsset(UCameraRigProxyAsset *this)

{
  this->_padding_ = (longlong)&___7UCameraRigProxyAsset__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14d5a9840

UClass * __cdecl UCameraRigProxyAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigProxyAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigProxyAsset",
               &Z_Registration_Info_UClass_UCameraRigProxyAsset.InnerSingleton,
               StaticRegisterNativesUCameraRigProxyAsset,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCameraRigProxyAsset>,
               InternalVTableHelperCtorCaller<UCameraRigProxyAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigProxyAsset.InnerSingleton;
}

// StaticRegisterNativesUCameraRigProxyAsset @ 14d5d0dc0

void __cdecl UCameraRigProxyAsset::StaticRegisterNativesUCameraRigProxyAsset(void)

{
  return;
}

