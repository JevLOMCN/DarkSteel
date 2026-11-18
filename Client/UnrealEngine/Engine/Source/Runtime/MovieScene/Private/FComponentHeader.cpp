// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// GetValuePtr @ 1460d1030

void * __thiscall UE::MovieScene::FComponentHeader::GetValuePtr(FComponentHeader *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if (((this->Sizeof == '\0') || (this->Components == (uchar *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsTag() && Components != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x221,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return this->Components + (int)((uint)this->Sizeof * param_1);
}

// ~FComponentHeader @ 14611d480

void __thiscall UE::MovieScene::FComponentHeader::~FComponentHeader(FComponentHeader *this)

{
  IComponentDebuggingTypedPtr *pIVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7FComponentHeader_MovieScene_UE__6B_;
  pIVar1 = this->DebugComponents;
  if (pIVar1 != (IComponentDebuggingTypedPtr *)0x0) {
    if (pIVar1[-1].Ptr == (void *)0x0) {
      operator_delete__(&pIVar1[-1].Ptr,8);
    }
    else {
      (**(code **)pIVar1->_padding_)(pIVar1,3);
    }
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->ReadWriteLock);
  if (BVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014611d4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ReadWriteLock);
    return;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

