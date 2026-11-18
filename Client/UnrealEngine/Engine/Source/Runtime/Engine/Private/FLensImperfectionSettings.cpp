// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1484a5430

UScriptStruct * __cdecl FLensImperfectionSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLensImperfectionSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FLensImperfectionSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLensImperfectionSettings,(UObject *)pUVar1,
                         L"LensImperfectionSettings");
  }
  return Z_Registration_Info_UScriptStruct_FLensImperfectionSettings.OuterSingleton;
}

// ExportToPostProcessSettings @ 1484d65f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FLensImperfectionSettings::ExportToPostProcessSettings
          (FLensImperfectionSettings *this,FPostProcessSettings *param_1)

{
  undefined1 *puVar1;
  UTexture *pUVar2;
  undefined8 uVar3;
  
  param_1->bOverride_BloomDirtMaskIntensity = '\x01';
  param_1->bOverride_BloomDirtMask = '\x01';
  param_1->bOverride_BloomDirtMaskTint = '\x01';
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (this->DirtMask).field0_0x0.DebugPtr, pUVar2 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (param_1->BloomDirtMask).field0_0x0 = (this->DirtMask).field0_0x0;
  param_1->BloomDirtMaskIntensity = this->DirtMaskIntensity;
  uVar3 = *(undefined8 *)((longlong)&(this->DirtMaskTint).field0_0x0 + 8);
  *(undefined8 *)&(param_1->BloomDirtMaskTint).field0_0x0 =
       *(undefined8 *)&(this->DirtMaskTint).field0_0x0;
  *(undefined8 *)((longlong)&(param_1->BloomDirtMaskTint).field0_0x0 + 8) = uVar3;
  return;
}

