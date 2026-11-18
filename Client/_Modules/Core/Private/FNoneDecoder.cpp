// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// DecompressToComposite @ 1414909c0

FCompositeBuffer * __thiscall
UE::CompressedBuffer::Private::FNoneDecoder::DecompressToComposite
          (FNoneDecoder *this,FCompositeBuffer *__return_storage_ptr__,FDecoderContext *param_1,
          FDecoderSource *param_2,FHeader *param_3,TMemoryView<void_const_> *param_4,ulong64 param_5
          ,ulong64 param_6)

{
  ulonglong uVar1;
  
  if (param_3->Method == None) {
    uVar1 = param_3->TotalRawSize;
    if (((param_5 <= uVar1) && (param_6 <= uVar1 - param_5)) &&
       (param_3->TotalCompressedSize == uVar1 + 0x40)) {
      (**(code **)((longlong)*param_2 + 0x18))(param_2,__return_storage_ptr__,param_5 + 0x40);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->Segments).AllocatorInstance.SecondaryData =
       (ForElementType<FSharedBuffer>)0x0;
  (__return_storage_ptr__->Segments).ArrayNum = 0;
  (__return_storage_ptr__->Segments).ArrayMax = 1;
  return __return_storage_ptr__;
}

// GetHeaderSize @ 1414994f0

ulong64 __thiscall
UE::CompressedBuffer::Private::FNoneDecoder::GetHeaderSize(FNoneDecoder *this,FHeader *param_1)

{
  return 0x40;
}

// TryDecompressTo @ 1414b6330

bool __thiscall
UE::CompressedBuffer::Private::FNoneDecoder::TryDecompressTo
          (FNoneDecoder *this,FDecoderContext *param_1,FDecoderSource *param_2,FHeader *param_3,
          TMemoryView<void_const_> *param_4,ulong64 param_5,TMemoryView<void> *param_6,
          ECompressedBufferDecompressFlags param_7)

{
  ulonglong uVar1;
  undefined1 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_3->Method == None) {
    uVar1 = param_3->TotalRawSize;
    if (((param_5 <= uVar1) && (param_6->Size <= uVar1 - param_5)) &&
       (param_3->TotalCompressedSize == uVar1 + 0x40)) {
      local_18 = *(undefined4 *)&param_6->Data;
      uStack_14 = *(undefined4 *)((longlong)&param_6->Data + 4);
      uStack_10 = (undefined4)param_6->Size;
      uStack_c = *(undefined4 *)((longlong)&param_6->Size + 4);
      uVar2 = (**(code **)((longlong)*param_2 + 8))(param_2,param_5 + 0x40,&local_18);
      return (bool)uVar2;
    }
  }
  return false;
}

