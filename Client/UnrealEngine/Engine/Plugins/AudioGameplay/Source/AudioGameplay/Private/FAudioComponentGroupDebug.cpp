// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplay
// Functions: 6

// DebugPrint @ 14d98aa00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FAudioComponentGroupDebug::DebugPrint(UAudioComponentGroup *param_1)

{
  int iVar1;
  longlong lVar2;
  AActor *this;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  size_t sVar8;
  FString *pFVar9;
  UWorld *pUVar10;
  wchar_t *_Str;
  ForAnyElementType FVar11;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  FName local_res18;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  TVector<double>_u_0 local_48;
  
  if (param_1 == (UAudioComponentGroup *)0x0) {
    return;
  }
  local_res8[0].Bits = 0;
  if ((AudioComponentGroupCVars::PrintSoundParams < 1) &&
     (AudioComponentGroupCVars::PrintActiveSounds < 1)) {
    return;
  }
  lVar2 = *(longlong *)&param_1->field_0xa8;
  if ((lVar2 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComponentGroupOwner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplay\\Source\\AudioGameplay\\Private\\AudioComponentGroupDebug.cpp"
                         ,0x40,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FString::FString(&local_98,L"All");
  if (AudioComponentGroupCVars::PrintSoundParamsActorFilter.Data.ArrayNum == local_98.Data.ArrayNum)
  {
    if (1 < AudioComponentGroupCVars::PrintSoundParamsActorFilter.Data.ArrayNum) {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)
                         AudioComponentGroupCVars::PrintSoundParamsActorFilter.Data.
                         AllocatorInstance.Data,(wchar_t *)local_98.Data.AllocatorInstance.Data);
      bVar6 = iVar7 == 0;
      goto LAB_14d98aac6;
    }
    bVar4 = false;
LAB_14d98ab3c:
    bVar6 = false;
    bVar5 = false;
    if (!bVar4) goto LAB_14d98ab52;
  }
  else {
    bVar6 = AudioComponentGroupCVars::PrintSoundParamsActorFilter.Data.ArrayNum +
            local_98.Data.ArrayNum == 1;
LAB_14d98aac6:
    bVar4 = false;
    if (bVar6) goto LAB_14d98ab3c;
    local_res10 = *(FName *)(lVar2 + 0x18);
    ::FName::ToString(&local_res10,&local_88);
    if (AudioComponentGroupCVars::PrintSoundParamsActorFilter.Data.ArrayNum == 0) {
      _Str = L"";
LAB_14d98ab01:
      sVar8 = wcslen(_Str);
      iVar7 = ::FString::Find(&local_88,_Str,(int)sVar8,IgnoreCase,FromStart,-1);
      bVar4 = true;
      if (iVar7 != -1) goto LAB_14d98ab3c;
    }
    else {
      _Str = (wchar_t *)AudioComponentGroupCVars::PrintSoundParamsActorFilter.Data.AllocatorInstance
      ;
      if (AudioComponentGroupCVars::PrintSoundParamsActorFilter.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) goto LAB_14d98ab01;
    }
    bVar5 = true;
  }
  bVar6 = bVar5;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
LAB_14d98ab52:
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (!bVar6) {
    local_res18 = *(FName *)(*(longlong *)&param_1->field_0xa8 + 0x18);
    ::FName::ToString(&local_res18,&local_a8);
    ::FString::AppendChars(&local_a8,L"\r\n",2);
    if (0 < AudioComponentGroupCVars::PrintSoundParams) {
      pFVar9 = DebugPrintParams(&local_68,param_1);
      iVar1 = (pFVar9->Data).ArrayNum;
      iVar7 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar7 = 0;
      }
      ::FString::AppendChars(&local_a8,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,iVar7);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    if (0 < AudioComponentGroupCVars::PrintActiveSounds) {
      pFVar9 = DebugPrintActiveSounds(&local_58,param_1);
      iVar1 = (pFVar9->Data).ArrayNum;
      iVar7 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar7 = 0;
      }
      ::FString::AppendChars(&local_a8,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,iVar7);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    local_res8[0] = FColor::Green.field0_0x0;
    if (param_1->bIsVirtualized != false) {
      local_res8[0] = FColor::Yellow.field0_0x0;
    }
    this = *(AActor **)&param_1->field_0xa8;
    if (this != (AActor *)0x0) {
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_a8.Data.ArrayNum != 0) {
        FVar11.Data = local_a8.Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_78,(wchar_t *)FVar11.Data);
      local_48._s_0.X = 0.0;
      local_48._s_0.Y = 0.0;
      local_48._s_0.Z = (double)AudioComponentGroupCVars::ZOffset;
      pUVar10 = AActor::GetWorld(this);
      DrawDebugString(pUVar10,(TVector<double> *)&local_48._s_0,&local_78,this,
                      (FColor *)&local_res8[0]._s_0,0.0,true,__real_3f800000);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// DebugPrintActiveSounds @ 14d98acf0

FString * __cdecl
FAudioComponentGroupDebug::DebugPrintActiveSounds
          (FString *__return_storage_ptr__,UAudioComponentGroup *param_1)

{
  FScriptContainerElement *pFVar1;
  FWeakObjectPtr *pFVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  UObject *pUVar6;
  FScriptContainerElement *pFVar7;
  FWeakObjectPtr *this;
  int iVar8;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar7 = (param_1->Components).AllocatorInstance.Data;
  iVar3 = (param_1->Components).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar3 * 8;
  while( true ) {
    if ((param_1->Components).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UAudioComponent>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar7 == pFVar1) break;
    lVar4 = *(longlong *)pFVar7;
    if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x498) != 0)) &&
       ((*(byte *)(lVar4 + 0x9a) & 0x10) != 0)) {
      local_res8 = *(FName *)(*(longlong *)(lVar4 + 0x498) + 0x18);
      ::FName::ToString(&local_res8,&local_28);
      ::FString::PrintfImpl(&local_38,L"%s \n");
      iVar8 = local_38.Data.ArrayNum + -1;
      if (local_38.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar8);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar7 = pFVar7 + 8;
  }
  this = (FWeakObjectPtr *)(param_1->ExternalComponents).AllocatorInstance.Data;
  iVar3 = (param_1->ExternalComponents).ArrayNum;
  pFVar2 = this + iVar3;
  while( true ) {
    if ((param_1->ExternalComponents).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (this == pFVar2) break;
    bVar5 = FWeakObjectPtr::IsValid(this);
    if (((bVar5) && (pUVar6 = FWeakObjectPtr::Get(this), *(longlong *)&pUVar6[0x1d].field_0x10 != 0)
        ) && (pUVar6 = FWeakObjectPtr::Get(this), (pUVar6[3].field_0x22 & 0x10) != 0)) {
      pUVar6 = FWeakObjectPtr::Get(this);
      local_res8 = *(FName *)(*(longlong *)&pUVar6[0x1d].field_0x10 + 0x18);
      ::FName::ToString(&local_res8,&local_38);
      ::FString::PrintfImpl(&local_28,L"%s \n");
      iVar8 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar8);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    this = this + 1;
  }
  ::FString::AppendChars(__return_storage_ptr__,L"\r\n",2);
  return __return_storage_ptr__;
}

