// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MoviePlayer
// Functions: 8

// ~IGameMoviePlayer @ 146c77750

void __thiscall IGameMoviePlayer::~IGameMoviePlayer(IGameMoviePlayer *this)

{
  *this = (IGameMoviePlayer)&___7IGameMoviePlayer__6B_;
  return;
}

// BroadcastMovieClipFinished @ 146c787b0

void __thiscall
IGameMoviePlayer::BroadcastMovieClipFinished(IGameMoviePlayer *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            (**(code **)((longlong)*this + 0xa8))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_38);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// ForceCompletion @ 146c7c020

void __thiscall IGameMoviePlayer::ForceCompletion(IGameMoviePlayer *this)

{
  return;
}

// IsStartupMoviePlaying @ 146c7f230

bool __thiscall IGameMoviePlayer::IsStartupMoviePlaying(IGameMoviePlayer *this)

{
  return false;
}

// Resume @ 146c802a0

void __thiscall IGameMoviePlayer::Resume(IGameMoviePlayer *this)

{
  return;
}

// SetIsPlayOnBlockingEnabled @ 146c80370

void __thiscall IGameMoviePlayer::SetIsPlayOnBlockingEnabled(IGameMoviePlayer *this,bool param_1)

{
  return;
}

// SetViewportDPIScale @ 146c80450

void __thiscall IGameMoviePlayer::SetViewportDPIScale(IGameMoviePlayer *this,float param_1)

{
  return;
}

// Suspend @ 146c81380

void __thiscall IGameMoviePlayer::Suspend(IGameMoviePlayer *this)

{
  return;
}

