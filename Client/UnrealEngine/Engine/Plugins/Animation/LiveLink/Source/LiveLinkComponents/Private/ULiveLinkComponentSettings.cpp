// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkComponents
// Functions: 6

// StaticClass @ 14d0901d0

UClass * __cdecl ULiveLinkComponentSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkComponentSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkComponents",L"LiveLinkComponentSettings",
               &Z_Registration_Info_UClass_ULiveLinkComponentSettings.InnerSingleton,
               StaticRegisterNativesULiveLinkComponentSettings,0x80,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<ULiveLinkComponentSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkComponentSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkComponentSettings.InnerSingleton;
}

// ULiveLinkComponentSettings @ 14d091cc0

ULiveLinkComponentSettings * __thiscall
ULiveLinkComponentSettings::ULiveLinkComponentSettings
          (ULiveLinkComponentSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveLinkComponentSettings__6B_;
  *(undefined8 *)&this->DefaultControllerForRole = 0;
  *(undefined8 *)&(this->DefaultControllerForRole).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultControllerForRole).field_0x20 = 0;
  *(undefined4 *)&(this->DefaultControllerForRole).field_0x28 = 0;
  *(undefined4 *)&(this->DefaultControllerForRole).field_0x2c = 0x80;
  *(undefined4 *)&(this->DefaultControllerForRole).field_0x34 = 0;
  *(undefined4 *)&(this->DefaultControllerForRole).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DefaultControllerForRole).field_0x40 = 0;
  *(undefined4 *)&(this->DefaultControllerForRole).field_0x48 = 0;
  this->bUpdateSubjectsImmediatelyInPIE = true;
  return this;
}

// ULiveLinkComponentSettings @ 14d091d20

ULiveLinkComponentSettings * __thiscall
ULiveLinkComponentSettings::ULiveLinkComponentSettings
          (ULiveLinkComponentSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveLinkComponentSettings__6B_;
  *(undefined8 *)&this->DefaultControllerForRole = 0;
  *(undefined8 *)&(this->DefaultControllerForRole).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultControllerForRole).field_0x20 = 0;
  *(undefined4 *)&(this->DefaultControllerForRole).field_0x28 = 0;
  *(undefined4 *)&(this->DefaultControllerForRole).field_0x2c = 0x80;
  *(undefined4 *)&(this->DefaultControllerForRole).field_0x34 = 0;
  *(undefined4 *)&(this->DefaultControllerForRole).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DefaultControllerForRole).field_0x40 = 0;
  *(undefined4 *)&(this->DefaultControllerForRole).field_0x48 = 0;
  this->bUpdateSubjectsImmediatelyInPIE = true;
  return this;
}

// ~ULiveLinkComponentSettings @ 14d0923e0

void __thiscall
ULiveLinkComponentSettings::~ULiveLinkComponentSettings(ULiveLinkComponentSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULiveLinkComponentSettings__6B_;
  *(undefined4 *)&(this->DefaultControllerForRole).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DefaultControllerForRole).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULiveLinkRole>,TSubclassOf<ULiveLinkControllerBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULiveLinkRole>,TSubclassOf<ULiveLinkControllerBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULiveLinkRole>,TSubclassOf<ULiveLinkControllerBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DefaultControllerForRole);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14d093a90

UClass * __cdecl ULiveLinkComponentSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkComponentSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkComponents",L"LiveLinkComponentSettings",
               &Z_Registration_Info_UClass_ULiveLinkComponentSettings.InnerSingleton,
               StaticRegisterNativesULiveLinkComponentSettings,0x80,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<ULiveLinkComponentSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkComponentSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkComponentSettings.InnerSingleton;
}

// StaticRegisterNativesULiveLinkComponentSettings @ 14d0955e0

void __cdecl ULiveLinkComponentSettings::StaticRegisterNativesULiveLinkComponentSettings(void)

{
  return;
}

