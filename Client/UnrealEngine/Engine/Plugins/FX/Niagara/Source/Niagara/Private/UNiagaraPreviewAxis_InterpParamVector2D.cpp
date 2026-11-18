// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticClass @ 149314880

UClass * __cdecl UNiagaraPreviewAxis_InterpParamVector2D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector2D.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewAxis_InterpParamVector2D",
               &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector2D.InnerSingleton,
               StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector2D,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraPreviewAxis_InterpParamVector2D>
               ,InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamVector2D>,local_res8,
               UNiagaraPreviewAxis_InterpParamBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector2D.InnerSingleton;
}

// UNiagaraPreviewAxis_InterpParamVector2D @ 1493356c0

UNiagaraPreviewAxis_InterpParamVector2D * __thiscall
UNiagaraPreviewAxis_InterpParamVector2D::UNiagaraPreviewAxis_InterpParamVector2D
          (UNiagaraPreviewAxis_InterpParamVector2D *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis_InterpParamVector2D__6B_;
  return this;
}

// UNiagaraPreviewAxis_InterpParamVector2D @ 1493356f0

UNiagaraPreviewAxis_InterpParamVector2D * __thiscall
UNiagaraPreviewAxis_InterpParamVector2D::UNiagaraPreviewAxis_InterpParamVector2D
          (UNiagaraPreviewAxis_InterpParamVector2D *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis_InterpParamVector2D__6B_;
  return this;
}

// ~UNiagaraPreviewAxis_InterpParamVector2D @ 149336dc0

void __thiscall
UNiagaraPreviewAxis_InterpParamVector2D::~UNiagaraPreviewAxis_InterpParamVector2D
          (UNiagaraPreviewAxis_InterpParamVector2D *this)

{
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyToPreview_Implementation @ 14933d1f0

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
UNiagaraPreviewAxis_InterpParamVector2D::ApplyToPreview_Implementation
          (UNiagaraPreviewAxis_InterpParamVector2D *this,UNiagaraComponent *param_1,int param_2,
          bool param_3,FString *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  FString local_58;
  TVector2<double>_u_0 local_48;
  FString local_38 [3];
  
  if (((int)this->_padding_ < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPreviewGrid.cpp"
                         ,0x196,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_1 == (UNiagaraComponent *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviewComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPreviewGrid.cpp"
                         ,0x197,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (int)this->_padding_;
  fVar5 = __real_3f800000;
  if (1 < iVar1) {
    fVar5 = (float)param_2 / (float)(iVar1 + -1);
  }
  local_48._s_0.X =
       ((this->Max).field0_0x0._s_0.X - (this->Min).field0_0x0._s_0.X) * (double)fVar5 +
       (this->Min).field0_0x0._s_0.X;
  local_48._s_0.Y =
       ((this->Max).field0_0x0._s_0.Y - (this->Min).field0_0x0._s_0.Y) * (double)fVar5 +
       (this->Min).field0_0x0._s_0.Y;
  UNiagaraComponent::SetVariableVec2
            (param_1,(FName)this->_padding_,(TVector2<double> *)&local_48._s_0);
  ::FName::ToString((FName *)&this->_padding_,local_38);
  ::FString::PrintfImpl(&local_58,L"%s = {%g, %g}");
  if (param_4 != &local_58) {
    pFVar2 = (param_4->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (param_4->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    (param_4->Data).ArrayNum = local_58.Data.ArrayNum;
    (param_4->Data).ArrayMax = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 1493561e0

UClass * __cdecl UNiagaraPreviewAxis_InterpParamVector2D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector2D.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewAxis_InterpParamVector2D",
               &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector2D.InnerSingleton,
               StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector2D,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraPreviewAxis_InterpParamVector2D>
               ,InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamVector2D>,local_res8,
               UNiagaraPreviewAxis_InterpParamBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector2D.InnerSingleton;
}

// StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector2D @ 1493703e0

void __cdecl
UNiagaraPreviewAxis_InterpParamVector2D::
StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector2D(void)

{
  return;
}

