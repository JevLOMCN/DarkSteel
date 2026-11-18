// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FAudioFormatSettings @ 14761ce90

FAudioFormatSettings * __thiscall
Audio::FAudioFormatSettings::FAudioFormatSettings
          (FAudioFormatSettings *this,FConfigCacheIni *param_1,FString *param_2,FString *param_3)

{
  wchar_t *pwVar1;
  
  if ((param_3->Data).ArrayNum == 0) {
    pwVar1 = L"";
  }
  else {
    pwVar1 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&this->IniPlatformName,pwVar1);
  (this->AllWaveFormats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllWaveFormats).ArrayNum = 0;
  (this->AllWaveFormats).ArrayMax = 0;
  (this->WaveFormatModuleHints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WaveFormatModuleHints).ArrayNum = 0;
  (this->WaveFormatModuleHints).ArrayMax = 0;
  (this->PlatformFormat).ComparisonIndex = 0;
  (this->PlatformFormat).Number = 0;
  (this->PlatformStreamingFormat).ComparisonIndex = 0;
  (this->PlatformStreamingFormat).Number = 0;
  (this->FallbackFormat).ComparisonIndex = 0;
  (this->FallbackFormat).Number = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AudioFormatCacheCs,4000);
  *(undefined8 *)&this->AudioFormatCache = 0;
  *(undefined8 *)&(this->AudioFormatCache).field_0x8 = 0;
  *(undefined8 *)&(this->AudioFormatCache).field_0x20 = 0;
  *(undefined4 *)&(this->AudioFormatCache).field_0x28 = 0;
  *(undefined4 *)&(this->AudioFormatCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->AudioFormatCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AudioFormatCache).field_0x34 = 0;
  *(undefined8 *)&(this->AudioFormatCache).field_0x40 = 0;
  *(undefined4 *)&(this->AudioFormatCache).field_0x48 = 0;
  ReadConfiguration(this,param_1,param_2);
  return this;
}

// ~FAudioFormatSettings @ 147621410

void __thiscall Audio::FAudioFormatSettings::~FAudioFormatSettings(FAudioFormatSettings *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->AudioFormatCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AudioFormatCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,IAudioFormat_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,IAudioFormat_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,IAudioFormat_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AudioFormatCache);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AudioFormatCacheCs);
  pFVar2 = (this->WaveFormatModuleHints).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AllWaveFormats).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// FindFormat @ 147638f40

