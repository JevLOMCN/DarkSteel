// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FDerivedAudioDataCompressor @ 14761d690

FDerivedAudioDataCompressor * __thiscall
FDerivedAudioDataCompressor::FDerivedAudioDataCompressor
          (FDerivedAudioDataCompressor *this,USoundWave *param_1,FName param_2,FName param_3,
          FPlatformAudioCookOverrides *param_4,ITargetPlatform *param_5)

{
  FAudioCookInputs *pFVar1;
  
  this->_padding_ = (longlong)&___7FDerivedAudioDataCompressor__6B_;
  pFVar1 = ::operator_new(0x38);
  if (pFVar1 == (FAudioCookInputs *)0x0) {
    (this->CookInputs).Ptr = (FAudioCookInputs *)0x0;
  }
  else {
    pFVar1 = FAudioCookInputs::FAudioCookInputs(pFVar1,param_1,param_2,param_3,param_4,param_5);
    (this->CookInputs).Ptr = pFVar1;
  }
  return this;
}

// Build @ 14762b610

bool __thiscall
FDerivedAudioDataCompressor::Build
          (FDerivedAudioDataCompressor *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  
  if (CpuChannel->Enabled < 0) {
    return 0 < param_1->ArrayNum;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId2238,"FDerivedAudioDataCompressor::Build",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDerivedData.cpp"
             ,0x8be);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2238);
  iVar1 = param_1->ArrayNum;
  FCpuProfilerTrace::OutputEndEvent();
  return 0 < iVar1;
}

// GetDebugContextString @ 14763bed0

FString * __thiscall
FDerivedAudioDataCompressor::GetDebugContextString
          (FDerivedAudioDataCompressor *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&((this->CookInputs).Ptr)->SoundName);
  return __return_storage_ptr__;
}

// GetPluginName @ 14763eee0

wchar_t * __thiscall FDerivedAudioDataCompressor::GetPluginName(FDerivedAudioDataCompressor *this)

{
  return L"Audio";
}

// GetPluginSpecificCacheKeySuffix @ 14763eef0

FString * __thiscall
FDerivedAudioDataCompressor::GetPluginSpecificCacheKeySuffix
          (FDerivedAudioDataCompressor *this,FString *__return_storage_ptr__)

{
  FAudioCookInputs *pFVar1;
  IAudioFormat *pIVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar1 = (this->CookInputs).Ptr;
  pIVar2 = pFVar1->Compressor;
  if (pIVar2 != (IAudioFormat *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,pFVar1->BaseFormat);
  }
  pFVar1 = (this->CookInputs).Ptr;
  if (((((pFVar1->CompressedDataGuid).D == 0 && (pFVar1->CompressedDataGuid).C == 0) &&
       (pFVar1->CompressedDataGuid).B == 0) && (pFVar1->CompressedDataGuid).A == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CookInputs->CompressedDataGuid.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDerivedData.cpp"
                         ,0x8ab,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar3)();
    return pFVar5;
  }
  pFVar5 = ::FName::ToString(&((this->CookInputs).Ptr)->HashedFormat,&local_18);
  ::FString::ToUpper(pFVar5,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FGuid::AppendString(&((this->CookInputs).Ptr)->CompressedDataGuid,&local_38,Digits);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s_%04X_%s%s%d");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetVersionString @ 147640b90

wchar_t * __thiscall
FDerivedAudioDataCompressor::GetVersionString(FDerivedAudioDataCompressor *this)

{
  return L"64e45415311549acbee28698853aa3a4";
}

// IsBuildThreadsafe @ 147648820

bool __thiscall FDerivedAudioDataCompressor::IsBuildThreadsafe(FDerivedAudioDataCompressor *this)

{
  IAudioFormat *pIVar1;
  undefined1 uVar2;
  
  if ((AllowAsyncCompression != 0) &&
     (pIVar1 = ((this->CookInputs).Ptr)->Compressor, pIVar1 != (IAudioFormat *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147648839. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)*pIVar1)();
    return (bool)uVar2;
  }
  return false;
}

