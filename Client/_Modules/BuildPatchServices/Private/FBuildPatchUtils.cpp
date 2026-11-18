// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 18

// CalculateDiskSpaceRequirementsWithDeleteDuringInstall @ 143243060

ulong64 __cdecl
FBuildPatchUtils::CalculateDiskSpaceRequirementsWithDeleteDuringInstall
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          IBuildManifestSet *param_3,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_4,
          ulong64 param_5)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulong64 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong local_res8;
  
  uVar12 = 0;
  uVar8 = (ulonglong)param_2;
  uVar11 = 0;
  local_res8 = 0;
  if (param_2 < param_1->ArrayNum) {
    lVar9 = uVar8 * 8;
    do {
      uVar7 = (uint)uVar8;
      uVar10 = ~uVar7 >> 0x1f;
      uVar3 = 0;
      if ((int)uVar7 < param_4->ArrayNum) {
        uVar3 = uVar10;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      uVar4 = *(ulong64 *)((param_4->AllocatorInstance).Data + lVar9);
      lVar6 = 0;
      pcVar1 = *(code **)((longlong)*param_3 + 0x70);
      uVar3 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar3 = uVar10;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      lVar5 = (*pcVar1)(param_3,(param_1->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x10);
      if (lVar5 != 0) {
        lVar6 = *(longlong *)(lVar5 + 0x58);
      }
      local_res8 = local_res8 + lVar6;
      if ((uVar12 < param_5 + local_res8) &&
         (uVar8 = (param_5 - uVar12) + local_res8, uVar11 < uVar8)) {
        uVar11 = uVar8;
      }
      pcVar1 = *(code **)((longlong)*param_3 + 0x68);
      uVar3 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar3 = uVar10;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      lVar6 = (*pcVar1)(param_3,(param_1->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x10);
      if (lVar6 != 0) {
        uVar12 = uVar12 + *(longlong *)(lVar6 + 0x58);
      }
      uVar8 = (ulonglong)(uVar7 + 1);
      lVar9 = lVar9 + 8;
      param_5 = uVar4;
    } while ((int)(uVar7 + 1) < param_1->ArrayNum);
  }
  return uVar11;
}

// GenerateNewBuildId @ 143253680

FString * __cdecl FBuildPatchUtils::GenerateNewBuildId(FString *__return_storage_ptr__)

{
  FGuid local_18;
  
  FGuid::NewGuid(&local_18);
  FBase64::Encode(__return_storage_ptr__,(uchar *)&local_18,0x10,Standard);
  ::FString::ReplaceInline(__return_storage_ptr__,L"+",L"-",CaseSensitive);
  ::FString::ReplaceInline(__return_storage_ptr__,L"/",L"_",CaseSensitive);
  ::FString::ReplaceInline(__return_storage_ptr__,L"=",L"",CaseSensitive);
  return __return_storage_ptr__;
}

// GetBackwardsCompatibleBuildId @ 143254430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __cdecl
FBuildPatchUtils::GetBackwardsCompatibleBuildId
          (FString *__return_storage_ptr__,FManifestMeta *param_1)

{
  wchar_t *pwVar1;
  undefined1 auStack_368 [32];
  uchar local_348 [32];
  FSHA1 local_328;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_298;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_1f8;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_158;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_368;
  FSHA1::FSHA1(&local_328);
  local_348[0x10] = '\0';
  local_348[0x11] = '\0';
  local_348[0x12] = '\0';
  local_348[0x13] = '\0';
  local_348[0] = '\0';
  local_348[1] = '\0';
  local_348[2] = '\0';
  local_348[3] = '\0';
  local_348[4] = '\0';
  local_348[5] = '\0';
  local_348[6] = '\0';
  local_348[7] = '\0';
  local_348[8] = '\0';
  local_348[9] = '\0';
  local_348[10] = '\0';
  local_348[0xb] = '\0';
  local_348[0xc] = '\0';
  local_348[0xd] = '\0';
  local_348[0xe] = '\0';
  local_348[0xf] = '\0';
  FSHA1::Update(&local_328,(uchar *)&param_1->AppID,4);
  if ((param_1->AppName).Data.ArrayNum == 0) {
    pwVar1 = L"";
  }
  else {
    pwVar1 = (wchar_t *)(param_1->AppName).Data.AllocatorInstance.Data;
  }
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>(&local_b8,pwVar1);
  if ((param_1->BuildVersion).Data.ArrayNum == 0) {
    pwVar1 = L"";
  }
  else {
    pwVar1 = (wchar_t *)(param_1->BuildVersion).Data.AllocatorInstance.Data;
  }
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>(&local_158,pwVar1);
  if ((param_1->LaunchExe).Data.ArrayNum == 0) {
    pwVar1 = L"";
  }
  else {
    pwVar1 = (wchar_t *)(param_1->LaunchExe).Data.AllocatorInstance.Data;
  }
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>(&local_1f8,pwVar1);
  if ((param_1->LaunchCommand).Data.ArrayNum == 0) {
    pwVar1 = L"";
  }
  else {
    pwVar1 = (wchar_t *)(param_1->LaunchCommand).Data.AllocatorInstance.Data;
  }
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>(&local_298,pwVar1);
  FSHA1::Update(&local_328,(uchar *)local_b8.Ptr,(longlong)local_b8.StringLength);
  FSHA1::Update(&local_328,(uchar *)local_158.Ptr,(longlong)local_158.StringLength);
  FSHA1::Update(&local_328,(uchar *)local_1f8.Ptr,(longlong)local_1f8.StringLength);
  FSHA1::Update(&local_328,(uchar *)local_298.Ptr,(longlong)local_298.StringLength);
  FSHA1::Final(&local_328);
  FSHA1::GetHash(&local_328,local_348);
  FBase64::Encode(__return_storage_ptr__,local_348,0x14,Standard);
  ::FString::ReplaceInline(__return_storage_ptr__,L"+",L"-",CaseSensitive);
  ::FString::ReplaceInline(__return_storage_ptr__,L"/",L"_",CaseSensitive);
  ::FString::ReplaceInline(__return_storage_ptr__,L"=",L"",CaseSensitive);
  if ((void *)local_298._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_298._padding_);
  }
  if ((void *)local_1f8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_1f8._padding_);
  }
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  FSHA1::~FSHA1(&local_328);
  return __return_storage_ptr__;
}

