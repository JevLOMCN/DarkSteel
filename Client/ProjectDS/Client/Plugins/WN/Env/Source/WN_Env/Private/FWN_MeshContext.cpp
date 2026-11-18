// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Env
// Functions: 2

// StaticStruct @ 14a043f30

UScriptStruct * __cdecl FWN_MeshContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_MeshContext.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_Env();
    Z_Registration_Info_UScriptStruct_FWN_MeshContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_MeshContext,(UObject *)pUVar1,
                         L"WN_MeshContext");
  }
  return Z_Registration_Info_UScriptStruct_FWN_MeshContext.OuterSingleton;
}

// FWN_MeshContext @ 14a046f10

FWN_MeshContext * __thiscall FWN_MeshContext::FWN_MeshContext(FWN_MeshContext *this)

{
  TWeakObjectPtr<AActor,FWeakObjectPtr> *this_00;
  undefined8 local_res8;
  
  (this->MeshComponentRef)._padding_ = 0;
  (this->MeshComponentRef)._padding_ = 0;
  (this->MeshComponentRef)._padding_ = 0;
  (this->MeshComponentRef)._padding_ = 0;
  this_00 = &(this->MeshComponentRef).OtherActor;
  local_res8 = 0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  this->bCanSetIndividually = false;
  (this->NightReactSetting).EmissiveIntensity = 0.0;
  (this->NightReactSetting).EmissiveColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  *(undefined8 *)&this->DayReactSettingsPerMaterial = 0;
  *(undefined8 *)&(this->DayReactSettingsPerMaterial).field_0x8 = 0;
  *(undefined8 *)&(this->DayReactSettingsPerMaterial).field_0x20 = 0;
  *(undefined4 *)&(this->DayReactSettingsPerMaterial).field_0x28 = 0;
  *(undefined4 *)&(this->DayReactSettingsPerMaterial).field_0x2c = 0x80;
  *(undefined4 *)&(this->DayReactSettingsPerMaterial).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DayReactSettingsPerMaterial).field_0x34 = 0;
  *(undefined8 *)&(this->DayReactSettingsPerMaterial).field_0x40 = 0;
  *(undefined4 *)&(this->DayReactSettingsPerMaterial).field_0x48 = 0;
  return this;
}

