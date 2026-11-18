// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HeadMountedDisplay
// Functions: 1

// ShowLoadingScreen_Compat @ 145957d40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
IXRLoadingScreen::ShowLoadingScreen_Compat
          (bool param_1,TRefCountPtr<FRHITexture> param_2,TVector<double> *param_3,
          TVector2<double> *param_4)

{
  IXRTrackingSystem *pIVar1;
  longlong *plVar2;
  
  if ((GEngine != (UEngine *)0x0) &&
     (pIVar1 = (GEngine->XRSystem).Object, pIVar1 != (IXRTrackingSystem *)0x0)) {
    plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x140))();
    if (plVar2 != (longlong *)0x0) {
      if (param_1) {
        (**(code **)(*plVar2 + 0x18))();
      }
      else {
        (**(code **)(*plVar2 + 0x20))(plVar2);
      }
    }
  }
  if ((FRHIResource *)(param_2.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_2.Reference)->_padding_);
  }
  return;
}

