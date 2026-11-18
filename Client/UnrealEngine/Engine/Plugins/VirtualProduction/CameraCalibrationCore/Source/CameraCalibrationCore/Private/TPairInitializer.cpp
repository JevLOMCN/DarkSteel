// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 2

// operator<unsigned_int,FLensDistortionSceneViewExtension::FCameraDistortionProxy>_TTuple<unsigned_int,FLensDistortionSceneViewExtension::FCameraDistortionProxy> @ 14d680920

TTuple<unsigned_int,FLensDistortionSceneViewExtension::FCameraDistortionProxy> * __thiscall
TPairInitializer<unsigned_int_&&,FLensDistortionSceneViewExtension::FCameraDistortionProxy_&&>::
operator<unsigned_int,FLensDistortionSceneViewExtension::FCameraDistortionProxy>_TTuple<unsigned_int,FLensDistortionSceneViewExtension::FCameraDistortionProxy>
          (TPairInitializer<unsigned_int_&&,FLensDistortionSceneViewExtension::FCameraDistortionProxy_&&>
           *this,TTuple<unsigned_int,FLensDistortionSceneViewExtension::FCameraDistortionProxy>
                 *__return_storage_ptr__)

{
  FCameraDistortionProxy *pFVar1;
  FWeakObjectPtr FVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pFVar1 = this->Value;
  *(uint *)__return_storage_ptr__ = *this->Key;
  FDisplacementMapBlendingParams::FDisplacementMapBlendingParams
            ((FDisplacementMapBlendingParams *)&__return_storage_ptr__->field_0x8,&pFVar1->Params);
  *(float *)&__return_storage_ptr__->field_0x138 = pFVar1->CameraOverscan;
  fVar3 = (pFVar1->FilmbackSettings).SensorHeight;
  fVar4 = (pFVar1->FilmbackSettings).SensorHorizontalOffset;
  fVar5 = (pFVar1->FilmbackSettings).SensorVerticalOffset;
  *(float *)&__return_storage_ptr__->field_0x13c = (pFVar1->FilmbackSettings).SensorWidth;
  *(float *)&__return_storage_ptr__->field_0x140 = fVar3;
  *(float *)&__return_storage_ptr__->field_0x144 = fVar4;
  *(float *)&__return_storage_ptr__->field_0x148 = fVar5;
  *(float *)&__return_storage_ptr__->field_0x14c = (pFVar1->FilmbackSettings).SensorAspectRatio;
  FVar2 = (pFVar1->LensDistortionHandler).WeakPtr;
  *(int *)&__return_storage_ptr__->field_0x150 = FVar2.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x154 = FVar2.ObjectSerialNumber;
  return __return_storage_ptr__;
}

// operator<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>_TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_> @ 14d6809a0

TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_> *
__thiscall
TPairInitializer<TSubclassOf<ULensDistortionModelHandlerBase>_&&,TSoftObjectPtr<UMaterialInterface>_&&>
::
operator<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>_TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>
          (TPairInitializer<TSubclassOf<ULensDistortionModelHandlerBase>_&&,TSoftObjectPtr<UMaterialInterface>_&&>
           *this,TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>
                 *__return_storage_ptr__)

{
  TSoftObjectPtr<UMaterialInterface> *pTVar1;
  TObjectPtr<UClass>_u_0 TVar2;
  undefined8 uVar3;
  
  pTVar1 = this->Value;
  TVar2 = (TObjectPtr<UClass>_u_0)((TObjectPtr<UClass>_u_0 *)this->Key)->DebugPtr;
  *(TObjectPtr<UClass>_u_0 *)__return_storage_ptr__ = TVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2 != (TObjectPtr<UClass>_u_0)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)&pTVar1->SoftObjectPtr;
  uVar3 = *(undefined8 *)&(pTVar1->SoftObjectPtr).field_0x10;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 =
       *(undefined8 *)&(pTVar1->SoftObjectPtr).field_0x8;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar3;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 =
       *(undefined8 *)&(pTVar1->SoftObjectPtr).field_0x18;
  *(undefined8 *)&(pTVar1->SoftObjectPtr).field_0x18 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 =
       *(undefined4 *)&(pTVar1->SoftObjectPtr).field_0x20;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c =
       *(undefined4 *)&(pTVar1->SoftObjectPtr).field_0x24;
  *(undefined8 *)&(pTVar1->SoftObjectPtr).field_0x20 = 0;
  return __return_storage_ptr__;
}

