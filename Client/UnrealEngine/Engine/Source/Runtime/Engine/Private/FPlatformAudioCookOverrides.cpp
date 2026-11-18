// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FPlatformAudioCookOverrides @ 14761d840

FPlatformAudioCookOverrides * __thiscall
FPlatformAudioCookOverrides::FPlatformAudioCookOverrides
          (FPlatformAudioCookOverrides *this,FPlatformAudioCookOverrides *param_1)

{
  bool bVar1;
  undefined3 uVar2;
  int iVar3;
  int iVar4;
  
  this->bResampleForDevice = param_1->bResampleForDevice;
  *(undefined8 *)&(this->PlatformSampleRates).field_0x0 = 0;
  *(undefined8 *)&(this->PlatformSampleRates).field_0x8 = 0;
  *(undefined8 *)&(this->PlatformSampleRates).field_0x20 = 0;
  *(undefined4 *)&(this->PlatformSampleRates).field_0x28 = 0;
  *(undefined4 *)&(this->PlatformSampleRates).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlatformSampleRates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PlatformSampleRates).field_0x34 = 0;
  *(undefined8 *)&(this->PlatformSampleRates).field_0x40 = 0;
  *(undefined4 *)&(this->PlatformSampleRates).field_0x48 = 0;
  TSet<TTuple<enum_ESoundwaveSampleRateSettings,float>,TDefaultMapHashableKeyFuncs<enum_ESoundwaveSampleRateSettings,float,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<enum_ESoundwaveSampleRateSettings,float>,TDefaultMapHashableKeyFuncs<enum_ESoundwaveSampleRateSettings,float,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<ESoundwaveSampleRateSettings,float>,TDefaultMapHashableKeyFuncs<ESoundwaveSampleRateSettings,float,0>,FDefaultSetAllocator>
              *)&this->PlatformSampleRates,
             (TSet<TTuple<ESoundwaveSampleRateSettings,float>,TDefaultMapHashableKeyFuncs<ESoundwaveSampleRateSettings,float,0>,FDefaultSetAllocator>
              *)&param_1->PlatformSampleRates);
  this->CompressionQualityModifier = param_1->CompressionQualityModifier;
  this->SoundCueCookQualityIndex = param_1->SoundCueCookQualityIndex;
  this->AutoStreamingThreshold = param_1->AutoStreamingThreshold;
  this->bInlineFirstAudioChunk = param_1->bInlineFirstAudioChunk;
  this->LengthOfFirstAudioChunkInSecs = param_1->LengthOfFirstAudioChunkInSecs;
  bVar1 = (param_1->StreamCachingSettings).bForceLegacyStreamChunking;
  uVar2 = *(undefined3 *)&(param_1->StreamCachingSettings).field_0x5;
  iVar3 = (param_1->StreamCachingSettings).ZerothChunkSizeForLegacyStreamChunkingKB;
  iVar4 = (param_1->StreamCachingSettings).MaxChunkSizeOverrideKB;
  (this->StreamCachingSettings).CacheSizeKB = (param_1->StreamCachingSettings).CacheSizeKB;
  (this->StreamCachingSettings).bForceLegacyStreamChunking = bVar1;
  *(undefined3 *)&(this->StreamCachingSettings).field_0x5 = uVar2;
  (this->StreamCachingSettings).ZerothChunkSizeForLegacyStreamChunkingKB = iVar3;
  (this->StreamCachingSettings).MaxChunkSizeOverrideKB = iVar4;
  return this;
}

// FPlatformAudioCookOverrides @ 14761d8d0

FPlatformAudioCookOverrides * __thiscall
FPlatformAudioCookOverrides::FPlatformAudioCookOverrides(FPlatformAudioCookOverrides *this)

{
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  TPairInitializer<ESoundwaveSampleRateSettings_&&,float_&&> local_res18;
  undefined1 *local_28;
  undefined4 *local_20;
  
  this->bResampleForDevice = false;
  *(undefined8 *)&this->PlatformSampleRates = 0;
  *(undefined8 *)&(this->PlatformSampleRates).field_0x8 = 0;
  *(undefined8 *)&(this->PlatformSampleRates).field_0x20 = 0;
  *(undefined4 *)&(this->PlatformSampleRates).field_0x28 = 0;
  *(undefined4 *)&(this->PlatformSampleRates).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlatformSampleRates).field_0x34 = 0;
  *(undefined4 *)&(this->PlatformSampleRates).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PlatformSampleRates).field_0x40 = 0;
  *(undefined4 *)&(this->PlatformSampleRates).field_0x48 = 0;
  this->AutoStreamingThreshold = 0.0;
  this->bInlineFirstAudioChunk = false;
  this->LengthOfFirstAudioChunkInSecs = 0.0;
  (this->StreamCachingSettings).bForceLegacyStreamChunking = false;
  local_res8[0] = 0;
  local_28 = local_res8;
  local_20 = local_res10;
  this->CompressionQualityModifier = 1.0;
  this->SoundCueCookQualityIndex = -1;
  (this->StreamCachingSettings).CacheSizeKB = 0x10000;
  (this->StreamCachingSettings).ZerothChunkSizeForLegacyStreamChunkingKB = 0x100;
  (this->StreamCachingSettings).MaxChunkSizeOverrideKB = -1;
  local_res10[0] = 0x473b8000;
  TSet<TTuple<enum_ESoundwaveSampleRateSettings,float>,TDefaultMapHashableKeyFuncs<enum_ESoundwaveSampleRateSettings,float,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_ESoundwaveSampleRateSettings_&&,float_&&>_>
            (&this->PlatformSampleRates,&local_res18,(bool *)&local_28);
  local_28 = local_res8;
  local_res10[0] = 0x46fa0000;
  local_20 = local_res10;
  local_res8[0] = 1;
  TSet<TTuple<enum_ESoundwaveSampleRateSettings,float>,TDefaultMapHashableKeyFuncs<enum_ESoundwaveSampleRateSettings,float,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_ESoundwaveSampleRateSettings_&&,float_&&>_>
            (&this->PlatformSampleRates,&local_res18,(bool *)&local_28);
  local_28 = local_res8;
  local_res10[0] = 0x46bb8000;
  local_20 = local_res10;
  local_res8[0] = 2;
  TSet<TTuple<enum_ESoundwaveSampleRateSettings,float>,TDefaultMapHashableKeyFuncs<enum_ESoundwaveSampleRateSettings,float,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_ESoundwaveSampleRateSettings_&&,float_&&>_>
            (&this->PlatformSampleRates,&local_res18,(bool *)&local_28);
  local_28 = local_res8;
  local_res10[0] = 0x463b8000;
  local_20 = local_res10;
  local_res8[0] = 3;
  TSet<TTuple<enum_ESoundwaveSampleRateSettings,float>,TDefaultMapHashableKeyFuncs<enum_ESoundwaveSampleRateSettings,float,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_ESoundwaveSampleRateSettings_&&,float_&&>_>
            (&this->PlatformSampleRates,&local_res18,(bool *)&local_28);
  local_28 = local_res8;
  local_res10[0] = 0x45fa0000;
  local_20 = local_res10;
  local_res8[0] = 4;
  TSet<TTuple<enum_ESoundwaveSampleRateSettings,float>,TDefaultMapHashableKeyFuncs<enum_ESoundwaveSampleRateSettings,float,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_ESoundwaveSampleRateSettings_&&,float_&&>_>
            (&this->PlatformSampleRates,&local_res18,(bool *)&local_28);
  return this;
}

