// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// StaticClass @ 149314350

UClass * __cdecl ANiagaraPreviewBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANiagaraPreviewBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewBase",
               &Z_Registration_Info_UClass_ANiagaraPreviewBase.InnerSingleton,
               StaticRegisterNativesANiagaraPreviewBase,0x2c0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ANiagaraPreviewBase>,
               InternalVTableHelperCtorCaller<ANiagaraPreviewBase>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANiagaraPreviewBase.InnerSingleton;
}

// ANiagaraPreviewBase @ 149332290

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ANiagaraPreviewBase * __thiscall
ANiagaraPreviewBase::ANiagaraPreviewBase(ANiagaraPreviewBase *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &___7ANiagaraPreviewBase__6B_;
  return this;
}

// ANiagaraPreviewBase @ 1493322c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ANiagaraPreviewBase * __thiscall
ANiagaraPreviewBase::ANiagaraPreviewBase(ANiagaraPreviewBase *this,FObjectInitializer *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &___7ANiagaraPreviewBase__6B_;
  return this;
}

// ~ANiagaraPreviewBase @ 149335f60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANiagaraPreviewBase::~ANiagaraPreviewBase(ANiagaraPreviewBase *this)

{
  *(undefined ***)this = &___7ANiagaraPreviewBase__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 149355a90

UClass * __cdecl ANiagaraPreviewBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANiagaraPreviewBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewBase",
               &Z_Registration_Info_UClass_ANiagaraPreviewBase.InnerSingleton,
               StaticRegisterNativesANiagaraPreviewBase,0x2c0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ANiagaraPreviewBase>,
               InternalVTableHelperCtorCaller<ANiagaraPreviewBase>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANiagaraPreviewBase.InnerSingleton;
}

// SetLabelText @ 14936a4c0

void __thiscall
ANiagaraPreviewBase::SetLabelText(ANiagaraPreviewBase *this,FText *param_1,FText *param_2)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  UFunction *pUVar3;
  undefined1 local_res8 [8];
  FText local_28;
  FText local_18;
  
  FText::FText(&local_28);
  FText::FText(&local_18);
  TVar2.Reference = local_28.TextData.Reference;
  pIVar1 = (param_1->TextData).Reference;
  if (local_28.TextData.Reference != pIVar1) {
    local_28.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
    }
  }
  TVar2.Reference = local_18.TextData.Reference;
  pIVar1 = (param_2->TextData).Reference;
  local_28.Flags = param_1->Flags;
  if (local_18.TextData.Reference != pIVar1) {
    local_18.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
    }
  }
  local_18.Flags = param_2->Flags;
  pUVar3 = UObject::FindFunctionChecked((UObject *)this,NAME_ANiagaraPreviewBase_SetLabelText);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar3,&local_28);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// SetSystem @ 14936b0f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall ANiagaraPreviewBase::SetSystem(ANiagaraPreviewBase *this,UNiagaraSystem *param_1)

{
  UFunction *pUVar1;
  UNiagaraSystem *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ANiagaraPreviewBase_SetSystem);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res8);
  return;
}

// ShouldTickIfViewportsOnly @ 14936edb0

bool __thiscall ANiagaraPreviewBase::ShouldTickIfViewportsOnly(ANiagaraPreviewBase *this)

{
  return true;
}

// StaticRegisterNativesANiagaraPreviewBase @ 1493702b0

void __cdecl ANiagaraPreviewBase::StaticRegisterNativesANiagaraPreviewBase(void)

{
  return;
}