// GetChunkDeltaDirectory @ 1432546f0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __cdecl
FBuildPatchUtils::GetChunkDeltaDirectory
          (FString *__return_storage_ptr__,FBuildPatchAppManifest *param_1)

{
  undefined8 *puVar1;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FString local_18;
  
  puVar1 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x150))(param_1);
  iVar3 = 1;
  iVar4 = *(int *)(puVar1 + 1);
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  pTVar2 = &::FString::FString(&local_18,L"Deltas")->Data;
  if ((pTVar2->ArrayNum != 0) || (iVar4 == 0)) {
    iVar3 = 0;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&__return_storage_ptr__->Data,pTVar2,iVar3 + iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  iVar4 = *(int *)(puVar1 + 1) + -1;
  if (*(int *)(puVar1 + 1) == 0) {
    iVar4 = 0;
  }
  ::FString::PathAppend(__return_storage_ptr__,(wchar_t *)*puVar1,iVar4);
  return __return_storage_ptr__;
}

// GetChunkDeltaFilename @ 1432547b0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __cdecl
FBuildPatchUtils::GetChunkDeltaFilename
          (FString *__return_storage_ptr__,FBuildPatchAppManifest *param_1,
          FBuildPatchAppManifest *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  puVar2 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x150))(param_1);
  pTVar3 = &GetChunkDeltaDirectory(&local_18,param_2)->Data;
  iVar4 = *(int *)(puVar2 + 1) + -1;
  if (*(int *)(puVar2 + 1) == 0) {
    iVar4 = 0;
  }
  if ((pTVar3->ArrayNum != 0) || (iVar1 = 2, iVar4 == -1)) {
    iVar1 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_28,pTVar3,iVar4 + iVar1);
  ::FString::PathAppend((FString *)&local_28,(wchar_t *)*puVar2,iVar4);
  ::FString::ConcatFC(__return_storage_ptr__,(FString *)&local_28,L".delta");
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetChunkDetailFromNewFilename @ 143254880

