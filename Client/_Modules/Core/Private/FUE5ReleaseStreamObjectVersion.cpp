// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// GetSystemGuids @ 141a82550

TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_> * __cdecl
FUE5ReleaseStreamObjectVersion::GetSystemGuids
          (TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>
           *__return_storage_ptr__)

{
  bool bVar1;
  FGuid local_38;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  ::FString::FString((FString *)local_18,"AACA8C54724D4E9386927BA2A165ACA6");
  bVar1 = FGuid::Parse((FString *)local_18,&local_38);
  if (!bVar1) {
    local_38.C = 0;
    local_38.D = 0;
    local_38.A = 0;
    local_38.B = 0;
  }
  local_28._0_8_ = &Guids;
  local_28._8_8_ = &local_38;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,(TPairInitializer<FGuid_const_&,FGuid_&&> *)&stack0x00000008,
             (bool *)local_28);
  if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_18._0_8_);
  }
  ::FString::FString((FString *)local_28,"6727B49695474CCC8BC1C1B211A6B83A");
  bVar1 = FGuid::Parse((FString *)local_28,&local_38);
  if (!bVar1) {
    local_38.C = 0;
    local_38.D = 0;
    local_38.A = 0;
    local_38.B = 0;
  }
  local_18._0_8_ = &Guids.MATERIALSHADERMAP_DERIVEDDATA_VER;
  local_18._8_8_ = &local_38;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,(TPairInitializer<FGuid_const_&,FGuid_&&> *)&stack0x00000008,
             (bool *)local_18);
  if ((FDevSystemGuids *)local_28._0_8_ != (FDevSystemGuids *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,"AC88CFBDDA614A9C8488F64D2DAF699D");
  bVar1 = FGuid::Parse((FString *)local_28,&local_38);
  if (!bVar1) {
    local_38.C = 0;
    local_38.D = 0;
    local_38.A = 0;
    local_38.B = 0;
  }
  local_18._0_8_ = &Guids.NANITE_DERIVEDDATA_VER;
  local_18._8_8_ = &local_38;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,(TPairInitializer<FGuid_const_&,FGuid_&&> *)&stack0x00000008,
             (bool *)local_18);
  if ((FDevSystemGuids *)local_28._0_8_ != (FDevSystemGuids *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,"26325805F5744BC2815552A21D95CECA");
  bVar1 = FGuid::Parse((FString *)local_28,&local_38);
  if (!bVar1) {
    local_38.C = 0;
    local_38.D = 0;
    local_38.A = 0;
    local_38.B = 0;
  }
  local_18._0_8_ = &Guids.NIAGARASHADERMAP_DERIVEDDATA_VER;
  local_18._8_8_ = &local_38;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,(TPairInitializer<FGuid_const_&,FGuid_&&> *)&stack0x00000008,
             (bool *)local_18);
  if ((FDevSystemGuids *)local_28._0_8_ != (FDevSystemGuids *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,"14BEE7BD97194A7BBB8374D34DC49915");
  bVar1 = FGuid::Parse((FString *)local_28,&local_38);
  if (!bVar1) {
    local_38.C = 0;
    local_38.D = 0;
    local_38.A = 0;
    local_38.B = 0;
  }
  local_18._0_8_ = &Guids.Niagara_LatestScriptCompileVersion;
  local_18._8_8_ = &local_38;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,(TPairInitializer<FGuid_const_&,FGuid_&&> *)&stack0x00000008,
             (bool *)local_18);
  if ((FDevSystemGuids *)local_28._0_8_ != (FDevSystemGuids *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,"BA91E71F642E4813A1B74B80D0448928");
  bVar1 = FGuid::Parse((FString *)local_28,&local_38);
  if (!bVar1) {
    local_38.C = 0;
    local_38.D = 0;
    local_38.A = 0;
    local_38.B = 0;
  }
  local_18._0_8_ = &Guids.SkeletalMeshDerivedDataVersion;
  local_18._8_8_ = &local_38;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,(TPairInitializer<FGuid_const_&,FGuid_&&> *)&stack0x00000008,
             (bool *)local_18);
  if ((FDevSystemGuids *)local_28._0_8_ != (FDevSystemGuids *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,"14B86848953D46989C69A8B195AD7F6C");
  bVar1 = FGuid::Parse((FString *)local_28,&local_38);
  if (!bVar1) {
    local_38.C = 0;
    local_38.D = 0;
    local_38.A = 0;
    local_38.B = 0;
  }
  local_18._0_8_ = &Guids.STATICMESH_DERIVEDDATA_VER;
  local_18._8_8_ = &local_38;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,(TPairInitializer<FGuid_const_&,FGuid_&&> *)&stack0x00000008,
             (bool *)local_18);
  if ((FDevSystemGuids *)local_28._0_8_ != (FDevSystemGuids *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  return __return_storage_ptr__;
}

