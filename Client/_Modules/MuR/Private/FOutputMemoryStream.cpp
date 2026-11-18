// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 5

// FOutputMemoryStream @ 14ab5ecc0

FOutputMemoryStream * __thiscall
UE::Mutable::Private::FOutputMemoryStream::FOutputMemoryStream
          (FOutputMemoryStream *this,ulong64 param_1)

{
  long64 *plVar1;
  
  this->_padding_ = (longlong)&___7FOutputMemoryStream_Private_Mutable_UE__6B_;
  (this->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  plVar1 = &(this->Buffer).ArrayMax;
  (this->Buffer).ArrayNum = 0;
  *plVar1 = 0;
  if (param_1 != 0) {
    if ((longlong)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(param_1);
    }
    Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,param_1,&(this->Buffer).AllocatorInstance,0,plVar1);
  }
  return this;
}

// GetBuffer @ 14ab718f0

uchar * __thiscall UE::Mutable::Private::FOutputMemoryStream::GetBuffer(FOutputMemoryStream *this)

{
  if ((this->Buffer).ArrayNum != 0) {
    return (uchar *)(this->Buffer).AllocatorInstance.Data;
  }
  return (uchar *)0x0;
}

// GetBufferSize @ 14ab71910

int __thiscall UE::Mutable::Private::FOutputMemoryStream::GetBufferSize(FOutputMemoryStream *this)

{
  return (int)(this->Buffer).ArrayNum;
}

// Reset @ 14ab84e70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Mutable::Private::FOutputMemoryStream::Reset(FOutputMemoryStream *this)

{
  TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNum(&this->Buffer,0,No);
  return;
}

// Write @ 14ab8e600

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Mutable::Private::FOutputMemoryStream::Write
          (FOutputMemoryStream *this,void *param_1,ulong64 param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (this->Buffer).ArrayNum;
    TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNum(&this->Buffer,lVar1 + param_2,No);
    memcpy((this->Buffer).AllocatorInstance.Data + lVar1,param_1,param_2);
  }
  return;
}

