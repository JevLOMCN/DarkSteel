// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FChaosVDMemoryWriter @ 14373cdb0

FChaosVDMemoryWriter * __thiscall
Chaos::VisualDebugger::FChaosVDMemoryWriter::FChaosVDMemoryWriter
          (FChaosVDMemoryWriter *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          TSharedRef<Chaos::VisualDebugger::FChaosVDSerializableNameTable,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  this->_padding_ = 0;
  this->_padding_ = (longlong)param_1;
  FArchiveState::SetIsSaving((FArchiveState *)this,true);
  (**(code **)(this->_padding_ + 0x108))(this,0);
  this->_padding_ = (longlong)&___7FChaosVDMemoryWriter_VisualDebugger_Chaos__6B_;
  (this->NameTableInstance).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->NameTableInstance).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// operator<< @ 143742320

FArchive * __thiscall
Chaos::VisualDebugger::FChaosVDMemoryWriter::operator<<(FChaosVDMemoryWriter *this,FName *param_1)

{
  FPlatformRWLock *SRWLock;
  longlong lVar1;
  longlong *plVar2;
  FChaosVDSerializableNameTable *pFVar3;
  code *pcVar4;
  ulong64 uVar5;
  bool bVar6;
  int iVar7;
  FArchive *pFVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  undefined1 *puVar12;
  ulong64 local_res8;
  ulong64 local_res18 [2];
  
  if ((this->_padding_ & 1) == 0) {
    local_res18[0] =
         FChaosVDSerializableNameTable::AddNameToTable((this->NameTableInstance).Object,*param_1);
    plVar2 = (longlong *)this->_padding_;
    if (*plVar2 + 8U <= (ulonglong)plVar2[1]) {
      *plVar2 = *plVar2 + 8;
      return (FArchive *)this;
    }
    if ((this->_padding_ & 0x10000) != 0) {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res18);
      return (FArchive *)this;
    }
    (**(code **)(this->_padding_ + 0x188))(this,local_res18,8);
    return (FArchive *)this;
  }
  plVar2 = (longlong *)this->_padding_;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
  local_res8 = 0;
  if ((ulonglong *)plVar2[1] < (ulonglong *)*plVar2 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_res8);
    }
  }
  else {
    local_res8 = *(ulonglong *)*plVar2;
    *plVar2 = *plVar2 + 8;
  }
  uVar5 = local_res8;
  pFVar3 = (this->NameTableInstance).Object;
  if (local_res8 != 0) {
    SRWLock = &pFVar3->NamesByIDLock;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x1c,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FArchive *)(*pcVar4)();
      return pFVar8;
    }
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    if (*(int *)&(pFVar3->NamesByID).field_0x8 != *(int *)&(pFVar3->NamesByID).field_0x34) {
      puVar12 = *(undefined1 **)&(pFVar3->NamesByID).field_0x40;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = &(pFVar3->NamesByID).field_0x38;
      }
      iVar7 = *(int *)(puVar12 +
                      ((uVar5 >> 0x20) * 0x17 + uVar5 &
                      (ulonglong)(*(int *)&(pFVar3->NamesByID).field_0x48 - 1)) * 4);
      if (iVar7 != -1) {
        do {
          lVar1 = *(longlong *)&pFVar3->NamesByID + (longlong)iVar7 * 0x18;
          if (*(ulonglong *)(*(longlong *)&pFVar3->NamesByID + (longlong)iVar7 * 0x18) == uVar5) {
            FVar9 = (FName)(lVar1 + 8);
            if (lVar1 == 0) {
              FVar9 = FVar11;
            }
            FVar11 = FVar10;
            if (FVar9 != (FName)0x0) {
              FVar11 = *(FName *)FVar9;
            }
            break;
          }
          iVar7 = *(int *)(lVar1 + 0x10);
        } while (iVar7 != -1);
      }
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
  }
  *param_1 = FVar11;
  return (FArchive *)this;
}

