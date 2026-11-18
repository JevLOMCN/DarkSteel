// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticClass @ 1493146c0

UClass * __cdecl UNiagaraPreviewAxis_InterpParamInt32::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamInt32.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewAxis_InterpParamInt32",
               &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamInt32.InnerSingleton,
               StaticRegisterNativesUNiagaraPreviewAxis_InterpParamInt32,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraPreviewAxis_InterpParamInt32>,
               InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamInt32>,local_res8,
               UNiagaraPreviewAxis_InterpParamBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamInt32.InnerSingleton;
}

// UNiagaraPreviewAxis_InterpParamInt32 @ 149335600

UNiagaraPreviewAxis_InterpParamInt32 * __thiscall
UNiagaraPreviewAxis_InterpParamInt32::UNiagaraPreviewAxis_InterpParamInt32
          (UNiagaraPreviewAxis_InterpParamInt32 *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis_InterpParamInt32__6B_;
  return this;
}

// UNiagaraPreviewAxis_InterpParamInt32 @ 149335630

UNiagaraPreviewAxis_InterpParamInt32 * __thiscall
UNiagaraPreviewAxis_InterpParamInt32::UNiagaraPreviewAxis_InterpParamInt32
          (UNiagaraPreviewAxis_InterpParamInt32 *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis_InterpParamInt32__6B_;
  return this;
}

// ~UNiagaraPreviewAxis_InterpParamInt32 @ 149336d80

void __thiscall
UNiagaraPreviewAxis_InterpParamInt32::~UNiagaraPreviewAxis_InterpParamInt32
          (UNiagaraPreviewAxis_InterpParamInt32 *this)

{
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyToPreview_Implementation @ 14933ce70

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
UNiagaraPreviewAxis_InterpParamInt32::ApplyToPreview_Implementation
          (UNiagaraPreviewAxis_InterpParamInt32 *this,UNiagaraComponent *param_1,int param_2,
          bool param_3,FString *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  FString local_28;
  FString local_18;
  
  if (((int)this->_padding_ < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPreviewGrid.cpp"
                         ,0x184,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_1 == (UNiagaraComponent *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviewComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPreviewGrid.cpp"
                         ,0x185,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (int)this->_padding_;
  fVar5 = __real_3f800000;
  if (1 < iVar1) {
    fVar5 = (float)param_2 / (float)(iVar1 + -1);
  }
  UNiagaraComponent::SetVariableInt
            (param_1,(FName)this->_padding_,
             (int)((float)(this->Max - this->Min) * fVar5 + (float)this->Min));
  ::FName::ToString((FName *)&this->_padding_,&local_18);
  ::FString::PrintfImpl(&local_28,L"%s = %d");
  if (param_4 != &local_28) {
    pFVar2 = (param_4->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (param_4->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (param_4->Data).ArrayNum = local_28.Data.ArrayNum;
    (param_4->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 149356060

UClass * __cdecl UNiagaraPreviewAxis_InterpParamInt32::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamInt32.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewAxis_InterpParamInt32",
               &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamInt32.InnerSingleton,
               StaticRegisterNativesUNiagaraPreviewAxis_InterpParamInt32,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraPreviewAxis_InterpParamInt32>,
               InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamInt32>,local_res8,
               UNiagaraPreviewAxis_InterpParamBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamInt32.InnerSingleton;
}

// StaticRegisterNativesUNiagaraPreviewAxis_InterpParamInt32 @ 1493703c0

void __cdecl
UNiagaraPreviewAxis_InterpParamInt32::StaticRegisterNativesUNiagaraPreviewAxis_InterpParamInt32
          (void)

{
  return;
}

