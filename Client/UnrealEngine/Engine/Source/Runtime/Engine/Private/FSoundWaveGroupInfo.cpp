// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FSoundWaveGroupInfo @ 14761dfc0

FSoundWaveGroupInfo * __thiscall
`FAudioDevice::HandleAudioMemoryInfo'::__l2::FSoundWaveGroupInfo::FSoundWaveGroupInfo
          (void *this,FSoundWaveGroupInfo *param_1)

{
  *(Type *)this = (param_1->ResourceSize).ResourceSizeMode;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
            ((TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
              *)((longlong)this + 8),&(param_1->ResourceSize).DedicatedSystemMemoryBytesMap);
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
            ((TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
              *)((longlong)this + 0x58),&(param_1->ResourceSize).DedicatedVideoMemoryBytesMap);
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
            ((TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
              *)((longlong)this + 0xa8),&(param_1->ResourceSize).UnknownMemoryBytesMap);
  *(Type *)((longlong)this + 0xf8) = (param_1->CompressedResourceSize).ResourceSizeMode;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
            ((TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
              *)((longlong)this + 0x100),
             &(param_1->CompressedResourceSize).DedicatedSystemMemoryBytesMap);
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
            ((TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
              *)((longlong)this + 0x150),
             &(param_1->CompressedResourceSize).DedicatedVideoMemoryBytesMap);
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
            ((TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
              *)((longlong)this + 0x1a0),&(param_1->CompressedResourceSize).UnknownMemoryBytesMap);
  return this;
}

