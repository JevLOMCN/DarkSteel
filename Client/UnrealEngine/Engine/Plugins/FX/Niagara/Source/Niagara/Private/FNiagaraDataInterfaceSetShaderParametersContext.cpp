// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 10

// GetDebugString @ 149104dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
FNiagaraDataInterfaceSetShaderParametersContext::GetDebugString
          (FNiagaraDataInterfaceSetShaderParametersContext *this,FString *__return_storage_ptr__)

{
  FNiagaraComputeExecutionContext *pFVar1;
  size_t sVar2;
  void *pvVar3;
  ulong64 uVar4;
  wchar_t *pwVar5;
  wchar_t *_Str;
  int iVar6;
  undefined1 auStack_198 [48];
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_198;
  local_168.Base = local_148;
  local_168.bIsDynamic = false;
  local_168.bIsExternal = false;
  local_168.End = (wchar_t *)local_48;
  pFVar1 = this->ComputeInstanceData->Context;
  local_168.CurPos = local_148;
  if (pFVar1 == (FNiagaraComputeExecutionContext *)0x0) {
    _Str = L"Unknown";
  }
  else {
    iVar6 = 0;
    if ((pFVar1->DebugSimName).Data.ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(pFVar1->DebugSimName).Data.AllocatorInstance.Data;
    }
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) goto LAB_149104e66;
  }
  sVar2 = wcslen(_Str);
  iVar6 = (int)sVar2;
LAB_149104e66:
  uVar4 = (ulong64)iVar6;
  pwVar5 = local_148;
  if (local_48 < local_148 + uVar4) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,uVar4);
    pwVar5 = local_168.CurPos;
  }
  if (iVar6 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(pwVar5,_Str,uVar4 * 2);
    pwVar5 = (wchar_t *)((longlong)pvVar3 + uVar4 * 2);
    local_168.CurPos = pwVar5;
  }
  if (this->SimStageData->StageMetaData != (FSimulationStageMetaData *)0x0) {
    if (local_168.End < pwVar5 + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_168,1);
      pwVar5 = local_168.CurPos;
    }
    *pwVar5 = L',';
    local_168.CurPos = local_168.CurPos + 1;
    ::FName::AppendString(&this->SimStageData->StageMetaData->SimulationStageName,&local_168);
    pwVar5 = local_168.CurPos;
  }
  if (local_168.End < pwVar5 + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,1);
    pwVar5 = local_168.CurPos;
  }
  *pwVar5 = L'\0';
  ::FString::FString(__return_storage_ptr__,local_168.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
  return __return_storage_ptr__;
}

// GetParameterIncludedStructInternal @ 149107df0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ushort __thiscall
FNiagaraDataInterfaceSetShaderParametersContext::GetParameterIncludedStructInternal
          (FNiagaraDataInterfaceSetShaderParametersContext *this,FShaderParametersMetadata *param_1)

