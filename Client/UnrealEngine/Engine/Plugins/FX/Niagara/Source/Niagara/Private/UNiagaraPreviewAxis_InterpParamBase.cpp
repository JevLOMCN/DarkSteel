// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticClass @ 149314500

UClass * __cdecl UNiagaraPreviewAxis_InterpParamBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamBase.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewAxis_InterpParamBase",
               &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamBase.InnerSingleton,
               StaticRegisterNativesUNiagaraPreviewAxis_InterpParamBase,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraPreviewAxis_InterpParamBase>,
               InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamBase>,local_res8,
               UNiagaraPreviewAxis::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamBase.InnerSingleton;
}

// UNiagaraPreviewAxis_InterpParamBase @ 149335540

UNiagaraPreviewAxis_InterpParamBase * __thiscall
UNiagaraPreviewAxis_InterpParamBase::UNiagaraPreviewAxis_InterpParamBase
          (UNiagaraPreviewAxis_InterpParamBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis_InterpParamBase__6B_;
  (this->Param).ComparisonIndex = 0;
  (this->Param).Number = 0;
  return this;
}

// UNiagaraPreviewAxis_InterpParamBase @ 149335570

UNiagaraPreviewAxis_InterpParamBase * __thiscall
UNiagaraPreviewAxis_InterpParamBase::UNiagaraPreviewAxis_InterpParamBase
          (UNiagaraPreviewAxis_InterpParamBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis_InterpParamBase__6B_;
  (this->Param).ComparisonIndex = 0;
  (this->Param).Number = 0;
  return this;
}

// ~UNiagaraPreviewAxis_InterpParamBase @ 149336d40

void __thiscall
UNiagaraPreviewAxis_InterpParamBase::~UNiagaraPreviewAxis_InterpParamBase
          (UNiagaraPreviewAxis_InterpParamBase *this)

{
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 149355ee0

UClass * __cdecl UNiagaraPreviewAxis_InterpParamBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamBase.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewAxis_InterpParamBase",
               &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamBase.InnerSingleton,
               StaticRegisterNativesUNiagaraPreviewAxis_InterpParamBase,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraPreviewAxis_InterpParamBase>,
               InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamBase>,local_res8,
               UNiagaraPreviewAxis::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamBase.InnerSingleton;
}

// Num_Implementation @ 14935f9a0

int __thiscall
UNiagaraPreviewAxis_InterpParamBase::Num_Implementation(UNiagaraPreviewAxis_InterpParamBase *this)

{
  return this->Count;
}

// StaticRegisterNativesUNiagaraPreviewAxis_InterpParamBase @ 1493703a0

void __cdecl
UNiagaraPreviewAxis_InterpParamBase::StaticRegisterNativesUNiagaraPreviewAxis_InterpParamBase(void)

{
  return;
}

