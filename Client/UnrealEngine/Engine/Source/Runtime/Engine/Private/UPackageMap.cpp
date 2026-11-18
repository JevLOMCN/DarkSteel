// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ResetTrackedGuids @ 1484f1ad0

void __thiscall UPackageMap::ResetTrackedGuids(UPackageMap *this,bool param_1)

{
  undefined1 *puVar1;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *this_00;
  int iVar2;
  bool bVar3;
  
  bVar3 = 1 < (this->TrackedUnmappedNetGuids).HashSize;
  if (!bVar3) {
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::UnhashElements
              (&this->TrackedUnmappedNetGuids);
  }
  puVar1 = &(this->TrackedUnmappedNetGuids).Elements.field_0xc;
  *(undefined4 *)&(this->TrackedUnmappedNetGuids).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&this->TrackedUnmappedNetGuids,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->TrackedUnmappedNetGuids).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TrackedUnmappedNetGuids).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->TrackedUnmappedNetGuids).Elements.field_0x2c;
  *(undefined4 *)&(this->TrackedUnmappedNetGuids).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->TrackedUnmappedNetGuids).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->TrackedUnmappedNetGuids).Elements.field_0x10,0);
  }
  if (bVar3) {
    (this->TrackedUnmappedNetGuids).HashSize = 1;
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Rehash
              (&this->TrackedUnmappedNetGuids);
  }
  this_00 = &this->TrackedMappedDynamicNetGuids;
  bVar3 = 1 < (this->TrackedMappedDynamicNetGuids).HashSize;
  if (!bVar3) {
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::UnhashElements(this_00)
    ;
  }
  puVar1 = &(this->TrackedMappedDynamicNetGuids).Elements.field_0xc;
  *(undefined4 *)&(this->TrackedMappedDynamicNetGuids).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->TrackedMappedDynamicNetGuids).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TrackedMappedDynamicNetGuids).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->TrackedMappedDynamicNetGuids).Elements.field_0x2c;
  *(undefined4 *)&(this->TrackedMappedDynamicNetGuids).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->TrackedMappedDynamicNetGuids).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->TrackedMappedDynamicNetGuids).Elements.field_0x10,0);
  }
  if (bVar3) {
    (this->TrackedMappedDynamicNetGuids).HashSize = 1;
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  this->bShouldTrackUnmappedGuids = param_1;
  return;
}

