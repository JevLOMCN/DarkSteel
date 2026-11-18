// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraCore
// Functions: 10

// StaticClass @ 148dca270

UClass * __cdecl UNiagaraDataInterfaceBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraCore",L"NiagaraDataInterfaceBase",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceBase.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceBase>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceBase>,local_res8,
               UNiagaraNotifyOnChanged::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceBase.InnerSingleton;
}

// UNiagaraDataInterfaceBase @ 148dcacd0

UNiagaraDataInterfaceBase * __thiscall
UNiagaraDataInterfaceBase::UNiagaraDataInterfaceBase
          (UNiagaraDataInterfaceBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraDataInterfaceBase__6B_;
  return this;
}

// UNiagaraDataInterfaceBase @ 148dcad00

UNiagaraDataInterfaceBase * __thiscall
UNiagaraDataInterfaceBase::UNiagaraDataInterfaceBase
          (UNiagaraDataInterfaceBase *this,FObjectInitializer *param_1)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar1);
  *(undefined ***)this = &___7UNiagaraDataInterfaceBase__6B_;
  return this;
}

// ~UNiagaraDataInterfaceBase @ 148dcae10

void __thiscall
UNiagaraDataInterfaceBase::~UNiagaraDataInterfaceBase(UNiagaraDataInterfaceBase *this)

{
  *(undefined ***)this = &___7UNiagaraNotifyOnChanged__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BuildShaderParameters @ 148dcb020

void __thiscall
UNiagaraDataInterfaceBase::BuildShaderParameters
          (UNiagaraDataInterfaceBase *this,FNiagaraShaderParametersBuilder *param_1)

{
  return;
}

// CreateShaderStorage @ 148dcb190

FNiagaraDataInterfaceParametersCS * __thiscall
UNiagaraDataInterfaceBase::CreateShaderStorage
          (UNiagaraDataInterfaceBase *this,FNiagaraDataInterfaceGPUParamInfo *param_1,
          FShaderParameterMap *param_2)

{
  return (FNiagaraDataInterfaceParametersCS *)0x0;
}

// GetPrivateStaticClass @ 148dcb430

UClass * __cdecl UNiagaraDataInterfaceBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraCore",L"NiagaraDataInterfaceBase",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceBase.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceBase>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceBase>,local_res8,
               UNiagaraNotifyOnChanged::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceBase.InnerSingleton;
}

// GetShaderStorageType @ 148dcb660

FTypeLayoutDesc * __thiscall
UNiagaraDataInterfaceBase::GetShaderStorageType(UNiagaraDataInterfaceBase *this)

{
  return (FTypeLayoutDesc *)0x0;
}

// HasInternalAttributeReads @ 148dcb6a0

bool __thiscall
UNiagaraDataInterfaceBase::HasInternalAttributeReads
          (UNiagaraDataInterfaceBase *this,UNiagaraEmitter *param_1,UNiagaraEmitter *param_2)

{
  return false;
}

// StaticRegisterNativesUNiagaraDataInterfaceBase @ 148dcb830

void __cdecl UNiagaraDataInterfaceBase::StaticRegisterNativesUNiagaraDataInterfaceBase(void)

{
  return;
}

