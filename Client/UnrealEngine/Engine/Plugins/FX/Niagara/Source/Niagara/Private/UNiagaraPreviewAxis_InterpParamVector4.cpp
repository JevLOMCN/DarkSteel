// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticClass @ 149314c20

UClass * __cdecl UNiagaraPreviewAxis_InterpParamVector4::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector4.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewAxis_InterpParamVector4",
               &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector4.InnerSingleton,
               StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector4,0x80,0x10,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraPreviewAxis_InterpParamVector4>
               ,InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamVector4>,local_res8,
               UNiagaraPreviewAxis_InterpParamBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector4.InnerSingleton;
}

// UNiagaraPreviewAxis_InterpParamVector4 @ 149335720

UNiagaraPreviewAxis_InterpParamVector4 * __thiscall
UNiagaraPreviewAxis_InterpParamVector4::UNiagaraPreviewAxis_InterpParamVector4
          (UNiagaraPreviewAxis_InterpParamVector4 *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis_InterpParamVector4__6B_;
  (this->Min).field0_0x0._s_0.W = 1.0;
  (this->Max).field0_0x0._s_0.W = 1.0;
  this->_padding_ = 0;
  (this->Min).field0_0x0._s_0.X = 0.0;
  (this->Min).field0_0x0._s_0.Y = 0.0;
  (this->Min).field0_0x0._s_0.Z = 0.0;
  (this->Max).field0_0x0._s_0.X = 0.0;
  (this->Max).field0_0x0._s_0.Y = 0.0;
  (this->Max).field0_0x0._s_0.Z = 0.0;
  return this;
}

// UNiagaraPreviewAxis_InterpParamVector4 @ 149335780

UNiagaraPreviewAxis_InterpParamVector4 * __thiscall
UNiagaraPreviewAxis_InterpParamVector4::UNiagaraPreviewAxis_InterpParamVector4
          (UNiagaraPreviewAxis_InterpParamVector4 *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis_InterpParamVector4__6B_;
  (this->Min).field0_0x0._s_0.W = 1.0;
  (this->Max).field0_0x0._s_0.W = 1.0;
  this->_padding_ = 0;
  (this->Min).field0_0x0._s_0.X = 0.0;
  (this->Min).field0_0x0._s_0.Y = 0.0;
  (this->Min).field0_0x0._s_0.Z = 0.0;
  (this->Max).field0_0x0._s_0.X = 0.0;
  (this->Max).field0_0x0._s_0.Y = 0.0;
  (this->Max).field0_0x0._s_0.Z = 0.0;
  return this;
}

// ~UNiagaraPreviewAxis_InterpParamVector4 @ 149336de0

void __thiscall
UNiagaraPreviewAxis_InterpParamVector4::~UNiagaraPreviewAxis_InterpParamVector4
          (UNiagaraPreviewAxis_InterpParamVector4 *this)

{
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyToPreview_Implementation @ 14933d3a0

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
UNiagaraPreviewAxis_InterpParamVector4::ApplyToPreview_Implementation
          (UNiagaraPreviewAxis_InterpParamVector4 *this,UNiagaraComponent *param_1,int param_2,
          bool param_3,FString *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  float fVar7;
  double dVar8;
  FString local_48;
  FString local_38;
  TVector4<double>_u_0 local_28;
  
  if (((int)this->_padding_ < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPreviewGrid.cpp"
                         ,0x1a8,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_1 == (UNiagaraComponent *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviewComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPreviewGrid.cpp"
                         ,0x1a9,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (int)this->_padding_;
  fVar7 = __real_3f800000;
  if (1 < iVar1) {
    fVar7 = (float)param_2 / (float)(iVar1 + -1);
  }
  dVar5 = (this->Min).field0_0x0._s_0.Z;
  dVar4 = (this->Min).field0_0x0._s_0.W;
  dVar8 = (double)fVar7;
  local_28._s_0.X =
       ((this->Max).field0_0x0._s_0.X - (this->Min).field0_0x0._s_0.X) * dVar8 +
       (this->Min).field0_0x0._s_0.X;
  local_28._s_0.Y =
       ((this->Max).field0_0x0._s_0.Y - (this->Min).field0_0x0._s_0.Y) * dVar8 +
       (this->Min).field0_0x0._s_0.Y;
  dVar4 = ((this->Max).field0_0x0._s_0.W - dVar4) * dVar8 + dVar4;
  local_28._24_4_ = SUB84(dVar4,0);
  local_28._16_8_ = ((this->Max).field0_0x0._s_0.Z - dVar5) * dVar8 + dVar5;
  local_28._28_4_ = (int)((ulonglong)dVar4 >> 0x20);
  UNiagaraComponent::SetVariableVec4
            (param_1,(FName)this->_padding_,(TVector4<double> *)&local_28._s_0);
  ::FName::ToString((FName *)&this->_padding_,&local_38);
  ::FString::PrintfImpl(&local_48,L"%s = {%g, %g, %g, %g}");
  if (param_4 != &local_48) {
    pFVar2 = (param_4->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (param_4->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    (param_4->Data).ArrayNum = local_48.Data.ArrayNum;
    (param_4->Data).ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 1493562a0

UClass * __cdecl UNiagaraPreviewAxis_InterpParamVector4::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector4.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewAxis_InterpParamVector4",
               &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector4.InnerSingleton,
               StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector4,0x80,0x10,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraPreviewAxis_InterpParamVector4>
               ,InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamVector4>,local_res8,
               UNiagaraPreviewAxis_InterpParamBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector4.InnerSingleton;
}

// StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector4 @ 1493703f0

void __cdecl
UNiagaraPreviewAxis_InterpParamVector4::StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector4
          (void)

{
  return;
}

