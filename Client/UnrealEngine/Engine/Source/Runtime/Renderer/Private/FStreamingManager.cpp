// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// GetAndClearModifiedResources @ 144813480

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
* __thiscall
Nanite::FStreamingManager::GetAndClearModifiedResources
          (FStreamingManager *this,
          TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
          *__return_storage_ptr__)

{
  undefined1 *_Src;
  TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
  *pTVar1;
  
  pTVar1 = &this->ModifiedResources;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  if (__return_storage_ptr__ != pTVar1) {
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)pTVar1;
    *(undefined8 *)pTVar1 = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x8 =
         *(undefined4 *)&(this->ModifiedResources).field_0x8;
    _Src = &(this->ModifiedResources).field_0x10;
    *(undefined4 *)&__return_storage_ptr__->field_0xc =
         *(undefined4 *)&(this->ModifiedResources).field_0xc;
    *(undefined8 *)&(this->ModifiedResources).field_0x8 = 0;
    if (&__return_storage_ptr__->field_0x10 != _Src) {
      if (*(longlong *)&(this->ModifiedResources).field_0x20 == 0) {
        memmove(&__return_storage_ptr__->field_0x10,_Src,0x10);
      }
      if (*(void **)&__return_storage_ptr__->field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&__return_storage_ptr__->field_0x20);
      }
      *(undefined8 *)&__return_storage_ptr__->field_0x20 =
           *(undefined8 *)&(this->ModifiedResources).field_0x20;
      *(undefined8 *)&(this->ModifiedResources).field_0x20 = 0;
      *(undefined4 *)&__return_storage_ptr__->field_0x28 =
           *(undefined4 *)&(this->ModifiedResources).field_0x28;
      *(undefined4 *)&__return_storage_ptr__->field_0x2c =
           *(undefined4 *)&(this->ModifiedResources).field_0x2c;
      *(undefined8 *)&(this->ModifiedResources).field_0x28 = 0;
    }
    *(undefined4 *)&__return_storage_ptr__->field_0x30 =
         *(undefined4 *)&(this->ModifiedResources).field_0x30;
    *(undefined4 *)&__return_storage_ptr__->field_0x34 =
         *(undefined4 *)&(this->ModifiedResources).field_0x34;
    *(undefined4 *)&(this->ModifiedResources).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->ModifiedResources).field_0x34 = 0;
  }
  if (*(longlong *)&(this->ModifiedResources).field_0x40 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x38 =
         *(undefined4 *)&(this->ModifiedResources).field_0x38;
  }
  if (*(void **)&__return_storage_ptr__->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&__return_storage_ptr__->field_0x40);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x40 =
       *(undefined8 *)&(this->ModifiedResources).field_0x40;
  *(undefined8 *)&(this->ModifiedResources).field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 =
       *(undefined4 *)&(this->ModifiedResources).field_0x48;
  *(undefined4 *)&(this->ModifiedResources).field_0x48 = 0;
  return __return_storage_ptr__;
}

