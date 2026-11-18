// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TrackingAlignment
// Functions: 12

// StaticClass @ 14d374900

UClass * __cdecl UTrackingAlignmentCalibrationProfile::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTrackingAlignmentCalibrationProfile.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TrackingAlignment",L"TrackingAlignmentCalibrationProfile",
               &Z_Registration_Info_UClass_UTrackingAlignmentCalibrationProfile.InnerSingleton,
               StaticRegisterNativesUTrackingAlignmentCalibrationProfile,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTrackingAlignmentCalibrationProfile>,
               InternalVTableHelperCtorCaller<UTrackingAlignmentCalibrationProfile>,local_res8,
               UPrimaryDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTrackingAlignmentCalibrationProfile.InnerSingleton;
}

// UTrackingAlignmentCalibrationProfile @ 14d375190

UTrackingAlignmentCalibrationProfile * __thiscall
UTrackingAlignmentCalibrationProfile::UTrackingAlignmentCalibrationProfile
          (UTrackingAlignmentCalibrationProfile *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UPrimaryDataAsset::UPrimaryDataAsset((UPrimaryDataAsset *)this,param_1);
  puVar1 = &(this->TrackerAActors).SourceActor.SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UTrackingAlignmentCalibrationProfile__6B_;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->TrackerAActors).SourceActor.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TrackerAActors).SourceActor.SoftObjectPtr = 0;
  *(undefined8 *)&(this->TrackerAActors).SourceActor.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TrackerAActors).SourceActor.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->TrackerAActors).OriginActor.SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->TrackerAActors).OriginActor.SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->TrackerAActors).OriginActor.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TrackerAActors).OriginActor.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TrackerAActors).OriginActor.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->TrackerBActors).SourceActor.SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->TrackerBActors).SourceActor.SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->TrackerBActors).SourceActor.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TrackerBActors).SourceActor.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TrackerBActors).SourceActor.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->TrackerBActors).OriginActor.SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->TrackerBActors).OriginActor.SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->TrackerBActors).OriginActor.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TrackerBActors).OriginActor.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TrackerBActors).OriginActor.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Samples).ArrayNum = 0;
  (this->Samples).ArrayMax = 0;
  return this;
}

// UTrackingAlignmentCalibrationProfile @ 14d375260

UTrackingAlignmentCalibrationProfile * __thiscall
UTrackingAlignmentCalibrationProfile::UTrackingAlignmentCalibrationProfile
          (UTrackingAlignmentCalibrationProfile *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UPrimaryDataAsset::UPrimaryDataAsset((UPrimaryDataAsset *)this,param_1);
  puVar1 = &(this->TrackerAActors).SourceActor.SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UTrackingAlignmentCalibrationProfile__6B_;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->TrackerAActors).SourceActor.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TrackerAActors).SourceActor.SoftObjectPtr = 0;
  *(undefined8 *)&(this->TrackerAActors).SourceActor.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TrackerAActors).SourceActor.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->TrackerAActors).OriginActor.SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->TrackerAActors).OriginActor.SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->TrackerAActors).OriginActor.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TrackerAActors).OriginActor.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TrackerAActors).OriginActor.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->TrackerBActors).SourceActor.SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->TrackerBActors).SourceActor.SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->TrackerBActors).SourceActor.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TrackerBActors).SourceActor.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TrackerBActors).SourceActor.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->TrackerBActors).OriginActor.SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->TrackerBActors).OriginActor.SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->TrackerBActors).OriginActor.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TrackerBActors).OriginActor.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TrackerBActors).OriginActor.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Samples).ArrayNum = 0;
  (this->Samples).ArrayMax = 0;
  return this;
}

// ~UTrackingAlignmentCalibrationProfile @ 14d375460

void __thiscall
UTrackingAlignmentCalibrationProfile::~UTrackingAlignmentCalibrationProfile
          (UTrackingAlignmentCalibrationProfile *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UTrackingAlignmentCalibrationProfile__6B_;
  pFVar1 = (this->Samples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->TrackerBActors).OriginActor.SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->TrackerBActors).SourceActor.SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->TrackerAActors).OriginActor.SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->TrackerAActors).SourceActor.SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UPrimaryDataAsset::~UPrimaryDataAsset((UPrimaryDataAsset *)this);
  return;
}

// CaptureSample @ 14d375610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UTrackingAlignmentCalibrationProfile::CaptureSample
          (UTrackingAlignmentCalibrationProfile *this,FTrackingAlignmentSample *param_1)

