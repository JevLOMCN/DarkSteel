// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// ~FDirectoryReadTaskData @ 142ada900

void __thiscall
UE::AssetDataGather::Private::FDirectoryReadTaskData::~FDirectoryReadTaskData
          (FDirectoryReadTaskData *this)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  FTaskBase *pFVar5;
  FTaskEvent FVar6;
  code *pcVar7;
  bool bVar8;
  
  if ((this->UnblockRead != (FTaskEvent)0x0) &&
     (*(char *)((longlong)this->UnblockRead + 0xd0) == '\0')) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("UnblockRead.IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGathererPrivate.h"
                       ,0x96,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (this->OutstandingReads != 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutstandingReads == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGathererPrivate.h"
                       ,0x97,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar5 = (this->LastScheduledReadTask).Pimpl.Reference;
  if (pFVar5 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar5->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  FVar6 = this->UnblockRead;
  if (FVar6 != (FTaskEvent)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)FVar6 + 0x30);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (*(code *)**(undefined8 **)FVar6)(FVar6,1);
    }
  }
  return;
}

