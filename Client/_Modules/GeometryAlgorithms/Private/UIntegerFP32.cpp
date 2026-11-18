// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 7

// UIntegerFP32<100> @ 1495a2c90

UIntegerFP32<100> * __thiscall
gte::UIntegerFP32<100>::UIntegerFP32<100>(UIntegerFP32<100> *this,int param_1)

{
  this->mNumBits = param_1;
  this->mSize = ((int)(param_1 + -1 + (param_1 + -1 >> 0x1f & 0x1fU)) >> 5) + 1;
  return this;
}

// UIntegerFP32<100> @ 1495a2cb0

UIntegerFP32<100> * __thiscall
gte::UIntegerFP32<100>::UIntegerFP32<100>(UIntegerFP32<100> *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    this->mSize = 1;
    uVar2 = param_1 >> 1 | param_1;
    uVar2 = uVar2 >> 2 | uVar2;
    uVar2 = uVar2 >> 4 | uVar2;
    uVar2 = uVar2 >> 8 | uVar2;
    iVar1 = gsTrailingBitTable[(-param_1 & param_1) * 0x77cb531 >> 0x1b];
    this->mNumBits = (gsLeadingBitTable[(uVar2 >> 0x10 | uVar2) * 0x7c4acdd >> 0x1b] - iVar1) + 1;
    (this->mBits)._Elems[0] = param_1 >> ((byte)iVar1 & 0x1f);
    return this;
  }
  this->mNumBits = 0;
  this->mSize = 0;
  return this;
}

// UIntegerFP32<100> @ 1495a2d40

UIntegerFP32<100> * __thiscall gte::UIntegerFP32<100>::UIntegerFP32<100>(UIntegerFP32<100> *this)

{
  this->mNumBits = 0;
  this->mSize = 0;
  return this;
}

// UIntegerFP32<100> @ 1495a2d50

UIntegerFP32<100> * __thiscall
gte::UIntegerFP32<100>::UIntegerFP32<100>(UIntegerFP32<100> *this,ulong64 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (param_1 == 0) {
    this->mNumBits = 0;
    this->mSize = 0;
  }
  else {
    iVar1 = GetLeadingBit(param_1);
    uVar2 = (uint)param_1;
    if (uVar2 == 0) {
      uVar2 = (uint)(param_1 >> 0x20);
      if (uVar2 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = gsTrailingBitTable[(-uVar2 & uVar2) * 0x77cb531 >> 0x1b] + 0x20;
      }
    }
    else {
      iVar3 = gsTrailingBitTable[(-uVar2 & uVar2) * 0x77cb531 >> 0x1b];
    }
    iVar1 = iVar1 - iVar3;
    uVar4 = param_1 >> ((byte)iVar3 & 0x3f);
    this->mNumBits = iVar1 + 1;
    iVar1 = ((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) + 1;
    this->mSize = iVar1;
    (this->mBits)._Elems[0] = (uint)uVar4;
    if (1 < iVar1) {
      (this->mBits)._Elems[1] = (uint)(uVar4 >> 0x20);
      return this;
    }
  }
  return this;
}

// operator= @ 1495ab280

UIntegerFP32<100> * __thiscall
gte::UIntegerFP32<100>::operator=(UIntegerFP32<100> *this,UIntegerFP32<100> *param_1)

{
  int iVar1;
  
  this->mNumBits = param_1->mNumBits;
  iVar1 = param_1->mSize;
  this->mSize = iVar1;
  memmove(&this->mBits,&param_1->mBits,(longlong)iVar1 << 2);
  param_1->mNumBits = 0;
  param_1->mSize = 0;
  return this;
}

// operator= @ 1495ab2d0

UIntegerFP32<100> * __thiscall
gte::UIntegerFP32<100>::operator=(UIntegerFP32<100> *this,UIntegerFP32<100> *param_1)

{
  int iVar1;
  
  this->mNumBits = param_1->mNumBits;
  iVar1 = param_1->mSize;
  this->mSize = iVar1;
  memmove(&this->mBits,&param_1->mBits,(longlong)iVar1 << 2);
  return this;
}

// SetNumBits @ 1495c9d50

void __thiscall gte::UIntegerFP32<100>::SetNumBits(UIntegerFP32<100> *this,uint param_1)

{
  this->mNumBits = param_1;
  this->mSize = (param_1 - 1 >> 5) + 1;
  return;
}

