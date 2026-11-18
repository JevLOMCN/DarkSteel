// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 6

// GetOptions @ 146bff0d0

IMediaOptions * __thiscall
FMediaPlayerLifecycleManagerDelegateOpenRequest::GetOptions
          (FMediaPlayerLifecycleManagerDelegateOpenRequest *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsStale(&this->OptionsObject,true,false);
  if (bVar1) {
    return (IMediaOptions *)0x0;
  }
  return this->Options;
}

// GetPlayerFactory @ 146bff1c0

IMediaPlayerFactory * __thiscall
FMediaPlayerLifecycleManagerDelegateOpenRequest::GetPlayerFactory
          (FMediaPlayerLifecycleManagerDelegateOpenRequest *this)

{
  return this->PlayerFactory;
}

// GetPlayerOptions @ 146bff890

FMediaPlayerOptions * __thiscall
FMediaPlayerLifecycleManagerDelegateOpenRequest::GetPlayerOptions
          (FMediaPlayerLifecycleManagerDelegateOpenRequest *this)

{
  FMediaPlayerOptions *pFVar1;
  
  pFVar1 = &(this->PlayerOptions).TypedValue;
  if ((this->PlayerOptions).bIsSet == false) {
    pFVar1 = (FMediaPlayerOptions *)0x0;
  }
  return pFVar1;
}

// GetUrl @ 146c014a0

FString * __thiscall
FMediaPlayerLifecycleManagerDelegateOpenRequest::GetUrl
          (FMediaPlayerLifecycleManagerDelegateOpenRequest *this)

{
  return &this->Url;
}

// WillCreateNewPlayer @ 146c117c0

bool __thiscall
FMediaPlayerLifecycleManagerDelegateOpenRequest::WillCreateNewPlayer
          (FMediaPlayerLifecycleManagerDelegateOpenRequest *this)

{
  return this->bWillCreatePlayer;
}

// WillUseNewResources @ 146c117d0

bool __thiscall
FMediaPlayerLifecycleManagerDelegateOpenRequest::WillUseNewResources
          (FMediaPlayerLifecycleManagerDelegateOpenRequest *this,uint param_1)

{
  return (this->NewResources & param_1) != 0;
}