IAudioFormat * __thiscall
Audio::FAudioFormatSettings::FindFormat(FAudioFormatSettings *this,FName *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  IModularFeatures *pIVar8;
  longlong lVar9;
  IAudioFormat *pIVar10;
  FName *pFVar11;
  IAudioFormat IVar12;
  undefined1 *puVar13;
  ForAnyElementType FVar14;
  IAudioFormat IVar15;
  TPairInitializer<FName_const_&,IAudioFormat_*_const_&> local_res8;
  IAudioFormat local_78;
  ForAnyElementType local_70;
  undefined8 local_68;
  FName *local_60;
  undefined8 local_58;
  FName *local_50;
  IAudioFormat *local_48;
  
  lpCriticalSection = &this->AudioFormatCacheCs;
  local_res8.Value = (IAudioFormat **)param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FVar2 = *param_1;
  uVar5 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  IVar15 = (IAudioFormat)0x0;
  if (*(int *)&(this->AudioFormatCache).field_0x8 != *(int *)&(this->AudioFormatCache).field_0x34) {
    puVar13 = *(undefined1 **)&(this->AudioFormatCache).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->AudioFormatCache).field_0x38;
    }
    iVar6 = *(int *)(puVar13 +
                    (ulonglong)
                    (*(int *)&(this->AudioFormatCache).field_0x48 - 1U & FVar2.Number + uVar5) * 4);
    if (iVar6 != -1) {
      lVar9 = *(longlong *)&(this->AudioFormatCache).field_0x0;
      do {
        lVar1 = lVar9 + (longlong)iVar6 * 0x18;
        if (*(FName *)(lVar9 + (longlong)iVar6 * 0x18) == FVar2) {
          IVar12 = (IAudioFormat)(lVar1 + 8);
          if (lVar1 == 0) {
            IVar12 = IVar15;
          }
          if (IVar12 != (IAudioFormat)0x0) {
            IVar15 = *(IAudioFormat *)IVar12;
            goto LAB_14763920f;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  pIVar8 = IModularFeatures::Get();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FName___cdecl_IAudioFormat::GetModularFeatureName(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_IAudioFormat::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_IAudioFormat::GetModularFeatureName(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_IAudioFormat::GetModularFeatureName(void)'::
                    __l2::Name,L"IAudioFormat");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_IAudioFormat::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar2 = `public:_static_class_FName___cdecl_IAudioFormat::GetModularFeatureName(void)'::__l2::Name
  ;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  iVar6 = (**(code **)((longlong)*pIVar8 + 0x18))
                    (pIVar8,`public:_static_class_FName___cdecl_IAudioFormat::GetModularFeatureName(void)'
                            ::__l2::Name);
  IVar12 = IVar15;
  if (0 < iVar6) {
    do {
      lVar9 = (**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,FVar2,IVar12);
      local_78 = (IAudioFormat)(lVar9 + -8);
      if (lVar9 == 0) {
        local_78 = IVar15;
      }
      if (((local_70.Data <= &local_78) &&
          (&local_78 < (IAudioFormat *)(local_70.Data + (longlong)local_68._4_4_ * 8))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pIVar10 = (IAudioFormat *)(*pcVar3)();
        return pIVar10;
      }
      iVar7 = (int)local_68;
      if ((int)local_68 == local_68._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_70,(int *)((longlong)&local_68 + 4));
      }
      IVar12._0_4_ = IVar12._0_4_ + 1;
      IVar12._4_4_ = 0;
      local_68 = CONCAT44(local_68._4_4_,iVar7 + 1);
      *(IAudioFormat *)(local_70.Data + (longlong)iVar7 * 8) = local_78;
    } while ((int)IVar12._0_4_ < iVar6);
  }
  pIVar10 = (IAudioFormat *)(local_70.Data + (longlong)(int)local_68 * 8);
  FVar2 = (FName)*local_res8.Value;
  FVar14.Data = local_70.Data;
  do {
    if ((IAudioFormat *)FVar14.Data == pIVar10) {
LAB_1476391f2:
      if ((IAudioFormat *)local_70.Data != (IAudioFormat *)0x0) {
        FMemory::Free(local_70.Data);
      }
LAB_14763920f:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return (IAudioFormat *)IVar15;
    }
    local_60 = (FName *)0x0;
    local_58 = 0;
    (**(code **)(*(longlong *)*(IAudioFormat *)FVar14.Data + 0x18))
              (*(IAudioFormat *)FVar14.Data,&local_60);
    for (pFVar11 = local_60; pFVar11 != local_60 + (int)local_58; pFVar11 = pFVar11 + 1) {
      if (*pFVar11 == FVar2) {
        bVar4 = true;
        goto LAB_147639191;
      }
    }
    bVar4 = false;
LAB_147639191:
    if (local_60 != (FName *)0x0) {
      FMemory::Free(local_60);
    }
    if (bVar4) {
      local_50 = (FName *)local_res8.Value;
      local_48 = (IAudioFormat *)FVar14.Data;
      TSet<TTuple<FName,IAudioFormat_*>,TDefaultMapHashableKeyFuncs<FName,IAudioFormat_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,IAudioFormat_*_const_&>_>
                ((TSet<TTuple<FName,IAudioFormat_*>,TDefaultMapHashableKeyFuncs<FName,IAudioFormat_*,0>,FDefaultSetAllocator>
                  *)&this->AudioFormatCache,&local_res8,(bool *)&local_50);
      IVar15 = *(IAudioFormat *)FVar14.Data;
      goto LAB_1476391f2;
    }
    FVar14.Data = FVar14.Data + 8;
  } while( true );
}

// GetAllWaveFormats @ 14763a940

void __thiscall
Audio::FAudioFormatSettings::GetAllWaveFormats
          (FAudioFormatSettings *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(param_1,&this->AllWaveFormats);
  return;
}

// GetWaveFormat @ 147640ba0

FName __thiscall
Audio::FAudioFormatSettings::GetWaveFormat(FAudioFormatSettings *this,USoundWave *param_1)

{
  code *pcVar1;
  ESoundAssetCompressionType EVar2;
  bool bVar3;
  FName FVar4;
  FName *pFVar5;
  FString *pFVar6;
  FPlatformAudioCookOverrides *pFVar7;
  int iVar8;
  wchar_t *pwVar9;
  USoundWave *in_R8;
  float fVar10;
  bool local_res8 [8];
  FName local_res18;
  FName local_res20;
  FString local_68;
  FString local_58;
  FPlatformWaveState local_48;
  
  EVar2 = USoundWave::GetSoundAssetCompressionType(in_R8);
  switch(EVar2) {
  case BinkAudio:
    local_48.FormatName = NAME_BINKA;
    break;
  case ADPCM:
    local_48.FormatName = NAME_ADPCM;
    break;
  case PCM:
    local_48.FormatName = NAME_PCM;
    break;
  case Opus:
    local_48.FormatName = NAME_OPUS;
    break;
  case PlatformSpecific:
    local_48.FormatName = NAME_PLATFORM_SPECIFIC;
    break;
  case ProjectDefined:
    local_48.FormatName = NAME_PROJECT_DEFINED;
    break;
  case RADAudio:
    local_48.FormatName = NAME_RADA;
    break;
  default:
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7061353171553091201>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\SoundWave.h"
                       ,0x17f,"false");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FName)(*pcVar1)();
      return FVar4;
    }
    ::FName::FName(&local_48.FormatName,L"UNKNOWN");
  }
  local_res18 = (FName)in_R8->_padding_;
  ::FName::ToString(&local_res18,&local_68);
  iVar8 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  pFVar5 = ::FName::FName(&local_res20,iVar8,(wchar_t *)local_68.Data.AllocatorInstance.Data,
                          FNAME_Add);
  local_48.Name = *pFVar5;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  local_48.NumChannels = in_R8->NumChannels;
  local_48.SampleRate = 0;
  pFVar6 = ::FName::ToString(&this->IniPlatformName,&local_58);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  pFVar7 = GetCacheableOverridesByPlatform(pwVar9,local_res8);
  if (local_res8[0] != false) {
    EnterCriticalSection((LPCRITICAL_SECTION)&CookOverridesCriticalSection);
    CacheAudioCookOverrides(pFVar7,pwVar9);
    LeaveCriticalSection((LPCRITICAL_SECTION)&CookOverridesCriticalSection);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (((pFVar7 != (FPlatformAudioCookOverrides *)0x0) &&
      (fVar10 = USoundWave::GetSampleRateForCompressionOverrides(in_R8,pFVar7),
      pFVar7->bResampleForDevice != false)) && (fVar10 != __real_bf800000)) {
    local_48.SampleRate = (int)fVar10;
  }
  if (local_48.FormatName == NAME_PLATFORM_SPECIFIC) {
    bVar3 = USoundWave::IsStreaming(in_R8,(wchar_t *)0x0);
    local_48.FormatName =
         *(FName *)((this->AudioFormatCacheCs).CriticalSection.Opaque1 + ((ulonglong)bVar3 - 3));
  }
  bVar3 = IsFormatAllowed(this,&local_48);
  if (!bVar3) {
    local_48.FormatName = this->FallbackFormat;
  }
  param_1->_padding_ = (longlong)local_48.FormatName;
  return (FName)param_1;
}

// GetWaveFormatModuleHints @ 147640de0

void __thiscall
Audio::FAudioFormatSettings::GetWaveFormatModuleHints
          (FAudioFormatSettings *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(param_1,&this->WaveFormatModuleHints);
  return;
}

// IsFormatAllowed @ 147648860

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FAudioFormatSettings::IsFormatAllowed(FAudioFormatSettings *this,FPlatformWaveState *param_1)

{
  char cVar1;
  int iVar2;
  IAudioFormat *pIVar3;
  ulonglong uVar4;
  IModularFeatures *pIVar5;
  FName *pFVar6;
  int iVar7;
  ForAnyElementType FVar8;
  FName local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  ulonglong uVar9;
  
  pIVar3 = FindFormat(this,&param_1->FormatName);
  if (pIVar3 == (IAudioFormat *)0x0) {
    return false;
  }
  cVar1 = (**(code **)((longlong)*pIVar3 + 0x50))(pIVar3,this->IniPlatformName);
  if (cVar1 == '\0') {
    if ((byte)LogAudio._0_1_ < 6) {
      return false;
    }
    ::FName::ToString(&this->IniPlatformName,&local_18);
    ::FName::ToString(&param_1->FormatName,&local_28);
    ::FName::ToString(&param_1->Name,&local_38);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    FVar8.Data = local_18.Data.AllocatorInstance.Data;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar8.Data = local_18.Data.AllocatorInstance.Data;
    }
LAB_147648942:
    if (FVar8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar8.Data);
    }
    return false;
  }
  iVar2 = param_1->NumChannels;
  (**(code **)((longlong)*pIVar3 + 0x68))(pIVar3,&local_38);
  if (0 < local_38.Data.ArrayNum) {
    uVar4 = 0;
    uVar9 = uVar4;
    if (0 < local_38.Data.ArrayNum) {
      do {
        iVar7 = (int)uVar9;
        if (*(int *)(local_38.Data.AllocatorInstance.Data + uVar4 * 4) == iVar2) goto LAB_1476489a7;
        uVar4 = uVar4 + 1;
        uVar9 = (ulonglong)(iVar7 + 1);
      } while ((longlong)uVar4 < (longlong)local_38.Data.ArrayNum);
    }
    iVar7 = -1;
LAB_1476489a7:
    if (iVar7 == -1) {
      if ((byte)LogAudio._0_1_ < 6) {
        return false;
      }
      ::FName::ToString(&param_1->FormatName,&local_28);
      ::FName::ToString(&param_1->Name,&local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      FVar8.Data = local_28.Data.AllocatorInstance.Data;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        FVar8.Data = local_28.Data.AllocatorInstance.Data;
      }
      goto LAB_147648942;
    }
  }
  cVar1 = (**(code **)((longlong)*pIVar3 + 0x58))(pIVar3);
  if (cVar1 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar5 = IModularFeatures::Get();
      pFVar6 = ::FName::FName(&local_res10,L"AudioLink Factory");
      iVar2 = (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,*pFVar6);
      if ((3 < (byte)LogAudio._0_1_) && (0 < iVar2)) {
        UE::Logging::Private::BasicLog<4>
                  ((FStaticBasicLogRecord *)&PTR_u_AudioLink_is_en_151727970,
                   (FLogCategoryBase *)&LogAudio);
      }
      IsAudioLinkEnabled = 0 < iVar2;
      _Init_thread_footer(&::_TSS0);
    }
    if (IsAudioLinkEnabled != false) {
      return false;
    }
  }
  return true;
}

