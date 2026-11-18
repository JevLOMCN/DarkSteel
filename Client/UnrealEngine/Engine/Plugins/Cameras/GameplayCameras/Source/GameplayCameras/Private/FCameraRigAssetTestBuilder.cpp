// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// FCameraRigAssetTestBuilder @ 14d6557f0

FCameraRigAssetTestBuilder * __thiscall
UE::Cameras::Test::FCameraRigAssetTestBuilder::FCameraRigAssetTestBuilder
          (FCameraRigAssetTestBuilder *this,
          TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> *param_1,FName param_2,
          UObject *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> *paVar2;
  TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = param_1->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar2 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar2 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
  }
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined ***)this =
       &
       ___7__TCameraRigAssetTestBuilderBase_VFCameraRigAssetTestBuilder_Test_Cameras_UE___Test_Cameras_UE__6B_
  ;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::Initialize
            ((TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> *)this,
             &local_18,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  *(undefined ***)this = &___7FCameraRigAssetTestBuilder_Test_Cameras_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// FCameraRigAssetTestBuilder @ 14d655890

FCameraRigAssetTestBuilder * __thiscall
UE::Cameras::Test::FCameraRigAssetTestBuilder::FCameraRigAssetTestBuilder
          (FCameraRigAssetTestBuilder *this,FName param_1,UObject *param_2)

{
  TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> local_18;
  
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined ***)this =
       &
       ___7__TCameraRigAssetTestBuilderBase_VFCameraRigAssetTestBuilder_Test_Cameras_UE___Test_Cameras_UE__6B_
  ;
  local_18.Object = (FNamedObjectRegistry *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::Initialize
            ((TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> *)this,
             &local_18,param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  *(undefined ***)this = &___7FCameraRigAssetTestBuilder_Test_Cameras_UE__6B_;
  return this;
}