{
  int *piVar1;
  USceneComponent *pUVar2;
  FTrackingAlignmentSample *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  AActor *pAVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  TTransform<double> *pTVar12;
  TArray<FTrackingAlignmentSample,TSizedDefaultAllocator<32>_> *pTVar13;
  TTransform<double> *pTVar14;
  undefined1 auStack_1f8 [32];
  FTrackingAlignmentSample *local_1d8;
  FTrackingAlignmentSample *local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  if ((*(longlong *)&(this->TrackerAActors).SourceActor.SoftObjectPtr.field_0x8 == 0) ||
     (*(longlong *)&(this->TrackerBActors).SourceActor.SoftObjectPtr.field_0x8 == 0)) {
    bVar6 = false;
  }
  else {
    pAVar9 = TSoftObjectPtr<AActor>::LoadSynchronous(&(this->TrackerAActors).SourceActor);
    pTVar12 = &UE::Math::TTransform<double>::Identity;
    pUVar2 = (pAVar9->RootComponent).field0_0x0.DebugPtr;
    if (pUVar2 == (USceneComponent *)0x0) {
      pTVar14 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar14 = &pUVar2->ComponentToWorld;
    }
    local_1a8.Rotation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar14->Rotation).XY.m128d_f64;
    local_1a8.Rotation.XY.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(pTVar14->Rotation).XY.m128d_f64 + 4);
    local_1a8.Rotation.XY.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar14->Rotation).XY.m128d_f64 + 1)
    ;
    local_1a8.Rotation.XY.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(pTVar14->Rotation).XY.m128d_f64 + 0xc);
    local_1a8.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar14->Rotation).ZW.m128d_f64;
    local_1a8.Rotation.ZW.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(pTVar14->Rotation).ZW.m128d_f64 + 4);
    local_1a8.Rotation.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar14->Rotation).ZW.m128d_f64 + 1)
    ;
    local_1a8.Rotation.ZW.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(pTVar14->Rotation).ZW.m128d_f64 + 0xc);
    local_1a8.Translation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar14->Translation).XY.m128d_f64
    ;
    local_1a8.Translation.XY.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(pTVar14->Translation).XY.m128d_f64 + 4);
    local_1a8.Translation.XY.m128d_f64[1]._0_4_ =
         *(undefined4 *)((pTVar14->Translation).XY.m128d_f64 + 1);
    local_1a8.Translation.XY.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(pTVar14->Translation).XY.m128d_f64 + 0xc);
    local_1a8.Translation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar14->Translation).ZW.m128d_f64
    ;
    local_1a8.Translation.ZW.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(pTVar14->Translation).ZW.m128d_f64 + 4);
    local_1a8.Translation.ZW.m128d_f64[1]._0_4_ =
         *(undefined4 *)((pTVar14->Translation).ZW.m128d_f64 + 1);
    local_1a8.Translation.ZW.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(pTVar14->Translation).ZW.m128d_f64 + 0xc);
    local_1a8.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar14->Scale3D).XY.m128d_f64;
    local_1a8.Scale3D.XY.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(pTVar14->Scale3D).XY.m128d_f64 + 4);
    local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar14->Scale3D).XY.m128d_f64 + 1);
    local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(pTVar14->Scale3D).XY.m128d_f64 + 0xc);
    local_1a8.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar14->Scale3D).ZW.m128d_f64;
    local_1a8.Scale3D.ZW.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(pTVar14->Scale3D).ZW.m128d_f64 + 4);
    local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar14->Scale3D).ZW.m128d_f64 + 1);
    local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(pTVar14->Scale3D).ZW.m128d_f64 + 0xc);
    if (*(longlong *)&(this->TrackerAActors).OriginActor.SoftObjectPtr.field_0x8 != 0) {
      pAVar9 = TSoftObjectPtr<AActor>::LoadSynchronous(&(this->TrackerAActors).OriginActor);
      pUVar2 = (pAVar9->RootComponent).field0_0x0.DebugPtr;
      pTVar14 = &pUVar2->ComponentToWorld;
      if (pUVar2 == (USceneComponent *)0x0) {
        pTVar14 = &UE::Math::TTransform<double>::Identity;
      }
      pTVar14 = UE::Math::TTransform<double>::GetRelativeTransform(&local_1a8,&local_e8,pTVar14);
      local_1a8.Rotation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar14->Rotation).XY.m128d_f64;
      local_1a8.Rotation.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(pTVar14->Rotation).XY.m128d_f64 + 4);
      local_1a8.Rotation.XY.m128d_f64[1]._0_4_ =
           *(undefined4 *)((pTVar14->Rotation).XY.m128d_f64 + 1);
      local_1a8.Rotation.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(pTVar14->Rotation).XY.m128d_f64 + 0xc);
      local_1a8.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar14->Rotation).ZW.m128d_f64;
      local_1a8.Rotation.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(pTVar14->Rotation).ZW.m128d_f64 + 4);
      local_1a8.Rotation.ZW.m128d_f64[1]._0_4_ =
           *(undefined4 *)((pTVar14->Rotation).ZW.m128d_f64 + 1);
      local_1a8.Rotation.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(pTVar14->Rotation).ZW.m128d_f64 + 0xc);
      local_1a8.Translation.XY.m128d_f64[0]._0_4_ =
           *(undefined4 *)(pTVar14->Translation).XY.m128d_f64;
      local_1a8.Translation.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(pTVar14->Translation).XY.m128d_f64 + 4);
      local_1a8.Translation.XY.m128d_f64[1]._0_4_ =
           *(undefined4 *)((pTVar14->Translation).XY.m128d_f64 + 1);
      local_1a8.Translation.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(pTVar14->Translation).XY.m128d_f64 + 0xc);
      local_1a8.Translation.ZW.m128d_f64[0]._0_4_ =
           *(undefined4 *)(pTVar14->Translation).ZW.m128d_f64;
      local_1a8.Translation.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(pTVar14->Translation).ZW.m128d_f64 + 4);
      local_1a8.Translation.ZW.m128d_f64[1]._0_4_ =
           *(undefined4 *)((pTVar14->Translation).ZW.m128d_f64 + 1);
      local_1a8.Translation.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(pTVar14->Translation).ZW.m128d_f64 + 0xc);
      local_1a8.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar14->Scale3D).XY.m128d_f64;
      local_1a8.Scale3D.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(pTVar14->Scale3D).XY.m128d_f64 + 4);
      local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar14->Scale3D).XY.m128d_f64 + 1)
      ;
      local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(pTVar14->Scale3D).XY.m128d_f64 + 0xc);
      local_1a8.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar14->Scale3D).ZW.m128d_f64;
      local_1a8.Scale3D.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(pTVar14->Scale3D).ZW.m128d_f64 + 4);
      local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar14->Scale3D).ZW.m128d_f64 + 1)
      ;
      local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(pTVar14->Scale3D).ZW.m128d_f64 + 0xc);
    }
    *(undefined4 *)(param_1->TransformA).Rotation.XY.m128d_f64 =
         local_1a8.Rotation.XY.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(param_1->TransformA).Rotation.XY.m128d_f64 + 4) =
         local_1a8.Rotation.XY.m128d_f64[0]._4_4_;
    *(undefined4 *)((param_1->TransformA).Rotation.XY.m128d_f64 + 1) =
         local_1a8.Rotation.XY.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(param_1->TransformA).Rotation.XY.m128d_f64 + 0xc) =
         local_1a8.Rotation.XY.m128d_f64[1]._4_4_;
    *(undefined4 *)(param_1->TransformA).Rotation.ZW.m128d_f64 =
         local_1a8.Rotation.ZW.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(param_1->TransformA).Rotation.ZW.m128d_f64 + 4) =
         local_1a8.Rotation.ZW.m128d_f64[0]._4_4_;
    *(undefined4 *)((param_1->TransformA).Rotation.ZW.m128d_f64 + 1) =
         local_1a8.Rotation.ZW.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(param_1->TransformA).Rotation.ZW.m128d_f64 + 0xc) =
         local_1a8.Rotation.ZW.m128d_f64[1]._4_4_;
    *(undefined4 *)(param_1->TransformA).Translation.XY.m128d_f64 =
         local_1a8.Translation.XY.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(param_1->TransformA).Translation.XY.m128d_f64 + 4) =
         local_1a8.Translation.XY.m128d_f64[0]._4_4_;
    *(undefined4 *)((param_1->TransformA).Translation.XY.m128d_f64 + 1) =
         local_1a8.Translation.XY.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(param_1->TransformA).Translation.XY.m128d_f64 + 0xc) =
         local_1a8.Translation.XY.m128d_f64[1]._4_4_;
    *(undefined4 *)(param_1->TransformA).Translation.ZW.m128d_f64 =
         local_1a8.Translation.ZW.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(param_1->TransformA).Translation.ZW.m128d_f64 + 4) =
         local_1a8.Translation.ZW.m128d_f64[0]._4_4_;
    *(undefined4 *)((param_1->TransformA).Translation.ZW.m128d_f64 + 1) =
         local_1a8.Translation.ZW.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(param_1->TransformA).Translation.ZW.m128d_f64 + 0xc) =
         local_1a8.Translation.ZW.m128d_f64[1]._4_4_;
    *(undefined4 *)(param_1->TransformA).Scale3D.XY.m128d_f64 =
         local_1a8.Scale3D.XY.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(param_1->TransformA).Scale3D.XY.m128d_f64 + 4) =
         local_1a8.Scale3D.XY.m128d_f64[0]._4_4_;
    *(undefined4 *)((param_1->TransformA).Scale3D.XY.m128d_f64 + 1) =
         local_1a8.Scale3D.XY.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(param_1->TransformA).Scale3D.XY.m128d_f64 + 0xc) =
         local_1a8.Scale3D.XY.m128d_f64[1]._4_4_;
    *(undefined4 *)(param_1->TransformA).Scale3D.ZW.m128d_f64 =
         local_1a8.Scale3D.ZW.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(param_1->TransformA).Scale3D.ZW.m128d_f64 + 4) =
         local_1a8.Scale3D.ZW.m128d_f64[0]._4_4_;
    *(undefined4 *)((param_1->TransformA).Scale3D.ZW.m128d_f64 + 1) =
         local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(param_1->TransformA).Scale3D.ZW.m128d_f64 + 0xc) =
         local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_;
    pAVar9 = TSoftObjectPtr<AActor>::LoadSynchronous(&(this->TrackerBActors).SourceActor);
    pUVar2 = (pAVar9->RootComponent).field0_0x0.DebugPtr;
    if (pUVar2 == (USceneComponent *)0x0) {
      pTVar14 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar14 = &pUVar2->ComponentToWorld;
    }
    local_148.Rotation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar14->Rotation).XY.m128d_f64;
    local_148.Rotation.XY.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(pTVar14->Rotation).XY.m128d_f64 + 4);
    local_148.Rotation.XY.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar14->Rotation).XY.m128d_f64 + 1)
    ;
    local_148.Rotation.XY.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(pTVar14->Rotation).XY.m128d_f64 + 0xc);
    local_148.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar14->Rotation).ZW.m128d_f64;
    local_148.Rotation.ZW.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(pTVar14->Rotation).ZW.m128d_f64 + 4);
    local_148.Rotation.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar14->Rotation).ZW.m128d_f64 + 1)
    ;
    local_148.Rotation.ZW.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(pTVar14->Rotation).ZW.m128d_f64 + 0xc);
    local_148.Translation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar14->Translation).XY.m128d_f64
    ;
    local_148.Translation.XY.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(pTVar14->Translation).XY.m128d_f64 + 4);
    local_148.Translation.XY.m128d_f64[1]._0_4_ =
         *(undefined4 *)((pTVar14->Translation).XY.m128d_f64 + 1);
    local_148.Translation.XY.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(pTVar14->Translation).XY.m128d_f64 + 0xc);
    local_148.Translation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar14->Translation).ZW.m128d_f64
    ;
    local_148.Translation.ZW.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(pTVar14->Translation).ZW.m128d_f64 + 4);
    local_148.Translation.ZW.m128d_f64[1]._0_4_ =
         *(undefined4 *)((pTVar14->Translation).ZW.m128d_f64 + 1);
    local_148.Translation.ZW.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(pTVar14->Translation).ZW.m128d_f64 + 0xc);
    local_148.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar14->Scale3D).XY.m128d_f64;
    local_148.Scale3D.XY.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(pTVar14->Scale3D).XY.m128d_f64 + 4);
    local_148.Scale3D.XY.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar14->Scale3D).XY.m128d_f64 + 1);
    local_148.Scale3D.XY.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(pTVar14->Scale3D).XY.m128d_f64 + 0xc);
    local_148.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar14->Scale3D).ZW.m128d_f64;
    local_148.Scale3D.ZW.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(pTVar14->Scale3D).ZW.m128d_f64 + 4);
    local_148.Scale3D.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar14->Scale3D).ZW.m128d_f64 + 1);
    local_148.Scale3D.ZW.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(pTVar14->Scale3D).ZW.m128d_f64 + 0xc);
    if (*(longlong *)&(this->TrackerBActors).OriginActor.SoftObjectPtr.field_0x8 != 0) {
      pAVar9 = TSoftObjectPtr<AActor>::LoadSynchronous(&(this->TrackerBActors).OriginActor);
      pUVar2 = (pAVar9->RootComponent).field0_0x0.DebugPtr;
      if (pUVar2 != (USceneComponent *)0x0) {
        pTVar12 = &pUVar2->ComponentToWorld;
      }
      pTVar12 = UE::Math::TTransform<double>::GetRelativeTransform(&local_148,&local_88,pTVar12);
      local_148.Rotation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar12->Rotation).XY.m128d_f64;
      local_148.Rotation.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(pTVar12->Rotation).XY.m128d_f64 + 4);
      local_148.Rotation.XY.m128d_f64[1]._0_4_ =
           *(undefined4 *)((pTVar12->Rotation).XY.m128d_f64 + 1);
      local_148.Rotation.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(pTVar12->Rotation).XY.m128d_f64 + 0xc);
      local_148.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar12->Rotation).ZW.m128d_f64;
      local_148.Rotation.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(pTVar12->Rotation).ZW.m128d_f64 + 4);
      local_148.Rotation.ZW.m128d_f64[1]._0_4_ =
           *(undefined4 *)((pTVar12->Rotation).ZW.m128d_f64 + 1);
      local_148.Rotation.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(pTVar12->Rotation).ZW.m128d_f64 + 0xc);
      local_148.Translation.XY.m128d_f64[0]._0_4_ =
           *(undefined4 *)(pTVar12->Translation).XY.m128d_f64;
      local_148.Translation.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(pTVar12->Translation).XY.m128d_f64 + 4);
      local_148.Translation.XY.m128d_f64[1]._0_4_ =
           *(undefined4 *)((pTVar12->Translation).XY.m128d_f64 + 1);
      local_148.Translation.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(pTVar12->Translation).XY.m128d_f64 + 0xc);
      local_148.Translation.ZW.m128d_f64[0]._0_4_ =
           *(undefined4 *)(pTVar12->Translation).ZW.m128d_f64;
      local_148.Translation.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(pTVar12->Translation).ZW.m128d_f64 + 4);
      local_148.Translation.ZW.m128d_f64[1]._0_4_ =
           *(undefined4 *)((pTVar12->Translation).ZW.m128d_f64 + 1);
      local_148.Translation.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(pTVar12->Translation).ZW.m128d_f64 + 0xc);
      local_148.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar12->Scale3D).XY.m128d_f64;
      local_148.Scale3D.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(pTVar12->Scale3D).XY.m128d_f64 + 4);
      local_148.Scale3D.XY.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar12->Scale3D).XY.m128d_f64 + 1)
      ;
      local_148.Scale3D.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(pTVar12->Scale3D).XY.m128d_f64 + 0xc);
      local_148.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar12->Scale3D).ZW.m128d_f64;
      local_148.Scale3D.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(pTVar12->Scale3D).ZW.m128d_f64 + 4);
      local_148.Scale3D.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar12->Scale3D).ZW.m128d_f64 + 1)
      ;
      local_148.Scale3D.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(pTVar12->Scale3D).ZW.m128d_f64 + 0xc);
    }
    pTVar13 = &this->Samples;
    *(undefined4 *)(param_1->TransformB).Rotation.XY.m128d_f64 =
         local_148.Rotation.XY.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(param_1->TransformB).Rotation.XY.m128d_f64 + 4) =
         local_148.Rotation.XY.m128d_f64[0]._4_4_;
    *(undefined4 *)((param_1->TransformB).Rotation.XY.m128d_f64 + 1) =
         local_148.Rotation.XY.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(param_1->TransformB).Rotation.XY.m128d_f64 + 0xc) =
         local_148.Rotation.XY.m128d_f64[1]._4_4_;
    *(undefined4 *)(param_1->TransformB).Rotation.ZW.m128d_f64 =
         local_148.Rotation.ZW.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(param_1->TransformB).Rotation.ZW.m128d_f64 + 4) =
         local_148.Rotation.ZW.m128d_f64[0]._4_4_;
    *(undefined4 *)((param_1->TransformB).Rotation.ZW.m128d_f64 + 1) =
         local_148.Rotation.ZW.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(param_1->TransformB).Rotation.ZW.m128d_f64 + 0xc) =
         local_148.Rotation.ZW.m128d_f64[1]._4_4_;
    *(undefined4 *)(param_1->TransformB).Translation.XY.m128d_f64 =
         local_148.Translation.XY.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(param_1->TransformB).Translation.XY.m128d_f64 + 4) =
         local_148.Translation.XY.m128d_f64[0]._4_4_;
    *(undefined4 *)((param_1->TransformB).Translation.XY.m128d_f64 + 1) =
         local_148.Translation.XY.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(param_1->TransformB).Translation.XY.m128d_f64 + 0xc) =
         local_148.Translation.XY.m128d_f64[1]._4_4_;
    *(undefined4 *)(param_1->TransformB).Translation.ZW.m128d_f64 =
         local_148.Translation.ZW.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(param_1->TransformB).Translation.ZW.m128d_f64 + 4) =
         local_148.Translation.ZW.m128d_f64[0]._4_4_;
    *(undefined4 *)((param_1->TransformB).Translation.ZW.m128d_f64 + 1) =
         local_148.Translation.ZW.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(param_1->TransformB).Translation.ZW.m128d_f64 + 0xc) =
         local_148.Translation.ZW.m128d_f64[1]._4_4_;
    *(undefined4 *)(param_1->TransformB).Scale3D.XY.m128d_f64 =
         local_148.Scale3D.XY.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(param_1->TransformB).Scale3D.XY.m128d_f64 + 4) =
         local_148.Scale3D.XY.m128d_f64[0]._4_4_;
    *(undefined4 *)((param_1->TransformB).Scale3D.XY.m128d_f64 + 1) =
         local_148.Scale3D.XY.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(param_1->TransformB).Scale3D.XY.m128d_f64 + 0xc) =
         local_148.Scale3D.XY.m128d_f64[1]._4_4_;
    *(undefined4 *)(param_1->TransformB).Scale3D.ZW.m128d_f64 =
         local_148.Scale3D.ZW.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(param_1->TransformB).Scale3D.ZW.m128d_f64 + 4) =
         local_148.Scale3D.ZW.m128d_f64[0]._4_4_;
    *(undefined4 *)((param_1->TransformB).Scale3D.ZW.m128d_f64 + 1) =
         local_148.Scale3D.ZW.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(param_1->TransformB).Scale3D.ZW.m128d_f64 + 0xc) =
         local_148.Scale3D.ZW.m128d_f64[1]._4_4_;
    pFVar3 = (FTrackingAlignmentSample *)(pTVar13->AllocatorInstance).Data;
    if ((pFVar3 <= param_1) &&
       (lVar10 = (longlong)(this->Samples).ArrayMax, param_1 < pFVar3 + lVar10)) {
      local_1c0 = (longlong)(this->Samples).ArrayNum;
      local_1b8 = 0xc0;
      local_1d8 = param_1;
      local_1d0 = pFVar3;
      local_1c8 = lVar10;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    iVar8 = (this->Samples).ArrayNum;
    piVar1 = &(this->Samples).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10c0,&pTVar13->AllocatorInstance,piVar1);
    }
    (this->Samples).ArrayNum = iVar8 + 1;
    dVar5 = (param_1->TransformA).Rotation.XY.m128d_f64[1];
    bVar6 = true;
    pFVar11 = (pTVar13->AllocatorInstance).Data + (longlong)iVar8 * 0xc0;
    *(double *)pFVar11 = (param_1->TransformA).Rotation.XY.m128d_f64[0];
    *(double *)(pFVar11 + 8) = dVar5;
    dVar5 = (param_1->TransformA).Rotation.ZW.m128d_f64[1];
    *(double *)(pFVar11 + 0x10) = (param_1->TransformA).Rotation.ZW.m128d_f64[0];
    *(double *)(pFVar11 + 0x18) = dVar5;
    dVar5 = (param_1->TransformA).Translation.XY.m128d_f64[1];
    *(double *)(pFVar11 + 0x20) = (param_1->TransformA).Translation.XY.m128d_f64[0];
    *(double *)(pFVar11 + 0x28) = dVar5;
    dVar5 = (param_1->TransformA).Translation.ZW.m128d_f64[1];
    *(double *)(pFVar11 + 0x30) = (param_1->TransformA).Translation.ZW.m128d_f64[0];
    *(double *)(pFVar11 + 0x38) = dVar5;
    dVar5 = (param_1->TransformA).Scale3D.XY.m128d_f64[1];
    *(double *)(pFVar11 + 0x40) = (param_1->TransformA).Scale3D.XY.m128d_f64[0];
    *(double *)(pFVar11 + 0x48) = dVar5;
    dVar5 = (param_1->TransformA).Scale3D.ZW.m128d_f64[1];
    *(double *)(pFVar11 + 0x50) = (param_1->TransformA).Scale3D.ZW.m128d_f64[0];
    *(double *)(pFVar11 + 0x58) = dVar5;
    dVar5 = (param_1->TransformB).Rotation.XY.m128d_f64[1];
    *(double *)(pFVar11 + 0x60) = (param_1->TransformB).Rotation.XY.m128d_f64[0];
    *(double *)(pFVar11 + 0x68) = dVar5;
    dVar5 = (param_1->TransformB).Rotation.ZW.m128d_f64[1];
    *(double *)(pFVar11 + 0x70) = (param_1->TransformB).Rotation.ZW.m128d_f64[0];
    *(double *)(pFVar11 + 0x78) = dVar5;
    dVar5 = (param_1->TransformB).Translation.XY.m128d_f64[1];
    *(double *)(pFVar11 + 0x80) = (param_1->TransformB).Translation.XY.m128d_f64[0];
    *(double *)(pFVar11 + 0x88) = dVar5;
    dVar5 = (param_1->TransformB).Translation.ZW.m128d_f64[1];
    *(double *)(pFVar11 + 0x90) = (param_1->TransformB).Translation.ZW.m128d_f64[0];
    *(double *)(pFVar11 + 0x98) = dVar5;
    dVar5 = (param_1->TransformB).Scale3D.XY.m128d_f64[1];
    *(double *)(pFVar11 + 0xa0) = (param_1->TransformB).Scale3D.XY.m128d_f64[0];
    *(double *)(pFVar11 + 0xa8) = dVar5;
    dVar5 = (param_1->TransformB).Scale3D.ZW.m128d_f64[1];
    *(double *)(pFVar11 + 0xb0) = (param_1->TransformB).Scale3D.ZW.m128d_f64[0];
    *(double *)(pFVar11 + 0xb8) = dVar5;
  }
  return bVar6;
}