// DebugPrintParams @ 14d98af20

FString * __cdecl
FAudioComponentGroupDebug::DebugPrintParams
          (FString *__return_storage_ptr__,UAudioComponentGroup *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  size_t sVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  FAudioParameter *this;
  bool bVar7;
  FAudioParameter *pFVar8;
  bool bVar9;
  undefined4 local_res8 [2];
  uint local_res10;
  FString local_58;
  FString local_48;
  
  bVar7 = false;
  local_res8[0] = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::FString(&local_58,L"All");
  if (AudioComponentGroupCVars::PrintSoundParamsParamFilter.Data.ArrayNum == local_58.Data.ArrayNum)
  {
    if (AudioComponentGroupCVars::PrintSoundParamsParamFilter.Data.ArrayNum < 2) {
      bVar9 = true;
    }
    else {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)
                         AudioComponentGroupCVars::PrintSoundParamsParamFilter.Data.
                         AllocatorInstance.Data,(wchar_t *)local_58.Data.AllocatorInstance.Data);
      bVar9 = iVar3 == 0;
    }
  }
  else {
    bVar9 = AudioComponentGroupCVars::PrintSoundParamsParamFilter.Data.ArrayNum +
            local_58.Data.ArrayNum == 1;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_res10 = (param_1->PersistentParams).ArrayNum;
  uVar6 = (ulonglong)(int)local_res10;
  this = (FAudioParameter *)(param_1->PersistentParams).AllocatorInstance.Data;
  pFVar8 = this + uVar6;
  do {
    if ((param_1->PersistentParams).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<FAudioParameter_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this == pFVar8) {
      ::FString::AppendChars(__return_storage_ptr__,L"\r\n",2);
      return __return_storage_ptr__;
    }
    if (bVar9) {
LAB_14d98b059:
      bVar2 = true;
    }
    else {
      bVar7 = true;
      pFVar4 = ::FName::ToString(&this->ParamName,&local_58);
      if (AudioComponentGroupCVars::PrintSoundParamsParamFilter.Data.ArrayNum == 0) {
        _Str = L"";
LAB_14d98b026:
        sVar5 = wcslen(_Str);
        iVar3 = ::FString::Find(pFVar4,_Str,(int)sVar5,IgnoreCase,FromStart,-1);
        if (iVar3 != -1) goto LAB_14d98b059;
      }
      else {
        _Str = (wchar_t *)
               AudioComponentGroupCVars::PrintSoundParamsParamFilter.Data.AllocatorInstance;
        if (AudioComponentGroupCVars::PrintSoundParamsParamFilter.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) goto LAB_14d98b026;
      }
      bVar2 = false;
    }
    if ((bVar7) &&
       (bVar7 = false, local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pFVar4 = GetDebugParamString(&local_48,this);
      iVar1 = (pFVar4->Data).ArrayNum;
      iVar3 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar3 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,iVar3);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    uVar6 = (ulonglong)local_res10;
    this = this + 1;
  } while( true );
}

// GetDebugParamString @ 14d98d510

FString * __cdecl
FAudioComponentGroupDebug::GetDebugParamString
          (FString *__return_storage_ptr__,FAudioParameter *param_1)

{
  EAudioParameterType EVar1;
  FString local_28 [2];
  
  EVar1 = param_1->ParamType;
  if (EVar1 == Boolean) {
    ::FName::ToString(&param_1->ParamName,local_28);
  }
  else {
    if (EVar1 == Integer) {
      ::FName::ToString(&param_1->ParamName,local_28);
      ::FString::PrintfImpl(__return_storage_ptr__,L"%s : %d \n");
      goto LAB_14d98d688;
    }
    if (EVar1 == Float) {
      ::FName::ToString(&param_1->ParamName,local_28);
      ::FString::PrintfImpl(__return_storage_ptr__,L"%s : %f \n");
      goto LAB_14d98d688;
    }
    if (EVar1 != String) {
      ::FName::ToString(&param_1->ParamName,local_28);
      ::FString::PrintfImpl(__return_storage_ptr__,L"%s : Unsupported Type \n");
      goto LAB_14d98d688;
    }
    ::FName::ToString(&param_1->ParamName,local_28);
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s : %s \n");
LAB_14d98d688:
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDebugStringColor @ 14d98d6b0

FColor __cdecl FAudioComponentGroupDebug::GetDebugStringColor(bool param_1)

{
  FColor_u_0 FVar1;
  undefined7 in_register_00000009;
  char in_DL;
  
  FVar1 = FColor::Yellow.field0_0x0;
  if (in_DL == '\0') {
    FVar1 = FColor::Green.field0_0x0;
  }
  ((FColor_u_0 *)CONCAT71(in_register_00000009,param_1))->_s_0 = (FColor_u_0_s_0)FVar1;
  return (FColor)SUB84(CONCAT71(in_register_00000009,param_1),0);
}

// PrintDebugString @ 14d98f100

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FAudioComponentGroupDebug::PrintDebugString(FString *param_1,AActor *param_2,FColor param_3)

{
  UWorld *pUVar1;
  wchar_t *pwVar2;
  FColor_u_0 local_res18 [4];
  FString local_38;
  TVector<double>_u_0 local_28;
  
  if (param_2 != (AActor *)0x0) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    local_res18[0] = param_3.field0_0x0;
    ::FString::FString(&local_38,pwVar2);
    local_28._s_0.X = 0.0;
    local_28._s_0.Y = 0.0;
    local_28._s_0.Z = (double)AudioComponentGroupCVars::ZOffset;
    pUVar1 = AActor::GetWorld(param_2);
    DrawDebugString(pUVar1,(TVector<double> *)&local_28._s_0,&local_38,param_2,
                    (FColor *)&local_res18[0]._s_0,0.0,true,__real_3f800000);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

