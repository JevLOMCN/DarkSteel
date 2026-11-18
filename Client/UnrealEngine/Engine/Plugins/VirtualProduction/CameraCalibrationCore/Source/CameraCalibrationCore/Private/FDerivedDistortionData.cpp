// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 2

// StaticStruct @ 14d67aa50

UScriptStruct * __cdecl FDerivedDistortionData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDerivedDistortionData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FDerivedDistortionData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDerivedDistortionData,(UObject *)pUVar1,
                         L"DerivedDistortionData");
  }
  return Z_Registration_Info_UScriptStruct_FDerivedDistortionData.OuterSingleton;
}

// operator= @ 14d6ad490

FDerivedDistortionData * __thiscall
FDerivedDistortionData::operator=(FDerivedDistortionData *this,FDerivedDistortionData *param_1)

{
  UTextureRenderTarget2D *pUVar1;
  
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)this,
             (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)param_1);
  (this->DistortionData).OverscanFactor = (param_1->DistortionData).OverscanFactor;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->UndistortionDisplacementMap).field0_0x0.DebugPtr,
     pUVar1 != (UTextureRenderTarget2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->UndistortionDisplacementMap).field0_0x0 = (param_1->UndistortionDisplacementMap).field0_0x0
  ;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->DistortionDisplacementMap).field0_0x0.DebugPtr,
     pUVar1 != (UTextureRenderTarget2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->DistortionDisplacementMap).field0_0x0 = (param_1->DistortionDisplacementMap).field0_0x0;
  this->bIsDirty = param_1->bIsDirty;
  return this;
}

