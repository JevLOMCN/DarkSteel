// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// GetSystemGuids @ 141a815b0

TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_> * __cdecl
FFortniteMainBranchObjectVersion::GetSystemGuids
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
  ::FString::FString((FString *)local_18,"4FF004A35DB04EA0BABA3BFCDCD7D498");
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
  ::FString::FString((FString *)local_28,"32D02EF867C74B71A0D4E0FA41392732");
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
  ::FString::FString((FString *)local_28,"4DCE94C9E9994B3DA256F6A015B87CA9");
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
  ::FString::FString((FString *)local_28,"6360A977062842A29ED30E3A7ACB0E64");
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
  ::FString::FString((FString *)local_28,"783FF3700BB641C799B2D43552FBF91E");
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
  ::FString::FString((FString *)local_28,"0AE469C404D94DB5A5BDB77BB6CDE3F3");
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
  ::FString::FString((FString *)local_28,"F365D7A48F454525AAADC0678EA085A0");
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
  ::FString::FString((FString *)local_28,"C998F2F3B2884A02B7E290B8C25835F0");
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
  ::FString::FString((FString *)local_28,"3ABF32149F9D4D838750368AB95573BE");
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

