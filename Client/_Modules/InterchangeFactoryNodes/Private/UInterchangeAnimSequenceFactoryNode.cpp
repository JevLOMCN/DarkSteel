// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 107

// StaticClass @ 14e51f120

UClass * __cdecl UInterchangeAnimSequenceFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAnimSequenceFactoryNode.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeAnimSequenceFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeAnimSequenceFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeAnimSequenceFactoryNode,0x500,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAnimSequenceFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeAnimSequenceFactoryNode>,local_res8,
               UInterchangeFactoryBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAnimSequenceFactoryNode.InnerSingleton;
}

// UInterchangeAnimSequenceFactoryNode @ 14e52eca0

UInterchangeAnimSequenceFactoryNode * __thiscall
UInterchangeAnimSequenceFactoryNode::UInterchangeAnimSequenceFactoryNode
          (UInterchangeAnimSequenceFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode
            ((UInterchangeFactoryBaseNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeAnimSequenceFactoryNode__6B_;
  (this->Macro_CustomSkeletonFactoryNodeUidKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSkeletonFactoryNodeUidKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSkeletonFactoryNodeUidKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomSkeletonFactoryNodeUidKey).Key,L"SkeletonFactoryNodeUid")
  ;
  (this->Macro_CustomImportBoneTracksKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomImportBoneTracksKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomImportBoneTracksKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomImportBoneTracksKey).Key,L"ImportBoneTracks");
  (this->Macro_CustomImportBoneTracksSampleRateKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomImportBoneTracksSampleRateKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomImportBoneTracksSampleRateKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomImportBoneTracksSampleRateKey).Key,L"ImportBoneTracksSampleRate");
  (this->Macro_CustomImportBoneTracksRangeStartKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomImportBoneTracksRangeStartKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomImportBoneTracksRangeStartKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomImportBoneTracksRangeStartKey).Key,L"ImportBoneTracksRangeStart");
  (this->Macro_CustomImportBoneTracksRangeStopKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomImportBoneTracksRangeStopKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomImportBoneTracksRangeStopKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomImportBoneTracksRangeStopKey).Key,L"ImportBoneTracksRangeStop");
  (this->Macro_CustomImportAttributeCurvesKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomImportAttributeCurvesKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomImportAttributeCurvesKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomImportAttributeCurvesKey).Key,L"ImportAttributeCurves");
  (this->Macro_CustomDoNotImportCurveWithZeroKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomDoNotImportCurveWithZeroKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomDoNotImportCurveWithZeroKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomDoNotImportCurveWithZeroKey).Key,L"DoNotImportCurveWithZero");
  (this->Macro_CustomAddCurveMetadataToSkeletonKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomAddCurveMetadataToSkeletonKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAddCurveMetadataToSkeletonKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomAddCurveMetadataToSkeletonKey).Key,L"AddCurveMetadataToSkeleton");
  (this->Macro_CustomRemoveCurveRedundantKeysKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomRemoveCurveRedundantKeysKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomRemoveCurveRedundantKeysKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomRemoveCurveRedundantKeysKey).Key,L"RemoveCurveRedundantKeys");
  (this->Macro_CustomMaterialDriveParameterOnCustomAttributeKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomMaterialDriveParameterOnCustomAttributeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomMaterialDriveParameterOnCustomAttributeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomMaterialDriveParameterOnCustomAttributeKey).Key,
             L"MaterialDriveParameterOnCustomAttribute");
  (this->Macro_CustomDeleteExistingMorphTargetCurvesKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomDeleteExistingMorphTargetCurvesKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomDeleteExistingMorphTargetCurvesKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomDeleteExistingMorphTargetCurvesKey).Key,
             L"DeleteExistingMorphTargetCurves");
  (this->Macro_CustomDeleteExistingCustomAttributeCurvesKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomDeleteExistingCustomAttributeCurvesKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomDeleteExistingCustomAttributeCurvesKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomDeleteExistingCustomAttributeCurvesKey).Key,
             L"DeleteExistingCustomAttributeCurves");
  (this->Macro_CustomDeleteExistingNonCurveCustomAttributesKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomDeleteExistingNonCurveCustomAttributesKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomDeleteExistingNonCurveCustomAttributesKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomDeleteExistingNonCurveCustomAttributesKey).Key,
             L"DeleteExistingNonCurveCustomAttributes");
  (this->Macro_CustomSkeletonSoftObjectPathKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSkeletonSoftObjectPathKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSkeletonSoftObjectPathKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomSkeletonSoftObjectPathKey).Key,L"SkeletonSoftObjectPath")
  ;
  (this->AnimatedMorphTargetDependencies).Attributes.Object = (FAttributeStorage *)0x0;
  (this->AnimatedMorphTargetDependencies).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AnimatedMorphTargetDependencies).KeyCount.Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AnimatedMorphTargetDependencies).KeyCount.Key.Data.ArrayNum = 0;
  (this->AnimatedMorphTargetDependencies).KeyCount.Key.Data.ArrayMax = 0;
  (this->AnimatedAttributeCurveNames).Attributes.Object = (FAttributeStorage *)0x0;
  (this->AnimatedAttributeCurveNames).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AnimatedAttributeCurveNames).KeyCount.Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AnimatedAttributeCurveNames).KeyCount.Key.Data.ArrayNum = 0;
  (this->AnimatedAttributeCurveNames).KeyCount.Key.Data.ArrayMax = 0;
  (this->AnimatedAttributeStepCurveNames).Attributes.Object = (FAttributeStorage *)0x0;
  (this->AnimatedAttributeStepCurveNames).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AnimatedAttributeStepCurveNames).KeyCount.Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AnimatedAttributeStepCurveNames).KeyCount.Key.Data.ArrayNum = 0;
  (this->AnimatedAttributeStepCurveNames).KeyCount.Key.Data.ArrayMax = 0;
  (this->AnimatedMaterialCurveSuffixes).Attributes.Object = (FAttributeStorage *)0x0;
  (this->AnimatedMaterialCurveSuffixes).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AnimatedMaterialCurveSuffixes).KeyCount.Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AnimatedMaterialCurveSuffixes).KeyCount.Key.Data.ArrayNum = 0;
  (this->AnimatedMaterialCurveSuffixes).KeyCount.Key.Data.ArrayMax = 0;
  *(undefined8 *)&(this->SceneNodeAnimationPayLoadKeyUidMap).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->SceneNodeAnimationPayLoadKeyUidMap).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->SceneNodeAnimationPayLoadKeyUidMap).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->SceneNodeAnimationPayLoadKeyUidMap).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->SceneNodeAnimationPayLoadKeyUidMap).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->SceneNodeAnimationPayLoadKeyUidMap).CachedKeysAndValues.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->SceneNodeAnimationPayLoadKeyUidMap).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->SceneNodeAnimationPayLoadKeyUidMap).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->SceneNodeAnimationPayLoadKeyUidMap).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->SceneNodeAnimationPayLoadKeyUidMap).KeyCountHandle);
  (this->SceneNodeAnimationPayLoadKeyUidMap).Attributes.Object = (FAttributeStorage *)0x0;
  (this->SceneNodeAnimationPayLoadKeyUidMap).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->SceneNodeAnimationPayLoadKeyTypeMap).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->SceneNodeAnimationPayLoadKeyTypeMap).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->SceneNodeAnimationPayLoadKeyTypeMap).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->SceneNodeAnimationPayLoadKeyTypeMap).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->SceneNodeAnimationPayLoadKeyTypeMap).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->SceneNodeAnimationPayLoadKeyTypeMap).CachedKeysAndValues.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->SceneNodeAnimationPayLoadKeyTypeMap).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->SceneNodeAnimationPayLoadKeyTypeMap).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->SceneNodeAnimationPayLoadKeyTypeMap).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->SceneNodeAnimationPayLoadKeyTypeMap).KeyCountHandle);
  (this->SceneNodeAnimationPayLoadKeyTypeMap).Attributes.Object = (FAttributeStorage *)0x0;
  (this->SceneNodeAnimationPayLoadKeyTypeMap).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->MorphTargetNodePayloadKeyUidMap).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->MorphTargetNodePayloadKeyUidMap).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->MorphTargetNodePayloadKeyUidMap).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->MorphTargetNodePayloadKeyUidMap).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->MorphTargetNodePayloadKeyUidMap).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->MorphTargetNodePayloadKeyUidMap).CachedKeysAndValues.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->MorphTargetNodePayloadKeyUidMap).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->MorphTargetNodePayloadKeyUidMap).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->MorphTargetNodePayloadKeyUidMap).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->MorphTargetNodePayloadKeyUidMap).KeyCountHandle);
  (this->MorphTargetNodePayloadKeyUidMap).Attributes.Object = (FAttributeStorage *)0x0;
  (this->MorphTargetNodePayloadKeyUidMap).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->MorphTargetNodePayloadKeyTypeMap).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->MorphTargetNodePayloadKeyTypeMap).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->MorphTargetNodePayloadKeyTypeMap).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->MorphTargetNodePayloadKeyTypeMap).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->MorphTargetNodePayloadKeyTypeMap).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->MorphTargetNodePayloadKeyTypeMap).CachedKeysAndValues.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->MorphTargetNodePayloadKeyTypeMap).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->MorphTargetNodePayloadKeyTypeMap).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->MorphTargetNodePayloadKeyTypeMap).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->MorphTargetNodePayloadKeyTypeMap).KeyCountHandle);
  (this->MorphTargetNodePayloadKeyTypeMap).Attributes.Object = (FAttributeStorage *)0x0;
  (this->MorphTargetNodePayloadKeyTypeMap).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UInterchangeAnimSequenceFactoryNode @ 14e52f020

