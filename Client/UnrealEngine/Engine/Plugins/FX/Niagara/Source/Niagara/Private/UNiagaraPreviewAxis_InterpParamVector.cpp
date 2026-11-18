// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticClass @ 149314b30

UClass * __cdecl UNiagaraPreviewAxis_InterpParamVector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewAxis_InterpParamVector",
               &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector.InnerSingleton,
               StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraPreviewAxis_InterpParamVector>,
               InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamVector>,local_res8,
               UNiagaraPreviewAxis_InterpParamBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector.InnerSingleton;
}

// UNiagaraPreviewAxis_InterpParamVector @ 1493357e0

UNiagaraPreviewAxis_InterpParamVector * __thiscall
UNiagaraPreviewAxis_InterpParamVector::UNiagaraPreviewAxis_InterpParamVector
          (UNiagaraPreviewAxis_InterpParamVector *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis_InterpParamVector__6B_;
  return this;
}

// UNiagaraPreviewAxis_InterpParamVector @ 149335810

UNiagaraPreviewAxis_InterpParamVector * __thiscall
UNiagaraPreviewAxis_InterpParamVector::UNiagaraPreviewAxis_InterpParamVector
          (UNiagaraPreviewAxis_InterpParamVector *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis_InterpParamVector__6B_;
  return this;
}

// ~UNiagaraPreviewAxis_InterpParamVector @ 149336e00

void __thiscall
UNiagaraPreviewAxis_InterpParamVector::~UNiagaraPreviewAxis_InterpParamVector
          (UNiagaraPreviewAxis_InterpParamVector *this)

{
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyToPreview_Implementation @ 14933d570

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
UNiagaraPreviewAxis_InterpParamVector::ApplyToPreview_Implementation
          (UNiagaraPreviewAxis_InterpParamVector *this,UNiagaraComponent *param_1,int param_2,
          bool param_3,FString *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  double dVar6;
  FString local_78;
  FString local_68;
  TVector<double>_u_0 local_58 [3];
  
  if (((int)this->_padding_ < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPreviewGrid.cpp"
                         ,0x19f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_1 == (UNiagaraComponent *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviewComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPreviewGrid.cpp"
                         ,0x1a0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (int)this->_padding_;
  fVar5 = __real_3f800000;
  if (1 < iVar1) {
    fVar5 = (float)param_2 / (float)(iVar1 + -1);
  }
  dVar6 = (double)fVar5;
  local_58[0]._0_8_ =
       ((this->Max).field0_0x0._s_0.X - (this->Min).field0_0x0._s_0.X) * dVar6 +
       (this->Min).field0_0x0._s_0.X;
  local_58[0]._8_8_ =
       ((this->Max).field0_0x0._s_0.Y - (this->Min).field0_0x0._s_0.Y) * dVar6 +
       (this->Min).field0_0x0._s_0.Y;
  local_58[0]._16_8_ =
       ((this->Max).field0_0x0._s_0.Z - (this->Min).field0_0x0._s_0.Z) * dVar6 +
       (this->Min).field0_0x0._s_0.Z;
  UNiagaraComponent::SetVariableVec3
            (param_1,(FName)this->_padding_,(TVector<double> *)&local_58[0]._s_0);
  ::FName::ToString((FName *)&this->_padding_,&local_68);
  ::FString::PrintfImpl(&local_78,L"%s = {%g, %g, %g}");
  if (param_4 != &local_78) {
    pFVar2 = (param_4->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (param_4->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    (param_4->Data).ArrayNum = local_78.Data.ArrayNum;
    (param_4->Data).ArrayMax = local_78.Data.ArrayMax;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 149356360

UClass * __cdecl UNiagaraPreviewAxis_InterpParamVector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewAxis_InterpParamVector",
               &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector.InnerSingleton,
               StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraPreviewAxis_InterpParamVector>,
               InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamVector>,local_res8,
               UNiagaraPreviewAxis_InterpParamBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector.InnerSingleton;
}

// StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector @ 149370400

void __cdecl
UNiagaraPreviewAxis_InterpParamVector::StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector
          (void)

{
  return;
}

