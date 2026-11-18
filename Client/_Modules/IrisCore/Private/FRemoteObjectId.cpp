// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// GetGlobalized @ 1443304f0

FRemoteObjectId __thiscall FRemoteObjectId::GetGlobalized(FRemoteObjectId *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  FRemoteObjectId FVar4;
  ulonglong uVar5;
  FRemoteObjectId_u_0 in_RDX;
  
  uVar1 = (this->field0_0x0).Id;
  uVar5 = uVar1 >> 0x36;
  if ((uint)(uVar1 >> 0x36) == 0x3fd) {
    if (FRemoteServerId::GlobalServerId.Id == 0x3fd) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GlobalServerId.Id != (uint32)ERemoteServerIdConstants::Local",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteObjectTypes.h"
                         ,0x9d,
                         L"Unable to convert Local server id to global. Global server id hasn\'t been initialized yet."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar4.field0_0x0 = (FRemoteObjectId_u_0)(*pcVar2)();
        return (FRemoteObjectId)FVar4.field0_0x0;
      }
    }
    uVar5 = (ulonglong)FRemoteServerId::GlobalServerId.Id;
  }
  *(ulonglong *)in_RDX = uVar5 << 0x36 | uVar1 & 0x3ffffffffffffe;
  if (0x3ff < (uint)uVar5) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2664264158983225613>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteObjectTypes.h"
                       ,0x10d,"(uint64_t)InServerId.Id <= MAX_REMOTE_OBJECT_SERVER_ID");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4.field0_0x0 = (FRemoteObjectId_u_0)(*pcVar2)();
      return (FRemoteObjectId)FVar4.field0_0x0;
    }
  }
  return (FRemoteObjectId)in_RDX;
}

