// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 10

// TRingBuffer<unsigned_char> @ 1431b7a50

TRingBuffer<unsigned_char> * __thiscall
TRingBuffer<unsigned_char>::TRingBuffer<unsigned_char>
          (TRingBuffer<unsigned_char> *this,uint param_1)

{
  uchar *_Dst;
  
  this->BufferDataSize = param_1;
  _Dst = operator_new__((ulonglong)param_1);
  this->Data = _Dst;
  memset(_Dst,0,(ulonglong)this->BufferDataSize);
  this->NumDataAvailable = 0;
  this->DataIndex = 0;
  this->TotalNumDataPushed = 0;
  return this;
}

// ~TRingBuffer<unsigned_char> @ 1431bd6f0

void __thiscall
TRingBuffer<unsigned_char>::~TRingBuffer<unsigned_char>(TRingBuffer<unsigned_char> *this)

{
  operator_delete__(this->Data);
  return;
}

// Dequeue @ 1431d4980

bool __thiscall TRingBuffer<unsigned_char>::Dequeue(TRingBuffer<unsigned_char> *this,uchar *param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (this->NumDataAvailable != 0) {
    *param_1 = this->Data
               [(ulonglong)((this->DataIndex - this->NumDataAvailable) + this->BufferDataSize) %
                (ulonglong)this->BufferDataSize];
    uVar2 = this->NumDataAvailable - 1;
    uVar1 = this->BufferDataSize;
    if (uVar2 < this->BufferDataSize) {
      uVar1 = uVar2;
    }
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar1;
    }
    this->NumDataAvailable = uVar2;
    return true;
  }
  return false;
}

// Empty @ 1431d9c40

void __thiscall TRingBuffer<unsigned_char>::Empty(TRingBuffer<unsigned_char> *this)

{
  memset(this->Data,0,(ulonglong)this->BufferDataSize);
  this->NumDataAvailable = 0;
  this->DataIndex = 0;
  this->TotalNumDataPushed = 0;
  return;
}

// Enqueue @ 1431da2b0

void __thiscall TRingBuffer<unsigned_char>::Enqueue(TRingBuffer<unsigned_char> *this,uchar *param_1)

{
  uint uVar1;
  uint uVar2;
  
  this->Data[this->DataIndex] = *param_1;
  uVar1 = this->BufferDataSize;
  this->TotalNumDataPushed = this->TotalNumDataPushed + 1;
  uVar2 = this->NumDataAvailable + 1;
  this->DataIndex = (this->DataIndex + 1) % uVar1;
  if (uVar2 < uVar1) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1;
  }
  this->NumDataAvailable = uVar2;
  return;
}

// Peek @ 1431ec1c0

bool __thiscall TRingBuffer<unsigned_char>::Peek(TRingBuffer<unsigned_char> *this,uchar *param_1)

{
  if (this->NumDataAvailable != 0) {
    *param_1 = this->Data
               [(ulonglong)((this->DataIndex - this->NumDataAvailable) + this->BufferDataSize) %
                (ulonglong)this->BufferDataSize];
    return true;
  }
  return false;
}

// Dequeue @ 143249210

uint __thiscall
TRingBuffer<unsigned_char>::Dequeue(TRingBuffer<unsigned_char> *this,uchar *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = this->NumDataAvailable;
  uVar4 = this->BufferDataSize;
  uVar3 = uVar1;
  if (*param_2 < uVar1) {
    uVar3 = *param_2;
  }
  uVar2 = (ulonglong)((this->DataIndex - uVar1) + uVar4) % (ulonglong)uVar4;
  uVar4 = uVar4 - (int)uVar2;
  uVar1 = uVar3;
  if (uVar4 < uVar3) {
    uVar1 = uVar4;
  }
  memcpy(param_1,this->Data + uVar2,(ulonglong)uVar1);
  if (uVar4 < uVar3) {
    memcpy(param_1 + uVar4,this->Data,(ulonglong)(uVar3 - uVar4));
  }
  this->NumDataAvailable = this->NumDataAvailable - uVar3;
  return uVar3;
}

// Enqueue @ 14324af90

void __thiscall
TRingBuffer<unsigned_char>::Enqueue(TRingBuffer<unsigned_char> *this,uchar *param_1,uint *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if (this->BufferDataSize < *param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BufLen <= BufferDataSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\RingBuffer.h"
                       ,0xcc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = this->BufferDataSize - this->DataIndex;
  uVar1 = *param_2;
  if (uVar4 < *param_2) {
    uVar1 = uVar4;
  }
  memcpy(this->Data + this->DataIndex,param_1,(ulonglong)uVar1);
  if (uVar4 < *param_2) {
    memcpy(this->Data,param_1 + uVar4,(ulonglong)(*param_2 - uVar4));
  }
  uVar1 = this->BufferDataSize;
  this->DataIndex = (this->DataIndex + *param_2) % uVar1;
  this->TotalNumDataPushed = this->TotalNumDataPushed + (ulonglong)*param_2;
  uVar4 = this->NumDataAvailable + *param_2;
  if (uVar4 < uVar1) {
    uVar1 = uVar4;
  }
  uVar4 = 0;
  if (uVar1 != 0) {
    uVar4 = uVar1;
  }
  this->NumDataAvailable = uVar4;
  return;
}

// GetShaHash @ 143257520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TRingBuffer<unsigned_char>::GetShaHash(TRingBuffer<unsigned_char> *this,FSHAHash *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_c8 [32];
  FSHA1 local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  uVar2 = this->BufferDataSize - this->DataIndex;
  uVar1 = this->NumDataAvailable;
  if (uVar2 < this->NumDataAvailable) {
    uVar1 = uVar2;
  }
  FSHA1::FSHA1(&local_a8);
  FSHA1::Update(&local_a8,
                this->Data +
                (ulonglong)((this->DataIndex - this->NumDataAvailable) + this->BufferDataSize) %
                (ulonglong)this->BufferDataSize,(ulonglong)uVar1);
  if (uVar1 < this->NumDataAvailable) {
    FSHA1::Update(&local_a8,this->Data,(ulonglong)(this->NumDataAvailable - uVar1));
  }
  FSHA1::Final(&local_a8);
  FSHA1::GetHash(&local_a8,param_1->Hash);
  FSHA1::~FSHA1(&local_a8);
  return;
}

// Peek @ 14325d430

uint __thiscall
TRingBuffer<unsigned_char>::Peek(TRingBuffer<unsigned_char> *this,uchar *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = this->NumDataAvailable;
  uVar4 = this->BufferDataSize;
  uVar3 = uVar1;
  if (*param_2 < uVar1) {
    uVar3 = *param_2;
  }
  uVar2 = (ulonglong)((this->DataIndex - uVar1) + uVar4) % (ulonglong)uVar4;
  uVar4 = uVar4 - (int)uVar2;
  uVar1 = uVar3;
  if (uVar4 < uVar3) {
    uVar1 = uVar4;
  }
  memcpy(param_1,this->Data + uVar2,(ulonglong)uVar1);
  if (uVar4 < uVar3) {
    memcpy(param_1 + uVar4,this->Data,(ulonglong)(uVar3 - uVar4));
  }
  return uVar3;
}

