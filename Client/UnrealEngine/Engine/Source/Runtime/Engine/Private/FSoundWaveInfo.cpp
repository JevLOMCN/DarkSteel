// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FSoundWaveInfo @ 14761e060

FSoundWaveInfo * __thiscall
`FAudioDevice::HandleAudioMemoryInfo'::__l2::FSoundWaveInfo::FSoundWaveInfo
          (void *this,FSoundWaveInfo *param_1)

{
  *(USoundWave **)this = param_1->SoundWave;
  *(Type *)((longlong)this + 8) = (param_1->ResourceSize).ResourceSizeMode;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
            ((TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
              *)((longlong)this + 0x10),&(param_1->ResourceSize).DedicatedSystemMemoryBytesMap);
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
            ((TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
              *)((longlong)this + 0x60),&(param_1->ResourceSize).DedicatedVideoMemoryBytesMap);
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
            ((TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
              *)((longlong)this + 0xb0),&(param_1->ResourceSize).UnknownMemoryBytesMap);
  *(undefined8 *)((longlong)this + 0x100) = 0;
  *(FScriptContainerElement **)((longlong)this + 0x100) =
       (param_1->SoundGroupName).Data.AllocatorInstance.Data;
  (param_1->SoundGroupName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((longlong)this + 0x108) = (param_1->SoundGroupName).Data.ArrayNum;
  *(int *)((longlong)this + 0x10c) = (param_1->SoundGroupName).Data.ArrayMax;
  (param_1->SoundGroupName).Data.ArrayNum = 0;
  (param_1->SoundGroupName).Data.ArrayMax = 0;
  *(float *)((longlong)this + 0x110) = param_1->Duration;
  *(ELoadingType *)((longlong)this + 0x114) = param_1->LoadingType;
  *(uint *)((longlong)this + 0x118) = param_1->MaxUnevictableSizeInCache;
  *(uint *)((longlong)this + 0x11c) = param_1->PotentialTotalSizeInCache;
  return this;
}

