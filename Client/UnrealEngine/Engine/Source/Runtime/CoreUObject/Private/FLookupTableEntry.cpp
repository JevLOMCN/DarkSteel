// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FLookupTableEntry @ 14212b730

FLookupTableEntry * __thiscall
UE::Private::FLookupTableEntry::FLookupTableEntry
          (FLookupTableEntry *this,FIoHash *param_1,ulong64 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1->Hash + 8);
  *(undefined8 *)(this->Identifier).Hash = *(undefined8 *)param_1->Hash;
  *(undefined8 *)((this->Identifier).Hash + 8) = uVar1;
  *(undefined4 *)((this->Identifier).Hash + 0x10) = *(undefined4 *)(param_1->Hash + 0x10);
  this->Flags = None;
  this->FilterFlags = None;
  this->AccessMode = Local;
  this->OffsetInFile = -1;
  this->CompressedSize = 0xffffffffffffffff;
  this->RawSize = param_2;
  return this;
}

// Serialize @ 14214c840

/* WARNING: Enum "EPackageTrailerVersion": Some values do not have unique names */

void __thiscall
UE::Private::FLookupTableEntry::Serialize
          (FLookupTableEntry *this,FArchive *param_1,EPackageTrailerVersion param_2)

{
  long64 *plVar1;
  ulong64 *puVar2;
  EPayloadFlags *pEVar3;
  EPayloadFilterReason *pEVar4;
  undefined1 *puVar5;
  long64 *plVar6;
  ulong64 *puVar7;
  EPayloadFlags *pEVar8;
  EPayloadFilterReason *pEVar9;
  EPayloadAccessMode *pEVar10;
  
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,0x14);
  plVar1 = &this->OffsetInFile;
  plVar6 = (long64 *)**(longlong **)&param_1->field_0x8;
  if ((long64 *)(*(longlong **)&param_1->field_0x8)[1] < plVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)plVar1);
    }
  }
  else {
    *plVar1 = *plVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar2 = &this->CompressedSize;
  puVar5 = &param_1->field_0x2a;
  puVar7 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar7 + 1) {
    if ((*puVar5 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar2 = &this->RawSize;
  puVar7 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar7 + 1) {
    if ((*puVar5 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  if (((param_1->field_0x28 & 4) != 0) || (ACCESS_PER_PAYLOAD < param_2)) {
    pEVar3 = &this->Flags;
    pEVar8 = (EPayloadFlags *)**(undefined8 **)&param_1->field_0x8;
    if ((EPayloadFlags *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar8 + 1) {
      if ((*puVar5 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar3,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,pEVar3);
      }
    }
    else {
      *pEVar3 = *pEVar8;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    }
    pEVar4 = &this->FilterFlags;
    pEVar9 = (EPayloadFilterReason *)**(undefined8 **)&param_1->field_0x8;
    if ((EPayloadFilterReason *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar9 + 1) {
      if ((*puVar5 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar4,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,pEVar4);
      }
    }
    else {
      *pEVar4 = *pEVar9;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    }
  }
  if (((param_1->field_0x28 & 4) != 0) || (param_2 != INITIAL)) {
    pEVar10 = (EPayloadAccessMode *)**(undefined8 **)&param_1->field_0x8;
    if ((EPayloadAccessMode *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar10 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->AccessMode,1);
    }
    else {
      this->AccessMode = *pEVar10;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
  }
  return;
}

