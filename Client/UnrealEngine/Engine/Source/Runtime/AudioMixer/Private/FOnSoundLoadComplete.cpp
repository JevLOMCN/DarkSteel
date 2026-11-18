// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// ExecuteIfBound @ 1464fdd30

bool __thiscall
FOnSoundLoadComplete::ExecuteIfBound(FOnSoundLoadComplete *this,USoundWave *param_1,bool param_2)

{
  bool bVar1;
  USoundWave *local_18;
  undefined1 local_10;
  
  bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)this);
  if (bVar1) {
    local_18 = param_1;
    local_10 = param_2;
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_18);
    return true;
  }
  return false;
}

