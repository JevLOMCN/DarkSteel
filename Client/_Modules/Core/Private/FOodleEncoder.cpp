// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// CompressBlock @ 14148e690

bool __thiscall
UE::CompressedBuffer::Private::FOodleEncoder::CompressBlock
          (FOodleEncoder *this,TMemoryView<void> *param_1,TMemoryView<void_const_> *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FOodleDataCompression::Compress
                    (param_1->Data,param_1->Size,param_2->Data,param_2->Size,this->Compressor,
                     this->CompressionLevel,false,0);
  uVar2 = uVar1;
  if (param_1->Size < uVar1) {
    uVar2 = param_1->Size;
  }
  param_1->Size = uVar2;
  return 0 < (longlong)uVar1;
}

// CompressBlockBound @ 14148e6f0

ulong64 __thiscall
UE::CompressedBuffer::Private::FOodleEncoder::CompressBlockBound
          (FOodleEncoder *this,ulong64 param_1)

{
  ulong64 uVar1;
  
  uVar1 = FOodleDataCompression::CompressedBufferSizeNeeded(param_1);
  return uVar1;
}

// GetCompressionLevel @ 141498670

uchar __thiscall
UE::CompressedBuffer::Private::FOodleEncoder::GetCompressionLevel(FOodleEncoder *this)

{
  return this->CompressionLevel;
}

// GetCompressor @ 141498680

uchar __thiscall UE::CompressedBuffer::Private::FOodleEncoder::GetCompressor(FOodleEncoder *this)

{
  return this->Compressor;
}

// GetMethod @ 1414995b0

EMethod __thiscall UE::CompressedBuffer::Private::FOodleEncoder::GetMethod(FOodleEncoder *this)

{
  return Oodle;
}

