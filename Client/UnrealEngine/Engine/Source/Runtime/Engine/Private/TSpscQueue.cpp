// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ~TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory> @ 147689bf0

void __thiscall
TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::
~TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>
          (TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory> *this)

{
  atomic<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*> aVar1;
  atomic<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*> aVar2;
  uchar *puVar3;
  atomic<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*> aVar4;
  bool bVar5;
  
  aVar1 = this->Tail;
  aVar4 = (atomic<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*>)this->First;
  do {
    aVar2 = *(atomic<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*> *)aVar4;
    FMemory::Free((void *)aVar4);
    bVar5 = aVar4 != aVar1;
    aVar4 = aVar2;
  } while (bVar5);
  while (aVar2 != (atomic<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*>)0x0) {
    aVar1 = *(atomic<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*> *)aVar2;
    if (*(longlong *)
         ((TTypeCompatibleBytes<AudioCommandPrivate::FAudioCommand> *)((longlong)aVar2 + 0x10))->Pad
        != 0) {
      puVar3 = (uchar *)((longlong)aVar2 + 0x20);
      if (*(uchar **)((longlong)aVar2 + 0x38) != (uchar *)0x0) {
        puVar3 = *(uchar **)((longlong)aVar2 + 0x38);
      }
      (**(code **)(*(longlong *)puVar3 + 0x10))();
    }
    FMemory::Free((void *)aVar2);
    aVar2 = aVar1;
  }
  return;
}

// Dequeue @ 14769f130

TOptional<AudioCommandPrivate::FAudioCommand> * __thiscall
TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::Dequeue
          (TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory> *this,
          TOptional<AudioCommandPrivate::FAudioCommand> *__return_storage_ptr__)

{
  atomic<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*> aVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  TStatIdData *local_28;
  bool local_18;
  
  aVar1 = *(atomic<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*> *)this->Tail;
  if (aVar1 == (atomic<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*>)0x0) {
    __return_storage_ptr__->bIsSet = false;
  }
  else {
    lVar3 = *(longlong *)((longlong)aVar1 + 0x10);
    local_30 = *(undefined8 *)((longlong)aVar1 + 0x38);
    *(undefined8 *)((longlong)aVar1 + 0x38) = 0;
    local_48 = *(undefined4 *)((longlong)aVar1 + 0x20);
    uStack_44 = *(undefined4 *)((longlong)aVar1 + 0x24);
    uStack_40 = *(undefined4 *)((longlong)aVar1 + 0x28);
    uStack_3c = *(undefined4 *)((longlong)aVar1 + 0x2c);
    local_38 = *(undefined8 *)((longlong)aVar1 + 0x30);
    if (lVar3 != 0) {
      *(undefined8 *)((longlong)aVar1 + 0x10) = 0;
    }
    local_28 = *(TStatIdData **)((longlong)aVar1 + 0x40);
    local_18 = true;
    if (*(longlong *)((longlong)aVar1 + 0x10) != 0) {
      plVar2 = (longlong *)((longlong)aVar1 + 0x20);
      if (*(longlong **)((longlong)aVar1 + 0x38) != (longlong *)0x0) {
        plVar2 = *(longlong **)((longlong)aVar1 + 0x38);
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    this->Tail = aVar1;
    if (local_18 != false) {
      LOCK();
      this->NumElems = (atomic<int>)((int)this->NumElems + -1);
      UNLOCK();
    }
    __return_storage_ptr__->bIsSet = local_18;
    if (local_18 != false) {
      *(longlong *)&(__return_storage_ptr__->TypedValue).Function = lVar3;
      *(undefined8 *)&(__return_storage_ptr__->TypedValue).Function.field_0x28 = local_30;
      *(undefined4 *)&(__return_storage_ptr__->TypedValue).Function.field_0x10 = local_48;
      *(undefined4 *)&(__return_storage_ptr__->TypedValue).Function.field_0x14 = uStack_44;
      *(undefined4 *)&(__return_storage_ptr__->TypedValue).Function.field_0x18 = uStack_40;
      *(undefined4 *)&(__return_storage_ptr__->TypedValue).Function.field_0x1c = uStack_3c;
      local_30 = 0;
      *(undefined8 *)&(__return_storage_ptr__->TypedValue).Function.field_0x20 = local_38;
      if (*(longlong *)&(__return_storage_ptr__->TypedValue).Function != 0) {
        lVar3 = 0;
      }
      (__return_storage_ptr__->TypedValue).StatId.StatIdPtr = local_28;
      if (lVar3 != 0) {
        (**(code **)(CONCAT44(uStack_44,local_48) + 0x10))(&local_48);
      }
    }
  }
  return __return_storage_ptr__;
}

