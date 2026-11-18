// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 2

// GetRole @ 14d053680

TSubclassOf<ULiveLinkRole> __thiscall
ULiveLinkTransformDeadbandPreProcessor::FLiveLinkTransformDeadbandPreProcessorWorker::GetRole
          (FLiveLinkTransformDeadbandPreProcessorWorker *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_ULiveLinkTransformRole_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<ULiveLinkRole>)in_RDX.field0_0x0;
}

// PreProcessFrame @ 14d06cf40

bool __thiscall
ULiveLinkTransformDeadbandPreProcessor::FLiveLinkTransformDeadbandPreProcessorWorker::
PreProcessFrame(FLiveLinkTransformDeadbandPreProcessorWorker *this,
               FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_1)

{
  FLiveLinkTransformFrameData *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (this->bEnableDeadband != false) {
    pFVar1 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkTransformFrameData>
                       (param_1);
    dVar2 = (this->StableTransform).Translation.XY.m128d_f64[0] -
            (pFVar1->Transform).Translation.XY.m128d_f64[0];
    dVar4 = (this->StableTransform).Translation.ZW.m128d_f64[0] -
            (pFVar1->Transform).Translation.ZW.m128d_f64[0];
    dVar3 = (this->StableTransform).Translation.XY.m128d_f64[1] -
            (pFVar1->Transform).Translation.XY.m128d_f64[1];
    if (SQRT(dVar3 * dVar3 + dVar2 * dVar2 + dVar4 * dVar4) < this->TranslationDeadband) {
      dVar2 = (this->StableTransform).Translation.XY.m128d_f64[1];
      dVar4 = (this->StableTransform).Translation.ZW.m128d_f64[0];
      (pFVar1->Transform).Translation.XY.m128d_f64[0] =
           (this->StableTransform).Translation.XY.m128d_f64[0];
      (pFVar1->Transform).Translation.XY.m128d_f64[1] = dVar2;
      (pFVar1->Transform).Translation.ZW.m128d_f64[0] = dVar4;
      (pFVar1->Transform).Translation.ZW.m128d_f64[1] = 0.0;
    }
    dVar4 = (this->StableTransform).Rotation.XY.m128d_f64[1] *
            (pFVar1->Transform).Rotation.XY.m128d_f64[1] +
            (this->StableTransform).Rotation.XY.m128d_f64[0] *
            (pFVar1->Transform).Rotation.XY.m128d_f64[0] +
            (this->StableTransform).Rotation.ZW.m128d_f64[0] *
            (pFVar1->Transform).Rotation.ZW.m128d_f64[0] +
            (this->StableTransform).Rotation.ZW.m128d_f64[1] *
            (pFVar1->Transform).Rotation.ZW.m128d_f64[1];
    dVar4 = (dVar4 + dVar4) * dVar4 - __real_3ff0000000000000;
    dVar2 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar4) && (dVar2 = dVar4, __real_3ff0000000000000 <= dVar4)) {
      dVar2 = __real_3ff0000000000000;
    }
    dVar4 = acos(dVar2);
    if (dVar4 * __real_404ca5dc1a63c1f8 < this->RotationDeadbandInDegrees) {
      dVar4 = (this->StableTransform).Rotation.XY.m128d_f64[1];
      dVar2 = (this->StableTransform).Rotation.ZW.m128d_f64[0];
      dVar3 = (this->StableTransform).Rotation.ZW.m128d_f64[1];
      (pFVar1->Transform).Rotation.XY.m128d_f64[0] =
           (this->StableTransform).Rotation.XY.m128d_f64[0];
      (pFVar1->Transform).Rotation.XY.m128d_f64[1] = dVar4;
      (pFVar1->Transform).Rotation.ZW.m128d_f64[0] = dVar2;
      (pFVar1->Transform).Rotation.ZW.m128d_f64[1] = dVar3;
    }
    dVar4 = (pFVar1->Transform).Rotation.XY.m128d_f64[1];
    (this->StableTransform).Rotation.XY.m128d_f64[0] = (pFVar1->Transform).Rotation.XY.m128d_f64[0];
    (this->StableTransform).Rotation.XY.m128d_f64[1] = dVar4;
    dVar4 = (pFVar1->Transform).Rotation.ZW.m128d_f64[1];
    (this->StableTransform).Rotation.ZW.m128d_f64[0] = (pFVar1->Transform).Rotation.ZW.m128d_f64[0];
    (this->StableTransform).Rotation.ZW.m128d_f64[1] = dVar4;
    dVar4 = (pFVar1->Transform).Translation.XY.m128d_f64[1];
    (this->StableTransform).Translation.XY.m128d_f64[0] =
         (pFVar1->Transform).Translation.XY.m128d_f64[0];
    (this->StableTransform).Translation.XY.m128d_f64[1] = dVar4;
    dVar4 = (pFVar1->Transform).Translation.ZW.m128d_f64[1];
    (this->StableTransform).Translation.ZW.m128d_f64[0] =
         (pFVar1->Transform).Translation.ZW.m128d_f64[0];
    (this->StableTransform).Translation.ZW.m128d_f64[1] = dVar4;
    dVar4 = (pFVar1->Transform).Scale3D.XY.m128d_f64[1];
    (this->StableTransform).Scale3D.XY.m128d_f64[0] = (pFVar1->Transform).Scale3D.XY.m128d_f64[0];
    (this->StableTransform).Scale3D.XY.m128d_f64[1] = dVar4;
    dVar4 = (pFVar1->Transform).Scale3D.ZW.m128d_f64[1];
    (this->StableTransform).Scale3D.ZW.m128d_f64[0] = (pFVar1->Transform).Scale3D.ZW.m128d_f64[0];
    (this->StableTransform).Scale3D.ZW.m128d_f64[1] = dVar4;
  }
  return true;
}

