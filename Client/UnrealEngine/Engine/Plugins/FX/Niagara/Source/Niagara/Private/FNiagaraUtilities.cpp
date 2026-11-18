// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 20

// operator() @ 149027910

void __thiscall
`FNiagaraUtilities::ResolveAliases'::__l2::<lambda_1>::operator()
          (void *this,TStringView<wchar_t> *param_1)

{
  undefined8 *puVar1;
  ForElementType<TStringView<wchar_t>_> FVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  ForElementType<TStringView<wchar_t>_> FVar7;
  
  FVar2 = *(ForElementType<TStringView<wchar_t>_> *)this;
  FVar7 = *(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x100);
  if (*(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x100) ==
      (ForElementType<TStringView<wchar_t>_>)0x0) {
    FVar7 = FVar2;
  }
  if (((ulonglong)FVar7 <= param_1) &&
     (param_1 < (TStringView<wchar_t> *)
                ((longlong)*(int *)((longlong)FVar2 + 0x10c) * 0x10 + (longlong)FVar7))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = *(int *)((longlong)FVar2 + 0x108);
  if (iVar6 == *(int *)((longlong)FVar2 + 0x10c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_>
                      (0x810,(ForElementType<TStringView<wchar_t>_> *)FVar2,
                       (int *)((longlong)FVar2 + 0x10c));
  }
  *(int *)((longlong)FVar2 + 0x108) = iVar6 + 1;
  uVar4 = *(undefined8 *)&param_1->Size;
  FVar7 = *(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x100);
  if (*(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x100) ==
      (ForElementType<TStringView<wchar_t>_>)0x0) {
    FVar7 = FVar2;
  }
  puVar1 = (undefined8 *)((longlong)FVar7 + (longlong)iVar6 * 0x10);
  *puVar1 = param_1->DataPtr;
  puVar1[1] = uVar4;
  return;
}

// AllowComputeShaders @ 14902da90

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FNiagaraUtilities::AllowComputeShaders(void)

{
  if ((GNiagaraAllowComputeShaders != 0) && (GRHIGlobals.SupportsDrawIndirect)) {
    return true;
  }
  return false;
}

// AllowGPUCulling @ 14902dab0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FNiagaraUtilities::AllowGPUCulling(void)

{
  if ((((GNiagaraGPUCulling != 0) && (FXConsoleVariables::bAllowGPUSorting != 0)) &&
      (GNiagaraAllowComputeShaders != 0)) && (GRHIGlobals.SupportsDrawIndirect)) {
    return true;
  }
  return false;
}

// AllowGPUParticles @ 14902dae0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FNiagaraUtilities::AllowGPUParticles(void)

{
  if (((GNiagaraAllowGPUParticles != 0) && (GNiagaraAllowComputeShaders != 0)) &&
     (GRHIGlobals.SupportsDrawIndirect)) {
    return true;
  }
  return false;
}

// AllowGPUSorting @ 14902db10

bool __cdecl FNiagaraUtilities::AllowGPUSorting(void)

{
  return FXConsoleVariables::bAllowGPUSorting != 0;
}

// AreBufferSRVsAlwaysCreated @ 14902db70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FNiagaraUtilities::AreBufferSRVsAlwaysCreated(EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x2ce,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bSupportsManualVertexFetch == 0) {
    bVar2 = IsGPUSkinCacheAvailable(param_1);
    if (!bVar2) {
      return false;
    }
  }
  return true;
}

// BufferFormatToPixelFormat @ 14902eec0

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<EPixelFormat> __cdecl
FNiagaraUtilities::BufferFormatToPixelFormat
          (ENiagaraGpuBufferFormat param_1,EPixelFormatCapabilities param_2,int param_3)

{
  byte bVar1;
  EPixelFormatCapabilities EVar2;
  code *pcVar3;
  bool bVar4;
  TOptional<EPixelFormat> TVar5;
  TTuple<EPixelFormat,EPixelFormat> *pTVar6;
  undefined7 in_register_00000009;
  byte *pbVar7;
  ulonglong uVar8;
  int in_R9D;
  
  pbVar7 = (byte *)CONCAT71(in_register_00000009,param_1);
  if (in_R9D - 1U < 4) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FormatFallbacks[0] = (TTuple<EPixelFormat,EPixelFormat>)0x1547;
      FormatFallbacks[1] = (TTuple<EPixelFormat,EPixelFormat>)0xd15;
      FormatFallbacks[2] = (TTuple<EPixelFormat,EPixelFormat>)0x110d;
      FormatFallbacks[3] = (TTuple<EPixelFormat,EPixelFormat>)0xf28;
      FormatFallbacks[4] = (TTuple<EPixelFormat,EPixelFormat>)0x110f;
      FormatFallbacks[5] = (TTuple<EPixelFormat,EPixelFormat>)0x111;
      FormatFallbacks[6] = (TTuple<EPixelFormat,EPixelFormat>)0xa25;
      FormatFallbacks[7] = (TTuple<EPixelFormat,EPixelFormat>)0x10a;
      _Init_thread_footer(&::_TSS0);
    }
    bVar1 = (&DAT_151d51f45)[(longlong)in_R9D * 3 + (ulonglong)(byte)param_2];
    uVar8 = (ulonglong)bVar1;
    EVar2 = GPixelFormats[uVar8].Capabilities;
    while ((EVar2 & param_3) != param_3) {
      pTVar6 = FormatFallbacks;
      while (*(char *)pTVar6 != (char)uVar8) {
        pTVar6 = pTVar6 + 1;
        if (pTVar6 == (TTuple<EPixelFormat,EPixelFormat> *)&::_TSS0) {
          if (1 < (byte)LogNiagara._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          }
          goto LAB_14902eff9;
        }
      }
      bVar1 = pTVar6->field_0x1;
      uVar8 = (ulonglong)bVar1;
      EVar2 = GPixelFormats[uVar8].Capabilities;
    }
    *pbVar7 = bVar1;
    pbVar7[1] = 1;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8123773844012923641>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraCommon.cpp"
                       ,0x507,"NumberOfChannels >= 1 && NumberOfChannels <= 4");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5 = (TOptional<EPixelFormat>)(*pcVar3)();
      return TVar5;
    }
    if (1 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
LAB_14902eff9:
    pbVar7[1] = 0;
  }
  return SUB82(pbVar7,0);
}

// BufferFormatToPixelFormat @ 14902f070

EPixelFormat __cdecl FNiagaraUtilities::BufferFormatToPixelFormat(ENiagaraGpuBufferFormat param_1)

{
  TOptional<EPixelFormat> TVar1;
  undefined6 extraout_var;
  
  TVar1 = BufferFormatToPixelFormat(0x10,(uint)param_1,0x600000);
  if (((EPixelFormat *)CONCAT62(extraout_var,TVar1))[1] != PF_Unknown) {
    return *(EPixelFormat *)CONCAT62(extraout_var,TVar1);
  }
  return PF_R32_FLOAT;
}

// BufferFormatToRenderTargetFormat @ 14902f0b0

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<ETextureRenderTargetFormat> __cdecl
FNiagaraUtilities::BufferFormatToRenderTargetFormat
          (ENiagaraGpuBufferFormat param_1,EPixelFormatCapabilities param_2)

{
  undefined7 in_register_00000009;
  TOptional<ETextureRenderTargetFormat> TVar1;
  EPixelFormatCapabilities in_R8D;
  
  TVar1._1_7_ = in_register_00000009;
  TVar1.TypedValue._0_1_ = param_1;
  if ((char)param_2 != '\0') {
    if ((param_2 & 0xff) != 1) {
      if ((param_2 & 0xff) != Texture1D) goto LAB_14902f130;
      if ((GPixelFormats[0x47].Capabilities & in_R8D) == in_R8D) {
        *(undefined4 *)TVar1 = 0;
        *(undefined1 *)((longlong)TVar1 + 4) = 1;
        return TVar1;
      }
    }
    if ((GPixelFormats[0x15].Capabilities & in_R8D) == in_R8D) {
      *(undefined4 *)TVar1 = 4;
      *(undefined1 *)((longlong)TVar1 + 4) = 1;
      return TVar1;
    }
  }
  if ((GPixelFormats[0xd].Capabilities & in_R8D) == in_R8D) {
    *(undefined4 *)TVar1 = 7;
    *(undefined1 *)((longlong)TVar1 + 4) = 1;
    return TVar1;
  }
LAB_14902f130:
  if (1 < (byte)LogNiagara._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  *(undefined1 *)((longlong)TVar1 + 4) = 0;
  return TVar1;
}

// BufferFormatToRenderTargetFormat @ 14902f170

/* WARNING: Enum "Type": Some values do not have unique names */

ETextureRenderTargetFormat __cdecl
FNiagaraUtilities::BufferFormatToRenderTargetFormat(ENiagaraGpuBufferFormat param_1)

{
  if (param_1 != Float) {
    if (param_1 != HalfFloat) {
      if (param_1 != UnsignedNormalizedByte) goto LAB_14902f1d1;
      if ((GPixelFormats[0x47].Capabilities & (TypedUAVStore|TypedUAVLoad)) ==
          (TypedUAVStore|TypedUAVLoad)) {
        return RTF_R8;
      }
    }
    if ((GPixelFormats[0x15].Capabilities & (TypedUAVStore|TypedUAVLoad)) ==
        (TypedUAVStore|TypedUAVLoad)) {
      return RTF_R16f;
    }
  }
  if ((GPixelFormats[0xd].Capabilities & (TypedUAVStore|TypedUAVLoad)) ==
      (TypedUAVStore|TypedUAVLoad)) {
    return RTF_R32f;
  }
LAB_14902f1d1:
  if (1 < (byte)LogNiagara._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  return RTF_R32f;
}

// ConvertScriptUsageToStaticSwitchContext @ 149033c30

ENiagaraScriptContextStaticSwitch __cdecl
FNiagaraUtilities::ConvertScriptUsageToStaticSwitchContext(ENiagaraScriptUsage param_1)

{
  if ((byte)(param_1 - SystemSpawnScript) < 2) {
    return System;
  }
  if (param_1 != EmitterSpawnScript) {
    return (param_1 != EmitterUpdateScript) + Emitter;
  }
  return Emitter;
}

// ConvertScriptUsageToStaticSwitchUsage @ 149033c60

ENiagaraCompileUsageStaticSwitch __cdecl
FNiagaraUtilities::ConvertScriptUsageToStaticSwitchUsage(ENiagaraScriptUsage param_1)

{
  ENiagaraCompileUsageStaticSwitch EVar1;
  
  if (param_1 == ParticleEventScript) {
    return Event;
  }
  if (param_1 == ParticleSimulationStageScript) {
    return SimulationStage;
  }
  if ((param_1 < SystemUpdateScript) && ((0xa18U >> (param_1 & 0x1f) & 1) != 0)) {
    return Spawn;
  }
  if ((param_1 - EmitterUpdateScript & 0xfd) != 0) {
    EVar1 = Update;
    if (param_1 != ParticleUpdateScript) {
      EVar1 = Default;
    }
    return EVar1;
  }
  return Update;
}

// ConvertVariableToRapidIterationConstantName @ 149033cb0

FNiagaraVariable * __cdecl
FNiagaraUtilities::ConvertVariableToRapidIterationConstantName
          (FNiagaraVariable *__return_storage_ptr__,FNiagaraVariable *param_1,wchar_t *param_2,
          ENiagaraScriptUsage param_3)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FName *pFVar3;
  wchar_t *pwVar4;
  FName local_res8;
  FString local_18;
  
  FNiagaraVariable::FNiagaraVariable(__return_storage_ptr__,param_1);
  pFVar2 = CreateRapidIterationConstantName
                     (&local_18,(FName)__return_storage_ptr__->_padding_,param_2,param_3);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  pFVar3 = ::FName::FName(&local_res8,pwVar4);
  __return_storage_ptr__->_padding_ = (longlong)*pFVar3;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar1 = (param_1->VarData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// CreateRapidIterationConstantName @ 14903b320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
FNiagaraUtilities::CreateRapidIterationConstantName
          (FString *__return_storage_ptr__,FName param_1,wchar_t *param_2,
          ENiagaraScriptUsage param_3)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  size_t sVar7;
  FString *pFVar8;
  ulong64 uVar9;
  wchar_t *pwVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  FName local_res10;
  undefined1 auStack_1148 [32];
  int local_1128;
  int local_1120;
  TStringView<wchar_t> local_1118;
  FName local_1108;
  FString *local_1100;
  wchar_t *local_10f8;
  int iStack_10f0;
  undefined4 uStack_10ec;
  TStringView<wchar_t> local_10e8;
  TStringBuilderBase<wchar_t> local_10d8;
  wchar_t local_10b8 [1035];
  wchar_t local_8a2 [5];
  TStringBuilderBase<wchar_t> local_898;
  wchar_t local_878 [1035];
  wchar_t local_62 [5];
  wchar_t local_58 [12];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_1148;
  local_10d8.Base = local_10b8;
  local_10d8.CurPos = local_10b8;
  local_10d8.End = local_8a2;
  local_10d8.bIsDynamic = false;
  local_10d8.bIsExternal = false;
  local_res10 = param_1;
  local_1100 = __return_storage_ptr__;
  pvVar6 = FGenericPlatformString::Memcpy(local_10b8,L"Constants",0x12);
  local_10d8.CurPos = (wchar_t *)((longlong)pvVar6 + 0x12);
  if (local_10d8.End < (wchar_t *)((longlong)pvVar6 + 0x14)) {
    TStringBuilderBase<wchar_t>::Extend(&local_10d8,1);
  }
  iVar13 = 0;
  *local_10d8.CurPos = L'.';
  local_10d8.CurPos = local_10d8.CurPos + 1;
  if (param_2 == (wchar_t *)0x0) {
    ::FName::AppendString(&local_res10,&local_10d8);
    goto LAB_14903b77c;
  }
  local_1108 = local_res10;
  local_898.Base = local_878;
  local_898.CurPos = local_878;
  local_898.End = local_62;
  local_898.bIsDynamic = false;
  local_898.bIsExternal = false;
  ::FName::AppendString(&local_1108,&local_898);
  pwVar2 = local_898.Base;
  local_10f8 = local_58;
  lVar12 = (longlong)local_898.CurPos - (longlong)local_898.Base;
  builtin_wcsncpy(local_58,L"Emitter.",9);
  sVar7 = wcslen(local_58);
  iStack_10f0 = (int)sVar7;
  local_10e8._12_4_ = uStack_10ec;
  local_10e8.Size = iStack_10f0;
  iVar11 = (int)(lVar12 >> 1);
  local_1118.Size = iVar13;
  if (0 < iVar11) {
    local_1118.Size = iVar11;
  }
  local_10e8.DataPtr = local_10f8;
  local_1118.DataPtr = pwVar2 + ((longlong)iVar11 - (longlong)local_1118.Size);
  iVar4 = UE::String::FindFirst(&local_1118,&local_10e8,CaseSensitive);
  if (iVar4 != -1) {
    if (iVar4 != 0) {
      iVar5 = iVar4 + -1;
      if (((iVar5 < 0) || (iVar11 <= iVar5)) &&
         (local_1128 = iVar5, local_1120 = iVar11,
         bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < Size",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                            ,0x234,
                            L"Index out of bounds on StringView: index %i on a view with a length of %i"
                           ), bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar1)();
        return pFVar8;
      }
      if (pwVar2[(longlong)iVar4 + -1] != L'.') goto LAB_14903b550;
    }
    if (iVar4 + 8 < iVar11) {
      iVar13 = 1;
    }
  }
LAB_14903b550:
  sVar7 = wcslen(param_2);
  uVar9 = (ulong64)(int)sVar7;
  if (local_10d8.End < local_10d8.CurPos + uVar9) {
    TStringBuilderBase<wchar_t>::Extend(&local_10d8,uVar9);
  }
  if ((int)sVar7 != 0) {
    pvVar6 = FGenericPlatformString::Memcpy(local_10d8.CurPos,param_2,uVar9 * 2);
    local_10d8.CurPos = (wchar_t *)((longlong)pvVar6 + uVar9 * 2);
  }
  if (local_10d8.End < local_10d8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_10d8,1);
  }
  *local_10d8.CurPos = L'.';
  local_10d8.CurPos = local_10d8.CurPos + 1;
  if ((char)iVar13 == '\0') {
    uVar9 = (ulong64)iVar11;
    if (local_10d8.End < local_10d8.CurPos + uVar9) {
      TStringBuilderBase<wchar_t>::Extend(&local_10d8,uVar9);
    }
    if (iVar11 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy(local_10d8.CurPos,pwVar2,uVar9 * 2);
      local_10d8.CurPos = (wchar_t *)((longlong)pvVar6 + uVar9 * 2);
    }
  }
  else {
    iVar13 = iVar11;
    if (iVar4 < iVar11) {
      iVar13 = iVar4;
    }
    iVar5 = 0;
    if (0 < iVar13) {
      iVar5 = iVar13;
    }
    uVar9 = (ulong64)iVar5;
    if (local_10d8.End < local_10d8.CurPos + uVar9) {
      TStringBuilderBase<wchar_t>::Extend(&local_10d8,uVar9);
    }
    if (iVar5 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy(local_10d8.CurPos,pwVar2,uVar9 * 2);
      local_10d8.CurPos = (wchar_t *)((longlong)pvVar6 + uVar9 * 2);
    }
    pwVar10 = local_10d8.CurPos;
    sVar7 = wcslen(param_2);
    uVar9 = (ulong64)(int)sVar7;
    if (local_10d8.End < pwVar10 + uVar9) {
      TStringBuilderBase<wchar_t>::Extend(&local_10d8,uVar9);
      pwVar10 = local_10d8.CurPos;
    }
    if ((int)sVar7 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy(pwVar10,param_2,uVar9 * 2);
      pwVar10 = (wchar_t *)((longlong)pvVar6 + uVar9 * 2);
      local_10d8.CurPos = pwVar10;
    }
    if (local_10d8.End < pwVar10 + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_10d8,1);
      pwVar10 = local_10d8.CurPos;
    }
    *pwVar10 = L'.';
    iVar4 = (iVar11 - iVar4) + -8;
    local_10d8.CurPos = local_10d8.CurPos + 1;
    iVar13 = iVar11;
    if (iVar4 < iVar11) {
      iVar13 = iVar4;
    }
    iVar4 = 0;
    if (0 < iVar13) {
      iVar4 = iVar13;
    }
    uVar9 = (ulong64)iVar4;
    if (local_10d8.End < local_10d8.CurPos + uVar9) {
      TStringBuilderBase<wchar_t>::Extend(&local_10d8,uVar9);
    }
    if (iVar4 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy
                         (local_10d8.CurPos,pwVar2 + ((longlong)iVar11 - uVar9),uVar9 * 2);
      local_10d8.CurPos = (wchar_t *)((longlong)pvVar6 + uVar9 * 2);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_898);
  __return_storage_ptr__ = local_1100;
LAB_14903b77c:
  if (local_10d8.End < local_10d8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_10d8,1);
  }
  *local_10d8.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_10d8.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10d8);
  return __return_storage_ptr__;
}

// DumpHLSLText @ 14903f270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FNiagaraUtilities::DumpHLSLText(FString *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  if ((3 < (byte)LogNiagara._0_1_) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
     3 < (byte)LogNiagara._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  ::FString::ParseIntoArrayLines(param_1,&local_18,false);
  uVar5 = 0;
  iVar4 = local_18.ArrayNum;
  if (0 < local_18.ArrayNum) {
    do {
      if (3 < (byte)LogNiagara._0_1_) {
        uVar3 = 0;
        if ((int)uVar5 < iVar4) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        iVar4 = local_18.ArrayNum;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar4);
  }
  if (3 < (byte)LogNiagara._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    iVar4 = local_18.ArrayNum;
  }
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,iVar4);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GetUniqueName @ 14904a530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __cdecl
FNiagaraUtilities::GetUniqueName
          (FName param_1,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  FName FVar9;
  FName *pFVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  ForElementType<FSetElementId> FVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  int iVar16;
  FName FVar17;
  longlong *in_R8;
  uint uVar18;
  int iVar19;
  undefined1 auStackY_1c8 [32];
  undefined1 local_188 [8];
  ForAnyElementType local_180;
  int local_178;
  int local_174;
  FString local_170;
  undefined4 local_160;
  FName local_158;
  FName local_150;
  undefined4 local_148;
  undefined4 local_144;
  FName local_140;
  int iStack_130;
  uint uStack_12c;
  TBitArray<FDefaultBitArrayAllocator> *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  int local_108;
  undefined1 local_104 [12];
  FString local_f8;
  FString local_e8;
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  FString local_a8;
  FName local_98 [2];
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._0_8_ = 0;
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(in_R8 + 2);
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_118 = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  iVar19 = (int)in_R8[5];
  iStack_130 = 0;
  local_160 = 0;
  uStack_12c = 1;
  iStack_11c = local_118;
  if (iVar19 != 0) {
    pTVar12 = (TBitArray<FDefaultBitArrayAllocator> *)in_R8[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)in_R8[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uStack_12c = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    local_118 = 0;
    iStack_130 = 0;
    while (uStack_12c == 0) {
      lVar8 = (longlong)iStack_130;
      local_118 = local_118 + 0x20;
      iStack_130 = iStack_130 + 1;
      uStack_12c = 1;
      iStack_11c = iVar19;
      if ((int)((iVar19 + -1 >> 0x1f & 0x1fU) + iVar19 + -1) >> 5 < iStack_130) goto LAB_14904a62f;
      uStack_12c = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uStack_12c = -uStack_12c & uStack_12c;
    uVar2 = (ulonglong)uStack_12c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_108 = (int)lVar8;
    iStack_11c = local_118 + -1 + local_108;
    if (iVar19 < iStack_11c) {
      iStack_11c = iVar19;
    }
  }
LAB_14904a62f:
  uVar15 = *(uint *)(in_R8 + 5);
  uVar18 = uVar15 & 0xffffffe0;
  iStack_110 = (int)in_R8[1] - *(int *)((longlong)in_R8 + 0x34);
  uStack_120 = 0xffffffff;
  TStack_d0._padding_ = CONCAT44(uStack_12c,iStack_130);
  TStack_d0.CurrentBitIndex = iStack_11c;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_d0._28_4_ = iStack_11c;
  TStack_d0.BaseBitIndex = local_118;
  uStack_b0 = CONCAT44(uStack_10c,iStack_110);
  local_140 = param_1;
  local_128 = pTVar1;
  iStack_114 = iStack_11c;
  local_104._4_8_ = in_R8;
  local_d8 = in_R8;
  TStack_d0.Array = pTVar1;
  if ((((int)uVar15 < 0) || (iVar19 < (int)uVar15)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    FVar9 = (FName)(*pcVar4)();
    return FVar9;
  }
  uVar3 = *(uint *)(in_R8 + 5);
  if (uVar15 != uVar3) {
    pTVar12 = (TBitArray<FDefaultBitArrayAllocator> *)in_R8[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)in_R8[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar8 = (longlong)iVar16;
      uVar18 = uVar18 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar16) goto LAB_14904a72a;
      uVar15 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar15 = (int)lVar8 + -1 + uVar18;
    if ((int)uVar3 < (int)uVar15) {
      uVar15 = uVar3;
    }
  }
LAB_14904a72a:
  iVar19 = 0;
  while( true ) {
    plVar5 = local_d8;
    if ((int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34) != (int)uStack_b0) {
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_188);
    }
    if (((TStack_d0.CurrentBitIndex == uVar15) && (TStack_d0.Array == pTVar1)) &&
       (plVar5 == (longlong *)local_104._4_8_)) break;
    local_144 = 0;
    local_148 = *(undefined4 *)(*plVar5 + (longlong)TStack_d0.CurrentBitIndex * 0x10);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (&local_88,(FName *)local_104,(bool *)&local_148);
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  local_158.ComparisonIndex.Value = (uint)param_2;
  local_158.Number = 0;
  uVar15 = ::GetTypeHash(local_158.ComparisonIndex);
  if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
    FVar13 = (ForElementType<FSetElementId>)&local_88.Hash;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar13 = local_88.Hash.SecondaryData;
    }
    for (iVar16 = *(int *)((longlong)FVar13 + (ulonglong)(local_88.HashSize - 1U & uVar15) * 4);
        iVar16 != -1; iVar16 = *(int *)(local_88.Elements._0_8_ + 8 + (longlong)iVar16 * 0x10)) {
      if (*(ulonglong *)(local_88.Elements._0_8_ + (longlong)iVar16 * 0x10) ==
          ((ulonglong)param_2 & 0xffffffff)) {
        ::FName::ToString(&local_158,&local_170);
        iVar16 = local_170.Data.ArrayNum;
        FVar14.Data = local_170.Data.AllocatorInstance.Data;
        local_180.Data = (FScriptContainerElement *)0x0;
        local_178 = local_170.Data.ArrayNum;
        if (local_170.Data.ArrayNum == 0) {
          local_174 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_170.Data.ArrayNum,0,&local_180,local_170.Data.ArrayNum,&local_174);
          memcpy(local_180.Data,FVar14.Data,(longlong)iVar16 * 2);
        }
        iVar16 = local_170.Data.ArrayNum + -1;
        if (local_170.Data.ArrayNum == 0) {
          iVar16 = 0;
        }
        iVar11 = iVar19;
        if (iVar16 < 3) {
LAB_14904a932:
          bVar6 = false;
        }
        else {
          FVar14.Data = (FScriptContainerElement *)L"";
          if (local_170.Data.ArrayNum != 0) {
            FVar14.Data = local_170.Data.AllocatorInstance.Data;
          }
          iVar11 = iVar16;
          if (3 < iVar16) {
            iVar11 = 3;
          }
          iVar7 = iVar19;
          if (0 < iVar11) {
            iVar7 = iVar11;
          }
          ::FString::FString(&local_a8,
                             (wchar_t *)(FVar14.Data + ((longlong)iVar16 - (longlong)iVar7) * 2));
          bVar6 = ::FString::IsNumeric(&local_a8);
          iVar11 = 1;
          if (!bVar6) goto LAB_14904a932;
          bVar6 = true;
        }
        if ((iVar11 != 0) &&
           (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          iVar11 = local_170.Data.ArrayNum + -1;
          iVar16 = local_170.Data.ArrayNum + -4;
          if (local_170.Data.ArrayNum == 0) {
            iVar11 = 0;
            iVar16 = -3;
          }
          if (iVar16 < iVar11) {
            iVar11 = iVar16;
          }
          if (0 < iVar11) {
            iVar19 = iVar11;
          }
          FVar14.Data = (FScriptContainerElement *)L"";
          if (local_170.Data.ArrayNum != 0) {
            FVar14.Data = local_170.Data.AllocatorInstance.Data;
          }
          ::FString::ConstructFromPtrSize(&local_f8,(wchar_t *)FVar14.Data,iVar19);
          if (local_180.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.Data);
          }
          local_180.Data = local_f8.Data.AllocatorInstance.Data;
          local_178 = local_f8.Data.ArrayNum;
          local_174 = local_f8.Data.ArrayMax;
        }
        FVar14.Data = (FScriptContainerElement *)L"";
        if (local_178 != 0) {
          FVar14.Data = local_180.Data;
        }
        ::FName::FName(&local_150,(wchar_t *)FVar14.Data);
        while( true ) {
          FVar9 = local_150;
          uVar15 = ::GetTypeHash(local_150.ComparisonIndex.Value);
          FVar17 = local_140;
          if (local_88.Elements._8_4_ == local_88.Elements._52_4_) break;
          FVar13 = (ForElementType<FSetElementId>)&local_88.Hash;
          if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar13 = local_88.Hash.SecondaryData;
          }
          iVar19 = *(int *)((longlong)FVar13 +
                           (ulonglong)(local_88.HashSize - 1U & uVar15 + FVar9.Number) * 4);
          while( true ) {
            if (iVar19 == -1) goto LAB_14904aa35;
            if (*(FName *)(local_88.Elements._0_8_ + (longlong)iVar19 * 0x10) == FVar9) break;
            iVar19 = *(int *)(local_88.Elements._0_8_ + 8 + (longlong)iVar19 * 0x10);
          }
          ::FString::PrintfImpl(&local_e8,L"%s%03i");
          FVar14.Data = (FScriptContainerElement *)L"";
          if (local_e8.Data.ArrayNum != 0) {
            FVar14.Data = local_e8.Data.AllocatorInstance.Data;
          }
          pFVar10 = ::FName::FName(local_98,(wchar_t *)FVar14.Data);
          local_150 = *pFVar10;
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
        }
LAB_14904aa35:
        *(FName *)local_140 = local_150;
        if (local_180.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data);
        }
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
        goto LAB_14904a80b;
      }
    }
  }
  *(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> **)local_140 = param_2;
  FVar17 = local_140;
LAB_14904a80b:
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  return FVar17;
}

// LogVerboseWarnings @ 14905b430

bool __cdecl FNiagaraUtilities::LogVerboseWarnings(void)

{
  return GNiagaraLogVerboseWarnings != 0;
}

// ResolveAliases @ 149064810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FNiagaraVariable * __cdecl
FNiagaraUtilities::ResolveAliases
          (FNiagaraVariable *__return_storage_ptr__,FNiagaraVariable *param_1,
          FNiagaraAliasContext *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FNiagaraVariable *pFVar6;
  void *pvVar7;
  FName *pFVar8;
  wchar_t *pwVar9;
  ulong64 uVar10;
  ForElementType<TStringView<wchar_t>_> FVar11;
  int iVar12;
  ForElementType<TStringView<wchar_t>_> FVar13;
  undefined1 auStack_438 [32];
  undefined8 local_418;
  longlong local_410;
  int local_408;
  undefined1 local_404 [4];
  TArray<TStringView<wchar_t>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *local_400;
  wchar_t *local_3f8;
  int iStack_3f0;
  undefined4 uStack_3ec;
  code *local_3e8;
  TArray<TStringView<wchar_t>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> **local_3e0
  ;
  undefined8 local_3d8;
  int iStack_3d0;
  undefined4 uStack_3cc;
  FName local_3c8 [2];
  TStringView<wchar_t> local_3b8;
  TArray<TStringView<wchar_t>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_3a8;
  TStringBuilderBase<wchar_t> local_298;
  wchar_t local_278 [128];
  TStringBuilderBase<wchar_t> local_178;
  wchar_t local_158 [128];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_438;
  FNiagaraVariable::FNiagaraVariable(__return_storage_ptr__,param_1);
  local_178.Base = local_158;
  local_178.bIsDynamic = false;
  local_178.bIsExternal = false;
  local_178.CurPos = local_158;
  local_178.End = (wchar_t *)local_58;
  ::FName::ToString((FName *)param_1,&local_178);
  local_400 = &local_3a8;
  local_3e0 = &local_400;
  local_3a8.ArrayMax = 0x10;
  local_3a8.AllocatorInstance.SecondaryData = (ForElementType<TStringView<wchar_t>_>)0x0;
  local_3e8 = UE::Core::Private::Function::
              TFunctionRefCaller<`FNiagaraUtilities::ResolveAliases'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
              ::Call;
  local_3f8 = local_178.Base;
  iStack_3f0 = (int)((longlong)local_178.CurPos - (longlong)local_178.Base >> 1);
  local_3b8._12_4_ = uStack_3ec;
  local_3b8.Size = iStack_3f0;
  local_3b8.DataPtr = local_178.Base;
  iVar12 = 0;
  local_3a8.ArrayNum = 0;
  UE::String::ParseTokens
            (&local_3b8,L'.',(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_3e8,None);
  local_408 = -1;
  if (local_3a8.ArrayNum < 1) {
    local_418 = 0;
    local_410 = (longlong)local_3a8.ArrayNum;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FNiagaraVariable *)(*pcVar2)();
      return pFVar6;
    }
  }
  FVar11 = (ForElementType<TStringView<wchar_t>_>)&local_3a8;
  if (local_3a8.AllocatorInstance.SecondaryData != (ForElementType<TStringView<wchar_t>_>)0x0) {
    FVar11 = local_3a8.AllocatorInstance.SecondaryData;
  }
  iVar5 = FNiagaraConstants::RapidIterationParametersNamespaceString.Data.ArrayNum + -1;
  if (FNiagaraConstants::RapidIterationParametersNamespaceString.Data.ArrayNum == 0) {
    iVar5 = iVar12;
  }
  iVar1 = *(int *)((longlong)FVar11 + 8);
  if (((iVar1 == iVar5) &&
      (((iVar1 == 0 || (iVar5 == 0)) ||
       (iVar4 = wcsncmp(*(wchar_t **)FVar11,
                        (wchar_t *)
                        FNiagaraConstants::RapidIterationParametersNamespaceString.Data.
                        AllocatorInstance.Data,(longlong)iVar5), iVar4 == 0)))) && (iVar1 == iVar5))
  {
    AliasRapidIterationConstant(param_2,&local_3a8,&local_408);
  }
  else {
    if (local_3a8.ArrayNum < 1) {
      local_418 = 0;
      local_410 = (longlong)local_3a8.ArrayNum;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FNiagaraVariable *)(*pcVar2)();
        return pFVar6;
      }
    }
    FVar11 = (ForElementType<TStringView<wchar_t>_>)&local_3a8;
    if (local_3a8.AllocatorInstance.SecondaryData != (ForElementType<TStringView<wchar_t>_>)0x0) {
      FVar11 = local_3a8.AllocatorInstance.SecondaryData;
    }
    iVar5 = FNiagaraConstants::EngineNamespaceString.Data.ArrayNum + -1;
    if (FNiagaraConstants::EngineNamespaceString.Data.ArrayNum == 0) {
      iVar5 = iVar12;
    }
    iVar1 = *(int *)((longlong)FVar11 + 8);
    if (((iVar1 == iVar5) &&
        (((iVar1 == 0 || (iVar5 == 0)) ||
         (iVar4 = wcsncmp(*(wchar_t **)FVar11,
                          (wchar_t *)
                          FNiagaraConstants::EngineNamespaceString.Data.AllocatorInstance.Data,
                          (longlong)iVar5), iVar4 == 0)))) && (iVar1 == iVar5)) {
      if (((param_2->EmitterMapping).bIsSet != false) && (2 < local_3a8.ArrayNum)) {
        FVar11 = local_3a8.AllocatorInstance.SecondaryData;
        if (local_3a8.AllocatorInstance.SecondaryData == (ForElementType<TStringView<wchar_t>_>)0x0)
        {
          FVar11 = (ForElementType<TStringView<wchar_t>_>)&local_3a8;
        }
        iVar5 = *(int *)&(param_2->EmitterMapping).TypedValue.field_0x8;
        iVar1 = *(int *)((uchar *)((longlong)FVar11 + 0x10) + 8);
        iVar4 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar4 = iVar12;
        }
        if ((iVar1 == iVar4) &&
           ((((iVar1 == 0 || (iVar4 == 0)) ||
             (iVar5 = wcsncmp(*(wchar_t **)((longlong)FVar11 + 0x10),
                              *(wchar_t **)&(param_2->EmitterMapping).TypedValue,(longlong)iVar4),
             iVar5 == 0)) && (iVar1 == iVar4)))) {
          if (((param_2->EmitterMapping).bIsSet == false) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar6 = (FNiagaraVariable *)(*pcVar2)();
            return pFVar6;
          }
          local_3d8 = *(undefined8 *)&(param_2->EmitterMapping).TypedValue.field_0x10;
          iVar5 = *(int *)&(param_2->EmitterMapping).TypedValue.field_0x18;
          iStack_3d0 = iVar5 + -1;
          if (iVar5 == 0) {
            iStack_3d0 = iVar12;
          }
          if (local_3a8.ArrayNum < 2) {
            local_418 = 1;
            local_410 = (longlong)local_3a8.ArrayNum;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pFVar6 = (FNiagaraVariable *)(*pcVar2)();
              return pFVar6;
            }
          }
          FVar11 = (ForElementType<TStringView<wchar_t>_>)&local_3a8;
          if (local_3a8.AllocatorInstance.SecondaryData !=
              (ForElementType<TStringView<wchar_t>_>)0x0) {
            FVar11 = local_3a8.AllocatorInstance.SecondaryData;
          }
          *(undefined8 *)((longlong)FVar11 + 0x10) = local_3d8;
          *(ulonglong *)((longlong)FVar11 + 0x18) = CONCAT44(uStack_3cc,iStack_3d0);
        }
      }
    }
    else {
      AliasStandardParameter(param_2,&local_3a8,&local_408);
    }
  }
  if (local_408 != -1) {
    AliasAssignmentInputNamespace(param_2,&local_408,&local_3a8);
  }
  iVar12 = local_3a8.ArrayNum;
  local_298.Base = local_278;
  pwVar9 = local_278;
  local_298.bIsDynamic = false;
  local_298.bIsExternal = false;
  local_298.CurPos = pwVar9;
  local_298.End = (wchar_t *)&local_178;
  FVar11 = (ForElementType<TStringView<wchar_t>_>)&local_3a8;
  if (local_3a8.AllocatorInstance.SecondaryData != (ForElementType<TStringView<wchar_t>_>)0x0) {
    FVar11 = local_3a8.AllocatorInstance.SecondaryData;
  }
  bVar3 = true;
  FVar13 = (ForElementType<TStringView<wchar_t>_>)
           ((longlong)local_3a8.ArrayNum * 0x10 + (longlong)FVar11);
  while( true ) {
    if (local_3a8.ArrayNum != iVar12) {
      `TCheckedPointerIterator<TStringView<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_404);
      pwVar9 = local_298.CurPos;
    }
    if (FVar11 == FVar13) break;
    if (bVar3) {
      bVar3 = false;
    }
    else {
      if (local_298.End < (TStringBuilderBase<wchar_t> *)(pwVar9 + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_298,1);
        pwVar9 = local_298.CurPos;
      }
      pvVar7 = FGenericPlatformString::Memcpy(pwVar9,L".",2);
      pwVar9 = (wchar_t *)((longlong)pvVar7 + 2);
      local_298.CurPos = pwVar9;
    }
    pvVar7 = *(void **)FVar11;
    iVar5 = (int)*(undefined8 *)((longlong)FVar11 + 8);
    uVar10 = (ulong64)iVar5;
    if (local_298.End < (TStringBuilderBase<wchar_t> *)(pwVar9 + uVar10)) {
      TStringBuilderBase<wchar_t>::Extend(&local_298,uVar10);
      pwVar9 = local_298.CurPos;
    }
    if (iVar5 != 0) {
      pvVar7 = FGenericPlatformString::Memcpy(pwVar9,pvVar7,uVar10 * 2);
      pwVar9 = (wchar_t *)((longlong)pvVar7 + uVar10 * 2);
      local_298.CurPos = pwVar9;
    }
    FVar11 = (ForElementType<TStringView<wchar_t>_>)((longlong)FVar11 + 0x10);
  }
  if (local_298.End < (TStringBuilderBase<wchar_t> *)(pwVar9 + 1)) {
    TStringBuilderBase<wchar_t>::Extend(&local_298,1);
    pwVar9 = local_298.CurPos;
  }
  *pwVar9 = L'\0';
  pFVar8 = ::FName::FName(local_3c8,local_298.Base);
  __return_storage_ptr__->_padding_ = (longlong)*pFVar8;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_298);
  if (local_3a8.AllocatorInstance.SecondaryData != (ForElementType<TStringView<wchar_t>_>)0x0) {
    FMemory::Free((void *)local_3a8.AllocatorInstance.SecondaryData);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
  return __return_storage_ptr__;
}

// SanitizeNameForObjectsAndPackages @ 149064ea0

FString * __cdecl
FNiagaraUtilities::SanitizeNameForObjectsAndPackages
          (FString *__return_storage_ptr__,FString *param_1)

{
  wchar_t wVar1;
  undefined *puVar2;
  
  ::FString::FString(__return_storage_ptr__,param_1);
  wVar1 = L'\"';
  puVar2 = &u________________;
  do {
    ::FString::ReplaceCharInlineCaseSensitive(__return_storage_ptr__,wVar1,L'_');
    wVar1 = *(wchar_t *)(puVar2 + 2);
    puVar2 = puVar2 + 2;
  } while (wVar1 != L'\0');
  puVar2 = &u______<>________;
  wVar1 = L'\\';
  do {
    ::FString::ReplaceCharInlineCaseSensitive(__return_storage_ptr__,wVar1,L'_');
    wVar1 = *(wchar_t *)(puVar2 + 2);
    puVar2 = puVar2 + 2;
  } while (wVar1 != L'\0');
  return __return_storage_ptr__;
}

// SystemInstanceIDToString @ 14906a770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
FNiagaraUtilities::SystemInstanceIDToString(FString *__return_storage_ptr__,ulong64 param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  undefined1 auStack_58 [32];
  wchar_t local_38;
  short local_36;
  short local_34;
  short local_32;
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  undefined2 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  uVar1 = (ushort)param_1 & 0xf;
  local_1a = 0x30;
  if (9 < uVar1) {
    local_1a = 0x37;
  }
  local_1a = local_1a + uVar1;
  uVar1 = (ushort)(param_1 >> 4) & 0xf;
  local_1c = 0x30;
  if (9 < uVar1) {
    local_1c = 0x37;
  }
  local_1c = local_1c + uVar1;
  uVar1 = (ushort)(param_1 >> 8) & 0xf;
  local_1e = 0x30;
  if (9 < uVar1) {
    local_1e = 0x37;
  }
  local_1e = local_1e + uVar1;
  uVar1 = (ushort)(param_1 >> 0xc) & 0xf;
  local_20 = 0x30;
  if (9 < uVar1) {
    local_20 = 0x37;
  }
  local_20 = local_20 + uVar1;
  uVar1 = (ushort)(param_1 >> 0x10) & 0xf;
  local_22 = 0x30;
  if (9 < uVar1) {
    local_22 = 0x37;
  }
  local_22 = local_22 + uVar1;
  uVar1 = (ushort)(param_1 >> 0x14) & 0xf;
  local_24 = 0x30;
  if (9 < uVar1) {
    local_24 = 0x37;
  }
  local_24 = local_24 + uVar1;
  uVar1 = (ushort)(param_1 >> 0x18) & 0xf;
  local_26 = 0x30;
  sVar3 = 0x37;
  if (9 < uVar1) {
    local_26 = 0x37;
  }
  local_26 = local_26 + uVar1;
  uVar1 = (ushort)(param_1 >> 0x1c) & 0xf;
  local_28 = 0x30;
  if (9 < uVar1) {
    local_28 = 0x37;
  }
  local_28 = local_28 + uVar1;
  uVar1 = (ushort)(param_1 >> 0x20) & 0xf;
  local_2a = 0x30;
  if (9 < uVar1) {
    local_2a = sVar3;
  }
  local_2a = local_2a + uVar1;
  uVar1 = (ushort)(param_1 >> 0x24) & 0xf;
  local_2c = 0x30;
  if (9 < uVar1) {
    local_2c = sVar3;
  }
  local_2c = local_2c + uVar1;
  uVar1 = (ushort)(param_1 >> 0x28) & 0xf;
  local_2e = 0x30;
  if (9 < uVar1) {
    local_2e = sVar3;
  }
  local_2e = local_2e + uVar1;
  uVar1 = (ushort)(param_1 >> 0x2c) & 0xf;
  local_30 = 0x30;
  if (9 < uVar1) {
    local_30 = sVar3;
  }
  local_30 = local_30 + uVar1;
  uVar1 = (ushort)(param_1 >> 0x30);
  local_32 = 0x30;
  if (9 < (uVar1 & 0xf)) {
    local_32 = sVar3;
  }
  local_32 = local_32 + (uVar1 & 0xf);
  uVar2 = uVar1 >> 4 & 0xf;
  local_34 = 0x30;
  if (9 < uVar2) {
    local_34 = sVar3;
  }
  local_34 = local_34 + uVar2;
  uVar2 = (byte)(param_1 >> 0x38) & 0xf;
  local_36 = 0x30;
  if (9 < uVar2) {
    local_36 = 0x37;
  }
  local_36 = local_36 + uVar2;
  sVar3 = 0x30;
  if (9 < uVar1 >> 0xc) {
    sVar3 = 0x37;
  }
  local_38 = sVar3 + (uVar1 >> 0xc);
  local_18 = 0;
  ::FString::FString(__return_storage_ptr__,&local_38);
  return __return_storage_ptr__;
}

