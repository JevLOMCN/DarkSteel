// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// GetSystemGuids @ 141a82090

TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_> * __cdecl
FUE5MainStreamObjectVersion::GetSystemGuids
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
  ::FString::FString((FString *)local_18,"FEAB692FBBDD4113857BCD32C2B644BC");
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
  ::FString::FString((FString *)local_28,"71000000000000000000000000000035");
  bVar1 = FGuid::Parse((FString *)local_28,&local_38);
  if (!bVar1) {
    local_38.C = 0;
    local_38.D = 0;
    local_38.A = 0;
    local_38.B = 0;
  }
  local_18._0_8_ = &Guids.LANDSCAPE_MOBILE_COOK_VERSION;
  local_18._8_8_ = &local_38;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,(TPairInitializer<FGuid_const_&,FGuid_&&> *)&stack0x00000008,
             (bool *)local_18);
  if ((FDevSystemGuids *)local_28._0_8_ != (FDevSystemGuids *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,"D28F2FDCCAC4499B8F8E87728235A46C");
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
  ::FString::FString((FString *)local_28,"8A37C45D24F2423CBE5F8F371DE33575");
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
  ::FString::FString((FString *)local_28,"9C8812406D824DE29BBC6F303964BB7E");
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
  ::FString::FString((FString *)local_28,"4E595C2AC5E947D6BA9ABC874353E5BC");
  bVar1 = FGuid::Parse((FString *)local_28,&local_38);
  if (!bVar1) {
    local_38.C = 0;
    local_38.D = 0;
    local_38.A = 0;
    local_38.B = 0;
  }
  local_18._0_8_ = &Guids.POSESEARCHDB_DERIVEDDATA_VER;
  local_18._8_8_ = &local_38;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,(TPairInitializer<FGuid_const_&,FGuid_&&> *)&stack0x00000008,
             (bool *)local_18);
  if ((FDevSystemGuids *)local_28._0_8_ != (FDevSystemGuids *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,"156678D4F9084D7CAE98FADC6AB93573");
  bVar1 = FGuid::Parse((FString *)local_28,&local_38);
  if (!bVar1) {
    local_38.C = 0;
    local_38.D = 0;
    local_38.A = 0;
    local_38.B = 0;
  }
  local_18._0_8_ = &Guids.GROOM_BINDING_DERIVED_DATA_VERSION;
  local_18._8_8_ = &local_38;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,(TPairInitializer<FGuid_const_&,FGuid_&&> *)&stack0x00000008,
             (bool *)local_18);
  if ((FDevSystemGuids *)local_28._0_8_ != (FDevSystemGuids *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,"00B8207248CC44B88F7DEC8F328A5D8B");
  bVar1 = FGuid::Parse((FString *)local_28,&local_38);
  if (!bVar1) {
    local_38.C = 0;
    local_38.D = 0;
    local_38.A = 0;
    local_38.B = 0;
  }
  local_18._0_8_ = &Guids.GROOM_DERIVED_DATA_VERSION;
  local_18._8_8_ = &local_38;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,(TPairInitializer<FGuid_const_&,FGuid_&&> *)&stack0x00000008,
             (bool *)local_18);
  if ((FDevSystemGuids *)local_28._0_8_ != (FDevSystemGuids *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,"5E6E21D1AC364AACA1921EE46BF10B4C");
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
  if ((FDevSystemGuids *)local_28._0_8_ != (FDevSystemGuids *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,"10723B2C576B477590594B071647B4B7");
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
  ::FString::FString((FString *)local_28,"D107D9EFBABA44B3B404E1D77243F3DD");
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
  ::FString::FString((FString *)local_28,"98F7D79A5811013825E75BBCC41ED3E9");
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

