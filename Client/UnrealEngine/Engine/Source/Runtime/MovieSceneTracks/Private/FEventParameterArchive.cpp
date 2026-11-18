// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 5

// operator<< @ 14676bc20

FArchive * __thiscall
FEventParameterArchive::operator<<(FEventParameterArchive *this,UObject **param_1)

{
  FArchiveState::SetError((FArchiveState *)this);
  return (FArchive *)this;
}

// operator<< @ 14676bc40

FArchive * __thiscall
FEventParameterArchive::operator<<(FEventParameterArchive *this,FLazyObjectPtr *param_1)

{
  FArchiveState::SetError((FArchiveState *)this);
  return (FArchive *)this;
}

// operator<< @ 14676bc60

FArchive * __thiscall
FEventParameterArchive::operator<<(FEventParameterArchive *this,FSoftObjectPath *param_1)

{
  FSoftObjectPath::SerializePath(param_1,(FArchive *)this);
  return (FArchive *)this;
}

// operator<< @ 14676bc90

/* WARNING: Type propagation algorithm not settling */

FArchive * __thiscall
FEventParameterArchive::operator<<(FEventParameterArchive *this,FSoftObjectPtr *param_1)

{
  void *_Src;
  ForAnyElementType _Src_00;
  size_t sVar1;
  FNameEntryId local_58;
  uint uStack_54;
  FNameEntryId FStack_50;
  uint uStack_4c;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  TPersistentObjectPtr<FSoftObjectPath> local_38;
  
  local_40 = *(int *)&param_1->field_0x20;
  sVar1 = (size_t)local_40;
  _Src = *(void **)&param_1->field_0x18;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_58.Value = *(uint *)&param_1->field_0x8;
  uStack_54 = *(uint *)&param_1->field_0xc;
  FStack_50.Value = *(uint *)&param_1->field_0x10;
  uStack_4c = *(uint *)&param_1->field_0x14;
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_40,0,&local_48,local_40,&local_3c);
    memcpy(local_48.Data,_Src,sVar1);
  }
  (**(code **)(*(longlong *)this + 0x140))(this,&local_58);
  _Src_00.Data = local_48.Data;
  if ((this->field_0x28 & 1) != 0) {
    sVar1 = (size_t)local_40;
    local_38.WeakPtr.ObjectIndex = 0;
    local_38.WeakPtr.ObjectSerialNumber = 0;
    local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ObjectID.SubPathString.Data.ArrayNum = local_40;
    local_38.ObjectID.AssetPath.PackageName.Number = uStack_54;
    local_38.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = local_58.Value;
    local_38.ObjectID.AssetPath.AssetName.Number = uStack_4c;
    local_38.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = FStack_50.Value;
    if (local_40 == 0) {
      local_38.ObjectID.SubPathString.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_40,0,(ForAnyElementType *)&local_38.ObjectID.SubPathString,local_40,
                 &local_38.ObjectID.SubPathString.Data.ArrayMax);
      memcpy(local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data,_Src_00.Data,sVar1);
    }
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)param_1,&local_38);
    if (local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return (FArchive *)this;
}

// operator<< @ 14676bdf0

FArchive * __thiscall
FEventParameterArchive::operator<<(FEventParameterArchive *this,FWeakObjectPtr *param_1)

{
  FArchiveState::SetError((FArchiveState *)this);
  return (FArchive *)this;
}

