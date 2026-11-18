// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenCVHelper
// Functions: 2

// StaticStruct @ 14d36bcc0

UScriptStruct * __cdecl FOpenCVArucoDetectedMarker::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOpenCVArucoDetectedMarker.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OpenCVHelper();
    Z_Registration_Info_UScriptStruct_FOpenCVArucoDetectedMarker.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker,(UObject *)pUVar1,
                         L"OpenCVArucoDetectedMarker");
  }
  return Z_Registration_Info_UScriptStruct_FOpenCVArucoDetectedMarker.OuterSingleton;
}

// FOpenCVArucoDetectedMarker @ 14d36c660

FOpenCVArucoDetectedMarker * __thiscall
FOpenCVArucoDetectedMarker::FOpenCVArucoDetectedMarker
          (FOpenCVArucoDetectedMarker *this,FOpenCVArucoDetectedMarker *param_1)

{
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  double dVar4;
  
  pTVar1 = &this->Corners;
  this->Id = param_1->Id;
  piVar2 = &(this->Corners).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Corners).ArrayNum;
  _Src = (param_1->Corners).AllocatorInstance.Data;
  (this->Corners).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
  }
  dVar4 = (param_1->Pose).Rotation.XY.m128d_f64[1];
  (this->Pose).Rotation.XY.m128d_f64[0] = (param_1->Pose).Rotation.XY.m128d_f64[0];
  (this->Pose).Rotation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->Pose).Rotation.ZW.m128d_f64[1];
  (this->Pose).Rotation.ZW.m128d_f64[0] = (param_1->Pose).Rotation.ZW.m128d_f64[0];
  (this->Pose).Rotation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->Pose).Translation.XY.m128d_f64[1];
  (this->Pose).Translation.XY.m128d_f64[0] = (param_1->Pose).Translation.XY.m128d_f64[0];
  (this->Pose).Translation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->Pose).Translation.ZW.m128d_f64[1];
  (this->Pose).Translation.ZW.m128d_f64[0] = (param_1->Pose).Translation.ZW.m128d_f64[0];
  (this->Pose).Translation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->Pose).Scale3D.XY.m128d_f64[1];
  (this->Pose).Scale3D.XY.m128d_f64[0] = (param_1->Pose).Scale3D.XY.m128d_f64[0];
  (this->Pose).Scale3D.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->Pose).Scale3D.ZW.m128d_f64[1];
  (this->Pose).Scale3D.ZW.m128d_f64[0] = (param_1->Pose).Scale3D.ZW.m128d_f64[0];
  (this->Pose).Scale3D.ZW.m128d_f64[1] = dVar4;
  return this;
}

