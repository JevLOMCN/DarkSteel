// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FSharedBufferWithID @ 141f22560

FSharedBufferWithID * __thiscall
UE::Serialization::FEditorBulkData::FSharedBufferWithID::FSharedBufferWithID
          (FSharedBufferWithID *this,FSharedBuffer param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  FBufferOwner *pFVar5;
  longlong *plVar6;
  
  pFVar5 = *(FBufferOwner **)param_1.Owner.Owner;
  *(undefined8 *)param_1.Owner.Owner = 0;
  (this->Payload).Owner.Owner = pFVar5;
  HashPayload(&this->PayloadId,&this->Payload);
  plVar6 = *(longlong **)param_1.Owner.Owner;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 3;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar3 & 0x3fffffff) == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      plVar6[1] = 0;
      plVar6[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar6 + 3);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar4 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar6)(plVar6,1);
      }
    }
  }
  return this;
}