void __cdecl
FBuildPatchUtils::GetChunkDetailFromNewFilename(FString *param_1,FGuid *param_2,ulong64 *param_3)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  int iVar4;
  ForAnyElementType _Str;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  FPaths::GetBaseFilename(&local_18,param_1,true);
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::FString(&local_28,L"_");
  ::FString::Split(&local_18,&local_28,&local_48,&local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  iVar4 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (iVar4 != 0x20) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GuidString.Len() == 32",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchUtil.cpp"
                       ,0x30,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (iVar4 != 0x10) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HashString.Len() == 16",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchUtil.cpp"
                       ,0x31,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Str.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    _Str.Data = local_48.Data.AllocatorInstance.Data;
  }
  uVar3 = _wcstoui64((wchar_t *)_Str.Data,(wchar_t **)0x0,0x10);
  *param_3 = uVar3;
  FGuid::Parse(&local_38,param_2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetChunkNewFilename @ 143254b20

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __cdecl
FBuildPatchUtils::GetChunkNewFilename
          (FString *__return_storage_ptr__,EFeatureLevel param_1,FGuid *param_2,ulong64 *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_18;
  
  if ((((param_2->D == 0 && param_2->C == 0) && param_2->B == 0) && param_2->A == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkGUID.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchUtil.cpp"
                         ,0x15,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  if ((int)param_1 < 3) {
    GetChunkOldFilename(__return_storage_ptr__,param_2);
  }
  else {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    FGuid::AppendString(param_2,&local_18,Digits);
    (*FCrc::MemCrc32Func)(param_2,0x10,0);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s/%02d/%016llX_%s.chunk");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetChunkOldFilename @ 143254c60

FString * __cdecl
FBuildPatchUtils::GetChunkOldFilename(FString *__return_storage_ptr__,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_18;
  
  if ((((param_1->D == 0 && param_1->C == 0) && param_1->B == 0) && param_1->A == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkGUID.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchUtil.cpp"
                         ,0x45,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FGuid::AppendString(param_1,&local_18,Digits);
  FCrc::MemCrc_DEPRECATED(param_1,0x10,0);
  ::FString::PrintfImpl(__return_storage_ptr__,L"Chunks/%02d/%s.chunk");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDataFilename @ 1432554c0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __cdecl
FBuildPatchUtils::GetDataFilename
          (FString *__return_storage_ptr__,TSharedRef<FBuildPatchAppManifest,1> *param_1,
          FGuid *param_2)

{
  GetDataFilename(__return_storage_ptr__,param_1->Object,param_2);
  return __return_storage_ptr__;
}

// GetDataFilename @ 1432554e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143255580) */
/* WARNING: Removing unreachable block (ram,0x0001432555a1) */
/* WARNING: Removing unreachable block (ram,0x0001432555a2) */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __cdecl
FBuildPatchUtils::GetDataFilename
          (FString *__return_storage_ptr__,FBuildPatchAppManifest *param_1,FGuid *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  EFeatureLevel EVar5;
  FString *pFVar6;
  ForAnyElementType FVar7;
  undefined1 auStack_d8 [32];
  FScriptContainerElement *local_b8;
  FScriptContainerElement *local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  ulong64 local_68;
  FScriptContainerElement *local_60;
  uchar local_58 [24];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  cVar2 = (**(code **)(param_1->_padding_ + 0x200))(param_1);
  iVar4 = (**(code **)(param_1->_padding_ + 0x180))(param_1);
  if (iVar4 < 3) {
    if ((((param_2->C == 0 && param_2->D == 0) && param_2->B == 0) && param_2->A == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Guid.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchUtil.cpp"
                           ,0x51,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar1)();
      return pFVar6;
    }
    if (cVar2 == '\0') {
      GetChunkOldFilename(__return_storage_ptr__,param_2);
      return __return_storage_ptr__;
    }
    if ((((param_2->C == 0 && param_2->B == 0) && param_2->D == 0) && param_2->A == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FileGUID.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchUtil.cpp"
                           ,0x4b,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar1)();
      return pFVar6;
    }
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    FGuid::AppendString(param_2,&local_a8,Digits);
    FCrc::MemCrc_DEPRECATED(param_2,0x10,0);
    ::FString::PrintfImpl(__return_storage_ptr__,L"Files/%02d/%s.file");
    FVar7.Data = local_a8.Data.AllocatorInstance.Data;
  }
  else {
    cVar2 = (**(code **)(param_1->_padding_ + 0x200))(param_1);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(param_1->_padding_ + 0x208))(param_1,param_2,&local_68);
      if ((cVar2 == '\0') &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("bFound",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchUtil.cpp"
                             ,0x71,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar1)();
        return pFVar6;
      }
      EVar5 = (**(code **)(param_1->_padding_ + 0x180))(param_1);
      GetChunkNewFilename(__return_storage_ptr__,EVar5,param_2,&local_68);
      return __return_storage_ptr__;
    }
    iVar4 = (**(code **)(param_1->_padding_ + 0x180))(param_1);
    if (iVar4 < 10) {
      local_58[0] = '\0';
      local_58[1] = '\0';
      local_58[2] = '\0';
      local_58[3] = '\0';
      local_58[4] = '\0';
      local_58[5] = '\0';
      local_58[6] = '\0';
      local_58[7] = '\0';
      local_58[8] = '\0';
      local_58[9] = '\0';
      local_58[10] = '\0';
      local_58[0xb] = '\0';
      local_58[0xc] = '\0';
      local_58[0xd] = '\0';
      local_58[0xe] = '\0';
      local_58[0xf] = '\0';
      local_58[0x10] = '\0';
      local_58[0x11] = '\0';
      local_58[0x12] = '\0';
      local_58[0x13] = '\0';
      cVar2 = (**(code **)(param_1->_padding_ + 0x128))();
      if ((cVar2 == '\0') &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("bFound",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchUtil.cpp"
                             ,0x79,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar1)();
        return pFVar6;
      }
      (**(code **)(param_1->_padding_ + 0x180))(param_1);
      if ((((param_2->D == 0 && param_2->C == 0) && param_2->B == 0) && param_2->A == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("FileGUID.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchUtil.cpp"
                             ,0x1f,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar1)();
        return pFVar6;
      }
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      FGuid::AppendString(param_2,&local_88,Digits);
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar7.Data = local_88.Data.AllocatorInstance.Data;
      }
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      BytesToHex(local_58,0x14,&local_98);
      local_b8 = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        local_b8 = local_98.Data.AllocatorInstance.Data;
      }
      (*FCrc::MemCrc32Func)(param_2,0x10,0);
      local_b0 = FVar7.Data;
      ::FString::PrintfImpl(__return_storage_ptr__,L"%s/%02d/%s_%s.file");
      FVar7.Data = local_88.Data.AllocatorInstance.Data;
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
        FVar7.Data = local_88.Data.AllocatorInstance.Data;
      }
    }
    else {
      cVar2 = (**(code **)(param_1->_padding_ + 0x220))(param_1,param_2);
      if ((cVar2 == '\0') &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("bFound",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchUtil.cpp"
                             ,0x81,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar1)();
        return pFVar6;
      }
      (**(code **)(param_1->_padding_ + 0x180))(param_1);
      if ((((param_2->D == 0 && param_2->C == 0) && param_2->B == 0) && param_2->A == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("FileGUID.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchUtil.cpp"
                             ,0x25,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar1)();
        return pFVar6;
      }
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      FGuid::AppendString(param_2,&local_78,Digits);
      local_b0 = (FScriptContainerElement *)L"";
      if (local_78.Data.ArrayNum != 0) {
        local_b0 = local_78.Data.AllocatorInstance.Data;
      }
      (*FCrc::MemCrc32Func)(param_2,0x10,0);
      local_b8 = local_60;
      ::FString::PrintfImpl(__return_storage_ptr__,L"%s/%02d/%016llX_%s.file");
      FVar7.Data = local_78.Data.AllocatorInstance.Data;
    }
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return __return_storage_ptr__;
}

// GetDataTypeOldFilename @ 143255a30

FString * __cdecl
FBuildPatchUtils::GetDataTypeOldFilename
          (FString *__return_storage_ptr__,EBuildPatchDataType param_1,FGuid *param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_18;
  
  if ((((param_2->B == 0 && param_2->C == 0) && param_2->A == 0) && param_2->D == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Guid.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchUtil.cpp"
                         ,0x51,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  if (param_1 == ChunkData) {
    GetChunkOldFilename(__return_storage_ptr__,param_2);
  }
  else if (param_1 == FileData) {
    if ((((param_2->D == 0 && param_2->B == 0) && param_2->C == 0) && param_2->A == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FileGUID.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchUtil.cpp"
                           ,0x4b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    FGuid::AppendString(param_2,&local_18,Digits);
    FCrc::MemCrc_DEPRECATED(param_2,0x10,0);
    ::FString::PrintfImpl(__return_storage_ptr__,L"Files/%02d/%s.file");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchUtil.cpp"
                       ,0x5c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    ::FString::FString(__return_storage_ptr__,L"");
  }
  return __return_storage_ptr__;
}

// GetFileDetailFromNewFilename @ 1432562c0

void __cdecl
FBuildPatchUtils::GetFileDetailFromNewFilename(FString *param_1,FGuid *param_2,FSHAHash *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  FPaths::GetBaseFilename(&local_18,param_1,true);
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::FString(&local_28,L"_");
  ::FString::Split(&local_18,&local_28,&local_48,&local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  iVar3 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  if (iVar3 != 0x20) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GuidString.Len() == 32",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchUtil.cpp"
                       ,0x3d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  if (iVar3 != 0x28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HashString.Len() == 40",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchUtil.cpp"
                       ,0x3e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  HexToBytes(&local_48,param_3->Hash);
  FGuid::Parse(&local_38,param_2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetFileNewFilename @ 143256400

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __cdecl
FBuildPatchUtils::GetFileNewFilename
          (FString *__return_storage_ptr__,EFeatureLevel param_1,FGuid *param_2,FSHAHash *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_38;
  FString local_28;
  
  if ((((param_2->D == 0 && param_2->C == 0) && param_2->B == 0) && param_2->A == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FileGUID.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchUtil.cpp"
                         ,0x1f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FGuid::AppendString(param_2,&local_28,Digits);
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  BytesToHex(param_3->Hash,0x14,&local_38);
  (*FCrc::MemCrc32Func)(param_2,0x10,0);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s/%02d/%s_%s.file");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetFileNewFilename @ 143256560

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __cdecl
FBuildPatchUtils::GetFileNewFilename
          (FString *__return_storage_ptr__,EFeatureLevel param_1,FGuid *param_2,ulong64 *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_18;
  
  if ((((param_2->D == 0 && param_2->C == 0) && param_2->B == 0) && param_2->A == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FileGUID.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchUtil.cpp"
                         ,0x25,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FGuid::AppendString(param_2,&local_18,Digits);
  (*FCrc::MemCrc32Func)(param_2,0x10,0);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s/%02d/%016llX_%s.file");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetFileOldFilename @ 143256680

FString * __cdecl
FBuildPatchUtils::GetFileOldFilename(FString *__return_storage_ptr__,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_18;
  
  if ((((param_1->D == 0 && param_1->C == 0) && param_1->B == 0) && param_1->A == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FileGUID.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchUtil.cpp"
                         ,0x4b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FGuid::AppendString(param_1,&local_18,Digits);
  FCrc::MemCrc_DEPRECATED(param_1,0x10,0);
  ::FString::PrintfImpl(__return_storage_ptr__,L"Files/%02d/%s.file");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetGUIDFromFilename @ 143256db0

bool __cdecl FBuildPatchUtils::GetGUIDFromFilename(FString *param_1,FGuid *param_2)

{
  ForAnyElementType _Src;
  bool bVar1;
  int iVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  FPaths::GetBaseFilename(&local_28,param_1,true);
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  iVar2 = ::FString::Find(&local_28,L"_",1,IgnoreCase,FromStart,-1);
  _Src.Data = local_28.Data.AllocatorInstance.Data;
  if (iVar2 == -1) {
    local_38.Data.ArrayNum = local_28.Data.ArrayNum;
    if (((local_28.Data.ArrayNum != 0) || (local_38.Data.ArrayMax != 0)) &&
       (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_28.Data.ArrayNum,local_38.Data.ArrayMax,(ForAnyElementType *)&local_38,
                   local_28.Data.ArrayNum,&local_38.Data.ArrayMax), local_28.Data.ArrayNum != 0)) {
      memcpy(local_38.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_28.Data.ArrayNum * 2);
    }
  }
  else {
    ::FString::FString(&local_18,L"_");
    ::FString::Split(&local_28,&local_18,(FString *)0x0,&local_38);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  iVar2 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  if (iVar2 == 0x20) {
    bVar1 = FGuid::Parse(&local_38,param_2);
  }
  else {
    bVar1 = false;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// VerifyFile @ 14326dd50

uchar __cdecl
FBuildPatchUtils::VerifyFile
          (IFileSystem *param_1,FString *param_2,FSHAHash *param_3,FSHAHash *param_4)

{
  uchar uVar1;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar2;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar3;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *pTVar4;
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  int local_c8;
  undefined1 local_c0 [8];
  ForAnyElementType local_b8;
  int local_b0;
  undefined1 local_a8 [8];
  ForAnyElementType local_a0;
  int local_98;
  FDestructionSentinel local_90;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_78;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_60;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> local_48;
  
  local_a8 = (undefined1  [8])0x0;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = 0;
  local_c0 = (undefined1  [8])0x0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  local_d8 = (undefined1  [8])0x0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  pTVar2 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
           TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>
                     (&local_78,(TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_d8
                     );
  pTVar3 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
           TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>
                     (&local_60,(TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_c0
                     );
  pTVar4 = TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>
                     (&local_48,
                      (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)local_a8);
  uVar1 = VerifyFile(param_1,param_2,param_3,param_4,pTVar4,pTVar3,pTVar2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
             (FWriteAccessScope *)&local_90);
  if ((local_c8 != 0) && (local_d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d0,0,0,0x10);
    local_c8 = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c0,
             (FWriteAccessScope *)&local_90);
  if ((local_b0 != 0) && (local_b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b8,0,0,0x10);
    local_b0 = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_90);
  if ((local_98 != 0) && (local_a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a0,0,0,0x10);
    local_98 = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  return uVar1;
}

// VerifyFile @ 14326df60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uchar __cdecl
FBuildPatchUtils::VerifyFile
          (IFileSystem *param_1,FString *param_2,FSHAHash *param_3,FSHAHash *param_4,
          TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *param_5,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_6,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_7)

{
  bool bVar1;
  double dVar2;
  float fVar3;
  char cVar4;
  uchar *puVar5;
  longlong lVar6;
  FOutputDeviceRedirector *pFVar7;
  longlong *plVar8;
  longlong lVar9;
  uchar uVar10;
  ulong64 uVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  undefined1 *puVar14;
  undefined1 auStack_188 [32];
  longlong *local_168;
  FReadAccessScope local_160;
  uchar *local_148;
  longlong local_140;
  FString *local_138;
  FSHAHash *local_130;
  FSHAHash *local_128;
  FReadAccessScope local_120;
  FSHA1 local_108;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_188;
  uVar10 = '\0';
  if ((param_2->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  local_138 = param_2;
  local_130 = param_4;
  local_128 = param_3;
  (**(code **)((longlong)*param_1 + 0x48))(param_1,&local_168,pwVar13,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_5,&local_120);
  if ((*(int *)&param_5->field_0x10 != 0) &&
     (plVar8 = *(longlong **)&param_5->field_0x8, plVar8 != (longlong *)0x0)) {
    (**(code **)(*plVar8 + 0x68))(plVar8,0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_120);
  if (local_168 == (longlong *)0x0) {
    pFVar7 = GetGlobalLogSingleton();
    FOutputDevice::LogfImpl
              ((FOutputDevice *)pFVar7,L"BuildDataGenerator: ERROR VerifyFile cannot open %s");
  }
  else {
    FSHA1::FSHA1(&local_108);
    local_120.DestructionSentinel._16_4_ = 0;
    local_120.DestructionSentinel._0_8_ = 0;
    local_120.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
    local_140 = (**(code **)(*local_168 + 0x30))();
    puVar5 = operator_new__(0x400000);
    local_148 = puVar5;
    cVar4 = (**(code **)(*local_168 + 0x38))();
    fVar3 = __real_3dcccccd;
    dVar2 = __real_3ff0000000000000;
    while (cVar4 == '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_7,&local_160);
      if (((*(int *)&param_7->field_0x10 == 0) ||
          (*(longlong **)&param_7->field_0x8 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(**(longlong **)&param_7->field_0x8 + 0x38))(), cVar4 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      puVar14 = &param_7->field_0x8;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_160);
      if (bVar1) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_7,&local_160);
        if (*(int *)&param_7->field_0x10 == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = *(longlong **)puVar14;
        }
        cVar4 = (**(code **)(*plVar8 + 0x60))();
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_160);
        puVar5 = local_148;
        param_4 = local_130;
        if (cVar4 != '\0') break;
      }
      while( true ) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_6,&local_160);
        if (((*(int *)&param_6->field_0x10 == 0) ||
            (*(longlong **)&param_6->field_0x8 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)&param_6->field_0x8 + 0x38))(), cVar4 == '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_160);
        if (!bVar1) break;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_6,&local_160);
        if (*(int *)&param_6->field_0x10 == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = *(longlong **)&param_6->field_0x8;
        }
        cVar4 = (**(code **)(*plVar8 + 0x60))();
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_160);
        if (cVar4 == '\0') break;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_7,&local_160);
        if (((*(int *)&param_7->field_0x10 == 0) || (*(longlong **)puVar14 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)puVar14 + 0x38))(), cVar4 == '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_160);
        if (bVar1) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_7,&local_160);
          if (*(int *)&param_7->field_0x10 == 0) {
            plVar8 = (longlong *)0x0;
          }
          else {
            plVar8 = *(longlong **)puVar14;
          }
          cVar4 = (**(code **)(*plVar8 + 0x60))();
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_160);
          if (cVar4 != '\0') break;
        }
        FWindowsPlatformProcess::Sleep(fVar3);
      }
      lVar6 = (**(code **)(*local_168 + 0x28))();
      lVar9 = local_140;
      uVar12 = local_140 - lVar6;
      uVar11 = uVar12 & 0xffffffff;
      if (0x400000 < (longlong)uVar12) {
        uVar11 = 0x400000;
      }
      (**(code **)(*local_168 + 0x188))(local_168,local_148,uVar11);
      FSHA1::Update(&local_108,local_148,uVar11);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_5,&local_160);
      if ((*(int *)&param_5->field_0x10 != 0) &&
         (plVar8 = *(longlong **)&param_5->field_0x8, plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x68))
                  (plVar8,(float)(dVar2 - (double)(longlong)(uVar12 - uVar11) / (double)lVar9));
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_160);
      cVar4 = (**(code **)(*local_168 + 0x38))();
      param_4 = local_130;
      puVar5 = local_148;
    }
    operator_delete__(puVar5);
    FSHA1::Final(&local_108);
    FSHA1::GetHash(&local_108,(uchar *)&local_120);
    if (((local_120.DestructionSentinel._0_8_ == *(longlong *)local_128->Hash) &&
        (local_120.DestructionSentinel.Accessor ==
         *(FMRSWRecursiveAccessDetector **)(local_128->Hash + 8))) &&
       (local_120.DestructionSentinel._16_4_ == *(uint *)(local_128->Hash + 0x10))) {
      uVar10 = '\x01';
    }
    else {
      lVar9 = local_120.DestructionSentinel._0_8_ - *(longlong *)param_4->Hash;
      if ((lVar9 == 0) &&
         (lVar9 = (longlong)local_120.DestructionSentinel.Accessor -
                  *(longlong *)(param_4->Hash + 8), lVar9 == 0)) {
        lVar9 = (ulonglong)(uint)local_120.DestructionSentinel._16_4_ -
                (ulonglong)*(uint *)(param_4->Hash + 0x10);
      }
      uVar10 = (lVar9 == 0) * '\x02';
      if (lVar9 != 0) {
        pFVar7 = GetGlobalLogSingleton();
        FOutputDevice::LogfImpl((FOutputDevice *)pFVar7,L"BuildDataGenerator: Verify failed on %s");
      }
    }
    (**(code **)(*local_168 + 0x210))();
    FSHA1::~FSHA1(&local_108);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_5,&local_160);
  if ((*(int *)&param_5->field_0x10 != 0) &&
     (plVar8 = *(longlong **)&param_5->field_0x8, plVar8 != (longlong *)0x0)) {
    (**(code **)(*plVar8 + 0x68))(plVar8,__real_3f800000);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_160);
  if (local_168 != (longlong *)0x0) {
    (**(code **)*local_168)(local_168,1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_6);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_7);
  return uVar10;
}