UInterchangeAnimSequenceFactoryNode * __thiscall
UInterchangeAnimSequenceFactoryNode::UInterchangeAnimSequenceFactoryNode
          (UInterchangeAnimSequenceFactoryNode *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  UInterchangeAnimSequenceFactoryNode *pUVar5;
  ulonglong uVar6;
  int *piVar7;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_68;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_58;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_48;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_38;
  
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeAnimSequenceFactoryNode__6B_;
  (this->Macro_CustomSkeletonFactoryNodeUidKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSkeletonFactoryNodeUidKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSkeletonFactoryNodeUidKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomSkeletonFactoryNodeUidKey).Key,L"SkeletonFactoryNodeUid")
  ;
  (this->Macro_CustomImportBoneTracksKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomImportBoneTracksKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomImportBoneTracksKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomImportBoneTracksKey).Key,L"ImportBoneTracks");
  (this->Macro_CustomImportBoneTracksSampleRateKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomImportBoneTracksSampleRateKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomImportBoneTracksSampleRateKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomImportBoneTracksSampleRateKey).Key,L"ImportBoneTracksSampleRate");
  (this->Macro_CustomImportBoneTracksRangeStartKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomImportBoneTracksRangeStartKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomImportBoneTracksRangeStartKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomImportBoneTracksRangeStartKey).Key,L"ImportBoneTracksRangeStart");
  (this->Macro_CustomImportBoneTracksRangeStopKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomImportBoneTracksRangeStopKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomImportBoneTracksRangeStopKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomImportBoneTracksRangeStopKey).Key,L"ImportBoneTracksRangeStop");
  (this->Macro_CustomImportAttributeCurvesKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomImportAttributeCurvesKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomImportAttributeCurvesKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomImportAttributeCurvesKey).Key,L"ImportAttributeCurves");
  (this->Macro_CustomDoNotImportCurveWithZeroKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomDoNotImportCurveWithZeroKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomDoNotImportCurveWithZeroKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomDoNotImportCurveWithZeroKey).Key,L"DoNotImportCurveWithZero");
  (this->Macro_CustomAddCurveMetadataToSkeletonKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomAddCurveMetadataToSkeletonKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAddCurveMetadataToSkeletonKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomAddCurveMetadataToSkeletonKey).Key,L"AddCurveMetadataToSkeleton");
  (this->Macro_CustomRemoveCurveRedundantKeysKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomRemoveCurveRedundantKeysKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomRemoveCurveRedundantKeysKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomRemoveCurveRedundantKeysKey).Key,L"RemoveCurveRedundantKeys");
  (this->Macro_CustomMaterialDriveParameterOnCustomAttributeKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomMaterialDriveParameterOnCustomAttributeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomMaterialDriveParameterOnCustomAttributeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomMaterialDriveParameterOnCustomAttributeKey).Key,
             L"MaterialDriveParameterOnCustomAttribute");
  (this->Macro_CustomDeleteExistingMorphTargetCurvesKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomDeleteExistingMorphTargetCurvesKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomDeleteExistingMorphTargetCurvesKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomDeleteExistingMorphTargetCurvesKey).Key,
             L"DeleteExistingMorphTargetCurves");
  (this->Macro_CustomDeleteExistingCustomAttributeCurvesKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomDeleteExistingCustomAttributeCurvesKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomDeleteExistingCustomAttributeCurvesKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomDeleteExistingCustomAttributeCurvesKey).Key,
             L"DeleteExistingCustomAttributeCurves");
  (this->Macro_CustomDeleteExistingNonCurveCustomAttributesKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomDeleteExistingNonCurveCustomAttributesKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomDeleteExistingNonCurveCustomAttributesKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomDeleteExistingNonCurveCustomAttributesKey).Key,
             L"DeleteExistingNonCurveCustomAttributes");
  (this->Macro_CustomSkeletonSoftObjectPathKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSkeletonSoftObjectPathKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSkeletonSoftObjectPathKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomSkeletonSoftObjectPathKey).Key,L"SkeletonSoftObjectPath")
  ;
  (this->AnimatedMorphTargetDependencies).Attributes.Object = (FAttributeStorage *)0x0;
  (this->AnimatedMorphTargetDependencies).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AnimatedMorphTargetDependencies).KeyCount.Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AnimatedMorphTargetDependencies).KeyCount.Key.Data.ArrayNum = 0;
  (this->AnimatedMorphTargetDependencies).KeyCount.Key.Data.ArrayMax = 0;
  (this->AnimatedAttributeCurveNames).Attributes.Object = (FAttributeStorage *)0x0;
  (this->AnimatedAttributeCurveNames).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AnimatedAttributeCurveNames).KeyCount.Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->SceneNodeAnimationPayLoadKeyUidMap).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->SceneNodeAnimationPayLoadKeyUidMap).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->SceneNodeAnimationPayLoadKeyUidMap).CachedKeysAndValues.field_0x20 = 0;
  (this->AnimatedAttributeCurveNames).KeyCount.Key.Data.ArrayNum = 0;
  (this->AnimatedAttributeCurveNames).KeyCount.Key.Data.ArrayMax = 0;
  (this->AnimatedAttributeStepCurveNames).Attributes.Object = (FAttributeStorage *)0x0;
  (this->AnimatedAttributeStepCurveNames).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AnimatedAttributeStepCurveNames).KeyCount.Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AnimatedAttributeStepCurveNames).KeyCount.Key.Data.ArrayNum = 0;
  (this->AnimatedAttributeStepCurveNames).KeyCount.Key.Data.ArrayMax = 0;
  (this->AnimatedMaterialCurveSuffixes).Attributes.Object = (FAttributeStorage *)0x0;
  (this->AnimatedMaterialCurveSuffixes).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AnimatedMaterialCurveSuffixes).KeyCount.Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AnimatedMaterialCurveSuffixes).KeyCount.Key.Data.ArrayNum = 0;
  (this->AnimatedMaterialCurveSuffixes).KeyCount.Key.Data.ArrayMax = 0;
  *(undefined4 *)&(this->SceneNodeAnimationPayLoadKeyUidMap).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->SceneNodeAnimationPayLoadKeyUidMap).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->SceneNodeAnimationPayLoadKeyUidMap).CachedKeysAndValues.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->SceneNodeAnimationPayLoadKeyUidMap).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->SceneNodeAnimationPayLoadKeyUidMap).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->SceneNodeAnimationPayLoadKeyUidMap).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->SceneNodeAnimationPayLoadKeyUidMap).KeyCountHandle);
  (this->SceneNodeAnimationPayLoadKeyUidMap).Attributes.Object = (FAttributeStorage *)0x0;
  (this->SceneNodeAnimationPayLoadKeyUidMap).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->SceneNodeAnimationPayLoadKeyTypeMap).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->SceneNodeAnimationPayLoadKeyTypeMap).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->SceneNodeAnimationPayLoadKeyTypeMap).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->SceneNodeAnimationPayLoadKeyTypeMap).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->SceneNodeAnimationPayLoadKeyTypeMap).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->SceneNodeAnimationPayLoadKeyTypeMap).CachedKeysAndValues.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->SceneNodeAnimationPayLoadKeyTypeMap).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->SceneNodeAnimationPayLoadKeyTypeMap).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->SceneNodeAnimationPayLoadKeyTypeMap).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->SceneNodeAnimationPayLoadKeyTypeMap).KeyCountHandle);
  (this->SceneNodeAnimationPayLoadKeyTypeMap).Attributes.Object = (FAttributeStorage *)0x0;
  (this->SceneNodeAnimationPayLoadKeyTypeMap).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->MorphTargetNodePayloadKeyUidMap).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->MorphTargetNodePayloadKeyUidMap).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->MorphTargetNodePayloadKeyUidMap).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->MorphTargetNodePayloadKeyUidMap).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->MorphTargetNodePayloadKeyUidMap).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->MorphTargetNodePayloadKeyUidMap).CachedKeysAndValues.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->MorphTargetNodePayloadKeyUidMap).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->MorphTargetNodePayloadKeyUidMap).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->MorphTargetNodePayloadKeyUidMap).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->MorphTargetNodePayloadKeyUidMap).KeyCountHandle);
  (this->MorphTargetNodePayloadKeyUidMap).Attributes.Object = (FAttributeStorage *)0x0;
  (this->MorphTargetNodePayloadKeyUidMap).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->MorphTargetNodePayloadKeyTypeMap).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->MorphTargetNodePayloadKeyTypeMap).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->MorphTargetNodePayloadKeyTypeMap).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->MorphTargetNodePayloadKeyTypeMap).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->MorphTargetNodePayloadKeyTypeMap).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->MorphTargetNodePayloadKeyTypeMap).CachedKeysAndValues.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->MorphTargetNodePayloadKeyTypeMap).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->MorphTargetNodePayloadKeyTypeMap).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->MorphTargetNodePayloadKeyTypeMap).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->MorphTargetNodePayloadKeyTypeMap).KeyCountHandle);
  pvVar3 = ThreadLocalStoragePointer;
  uVar6 = (ulonglong)_tls_index;
  (this->MorphTargetNodePayloadKeyTypeMap).Attributes.Object = (FAttributeStorage *)0x0;
  (this->MorphTargetNodePayloadKeyTypeMap).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  piVar7 = (int *)(*(longlong *)((longlong)pvVar3 + uVar6 * 8) + 0x9d4c);
  if ((*piVar7 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::AttributeKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::AttributeKey.Key.Data.ArrayNum = 0;
    ::AttributeKey.Key.Data.ArrayMax = 0;
    ::FString::operator=(&::AttributeKey.Key,L"__AnimatedMeshMorphTargetDependencies__");
    atexit(`UE::Interchange::FAnimSequenceNodeStaticData::GetAnimatedMorphTargetDependenciesKey'::
           __l2::_dynamic_atexit_destructor_for__AttributeKey__);
    _Init_thread_footer(&::_TSS0);
  }
  UE::Interchange::TArrayAttributeHelper<FString>::Initialize
            (&this->AnimatedMorphTargetDependencies,
             (TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this->_padding_,
             &::AttributeKey.Key);
  if ((*piVar7 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::AttributeKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::AttributeKey.Key.Data.ArrayNum = 0;
    ::AttributeKey.Key.Data.ArrayMax = 0;
    ::FString::operator=(&::AttributeKey.Key,L"__AnimatedAttributeCurveNames__");
    atexit(`UE::Interchange::FAnimSequenceNodeStaticData::GetAnimatedAttributeCurveNamesKey'::__l2::
           _dynamic_atexit_destructor_for__AttributeKey__);
    _Init_thread_footer(&::_TSS0);
  }
  UE::Interchange::TArrayAttributeHelper<FString>::Initialize
            (&this->AnimatedAttributeCurveNames,
             (TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this->_padding_,
             &::AttributeKey.Key);
  if ((*piVar7 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::AttributeKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::AttributeKey.Key.Data.ArrayNum = 0;
    ::AttributeKey.Key.Data.ArrayMax = 0;
    ::FString::operator=(&::AttributeKey.Key,L"__AnimatedAttributeStepCurveNames__");
    atexit(`UE::Interchange::FAnimSequenceNodeStaticData::GetAnimatedAttributeStepCurveNamesKey'::
           __l2::_dynamic_atexit_destructor_for__AttributeKey__);
    _Init_thread_footer(&::_TSS0);
  }
  UE::Interchange::TArrayAttributeHelper<FString>::Initialize
            (&this->AnimatedAttributeStepCurveNames,
             (TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this->_padding_,
             &::AttributeKey.Key);
  if ((*piVar7 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::AttributeKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::AttributeKey.Key.Data.ArrayNum = 0;
    ::AttributeKey.Key.Data.ArrayMax = 0;
    ::FString::operator=(&::AttributeKey.Key,L"__AnimatedMaterialCurveSuffixes__");
    atexit(`UE::Interchange::FAnimSequenceNodeStaticData::GetAnimatedMaterialCurveSuffixesKey'::__l2
           ::_dynamic_atexit_destructor_for__AttributeKey__);
    _Init_thread_footer(&::_TSS0);
  }
  UE::Interchange::TArrayAttributeHelper<FString>::Initialize
            (&this->AnimatedMaterialCurveSuffixes,
             (TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this->_padding_,
             &::AttributeKey.Key);
  if ((*piVar7 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::AttributeKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::AttributeKey.Key.Data.ArrayNum = 0;
    ::AttributeKey.Key.Data.ArrayMax = 0;
    ::FString::operator=(&::AttributeKey.Key,L"__SceneNodeAnimationPayloadKeyUidMap__");
    atexit(`UE::Interchange::FAnimSequenceNodeStaticData::GetSceneNodeAnimationPayloadKeyUidMapKey'
           ::__l2::_dynamic_atexit_destructor_for__AttributeKey__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UInterchangeAnimSequenceFactoryNode *)(*pcVar2)();
    return pUVar5;
  }
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  local_68.Object = (FAttributeStorage *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68.SharedReferenceCount.ReferenceController = pTVar1;
  if ((local_68.Object == (FAttributeStorage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UInterchangeAnimSequenceFactoryNode *)(*pcVar2)();
    return pUVar5;
  }
  UE::Interchange::TMapAttributeHelper<FString,FString>::Initialize
            (&this->SceneNodeAnimationPayLoadKeyUidMap,&local_68,&::AttributeKey.Key);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::AttributeKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::AttributeKey.Key.Data.ArrayNum = 0;
    ::AttributeKey.Key.Data.ArrayMax = 0;
    ::FString::operator=(&::AttributeKey.Key,L"__SceneNodeAnimationPayloadKeyTypeMap__");
    atexit(`UE::Interchange::FAnimSequenceNodeStaticData::GetSceneNodeAnimationPayloadKeyTypeMapKey'
           ::__l2::_dynamic_atexit_destructor_for__AttributeKey__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UInterchangeAnimSequenceFactoryNode *)(*pcVar2)();
    return pUVar5;
  }
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  local_58.Object = (FAttributeStorage *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58.SharedReferenceCount.ReferenceController = pTVar1;
  if ((local_58.Object == (FAttributeStorage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UInterchangeAnimSequenceFactoryNode *)(*pcVar2)();
    return pUVar5;
  }
  UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::Initialize
            (&this->SceneNodeAnimationPayLoadKeyTypeMap,&local_58,&::AttributeKey.Key);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::AttributeKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::AttributeKey.Key.Data.ArrayNum = 0;
    ::AttributeKey.Key.Data.ArrayMax = 0;
    ::FString::operator=(&::AttributeKey.Key,L"__MorphTargetNodePayloadKeyUidMap__");
    atexit(`UE::Interchange::FAnimSequenceNodeStaticData::GetMorphTargetNodePayloadKeyUidMapKey'::
           __l2::_dynamic_atexit_destructor_for__AttributeKey__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UInterchangeAnimSequenceFactoryNode *)(*pcVar2)();
    return pUVar5;
  }
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  local_48.Object = (FAttributeStorage *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.SharedReferenceCount.ReferenceController = pTVar1;
  if ((local_48.Object == (FAttributeStorage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UInterchangeAnimSequenceFactoryNode *)(*pcVar2)();
    return pUVar5;
  }
  UE::Interchange::TMapAttributeHelper<FString,FString>::Initialize
            (&this->MorphTargetNodePayloadKeyUidMap,&local_48,&::AttributeKey.Key);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::AttributeKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::AttributeKey.Key.Data.ArrayNum = 0;
    ::AttributeKey.Key.Data.ArrayMax = 0;
    ::FString::operator=(&::AttributeKey.Key,L"__MorphTargetNodePayloadKeyTypeMap__");
    atexit(`UE::Interchange::FAnimSequenceNodeStaticData::GetMorphTargetNodePayloadKeyTypeMapKey'::
           __l2::_dynamic_atexit_destructor_for__AttributeKey__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UInterchangeAnimSequenceFactoryNode *)(*pcVar2)();
    return pUVar5;
  }
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  local_38.Object = (FAttributeStorage *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.SharedReferenceCount.ReferenceController = pTVar1;
  if ((local_38.Object == (FAttributeStorage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UInterchangeAnimSequenceFactoryNode *)(*pcVar2)();
    return pUVar5;
  }
  UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::Initialize
            (&this->MorphTargetNodePayloadKeyTypeMap,&local_38,&::AttributeKey.Key);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return this;
}

// ~UInterchangeAnimSequenceFactoryNode @ 14e535220

void __thiscall
UInterchangeAnimSequenceFactoryNode::~UInterchangeAnimSequenceFactoryNode
          (UInterchangeAnimSequenceFactoryNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeAnimSequenceFactoryNode__6B_;
  UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::
  ~TMapAttributeHelper<FString,unsigned_char>(&this->MorphTargetNodePayloadKeyTypeMap);
  UE::Interchange::TMapAttributeHelper<FString,FString>::~TMapAttributeHelper<FString,FString>
            (&this->MorphTargetNodePayloadKeyUidMap);
  UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::
  ~TMapAttributeHelper<FString,unsigned_char>(&this->SceneNodeAnimationPayLoadKeyTypeMap);
  UE::Interchange::TMapAttributeHelper<FString,FString>::~TMapAttributeHelper<FString,FString>
            (&this->SceneNodeAnimationPayLoadKeyUidMap);
  UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>
            (&this->AnimatedMaterialCurveSuffixes);
  UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>
            (&this->AnimatedAttributeStepCurveNames);
  UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>
            (&this->AnimatedAttributeCurveNames);
  UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>
            (&this->AnimatedMorphTargetDependencies);
  pFVar1 = (this->Macro_CustomSkeletonSoftObjectPathKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomDeleteExistingNonCurveCustomAttributesKey).Key.Data.AllocatorInstance.
           Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomDeleteExistingCustomAttributeCurvesKey).Key.Data.AllocatorInstance.
           Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomDeleteExistingMorphTargetCurvesKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomMaterialDriveParameterOnCustomAttributeKey).Key.Data.AllocatorInstance
           .Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomRemoveCurveRedundantKeysKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomAddCurveMetadataToSkeletonKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomDoNotImportCurveWithZeroKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomImportAttributeCurvesKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomImportBoneTracksRangeStopKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomImportBoneTracksRangeStartKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomImportBoneTracksSampleRateKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomImportBoneTracksKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomSkeletonFactoryNodeUidKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeFactoryBaseNode::~UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  return;
}

// GetAnimatedAttributeCurveName @ 14e54f5f0

void __thiscall
UInterchangeAnimSequenceFactoryNode::GetAnimatedAttributeCurveName
          (UInterchangeAnimSequenceFactoryNode *this,int param_1,FString *param_2)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItem
            (&this->AnimatedAttributeCurveNames,param_1,param_2);
  return;
}

// GetAnimatedAttributeCurveNames @ 14e54f610

void __thiscall
UInterchangeAnimSequenceFactoryNode::GetAnimatedAttributeCurveNames
          (UInterchangeAnimSequenceFactoryNode *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems
            (&this->AnimatedAttributeCurveNames,param_1);
  return;
}

// GetAnimatedAttributeCurveNamesCount @ 14e54f630

int __thiscall
UInterchangeAnimSequenceFactoryNode::GetAnimatedAttributeCurveNamesCount
          (UInterchangeAnimSequenceFactoryNode *this)

{
  int iVar1;
  
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount
                    (&this->AnimatedAttributeCurveNames);
  return iVar1;
}

// GetAnimatedAttributeStepCurveName @ 14e54f6e0

void __thiscall
UInterchangeAnimSequenceFactoryNode::GetAnimatedAttributeStepCurveName
          (UInterchangeAnimSequenceFactoryNode *this,int param_1,FString *param_2)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItem
            (&this->AnimatedAttributeStepCurveNames,param_1,param_2);
  return;
}

// GetAnimatedAttributeStepCurveNames @ 14e54f700

void __thiscall
UInterchangeAnimSequenceFactoryNode::GetAnimatedAttributeStepCurveNames
          (UInterchangeAnimSequenceFactoryNode *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems
            (&this->AnimatedAttributeStepCurveNames,param_1);
  return;
}

// GetAnimatedAttributeStepCurveNamesCount @ 14e54f720

int __thiscall
UInterchangeAnimSequenceFactoryNode::GetAnimatedAttributeStepCurveNamesCount
          (UInterchangeAnimSequenceFactoryNode *this)

{
  int iVar1;
  
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount
                    (&this->AnimatedAttributeStepCurveNames);
  return iVar1;
}

// GetAnimatedMaterialCurveSuffixe @ 14e54f7d0

void __thiscall
UInterchangeAnimSequenceFactoryNode::GetAnimatedMaterialCurveSuffixe
          (UInterchangeAnimSequenceFactoryNode *this,int param_1,FString *param_2)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItem
            (&this->AnimatedMaterialCurveSuffixes,param_1,param_2);
  return;
}

// GetAnimatedMaterialCurveSuffixes @ 14e54f7f0

void __thiscall
UInterchangeAnimSequenceFactoryNode::GetAnimatedMaterialCurveSuffixes
          (UInterchangeAnimSequenceFactoryNode *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems
            (&this->AnimatedMaterialCurveSuffixes,param_1);
  return;
}

// GetAnimatedMaterialCurveSuffixesCount @ 14e54f810

int __thiscall
UInterchangeAnimSequenceFactoryNode::GetAnimatedMaterialCurveSuffixesCount
          (UInterchangeAnimSequenceFactoryNode *this)

{
  int iVar1;
  
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount
                    (&this->AnimatedMaterialCurveSuffixes);
  return iVar1;
}

// GetCustomAddCurveMetadataToSkeleton @ 14e5507c0

bool __thiscall
UInterchangeAnimSequenceFactoryNode::GetCustomAddCurveMetadataToSkeleton
          (UInterchangeAnimSequenceFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetAddCurveMetadataToSkeleton");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomAddCurveMetadataToSkeletonKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomDeleteExistingCustomAttributeCurves @ 14e551ee0

bool __thiscall
UInterchangeAnimSequenceFactoryNode::GetCustomDeleteExistingCustomAttributeCurves
          (UInterchangeAnimSequenceFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetDeleteExistingCustomAttributeCurves");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomDeleteExistingCustomAttributeCurvesKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomDeleteExistingMorphTargetCurves @ 14e551f90

bool __thiscall
UInterchangeAnimSequenceFactoryNode::GetCustomDeleteExistingMorphTargetCurves
          (UInterchangeAnimSequenceFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetDeleteExistingMorphTargetCurves");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomDeleteExistingMorphTargetCurvesKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomDeleteExistingNonCurveCustomAttributes @ 14e552040

bool __thiscall
UInterchangeAnimSequenceFactoryNode::GetCustomDeleteExistingNonCurveCustomAttributes
          (UInterchangeAnimSequenceFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetDeleteExistingNonCurveCustomAttributes");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomDeleteExistingNonCurveCustomAttributesKey,&local_28,param_1)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomDoNotImportCurveWithZero @ 14e5523b0

bool __thiscall
UInterchangeAnimSequenceFactoryNode::GetCustomDoNotImportCurveWithZero
          (UInterchangeAnimSequenceFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetDoNotImportCurveWithZero");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomDoNotImportCurveWithZeroKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomImportAttributeCurves @ 14e553d50

bool __thiscall
UInterchangeAnimSequenceFactoryNode::GetCustomImportAttributeCurves
          (UInterchangeAnimSequenceFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetImportAttributeCurves");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomImportAttributeCurvesKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomImportBoneTracks @ 14e553e00

bool __thiscall
UInterchangeAnimSequenceFactoryNode::GetCustomImportBoneTracks
          (UInterchangeAnimSequenceFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetImportBoneTracks");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomImportBoneTracksKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomImportBoneTracksRangeStart @ 14e553eb0

bool __thiscall
UInterchangeAnimSequenceFactoryNode::GetCustomImportBoneTracksRangeStart
          (UInterchangeAnimSequenceFactoryNode *this,double *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetImportBoneTracksRangeStart");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<double>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomImportBoneTracksRangeStartKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomImportBoneTracksRangeStop @ 14e553f60

bool __thiscall
UInterchangeAnimSequenceFactoryNode::GetCustomImportBoneTracksRangeStop
          (UInterchangeAnimSequenceFactoryNode *this,double *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetImportBoneTracksRangeStop");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<double>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomImportBoneTracksRangeStopKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomImportBoneTracksSampleRate @ 14e554010

bool __thiscall
UInterchangeAnimSequenceFactoryNode::GetCustomImportBoneTracksSampleRate
          (UInterchangeAnimSequenceFactoryNode *this,double *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetImportBoneTracksSampleRate");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<double>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomImportBoneTracksSampleRateKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomMaterialDriveParameterOnCustomAttribute @ 14e554e70

bool __thiscall
UInterchangeAnimSequenceFactoryNode::GetCustomMaterialDriveParameterOnCustomAttribute
          (UInterchangeAnimSequenceFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetMaterialDriveParameterOnCustomAttribute");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomMaterialDriveParameterOnCustomAttributeKey,&local_28,param_1
                    );
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomRemoveCurveRedundantKeys @ 14e555db0

bool __thiscall
UInterchangeAnimSequenceFactoryNode::GetCustomRemoveCurveRedundantKeys
          (UInterchangeAnimSequenceFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetRemoveCurveRedundantKeys");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomRemoveCurveRedundantKeysKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomSkeletonFactoryNodeUid @ 14e5563e0

bool __thiscall
UInterchangeAnimSequenceFactoryNode::GetCustomSkeletonFactoryNodeUid
          (UInterchangeAnimSequenceFactoryNode *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetSkeletonFactoryNodeUid");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<FString>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomSkeletonFactoryNodeUidKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomSkeletonSoftObjectPath @ 14e556490

bool __thiscall
UInterchangeAnimSequenceFactoryNode::GetCustomSkeletonSoftObjectPath
          (UInterchangeAnimSequenceFactoryNode *this,FSoftObjectPath *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetSkeletonSoftObjectPath");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<FSoftObjectPath>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomSkeletonSoftObjectPathKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetMorphTargetNodeAnimationPayloadKeys @ 14e558660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangeAnimSequenceFactoryNode::GetMorphTargetNodeAnimationPayloadKeys
          (UInterchangeAnimSequenceFactoryNode *this,
          TMap<FString,FInterchangeAnimationPayLoadKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>_>
          *param_1)

{
  FString *pFVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  undefined1 *puVar8;
  byte bVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  int iVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined1 *puVar17;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [8];
  longlong *local_180;
  uint uStack_178;
  uint uStack_174;
  TBitArray<FDefaultBitArrayAllocator> *local_170;
  undefined4 uStack_168;
  uint uStack_164;
  uint local_160;
  uint uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  int local_150;
  undefined1 local_14c [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  FString *local_118;
  FString *local_110;
  FString local_108;
  undefined1 local_f8;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  int local_b4;
  void *local_a8;
  undefined4 local_a0;
  TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
            (&this->MorphTargetNodePayloadKeyUidMap,
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)local_e8);
  UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::ToMap
            (&this->MorphTargetNodePayloadKeyTypeMap,
             (TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
              *)&local_98);
  TSet<TTuple<FString,FInterchangeAnimationPayLoadKey>,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FString,FInterchangeAnimationPayLoadKey>,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>,FDefaultSetAllocator>
             *)param_1,local_98.Elements._8_4_ - local_98.Elements._52_4_);
  uVar15 = local_c0;
  puVar17 = (undefined1 *)0x0;
  uStack_178 = 0;
  uStack_174 = 1;
  uVar7 = 0;
  uStack_164 = uVar7;
  local_160 = uVar7;
  if (local_c0 != 0) {
    puVar16 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar16 = local_c8;
    }
    uVar14 = *puVar16;
    puVar8 = puVar17;
    puVar13 = puVar17;
    local_160 = 0;
    uStack_178 = 0;
    while (uVar14 == 0) {
      iVar12 = (int)puVar8;
      local_160 = (int)puVar13 + 0x20;
      puVar13 = (undefined1 *)(ulonglong)local_160;
      uStack_178 = iVar12 + 1;
      puVar8 = (undefined1 *)(ulonglong)uStack_178;
      uStack_164 = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_178)
      goto LAB_14e558741;
      uVar14 = puVar16[(longlong)iVar12 + 1];
    }
    uStack_174 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_174 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_150 = (int)lVar10;
    uStack_164 = (local_160 - 1) + local_150;
    if ((int)local_c0 < (int)uStack_164) {
      uStack_164 = local_c0;
    }
  }
LAB_14e558741:
  local_180 = (longlong *)local_e8;
  local_170 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  uVar14 = local_c0 & 0xffffffe0;
  iStack_158 = local_e8._8_4_ - local_b4;
  uStack_168 = 0xffffffff;
  TStack_140.CurrentBitIndex = uStack_164;
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._padding_ = CONCAT44(uStack_174,uStack_178);
  iVar12 = (int)local_c0 >> 5;
  TStack_140._28_4_ = uStack_164;
  TStack_140.BaseBitIndex = local_160;
  uStack_120 = CONCAT44(uStack_154,iStack_158);
  bVar9 = (byte)local_c0;
  uStack_15c = uStack_164;
  local_14c._4_8_ = local_180;
  TStack_140.Array = local_170;
  if (((int)local_c0 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar15 != local_c0) {
    puVar16 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar16 = local_c8;
    }
    uVar15 = -1 << (bVar9 & 0x1f) & puVar16[iVar12];
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar15 = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_14e55884c;
      uVar15 = puVar16[lVar10 + 1];
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar15 = (int)lVar10 + -1 + uVar14;
    if ((int)local_c0 < (int)uVar15) {
      uVar15 = local_c0;
    }
  }
LAB_14e55884c:
  while( true ) {
    uVar5 = local_14c._4_8_;
    if ((int)*(longlong *)(local_14c._4_8_ + 8) - *(int *)(local_14c._4_8_ + 0x34) !=
        (int)uStack_120) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_188);
    }
    if (((TStack_140.CurrentBitIndex == uVar15) &&
        (TStack_140.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
       ((undefined1 *)uVar5 == local_e8)) break;
    lVar10 = *(longlong *)uVar5;
    pFVar1 = (FString *)(lVar10 + (longlong)TStack_140.CurrentBitIndex * 0x28);
    iVar12 = *(int *)(lVar10 + 8 + (longlong)TStack_140.CurrentBitIndex * 0x28);
    if (iVar12 == 0) {
      pwVar11 = L"";
      uVar14 = uVar7;
    }
    else {
      pwVar11 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
      uVar14 = iVar12 - 1;
    }
    uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar14,pwVar11);
    iVar12 = TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>(&local_98,uVar14,pFVar1);
    puVar8 = puVar17;
    if (iVar12 != -1) {
      puVar8 = (undefined1 *)((longlong)iVar12 * 0x20 + local_98.Elements._0_8_);
    }
    puVar13 = puVar8 + 0x10;
    if (puVar8 == (undefined1 *)0x0) {
      puVar13 = puVar17;
    }
    if (puVar13 != (undefined1 *)0x0) {
      uVar3 = *puVar13;
      ::FString::FString(&local_108,pFVar1 + 1);
      local_110 = &local_108;
      local_118 = pFVar1;
      local_f8 = uVar3;
      TSet<TTuple<FString,FInterchangeAnimationPayLoadKey>,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FInterchangeAnimationPayLoadKey_&&>_>
                ((TSet<TTuple<FString,FInterchangeAnimationPayLoadKey>,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>,FDefaultSetAllocator>
                  *)param_1,
                 (TPairInitializer<FString_const_&,FInterchangeAnimationPayLoadKey_&&> *)local_14c,
                 (bool *)&local_118);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
    }
    TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  return;
}

// GetObjectClass @ 14e558d60

UClass * __thiscall
UInterchangeAnimSequenceFactoryNode::GetObjectClass(UInterchangeAnimSequenceFactoryNode *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSequence.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UAnimSequence::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimSequence",
               &Z_Registration_Info_UClass_UAnimSequence.InnerSingleton,
               UAnimSequence::StaticRegisterNativesUAnimSequence,0x1f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimSequence>,
               InternalVTableHelperCtorCaller<UAnimSequence>,aFStackX_8,
               UAnimSequenceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSequence.InnerSingleton;
}

// GetPrivateStaticClass @ 14e559d10

UClass * __cdecl UInterchangeAnimSequenceFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAnimSequenceFactoryNode.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeAnimSequenceFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeAnimSequenceFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeAnimSequenceFactoryNode,0x500,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAnimSequenceFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeAnimSequenceFactoryNode>,local_res8,
               UInterchangeFactoryBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAnimSequenceFactoryNode.InnerSingleton;
}

// GetSceneNodeAnimationPayloadKeys @ 14e55c460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangeAnimSequenceFactoryNode::GetSceneNodeAnimationPayloadKeys
          (UInterchangeAnimSequenceFactoryNode *this,
          TMap<FString,FInterchangeAnimationPayLoadKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>_>
          *param_1)

{
  FString *pFVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  undefined1 *puVar8;
  byte bVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  int iVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined1 *puVar17;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [8];
  longlong *local_180;
  uint uStack_178;
  uint uStack_174;
  TBitArray<FDefaultBitArrayAllocator> *local_170;
  undefined4 uStack_168;
  uint uStack_164;
  uint local_160;
  uint uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  int local_150;
  undefined1 local_14c [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  FString *local_118;
  FString *local_110;
  FString local_108;
  undefined1 local_f8;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  int local_b4;
  void *local_a8;
  undefined4 local_a0;
  TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
            (&this->SceneNodeAnimationPayLoadKeyUidMap,
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)local_e8);
  UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::ToMap
            (&this->SceneNodeAnimationPayLoadKeyTypeMap,
             (TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
              *)&local_98);
  TSet<TTuple<FString,FInterchangeAnimationPayLoadKey>,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FString,FInterchangeAnimationPayLoadKey>,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>,FDefaultSetAllocator>
             *)param_1,local_98.Elements._8_4_ - local_98.Elements._52_4_);
  uVar15 = local_c0;
  puVar17 = (undefined1 *)0x0;
  uStack_178 = 0;
  uStack_174 = 1;
  uVar7 = 0;
  uStack_164 = uVar7;
  local_160 = uVar7;
  if (local_c0 != 0) {
    puVar16 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar16 = local_c8;
    }
    uVar14 = *puVar16;
    puVar8 = puVar17;
    puVar13 = puVar17;
    local_160 = 0;
    uStack_178 = 0;
    while (uVar14 == 0) {
      iVar12 = (int)puVar8;
      local_160 = (int)puVar13 + 0x20;
      puVar13 = (undefined1 *)(ulonglong)local_160;
      uStack_178 = iVar12 + 1;
      puVar8 = (undefined1 *)(ulonglong)uStack_178;
      uStack_164 = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_178)
      goto LAB_14e55c541;
      uVar14 = puVar16[(longlong)iVar12 + 1];
    }
    uStack_174 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_174 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_150 = (int)lVar10;
    uStack_164 = (local_160 - 1) + local_150;
    if ((int)local_c0 < (int)uStack_164) {
      uStack_164 = local_c0;
    }
  }
LAB_14e55c541:
  local_180 = (longlong *)local_e8;
  local_170 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  uVar14 = local_c0 & 0xffffffe0;
  iStack_158 = local_e8._8_4_ - local_b4;
  uStack_168 = 0xffffffff;
  TStack_140.CurrentBitIndex = uStack_164;
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._padding_ = CONCAT44(uStack_174,uStack_178);
  iVar12 = (int)local_c0 >> 5;
  TStack_140._28_4_ = uStack_164;
  TStack_140.BaseBitIndex = local_160;
  uStack_120 = CONCAT44(uStack_154,iStack_158);
  bVar9 = (byte)local_c0;
  uStack_15c = uStack_164;
  local_14c._4_8_ = local_180;
  TStack_140.Array = local_170;
  if (((int)local_c0 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar15 != local_c0) {
    puVar16 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar16 = local_c8;
    }
    uVar15 = -1 << (bVar9 & 0x1f) & puVar16[iVar12];
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar15 = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_14e55c64c;
      uVar15 = puVar16[lVar10 + 1];
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar15 = (int)lVar10 + -1 + uVar14;
    if ((int)local_c0 < (int)uVar15) {
      uVar15 = local_c0;
    }
  }
LAB_14e55c64c:
  while( true ) {
    uVar5 = local_14c._4_8_;
    if ((int)*(longlong *)(local_14c._4_8_ + 8) - *(int *)(local_14c._4_8_ + 0x34) !=
        (int)uStack_120) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_188);
    }
    if (((TStack_140.CurrentBitIndex == uVar15) &&
        (TStack_140.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
       ((undefined1 *)uVar5 == local_e8)) break;
    lVar10 = *(longlong *)uVar5;
    pFVar1 = (FString *)(lVar10 + (longlong)TStack_140.CurrentBitIndex * 0x28);
    iVar12 = *(int *)(lVar10 + 8 + (longlong)TStack_140.CurrentBitIndex * 0x28);
    if (iVar12 == 0) {
      pwVar11 = L"";
      uVar14 = uVar7;
    }
    else {
      pwVar11 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
      uVar14 = iVar12 - 1;
    }
    uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar14,pwVar11);
    iVar12 = TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>(&local_98,uVar14,pFVar1);
    puVar8 = puVar17;
    if (iVar12 != -1) {
      puVar8 = (undefined1 *)((longlong)iVar12 * 0x20 + local_98.Elements._0_8_);
    }
    puVar13 = puVar8 + 0x10;
    if (puVar8 == (undefined1 *)0x0) {
      puVar13 = puVar17;
    }
    if (puVar13 != (undefined1 *)0x0) {
      uVar3 = *puVar13;
      ::FString::FString(&local_108,pFVar1 + 1);
      local_110 = &local_108;
      local_118 = pFVar1;
      local_f8 = uVar3;
      TSet<TTuple<FString,FInterchangeAnimationPayLoadKey>,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FInterchangeAnimationPayLoadKey_&&>_>
                ((TSet<TTuple<FString,FInterchangeAnimationPayLoadKey>,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>,FDefaultSetAllocator>
                  *)param_1,
                 (TPairInitializer<FString_const_&,FInterchangeAnimationPayLoadKey_&&> *)local_14c,
                 (bool *)&local_118);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
    }
    TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  return;
}

// GetTypeName @ 14e55d500

FString * __thiscall
UInterchangeAnimSequenceFactoryNode::GetTypeName
          (UInterchangeAnimSequenceFactoryNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"AnimSequenceNode");
  return __return_storage_ptr__;
}

// InitializeAnimSequenceNode @ 14e55dff0

void __thiscall
UInterchangeAnimSequenceFactoryNode::InitializeAnimSequenceNode
          (UInterchangeAnimSequenceFactoryNode *this,FString *param_1,FString *param_2,
          UInterchangeBaseNodeContainer *param_3)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"");
  UInterchangeBaseNodeContainer::SetupNode
            (param_3,(UInterchangeBaseNode *)this,param_1,param_2,FactoryData,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// IsRuntimeImportAllowed @ 14e55e7d0

bool __thiscall
UInterchangeAnimSequenceFactoryNode::IsRuntimeImportAllowed
          (UInterchangeAnimSequenceFactoryNode *this)

{
  return true;
}

// RemoveAnimatedAttributeCurveName @ 14e55f720

bool __thiscall
UInterchangeAnimSequenceFactoryNode::RemoveAnimatedAttributeCurveName
          (UInterchangeAnimSequenceFactoryNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveItem
                    (&this->AnimatedAttributeCurveNames,param_1);
  return bVar1;
}

// RemoveAnimatedAttributeStepCurveName @ 14e55f740

bool __thiscall
UInterchangeAnimSequenceFactoryNode::RemoveAnimatedAttributeStepCurveName
          (UInterchangeAnimSequenceFactoryNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveItem
                    (&this->AnimatedAttributeStepCurveNames,param_1);
  return bVar1;
}

// RemoveAnimatedMaterialCurveSuffixe @ 14e55f760

bool __thiscall
UInterchangeAnimSequenceFactoryNode::RemoveAnimatedMaterialCurveSuffixe
          (UInterchangeAnimSequenceFactoryNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveItem
                    (&this->AnimatedMaterialCurveSuffixes,param_1);
  return bVar1;
}

// Serialize @ 14e55faa0

void __thiscall
UInterchangeAnimSequenceFactoryNode::Serialize
          (UInterchangeAnimSequenceFactoryNode *this,FArchive *param_1)

{
  UInterchangeBaseNode::Serialize((UInterchangeBaseNode *)this,param_1);
  if (((param_1->field_0x28 & 1) != 0) && ((char)this->_padding_ != '\0')) {
    UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache
              (&this->SceneNodeAnimationPayLoadKeyUidMap);
    UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::RebuildCache
              (&this->SceneNodeAnimationPayLoadKeyTypeMap);
    UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache
              (&this->MorphTargetNodePayloadKeyUidMap);
    UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::RebuildCache
              (&this->MorphTargetNodePayloadKeyTypeMap);
  }
  return;
}

// Serialize @ 14e55fb10

void __thiscall
UInterchangeAnimSequenceFactoryNode::Serialize
          (UInterchangeAnimSequenceFactoryNode *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UInterchangeBaseNode::Serialize((UInterchangeBaseNode *)this,pFVar1);
  if (((pFVar1->field_0x28 & 1) != 0) && ((char)this->_padding_ != '\0')) {
    UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache
              (&this->SceneNodeAnimationPayLoadKeyUidMap);
    UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::RebuildCache
              (&this->SceneNodeAnimationPayLoadKeyTypeMap);
    UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache
              (&this->MorphTargetNodePayloadKeyUidMap);
    UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::RebuildCache
              (&this->MorphTargetNodePayloadKeyTypeMap);
  }
  return;
}

// SetAnimatedAttributeCurveName @ 14e55fee0

bool __thiscall
UInterchangeAnimSequenceFactoryNode::SetAnimatedAttributeCurveName
          (UInterchangeAnimSequenceFactoryNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                    (&this->AnimatedAttributeCurveNames,param_1);
  return bVar1;
}

// SetAnimatedAttributeStepCurveName @ 14e55ff00

bool __thiscall
UInterchangeAnimSequenceFactoryNode::SetAnimatedAttributeStepCurveName
          (UInterchangeAnimSequenceFactoryNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                    (&this->AnimatedAttributeStepCurveNames,param_1);
  return bVar1;
}

// SetAnimatedMaterialCurveSuffixe @ 14e55ff20

bool __thiscall
UInterchangeAnimSequenceFactoryNode::SetAnimatedMaterialCurveSuffixe
          (UInterchangeAnimSequenceFactoryNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                    (&this->AnimatedMaterialCurveSuffixes,param_1);
  return bVar1;
}

// SetAnimationPayloadKeysForMorphTargetNodeUids @ 14e55ffb0

void __thiscall
UInterchangeAnimSequenceFactoryNode::SetAnimationPayloadKeysForMorphTargetNodeUids
          (UInterchangeAnimSequenceFactoryNode *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1,TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
                   *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
  *pTVar4;
  TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  FString *pFVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  undefined1 local_res10 [8];
  TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
  *local_res18;
  undefined1 local_res20 [8];
  uint local_148;
  undefined4 uStack_114;
  undefined4 uStack_d4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  iVar10 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  local_148 = 1;
  iVar18 = 0;
  iVar16 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar10 != 0) {
    puVar19 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar7 = *puVar19;
    iVar16 = 0;
    while (uVar7 == 0) {
      lVar11 = (longlong)iVar18;
      iVar16 = iVar16 + 0x20;
      iVar18 = iVar18 + 1;
      uVar7 = 1;
      iVar8 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14e56005e;
      uVar7 = puVar19[lVar11 + 1];
    }
    uVar7 = -uVar7 & uVar7;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar8 = iVar16 + -1 + (int)lVar11;
    if (iVar10 < iVar8) {
      iVar8 = iVar10;
    }
  }
LAB_14e56005e:
  uVar15 = *(uint *)&param_1->field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_c8._padding_ = CONCAT44(uVar7,iVar18);
  TStack_c8.CurrentBitIndex = iVar8;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar15 >> 5;
  TStack_c8._28_4_ = local_54;
  TStack_c8.BaseBitIndex = iVar16;
  uStack_a8 = CONCAT44(uStack_114,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  local_res18 = param_2;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar10 < (int)uVar15)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = *(uint *)&param_1->field_0x28;
  if (uVar15 != uVar7) {
    puVar17 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar18 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar18;
      uVar14 = uVar14 + 0x20;
      iVar18 = iVar18 + 1;
      uVar15 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14e560180;
      uVar15 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar15 = (int)lVar11 + -1 + uVar14;
    if ((int)uVar7 < (int)uVar15) {
      uVar15 = uVar7;
    }
  }
LAB_14e560180:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_a8) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    pTVar4 = local_res18;
    if ((TStack_c8.CurrentBitIndex == uVar15) &&
       (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar13 = (FString *)(*(longlong *)param_1 + (longlong)TStack_c8.CurrentBitIndex * 0x28);
    iVar18 = *(int *)(*(longlong *)param_1 + 8 + (longlong)TStack_c8.CurrentBitIndex * 0x28);
    iVar10 = iVar18 + -1;
    if (iVar18 == 0) {
      pwVar12 = L"";
      iVar10 = 0;
    }
    else {
      pwVar12 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar12);
    UE::Interchange::TMapAttributeHelper<FString,FString>::SetKeyValueByHash
              (&this->MorphTargetNodePayloadKeyUidMap,uVar7,pFVar13,pFVar13 + 1);
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  iVar10 = *(int *)&local_res18->field_0x28;
  puVar1 = &local_res18->field_0x10;
  iVar18 = 0;
  iVar16 = 0;
  iVar9 = 0;
  if (iVar10 != 0) {
    puVar19 = *(uint **)&local_res18->field_0x20;
    if (*(uint **)&local_res18->field_0x20 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar7 = *puVar19;
    iVar16 = 0;
    while (uVar7 == 0) {
      lVar11 = (longlong)iVar18;
      iVar16 = iVar16 + 0x20;
      iVar18 = iVar18 + 1;
      iVar9 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14e560291;
      uVar7 = puVar19[lVar11 + 1];
    }
    local_148 = -uVar7 & uVar7;
    uVar2 = (ulonglong)local_148 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar9 = iVar16 + -1 + (int)lVar11;
    if (iVar10 < iVar9) {
      iVar9 = iVar10;
    }
  }
LAB_14e560291:
  uVar7 = *(uint *)&local_res18->field_0x28;
  uVar15 = uVar7 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(local_148,iVar18);
  TStack_98.CurrentBitIndex = iVar9;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  local_a0 = local_res18;
  iVar18 = (int)uVar7 >> 5;
  TStack_98._28_4_ = iVar8;
  TStack_98.BaseBitIndex = iVar16;
  uStack_78 = CONCAT44(uStack_d4,*(int *)&local_res18->field_0x8 - *(int *)&local_res18->field_0x34)
  ;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar7 < 0) || (iVar10 < (int)uVar7)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar14 = *(uint *)&pTVar4->field_0x28;
  if (uVar7 != uVar14) {
    puVar17 = *(undefined1 **)&pTVar4->field_0x20;
    if (*(undefined1 **)&pTVar4->field_0x20 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar7 = -1 << ((byte)uVar7 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar18 * 4);
    while (uVar7 == 0) {
      lVar11 = (longlong)iVar18;
      uVar15 = uVar15 + 0x20;
      iVar18 = iVar18 + 1;
      uVar7 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14e560390;
      uVar7 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar7 = (int)lVar11 + -1 + uVar15;
    if ((int)uVar14 < (int)uVar7) {
      uVar7 = uVar14;
    }
  }
LAB_14e560390:
  while( true ) {
    pTVar5 = local_a0;
    if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
      `TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_98.CurrentBitIndex == uVar7) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == pTVar4))
    break;
    pFVar13 = (FString *)(*(longlong *)pTVar5 + (longlong)TStack_98.CurrentBitIndex * 0x20);
    iVar18 = (pFVar13->Data).ArrayNum;
    iVar10 = iVar18 + -1;
    if (iVar18 == 0) {
      pwVar12 = L"";
      iVar10 = 0;
    }
    else {
      pwVar12 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar12);
    UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::SetKeyValueByHash
              (&this->MorphTargetNodePayloadKeyTypeMap,uVar15,pFVar13,(uchar *)(pFVar13 + 1));
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  return;
}

// SetAnimationPayloadKeysForSceneNodeUids @ 14e560440

void __thiscall
UInterchangeAnimSequenceFactoryNode::SetAnimationPayloadKeysForSceneNodeUids
          (UInterchangeAnimSequenceFactoryNode *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1,TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
                   *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
  *pTVar4;
  TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  FString *pFVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  undefined1 local_res10 [8];
  TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
  *local_res18;
  undefined1 local_res20 [8];
  uint local_148;
  undefined4 uStack_114;
  undefined4 uStack_d4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  iVar10 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  local_148 = 1;
  iVar18 = 0;
  iVar16 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar10 != 0) {
    puVar19 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar7 = *puVar19;
    iVar16 = 0;
    while (uVar7 == 0) {
      lVar11 = (longlong)iVar18;
      iVar16 = iVar16 + 0x20;
      iVar18 = iVar18 + 1;
      uVar7 = 1;
      iVar8 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14e5604ee;
      uVar7 = puVar19[lVar11 + 1];
    }
    uVar7 = -uVar7 & uVar7;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar8 = iVar16 + -1 + (int)lVar11;
    if (iVar10 < iVar8) {
      iVar8 = iVar10;
    }
  }
LAB_14e5604ee:
  uVar15 = *(uint *)&param_1->field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_c8._padding_ = CONCAT44(uVar7,iVar18);
  TStack_c8.CurrentBitIndex = iVar8;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar15 >> 5;
  TStack_c8._28_4_ = local_54;
  TStack_c8.BaseBitIndex = iVar16;
  uStack_a8 = CONCAT44(uStack_114,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  local_res18 = param_2;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar10 < (int)uVar15)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = *(uint *)&param_1->field_0x28;
  if (uVar15 != uVar7) {
    puVar17 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar18 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar18;
      uVar14 = uVar14 + 0x20;
      iVar18 = iVar18 + 1;
      uVar15 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14e560610;
      uVar15 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar15 = (int)lVar11 + -1 + uVar14;
    if ((int)uVar7 < (int)uVar15) {
      uVar15 = uVar7;
    }
  }
LAB_14e560610:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_a8) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    pTVar4 = local_res18;
    if ((TStack_c8.CurrentBitIndex == uVar15) &&
       (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar13 = (FString *)(*(longlong *)param_1 + (longlong)TStack_c8.CurrentBitIndex * 0x28);
    iVar18 = *(int *)(*(longlong *)param_1 + 8 + (longlong)TStack_c8.CurrentBitIndex * 0x28);
    iVar10 = iVar18 + -1;
    if (iVar18 == 0) {
      pwVar12 = L"";
      iVar10 = 0;
    }
    else {
      pwVar12 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar12);
    UE::Interchange::TMapAttributeHelper<FString,FString>::SetKeyValueByHash
              (&this->SceneNodeAnimationPayLoadKeyUidMap,uVar7,pFVar13,pFVar13 + 1);
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  iVar10 = *(int *)&local_res18->field_0x28;
  puVar1 = &local_res18->field_0x10;
  iVar18 = 0;
  iVar16 = 0;
  iVar9 = 0;
  if (iVar10 != 0) {
    puVar19 = *(uint **)&local_res18->field_0x20;
    if (*(uint **)&local_res18->field_0x20 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar7 = *puVar19;
    iVar16 = 0;
    while (uVar7 == 0) {
      lVar11 = (longlong)iVar18;
      iVar16 = iVar16 + 0x20;
      iVar18 = iVar18 + 1;
      iVar9 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14e560721;
      uVar7 = puVar19[lVar11 + 1];
    }
    local_148 = -uVar7 & uVar7;
    uVar2 = (ulonglong)local_148 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar9 = iVar16 + -1 + (int)lVar11;
    if (iVar10 < iVar9) {
      iVar9 = iVar10;
    }
  }
LAB_14e560721:
  uVar7 = *(uint *)&local_res18->field_0x28;
  uVar15 = uVar7 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(local_148,iVar18);
  TStack_98.CurrentBitIndex = iVar9;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  local_a0 = local_res18;
  iVar18 = (int)uVar7 >> 5;
  TStack_98._28_4_ = iVar8;
  TStack_98.BaseBitIndex = iVar16;
  uStack_78 = CONCAT44(uStack_d4,*(int *)&local_res18->field_0x8 - *(int *)&local_res18->field_0x34)
  ;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar7 < 0) || (iVar10 < (int)uVar7)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar14 = *(uint *)&pTVar4->field_0x28;
  if (uVar7 != uVar14) {
    puVar17 = *(undefined1 **)&pTVar4->field_0x20;
    if (*(undefined1 **)&pTVar4->field_0x20 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar7 = -1 << ((byte)uVar7 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar18 * 4);
    while (uVar7 == 0) {
      lVar11 = (longlong)iVar18;
      uVar15 = uVar15 + 0x20;
      iVar18 = iVar18 + 1;
      uVar7 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14e560820;
      uVar7 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar7 = (int)lVar11 + -1 + uVar15;
    if ((int)uVar14 < (int)uVar7) {
      uVar7 = uVar14;
    }
  }
LAB_14e560820:
  while( true ) {
    pTVar5 = local_a0;
    if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
      `TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_98.CurrentBitIndex == uVar7) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == pTVar4))
    break;
    pFVar13 = (FString *)(*(longlong *)pTVar5 + (longlong)TStack_98.CurrentBitIndex * 0x20);
    iVar18 = (pFVar13->Data).ArrayNum;
    iVar10 = iVar18 + -1;
    if (iVar18 == 0) {
      pwVar12 = L"";
      iVar10 = 0;
    }
    else {
      pwVar12 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar12);
    UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::SetKeyValueByHash
              (&this->SceneNodeAnimationPayLoadKeyTypeMap,uVar15,pFVar13,(uchar *)(pFVar13 + 1));
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  return;
}

// SetCustomAddCurveMetadataToSkeleton @ 14e5614a0

bool __thiscall
UInterchangeAnimSequenceFactoryNode::SetCustomAddCurveMetadataToSkeleton
          (UInterchangeAnimSequenceFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetAddCurveMetadataToSkeleton");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomAddCurveMetadataToSkeletonKey,param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomAddCurveMetadataToSkeletonKey).Key);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomDeleteExistingCustomAttributeCurves @ 14e566b60

bool __thiscall
UInterchangeAnimSequenceFactoryNode::SetCustomDeleteExistingCustomAttributeCurves
          (UInterchangeAnimSequenceFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetDeleteExistingCustomAttributeCurves");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomDeleteExistingCustomAttributeCurvesKey,param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomDeleteExistingCustomAttributeCurvesKey).Key);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomDeleteExistingMorphTargetCurves @ 14e566cb0

bool __thiscall
UInterchangeAnimSequenceFactoryNode::SetCustomDeleteExistingMorphTargetCurves
          (UInterchangeAnimSequenceFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetDeleteExistingMorphTargetCurves");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomDeleteExistingMorphTargetCurvesKey,param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomDeleteExistingMorphTargetCurvesKey).Key);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomDeleteExistingNonCurveCustomAttributes @ 14e566e00

bool __thiscall
UInterchangeAnimSequenceFactoryNode::SetCustomDeleteExistingNonCurveCustomAttributes
          (UInterchangeAnimSequenceFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetDeleteExistingNonCurveCustomAttributes");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomDeleteExistingNonCurveCustomAttributesKey,param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomDeleteExistingNonCurveCustomAttributesKey).Key)
    ;
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomDoNotImportCurveWithZero @ 14e5680e0

bool __thiscall
UInterchangeAnimSequenceFactoryNode::SetCustomDoNotImportCurveWithZero
          (UInterchangeAnimSequenceFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetDoNotImportCurveWithZero");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomDoNotImportCurveWithZeroKey,param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomDoNotImportCurveWithZeroKey).Key);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomImportAttributeCurves @ 14e56e330

bool __thiscall
UInterchangeAnimSequenceFactoryNode::SetCustomImportAttributeCurves
          (UInterchangeAnimSequenceFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetImportAttributeCurves");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomImportAttributeCurvesKey,param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomImportAttributeCurvesKey).Key);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomImportBoneTracks @ 14e56e480

bool __thiscall
UInterchangeAnimSequenceFactoryNode::SetCustomImportBoneTracks
          (UInterchangeAnimSequenceFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetImportBoneTracks");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomImportBoneTracksKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomImportBoneTracksKey).Key);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomImportBoneTracksRangeStart @ 14e56e5d0

bool __thiscall
UInterchangeAnimSequenceFactoryNode::SetCustomImportBoneTracksRangeStart
          (UInterchangeAnimSequenceFactoryNode *this,double *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetImportBoneTracksRangeStart");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<double,void>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomImportBoneTracksRangeStartKey,param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomImportBoneTracksRangeStartKey).Key);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomImportBoneTracksRangeStop @ 14e56e720

bool __thiscall
UInterchangeAnimSequenceFactoryNode::SetCustomImportBoneTracksRangeStop
          (UInterchangeAnimSequenceFactoryNode *this,double *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetImportBoneTracksRangeStop");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<double,void>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomImportBoneTracksRangeStopKey,param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomImportBoneTracksRangeStopKey).Key);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomImportBoneTracksSampleRate @ 14e56e870

bool __thiscall
UInterchangeAnimSequenceFactoryNode::SetCustomImportBoneTracksSampleRate
          (UInterchangeAnimSequenceFactoryNode *this,double *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetImportBoneTracksSampleRate");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<double,void>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomImportBoneTracksSampleRateKey,param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomImportBoneTracksSampleRateKey).Key);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomMaterialDriveParameterOnCustomAttribute @ 14e570930

bool __thiscall
UInterchangeAnimSequenceFactoryNode::SetCustomMaterialDriveParameterOnCustomAttribute
          (UInterchangeAnimSequenceFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetMaterialDriveParameterOnCustomAttribute");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomMaterialDriveParameterOnCustomAttributeKey,param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomMaterialDriveParameterOnCustomAttributeKey).Key
                      );
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomRemoveCurveRedundantKeys @ 14e575250

bool __thiscall
UInterchangeAnimSequenceFactoryNode::SetCustomRemoveCurveRedundantKeys
          (UInterchangeAnimSequenceFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetRemoveCurveRedundantKeys");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomRemoveCurveRedundantKeysKey,param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomRemoveCurveRedundantKeysKey).Key);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomSkeletonFactoryNodeUid @ 14e5770e0

bool __thiscall
UInterchangeAnimSequenceFactoryNode::SetCustomSkeletonFactoryNodeUid
          (UInterchangeAnimSequenceFactoryNode *this,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetSkeletonFactoryNodeUid");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomSkeletonFactoryNodeUidKey,param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomSkeletonFactoryNodeUidKey).Key);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomSkeletonSoftObjectPath @ 14e577230

bool __thiscall
UInterchangeAnimSequenceFactoryNode::SetCustomSkeletonSoftObjectPath
          (UInterchangeAnimSequenceFactoryNode *this,FSoftObjectPath *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetSkeletonSoftObjectPath");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FSoftObjectPath,void>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomSkeletonSoftObjectPathKey,param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomSkeletonSoftObjectPathKey).Key);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// StaticRegisterNativesUInterchangeAnimSequenceFactoryNode @ 14e57f110

void __cdecl
UInterchangeAnimSequenceFactoryNode::StaticRegisterNativesUInterchangeAnimSequenceFactoryNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x30;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetAnimatedAttributeCurveName @ 14e586ad0

void __cdecl
UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeCurveName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  int local_res8 [2];
  FString local_18;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar2 = &local_18;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar2 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TArrayAttributeHelper<FString>::GetItem
            ((TArrayAttributeHelper<FString> *)&param_1[0x11].field_0x18,local_res8[0],pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetAnimatedAttributeCurveNames @ 14e586bd0

void __cdecl
UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeCurveNames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems
            ((TArrayAttributeHelper<FString> *)&param_1[0x11].field_0x18,pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetAnimatedAttributeCurveNamesCount @ 14e586c90

void __cdecl
UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeCurveNamesCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount
                    ((TArrayAttributeHelper<FString> *)&param_1[0x11].field_0x18);
  *(int *)param_3 = iVar1;
  return;
}

// execGetAnimatedAttributeStepCurveName @ 14e586cd0

void __cdecl
UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeStepCurveName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  int local_res8 [2];
  FString local_18;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar2 = &local_18;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar2 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TArrayAttributeHelper<FString>::GetItem
            ((TArrayAttributeHelper<FString> *)&param_1[0x12].field_0x10,local_res8[0],pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetAnimatedAttributeStepCurveNames @ 14e586dd0

void __cdecl
UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeStepCurveNames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems
            ((TArrayAttributeHelper<FString> *)&param_1[0x12].field_0x10,pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetAnimatedAttributeStepCurveNamesCount @ 14e586e90

void __cdecl
UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeStepCurveNamesCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount
                    ((TArrayAttributeHelper<FString> *)&param_1[0x12].field_0x10);
  *(int *)param_3 = iVar1;
  return;
}

// execGetAnimatedMaterialCurveSuffixe @ 14e586ed0

void __cdecl
UInterchangeAnimSequenceFactoryNode::execGetAnimatedMaterialCurveSuffixe
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  int local_res8 [2];
  FString local_18;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar2 = &local_18;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar2 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TArrayAttributeHelper<FString>::GetItem
            ((TArrayAttributeHelper<FString> *)&param_1[0x13].field_0x8,local_res8[0],pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetAnimatedMaterialCurveSuffixes @ 14e586fd0

void __cdecl
UInterchangeAnimSequenceFactoryNode::execGetAnimatedMaterialCurveSuffixes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems
            ((TArrayAttributeHelper<FString> *)&param_1[0x13].field_0x8,pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetAnimatedMaterialCurveSuffixesCount @ 14e587090

void __cdecl
UInterchangeAnimSequenceFactoryNode::execGetAnimatedMaterialCurveSuffixesCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount
                    ((TArrayAttributeHelper<FString> *)&param_1[0x13].field_0x8);
  *(int *)param_3 = iVar1;
  return;
}

// execGetCustomAddCurveMetadataToSkeleton @ 14e588b50

void __cdecl
UInterchangeAnimSequenceFactoryNode::execGetCustomAddCurveMetadataToSkeleton
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool *pbVar5;
  bool local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar5 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetAddCurveMetadataToSkeleton");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0xe),&local_38
                     ,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomDeleteExistingCustomAttributeCurves @ 14e58d310

void __cdecl
UInterchangeAnimSequenceFactoryNode::execGetCustomDeleteExistingCustomAttributeCurves
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool *pbVar5;
  bool local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar5 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetDeleteExistingCustomAttributeCurves");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xf].field_0x18,
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomDeleteExistingMorphTargetCurves @ 14e58d440

void __cdecl
UInterchangeAnimSequenceFactoryNode::execGetCustomDeleteExistingMorphTargetCurves
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool *pbVar5;
  bool local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar5 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetDeleteExistingMorphTargetCurves");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xf].field_0x8,
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomDeleteExistingNonCurveCustomAttributes @ 14e58d570

void __cdecl
UInterchangeAnimSequenceFactoryNode::execGetCustomDeleteExistingNonCurveCustomAttributes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool *pbVar5;
  bool local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar5 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetDeleteExistingNonCurveCustomAttributes");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0x10),
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomDoNotImportCurveWithZero @ 14e58dba0

void __cdecl
UInterchangeAnimSequenceFactoryNode::execGetCustomDoNotImportCurveWithZero
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool *pbVar5;
  bool local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar5 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetDoNotImportCurveWithZero");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xd].field_0x18,
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomImportAttributeCurves @ 14e58fea0

void __cdecl
UInterchangeAnimSequenceFactoryNode::execGetCustomImportAttributeCurves
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool *pbVar5;
  bool local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar5 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetImportAttributeCurves");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xd].field_0x8,
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomImportBoneTracks @ 14e58ffd0

void __cdecl
UInterchangeAnimSequenceFactoryNode::execGetCustomImportBoneTracks
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool *pbVar5;
  bool local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar5 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetImportBoneTracks");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xb].field_0x18,
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomImportBoneTracksRangeStart @ 14e590100

void __cdecl
UInterchangeAnimSequenceFactoryNode::execGetCustomImportBoneTracksRangeStart
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  double *pdVar5;
  double local_res8;
  FString local_38;
  void *local_28 [2];
  
  local_res8 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pdVar5 = &local_res8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar5 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetImportBoneTracksRangeStart");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<double>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xc].field_0x10,
                     &local_38,pdVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomImportBoneTracksRangeStop @ 14e590230

void __cdecl
UInterchangeAnimSequenceFactoryNode::execGetCustomImportBoneTracksRangeStop
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  double *pdVar5;
  double local_res8;
  FString local_38;
  void *local_28 [2];
  
  local_res8 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pdVar5 = &local_res8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar5 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetImportBoneTracksRangeStop");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<double>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xc].field_0x20,
                     &local_38,pdVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomImportBoneTracksSampleRate @ 14e590360

void __cdecl
UInterchangeAnimSequenceFactoryNode::execGetCustomImportBoneTracksSampleRate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  double *pdVar5;
  double local_res8;
  FString local_38;
  void *local_28 [2];
  
  local_res8 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pdVar5 = &local_res8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar5 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetImportBoneTracksSampleRate");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<double>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0xc),&local_38
                     ,pdVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomMaterialDriveParameterOnCustomAttribute @ 14e591d00

void __cdecl
UInterchangeAnimSequenceFactoryNode::execGetCustomMaterialDriveParameterOnCustomAttribute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool *pbVar5;
  bool local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar5 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetMaterialDriveParameterOnCustomAttribute");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xe].field_0x20,
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomRemoveCurveRedundantKeys @ 14e594040

void __cdecl
UInterchangeAnimSequenceFactoryNode::execGetCustomRemoveCurveRedundantKeys
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool *pbVar5;
  bool local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar5 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetRemoveCurveRedundantKeys");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xe].field_0x10,
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomSkeletonFactoryNodeUid @ 14e595190

void __cdecl
UInterchangeAnimSequenceFactoryNode::execGetCustomSkeletonFactoryNodeUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FString *pFVar5;
  FString local_38;
  FString local_28;
  void *local_18 [2];
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar5 = &local_38;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar5 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetSkeletonFactoryNodeUid");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<FString>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xb].field_0x8,
                     &local_28,pFVar5);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetCustomSkeletonSoftObjectPath @ 14e5952e0

void __cdecl
UInterchangeAnimSequenceFactoryNode::execGetCustomSkeletonSoftObjectPath
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FSoftObjectPath *pFVar5;
  FString local_48;
  void *local_38 [2];
  FSoftObjectPath local_28;
  
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar5 = &local_28;
  if ((FSoftObjectPath *)param_2->MostRecentPropertyAddress != (FSoftObjectPath *)0x0) {
    pFVar5 = (FSoftObjectPath *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".GetSkeletonSoftObjectPath");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<FSoftObjectPath>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x10].field_0x10
                     ,&local_48,pFVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetMorphTargetNodeAnimationPayloadKeys @ 14e5996c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeAnimSequenceFactoryNode::execGetMorphTargetNodeAnimationPayloadKeys
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TMap<FString,FInterchangeAnimationPayLoadKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>_>
  *pTVar3;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  pTVar3 = (TMap<FString,FInterchangeAnimationPayLoadKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>_>
            *)local_78;
  if ((TMap<FString,FInterchangeAnimationPayLoadKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>_>
       *)param_2->MostRecentPropertyAddress !=
      (TMap<FString,FInterchangeAnimationPayLoadKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>_>
       *)0x0) {
    pTVar3 = (TMap<FString,FInterchangeAnimationPayLoadKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>_>
              *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetMorphTargetNodeAnimationPayloadKeys((UInterchangeAnimSequenceFactoryNode *)param_1,pTVar3);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeAnimationPayLoadKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeAnimationPayLoadKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// execGetSceneNodeAnimationPayloadKeys @ 14e59a650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeAnimSequenceFactoryNode::execGetSceneNodeAnimationPayloadKeys
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TMap<FString,FInterchangeAnimationPayLoadKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>_>
  *pTVar3;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  pTVar3 = (TMap<FString,FInterchangeAnimationPayLoadKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>_>
            *)local_78;
  if ((TMap<FString,FInterchangeAnimationPayLoadKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>_>
       *)param_2->MostRecentPropertyAddress !=
      (TMap<FString,FInterchangeAnimationPayLoadKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>_>
       *)0x0) {
    pTVar3 = (TMap<FString,FInterchangeAnimationPayLoadKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>_>
              *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetSceneNodeAnimationPayloadKeys((UInterchangeAnimSequenceFactoryNode *)param_1,pTVar3);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeAnimationPayLoadKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeAnimationPayLoadKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// execInitializeAnimSequenceNode @ 14e59bcc0

void __cdecl
UInterchangeAnimSequenceFactoryNode::execInitializeAnimSequenceNode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UInterchangeBaseNodeContainer *this;
  UInterchangeBaseNodeContainer *local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10 = (UInterchangeBaseNodeContainer *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::FString(&local_18,L"");
  UInterchangeBaseNodeContainer::SetupNode
            (this,(UInterchangeBaseNode *)param_1,&local_28,&local_38,FactoryData,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemoveAnimatedAttributeCurveName @ 14e59d1d0

void __cdecl
UInterchangeAnimSequenceFactoryNode::execRemoveAnimatedAttributeCurveName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveItem
                    ((TArrayAttributeHelper<FString> *)&param_1[0x11].field_0x18,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemoveAnimatedAttributeStepCurveName @ 14e59d290

void __cdecl
UInterchangeAnimSequenceFactoryNode::execRemoveAnimatedAttributeStepCurveName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveItem
                    ((TArrayAttributeHelper<FString> *)&param_1[0x12].field_0x10,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemoveAnimatedMaterialCurveSuffixe @ 14e59d350

void __cdecl
UInterchangeAnimSequenceFactoryNode::execRemoveAnimatedMaterialCurveSuffixe
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveItem
                    ((TArrayAttributeHelper<FString> *)&param_1[0x13].field_0x8,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetAnimatedAttributeCurveName @ 14e59df50

void __cdecl
UInterchangeAnimSequenceFactoryNode::execSetAnimatedAttributeCurveName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                    ((TArrayAttributeHelper<FString> *)&param_1[0x11].field_0x18,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetAnimatedAttributeStepCurveName @ 14e59e010

void __cdecl
UInterchangeAnimSequenceFactoryNode::execSetAnimatedAttributeStepCurveName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                    ((TArrayAttributeHelper<FString> *)&param_1[0x12].field_0x10,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetAnimatedMaterialCurveSuffixe @ 14e59e0d0

void __cdecl
UInterchangeAnimSequenceFactoryNode::execSetAnimatedMaterialCurveSuffixe
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                    ((TArrayAttributeHelper<FString> *)&param_1[0x13].field_0x8,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetAnimationPayloadKeysForMorphTargetNodeUids @ 14e59e2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeAnimSequenceFactoryNode::execSetAnimationPayloadKeysForMorphTargetNodeUids
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar3
  ;
  TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
  *pTVar4;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  void *local_88;
  undefined4 local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  pTVar3 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
            *)local_78;
  if ((TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *)
      param_2->MostRecentPropertyAddress !=
      (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *)
      0x0) {
    pTVar3 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_2->MostRecentPropertyAddress;
  }
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_9c = 0x80;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  pTVar4 = (TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
            *)local_c8;
  if ((TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
       *)param_2->MostRecentPropertyAddress !=
      (TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
       *)0x0) {
    pTVar4 = (TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
              *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetAnimationPayloadKeysForMorphTargetNodeUids
            ((UInterchangeAnimSequenceFactoryNode *)param_1,pTVar3,pTVar4);
  local_80 = 0;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_c8,0,local_c8._8_4_);
  iVar2 = SUB84(local_c8._8_8_,4);
  local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
  }
  local_98 = 0xffffffff;
  local_94 = 0;
  local_a0 = 0;
  if (0x80 < local_9c) {
    local_9c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// execSetAnimationPayloadKeysForSceneNodeUids @ 14e59e550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeAnimSequenceFactoryNode::execSetAnimationPayloadKeysForSceneNodeUids
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar3
  ;
  TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
  *pTVar4;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  void *local_88;
  undefined4 local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  pTVar3 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
            *)local_78;
  if ((TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *)
      param_2->MostRecentPropertyAddress !=
      (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *)
      0x0) {
    pTVar3 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_2->MostRecentPropertyAddress;
  }
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_9c = 0x80;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  pTVar4 = (TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
            *)local_c8;
  if ((TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
       *)param_2->MostRecentPropertyAddress !=
      (TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
       *)0x0) {
    pTVar4 = (TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
              *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetAnimationPayloadKeysForSceneNodeUids
            ((UInterchangeAnimSequenceFactoryNode *)param_1,pTVar3,pTVar4);
  local_80 = 0;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_c8,0,local_c8._8_4_);
  iVar2 = SUB84(local_c8._8_8_,4);
  local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
  }
  local_98 = 0xffffffff;
  local_94 = 0;
  local_a0 = 0;
  if (0x80 < local_9c) {
    local_9c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// execSetCustomAddCurveMetadataToSkeleton @ 14e59ef70

void __cdecl
UInterchangeAnimSequenceFactoryNode::execSetCustomAddCurveMetadataToSkeleton
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  bool *pbVar7;
  bool local_res8 [8];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar7 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar7 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetAddCurveMetadataToSkeleton");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0xe),pbVar7,
                     None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)(param_1 + 0xe));
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomDeleteExistingCustomAttributeCurves @ 14e5a5430

void __cdecl
UInterchangeAnimSequenceFactoryNode::execSetCustomDeleteExistingCustomAttributeCurves
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  bool *pbVar7;
  bool local_res8 [8];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar7 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar7 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetDeleteExistingCustomAttributeCurves");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xf].field_0x18,
                     pbVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[0xf].field_0x18);
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomDeleteExistingMorphTargetCurves @ 14e5a55f0

void __cdecl
UInterchangeAnimSequenceFactoryNode::execSetCustomDeleteExistingMorphTargetCurves
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  bool *pbVar7;
  bool local_res8 [8];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar7 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar7 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetDeleteExistingMorphTargetCurves");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xf].field_0x8,
                     pbVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[0xf].field_0x8);
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomDeleteExistingNonCurveCustomAttributes @ 14e5a57b0

void __cdecl
UInterchangeAnimSequenceFactoryNode::execSetCustomDeleteExistingNonCurveCustomAttributes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  bool *pbVar7;
  bool local_res8 [8];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar7 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar7 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetDeleteExistingNonCurveCustomAttributes");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0x10),pbVar7,
                     None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)(param_1 + 0x10));
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomDoNotImportCurveWithZero @ 14e5a5f40

void __cdecl
UInterchangeAnimSequenceFactoryNode::execSetCustomDoNotImportCurveWithZero
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  bool *pbVar7;
  bool local_res8 [8];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar7 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar7 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetDoNotImportCurveWithZero");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xd].field_0x18,
                     pbVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[0xd].field_0x18);
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomImportAttributeCurves @ 14e5a8b80

void __cdecl
UInterchangeAnimSequenceFactoryNode::execSetCustomImportAttributeCurves
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  bool *pbVar7;
  bool local_res8 [8];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar7 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar7 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetImportAttributeCurves");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xd].field_0x8,
                     pbVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[0xd].field_0x8);
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomImportBoneTracks @ 14e5a8d40

void __cdecl
UInterchangeAnimSequenceFactoryNode::execSetCustomImportBoneTracks
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  bool *pbVar7;
  bool local_res8 [8];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar7 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar7 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetImportBoneTracks");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xb].field_0x18,
                     pbVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[0xb].field_0x18);
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomImportBoneTracksRangeStart @ 14e5a8f00

void __cdecl
UInterchangeAnimSequenceFactoryNode::execSetCustomImportBoneTracksRangeStart
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  double *pdVar7;
  double local_res8;
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pdVar7 = &local_res8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar7 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetImportBoneTracksRangeStart");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<double,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xc].field_0x10,
                     pdVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[0xc].field_0x10);
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomImportBoneTracksRangeStop @ 14e5a90c0

void __cdecl
UInterchangeAnimSequenceFactoryNode::execSetCustomImportBoneTracksRangeStop
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  double *pdVar7;
  double local_res8;
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pdVar7 = &local_res8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar7 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetImportBoneTracksRangeStop");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<double,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xc].field_0x20,
                     pdVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[0xc].field_0x20);
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomImportBoneTracksSampleRate @ 14e5a9280

void __cdecl
UInterchangeAnimSequenceFactoryNode::execSetCustomImportBoneTracksSampleRate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  double *pdVar7;
  double local_res8;
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pdVar7 = &local_res8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar7 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetImportBoneTracksSampleRate");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<double,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0xc),pdVar7,
                     None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)(param_1 + 0xc));
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomMaterialDriveParameterOnCustomAttribute @ 14e5aba10

void __cdecl
UInterchangeAnimSequenceFactoryNode::execSetCustomMaterialDriveParameterOnCustomAttribute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  bool *pbVar7;
  bool local_res8 [8];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar7 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar7 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetMaterialDriveParameterOnCustomAttribute");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xe].field_0x20,
                     pbVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[0xe].field_0x20);
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomRemoveCurveRedundantKeys @ 14e5aea10

void __cdecl
UInterchangeAnimSequenceFactoryNode::execSetCustomRemoveCurveRedundantKeys
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  bool *pbVar7;
  bool local_res8 [8];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar7 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar7 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetRemoveCurveRedundantKeys");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xe].field_0x10,
                     pbVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[0xe].field_0x10);
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomSkeletonFactoryNodeUid @ 14e5b00b0

void __cdecl
UInterchangeAnimSequenceFactoryNode::execSetCustomSkeletonFactoryNodeUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  FString local_58;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetSkeletonFactoryNodeUid");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xb].field_0x8,
                     &local_48,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,(FString *)&param_1[0xb].field_0x8);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_38.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_18);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetCustomSkeletonSoftObjectPath @ 14e5b02a0

void __cdecl
UInterchangeAnimSequenceFactoryNode::execSetCustomSkeletonSoftObjectPath
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  FSoftObjectPath *pFVar7;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  FString local_48;
  FSoftObjectPath local_38;
  
  local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_38.AssetPath.PackageName.Number = 0;
  local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_38.AssetPath.AssetName.Number = 0;
  local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.SubPathString.Data.ArrayNum = 0;
  local_38.SubPathString.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar7 = &local_38;
  if ((FSoftObjectPath *)param_2->MostRecentPropertyAddress != (FSoftObjectPath *)0x0) {
    pFVar7 = (FSoftObjectPath *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_58);
  ::FString::ConcatFC(&local_68,pFVar4,L".SetSkeletonSoftObjectPath");
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FSoftObjectPath,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x10].field_0x10
                     ,pFVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_48,(FString *)&param_1[0x10].field_0x10);
    _Src.Data = local_68.Data.AllocatorInstance.Data;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_68.Data.ArrayNum == 0) {
      local_78.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_68.Data.ArrayNum,
                 &local_78.Data.ArrayMax);
      memcpy(local_78.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_68.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_78,(FAttributeKey *)&local_48);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

