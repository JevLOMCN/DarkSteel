// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LFNRS
// Functions: 271

// OnReplayFinishedWriting'' @ 1410ad0d0

void __cdecl
`dynamic_initializer_for_'FLocalFileNetworkReplayStreamer::OnReplayFinishedWriting__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FLocalFileNetworkReplayStreamer::OnReplayFinishedWriting__)
  ;
  return;
}

// `dynamic_initializer_for_'CVarAllowEncryptedRecording'' @ 1410ad0f0

void __cdecl UE::Net::LocalFileReplay::_dynamic_initializer_for__CVarAllowEncryptedRecording__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAllowEncryptedRecording,L"localReplay.AllowEncryptedRecording",local_res8,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowEncryptedRecording__);
  return;
}

// `dynamic_initializer_for_'CVarAllowLiveStreamDelete'' @ 1410ad140

void __cdecl UE::Net::LocalFileReplay::_dynamic_initializer_for__CVarAllowLiveStreamDelete__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAllowLiveStreamDelete,L"localReplay.AllowLiveStreamDelete",local_res8,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowLiveStreamDelete__);
  return;
}

// `dynamic_initializer_for_'CVarChunkUploadDelayInSeconds'' @ 1410ad190

void __cdecl
UE::Net::LocalFileReplay::_dynamic_initializer_for__CVarChunkUploadDelayInSeconds__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 20.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarChunkUploadDelayInSeconds,L"localReplay.ChunkUploadDelayInSeconds",local_res8,L"",
             0);
  atexit(_dynamic_atexit_destructor_for__CVarChunkUploadDelayInSeconds__);
  return;
}

// `dynamic_initializer_for_'CVarMaxBufferedStreamChunks'' @ 1410ad1e0

void __cdecl UE::Net::LocalFileReplay::_dynamic_initializer_for__CVarMaxBufferedStreamChunks__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 10;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMaxBufferedStreamChunks,L"localReplay.MaxBufferedStreamChunks",local_res8,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxBufferedStreamChunks__);
  return;
}

// `dynamic_initializer_for_'CVarMaxCacheSize'' @ 1410ad230

void __cdecl UE::Net::LocalFileReplay::_dynamic_initializer_for__CVarMaxCacheSize__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0xa00000;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMaxCacheSize,L"localReplay.MaxCacheSize",local_res8,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxCacheSize__);
  return;
}

// `dynamic_initializer_for_'CVarMaxFriendlySerializeBytes'' @ 1410ad280

void __cdecl
UE::Net::LocalFileReplay::_dynamic_initializer_for__CVarMaxFriendlySerializeBytes__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x10000;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMaxFriendlySerializeBytes,L"localReplay.MaxFriendlySerializeBytes",local_res8,
             L"Maximum allowed serialized bytes when reading friendly name from file header.",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxFriendlySerializeBytes__);
  return;
}

// `dynamic_initializer_for_'CVarMinLoadNextChunkDelaySeconds'' @ 1410ad2d0

void __cdecl
UE::Net::LocalFileReplay::_dynamic_initializer_for__CVarMinLoadNextChunkDelaySeconds__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 3.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarMinLoadNextChunkDelaySeconds,L"localReplay.MinLoadNextChunkDelaySeconds",
             local_res8,L"Minimum time to wait between conditional chunk loads.",0);
  atexit(_dynamic_atexit_destructor_for__CVarMinLoadNextChunkDelaySeconds__);
  return;
}

// `dynamic_initializer_for_'CVarReplayRecordingMinSpace'' @ 1410ad320

void __cdecl UE::Net::LocalFileReplay::_dynamic_initializer_for__CVarReplayRecordingMinSpace__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x1400000;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarReplayRecordingMinSpace,L"localReplay.ReplayRecordingMinSpace",local_res8,
             L"Minimum space needed to start recording a replay.",0);
  atexit(_dynamic_atexit_destructor_for__CVarReplayRecordingMinSpace__);
  return;
}

// `dynamic_initializer_for_'GRegisterLocalFileReplayCustomVersion'' @ 1410ad370

void __cdecl _dynamic_initializer_for__GRegisterLocalFileReplayCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = FLocalFileReplayCustomVersion::Guid;
  FCurrentCustomVersions::Register
            (&local_18,7,L"LocalFileReplay",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GRegisterLocalFileReplayCustomVersion__);
  return;
}

// `dynamic_initializer_for_'LogLocalFileReplay'' @ 1410ad3b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLocalFileReplay__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogLocalFileReplay,L"LogLocalFileReplay",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogLocalFileReplay__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantLocalFileNetworkReplayStreaming'' @ 1410ad3f0

