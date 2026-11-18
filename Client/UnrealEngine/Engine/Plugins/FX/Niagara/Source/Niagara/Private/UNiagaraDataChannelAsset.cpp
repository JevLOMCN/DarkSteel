// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticClass @ 149077d30

UClass * __cdecl UNiagaraDataChannelAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannelAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannelAsset",
               &Z_Registration_Info_UClass_UNiagaraDataChannelAsset.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannelAsset,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraDataChannelAsset>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannelAsset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannelAsset.InnerSingleton;
}

// UNiagaraDataChannelAsset @ 1490b24a0

UNiagaraDataChannelAsset * __thiscall
UNiagaraDataChannelAsset::UNiagaraDataChannelAsset
          (UNiagaraDataChannelAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataChannelAsset__6B_;
  (this->DataChannel).field0_0x0.DebugPtr = (UNiagaraDataChannel *)0x0;
  return this;
}

// UNiagaraDataChannelAsset @ 1490b24d0

UNiagaraDataChannelAsset * __thiscall
UNiagaraDataChannelAsset::UNiagaraDataChannelAsset
          (UNiagaraDataChannelAsset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataChannelAsset__6B_;
  (this->DataChannel).field0_0x0.DebugPtr = (UNiagaraDataChannel *)0x0;
  return this;
}

// ~UNiagaraDataChannelAsset @ 1490b8560

void __thiscall UNiagaraDataChannelAsset::~UNiagaraDataChannelAsset(UNiagaraDataChannelAsset *this)

{
  this->_padding_ = (longlong)&___7UNiagaraDataChannelAsset__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1491080e0

UClass * __cdecl UNiagaraDataChannelAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannelAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannelAsset",
               &Z_Registration_Info_UClass_UNiagaraDataChannelAsset.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannelAsset,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraDataChannelAsset>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannelAsset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannelAsset.InnerSingleton;
}

// StaticRegisterNativesUNiagaraDataChannelAsset @ 149139c90

void __cdecl UNiagaraDataChannelAsset::StaticRegisterNativesUNiagaraDataChannelAsset(void)

{
  return;
}

