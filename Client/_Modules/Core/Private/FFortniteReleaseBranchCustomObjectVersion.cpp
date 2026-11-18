// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// GetSystemGuids @ 141a81950

TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_> * __cdecl
FFortniteReleaseBranchCustomObjectVersion::GetSystemGuids
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
  ::FString::FString((FString *)local_18,"213B319D239D438C82A946BB164152DE");
  bVar1 = FGuid::Parse((FString *)local_18,&local_38);
  if (!bVar1) {
    local_38.C = 0;
    local_38.D = 0;
    local_38.A = 0;
    local_38.B = 0;
  }
  local_28._0_8_ = &Guids.Niagara_LatestScriptCompileVersion;
  local_28._8_8_ = &local_38;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,(TPairInitializer<FGuid_const_&,FGuid_&&> *)&stack0x00000008,
             (bool *)local_28);
  if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_18._0_8_);
  }
  ::FString::FString((FString *)local_28,"C96DEBAD45E3443D804017D4C29F7C4B");
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
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,"3CD389BC871B4FFF8351228666EAE54F");
  bVar1 = FGuid::Parse((FString *)local_28,&local_38);
  if (!bVar1) {
    local_38.C = 0;
    local_38.D = 0;
    local_38.A = 0;
    local_38.B = 0;
  }
  local_18._0_8_ = &Guids.MaterialTranslationDDCVersion;
  local_18._8_8_ = &local_38;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,(TPairInitializer<FGuid_const_&,FGuid_&&> *)&stack0x00000008,
             (bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,"43D841E68BB14DF4A45F6D09B35501F7");
  bVar1 = FGuid::Parse((FString *)local_28,&local_38);
  if (!bVar1) {
    local_38.C = 0;
    local_38.D = 0;
    local_38.A = 0;
    local_38.B = 0;
  }
  local_18._0_8_ = &Guids;
  local_18._8_8_ = &local_38;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,(TPairInitializer<FGuid_const_&,FGuid_&&> *)&stack0x00000008,
             (bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,"D52C1D148C294A6A8C6CD75505081A31");
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
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,"0D7C30DE6E5F489A831CEBF1346725C4");
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
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,"B08A8584408545A88E5ED193054085E3");
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
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  return __return_storage_ptr__;
}