{
  int iVar1;
  FNiagaraShaderScriptParametersMetadata *pFVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  pFVar2 = this->ShaderParametersMetadata;
  iVar1 = (pFVar2->StructIncludeInfos).ArrayNum;
  pFVar6 = (pFVar2->StructIncludeInfos).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((pFVar2->StructIncludeInfos).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FNiagaraDataInterfaceStructIncludeInfo_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    if (*(FShaderParametersMetadata **)pFVar6 == param_1) {
      if ((0xffff < *(int *)(pFVar6 + 8)) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4627280817045896675>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterface.cpp"
                             ,0x21d,
                             "StructIncludeInfo.ParamterOffset <= TNumericLimits<uint16>::Max()"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
      return *(ushort *)(pFVar6 + 8);
    }
    pFVar6 = pFVar6 + 0x10;
  }
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  return 0;
}

// GetRDGExternalAccessQueue @ 149109f70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FRDGExternalAccessQueue * __thiscall
FNiagaraDataInterfaceSetShaderParametersContext::GetRDGExternalAccessQueue
          (FNiagaraDataInterfaceSetShaderParametersContext *this)

{
  return (FRDGExternalAccessQueue *)&this->ComputeDispatchInterface[1].GpuReadbackManagerPtr;
}

// GetSystemInstanceID @ 14910b0d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ulong64 __thiscall
FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID
          (FNiagaraDataInterfaceSetShaderParametersContext *this)

{
  return this->SystemTick->SystemInstanceID;
}

// GetSystemLWCTile @ 14910b110

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<float> * __thiscall
FNiagaraDataInterfaceSetShaderParametersContext::GetSystemLWCTile
          (FNiagaraDataInterfaceSetShaderParametersContext *this,
          TVector<float> *__return_storage_ptr__)

{
  float fVar1;
  FNiagaraSystemGpuComputeProxy *pFVar2;
  
  pFVar2 = this->SystemTick->SystemGpuComputeProxy;
  fVar1 = (pFVar2->SystemLWCTile).field0_0x0._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(pFVar2->SystemLWCTile).field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// IsIterationStage @ 149117790

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FNiagaraDataInterfaceSetShaderParametersContext::IsIterationStage
          (FNiagaraDataInterfaceSetShaderParametersContext *this)

{
  bool bVar1;
  
  bVar1 = FNiagaraComputeInstanceData::IsIterationStage
                    (this->ComputeInstanceData,this->DataInterfaceProxy,
                     (uint)this->SimStageData->StageIndex);
  return bVar1;
}

// IsOutputStage @ 1491178b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FNiagaraDataInterfaceSetShaderParametersContext::IsOutputStage
          (FNiagaraDataInterfaceSetShaderParametersContext *this)

{
  bool bVar1;
  
  bVar1 = FNiagaraComputeInstanceData::IsOutputStage
                    (this->ComputeInstanceData,this->DataInterfaceProxy,
                     (uint)this->SimStageData->StageIndex);
  return bVar1;
}

// IsParameterBound @ 1491178d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FNiagaraDataInterfaceSetShaderParametersContext::IsParameterBound
          (FNiagaraDataInterfaceSetShaderParametersContext *this,void *param_1)

{
  int iVar1;
  FNiagaraShader *pFVar2;
  ulonglong uVar3;
  ushort *puVar4;
  ushort uVar5;
  undefined1 local_res8 [8];
  
  uVar5 = (short)param_1 - *(short *)&this->BaseParameters;
  pFVar2 = this->ShaderRef->ShaderContent;
  iVar1 = (int)pFVar2->_padding_;
  uVar3 = pFVar2->_padding_;
  if ((uVar3 & 1) != 0) {
    uVar3 = (longlong)&pFVar2->_padding_ + ((longlong)uVar3 >> 0x18);
  }
  puVar4 = (ushort *)(uVar3 + 6);
  while( true ) {
    if ((int)pFVar2->_padding_ != iVar1) {
      `TCheckedPointerIterator<FShaderParameterBindings::FParameter,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if ((puVar4 + -3 == (ushort *)(uVar3 + (longlong)iVar1 * 8)) || (uVar5 < puVar4[-1])) break;
    if ((ushort)(uVar5 - puVar4[-1]) < *puVar4) {
      return true;
    }
    puVar4 = puVar4 + 4;
  }
  return false;
}

// IsResourceBound @ 149117b30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FNiagaraDataInterfaceSetShaderParametersContext::IsResourceBound
          (FNiagaraDataInterfaceSetShaderParametersContext *this,void *param_1)

{
  short *psVar1;
  int iVar2;
  FNiagaraShader *pFVar3;
  short *psVar4;
  short sVar5;
  undefined1 local_res8 [8];
  
  sVar5 = (short)param_1 - *(short *)&this->BaseParameters;
  pFVar3 = this->ShaderRef->ShaderContent;
  iVar2 = (int)pFVar3->_padding_;
  psVar4 = (short *)pFVar3->_padding_;
  if (((ulonglong)psVar4 & 1) != 0) {
    psVar4 = (short *)((longlong)&pFVar3->_padding_ + ((longlong)psVar4 >> 0x18));
  }
  psVar1 = psVar4 + (longlong)iVar2 * 3;
  while( true ) {
    if ((int)pFVar3->_padding_ != iVar2) {
      `TCheckedPointerIterator<FShaderParameterBindings::FBindlessResourceParameter,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (psVar4 == psVar1) break;
    if (*psVar4 == sVar5) {
      return true;
    }
    psVar4 = psVar4 + 3;
  }
  pFVar3 = this->ShaderRef->ShaderContent;
  iVar2 = (int)pFVar3->_padding_;
  psVar4 = (short *)pFVar3->_padding_;
  if (((ulonglong)psVar4 & 1) != 0) {
    psVar4 = (short *)((longlong)&pFVar3->_padding_ + ((longlong)psVar4 >> 0x18));
  }
  psVar1 = psVar4 + (longlong)iVar2 * 2;
  while( true ) {
    if ((int)pFVar3->_padding_ != iVar2) {
      `TCheckedPointerIterator<FShaderParameterBindings::FResourceParameter,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (psVar4 == psVar1) break;
    if (*psVar4 == sVar5) {
      return true;
    }
    psVar4 = psVar4 + 2;
  }
  return false;
}

// IsStructBoundInternal @ 149118580

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FNiagaraDataInterfaceSetShaderParametersContext::IsStructBoundInternal
          (FNiagaraDataInterfaceSetShaderParametersContext *this,void *param_1,uint param_2)

{
  ushort *puVar1;
  ulonglong uVar2;
  int iVar3;
  FNiagaraShader *pFVar4;
  ushort *puVar5;
  ulonglong uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined1 local_res18 [16];
  
  uVar8 = (short)param_1 - *(short *)&this->BaseParameters;
  pFVar4 = this->ShaderRef->ShaderContent;
  iVar3 = (int)pFVar4->_padding_;
  uVar7 = uVar8 + (short)param_2;
  puVar5 = (ushort *)pFVar4->_padding_;
  if (((ulonglong)puVar5 & 1) != 0) {
    puVar5 = (ushort *)((longlong)&pFVar4->_padding_ + ((longlong)puVar5 >> 0x18));
  }
  puVar1 = puVar5 + (longlong)iVar3 * 3;
  while( true ) {
    if ((int)pFVar4->_padding_ != iVar3) {
      `TCheckedPointerIterator<FShaderParameterBindings::FBindlessResourceParameter,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((puVar5 == puVar1) || (uVar7 <= *puVar5)) break;
    if (uVar8 <= *puVar5) {
      return true;
    }
    puVar5 = puVar5 + 3;
  }
  pFVar4 = this->ShaderRef->ShaderContent;
  iVar3 = (int)pFVar4->_padding_;
  puVar5 = (ushort *)pFVar4->_padding_;
  if (((ulonglong)puVar5 & 1) != 0) {
    puVar5 = (ushort *)((longlong)&pFVar4->_padding_ + ((longlong)puVar5 >> 0x18));
  }
  puVar1 = puVar5 + (longlong)iVar3 * 2;
  while( true ) {
    if ((int)pFVar4->_padding_ != iVar3) {
      `TCheckedPointerIterator<FShaderParameterBindings::FResourceParameter,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    if ((puVar5 == puVar1) || (uVar7 <= *puVar5)) break;
    if (uVar8 <= *puVar5) {
      return true;
    }
    puVar5 = puVar5 + 2;
  }
  pFVar4 = this->ShaderRef->ShaderContent;
  iVar3 = (int)pFVar4->_padding_;
  uVar6 = pFVar4->_padding_;
  if ((uVar6 & 1) != 0) {
    uVar6 = (longlong)&pFVar4->_padding_ + ((longlong)uVar6 >> 0x18);
  }
  uVar2 = uVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if ((int)pFVar4->_padding_ != iVar3) {
      `TCheckedPointerIterator<FShaderParameterBindings::FParameter,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if ((uVar6 == uVar2) || (uVar7 <= *(ushort *)(uVar6 + 4))) break;
    if (uVar8 <= *(ushort *)(uVar6 + 4)) {
      return true;
    }
    uVar6 = uVar6 + 8;
  }
  return false;
}

