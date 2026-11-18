// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 11

// FRollingHash @ 1431bd050

FRollingHash * __thiscall FRollingHash::FRollingHash(FRollingHash *this)

{
  uchar *_Dst;
  
  this->WindowSize = 0;
  this->HashState = 0;
  this->NumBytesConsumed = 0;
  (this->WindowData).BufferDataSize = 0;
  _Dst = operator_new__(0);
  (this->WindowData).Data = _Dst;
  memset(_Dst,0,(ulonglong)(this->WindowData).BufferDataSize);
  (this->WindowData).NumDataAvailable = 0;
  (this->WindowData).DataIndex = 0;
  (this->WindowData).TotalNumDataPushed = 0;
  return this;
}

// FRollingHash @ 1431bd0a0

FRollingHash * __thiscall FRollingHash::FRollingHash(FRollingHash *this,uint param_1)

{
  uchar *_Dst;
  
  this->WindowSize = param_1;
  this->HashState = 0;
  this->NumBytesConsumed = 0;
  (this->WindowData).BufferDataSize = param_1;
  _Dst = operator_new__((ulonglong)param_1);
  (this->WindowData).Data = _Dst;
  memset(_Dst,0,(ulonglong)(this->WindowData).BufferDataSize);
  (this->WindowData).NumDataAvailable = 0;
  (this->WindowData).DataIndex = 0;
  (this->WindowData).TotalNumDataPushed = 0;
  return this;
}

// Clear @ 1431cd170

void __thiscall FRollingHash::Clear(FRollingHash *this)

{
  uint uVar1;
  
  uVar1 = (this->WindowData).BufferDataSize;
  this->HashState = 0;
  this->NumBytesConsumed = 0;
  memset((this->WindowData).Data,0,(ulonglong)uVar1);
  (this->WindowData).NumDataAvailable = 0;
  (this->WindowData).DataIndex = 0;
  (this->WindowData).TotalNumDataPushed = 0;
  return;
}

// ConsumeByte @ 1431d3270

void __thiscall FRollingHash::ConsumeByte(FRollingHash *this,uchar *param_1)

{
  ulong64 *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (this->WindowSize <= this->NumBytesConsumed) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBytesConsumed < WindowSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchHash.cpp"
                       ,0x6f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->NumBytesConsumed = this->NumBytesConsumed + 1;
  (this->WindowData).Data[(this->WindowData).DataIndex] = *param_1;
  uVar2 = (this->WindowData).BufferDataSize;
  puVar1 = &(this->WindowData).TotalNumDataPushed;
  *puVar1 = *puVar1 + 1;
  uVar5 = (this->WindowData).NumDataAvailable + 1;
  (this->WindowData).DataIndex = ((this->WindowData).DataIndex + 1) % uVar2;
  if (uVar5 < uVar2) {
    uVar2 = uVar5;
  }
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar5 = uVar2;
  }
  uVar6 = this->HashState;
  (this->WindowData).NumDataAvailable = uVar5;
  uVar6 = uVar6 >> 0x3f | uVar6 << 1;
  this->HashState = uVar6;
  this->HashState = uVar6 ^ FRollingHashConst::HashTable[*param_1];
  return;
}

// ConsumeBytes @ 1431d3320

void __thiscall FRollingHash::ConsumeBytes(FRollingHash *this,uchar *param_1,uint *param_2)

{
  ulong64 *puVar1;
  byte *pbVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  if (*param_2 != 0) {
    do {
      if ((this->WindowSize <= this->NumBytesConsumed) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumBytesConsumed < WindowSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchHash.cpp"
                             ,0x6f,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this->NumBytesConsumed = this->NumBytesConsumed + 1;
      (this->WindowData).Data[(this->WindowData).DataIndex] = param_1[uVar8];
      puVar1 = &(this->WindowData).TotalNumDataPushed;
      *puVar1 = *puVar1 + 1;
      uVar7 = (this->WindowData).BufferDataSize;
      uVar5 = (this->WindowData).NumDataAvailable + 1;
      (this->WindowData).DataIndex = ((this->WindowData).DataIndex + 1) % uVar7;
      if (uVar5 < uVar7) {
        uVar7 = uVar5;
      }
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = uVar7;
      }
      uVar6 = this->HashState >> 0x3f | this->HashState << 1;
      this->HashState = uVar6;
      (this->WindowData).NumDataAvailable = uVar5;
      pbVar2 = param_1 + uVar8;
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      this->HashState = uVar6 ^ FRollingHashConst::HashTable[*pbVar2];
    } while (uVar7 < *param_2);
  }
  return;
}

