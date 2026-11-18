// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FSMInstanceElementIdMapEntry @ 147b39e70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FSMInstanceElementIdMapEntry * __thiscall
FSMInstanceElementIdMapEntry::FSMInstanceElementIdMapEntry
          (FSMInstanceElementIdMapEntry *this,FSMInstanceElementIdMap *param_1,
          UInstancedStaticMeshComponent *param_2)

{
  code *pcVar1;
  bool bVar2;
  FSMInstanceElementIdMapEntry *pFVar3;
  
  this->Owner = param_1;
  this->Component = param_2;
  *(undefined8 *)&this->InstanceIndexToIdMap = 0;
  *(undefined8 *)&(this->InstanceIndexToIdMap).field_0x8 = 0;
  *(undefined8 *)&(this->InstanceIndexToIdMap).field_0x20 = 0;
  *(undefined4 *)&(this->InstanceIndexToIdMap).field_0x28 = 0;
  *(undefined4 *)&(this->InstanceIndexToIdMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->InstanceIndexToIdMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InstanceIndexToIdMap).field_0x34 = 0;
  *(undefined8 *)&(this->InstanceIndexToIdMap).field_0x40 = 0;
  *(undefined4 *)&(this->InstanceIndexToIdMap).field_0x48 = 0;
  *(undefined8 *)&this->InstanceIdToIndexMap = 0;
  *(undefined8 *)&(this->InstanceIdToIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->InstanceIdToIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->InstanceIdToIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->InstanceIdToIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->InstanceIdToIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InstanceIdToIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->InstanceIdToIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->InstanceIdToIndexMap).field_0x48 = 0;
  this->NextInstanceId = 1;
  if (this->Owner == (FSMInstanceElementIdMap *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Owner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Elements\\SMInstance\\SMInstanceElementId.cpp"
                       ,0x15,L"FSMInstanceElementIdMapEntry must be constructed with a valid owner!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSMInstanceElementIdMapEntry *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->Component == (UInstancedStaticMeshComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Elements\\SMInstance\\SMInstanceElementId.cpp"
                       ,0x16,
                       L"FSMInstanceElementIdMapEntry must be constructed with a valid component!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSMInstanceElementIdMapEntry *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// ~FSMInstanceElementIdMapEntry @ 147b3d250

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FSMInstanceElementIdMapEntry::~FSMInstanceElementIdMapEntry(FSMInstanceElementIdMapEntry *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->InstanceIdToIndexMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InstanceIdToIndexMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InstanceIdToIndexMap);
  *(undefined4 *)&(this->InstanceIndexToIdMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InstanceIndexToIdMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InstanceIndexToIdMap);
  return;
}