// ReadConfiguration @ 14764e8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FAudioFormatSettings::ReadConfiguration
          (FAudioFormatSettings *this,FConfigCacheIni *param_1,FString *param_2)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  FName *pFVar6;
  FName *pFVar7;
  ForAnyElementType FVar8;
  <lambda_2> <Var9;
  FName *this_00;
  int iVar10;
  FAudioFormatSettings *pFVar11;
  FName *this_01;
  undefined1 auStackY_228 [32];
  <lambda_2> local_1e8;
  undefined1 local_1e7;
  undefined1 local_1e6 [6];
  FName local_1e0;
  FAudioFormatSettings *local_1d8;
  FName local_1d0;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FName local_198;
  FString local_190;
  TArray<FString,TSizedDefaultAllocator<32>_> local_180;
  TArray<FString,TSizedDefaultAllocator<32>_> local_170;
  FString local_160;
  FString local_150;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_140;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pTVar1 = &this->AllWaveFormats;
  local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180.ArrayNum = 0;
  local_180.ArrayMax = 0;
  local_1e0 = (FName)param_2;
  local_1d8 = this;
  local_140 = pTVar1;
  iVar4 = FConfigCacheIni::GetArray(param_1,L"Audio",L"AllWaveFormats",&local_180,param_2);
  <Var9 = local_1e8;
  pFVar11 = this;
  if (iVar4 == 0) {
    local_68 = NAME_BINKA;
    local_60 = NAME_ADPCM;
    local_58 = NAME_PCM;
    local_50 = NAME_OPUS;
    local_48 = NAME_RADA;
    TArray<FName,TSizedDefaultAllocator<32>_>::CopyToEmpty<FName,int>
              (pTVar1,&local_68,5,(this->AllWaveFormats).ArrayMax);
    if (2 < (byte)LogAudio._0_1_) {
      iVar4 = (this->AllWaveFormats).ArrayNum;
      bVar3 = true;
      local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_190.Data.ArrayNum = 0;
      local_190.Data.ArrayMax = 0;
      pFVar5 = (FName *)(pTVar1->AllocatorInstance).Data;
      pFVar6 = pFVar5 + iVar4;
      while( true ) {
        if ((this->AllWaveFormats).ArrayNum != iVar4) {
          local_1e8 = (<lambda_2>)0x0;
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_1e8);
        }
        if (pFVar5 == pFVar6) break;
        if (bVar3) {
          bVar3 = false;
        }
        else {
          ::FString::AppendChars(&local_190,L", ",2);
        }
        ::FName::GetPlainNameString(pFVar5,&local_138);
        iVar10 = local_138.Data.ArrayNum + -1;
        if (local_138.Data.ArrayNum == 0) {
          iVar10 = 0;
        }
        ::FString::AppendChars(&local_190,(wchar_t *)local_138.Data.AllocatorInstance.Data,iVar10);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        pFVar5 = pFVar5 + 1;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      <Var9 = local_1e8;
      param_2 = (FString *)local_1e0;
      pFVar11 = local_1d8;
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
        param_2 = (FString *)local_1e0;
        pFVar11 = local_1d8;
      }
    }
  }
  else {
    Algo::
    Transform<TArray<FString,TSizedDefaultAllocator<32>_>,TArray<FName,TSizedDefaultAllocator<32>_>_&,_Audio::FAudioFormatSettings::ReadConfiguration_::__l2::<lambda_2>_>
              (&local_180,pTVar1,local_1e8);
  }
  DestructItems<FString,int>((FString *)local_180.AllocatorInstance.Data,local_180.ArrayNum);
  if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.AllocatorInstance.Data);
  }
  local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.ArrayNum = 0;
  local_170.ArrayMax = 0;
  iVar4 = FConfigCacheIni::GetArray(param_1,L"Audio",L"FormatModuleHints",&local_170,param_2);
  if (iVar4 != 0) {
    Algo::
    Transform<TArray<FString,TSizedDefaultAllocator<32>_>,TArray<FName,TSizedDefaultAllocator<32>_>_&,_Audio::FAudioFormatSettings::ReadConfiguration_::__l2::<lambda_2>_>
              (&local_170,&pFVar11->WaveFormatModuleHints,<Var9);
  }
  DestructItems<FString,int>((FString *)local_170.AllocatorInstance.Data,local_170.ArrayNum);
  if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.AllocatorInstance.Data);
  }
  local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.Data.ArrayNum = 0;
  local_1c8.Data.ArrayMax = 0;
  bVar3 = FConfigCacheIni::GetString(param_1,L"Audio",L"FallbackFormat",&local_1c8,param_2);
  if (bVar3) {
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_1c8.Data.ArrayNum != 0) {
      FVar8.Data = local_1c8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_1d0,(wchar_t *)FVar8.Data);
    pFVar11->FallbackFormat = local_1d0;
  }
  else {
    pFVar11->FallbackFormat = NAME_ADPCM;
    if (2 < (byte)LogAudio._0_1_) {
      ::FName::GetPlainNameString(&pFVar11->FallbackFormat,&local_108);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
    }
  }
  this_00 = &pFVar11->FallbackFormat;
  pFVar5 = (FName *)(pTVar1->AllocatorInstance).Data;
  iVar4 = (this->AllWaveFormats).ArrayNum;
  pFVar6 = pFVar5 + iVar4;
  if (pFVar5 != pFVar6) {
    do {
      if (*pFVar5 == *this_00) goto LAB_14764ec63;
      pFVar5 = pFVar5 + 1;
    } while (pFVar5 != pFVar6);
  }
  if (0 < iVar4) {
    if (2 < (byte)LogAudio._0_1_) {
      ::FName::ToString((FName *)(pTVar1->AllocatorInstance).Data,&local_f8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
    if (((this->AllWaveFormats).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *this_00 = *(FName *)(pTVar1->AllocatorInstance).Data;
  }
LAB_14764ec63:
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.Data.ArrayNum = 0;
  local_1b8.Data.ArrayMax = 0;
  bVar3 = FConfigCacheIni::GetString(param_1,L"Audio",L"PlatformFormat",&local_1b8,param_2);
  if (bVar3) {
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_1b8.Data.ArrayNum != 0) {
      FVar8.Data = local_1b8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_1e0,(wchar_t *)FVar8.Data);
    pFVar11->PlatformFormat = local_1e0;
  }
  else {
    pFVar11->PlatformFormat = NAME_ADPCM;
    if (2 < (byte)LogAudio._0_1_) {
      ::FName::GetPlainNameString(&pFVar11->PlatformFormat,&local_e8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
  }
  this_01 = &pFVar11->PlatformFormat;
  pFVar5 = (FName *)(pTVar1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (this->AllWaveFormats).ArrayNum;
  if (pFVar5 != pFVar6) {
    do {
      if (*pFVar5 == *this_01) goto LAB_14764ed96;
      pFVar5 = pFVar5 + 1;
    } while (pFVar5 != pFVar6);
  }
  if (2 < (byte)LogAudio._0_1_) {
    ::FName::ToString(this_00,&local_d8);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  *this_01 = *this_00;
LAB_14764ed96:
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.Data.ArrayNum = 0;
  local_1a8.Data.ArrayMax = 0;
  bVar3 = FConfigCacheIni::GetString(param_1,L"Audio",L"PlatformStreamingFormat",&local_1a8,param_2)
  ;
  if (bVar3) {
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_1a8.Data.ArrayNum != 0) {
      FVar8.Data = local_1a8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_198,(wchar_t *)FVar8.Data);
    pFVar6 = &local_1d8->PlatformStreamingFormat;
    *pFVar6 = local_198;
  }
  else {
    pFVar6 = &local_1d8->PlatformStreamingFormat;
    *pFVar6 = NAME_ADPCM;
    if (2 < (byte)LogAudio._0_1_) {
      ::FName::GetPlainNameString(pFVar6,&local_c8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar7 = (FName *)(pTVar1->AllocatorInstance).Data;
  pFVar5 = pFVar7 + (this->AllWaveFormats).ArrayNum;
  if (pFVar7 != pFVar5) {
    do {
      if (*pFVar7 == *pFVar6) goto LAB_14764eecb;
      pFVar7 = pFVar7 + 1;
    } while (pFVar7 != pFVar5);
  }
  if (2 < (byte)LogAudio._0_1_) {
    ::FName::ToString(this_00,&local_b8);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  *pFVar6 = *this_00;
LAB_14764eecb:
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (5 < (byte)LogAudio._0_1_) {
    pFVar5 = (FName *)::FName::ToString(this_00,&local_78);
    if (pFVar5[1].ComparisonIndex.Value == 0) {
      local_1e0 = (FName)0x15060d16c;
    }
    else {
      local_1e0 = *pFVar5;
    }
    pFVar6 = (FName *)::FName::ToString(pFVar6,&local_88);
    if (pFVar6[1].ComparisonIndex.Value == 0) {
      local_1d0 = (FName)0x15060d16c;
    }
    else {
      local_1d0 = *pFVar6;
    }
    ::FName::ToString(this_01,&local_98);
    pFVar11 = local_1d8;
    local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    bVar3 = true;
    local_150.Data.ArrayNum = 0;
    local_150.Data.ArrayMax = 0;
    pFVar5 = (FName *)(local_1d8->WaveFormatModuleHints).AllocatorInstance.Data;
    iVar4 = (local_1d8->WaveFormatModuleHints).ArrayNum;
    pFVar6 = pFVar5 + iVar4;
    while( true ) {
      if ((pFVar11->WaveFormatModuleHints).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1e7);
      }
      pTVar1 = local_140;
      if (pFVar5 == pFVar6) break;
      if (bVar3) {
        bVar3 = false;
      }
      else {
        ::FString::AppendChars(&local_150,L", ",2);
      }
      ::FName::GetPlainNameString(pFVar5,&local_128);
      iVar10 = local_128.Data.ArrayNum + -1;
      if (local_128.Data.ArrayNum == 0) {
        iVar10 = 0;
      }
      ::FString::AppendChars(&local_150,(wchar_t *)local_128.Data.AllocatorInstance.Data,iVar10);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      pFVar5 = pFVar5 + 1;
    }
    bVar3 = true;
    local_198 = (FName)L"";
    if (local_150.Data.ArrayNum != 0) {
      local_198 = (FName)local_150.Data.AllocatorInstance;
    }
    pFVar5 = (FName *)(local_140->AllocatorInstance).Data;
    iVar4 = local_140->ArrayNum;
    local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_160.Data.ArrayNum = 0;
    local_160.Data.ArrayMax = 0;
    pFVar6 = pFVar5 + iVar4;
    while( true ) {
      if (pTVar1->ArrayNum != iVar4) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1e6);
      }
      if (pFVar5 == pFVar6) break;
      if (bVar3) {
        bVar3 = false;
      }
      else {
        ::FString::AppendChars(&local_160,L", ",2);
      }
      ::FName::GetPlainNameString(pFVar5,&local_118);
      iVar10 = local_118.Data.ArrayNum + -1;
      if (local_118.Data.ArrayNum == 0) {
        iVar10 = 0;
      }
      ::FString::AppendChars(&local_160,(wchar_t *)local_118.Data.AllocatorInstance.Data,iVar10);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      pFVar5 = pFVar5 + 1;
    }
    ::FName::ToString(&local_1d8->IniPlatformName,&local_a8);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if ((FName)local_150.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  return;
}

