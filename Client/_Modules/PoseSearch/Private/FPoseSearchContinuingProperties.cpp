// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 2

// StaticStruct @ 14a90d9e0

UScriptStruct * __cdecl FPoseSearchContinuingProperties::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchContinuingProperties.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchContinuingProperties.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchContinuingProperties,(UObject *)pUVar1
                         ,L"PoseSearchContinuingProperties");
  }
  return Z_Registration_Info_UScriptStruct_FPoseSearchContinuingProperties.OuterSingleton;
}

// InitFrom @ 14a92ebd0

void __thiscall
FPoseSearchContinuingProperties::InitFrom
          (FPoseSearchContinuingProperties *this,FPoseSearchBlueprintResult *param_1,
          EPoseSearchInterruptMode param_2)

{
  UObject *pUVar1;
  UPoseSearchDatabase *pUVar2;
  double dVar3;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->SelectedAnim).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->PlayingAsset).field0_0x0 =
       *(TObjectPtr<UObject_const_>_u_0 *)&(param_1->SelectedAnim).field0_0x0;
  this->PlayingAssetAccumulatedTime = param_1->SelectedTime;
  this->bIsPlayingAssetMirrored = param_1->bIsMirrored;
  dVar3 = (param_1->BlendParameters).field0_0x0._s_0.Y;
  (this->PlayingAssetBlendParameters).field0_0x0._s_0.X =
       (param_1->BlendParameters).field0_0x0._s_0.X;
  (this->PlayingAssetBlendParameters).field0_0x0._s_0.Y = dVar3;
  (this->PlayingAssetBlendParameters).field0_0x0._s_0.Z =
       (param_1->BlendParameters).field0_0x0._s_0.Z;
  this->InterruptMode = param_2;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    pUVar2 = (param_1->SelectedDatabase).field0_0x0.DebugPtr;
    if (pUVar2 == (UPoseSearchDatabase *)0x0) {
      (this->PlayingAssetDatabase).field0_0x0.DebugPtr = (UPoseSearchDatabase *)0x0;
      return;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->PlayingAssetDatabase).field0_0x0 = (param_1->SelectedDatabase).field0_0x0;
  return;
}

