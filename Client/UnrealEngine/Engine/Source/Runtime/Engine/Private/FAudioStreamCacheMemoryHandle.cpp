// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FAudioStreamCacheMemoryHandle @ 1476865f0

FAudioStreamCacheMemoryHandle * __thiscall
FAudioStreamCacheMemoryHandle::FAudioStreamCacheMemoryHandle
          (FAudioStreamCacheMemoryHandle *this,FName param_1,ulong64 param_2)

{
  FStreamingManagerCollection *this_00;
  IAudioStreamingManager *pIVar1;
  
  this->FeatureName = param_1;
  this->MemoryUseInBytes = param_2;
  if (param_2 != 0) {
    this_00 = IStreamingManager::Get();
    pIVar1 = FStreamingManagerCollection::GetAudioStreamingManager(this_00);
    (**(code **)(*(longlong *)pIVar1 + 0xf0))(pIVar1,this);
  }
  return this;
}

// ~FAudioStreamCacheMemoryHandle @ 14768a0f0

void __thiscall
FAudioStreamCacheMemoryHandle::~FAudioStreamCacheMemoryHandle(FAudioStreamCacheMemoryHandle *this)

{
  FStreamingManagerCollection *this_00;
  IAudioStreamingManager *pIVar1;
  
  if (this->MemoryUseInBytes != 0) {
    this_00 = IStreamingManager::Get();
    pIVar1 = FStreamingManagerCollection::GetAudioStreamingManager(this_00);
                    /* WARNING: Could not recover jumptable at 0x00014768a122. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pIVar1 + 0xf8))(pIVar1,this,*(code **)(*(longlong *)pIVar1 + 0xf8));
    return;
  }
  return;
}

// ResetMemoryUseInBytes @ 1476c4580

void __thiscall
FAudioStreamCacheMemoryHandle::ResetMemoryUseInBytes
          (FAudioStreamCacheMemoryHandle *this,ulong64 param_1)

{
  FStreamingManagerCollection *pFVar1;
  IAudioStreamingManager *pIVar2;
  
  if (this->MemoryUseInBytes != 0) {
    pFVar1 = IStreamingManager::Get();
    pIVar2 = FStreamingManagerCollection::GetAudioStreamingManager(pFVar1);
    (**(code **)(*(longlong *)pIVar2 + 0xf8))(pIVar2,this);
  }
  this->MemoryUseInBytes = param_1;
  if (param_1 != 0) {
    pFVar1 = IStreamingManager::Get();
    pIVar2 = FStreamingManagerCollection::GetAudioStreamingManager(pFVar1);
    (**(code **)(*(longlong *)pIVar2 + 0xf0))(pIVar2,this);
  }
  return;
}

