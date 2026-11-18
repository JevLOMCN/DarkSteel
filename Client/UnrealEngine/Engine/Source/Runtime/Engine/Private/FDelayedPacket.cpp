// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FDelayedPacket @ 147fa3c40

FDelayedPacket * __thiscall
FDelayedPacket::FDelayedPacket
          (FDelayedPacket *this,uchar *param_1,int param_2,FOutPacketTraits *param_3)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  undefined3 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined2 uVar9;
  int iVar10;
  
  piVar1 = &(this->Data).ArrayNum;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  this->SizeBits = param_2;
  bVar3 = param_3->bAllowCompression;
  uVar4 = *(undefined3 *)&param_3->field_0x1;
  uVar5 = param_3->NumAckBits;
  uVar6 = param_3->NumBunchBits;
  bVar7 = param_3->bIsKeepAlive;
  bVar8 = param_3->bIsCompressed;
  uVar9 = *(undefined2 *)&param_3->field_0xe;
  this->SendTime = 0.0;
  this->DelayFrameCount = 0;
  this->bSent = false;
  iVar10 = (int)(param_2 + 7 + (param_2 + 7 >> 0x1f & 7U)) >> 3;
  (this->Traits).bAllowCompression = bVar3;
  *(undefined3 *)&(this->Traits).field_0x1 = uVar4;
  (this->Traits).NumAckBits = uVar5;
  (this->Traits).NumBunchBits = uVar6;
  (this->Traits).bIsKeepAlive = bVar7;
  (this->Traits).bIsCompressed = bVar8;
  *(undefined2 *)&(this->Traits).field_0xe = uVar9;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar10,(ForAnyElementType *)this,piVar1,piVar2);
  memcpy((this->Data).AllocatorInstance.Data,param_1,(longlong)iVar10);
  return this;
}

