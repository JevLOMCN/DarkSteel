// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FPlayInEditorLoadingScope @ 141855740

FPlayInEditorLoadingScope * __thiscall
UE::Core::Private::FPlayInEditorLoadingScope::FPlayInEditorLoadingScope
          (FPlayInEditorLoadingScope *this,int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  bVar1 = (*IsInAsyncLoadingThread)();
  if (bVar1) {
    bVar1 = IsInGameThread();
    iVar3 = PlayInEditorIDImpl::PRIVATE_GPlayInEditorID_ActualLoadingThread;
    if (bVar1) {
      iVar3 = PlayInEditorIDImpl::PRIVATE_GPlayInEditorID_GameThreadAsLoadingThread;
    }
  }
  else {
    bVar1 = IsInGameThread();
    iVar3 = PlayInEditorIDImpl::PRIVATE_GPlayInEditorID_GameThread;
    if (!bVar1) {
      iVar3 = -1;
    }
  }
  this->OldValue = iVar3;
  bVar1 = (*IsInAsyncLoadingThread)();
  if (!bVar1) {
    bVar1 = IsInGameThread();
    if (bVar1) {
      PlayInEditorIDImpl::PRIVATE_GPlayInEditorID_GameThread = param_1;
    }
    return this;
  }
  bVar1 = IsInGameThread();
  piVar2 = &PlayInEditorIDImpl::PRIVATE_GPlayInEditorID_GameThreadAsLoadingThread;
  if (!bVar1) {
    piVar2 = &PlayInEditorIDImpl::PRIVATE_GPlayInEditorID_ActualLoadingThread;
  }
  *piVar2 = param_1;
  return this;
}

// ~FPlayInEditorLoadingScope @ 141857920

void __thiscall
UE::Core::Private::FPlayInEditorLoadingScope::~FPlayInEditorLoadingScope
          (FPlayInEditorLoadingScope *this)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  
  iVar1 = this->OldValue;
  bVar2 = (*IsInAsyncLoadingThread)();
  if (bVar2) {
    bVar2 = IsInGameThread();
    piVar3 = &PlayInEditorIDImpl::PRIVATE_GPlayInEditorID_GameThreadAsLoadingThread;
    if (!bVar2) {
      piVar3 = &PlayInEditorIDImpl::PRIVATE_GPlayInEditorID_ActualLoadingThread;
    }
    *piVar3 = iVar1;
    return;
  }
  bVar2 = IsInGameThread();
  if (bVar2) {
    PlayInEditorIDImpl::PRIVATE_GPlayInEditorID_GameThread = iVar1;
  }
  return;
}

