// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// FGBufferItem @ 145d09eb0

FGBufferItem * __thiscall
FGBufferItem::FGBufferItem
          (FGBufferItem *this,EGBufferSlot param_1,EGBufferCompression param_2,
          EGBufferChecker param_3)

{
  longlong lVar1;
  undefined2 uStack_26;
  
  this->Packing[4].bIsValid = false;
  this->Packing[4].bFull = false;
  this->Packing[4].TargetIndex = -1;
  this->Packing[4].DstChannelIndex = -1;
  this->Packing[4].DstBitStart = -1;
  this->Packing[4].SrcChannelIndex = -1;
  this->Packing[4].SrcBitStart = -1;
  this->Packing[4].BitNum = -1;
  this->Packing[5].bIsValid = false;
  this->Packing[5].bFull = false;
  this->Packing[5].TargetIndex = -1;
  this->Packing[5].DstChannelIndex = -1;
  this->Packing[5].DstBitStart = -1;
  this->Packing[5].SrcChannelIndex = -1;
  this->Packing[5].SrcBitStart = -1;
  this->Packing[5].BitNum = -1;
  this->Packing[6].bIsValid = false;
  this->Packing[6].bFull = false;
  this->Packing[6].TargetIndex = -1;
  this->Packing[6].DstChannelIndex = -1;
  this->Packing[6].DstBitStart = -1;
  this->Packing[6].SrcChannelIndex = -1;
  this->Packing[6].SrcBitStart = -1;
  this->Packing[6].BitNum = -1;
  this->Packing[7].bIsValid = false;
  this->Packing[7].bFull = false;
  this->Packing[7].TargetIndex = -1;
  this->Packing[7].DstChannelIndex = -1;
  this->Packing[7].DstBitStart = -1;
  this->Packing[7].SrcChannelIndex = -1;
  this->Packing[7].SrcBitStart = -1;
  this->Packing[7].BitNum = -1;
  this->bIsValid = true;
  this->bQuantizationBias = false;
  this->BufferSlot = param_1;
  this->Compression = param_2;
  this->Checker = param_3;
  lVar1 = (ulonglong)CONCAT42(0xffffffff,uStack_26) << 0x10;
  this->Packing[0].bIsValid = (bool)(char)lVar1;
  this->Packing[0].bFull = (bool)(char)((ulonglong)lVar1 >> 8);
  *(short *)&this->Packing[0].field_0x2 = (short)((ulonglong)lVar1 >> 0x10);
  this->Packing[0].TargetIndex = (int)((ulonglong)lVar1 >> 0x20);
  this->Packing[0].DstChannelIndex = -1;
  this->Packing[0].DstBitStart = -1;
  this->Packing[0].SrcChannelIndex = -1;
  this->Packing[0].SrcBitStart = -1;
  this->Packing[0].BitNum = -1;
  this->Packing[1].bIsValid = (bool)(char)lVar1;
  this->Packing[1].bFull = (bool)(char)((ulonglong)lVar1 >> 8);
  *(short *)&this->Packing[1].field_0x2 = (short)((ulonglong)lVar1 >> 0x10);
  this->Packing[1].TargetIndex = (int)((ulonglong)lVar1 >> 0x20);
  this->Packing[1].DstChannelIndex = -1;
  this->Packing[1].DstBitStart = -1;
  this->Packing[1].SrcChannelIndex = -1;
  this->Packing[1].SrcBitStart = -1;
  this->Packing[1].BitNum = -1;
  this->Packing[2].bIsValid = (bool)(char)lVar1;
  this->Packing[2].bFull = (bool)(char)((ulonglong)lVar1 >> 8);
  *(short *)&this->Packing[2].field_0x2 = (short)((ulonglong)lVar1 >> 0x10);
  this->Packing[2].TargetIndex = (int)((ulonglong)lVar1 >> 0x20);
  this->Packing[2].DstChannelIndex = -1;
  this->Packing[2].DstBitStart = -1;
  this->Packing[2].SrcChannelIndex = -1;
  this->Packing[2].SrcBitStart = -1;
  this->Packing[2].BitNum = -1;
  this->Packing[3].bIsValid = (bool)(char)lVar1;
  this->Packing[3].bFull = (bool)(char)((ulonglong)lVar1 >> 8);
  *(short *)&this->Packing[3].field_0x2 = (short)((ulonglong)lVar1 >> 0x10);
  this->Packing[3].TargetIndex = (int)((ulonglong)lVar1 >> 0x20);
  this->Packing[3].DstChannelIndex = -1;
  this->Packing[3].DstBitStart = -1;
  this->Packing[3].SrcChannelIndex = -1;
  this->Packing[3].SrcBitStart = -1;
  this->Packing[3].BitNum = -1;
  return this;
}

