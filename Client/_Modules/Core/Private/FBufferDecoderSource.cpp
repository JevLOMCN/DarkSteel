// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// Read @ 1414ac1c0

bool __thiscall
UE::CompressedBuffer::Private::FBufferDecoderSource::Read
          (FBufferDecoderSource *this,ulong64 param_1,TMemoryView<void> *param_2)

{
  ulong64 uVar1;
  TMemoryView<void> local_18;
  
  uVar1 = FCompositeBuffer::GetSize(this->Buffer);
  if (param_2->Size + param_1 <= uVar1) {
    local_18.Data = param_2->Data;
    local_18.Size = param_2->Size;
    FCompositeBuffer::CopyTo(this->Buffer,&local_18,param_1);
    return true;
  }
  return false;
}

// ReadOrView @ 1414ac9f0

TMemoryView<void_const_> * __thiscall
UE::CompressedBuffer::Private::FBufferDecoderSource::ReadOrView
          (FBufferDecoderSource *this,TMemoryView<void_const_> *__return_storage_ptr__,
          ulong64 param_1,ulong64 param_2,FDecoderContext *param_3)

{
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::CompressedBuffer::Private::FBufferDecoderSource::ReadOrView'::__l2::<lambda_1>,FUniqueBuffer,unsigned___int64>
             ::Call;
  FCompositeBuffer::ViewOrCopyRange
            (this->Buffer,__return_storage_ptr__,param_1,param_2,&param_3->CompressedBlock,
             (TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_18);
  return __return_storage_ptr__;
}

// ReadToComposite @ 1414acb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCompositeBuffer * __thiscall
UE::CompressedBuffer::Private::FBufferDecoderSource::ReadToComposite
          (FBufferDecoderSource *this,FCompositeBuffer *__return_storage_ptr__,ulong64 param_1,
          ulong64 param_2)

{
  FCompositeBuffer *this_00;
  undefined1 auStack_48 [32];
  FCompositeBuffer local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  this_00 = FCompositeBuffer::Mid(this->Buffer,&local_28,param_1,param_2);
  FCompositeBuffer::MakeOwned(this_00,__return_storage_ptr__);
  FCompositeBuffer::~FCompositeBuffer(&local_28);
  return __return_storage_ptr__;
}

// SupportsParallelRead @ 1414b2200

bool __thiscall
UE::CompressedBuffer::Private::FBufferDecoderSource::SupportsParallelRead
          (FBufferDecoderSource *this)

{
  return true;
}

