// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1476d93e0

UScriptStruct * __cdecl FCameraShakePatternScrubParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraShakePatternScrubParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCameraShakePatternScrubParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakePatternScrubParams,(UObject *)pUVar1,
                         L"CameraShakePatternScrubParams");
  }
  return Z_Registration_Info_UScriptStruct_FCameraShakePatternScrubParams.OuterSingleton;
}

// ToUpdateParams @ 14772fcf0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraShakePatternUpdateParams * __thiscall
FCameraShakePatternScrubParams::ToUpdateParams
          (FCameraShakePatternScrubParams *this,
          FCameraShakePatternUpdateParams *__return_storage_ptr__)

{
  __return_storage_ptr__->DeltaTime = 0.0;
  __return_storage_ptr__->ShakeScale = 1.0;
  __return_storage_ptr__->DynamicScale = 1.0;
  FMinimalViewInfo::FMinimalViewInfo(&__return_storage_ptr__->POV,&this->POV);
  __return_storage_ptr__->DeltaTime = this->AbsoluteTime;
  __return_storage_ptr__->ShakeScale = this->ShakeScale;
  __return_storage_ptr__->DynamicScale = this->DynamicScale;
  return __return_storage_ptr__;
}

