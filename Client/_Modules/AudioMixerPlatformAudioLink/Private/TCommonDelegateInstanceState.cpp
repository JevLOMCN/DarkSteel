// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerPlatformAudioLink
// Functions: 2

// GetHandle @ 148d2bca0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 148d2bcc0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