// ClearSamples @ 14d375950

void __thiscall
UTrackingAlignmentCalibrationProfile::ClearSamples(UTrackingAlignmentCalibrationProfile *this)

{
  int *piVar1;
  
  piVar1 = &(this->Samples).ArrayMax;
  (this->Samples).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,0x10,0,&(this->Samples).AllocatorInstance,0,piVar1);
  }
  return;
}

// GetPrivateStaticClass @ 14d376d30

UClass * __cdecl UTrackingAlignmentCalibrationProfile::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTrackingAlignmentCalibrationProfile.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TrackingAlignment",L"TrackingAlignmentCalibrationProfile",
               &Z_Registration_Info_UClass_UTrackingAlignmentCalibrationProfile.InnerSingleton,
               StaticRegisterNativesUTrackingAlignmentCalibrationProfile,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTrackingAlignmentCalibrationProfile>,
               InternalVTableHelperCtorCaller<UTrackingAlignmentCalibrationProfile>,local_res8,
               UPrimaryDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTrackingAlignmentCalibrationProfile.InnerSingleton;
}

// RemoveSample @ 14d3771b0

bool __thiscall
UTrackingAlignmentCalibrationProfile::RemoveSample
          (UTrackingAlignmentCalibrationProfile *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FScriptContainerElement *_Dst;
  int iVar5;
  
  if ((-1 < param_1) && (param_1 < (this->Samples).ArrayNum)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    _Dst = (this->Samples).AllocatorInstance.Data + (longlong)param_1 * 0xc0;
    iVar5 = (this->Samples).ArrayNum + ~param_1;
    if (iVar5 != 0) {
      memmove(_Dst,_Dst + 0xc0,(longlong)iVar5 * 0xc0);
    }
    piVar1 = &(this->Samples).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,0x10,&(this->Samples).AllocatorInstance,(this->Samples).ArrayNum,
               &(this->Samples).ArrayMax);
    return true;
  }
  return false;
}

