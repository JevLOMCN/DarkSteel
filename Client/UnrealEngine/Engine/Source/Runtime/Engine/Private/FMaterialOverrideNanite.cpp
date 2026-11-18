// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147f5b690

UScriptStruct * __cdecl FMaterialOverrideNanite::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaterialOverrideNanite.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMaterialOverrideNanite.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialOverrideNanite,(UObject *)pUVar1,
                         L"MaterialOverrideNanite");
  }
  return Z_Registration_Info_UScriptStruct_FMaterialOverrideNanite.OuterSingleton;
}

// FixupLegacySoftReference @ 147f77d90

bool __thiscall
FMaterialOverrideNanite::FixupLegacySoftReference(FMaterialOverrideNanite *this,UObject *param_1)

{
  return false;
}

// Serialize @ 147f862d0

bool __thiscall FMaterialOverrideNanite::Serialize(FMaterialOverrideNanite *this,FArchive *param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  TObjectPtr<UMaterialInterface>_u_0 local_res10;
  
  (**(code **)(*(longlong *)param_1 + 0x230))
            (param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  iVar5 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  if (iVar5 < 0xb) {
    (**(code **)(*(longlong *)param_1 + 0x148))(param_1,&this->OverrideMaterialRef);
    ::operator<<(param_1,&this->bEnableOverride);
    (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->OverrideMaterial);
    return true;
  }
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  bVar7 = SUB41(uVar6,0);
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = &param_1->field_0x28;
  puVar2 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar2) {
    uVar4 = local_res10._4_4_;
    local_res10.DebugPtr = local_res10.DebugPtr & 0xffffffff00000000;
    if ((*puVar1 & 1) == 0) {
      local_res10._4_4_ = uVar4;
      local_res10._0_4_ = uVar6;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res10,4);
    uVar6 = local_res10._0_4_;
    if (1 < (uint)local_res10._0_4_) {
      FArchiveState::SetError((FArchiveState *)param_1);
      uVar6 = local_res10._0_4_;
    }
    if ((*puVar1 & 1) == 0) goto LAB_147f863ca;
  }
  else {
    uVar6 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar2;
  }
  bVar7 = uVar6 != 0;
LAB_147f863ca:
  if (bVar7 != false) {
    if ((*puVar1 & 4) != 0) {
      local_res10 = (this->OverrideMaterial).field0_0x0;
      (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_res10);
      return false;
    }
    (**(code **)(*(longlong *)param_1 + 0x150))(param_1);
  }
  return false;
}

// SetOverrideMaterial @ 147f88e10

void __thiscall
FMaterialOverrideNanite::SetOverrideMaterial
          (FMaterialOverrideNanite *this,UMaterialInterface *param_1,bool param_2)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->OverrideMaterial).field0_0x0.DebugPtr = param_1;
    this->bEnableOverride = param_2;
    return;
  }
  (this->OverrideMaterial).field0_0x0.DebugPtr = param_1;
  this->bEnableOverride = param_2;
  return;
}

