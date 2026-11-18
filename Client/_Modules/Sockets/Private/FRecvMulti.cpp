// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 2

// FRecvMulti @ 14310ae10

FRecvMulti * __thiscall
FRecvMulti::FRecvMulti
          (FRecvMulti *this,ISocketSubsystem *param_1,int param_2,int param_3,
          ERecvMultiFlags param_4)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulong64 uVar3;
  ulonglong *puVar4;
  FRecvData *pFVar5;
  FRecvData *pFVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)param_2;
  this->_padding_ = (longlong)&___7FRecvMulti__6B_;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar7;
  uVar2 = SUB168(ZEXT816(0x20) * auVar1,0);
  if (SUB168(ZEXT816(0x20) * auVar1,8) != 0) {
    uVar2 = 0xffffffffffffffff;
  }
  uVar3 = uVar2 + 8;
  if (0xfffffffffffffff7 < uVar2) {
    uVar3 = 0xffffffffffffffff;
  }
  puVar4 = operator_new__(uVar3);
  if (puVar4 == (ulonglong *)0x0) {
    pFVar6 = (FRecvData *)0x0;
  }
  else {
    *puVar4 = uVar7;
    pFVar6 = (FRecvData *)(puVar4 + 1);
    pFVar5 = pFVar6;
    if (param_2 != 0) {
      do {
        (pFVar5->Source).Object = (FInternetAddr *)0x0;
        (pFVar5->Source).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar5->Data = (uchar *)0x0;
        pFVar5->BytesReadPtr = (uint *)0x0;
        uVar7 = uVar7 - 1;
        pFVar5 = pFVar5 + 1;
      } while (uVar7 != 0);
    }
  }
  (this->Packets).Ptr = pFVar6;
  this->MaxNumPackets = param_2;
  this->MaxPacketSize = param_3;
  this->NumPackets = 0;
  return this;
}

// CountBytes @ 14310d800

void __thiscall FRecvMulti::CountBytes(FRecvMulti *this,FArchive *param_1)

{
  longlong lVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0x20,0x20);
  lVar1 = (longlong)this->MaxNumPackets << 5;
                    /* WARNING: Could not recover jumptable at 0x00014310d83c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,lVar1,lVar1);
  return;
}