void __cdecl _dynamic_initializer_for__ModuleRegistrantLocalFileNetworkReplayStreaming__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "LocalFileNetworkReplayStreaming";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"LocalFileNetworkReplayStreaming",0x1f);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FLocalFileNetworkReplayStreamingFactory>::
             InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LocalReplay_AutomaticName'' @ 1410ad440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LocalReplay_AutomaticName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LocalReplay_AutomaticName ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_AutomaticName>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LocalReplay_AutomaticName");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_AutomaticName,*pFVar1,
               L"Local replay automatic name","STATGROUP_LocalReplay","STATCAT_Advanced",
               L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LocalReplay_CompressTime'' @ 1410ad4d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LocalReplay_CompressTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LocalReplay_CompressTime ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_CompressTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LocalReplay_CompressTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_CompressTime,*pFVar1,
               L"Local replay compress time","STATGROUP_LocalReplay","STATCAT_Advanced",
               L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LocalReplay_DecompressTime'' @ 1410ad560

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LocalReplay_DecompressTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LocalReplay_DecompressTime ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_DecompressTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LocalReplay_DecompressTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_DecompressTime,*pFVar1,
               L"Local replay decompress time","STATGROUP_LocalReplay","STATCAT_Advanced",
               L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LocalReplay_DecryptTime'' @ 1410ad5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LocalReplay_DecryptTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LocalReplay_DecryptTime ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_DecryptTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LocalReplay_DecryptTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_DecryptTime,*pFVar1,
               L"Local replay decrypt time","STATGROUP_LocalReplay","STATCAT_Advanced",
               L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LocalReplay_Delete'' @ 1410ad680

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LocalReplay_Delete__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LocalReplay_Delete == (FThreadSafeStaticStat<FStat_STAT_LocalReplay_Delete>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_LocalReplay_Delete");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_Delete,*pFVar1,
               L"Local replay delete","STATGROUP_LocalReplay","STATCAT_Advanced",L"LocalReplay",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LocalReplay_EncryptTime'' @ 1410ad710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LocalReplay_EncryptTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LocalReplay_EncryptTime ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_EncryptTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LocalReplay_EncryptTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_EncryptTime,*pFVar1,
               L"Local replay encrypt time","STATGROUP_LocalReplay","STATCAT_Advanced",
               L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LocalReplay_Enumerate'' @ 1410ad7a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LocalReplay_Enumerate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LocalReplay_Enumerate ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_Enumerate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LocalReplay_Enumerate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_Enumerate,*pFVar1,
               L"Local replay enumerate","STATGROUP_LocalReplay","STATCAT_Advanced",L"LocalReplay",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LocalReplay_FlushCheckpoint'' @ 1410ad830

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LocalReplay_FlushCheckpoint__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LocalReplay_FlushCheckpoint ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_FlushCheckpoint>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LocalReplay_FlushCheckpoint");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_FlushCheckpoint,*pFVar1,
               L"Local replay flush checkpoint","STATGROUP_LocalReplay","STATCAT_Advanced",
               L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LocalReplay_FlushEvent'' @ 1410ad8c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LocalReplay_FlushEvent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LocalReplay_FlushEvent ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_FlushEvent>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LocalReplay_FlushEvent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_FlushEvent,*pFVar1,
               L"Local replay flush event","STATGROUP_LocalReplay","STATCAT_Advanced",L"LocalReplay"
               ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LocalReplay_FlushHeader'' @ 1410ad950

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LocalReplay_FlushHeader__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LocalReplay_FlushHeader ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_FlushHeader>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LocalReplay_FlushHeader");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_FlushHeader,*pFVar1,
               L"Local replay flush header","STATGROUP_LocalReplay","STATCAT_Advanced",
               L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LocalReplay_FlushStream'' @ 1410ad9e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LocalReplay_FlushStream__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LocalReplay_FlushStream ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_FlushStream>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LocalReplay_FlushStream");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_FlushStream,*pFVar1,
               L"Local replay flush stream","STATGROUP_LocalReplay","STATCAT_Advanced",
               L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LocalReplay_ReadCheckpoint'' @ 1410ada70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LocalReplay_ReadCheckpoint__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LocalReplay_ReadCheckpoint ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_ReadCheckpoint>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LocalReplay_ReadCheckpoint");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_ReadCheckpoint,*pFVar1,
               L"Local replay read checkpoint","STATGROUP_LocalReplay","STATCAT_Advanced",
               L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LocalReplay_ReadEvent'' @ 1410adb00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LocalReplay_ReadEvent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LocalReplay_ReadEvent ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_ReadEvent>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LocalReplay_ReadEvent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_ReadEvent,*pFVar1,
               L"Local replay read event","STATGROUP_LocalReplay","STATCAT_Advanced",L"LocalReplay",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LocalReplay_ReadHeader'' @ 1410adb90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LocalReplay_ReadHeader__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LocalReplay_ReadHeader ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_ReadHeader>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LocalReplay_ReadHeader");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_ReadHeader,*pFVar1,
               L"Local replay read header","STATGROUP_LocalReplay","STATCAT_Advanced",L"LocalReplay"
               ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LocalReplay_ReadReplayInfo'' @ 1410adc20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LocalReplay_ReadReplayInfo__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LocalReplay_ReadReplayInfo ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_ReadReplayInfo>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LocalReplay_ReadReplayInfo");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_ReadReplayInfo,*pFVar1,
               L"Local replay read info","STATGROUP_LocalReplay","STATCAT_Advanced",L"LocalReplay",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LocalReplay_ReadStream'' @ 1410adcb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LocalReplay_ReadStream__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LocalReplay_ReadStream ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_ReadStream>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LocalReplay_ReadStream");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_ReadStream,*pFVar1,
               L"Local replay read stream","STATGROUP_LocalReplay","STATCAT_Advanced",L"LocalReplay"
               ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LocalReplay_Rename'' @ 1410add40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LocalReplay_Rename__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LocalReplay_Rename == (FThreadSafeStaticStat<FStat_STAT_LocalReplay_Rename>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_LocalReplay_Rename");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_Rename,*pFVar1,
               L"Local replay rename","STATGROUP_LocalReplay","STATCAT_Advanced",L"LocalReplay",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LocalReplay_RenameFriendly'' @ 1410addd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LocalReplay_RenameFriendly__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LocalReplay_RenameFriendly ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_RenameFriendly>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LocalReplay_RenameFriendly");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_RenameFriendly,*pFVar1,
               L"Local replay rename friendly","STATGROUP_LocalReplay","STATCAT_Advanced",
               L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LocalReplay_StartRecording'' @ 1410ade60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LocalReplay_StartRecording__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LocalReplay_StartRecording ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_StartRecording>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LocalReplay_StartRecording");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_StartRecording,*pFVar1,
               L"Local replay start recording","STATGROUP_LocalReplay","STATCAT_Advanced",
               L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LocalReplay_WriteReplayInfo'' @ 1410adef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LocalReplay_WriteReplayInfo__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LocalReplay_WriteReplayInfo ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_WriteReplayInfo>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LocalReplay_WriteReplayInfo");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_WriteReplayInfo,*pFVar1,
               L"Local replay write info","STATGROUP_LocalReplay","STATCAT_Advanced",L"LocalReplay",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NetworkReplayStreaming_LocalFileNetworkReplayStreaming_Public_LocalFileNetworkReplayStreaming_h__Script_LocalFileNetworkReplayStreaming_1733702602'' @ 1410adf80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NetworkReplayStreaming_LocalFileNetworkReplayStreaming_Public_LocalFileNetworkReplayStreaming_h__Script_LocalFileNetworkReplayStreaming_1733702602__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LocalFileNetworkReplayStreaming",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NetworkReplayStreaming_LocalFileNetworkReplayStreaming_Public_LocalFileNetworkReplayStreaming_h__Script_LocalFileNetworkReplayStreaming_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_LocalFileNetworkReplayStreaming'' @ 1410adfd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_LocalFileNetworkReplayStreaming__
          (void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xa54709cb;
  local_res8[0].DeclarationsHash = 0x62d4efe8;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_LocalFileNetworkReplayStreaming,
             L"/Script/LocalFileNetworkReplayStreaming",
             &Z_Registration_Info_UPackage__Script_LocalFileNetworkReplayStreaming,local_res8);
  return;
}

// Z_Construct_UPackage__Script_LocalFileNetworkReplayStreaming @ 146c8aee0

UPackage * __cdecl Z_Construct_UPackage__Script_LocalFileNetworkReplayStreaming(void)

{
  if (Z_Registration_Info_UPackage__Script_LocalFileNetworkReplayStreaming.OuterSingleton ==
      (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_LocalFileNetworkReplayStreaming.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_LocalFileNetworkReplayStreaming.OuterSingleton;
}

// `scalar_deleting_destructor' @ 146c8af20

void * __thiscall
FLocalFileNetworkReplayStreamingFactory::_scalar_deleting_destructor_
          (FLocalFileNetworkReplayStreamingFactory *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<FLocalFileNetworkReplayStreamer,1>,int>
            ((TSharedPtr<FLocalFileNetworkReplayStreamer,1> *)
             (this->LocalFileStreamers).AllocatorInstance.Data,(this->LocalFileStreamers).ArrayNum);
  pFVar1 = (this->LocalFileStreamers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// ELocalFileReplayResult_StaticEnum @ 146c8af90

UEnum * __cdecl ELocalFileReplayResult_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELocalFileReplayResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LocalFileNetworkReplayStreaming();
    Z_Registration_Info_UEnum_ELocalFileReplayResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult,
                       (UObject *)pUVar1,L"ELocalFileReplayResult");
  }
  return Z_Registration_Info_UEnum_ELocalFileReplayResult.OuterSingleton;
}

// `vector_deleting_destructor'`adjustor{8}' @ 146c8afd0

/* [thunk]:public: virtual void * __ptr64 __cdecl FLocalFileNetworkReplayStreamingFactory::`vector
   deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FLocalFileNetworkReplayStreamingFactory::_vector_deleting_destructor__adjustor_8__
          (FLocalFileNetworkReplayStreamingFactory *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FLocalFileNetworkReplayStreamingFactory *)
                      &this[-1].LocalFileStreamers.ArrayNum,param_1);
  return pvVar1;
}

// ConstructItems<FLocalFileEventInfo,FLocalFileEventInfo,int> @ 146c8d200

void __cdecl
ConstructItems<FLocalFileEventInfo,FLocalFileEventInfo,int>
          (void *param_1,FLocalFileEventInfo *param_2,int param_3)

{
  long64 *plVar1;
  FString *this;
  FString *pFVar2;
  
  if (param_3 != 0) {
    this = (FString *)((longlong)param_1 + 0x18);
    pFVar2 = &param_2->Group;
    do {
      this[-2].Data.ArrayNum =
           *(int *)((longlong)param_2 + (-0x18 - (longlong)param_1) + (longlong)this);
      FString::FString(this + -1,pFVar2 + -1);
      FString::FString(this,pFVar2);
      FString::FString(this + 1,pFVar2 + 1);
      *(uint *)&this[2].Data.AllocatorInstance.Data = *(uint *)(pFVar2 + 2);
      *(uint *)((longlong)&this[2].Data.AllocatorInstance.Data + 4) =
           *(uint *)((longlong)(pFVar2 + 2) + 4);
      this[2].Data.ArrayNum = *(int *)((longlong)(pFVar2 + 2) + 8);
      plVar1 = (long64 *)(pFVar2 + 3);
      pFVar2 = pFVar2 + 5;
      this[3].Data.AllocatorInstance.Data = (FScriptContainerElement *)*plVar1;
      this = this + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FLocalFileChunkInfo,int> @ 146c8d2a0

void __cdecl DefaultConstructItems<FLocalFileChunkInfo,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      *(undefined4 *)(puVar1 + -1) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + -4) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FLocalFileEventInfo,int> @ 146c8d2e0

void __cdecl DefaultConstructItems<FLocalFileEventInfo,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined4 *)(puVar1 + -2) = 0xffffffff;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *(undefined4 *)(puVar1 + 6) = 0;
      puVar1[7] = 0;
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FLocalFileReplayDataInfo,int> @ 146c8d330

void __cdecl DefaultConstructItems<FLocalFileReplayDataInfo,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 8;
    do {
      *(undefined4 *)(lVar1 + -8) = 0xffffffff;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(undefined8 *)(lVar1 + 0x18) = 0;
      lVar1 = lVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRequestEventDataResult,int> @ 146c8d370

void __cdecl DefaultConstructItems<FRequestEventDataResult,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined4 *)(puVar1 + -1) = 6;
      puVar1[-2] = &___7FRequestEventDataResult__6B_;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`FLocalFileNetworkReplayStreamer::CleanUpOldReplays'::__l5::FAutoReplayInfo,int> @ 146c8d3b0

void __cdecl
DestructItems<_FLocalFileNetworkReplayStreamer::CleanUpOldReplays_::__l5::FAutoReplayInfo,int>
          (FAutoReplayInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Path).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FLocalFileEventInfo,int> @ 146c8d3f0

void __cdecl DestructItems<FLocalFileEventInfo,int>(FLocalFileEventInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Group;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FLocalFileNetworkReplayStreamer,1>,int> @ 146c8d450

void __cdecl
DestructItems<TSharedPtr<FLocalFileNetworkReplayStreamer,1>,int>
          (TSharedPtr<FLocalFileNetworkReplayStreamer,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FQueuedLocalFileRequest,1>,int> @ 146c8d490

void __cdecl
DestructItems<TSharedPtr<FQueuedLocalFileRequest,1>,int>
          (TSharedPtr<FQueuedLocalFileRequest,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// HeapSortInternal<`FLocalFileNetworkReplayStreamer::CleanUpOldReplays'::__l5::FAutoReplayInfo,int,FIdentityFunctor,TDereferenceWrapper<`FLocalFileNetworkReplayStreamer::CleanUpOldReplays'::__l5::FAutoReplayInfo,TLess<void>_>_> @ 146c8d710

void __cdecl
AlgoImpl::
HeapSortInternal<_FLocalFileNetworkReplayStreamer::CleanUpOldReplays_::__l5::FAutoReplayInfo,int,FIdentityFunctor,TDereferenceWrapper<_FLocalFileNetworkReplayStreamer::CleanUpOldReplays_::__l5::FAutoReplayInfo,TLess<void>_>_>
          (FAutoReplayInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_static_bool___cdecl_FLocalFileNetworkReplayStreamer::CleanUpOldReplays(FString_const_&,TArrayView<FString_const_,int>)_::_5_::FAutoReplayInfo,TLess<void>_>
          param_4)

{
  FAutoReplayInfo *pFVar1;
  FAutoReplayInfo *pFVar2;
  long64 lVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FAutoReplayInfo *pFVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar14 = iVar11;
  iVar15 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_146c8d81f:
      if (iVar15 == 0) {
        iVar11 = param_2 + -1;
        lVar16 = (longlong)iVar11;
        if (0 < iVar11) {
          pFVar12 = param_1 + lVar16;
          do {
            iVar14 = (pFVar12->Path).Data.ArrayNum;
            iVar10 = (pFVar12->Path).Data.ArrayMax;
            lVar3 = (param_1->TimeStamp).Ticks;
            pFVar5 = (param_1->Path).Data.AllocatorInstance.Data;
            iVar15 = (param_1->Path).Data.ArrayNum;
            iVar13 = (param_1->Path).Data.ArrayMax;
            (param_1->Path).Data.AllocatorInstance.Data =
                 (pFVar12->Path).Data.AllocatorInstance.Data;
            (param_1->Path).Data.ArrayNum = iVar14;
            (param_1->Path).Data.ArrayMax = iVar10;
            (param_1->TimeStamp).Ticks = (pFVar12->TimeStamp).Ticks;
            (pFVar12->Path).Data.AllocatorInstance.Data = pFVar5;
            (pFVar12->Path).Data.ArrayNum = iVar15;
            (pFVar12->Path).Data.ArrayMax = iVar13;
            (pFVar12->TimeStamp).Ticks = lVar3;
            iVar14 = 0;
            if (1 < iVar11) {
              do {
                iVar15 = iVar14 * 2;
                iVar10 = iVar15 + 1;
                if (iVar15 + 2 < iVar11) {
                  if (param_1[iVar10].TimeStamp.Ticks <
                      param_1[(longlong)iVar15 + 2].TimeStamp.Ticks) {
                    iVar10 = iVar15;
                  }
                  iVar10 = iVar10 + 1;
                }
                pFVar1 = param_1 + iVar14;
                if ((pFVar1->TimeStamp).Ticks <= param_1[iVar10].TimeStamp.Ticks) break;
                pFVar2 = param_1 + iVar10;
                iVar14 = (pFVar2->Path).Data.ArrayNum;
                iVar15 = (pFVar2->Path).Data.ArrayMax;
                lVar3 = (pFVar1->TimeStamp).Ticks;
                pFVar5 = (pFVar1->Path).Data.AllocatorInstance.Data;
                iVar13 = (pFVar1->Path).Data.ArrayNum;
                iVar6 = (pFVar1->Path).Data.ArrayMax;
                (pFVar1->Path).Data.AllocatorInstance.Data =
                     (pFVar2->Path).Data.AllocatorInstance.Data;
                (pFVar1->Path).Data.ArrayNum = iVar14;
                (pFVar1->Path).Data.ArrayMax = iVar15;
                (pFVar1->TimeStamp).Ticks = param_1[iVar10].TimeStamp.Ticks;
                pFVar1 = param_1 + iVar10;
                (pFVar1->Path).Data.AllocatorInstance.Data = pFVar5;
                (pFVar1->Path).Data.ArrayNum = iVar13;
                (pFVar1->Path).Data.ArrayMax = iVar6;
                param_1[iVar10].TimeStamp.Ticks = lVar3;
                iVar14 = iVar10;
              } while (iVar10 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar16 = lVar16 + -1;
            pFVar12 = pFVar12 + -1;
          } while (0 < lVar16);
        }
        return;
      }
      iVar10 = iVar15 + -1;
      iVar11 = iVar14 + -2;
      iVar14 = iVar11;
      iVar15 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar13 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if (param_1[iVar13].TimeStamp.Ticks < param_1[(longlong)iVar11 + 2].TimeStamp.Ticks) {
        iVar13 = iVar11;
      }
      iVar13 = iVar13 + 1;
    }
    pFVar12 = param_1 + iVar10;
    if ((pFVar12->TimeStamp).Ticks <= param_1[iVar13].TimeStamp.Ticks) goto LAB_146c8d81f;
    pFVar1 = param_1 + iVar13;
    iVar10 = (pFVar1->Path).Data.ArrayNum;
    iVar6 = (pFVar1->Path).Data.ArrayMax;
    iVar11 = iVar13 * 2 + 1;
    lVar3 = (pFVar12->TimeStamp).Ticks;
    pFVar5 = (pFVar12->Path).Data.AllocatorInstance.Data;
    iVar7 = (pFVar12->Path).Data.ArrayNum;
    iVar8 = (pFVar12->Path).Data.ArrayMax;
    (pFVar12->Path).Data.AllocatorInstance.Data = (pFVar1->Path).Data.AllocatorInstance.Data;
    (pFVar12->Path).Data.ArrayNum = iVar10;
    (pFVar12->Path).Data.ArrayMax = iVar6;
    (pFVar12->TimeStamp).Ticks = param_1[iVar13].TimeStamp.Ticks;
    pFVar12 = param_1 + iVar13;
    (pFVar12->Path).Data.AllocatorInstance.Data = pFVar5;
    (pFVar12->Path).Data.ArrayNum = iVar7;
    (pFVar12->Path).Data.ArrayMax = iVar8;
    param_1[iVar13].TimeStamp.Ticks = lVar3;
    iVar10 = iVar13;
  } while( true );
}

// IntroSortInternal<`FLocalFileNetworkReplayStreamer::CleanUpOldReplays'::__l5::FAutoReplayInfo,int,FIdentityFunctor,TDereferenceWrapper<`FLocalFileNetworkReplayStreamer::CleanUpOldReplays'::__l5::FAutoReplayInfo,TLess<void>_>_> @ 146c8d930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
AlgoImpl::
IntroSortInternal<_FLocalFileNetworkReplayStreamer::CleanUpOldReplays_::__l5::FAutoReplayInfo,int,FIdentityFunctor,TDereferenceWrapper<_FLocalFileNetworkReplayStreamer::CleanUpOldReplays_::__l5::FAutoReplayInfo,TLess<void>_>_>
          (FAutoReplayInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_static_bool___cdecl_FLocalFileNetworkReplayStreamer::CleanUpOldReplays(FString_const_&,TArrayView<FString_const_,int>)_::_5_::FAutoReplayInfo,TLess<void>_>
          param_4)

{
  FAutoReplayInfo *pFVar1;
  long64 lVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  FAutoReplayInfo *pFVar13;
  FAutoReplayInfo *pFVar14;
  FAutoReplayInfo *pFVar15;
  FAutoReplayInfo *pFVar16;
  FAutoReplayInfo *pFVar17;
  FAutoReplayInfo *pFVar18;
  FAutoReplayInfo **ppFVar19;
  float fVar20;
  undefined1 auStack_378 [48];
  FAutoReplayInfo *local_348;
  FAutoReplayInfo *local_338;
  FAutoReplayInfo *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar20 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar20;
    memset(local_320,0,0x2e8);
    ppFVar19 = &local_338;
    do {
      pFVar13 = ppFVar19[1];
      pFVar18 = *ppFVar19;
      pFVar1 = ppFVar19[2];
      local_348._0_4_ = (int)pFVar1;
      iVar12 = (int)(((longlong)pFVar13 - (longlong)pFVar18) / 0x18) + 1;
      pFVar17 = pFVar18;
      if ((int)local_348 != 0) {
LAB_146c8da00:
        if (8 < iVar12) {
          iVar7 = (pFVar17->Path).Data.ArrayNum;
          iVar8 = (pFVar17->Path).Data.ArrayMax;
          pFVar15 = pFVar13 + 1;
          iVar12 = iVar12 / 2;
          pFVar18 = pFVar17 + iVar12;
          pFVar3 = (pFVar18->Path).Data.AllocatorInstance.Data;
          iVar9 = (pFVar18->Path).Data.ArrayNum;
          iVar10 = (pFVar18->Path).Data.ArrayMax;
          lVar2 = pFVar17[iVar12].TimeStamp.Ticks;
          pFVar18 = pFVar17 + iVar12;
          (pFVar18->Path).Data.AllocatorInstance.Data = (pFVar17->Path).Data.AllocatorInstance.Data;
          (pFVar18->Path).Data.ArrayNum = iVar7;
          (pFVar18->Path).Data.ArrayMax = iVar8;
          pFVar17[iVar12].TimeStamp.Ticks = (pFVar17->TimeStamp).Ticks;
          (pFVar17->Path).Data.AllocatorInstance.Data = pFVar3;
          (pFVar17->Path).Data.ArrayNum = iVar9;
          (pFVar17->Path).Data.ArrayMax = iVar10;
          (pFVar17->TimeStamp).Ticks = lVar2;
          pFVar18 = pFVar17;
LAB_146c8da50:
          pFVar14 = pFVar18;
          pFVar18 = pFVar14 + 1;
          if (pFVar18 <= pFVar13) goto code_r0x000146c8da59;
          goto LAB_146c8da63;
        }
        for (; pFVar18 = pFVar17, pFVar1 = pFVar17, pFVar17 < pFVar13; pFVar13 = pFVar13 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar13) {
            if ((pFVar1->TimeStamp).Ticks < (pFVar18->TimeStamp).Ticks) {
              pFVar18 = pFVar1;
            }
          }
          pFVar3 = (pFVar18->Path).Data.AllocatorInstance.Data;
          iVar8 = (pFVar18->Path).Data.ArrayNum;
          iVar9 = (pFVar18->Path).Data.ArrayMax;
          lVar2 = (pFVar18->TimeStamp).Ticks;
          iVar12 = (pFVar13->Path).Data.ArrayNum;
          iVar7 = (pFVar13->Path).Data.ArrayMax;
          (pFVar18->Path).Data.AllocatorInstance.Data = (pFVar13->Path).Data.AllocatorInstance.Data;
          (pFVar18->Path).Data.ArrayNum = iVar12;
          (pFVar18->Path).Data.ArrayMax = iVar7;
          (pFVar18->TimeStamp).Ticks = (pFVar13->TimeStamp).Ticks;
          (pFVar13->Path).Data.AllocatorInstance.Data = pFVar3;
          (pFVar13->Path).Data.ArrayNum = iVar8;
          (pFVar13->Path).Data.ArrayMax = iVar9;
          (pFVar13->TimeStamp).Ticks = lVar2;
        }
        goto LAB_146c8db85;
      }
LAB_146c8db76:
      local_348 = pFVar1;
      HeapSortInternal<_FLocalFileNetworkReplayStreamer::CleanUpOldReplays_::__l5::FAutoReplayInfo,int,FIdentityFunctor,TDereferenceWrapper<_FLocalFileNetworkReplayStreamer::CleanUpOldReplays_::__l5::FAutoReplayInfo,TLess<void>_>_>
                (pFVar18,iVar12,param_3,param_4);
LAB_146c8db85:
      ppFVar19 = ppFVar19 + -3;
    } while (&local_338 <= ppFVar19);
  }
  return;
code_r0x000146c8da59:
  if ((pFVar17->TimeStamp).Ticks <= pFVar14[1].TimeStamp.Ticks) goto LAB_146c8da50;
LAB_146c8da63:
  do {
    pFVar16 = pFVar15;
    pFVar15 = pFVar16 + -1;
    if (pFVar15 <= pFVar17) break;
  } while (pFVar16[-1].TimeStamp.Ticks <= (pFVar17->TimeStamp).Ticks);
  pFVar3 = (pFVar15->Path).Data.AllocatorInstance.Data;
  uVar4 = pFVar16[-1].Path.Data.ArrayNum;
  uVar5 = pFVar16[-1].Path.Data.ArrayMax;
  if (pFVar18 <= pFVar15) {
    pFVar6 = (pFVar18->Path).Data.AllocatorInstance.Data;
    iVar12 = pFVar14[1].Path.Data.ArrayNum;
    iVar7 = pFVar14[1].Path.Data.ArrayMax;
    lVar2 = pFVar14[1].TimeStamp.Ticks;
    (pFVar18->Path).Data.AllocatorInstance.Data = pFVar3;
    pFVar14[1].Path.Data.ArrayNum = uVar4;
    pFVar14[1].Path.Data.ArrayMax = uVar5;
    pFVar14[1].TimeStamp.Ticks = pFVar16[-1].TimeStamp.Ticks;
    (pFVar15->Path).Data.AllocatorInstance.Data = pFVar6;
    pFVar16[-1].Path.Data.ArrayNum = iVar12;
    pFVar16[-1].Path.Data.ArrayMax = iVar7;
    pFVar16[-1].TimeStamp.Ticks = lVar2;
    goto LAB_146c8da50;
  }
  pFVar6 = (pFVar17->Path).Data.AllocatorInstance.Data;
  iVar12 = (pFVar17->Path).Data.ArrayNum;
  iVar7 = (pFVar17->Path).Data.ArrayMax;
  lVar2 = (pFVar17->TimeStamp).Ticks;
  lVar11 = (longlong)pFVar15 + (-0x18 - (longlong)pFVar17);
  local_348._0_4_ = (int)local_348 + -1;
  lVar11 = lVar11 / 6 + (lVar11 >> 0x3f);
  (pFVar17->Path).Data.AllocatorInstance.Data = pFVar3;
  (pFVar17->Path).Data.ArrayNum = uVar4;
  (pFVar17->Path).Data.ArrayMax = uVar5;
  (pFVar17->TimeStamp).Ticks = pFVar16[-1].TimeStamp.Ticks;
  (pFVar15->Path).Data.AllocatorInstance.Data = pFVar6;
  pFVar16[-1].Path.Data.ArrayNum = iVar12;
  pFVar16[-1].Path.Data.ArrayMax = iVar7;
  pFVar16[-1].TimeStamp.Ticks = lVar2;
  if ((lVar11 >> 2) - (lVar11 >> 0x3f) < ((longlong)pFVar13 - (longlong)pFVar18) / 0x18) {
    if (pFVar18 < pFVar13) {
      *ppFVar19 = pFVar18;
      ppFVar19[1] = pFVar13;
      *(int *)(ppFVar19 + 2) = (int)local_348;
      ppFVar19 = ppFVar19 + 3;
    }
    if (pFVar15 <= pFVar17 + 1) goto LAB_146c8db85;
    pFVar13 = pFVar16 + -2;
    pFVar18 = pFVar17;
  }
  else {
    if (pFVar17 + 1 < pFVar15) {
      *ppFVar19 = pFVar17;
      ppFVar19[1] = pFVar16 + -2;
      *(int *)(ppFVar19 + 2) = (int)local_348;
      ppFVar19 = ppFVar19 + 3;
    }
    if (pFVar13 <= pFVar18) goto LAB_146c8db85;
  }
  iVar12 = (int)(((longlong)pFVar13 - (longlong)pFVar18) / 0x18) + 1;
  pFVar17 = pFVar18;
  if ((int)local_348 == 0) goto LAB_146c8db76;
  goto LAB_146c8da00;
}

// SetPromise<TFunction<void___cdecl(void)>_&> @ 146c8dde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
SetPromise<TFunction<void___cdecl(void)>_&>
          (TPromise<void> *param_1,TFunction<void___cdecl(void)> *param_2)

{
  code *pcVar1;
  TFutureState<void> *lpCriticalSection;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  UE::Core::Private::Function::CheckCallable(*(void **)param_2);
  pcVar1 = *(code **)param_2;
  plVar9 = (longlong *)&param_2->field_0x10;
  if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
    plVar9 = *(longlong **)&param_2->field_0x28;
  }
  uVar8 = (**(code **)(*plVar9 + 8))();
  (*pcVar1)(uVar8);
  if ((param_1->State).Object == (TFutureState<void> *)0x0) {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1->State).Object == (TFutureState<void> *)0x0) {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  lpCriticalSection = (param_1->State).Object;
  if ((&lpCriticalSection->field_0x50)[0x18] != '\0') {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48 = (code *)0x0;
  plStack_20 = (longlong *)0x0;
  if (lpCriticalSection != (TFutureState<void> *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pcVar1 = *(code **)(&lpCriticalSection->field_0x28 + 8);
    uVar8 = *(undefined8 *)(&lpCriticalSection->field_0x28 + 0x10);
    uVar2 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x18);
    uVar3 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x1c);
    uVar4 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x20);
    uVar5 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x24);
    uVar6 = CONCAT44(uStack_24,local_28);
    local_28 = *(undefined4 *)&lpCriticalSection->field_0x50;
    uStack_24 = *(undefined4 *)(&lpCriticalSection->field_0x50 + 4);
    plVar9 = *(longlong **)(&lpCriticalSection->field_0x50 + 8);
    *(undefined4 *)(&lpCriticalSection->field_0x28 + 8) = (undefined4)local_48;
    *(undefined4 *)(&lpCriticalSection->field_0x28 + 0xc) = local_48._4_4_;
    *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x10) = (undefined4)uStack_40;
    *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x14) = uStack_40._4_4_;
    *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x18) = local_38;
    *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x1c) = uStack_34;
    *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x20) = uStack_30;
    *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x24) = uStack_2c;
    *(undefined8 *)&lpCriticalSection->field_0x50 = uVar6;
    *(longlong **)(&lpCriticalSection->field_0x50 + 8) = plStack_20;
    LOCK();
    (&lpCriticalSection->field_0x50)[0x18] = 1;
    UNLOCK();
    local_48 = pcVar1;
    uStack_40 = uVar8;
    local_38 = uVar2;
    uStack_34 = uVar3;
    uStack_30 = uVar4;
    uStack_2c = uVar5;
    plStack_20 = plVar9;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (**(code **)(**(longlong **)(&lpCriticalSection->field_0x50 + 0x10) + 0x10))();
    if (local_48 != (code *)0x0) {
      UE::Core::Private::Function::CheckCallable(local_48);
      pcVar1 = local_48;
      plVar9 = (longlong *)&local_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar9 = plStack_20;
      }
      uVar8 = (**(code **)(*plVar9 + 8))();
      (*pcVar1)(uVar8);
      if (local_48 != (code *)0x0) {
        plVar9 = (longlong *)&local_38;
        if (plStack_20 != (longlong *)0x0) {
          plVar9 = plStack_20;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StaticEnum<enum_ELocalFileReplayResult> @ 146c8dfa0

UEnum * __cdecl StaticEnum<enum_ELocalFileReplayResult>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELocalFileReplayResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LocalFileNetworkReplayStreaming();
    Z_Registration_Info_UEnum_ELocalFileReplayResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult,
                       (UObject *)pUVar1,L"ELocalFileReplayResult");
  }
  return Z_Registration_Info_UEnum_ELocalFileReplayResult.OuterSingleton;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy>,FDeleteFinishedStreamResult>'::__l2::<lambda_1>,0,1> @ 146c91050

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy>,FDeleteFinishedStreamResult>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy>,FDeleteFinishedStreamResult>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFDeleteFinishedStreamResult___ZUFDefaultDelegateUserPolicy____UFDeleteFinishedStreamResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFDeleteFinishedStreamResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFDeleteFinishedStreamResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>,FEnumerateEventsResult>'::__l2::<lambda_1>,0,1> @ 146c91070

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>,FEnumerateEventsResult>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>,FEnumerateEventsResult>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFEnumerateEventsResult___ZUFDefaultDelegateUserPolicy____UFEnumerateEventsResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFEnumerateEventsResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFEnumerateEventsResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>,FEnumerateStreamsResult>'::__l2::<lambda_1>,0,1> @ 146c91090

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>,FEnumerateStreamsResult>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>,FEnumerateStreamsResult>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFEnumerateStreamsResult___ZUFDefaultDelegateUserPolicy____UFEnumerateStreamsResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFEnumerateStreamsResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFEnumerateStreamsResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FKeepReplayResult>'::__l2::<lambda_1>,0,1> @ 146c910b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FKeepReplayResult>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FKeepReplayResult>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFKeepReplayResult___ZUFDefaultDelegateUserPolicy____UFKeepReplayResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFKeepReplayResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFKeepReplayResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy>,FRenameReplayResult>'::__l2::<lambda_1>,0,1> @ 146c910d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy>,FRenameReplayResult>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy>,FRenameReplayResult>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFRenameReplayResult___ZUFDefaultDelegateUserPolicy____UFRenameReplayResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFRenameReplayResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFRenameReplayResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>,FRequestEventDataResult>'::__l2::<lambda_1>,0,1> @ 146c910f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>,FRequestEventDataResult>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>,FRequestEventDataResult>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFRequestEventDataResult___ZUFDefaultDelegateUserPolicy____UFRequestEventDataResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFRequestEventDataResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFRequestEventDataResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FRequestEventGroupDataResult_const_&),FDefaultDelegateUserPolicy>,FRequestEventGroupDataResult>'::__l2::<lambda_1>,0,1> @ 146c91110

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FRequestEventGroupDataResult_const_&),FDefaultDelegateUserPolicy>,FRequestEventGroupDataResult>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FRequestEventGroupDataResult_const_&),FDefaultDelegateUserPolicy>,FRequestEventGroupDataResult>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFRequestEventGroupDataResult___ZUFDefaultDelegateUserPolicy____UFRequestEventGroupDataResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFRequestEventGroupDataResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFRequestEventGroupDataResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy>,FStartStreamingResult>'::__l2::<lambda_1>,0,1> @ 146c91130

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy>,FStartStreamingResult>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy>,FStartStreamingResult>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFStartStreamingResult___ZUFDefaultDelegateUserPolicy____UFStartStreamingResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFStartStreamingResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFStartStreamingResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddOrUpdateEvent'::__l2::<lambda_1>,0,1> @ 146c91150

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddOrUpdateEvent'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::AddOrUpdateEvent_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddOrUpdateEvent'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyLoadNextChunk'::__l2::<lambda_1>,0,0> @ 146c911b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyLoadNextChunk'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::ConditionallyLoadNextChunk_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyLoadNextChunk'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::DeleteFinishedStream_Internal'::__l2::<lambda_1>,0,1> @ 146c911d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::DeleteFinishedStream_Internal'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::DeleteFinishedStream_Internal_::__l2::<lambda_1>,0,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::DeleteFinishedStream_Internal'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::EnumerateEvents_Internal'::__l2::<lambda_1>,0,1> @ 146c911f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::EnumerateEvents_Internal'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::EnumerateEvents_Internal_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::EnumerateEvents_Internal'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::EnumerateStreams'::__l2::<lambda_1>,0,1> @ 146c91230

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::EnumerateStreams'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::EnumerateStreams_::__l2::<lambda_1>,0,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::EnumerateStreams'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::FlushCheckpointInternal'::__l2::<lambda_1>,0,1> @ 146c91250

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::FlushCheckpointInternal'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::FlushCheckpointInternal_::__l2::<lambda_1>,0,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::FlushCheckpointInternal'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::FlushStream'::__l2::<lambda_1>,0,1> @ 146c91270

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::FlushStream'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::FlushStream_::__l2::<lambda_1>,0,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::FlushStream'::`2'::<lambda_1>,0,1>::
        _vftable_;
  pvVar1 = *(void **)((longlong)this + 0x20);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>::IssueRequest'::__l2::<lambda_1>,0,0> @ 146c91290

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>::IssueRequest'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>::IssueRequest_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFDeleteFinishedStreamResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>::IssueRequest'::__l2::<lambda_1>,0,0> @ 146c912b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>::IssueRequest'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>::IssueRequest_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFDownloadHeaderResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>::IssueRequest'::__l2::<lambda_1>,0,0> @ 146c912d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>::IssueRequest'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>::IssueRequest_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFEnumerateEventsResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>::IssueRequest'::__l2::<lambda_1>,0,0> @ 146c912f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>::IssueRequest'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>::IssueRequest_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFEnumerateStreamsResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::IssueRequest'::__l2::<lambda_1>,0,0> @ 146c91310

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::IssueRequest'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::IssueRequest_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFGotoResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>::IssueRequest'::__l2::<lambda_1>,0,0> @ 146c91330

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>::IssueRequest'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>::IssueRequest_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFKeepReplayResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>::IssueRequest'::__l2::<lambda_1>,0,0> @ 146c91350

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>::IssueRequest'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>::IssueRequest_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRenameReplayResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>::IssueRequest'::__l2::<lambda_1>,0,0> @ 146c91370

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>::IssueRequest'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>::IssueRequest_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRequestEventDataResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>::IssueRequest'::__l2::<lambda_1>,0,0> @ 146c91390

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>::IssueRequest'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>::IssueRequest_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRequestEventGroupDataResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>::IssueRequest'::__l2::<lambda_1>,0,0> @ 146c913b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>::IssueRequest'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>::IssueRequest_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFStartStreamingResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>::IssueRequest'::__l2::<lambda_1>,0,0> @ 146c913d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>::IssueRequest'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>::IssueRequest_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFStreamingResultBase______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>::IssueRequest'::__l2::<lambda_1>,0,0> @ 146c913f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>::IssueRequest'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>::IssueRequest_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_W4ELocalFileReplayResult____UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FGenericQueuedLocalFileRequest::IssueRequest'::__l2::<lambda_1>,0,0> @ 146c91410

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGenericQueuedLocalFileRequest::IssueRequest'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FGenericQueuedLocalFileRequest::IssueRequest_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGenericQueuedLocalFileRequest::IssueRequest'::`2'::<lambda_1>,0,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::KeepReplay_Internal'::__l2::<lambda_1>,0,1> @ 146c91430

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::KeepReplay_Internal'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::KeepReplay_Internal_::__l2::<lambda_1>,0,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::KeepReplay_Internal'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RenameReplayFriendlyName_Internal'::__l2::<lambda_1>,0,1> @ 146c91450

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RenameReplayFriendlyName_Internal'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::RenameReplayFriendlyName_Internal_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RenameReplayFriendlyName_Internal'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RenameReplay_Internal'::__l2::<lambda_1>,0,1> @ 146c91490

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RenameReplay_Internal'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::RenameReplay_Internal_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RenameReplay_Internal'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RequestEventData_Internal'::__l2::<lambda_1>,0,1> @ 146c914d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RequestEventData_Internal'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::RequestEventData_Internal_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RequestEventData_Internal'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RequestEventGroupData'::__l2::<lambda_1>,0,1> @ 146c91510

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RequestEventGroupData'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::RequestEventGroupData_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RequestEventGroupData'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::WriteHeader'::__l2::<lambda_1>,0,1> @ 146c91550

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::WriteHeader'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::WriteHeader_::__l2::<lambda_1>,0,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::WriteHeader'::`2'::<lambda_1>,0,1>::
        _vftable_;
  pvVar1 = *(void **)((longlong)this + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0> @ 146c91570

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>::IssueRequest_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFDeleteFinishedStreamResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0> @ 146c91590

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>::IssueRequest_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFDownloadHeaderResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0> @ 146c915b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>::IssueRequest_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFEnumerateEventsResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0> @ 146c915d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>::IssueRequest_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFEnumerateStreamsResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0> @ 146c915f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::IssueRequest_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFGotoResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0> @ 146c91610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>::IssueRequest_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFKeepReplayResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0> @ 146c91630

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>::IssueRequest_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRenameReplayResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0> @ 146c91650

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>::IssueRequest_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRequestEventDataResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0> @ 146c91670

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>::IssueRequest_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRequestEventGroupDataResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0> @ 146c91690

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>::IssueRequest_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFStartStreamingResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0> @ 146c916b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>::IssueRequest_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFStreamingResultBase______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0> @ 146c916d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>::IssueRequest_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_W4ELocalFileReplayResult____UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<``FGenericQueuedLocalFileRequest::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0> @ 146c916f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FGenericQueuedLocalFileRequest::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__FGenericQueuedLocalFileRequest::IssueRequest_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FGenericQueuedLocalFileRequest::IssueRequest'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::DownloadHeader'::__l5::<lambda_1>,0,1> @ 146c91710

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::DownloadHeader'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::DownloadHeader_::__l5::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::DownloadHeader'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StartStreaming'::__l50::<lambda_1>,0,1> @ 146c91730

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StartStreaming'::__l50::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::StartStreaming_::__l50::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StartStreaming'::`50'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x50));
  }
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StopStreaming'::__l82::<lambda_1>,0,0> @ 146c917a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StopStreaming'::__l82::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::StopStreaming_::__l82::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StopStreaming'::`82'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyRefreshReplayInfo'::__l11::<lambda_1>,0,0> @ 146c917c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyRefreshReplayInfo'::__l11::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::ConditionallyRefreshReplayInfo_::__l11::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyRefreshReplayInfo'::`11'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``FLocalFileNetworkReplayStreamer::StartStreaming'::__l50::<lambda_2>::operator()'::__l12::<lambda_1>,0,0> @ 146c917e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FLocalFileNetworkReplayStreamer::StartStreaming'::__l50::<lambda_2>::operator()'::__l12::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__FLocalFileNetworkReplayStreamer::StartStreaming_::__l50::<lambda_2>::operator()_::__l12::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FLocalFileNetworkReplayStreamer::StartStreaming'::`50'::<lambda_2>::operator()'::`12'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddOrUpdateEvent'::__l2::<lambda_2>,0,0> @ 146c91800

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddOrUpdateEvent'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::AddOrUpdateEvent_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddOrUpdateEvent'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyLoadNextChunk'::__l2::<lambda_2>,0,0> @ 146c91820

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyLoadNextChunk'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::ConditionallyLoadNextChunk_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyLoadNextChunk'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::FlushCheckpointInternal'::__l2::<lambda_2>,0,0> @ 146c91840

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::FlushCheckpointInternal'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::FlushCheckpointInternal_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::FlushCheckpointInternal'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::FlushStream'::__l2::<lambda_2>,0,0> @ 146c91860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::FlushStream'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::FlushStream_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::FlushStream'::`2'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>::IssueRequest'::__l2::<lambda_2>,1,0> @ 146c91880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>::IssueRequest'::__l2::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>::IssueRequest_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFDeleteFinishedStreamResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>::IssueRequest'::__l2::<lambda_2>,1,0> @ 146c918a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>::IssueRequest'::__l2::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>::IssueRequest_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFDownloadHeaderResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>::IssueRequest'::__l2::<lambda_2>,1,0> @ 146c918c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>::IssueRequest'::__l2::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>::IssueRequest_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFEnumerateEventsResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>::IssueRequest'::__l2::<lambda_2>,1,0> @ 146c918e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>::IssueRequest'::__l2::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>::IssueRequest_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFEnumerateStreamsResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::IssueRequest'::__l2::<lambda_2>,1,0> @ 146c91900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::IssueRequest'::__l2::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::IssueRequest_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFGotoResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>::IssueRequest'::__l2::<lambda_2>,1,0> @ 146c91920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>::IssueRequest'::__l2::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>::IssueRequest_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFKeepReplayResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>::IssueRequest'::__l2::<lambda_2>,1,0> @ 146c91940

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>::IssueRequest'::__l2::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>::IssueRequest_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRenameReplayResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>::IssueRequest'::__l2::<lambda_2>,1,0> @ 146c91960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>::IssueRequest'::__l2::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>::IssueRequest_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRequestEventDataResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>::IssueRequest'::__l2::<lambda_2>,1,0> @ 146c91980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>::IssueRequest'::__l2::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>::IssueRequest_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRequestEventGroupDataResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>::IssueRequest'::__l2::<lambda_2>,1,0> @ 146c919a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>::IssueRequest'::__l2::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>::IssueRequest_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFStartStreamingResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>::IssueRequest'::__l2::<lambda_2>,1,0> @ 146c919c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>::IssueRequest'::__l2::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>::IssueRequest_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFStreamingResultBase______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>::IssueRequest'::__l2::<lambda_2>,1,0> @ 146c919e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>::IssueRequest'::__l2::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>::IssueRequest_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_W4ELocalFileReplayResult____UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FGenericQueuedLocalFileRequest::IssueRequest'::__l2::<lambda_2>,1,0> @ 146c91a00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGenericQueuedLocalFileRequest::IssueRequest'::__l2::<lambda_2>,1,0>::
~TFunction_OwnedObject<_FGenericQueuedLocalFileRequest::IssueRequest_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGenericQueuedLocalFileRequest::IssueRequest'::`2'::<lambda_2>,1,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RefreshHeader'::__l2::<lambda_2>,0,0> @ 146c91a20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RefreshHeader'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::RefreshHeader_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RefreshHeader'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::WriteHeader'::__l2::<lambda_2>,0,0> @ 146c91a40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::WriteHeader'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::WriteHeader_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::WriteHeader'::`2'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::DownloadHeader'::__l5::<lambda_2>,0,1> @ 146c91a60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::DownloadHeader'::__l5::<lambda_2>,0,1>::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::DownloadHeader_::__l5::<lambda_2>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::DownloadHeader'::`5'::<lambda_2>,0,1>
        ::_vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l26::<lambda_2>,0,1> @ 146c91a80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l26::<lambda_2>,0,1>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::GotoCheckpointIndex_::__l26::<lambda_2>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::`26'::<lambda_2>,0,1>
        ::_vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StartStreaming'::__l50::<lambda_2>,0,1> @ 146c91aa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StartStreaming'::__l50::<lambda_2>,0,1>::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::StartStreaming_::__l50::<lambda_2>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StartStreaming'::`50'::<lambda_2>,0,1>
        ::_vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StopStreaming'::__l82::<lambda_2>,0,0> @ 146c91ac0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StopStreaming'::__l82::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::StopStreaming_::__l82::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StopStreaming'::`82'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyRefreshReplayInfo'::__l11::<lambda_2>,0,0> @ 146c91ae0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyRefreshReplayInfo'::__l11::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::ConditionallyRefreshReplayInfo_::__l11::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyRefreshReplayInfo'::`11'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l50::<lambda_3>,0,0> @ 146c91b00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l50::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::GotoCheckpointIndex_::__l50::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::`50'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StartStreaming'::__l52::<lambda_3>,0,1> @ 146c91b20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StartStreaming'::__l52::<lambda_3>,0,1>::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::StartStreaming_::__l52::<lambda_3>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StartStreaming'::`52'::<lambda_3>,0,1>
        ::_vftable_;
  `FLocalFileNetworkReplayStreamer::StartStreaming'::__l52::<lambda_3>::~<lambda_3>
            ((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StopStreaming'::__l2::<lambda_4>,0,0> @ 146c91b40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StopStreaming'::__l2::<lambda_4>,0,0>::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::StopStreaming_::__l2::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StopStreaming'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l50::<lambda_4>,0,1> @ 146c91b60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l50::<lambda_4>,0,1>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::GotoCheckpointIndex_::__l50::<lambda_4>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::`50'::<lambda_4>,0,1>
        ::_vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StartStreaming'::__l52::<lambda_4>,0,1> @ 146c91b80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StartStreaming'::__l52::<lambda_4>,0,1>::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::StartStreaming_::__l52::<lambda_4>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StartStreaming'::`52'::<lambda_4>,0,1>
        ::_vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l52::<lambda_5>,0,0> @ 146c91ba0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l52::<lambda_5>,0,0>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::GotoCheckpointIndex_::__l52::<lambda_5>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::`52'::<lambda_5>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l52::<lambda_6>,0,1> @ 146c91bc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l52::<lambda_6>,0,1>
::
~TFunction_OwnedObject<_FLocalFileNetworkReplayStreamer::GotoCheckpointIndex_::__l52::<lambda_6>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::`52'::<lambda_6>,0,1>
        ::_vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  return;
}

// operator<< @ 146c92db0

FArchive * __cdecl operator<<(FArchive *param_1,FDateTime *param_2)

{
  long64 *plVar1;
  
  plVar1 = (long64 *)**(longlong **)&param_1->field_0x8;
  if (plVar1 + 1 <= (long64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    param_2->Ticks = *plVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)param_2);
  return param_1;
}

// `scalar_deleting_destructor' @ 146ca0740

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy>,FDeleteFinishedStreamResult>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFDeleteFinishedStreamResult___ZUFDefaultDelegateUserPolicy____UFDeleteFinishedStreamResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFDeleteFinishedStreamResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFDeleteFinishedStreamResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca0790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>,FEnumerateEventsResult>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFEnumerateEventsResult___ZUFDefaultDelegateUserPolicy____UFEnumerateEventsResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFEnumerateEventsResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFEnumerateEventsResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca07e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>,FEnumerateStreamsResult>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFEnumerateStreamsResult___ZUFDefaultDelegateUserPolicy____UFEnumerateStreamsResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFEnumerateStreamsResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFEnumerateStreamsResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca0830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FKeepReplayResult>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFKeepReplayResult___ZUFDefaultDelegateUserPolicy____UFKeepReplayResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFKeepReplayResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFKeepReplayResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca0880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy>,FRenameReplayResult>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFRenameReplayResult___ZUFDefaultDelegateUserPolicy____UFRenameReplayResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFRenameReplayResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFRenameReplayResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca08d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>,FRequestEventDataResult>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFRequestEventDataResult___ZUFDefaultDelegateUserPolicy____UFRequestEventDataResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFRequestEventDataResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFRequestEventDataResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca0920

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FRequestEventGroupDataResult_const_&),FDefaultDelegateUserPolicy>,FRequestEventGroupDataResult>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFRequestEventGroupDataResult___ZUFDefaultDelegateUserPolicy____UFRequestEventGroupDataResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFRequestEventGroupDataResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFRequestEventGroupDataResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca0970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy>,FStartStreamingResult>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFStartStreamingResult___ZUFDefaultDelegateUserPolicy____UFStartStreamingResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFStartStreamingResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFStartStreamingResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca09c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddOrUpdateEvent'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddOrUpdateEvent'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca0a40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyLoadNextChunk'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyLoadNextChunk'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca0a80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::DeleteFinishedStream_Internal'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::DeleteFinishedStream_Internal'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca0ad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::EnumerateEvents_Internal'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::EnumerateEvents_Internal'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca0b30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::EnumerateStreams'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::EnumerateStreams'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca0b80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::FlushCheckpointInternal'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::FlushCheckpointInternal'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca0bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::FlushStream'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::FlushStream'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca0c20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>::IssueRequest'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFDeleteFinishedStreamResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca0c70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>::IssueRequest'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFDownloadHeaderResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca0cc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>::IssueRequest'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFEnumerateEventsResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca0d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>::IssueRequest'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFEnumerateStreamsResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca0d60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::IssueRequest'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFGotoResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca0db0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>::IssueRequest'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFKeepReplayResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca0e00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>::IssueRequest'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRenameReplayResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca0e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>::IssueRequest'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRequestEventDataResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca0ea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>::IssueRequest'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRequestEventGroupDataResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca0ef0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>::IssueRequest'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFStartStreamingResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca0f40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>::IssueRequest'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFStreamingResultBase______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca0f90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>::IssueRequest'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_W4ELocalFileReplayResult____UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca0fe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGenericQueuedLocalFileRequest::IssueRequest'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGenericQueuedLocalFileRequest::IssueRequest'::`2'::<lambda_1>,0,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::KeepReplay_Internal'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::KeepReplay_Internal'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RenameReplayFriendlyName_Internal'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RenameReplayFriendlyName_Internal'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca10e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RenameReplay_Internal'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RenameReplay_Internal'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RequestEventData_Internal'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RequestEventData_Internal'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca11a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RequestEventGroupData'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RequestEventGroupData'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::WriteHeader'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::WriteHeader'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1250

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFDeleteFinishedStreamResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca12a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFDownloadHeaderResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca12f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFEnumerateEventsResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFEnumerateStreamsResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFGotoResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca13e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFKeepReplayResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRenameReplayResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1480

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRequestEventDataResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca14d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRequestEventGroupDataResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFStartStreamingResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFStreamingResultBase______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca15c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_W4ELocalFileReplayResult____UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FGenericQueuedLocalFileRequest::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FGenericQueuedLocalFileRequest::IssueRequest'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::DownloadHeader'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::DownloadHeader'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca16a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StartStreaming'::__l50::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StartStreaming'::`50'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x50));
  }
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StopStreaming'::__l82::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StopStreaming'::`82'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyRefreshReplayInfo'::__l11::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyRefreshReplayInfo'::`11'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca17b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FLocalFileNetworkReplayStreamer::StartStreaming'::__l50::<lambda_2>::operator()'::__l12::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FLocalFileNetworkReplayStreamer::StartStreaming'::`50'::<lambda_2>::operator()'::`12'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca17f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddOrUpdateEvent'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddOrUpdateEvent'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyLoadNextChunk'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyLoadNextChunk'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::FlushCheckpointInternal'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::FlushCheckpointInternal'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca18b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::FlushStream'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::FlushStream'::`2'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca18f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>::IssueRequest'::__l2::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFDeleteFinishedStreamResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>::IssueRequest'::__l2::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFDownloadHeaderResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>::IssueRequest'::__l2::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFEnumerateEventsResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca19e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>::IssueRequest'::__l2::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFEnumerateStreamsResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1a30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::IssueRequest'::__l2::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFGotoResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1a80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>::IssueRequest'::__l2::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFKeepReplayResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1ad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>::IssueRequest'::__l2::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRenameReplayResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1b20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>::IssueRequest'::__l2::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRequestEventDataResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1b70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>::IssueRequest'::__l2::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRequestEventGroupDataResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1bc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>::IssueRequest'::__l2::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFStartStreamingResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1c10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>::IssueRequest'::__l2::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFStreamingResultBase______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1c60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>::IssueRequest'::__l2::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_W4ELocalFileReplayResult____UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1cb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGenericQueuedLocalFileRequest::IssueRequest'::__l2::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGenericQueuedLocalFileRequest::IssueRequest'::`2'::<lambda_2>,1,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1d00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RefreshHeader'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RefreshHeader'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1d40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::WriteHeader'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::WriteHeader'::`2'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1d80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::DownloadHeader'::__l5::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::DownloadHeader'::`5'::<lambda_2>,0,1>
        ::_vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1dd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l26::<lambda_2>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::`26'::<lambda_2>,0,1>
        ::_vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1e20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StartStreaming'::__l50::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StartStreaming'::`50'::<lambda_2>,0,1>
        ::_vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1e70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StopStreaming'::__l82::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StopStreaming'::`82'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1eb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyRefreshReplayInfo'::__l11::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyRefreshReplayInfo'::`11'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1ef0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l50::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::`50'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1f30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StartStreaming'::__l52::<lambda_3>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StartStreaming'::`52'::<lambda_3>,0,1>
        ::_vftable_;
  `FLocalFileNetworkReplayStreamer::StartStreaming'::__l52::<lambda_3>::~<lambda_3>
            ((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1f80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StopStreaming'::__l2::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StopStreaming'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca1fc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l50::<lambda_4>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::`50'::<lambda_4>,0,1>
        ::_vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca2010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StartStreaming'::__l52::<lambda_4>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StartStreaming'::`52'::<lambda_4>,0,1>
        ::_vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca2060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l52::<lambda_5>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::`52'::<lambda_5>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca20a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l52::<lambda_6>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::`52'::<lambda_6>,0,1>
        ::_vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca20f0

void * __thiscall
TGenericCachedLocalFileRequest<FGotoResult>::_scalar_deleting_destructor_
          (TGenericCachedLocalFileRequest<FGotoResult> *this,uint param_1)

{
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::
  ~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>
            ((TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca2130

void * __thiscall
TGenericCachedLocalFileRequest<FStreamingResultBase>::_scalar_deleting_destructor_
          (TGenericCachedLocalFileRequest<FStreamingResultBase> *this,uint param_1)

{
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>::
  ~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>
            ((TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_> *)
             this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca2170

void * __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>::
_scalar_deleting_destructor_
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>
           *this,uint param_1)

{
  ~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca21b0

void * __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>::
_scalar_deleting_destructor_
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_> *this
          ,uint param_1)

{
  ~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca21f0

void * __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>::
_scalar_deleting_destructor_
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>
           *this,uint param_1)

{
  ~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca2230

void * __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>::
_scalar_deleting_destructor_
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>
           *this,uint param_1)

{
  ~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca2270

void * __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::
_scalar_deleting_destructor_
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> *this,
          uint param_1)

{
  ~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca22b0

void * __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>::
_scalar_deleting_destructor_
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_> *this,
          uint param_1)

{
  ~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca22f0

void * __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>::
_scalar_deleting_destructor_
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_> *this,
          uint param_1)

{
  ~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca2330

void * __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>::
_scalar_deleting_destructor_
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>
           *this,uint param_1)

{
  ~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca2370

void * __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>::
_scalar_deleting_destructor_
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>
           *this,uint param_1)

{
  ~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca23b0

void * __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>::
_scalar_deleting_destructor_
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_> *this
          ,uint param_1)

{
  ~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca23f0

void * __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>::
_scalar_deleting_destructor_
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_> *this,
          uint param_1)

{
  ~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca2430

void * __thiscall
TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  ~TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca2470

void * __thiscall
TGraphTask<TLocalFileAsyncGraphTask<void>_>::_scalar_deleting_destructor_
          (TGraphTask<TLocalFileAsyncGraphTask<void>_> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca24d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TGenericCachedLocalFileRequest<FGotoResult>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TGenericCachedLocalFileRequest<FGotoResult>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca2510

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TGenericCachedLocalFileRequest<FStreamingResultBase>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TGenericCachedLocalFileRequest<FStreamingResultBase>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca2550

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca2590

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca25d0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca2610

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca2650

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca2690

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca26d0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca2710

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca2750

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca2790

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca27d0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca2810

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FGenericQueuedLocalFileRequest,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FGenericQueuedLocalFileRequest,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca2850

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLocalFileNetworkReplayStreamer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FLocalFileNetworkReplayStreamer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca2890

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FCachedFileRequest,SharedPointerInternals::DefaultDeleter<FCachedFileRequest>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FCachedFileRequest,SharedPointerInternals::DefaultDeleter<FCachedFileRequest>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca28d0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLargeMemoryReader,SharedPointerInternals::DefaultDeleter<FLargeMemoryReader>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FLargeMemoryReader,SharedPointerInternals::DefaultDeleter<FLargeMemoryReader>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca2910

void * __thiscall
FGenericQueuedLocalFileRequest::_scalar_deleting_destructor_
          (FGenericQueuedLocalFileRequest *this,uint param_1)

{
  ~FGenericQueuedLocalFileRequest(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca2950

void * __thiscall
FLocalFileNetworkReplayStreamer::_scalar_deleting_destructor_
          (FLocalFileNetworkReplayStreamer *this,uint param_1)

{
  ~FLocalFileNetworkReplayStreamer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca2990

void * __thiscall
FLocalFileStreamFArchive::_scalar_deleting_destructor_(FLocalFileStreamFArchive *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ca29e0

void * __thiscall
FQueuedLocalFileRequest::_scalar_deleting_destructor_(FQueuedLocalFileRequest *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Streamer).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeLocalFileNetworkReplayStreaming @ 146ca92f0

void __cdecl EmptyLinkFunctionForGeneratedCodeLocalFileNetworkReplayStreaming(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLocalFileNetworkReplayStreaming_init @ 146ca9300

void __cdecl EmptyLinkFunctionForGeneratedCodeLocalFileNetworkReplayStreaming_init(void)

{
  return;
}

// LexToString @ 146caf850

wchar_t * __cdecl LexToString(ELocalFileReplayResult param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"::Invalid";
  switch(param_1) {
  case Success:
    pwVar1 = L"ELocalFileReplayResult::Success";
    break;
  case InvalidReplayInfo:
    pwVar1 = L"ELocalFileReplayResult::InvalidReplayInfo";
    break;
  case StreamChunkIndexMismatch:
    pwVar1 = L"ELocalFileReplayResult::StreamChunkIndexMismatch";
    break;
  case DecompressBuffer:
    pwVar1 = L"ELocalFileReplayResult::DecompressBuffer";
    break;
  case CompressionNotSupported:
    pwVar1 = L"ELocalFileReplayResult::CompressionNotSupported";
    break;
  case DecryptBuffer:
    pwVar1 = L"ELocalFileReplayResult::DecryptBuffer";
    break;
  case EncryptionNotSupported:
    pwVar1 = L"ELocalFileReplayResult::EncryptionNotSupported";
    break;
  case EncryptBuffer:
    pwVar1 = L"ELocalFileReplayResult::EncryptBuffer";
    break;
  case CompressBuffer:
    pwVar1 = L"ELocalFileReplayResult::CompressBuffer";
    break;
  case InvalidName:
    pwVar1 = L"ELocalFileReplayResult::InvalidName";
    break;
  case FileWriter:
    pwVar1 = L"ELocalFileReplayResult::FileWriter";
    break;
  case Unknown:
    pwVar1 = L"ELocalFileReplayResult::Unknown";
    break;
  default:
    goto switchD_146caf874_default;
  }
  do {
    pwVar1 = pwVar1 + 1;
  } while (*pwVar1 != L':');
switchD_146caf874_default:
  return pwVar1 + 2;
}

// Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult @ 146cb45e0

UEnum * __cdecl Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult(void)

{
  if (Z_Registration_Info_UEnum_ELocalFileReplayResult.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELocalFileReplayResult.InnerSingleton,
               &Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ELocalFileReplayResult.InnerSingleton;
}

// IMPLEMENT_MODULE_LocalFileNetworkReplayStreaming @ 146cb4620

void __cdecl IMPLEMENT_MODULE_LocalFileNetworkReplayStreaming(void)

{
  return;
}

// OnReplayFinishedWriting'' @ 1503dfea0

void __cdecl
`dynamic_atexit_destructor_for_'FLocalFileNetworkReplayStreamer::OnReplayFinishedWriting__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FLocalFileNetworkReplayStreamer::OnReplayFinishedWriting._8_8_,
             FLocalFileNetworkReplayStreamer::OnReplayFinishedWriting._16_4_);
  if (FLocalFileNetworkReplayStreamer::OnReplayFinishedWriting._8_8_ != 0) {
    FMemory::Free((void *)FLocalFileNetworkReplayStreamer::OnReplayFinishedWriting._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &FLocalFileNetworkReplayStreamer::OnReplayFinishedWriting);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowEncryptedRecording'' @ 1503dfee0

void __cdecl
UE::Net::LocalFileReplay::_dynamic_atexit_destructor_for__CVarAllowEncryptedRecording__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowEncryptedRecording);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowLiveStreamDelete'' @ 1503dff00

void __cdecl
UE::Net::LocalFileReplay::_dynamic_atexit_destructor_for__CVarAllowLiveStreamDelete__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowLiveStreamDelete);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChunkUploadDelayInSeconds'' @ 1503dff20

void __cdecl
UE::Net::LocalFileReplay::_dynamic_atexit_destructor_for__CVarChunkUploadDelayInSeconds__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChunkUploadDelayInSeconds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxBufferedStreamChunks'' @ 1503dff40

void __cdecl
UE::Net::LocalFileReplay::_dynamic_atexit_destructor_for__CVarMaxBufferedStreamChunks__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxBufferedStreamChunks);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxCacheSize'' @ 1503dff60

void __cdecl UE::Net::LocalFileReplay::_dynamic_atexit_destructor_for__CVarMaxCacheSize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxCacheSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxFriendlySerializeBytes'' @ 1503dff80

void __cdecl
UE::Net::LocalFileReplay::_dynamic_atexit_destructor_for__CVarMaxFriendlySerializeBytes__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxFriendlySerializeBytes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMinLoadNextChunkDelaySeconds'' @ 1503dffa0

void __cdecl
UE::Net::LocalFileReplay::_dynamic_atexit_destructor_for__CVarMinLoadNextChunkDelaySeconds__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMinLoadNextChunkDelaySeconds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarReplayRecordingMinSpace'' @ 1503dffc0

void __cdecl
UE::Net::LocalFileReplay::_dynamic_atexit_destructor_for__CVarReplayRecordingMinSpace__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarReplayRecordingMinSpace);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultDemoSavePath'' @ 1503dffe0

void __cdecl
`FLocalFileNetworkReplayStreamer::GetDefaultDemoSavePath'::__l2::
_dynamic_atexit_destructor_for__DefaultDemoSavePath__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DefaultDemoSavePath.Data.AllocatorInstance.Data;
  if (DefaultDemoSavePath.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DefaultDemoSavePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterLocalFileReplayCustomVersion'' @ 1503e0000

void __cdecl _dynamic_atexit_destructor_for__GRegisterLocalFileReplayCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GRegisterLocalFileReplayCustomVersion.Key);
  return;
}

// `dynamic_atexit_destructor_for_'LogLocalFileReplay'' @ 1503e0020

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLocalFileReplay__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLocalFileReplay);
  return;
}

