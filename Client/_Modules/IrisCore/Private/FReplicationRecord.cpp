// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetInfoForIndex @ 1443039d0

FRecordInfo * __thiscall
UE::Net::Private::FReplicationRecord::GetInfoForIndex(FReplicationRecord *this,ushort param_1)

{
  if (param_1 != 0xffff) {
    return (FRecordInfo *)
           ((this->RecordInfos).Storage.AllocatorInstance.Data +
           ((ulonglong)((((uint)param_1 - (uint)this->FrontIndex) + 0xffff) % 0xffff) +
            (ulonglong)(this->RecordInfos).Tail & (ulonglong)(this->RecordInfos).IndexMask) * 0x10);
  }
  return (FRecordInfo *)0x0;
}

// PopRecord @ 14430a840

ushort __thiscall UE::Net::Private::FReplicationRecord::PopRecord(FReplicationRecord *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  
  if ((this->Record).Head == (this->Record).Tail) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Record.Count()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationRecord.h"
                       ,0xc5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  if ((this->Record).Head == (this->Record).Tail) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Offset < Count()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x4c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  uVar1 = (this->Record).Tail;
  uVar4 = *(ushort *)
           ((this->Record).Storage.AllocatorInstance.Data +
           (ulonglong)((this->Record).IndexMask & uVar1) * 2);
  if ((this->Record).Head == uVar1) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1638566698149740322>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0xde,"Count() > 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  else {
    (this->Record).Tail = uVar1 + 1;
  }
  return uVar4;
}

// PushInfo @ 14430c4e0

ushort __thiscall
UE::Net::Private::FReplicationRecord::PushInfo(FReplicationRecord *this,FRecordInfo *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  ushort uVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)((this->RecordInfos).Head - (this->RecordInfos).Tail);
  if (0xfffe < uVar9) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentInfoCount < MaxReplicationRecordCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationRecord.h"
                       ,0xd1,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
  }
  uVar7 = (ulonglong)((this->RecordInfos).Head - (this->RecordInfos).Tail) + 1;
  if ((ulonglong)(longlong)(this->RecordInfos).Storage.ArrayNum < uVar7) {
    TResizableCircularQueue<UE::Net::Private::FReplicationRecord::FRecordInfo,TSizedDefaultAllocator<32>_>
    ::SetCapacity(&this->RecordInfos,uVar7);
  }
  uVar1 = (this->RecordInfos).Head;
  uVar8 = (ulonglong)((this->RecordInfos).IndexMask & uVar1);
  (this->RecordInfos).Head = uVar1 + 1;
  pFVar2 = (this->RecordInfos).Storage.AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + uVar8 * 0x10 + 8) = 0;
  *(undefined8 *)(pFVar2 + uVar8 * 0x10) = 0;
  uVar4 = *(undefined8 *)&param_1->field_0x8;
  *(ulong64 *)(pFVar2 + uVar8 * 0x10) = (param_1->ChangeMaskOrPtr).ChangeMaskOrPointer;
  *(undefined8 *)(pFVar2 + uVar8 * 0x10 + 8) = uVar4;
  *(undefined2 *)(pFVar2 + uVar8 * 0x10 + 0xc) = 0xffff;
  uVar9 = this->FrontIndex + uVar9;
  return (short)uVar9 + (short)(uVar9 / 0xffff);
}

