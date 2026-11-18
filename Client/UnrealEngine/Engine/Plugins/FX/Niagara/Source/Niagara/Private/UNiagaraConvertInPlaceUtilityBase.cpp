// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticClass @ 148e40920

UClass * __cdecl UNiagaraConvertInPlaceUtilityBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraConvertInPlaceUtilityBase.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraConvertInPlaceUtilityBase",
               &Z_Registration_Info_UClass_UNiagaraConvertInPlaceUtilityBase.InnerSingleton,
               StaticRegisterNativesUNiagaraConvertInPlaceUtilityBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraConvertInPlaceUtilityBase>,
               InternalVTableHelperCtorCaller<UNiagaraConvertInPlaceUtilityBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraConvertInPlaceUtilityBase.InnerSingleton;
}

// UNiagaraConvertInPlaceUtilityBase @ 148e54b40

UNiagaraConvertInPlaceUtilityBase * __thiscall
UNiagaraConvertInPlaceUtilityBase::UNiagaraConvertInPlaceUtilityBase
          (UNiagaraConvertInPlaceUtilityBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraConvertInPlaceUtilityBase__6B_;
  return this;
}

// UNiagaraConvertInPlaceUtilityBase @ 148e54b70

UNiagaraConvertInPlaceUtilityBase * __thiscall
UNiagaraConvertInPlaceUtilityBase::UNiagaraConvertInPlaceUtilityBase
          (UNiagaraConvertInPlaceUtilityBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraConvertInPlaceUtilityBase__6B_;
  return this;
}

// ~UNiagaraConvertInPlaceUtilityBase @ 148e56760

void __thiscall
UNiagaraConvertInPlaceUtilityBase::~UNiagaraConvertInPlaceUtilityBase
          (UNiagaraConvertInPlaceUtilityBase *this)

{
  *(undefined ***)this = &___7UNiagaraConvertInPlaceUtilityBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Convert @ 148e5ec50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UNiagaraConvertInPlaceUtilityBase::Convert
          (UNiagaraConvertInPlaceUtilityBase *this,UNiagaraScript *param_1,
          UNiagaraClipboardContent *param_2,UNiagaraScript *param_3,
          UNiagaraStackScriptHierarchyRoot *param_4,UNiagaraClipboardContent *param_5,
          UNiagaraNodeFunctionCall *param_6,FText *param_7)

{
  return true;
}

// GetPrivateStaticClass @ 148e6dfb0

UClass * __cdecl UNiagaraConvertInPlaceUtilityBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraConvertInPlaceUtilityBase.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraConvertInPlaceUtilityBase",
               &Z_Registration_Info_UClass_UNiagaraConvertInPlaceUtilityBase.InnerSingleton,
               StaticRegisterNativesUNiagaraConvertInPlaceUtilityBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraConvertInPlaceUtilityBase>,
               InternalVTableHelperCtorCaller<UNiagaraConvertInPlaceUtilityBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraConvertInPlaceUtilityBase.InnerSingleton;
}

// StaticRegisterNativesUNiagaraConvertInPlaceUtilityBase @ 148e81590

void __cdecl
UNiagaraConvertInPlaceUtilityBase::StaticRegisterNativesUNiagaraConvertInPlaceUtilityBase(void)

{
  return;
}