// StaticRegisterNativesUTrackingAlignmentCalibrationProfile @ 14d377290

void __cdecl
UTrackingAlignmentCalibrationProfile::StaticRegisterNativesUTrackingAlignmentCalibrationProfile
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UTrackingAlignmentCalibrationProfile_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCaptureSample @ 14d3773f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UTrackingAlignmentCalibrationProfile::execCaptureSample
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  FTrackingAlignmentSample *pFVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_118 [32];
  FTrackingAlignmentSample local_f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  uVar6 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar7 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_f8.TransformA.Rotation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_f8.TransformA.Rotation.ZW.m128d_f64[1] =
       (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_f8.TransformA.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_f8.TransformA.Translation.XY.m128d_f64[1] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_f8.TransformA.Rotation.XY.m128d_f64[1]._0_4_ = uVar6;
  local_f8.TransformA.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_f8.TransformA.Rotation.XY.m128d_f64[1]._4_4_ = uVar7;
  local_f8.TransformB.Rotation.XY.m128d_f64[1]._0_4_ = uVar6;
  local_f8.TransformB.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_f8.TransformB.Rotation.XY.m128d_f64[1]._4_4_ = uVar7;
  local_f8.TransformA.Translation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_f8.TransformA.Translation.ZW.m128d_f64[1] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_f8.TransformA.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
  ;
  local_f8.TransformA.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1]
  ;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_f8.TransformA.Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  local_f8.TransformA.Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  local_f8.TransformB.Rotation.ZW.m128d_f64[0] = local_f8.TransformA.Rotation.ZW.m128d_f64[0];
  local_f8.TransformB.Rotation.ZW.m128d_f64[1] = local_f8.TransformA.Rotation.ZW.m128d_f64[1];
  local_f8.TransformB.Translation.XY.m128d_f64[0] = local_f8.TransformA.Translation.XY.m128d_f64[0];
  local_f8.TransformB.Translation.XY.m128d_f64[1] = local_f8.TransformA.Translation.XY.m128d_f64[1];
  local_f8.TransformB.Translation.ZW.m128d_f64[0] = local_f8.TransformA.Translation.ZW.m128d_f64[0];
  local_f8.TransformB.Translation.ZW.m128d_f64[1] = local_f8.TransformA.Translation.ZW.m128d_f64[1];
  local_f8.TransformB.Scale3D.XY.m128d_f64[0] = local_f8.TransformA.Scale3D.XY.m128d_f64[0];
  local_f8.TransformB.Scale3D.XY.m128d_f64[1] = local_f8.TransformA.Scale3D.XY.m128d_f64[1];
  local_f8.TransformB.Scale3D.ZW.m128d_f64[0] = local_f8.TransformA.Scale3D.ZW.m128d_f64[0];
  local_f8.TransformB.Scale3D.ZW.m128d_f64[1] = local_f8.TransformA.Scale3D.ZW.m128d_f64[1];
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  pFVar5 = &local_f8;
  if ((FTrackingAlignmentSample *)param_2->MostRecentPropertyAddress !=
      (FTrackingAlignmentSample *)0x0) {
    pFVar5 = (FTrackingAlignmentSample *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar4 = CaptureSample((UTrackingAlignmentCalibrationProfile *)param_1,pFVar5);
  *(bool *)param_3 = bVar4;
  return;
}

// execClearSamples @ 14d377540

void __cdecl
UTrackingAlignmentCalibrationProfile::execClearSamples
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[5].field_0x10 = 0;
  if (*(int *)&param_1[5].field_0x14 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,0x10,0,(ForAnyElementType *)&param_1[5].field_0x8,0,
               (int *)&param_1[5].field_0x14);
  }
  return;
}

// execRemoveSample @ 14d377de0

void __cdecl
UTrackingAlignmentCalibrationProfile::execRemoveSample
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  void *_Dst;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar7 = (longlong)(int)local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((int)local_res10[0] < 0) || (*(int *)&param_1[5].field_0x10 <= (int)local_res10[0])) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  uVar5 = ~local_res10[0];
  uVar6 = 0;
  if ((int)local_res10[0] < *(int *)&param_1[5].field_0x10) {
    uVar6 = uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  _Dst = (void *)(*(longlong *)&param_1[5].field_0x8 + lVar7 * 0xc0);
  iVar4 = *(int *)&param_1[5].field_0x10 + uVar5;
  if (iVar4 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0xc0),(longlong)iVar4 * 0xc0);
  }
  *(int *)&param_1[5].field_0x10 = *(int *)&param_1[5].field_0x10 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc0,0x10,(ForAnyElementType *)&param_1[5].field_0x8,*(int *)&param_1[5].field_0x10,
             (int *)&param_1[5].field_0x14);
  *(undefined1 *)param_3 = 1;
  return;
}

