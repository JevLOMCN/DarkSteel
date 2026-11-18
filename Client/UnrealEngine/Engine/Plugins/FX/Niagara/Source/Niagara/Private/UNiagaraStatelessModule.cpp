// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 11

// BuildShaderParameters @ 14943a720

void __thiscall
UNiagaraStatelessModule::BuildShaderParameters
          (UNiagaraStatelessModule *this,FNiagaraStatelessShaderParametersBuilder *param_1)

{
  return;
}

// GetFeatureMask @ 149449c40

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

ENiagaraStatelessFeatureMask __thiscall
UNiagaraStatelessModule::GetFeatureMask(UNiagaraStatelessModule *this)

{
  return All;
}

// SetShaderParameters @ 149465860

void __thiscall
UNiagaraStatelessModule::SetShaderParameters
          (UNiagaraStatelessModule *this,FNiagaraStatelessSetShaderParameterContext *param_1)

{
  return;
}

// StaticClass @ 149469bc0

UClass * __cdecl UNiagaraStatelessModule::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule>,aFStackX_8,
               UNiagaraMergeable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule.InnerSingleton;
}

// UNiagaraStatelessModule @ 149476c70

UNiagaraStatelessModule * __thiscall
UNiagaraStatelessModule::UNiagaraStatelessModule
          (UNiagaraStatelessModule *this,FVTableHelper *param_1)

{
  UNiagaraMergeable::UNiagaraMergeable((UNiagaraMergeable *)this,param_1);
  this->bModuleEnabled = 1;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule__6B_;
  return this;
}

// UNiagaraStatelessModule @ 149476ca0

UNiagaraStatelessModule * __thiscall
UNiagaraStatelessModule::UNiagaraStatelessModule(UNiagaraStatelessModule *this)

{
  UNiagaraMergeable::UNiagaraMergeable((UNiagaraMergeable *)this);
  this->bModuleEnabled = 1;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule__6B_;
  return this;
}

// ~UNiagaraStatelessModule @ 149477460

void __thiscall UNiagaraStatelessModule::~UNiagaraStatelessModule(UNiagaraStatelessModule *this)

{
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule__6B_;
  UNiagaraMergeable::~UNiagaraMergeable((UNiagaraMergeable *)this);
  return;
}

// BuildEmitterData @ 1494785e0

void __thiscall
UNiagaraStatelessModule::BuildEmitterData
          (UNiagaraStatelessModule *this,FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  return;
}

// GetPrivateStaticClass @ 14947b070

UClass * __cdecl UNiagaraStatelessModule::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule>,local_res8,
               UNiagaraMergeable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule.InnerSingleton;
}

// IsModuleEnabled @ 14947d430

bool __thiscall UNiagaraStatelessModule::IsModuleEnabled(UNiagaraStatelessModule *this)

{
  if ((this->bModuleEnabled != 0) && ((this->_padding_ & 0x10) == 0)) {
    return true;
  }
  return false;
}

// StaticRegisterNativesUNiagaraStatelessModule @ 14947f3b0

void __cdecl UNiagaraStatelessModule::StaticRegisterNativesUNiagaraStatelessModule(void)

{
  return;
}

