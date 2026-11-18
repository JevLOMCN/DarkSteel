// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Env
// Functions: 2

// StaticStruct @ 14a043e70

UScriptStruct * __cdecl FWN_LightContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_LightContext.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_Env();
    Z_Registration_Info_UScriptStruct_FWN_LightContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_LightContext,(UObject *)pUVar1,
                         L"WN_LightContext");
  }
  return Z_Registration_Info_UScriptStruct_FWN_LightContext.OuterSingleton;
}

// FWN_LightContext @ 14a046ea0

FWN_LightContext * __thiscall FWN_LightContext::FWN_LightContext(FWN_LightContext *this)

{
  TWeakObjectPtr<AActor,FWeakObjectPtr> *this_00;
  undefined8 local_res8;
  
  (this->LightComponentRef)._padding_ = 0;
  (this->LightComponentRef)._padding_ = 0;
  (this->LightComponentRef)._padding_ = 0;
  (this->LightComponentRef)._padding_ = 0;
  this_00 = &(this->LightComponentRef).OtherActor;
  local_res8 = 0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  this->bCanSetIndividually = false;
  (this->NightReactSetting).LightIntensity = 0.0;
  (this->NightReactSetting).LightColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->DayReactSetting).LightIntensity = 0.0;
  (this->DayReactSetting).LightColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  return this;
}

