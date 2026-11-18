// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 6

// DoTaskWork @ 142a6a3c0

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
FAsyncTask<FPakCompressedReaderPolicy<FPakNoEncryption>::FPakUncompressTask>::DoTaskWork
          (FAsyncTask<FPakCompressedReaderPolicy<FPakNoEncryption>::FPakUncompressTask> *this)

{
  void *_Dst;
  
  FCompression::UncompressMemory
            ((this->Task).CompressionFormat,(this->Task).UncompressedBuffer,
             (longlong)(this->Task).UncompressedSize,(this->Task).CompressedBuffer,
             (longlong)(this->Task).CompressedSize,COMPRESS_NoFlags,0);
  _Dst = (this->Task).CopyOut;
  if (_Dst != (void *)0x0) {
    memcpy(_Dst,(this->Task).UncompressedBuffer + (this->Task).CopyOffset,(this->Task).CopyLength);
    return;
  }
  return;
}

// DoTaskWork @ 142a6a430

void __thiscall
FAsyncTask<FPakCompressedReaderPolicy<FPakSimpleEncryption>::FPakUncompressTask>::DoTaskWork
          (FAsyncTask<FPakCompressedReaderPolicy<FPakSimpleEncryption>::FPakUncompressTask> *this)

{
  FPakCompressedReaderPolicy<FPakSimpleEncryption>::FPakUncompressTask::DoWork(&this->Task);
  return;
}

// MarkAsCanceled @ 142a84040

void __thiscall
FAsyncTask<FPakCompressedReaderPolicy<FPakNoEncryption>::FPakUncompressTask>::MarkAsCanceled
          (FAsyncTask<FPakCompressedReaderPolicy<FPakNoEncryption>::FPakUncompressTask> *this)

{
  return;
}

// MarkAsCanceled @ 142a84050

void __thiscall
FAsyncTask<FPakCompressedReaderPolicy<FPakSimpleEncryption>::FPakUncompressTask>::MarkAsCanceled
          (FAsyncTask<FPakCompressedReaderPolicy<FPakSimpleEncryption>::FPakUncompressTask> *this)

{
  return;
}

// TryAbandonTask @ 142aa5430

bool __thiscall
FAsyncTask<FPakCompressedReaderPolicy<FPakNoEncryption>::FPakUncompressTask>::TryAbandonTask
          (FAsyncTask<FPakCompressedReaderPolicy<FPakNoEncryption>::FPakUncompressTask> *this)

{
  return false;
}

// TryAbandonTask @ 142aa5440

bool __thiscall
FAsyncTask<FPakCompressedReaderPolicy<FPakSimpleEncryption>::FPakUncompressTask>::TryAbandonTask
          (FAsyncTask<FPakCompressedReaderPolicy<FPakSimpleEncryption>::FPakUncompressTask> *this)

{
  return false;
}

