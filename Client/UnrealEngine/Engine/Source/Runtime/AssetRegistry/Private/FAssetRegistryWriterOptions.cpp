// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// FAssetRegistryWriterOptions @ 142ad5830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FAssetRegistryWriterOptions * __thiscall
FAssetRegistryWriterOptions::FAssetRegistryWriterOptions
          (FAssetRegistryWriterOptions *this,FAssetRegistrySerializationOptions *param_1)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar1;
  int iVar2;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  ForElementType<FSetElementId> local_88;
  int local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_9c = 0x80;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_94 = 0;
  local_88 = (ForElementType<FSetElementId>)0x0;
  local_80 = 0;
  local_98 = 0xffffffff;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_c8,
             &param_1->CookTagsAsName);
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_78,
             &param_1->CookTagsAsPath);
  *(undefined8 *)&(this->Tags).StoreAsName.Elements = 0;
  *(undefined8 *)&(this->Tags).StoreAsName.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Tags).StoreAsName.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Tags).StoreAsName.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Tags).StoreAsName.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Tags).StoreAsName.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Tags).StoreAsName.Elements.field_0x34 = 0;
  (this->Tags).StoreAsName.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Tags).StoreAsName.HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this,
             (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_c8);
  pTVar1 = &(this->Tags).StoreAsPath;
  *(undefined8 *)&pTVar1->Elements = 0;
  *(undefined8 *)&(this->Tags).StoreAsPath.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Tags).StoreAsPath.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Tags).StoreAsPath.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Tags).StoreAsPath.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Tags).StoreAsPath.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Tags).StoreAsPath.Elements.field_0x34 = 0;
  (this->Tags).StoreAsPath.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Tags).StoreAsPath.HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
            (pTVar1,(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_78);
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  local_80 = 0;
  if (local_88 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88);
  }
  iVar2 = SUB84(local_c8._8_8_,4);
  local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
  }
  local_98 = 0xffffffff;
  local_94 = 0;
  local_a0 = 0;
  if (0x80 < local_9c) {
    local_9c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  return this;
}

