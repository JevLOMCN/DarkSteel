// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 9

// StaticClass @ 148de84c0

UClass * __cdecl UNiagaraScriptBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraScriptBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraShader",L"NiagaraScriptBase",
               &Z_Registration_Info_UClass_UNiagaraScriptBase.InnerSingleton,
               StaticRegisterNativesUNiagaraScriptBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraScriptBase>,
               InternalVTableHelperCtorCaller<UNiagaraScriptBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraScriptBase.InnerSingleton;
}

// UNiagaraScriptBase @ 148df1200

UNiagaraScriptBase * __thiscall
UNiagaraScriptBase::UNiagaraScriptBase(UNiagaraScriptBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraScriptBase__6B_;
  return this;
}

// UNiagaraScriptBase @ 148df1230

UNiagaraScriptBase * __thiscall
UNiagaraScriptBase::UNiagaraScriptBase(UNiagaraScriptBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraScriptBase__6B_;
  return this;
}

// ~UNiagaraScriptBase @ 148df1760

void __thiscall UNiagaraScriptBase::~UNiagaraScriptBase(UNiagaraScriptBase *this)

{
  *(undefined ***)this = &___7UNiagaraScriptBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148dffb30

UClass * __cdecl UNiagaraScriptBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraScriptBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraShader",L"NiagaraScriptBase",
               &Z_Registration_Info_UClass_UNiagaraScriptBase.InnerSingleton,
               StaticRegisterNativesUNiagaraScriptBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraScriptBase>,
               InternalVTableHelperCtorCaller<UNiagaraScriptBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraScriptBase.InnerSingleton;
}

// GetSimulationStageMetaData @ 148e00330

TArrayView<FSimulationStageMetaData_const_,int> * __thiscall
UNiagaraScriptBase::GetSimulationStageMetaData
          (UNiagaraScriptBase *this,
          TArrayView<FSimulationStageMetaData_const_,int> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Public\\NiagaraScriptBase.h"
             ,0xab,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->DataPtr = (FSimulationStageMetaData *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// ModifyCompilationEnvironment @ 148e0aa50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraScriptBase::ModifyCompilationEnvironment
          (UNiagaraScriptBase *this,EShaderPlatform param_1,FShaderCompilerEnvironment *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Public\\NiagaraScriptBase.h"
             ,0xa9,L"Pure virtual not implemented (%s)");
  return;
}

// ShouldCompile @ 148e0dea0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UNiagaraScriptBase::ShouldCompile(UNiagaraScriptBase *this,EShaderPlatform param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Public\\NiagaraScriptBase.h"
             ,0xaa,L"Pure virtual not implemented (%s)");
  return true;
}

// StaticRegisterNativesUNiagaraScriptBase @ 148e12370

void __cdecl UNiagaraScriptBase::StaticRegisterNativesUNiagaraScriptBase(void)

{
  return;
}

