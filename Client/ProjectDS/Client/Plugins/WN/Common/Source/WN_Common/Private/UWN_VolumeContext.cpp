// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 6

// StaticClass @ 149481e60

UClass * __cdecl UWN_VolumeContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_VolumeContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_VolumeContext",
               &Z_Registration_Info_UClass_UWN_VolumeContext.InnerSingleton,
               StaticRegisterNativesUWN_VolumeContext,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_VolumeContext>,
               InternalVTableHelperCtorCaller<UWN_VolumeContext>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_VolumeContext.InnerSingleton;
}

// UWN_VolumeContext @ 14948f620

UWN_VolumeContext * __thiscall
UWN_VolumeContext::UWN_VolumeContext(UWN_VolumeContext *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWN_VolumeContext__6B_;
  *(undefined8 *)&(this->Volumes).Elements = 0;
  *(undefined8 *)&(this->Volumes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Volumes).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Volumes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Volumes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Volumes).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->Volumes).Elements.field_0x30 = 0xffffffff;
  (this->Volumes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Volumes).HashSize = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CustomPosition).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->CustomPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->CustomPosition).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  return this;
}

// UWN_VolumeContext @ 14948f690

UWN_VolumeContext * __thiscall
UWN_VolumeContext::UWN_VolumeContext(UWN_VolumeContext *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWN_VolumeContext__6B_;
  *(undefined8 *)&(this->Volumes).Elements = 0;
  *(undefined8 *)&(this->Volumes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Volumes).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Volumes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Volumes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Volumes).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->Volumes).Elements.field_0x30 = 0xffffffff;
  (this->Volumes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Volumes).HashSize = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CustomPosition).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->CustomPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->CustomPosition).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  return this;
}

// ~UWN_VolumeContext @ 149490d70

void __thiscall UWN_VolumeContext::~UWN_VolumeContext(UWN_VolumeContext *this)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7UWN_VolumeContext__6B_;
  (this->Volumes).HashSize = 0;
  FVar1 = (this->Volumes).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Volumes).Elements);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1494a2430

UClass * __cdecl UWN_VolumeContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_VolumeContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_VolumeContext",
               &Z_Registration_Info_UClass_UWN_VolumeContext.InnerSingleton,
               StaticRegisterNativesUWN_VolumeContext,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_VolumeContext>,
               InternalVTableHelperCtorCaller<UWN_VolumeContext>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_VolumeContext.InnerSingleton;
}

// StaticRegisterNativesUWN_VolumeContext @ 1494ae3d0

void __cdecl UWN_VolumeContext::StaticRegisterNativesUWN_VolumeContext(void)

{
  return;
}

