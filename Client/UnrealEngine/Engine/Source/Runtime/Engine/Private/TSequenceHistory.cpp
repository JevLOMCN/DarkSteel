// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// TSequenceHistory<256> @ 147fa33f0

TSequenceHistory<256> * __thiscall
TSequenceHistory<256>::TSequenceHistory<256>(TSequenceHistory<256> *this)

{
  this->Storage[0] = 0;
  this->Storage[1] = 0;
  this->Storage[2] = 0;
  this->Storage[3] = 0;
  this->Storage[4] = 0;
  this->Storage[5] = 0;
  this->Storage[6] = 0;
  this->Storage[7] = 0;
  return this;
}

// IsDelivered @ 147fe2610

bool __thiscall TSequenceHistory<256>::IsDelivered(TSequenceHistory<256> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (0xff < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\Util\\SequenceHistory.h"
                       ,0x72,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (this->Storage[param_1 >> 5] >> ((byte)param_1 & 0x1f) & 1) != 0;
}

// Reset @ 147fee040

void __thiscall TSequenceHistory<256>::Reset(TSequenceHistory<256> *this)

{
  this->Storage[0] = 0;
  this->Storage[1] = 0;
  this->Storage[2] = 0;
  this->Storage[3] = 0;
  this->Storage[4] = 0;
  this->Storage[5] = 0;
  this->Storage[6] = 0;
  this->Storage[7] = 0;
  return;
}

// AddDeliveryStatus @ 14801f880

void __thiscall TSequenceHistory<256>::AddDeliveryStatus(TSequenceHistory<256> *this,bool param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = this->Storage[0];
  uVar2 = this->Storage[2];
  this->Storage[0] = uVar1 * 2 | (uint)param_1;
  uVar3 = this->Storage[1];
  this->Storage[1] = uVar3 * 2 | uVar1 >> 0x1f;
  this->Storage[2] = uVar3 >> 0x1f | uVar2 * 2;
  uVar1 = this->Storage[3];
  uVar3 = this->Storage[4];
  this->Storage[3] = uVar1 * 2 | uVar2 >> 0x1f;
  uVar2 = this->Storage[5];
  this->Storage[4] = uVar3 * 2 | uVar1 >> 0x1f;
  uVar1 = this->Storage[6];
  this->Storage[5] = uVar2 * 2 | uVar3 >> 0x1f;
  this->Storage[6] = uVar1 * 2 | uVar2 >> 0x1f;
  this->Storage[7] = uVar1 >> 0x1f | this->Storage[7] * 2;
  return;
}

// Read @ 14804ce40

void __thiscall
TSequenceHistory<256>::Read(TSequenceHistory<256> *this,FBitReader *param_1,ulong64 param_2)

{
  uint *puVar1;
  ulong64 uVar2;
  
  uVar2 = 8;
  if (param_2 < 8) {
    uVar2 = param_2;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    puVar1 = *(uint **)param_1->_padding_;
    if ((uint *)((undefined8 *)param_1->_padding_)[1] < puVar1 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,this,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,this->Storage);
      }
    }
    else {
      this->Storage[0] = *puVar1;
      *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
    }
    this = (TSequenceHistory<256> *)((longlong)this + 4);
  }
  return;
}

// Write @ 148071b70

void __thiscall
TSequenceHistory<256>::Write(TSequenceHistory<256> *this,FBitWriter *param_1,ulong64 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint local_res18 [2];
  
  uVar3 = 8;
  if (param_2 < 8) {
    uVar3 = param_2;
  }
  uVar2 = 0;
  if (uVar3 != 0) {
    do {
      plVar1 = (longlong *)param_1->_padding_;
      local_res18[0] = this->Storage[uVar2];
      if ((ulonglong)plVar1[1] < *plVar1 + 4U) {
        if ((param_1->_padding_ & 0x10000) == 0) {
          (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res18,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res18);
        }
      }
      else {
        *plVar1 = *plVar1 + 4;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return;
}

