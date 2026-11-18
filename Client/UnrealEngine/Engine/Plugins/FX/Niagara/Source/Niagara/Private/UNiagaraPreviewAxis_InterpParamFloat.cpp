// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticClass @ 1493147c0

UClass * __cdecl UNiagaraPreviewAxis_InterpParamFloat::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamFloat.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewAxis_InterpParamFloat",
               &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamFloat.InnerSingleton,
               StaticRegisterNativesUNiagaraPreviewAxis_InterpParamFloat,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraPreviewAxis_InterpParamFloat>,
               InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamFloat>,local_res8,
               UNiagaraPreviewAxis_InterpParamBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamFloat.InnerSingleton;
}

// UNiagaraPreviewAxis_InterpParamFloat @ 1493355a0

UNiagaraPreviewAxis_InterpParamFloat * __thiscall
UNiagaraPreviewAxis_InterpParamFloat::UNiagaraPreviewAxis_InterpParamFloat
          (UNiagaraPreviewAxis_InterpParamFloat *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis_InterpParamFloat__6B_;
  return this;
}

// UNiagaraPreviewAxis_InterpParamFloat @ 1493355d0

UNiagaraPreviewAxis_InterpParamFloat * __thiscall
UNiagaraPreviewAxis_InterpParamFloat::UNiagaraPreviewAxis_InterpParamFloat
          (UNiagaraPreviewAxis_InterpParamFloat *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis_InterpParamFloat__6B_;
  return this;
}

// ~UNiagaraPreviewAxis_InterpParamFloat @ 149336d60

void __thiscall
UNiagaraPreviewAxis_InterpParamFloat::~UNiagaraPreviewAxis_InterpParamFloat
          (UNiagaraPreviewAxis_InterpParamFloat *this)

{
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyToPreview_Implementation @ 14933ccf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraPreviewAxis_InterpParamFloat::ApplyToPreview_Implementation
          (UNiagaraPreviewAxis_InterpParamFloat *this,UNiagaraComponent *param_1,int param_2,
          bool param_3,FString *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  FString local_38;
  FString local_28 [2];
  
  if (((int)this->_padding_ < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPreviewGrid.cpp"
                         ,0x18d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_1 == (UNiagaraComponent *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviewComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPreviewGrid.cpp"
                         ,0x18e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (int)this->_padding_;
  fVar5 = __real_3f800000;
  if (1 < iVar1) {
    fVar5 = (float)param_2 / (float)(iVar1 + -1);
  }
  UNiagaraComponent::SetVariableFloat
            (param_1,(FName)this->_padding_,(this->Max - this->Min) * fVar5 + this->Min);
  ::FName::ToString((FName *)&this->_padding_,local_28);
  ::FString::PrintfImpl(&local_38,L"%s = %g");
  if (param_4 != &local_38) {
    pFVar2 = (param_4->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (param_4->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (param_4->Data).ArrayNum = local_38.Data.ArrayNum;
    (param_4->Data).ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 149355fa0

UClass * __cdecl UNiagaraPreviewAxis_InterpParamFloat::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamFloat.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewAxis_InterpParamFloat",
               &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamFloat.InnerSingleton,
               StaticRegisterNativesUNiagaraPreviewAxis_InterpParamFloat,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraPreviewAxis_InterpParamFloat>,
               InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamFloat>,local_res8,
               UNiagaraPreviewAxis_InterpParamBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamFloat.InnerSingleton;
}

// StaticRegisterNativesUNiagaraPreviewAxis_InterpParamFloat @ 1493703b0

void __cdecl
UNiagaraPreviewAxis_InterpParamFloat::StaticRegisterNativesUNiagaraPreviewAxis_InterpParamFloat
          (void)

{
  return;
}

