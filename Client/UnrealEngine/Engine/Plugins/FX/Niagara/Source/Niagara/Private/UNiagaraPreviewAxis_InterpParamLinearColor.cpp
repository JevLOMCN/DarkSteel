// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticClass @ 149314f00

UClass * __cdecl UNiagaraPreviewAxis_InterpParamLinearColor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamLinearColor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewAxis_InterpParamLinearColor",
               &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamLinearColor.InnerSingleton
               ,StaticRegisterNativesUNiagaraPreviewAxis_InterpParamLinearColor,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraPreviewAxis_InterpParamLinearColor>,
               InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamLinearColor>,local_res8
               ,UNiagaraPreviewAxis_InterpParamBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamLinearColor.InnerSingleton;
}

// UNiagaraPreviewAxis_InterpParamLinearColor @ 149335660

UNiagaraPreviewAxis_InterpParamLinearColor * __thiscall
UNiagaraPreviewAxis_InterpParamLinearColor::UNiagaraPreviewAxis_InterpParamLinearColor
          (UNiagaraPreviewAxis_InterpParamLinearColor *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis_InterpParamLinearColor__6B_;
  return this;
}

// UNiagaraPreviewAxis_InterpParamLinearColor @ 149335690

UNiagaraPreviewAxis_InterpParamLinearColor * __thiscall
UNiagaraPreviewAxis_InterpParamLinearColor::UNiagaraPreviewAxis_InterpParamLinearColor
          (UNiagaraPreviewAxis_InterpParamLinearColor *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis_InterpParamLinearColor__6B_;
  return this;
}

// ~UNiagaraPreviewAxis_InterpParamLinearColor @ 149336da0

void __thiscall
UNiagaraPreviewAxis_InterpParamLinearColor::~UNiagaraPreviewAxis_InterpParamLinearColor
          (UNiagaraPreviewAxis_InterpParamLinearColor *this)

{
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyToPreview_Implementation @ 14933cff0

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
UNiagaraPreviewAxis_InterpParamLinearColor::ApplyToPreview_Implementation
          (UNiagaraPreviewAxis_InterpParamLinearColor *this,UNiagaraComponent *param_1,int param_2,
          bool param_3,FString *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  FLinearColor_u_0 local_38;
  FString local_28;
  FString local_18;
  
  if (((int)this->_padding_ < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPreviewGrid.cpp"
                         ,0x1b1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_1 == (UNiagaraComponent *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviewComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPreviewGrid.cpp"
                         ,0x1b2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (int)this->_padding_;
  fVar5 = __real_3f800000;
  if (1 < iVar1) {
    fVar5 = (float)param_2 / (float)(iVar1 + -1);
  }
  local_38._s_0.R =
       ((this->Max).field0_0x0._s_0.R - (this->Min).field0_0x0._s_0.R) * fVar5 +
       (this->Min).field0_0x0._s_0.R;
  local_38._s_0.G =
       ((this->Max).field0_0x0._s_0.G - (this->Min).field0_0x0._s_0.G) * fVar5 +
       (this->Min).field0_0x0._s_0.G;
  local_38._s_0.B =
       ((this->Max).field0_0x0._s_0.B - (this->Min).field0_0x0._s_0.B) * fVar5 +
       (this->Min).field0_0x0._s_0.B;
  local_38._s_0.A =
       ((this->Max).field0_0x0._s_0.A - (this->Min).field0_0x0._s_0.A) * fVar5 +
       (this->Min).field0_0x0._s_0.A;
  UNiagaraComponent::SetVariableLinearColor
            (param_1,(FName)this->_padding_,(FLinearColor *)&local_38._s_0);
  ::FName::ToString((FName *)&this->_padding_,&local_18);
  ::FString::PrintfImpl(&local_28,L"%s = {%g, %g, %g, %g}");
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

// GetPrivateStaticClass @ 149356120

UClass * __cdecl UNiagaraPreviewAxis_InterpParamLinearColor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamLinearColor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewAxis_InterpParamLinearColor",
               &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamLinearColor.InnerSingleton
               ,StaticRegisterNativesUNiagaraPreviewAxis_InterpParamLinearColor,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraPreviewAxis_InterpParamLinearColor>,
               InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamLinearColor>,local_res8
               ,UNiagaraPreviewAxis_InterpParamBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamLinearColor.InnerSingleton;
}

// StaticRegisterNativesUNiagaraPreviewAxis_InterpParamLinearColor @ 1493703d0

void __cdecl
UNiagaraPreviewAxis_InterpParamLinearColor::
StaticRegisterNativesUNiagaraPreviewAxis_InterpParamLinearColor(void)

{
  return;
}

