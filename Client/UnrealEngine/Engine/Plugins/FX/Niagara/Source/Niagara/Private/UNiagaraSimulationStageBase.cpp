// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// StaticClass @ 1493c4350

UClass * __cdecl UNiagaraSimulationStageBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSimulationStageBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSimulationStageBase",
               &Z_Registration_Info_UClass_UNiagaraSimulationStageBase.InnerSingleton,
               StaticRegisterNativesUNiagaraSimulationStageBase,0x40,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraSimulationStageBase>,
               InternalVTableHelperCtorCaller<UNiagaraSimulationStageBase>,local_res8,
               UNiagaraMergeable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSimulationStageBase.InnerSingleton;
}

// UNiagaraSimulationStageBase @ 1493cebc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraSimulationStageBase * __thiscall
UNiagaraSimulationStageBase::UNiagaraSimulationStageBase
          (UNiagaraSimulationStageBase *this,FVTableHelper *param_1)

{
  UNiagaraMergeable::UNiagaraMergeable((UNiagaraMergeable *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraSimulationStageBase__6B_;
  (this->Script).field0_0x0.DebugPtr = (UNiagaraScript *)0x0;
  (this->SimulationStageName).ComparisonIndex = 0;
  (this->SimulationStageName).Number = 0;
  return this;
}

// ~UNiagaraSimulationStageBase @ 1493d1c40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraSimulationStageBase::~UNiagaraSimulationStageBase(UNiagaraSimulationStageBase *this)

{
  this->_padding_ = (longlong)&___7UNiagaraSimulationStageBase__6B_;
  UNiagaraMergeable::~UNiagaraMergeable((UNiagaraMergeable *)this);
  return;
}

// GetPrivateStaticClass @ 1493e86a0

UClass * __cdecl UNiagaraSimulationStageBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSimulationStageBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSimulationStageBase",
               &Z_Registration_Info_UClass_UNiagaraSimulationStageBase.InnerSingleton,
               StaticRegisterNativesUNiagaraSimulationStageBase,0x40,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraSimulationStageBase>,
               InternalVTableHelperCtorCaller<UNiagaraSimulationStageBase>,local_res8,
               UNiagaraMergeable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSimulationStageBase.InnerSingleton;
}

// StaticRegisterNativesUNiagaraSimulationStageBase @ 1493fe8f0

void __cdecl UNiagaraSimulationStageBase::StaticRegisterNativesUNiagaraSimulationStageBase(void)

{
  return;
}

