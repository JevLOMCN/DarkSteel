// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 6

// TReadBitsBaseAdapter<1> @ 142664a00

TReadBitsBaseAdapter<1> * __thiscall
UE::ImageWrapper::Private::TiffImageWrapper::TReadBitsBaseAdapter<1>::TReadBitsBaseAdapter<1>
          (TReadBitsBaseAdapter<1> *this,tiff *param_1)

{
  ulong64 uVar1;
  
  this->LineSizeScr = 0;
  this->Width = 0;
  uVar1 = TIFFScanlineSize64(param_1);
  this->LineSizeScr = uVar1;
  TIFFGetField(param_1,0x100,&this->Width);
  return this;
}

// TReadBitsBaseAdapter<2> @ 142664a60

TReadBitsBaseAdapter<2> * __thiscall
UE::ImageWrapper::Private::TiffImageWrapper::TReadBitsBaseAdapter<2>::TReadBitsBaseAdapter<2>
          (TReadBitsBaseAdapter<2> *this,tiff *param_1)

{
  ulong64 uVar1;
  
  this->LineSizeScr = 0;
  this->Width = 0;
  uVar1 = TIFFScanlineSize64(param_1);
  this->LineSizeScr = uVar1;
  TIFFGetField(param_1,0x100,&this->Width);
  return this;
}

// TReadBitsBaseAdapter<4> @ 142664ac0

TReadBitsBaseAdapter<4> * __thiscall
UE::ImageWrapper::Private::TiffImageWrapper::TReadBitsBaseAdapter<4>::TReadBitsBaseAdapter<4>
          (TReadBitsBaseAdapter<4> *this,tiff *param_1)

{
  ulong64 uVar1;
  
  this->LineSizeScr = 0;
  this->Width = 0;
  uVar1 = TIFFScanlineSize64(param_1);
  this->LineSizeScr = uVar1;
  TIFFGetField(param_1,0x100,&this->Width);
  return this;
}

// Read @ 14268d1e0

uchar __thiscall
UE::ImageWrapper::Private::TiffImageWrapper::TReadBitsBaseAdapter<1>::Read
          (TReadBitsBaseAdapter<1> *this,TArrayView<unsigned_char_const_,__int64> *param_1,
          long64 param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  byte bVar3;
  
  uVar2 = param_2 % (longlong)(ulonglong)this->Width;
  bVar3 = 7 - ((byte)uVar2 & 7);
  pbVar1 = TArrayView<unsigned_char_const_,__int64>::operator[]
                     (param_1,(param_2 / (longlong)(ulonglong)this->Width & 0xffffffffU) *
                              this->LineSizeScr + ((uVar2 & 0xffffffff) >> 3));
  return ('\x01' << (bVar3 & 0x1f) & *pbVar1) >> (bVar3 & 0x1f);
}

// Read @ 14268d240

uchar __thiscall
UE::ImageWrapper::Private::TiffImageWrapper::TReadBitsBaseAdapter<2>::Read
          (TReadBitsBaseAdapter<2> *this,TArrayView<unsigned_char_const_,__int64> *param_1,
          long64 param_2)

{
  byte bVar1;
  byte *pbVar2;
  ulonglong uVar3;
  
  uVar3 = param_2 % (longlong)(ulonglong)this->Width;
  bVar1 = ('\x03' - ((byte)uVar3 & 3)) * '\x02';
  pbVar2 = TArrayView<unsigned_char_const_,__int64>::operator[]
                     (param_1,(param_2 / (longlong)(ulonglong)this->Width & 0xffffffffU) *
                              this->LineSizeScr + ((uVar3 & 0xffffffff) >> 2));
  return ('\x03' << (bVar1 & 0x1f) & *pbVar2) >> (bVar1 & 0x1f);
}

// Read @ 14268d2b0

uchar __thiscall
UE::ImageWrapper::Private::TiffImageWrapper::TReadBitsBaseAdapter<4>::Read
          (TReadBitsBaseAdapter<4> *this,TArrayView<unsigned_char_const_,__int64> *param_1,
          long64 param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  byte bVar3;
  
  uVar2 = param_2 % (longlong)(ulonglong)this->Width;
  bVar3 = ('\x01' - ((byte)uVar2 & 1)) * '\x04';
  pbVar1 = TArrayView<unsigned_char_const_,__int64>::operator[]
                     (param_1,(param_2 / (longlong)(ulonglong)this->Width & 0xffffffffU) *
                              this->LineSizeScr + ((uVar2 & 0xffffffff) >> 1));
  return ('\x0f' << (bVar3 & 0x1f) & *pbVar1) >> (bVar3 & 0x1f);
}

