// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 2

// GetHandle @ 1465583d0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::GetHandle
          (TCommonDelegateInstanceState<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
           *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 1465583f0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