// GetHashForDataSet @ 1431e0b80

ulong64 __cdecl FRollingHash::GetHashForDataSet(uchar *param_1,uint param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar3 = (ulonglong)param_2;
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar2 = (uVar2 >> 0x3f | uVar2 << 1) ^ FRollingHashConst::HashTable[bVar1];
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return uVar2;
}

// GetNumDataNeeded @ 1431e15b0

uint __thiscall FRollingHash::GetNumDataNeeded(FRollingHash *this)

{
  return this->WindowSize - this->NumBytesConsumed;
}

// GetWindowData @ 1431e3f60

TRingBuffer<unsigned_char> * __thiscall FRollingHash::GetWindowData(FRollingHash *this)

{
  return &this->WindowData;
}

// GetWindowHash @ 1431e3f70

ulong64 __thiscall FRollingHash::GetWindowHash(FRollingHash *this)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if (this->NumBytesConsumed == this->WindowSize) {
    return this->HashState;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("NumBytesConsumed == WindowSize",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchHash.cpp"
                     ,0x2d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return this->HashState;
}

// GetWindowSize @ 1431e3fc0

uint __thiscall FRollingHash::GetWindowSize(FRollingHash *this)

{
  return this->WindowSize;
}

// RollForward @ 1431f1760

void __thiscall FRollingHash::RollForward(FRollingHash *this,uchar *param_1)

{
  uint *puVar1;
  ulong64 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  ulonglong uVar8;
  byte bVar9;
  
  if (this->NumBytesConsumed != this->WindowSize) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBytesConsumed == WindowSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchHash.cpp"
                       ,0x4b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (this->WindowData).NumDataAvailable;
  bVar9 = 0;
  if (uVar5 != 0) {
    uVar6 = (this->WindowData).BufferDataSize;
    bVar9 = (this->WindowData).Data
            [(ulonglong)(((this->WindowData).DataIndex - uVar5) + uVar6) % (ulonglong)uVar6];
    if (uVar5 - 1 < uVar6) {
      uVar6 = uVar5 - 1;
    }
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = uVar6;
    }
    (this->WindowData).NumDataAvailable = uVar5;
  }
  (this->WindowData).Data[(this->WindowData).DataIndex] = *param_1;
  puVar1 = &(this->WindowData).DataIndex;
  *puVar1 = *puVar1 + 1;
  puVar2 = &(this->WindowData).TotalNumDataPushed;
  *puVar2 = *puVar2 + 1;
  uVar5 = (this->WindowData).BufferDataSize;
  uVar8 = this->HashState;
  uVar6 = (this->WindowData).NumDataAvailable + 1;
  (this->WindowData).DataIndex = (this->WindowData).DataIndex % uVar5;
  if (uVar6 < uVar5) {
    uVar5 = uVar6;
  }
  uVar6 = 0;
  if (uVar5 != 0) {
    uVar6 = uVar5;
  }
  uVar5 = this->WindowSize;
  (this->WindowData).NumDataAvailable = uVar6;
  bVar7 = (byte)uVar5 & 0x3f;
  uVar8 = (uVar8 >> 0x3f | uVar8 << 1) ^
          (FRollingHashConst::HashTable[bVar9] << bVar7 |
          FRollingHashConst::HashTable[bVar9] >> 0x40 - bVar7);
  this->HashState = uVar8;
  this->HashState = uVar8 ^ FRollingHashConst::HashTable[*param_1];
  return;
}

