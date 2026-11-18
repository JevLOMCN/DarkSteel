// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FFinalPostProcessSettings @ 1453f97a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FFinalPostProcessSettings * __thiscall
FFinalPostProcessSettings::FFinalPostProcessSettings
          (FFinalPostProcessSettings *this,FFinalPostProcessSettings *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<FFinalPostProcessSettings::FCubemapEntry,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FFinalPostProcessSettings::FLUTBlenderEntry,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar5;
  TMap<FName,TSharedPtr<FImagePixelPipe,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FImagePixelPipe,1>,0>_>
  *this_00;
  FBlendableManager *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  FPostProcessSettings::FPostProcessSettings
            ((FPostProcessSettings *)this,(FPostProcessSettings *)param_1);
  pTVar3 = &this->ContributingCubemaps;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ContributingCubemaps).ArrayMax;
  iVar7 = (param_1->ContributingCubemaps).ArrayNum;
  pFVar8 = (param_1->ContributingCubemaps).AllocatorInstance.Data;
  (this->ContributingCubemaps).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar7,0,&pTVar3->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar8,(longlong)iVar7 * 0x18);
  }
  pTVar4 = &this->ContributingLUTs;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ContributingLUTs).ArrayMax;
  iVar7 = (param_1->ContributingLUTs).ArrayNum;
  pFVar8 = (param_1->ContributingLUTs).AllocatorInstance.Data;
  (this->ContributingLUTs).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar7,0,&pTVar4->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 4);
  }
  pTVar5 = &this->BufferVisualizationOverviewMaterials;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->BufferVisualizationOverviewMaterials).ArrayMax;
  iVar7 = (param_1->BufferVisualizationOverviewMaterials).ArrayNum;
  pFVar8 = (param_1->BufferVisualizationOverviewMaterials).AllocatorInstance.Data;
  (this->BufferVisualizationOverviewMaterials).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar7,0,&pTVar5->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 3);
  }
  this->VisualizeCalibrationColorMaterial = param_1->VisualizeCalibrationColorMaterial;
  this->VisualizeCalibrationGrayscaleMaterial = param_1->VisualizeCalibrationGrayscaleMaterial;
  this->VisualizeCalibrationCustomMaterial = param_1->VisualizeCalibrationCustomMaterial;
  this->HighResScreenshotMaterial = param_1->HighResScreenshotMaterial;
  this->HighResScreenshotMaskMaterial = param_1->HighResScreenshotMaskMaterial;
  this->HighResScreenshotCaptureRegionMaterial = param_1->HighResScreenshotCaptureRegionMaterial;
  this->bBufferVisualizationDumpRequired = param_1->bBufferVisualizationDumpRequired;
  ::FString::FString(&this->BufferVisualizationDumpBaseFilename,
                     &param_1->BufferVisualizationDumpBaseFilename);
  this->bBufferVisualizationOverviewTargetIsSelected =
       param_1->bBufferVisualizationOverviewTargetIsSelected;
  ::FString::FString(&this->BufferVisualizationOverviewSelectedTargetMaterialName,
                     &param_1->BufferVisualizationOverviewSelectedTargetMaterialName);
  this_00 = &this->BufferVisualizationPipes;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->BufferVisualizationPipes).field_0x8 = 0;
  *(undefined8 *)&(this->BufferVisualizationPipes).field_0x20 = 0;
  puVar2 = &(this->BufferVisualizationPipes).field_0x48;
  *(undefined4 *)&(this->BufferVisualizationPipes).field_0x28 = 0;
  *(undefined4 *)&(this->BufferVisualizationPipes).field_0x2c = 0x80;
  *(undefined4 *)&(this->BufferVisualizationPipes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BufferVisualizationPipes).field_0x34 = 0;
  *(undefined8 *)&(this->BufferVisualizationPipes).field_0x40 = 0;
  *(undefined4 *)puVar2 = 0;
  if (this_00 != &param_1->BufferVisualizationPipes) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->BufferVisualizationPipes).field_0x38,
               (int *)puVar2,
               (ForElementType<FSetElementId> *)&(param_1->BufferVisualizationPipes).field_0x38,
               *(int *)&(param_1->BufferVisualizationPipes).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FImagePixelPipe,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FImagePixelPipe,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FImagePixelPipe,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->BufferVisualizationPipes);
  }
  pFVar6 = &this->BlendableManager;
  (pFVar6->Scratch).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->BlendableManager).Scratch.ArrayMax;
  iVar7 = (param_1->BlendableManager).Scratch.ArrayNum;
  pFVar8 = (param_1->BlendableManager).Scratch.AllocatorInstance.Data;
  (this->BlendableManager).Scratch.ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar7,0,(ForAnyElementType *)pFVar6,iVar7,piVar1);
    memcpy((pFVar6->Scratch).AllocatorInstance.Data,pFVar8,(longlong)iVar7);
  }
  return this;
}

// operator= @ 14547a940

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FFinalPostProcessSettings * __thiscall
FFinalPostProcessSettings::operator=
          (FFinalPostProcessSettings *this,FFinalPostProcessSettings *param_1)

{
  int *piVar1;
  TArray<FFinalPostProcessSettings::FCubemapEntry,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FFinalPostProcessSettings::FLUTBlenderEntry,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar4;
  FBlendableManager *pFVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  FPostProcessSettings::operator=((FPostProcessSettings *)this,(FPostProcessSettings *)param_1);
  pTVar2 = &this->ContributingCubemaps;
  if (pTVar2 != &param_1->ContributingCubemaps) {
    iVar6 = (param_1->ContributingCubemaps).ArrayNum;
    piVar1 = &(this->ContributingCubemaps).ArrayMax;
    pFVar8 = (param_1->ContributingCubemaps).AllocatorInstance.Data;
    (this->ContributingCubemaps).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar6,*piVar1,&pTVar2->AllocatorInstance,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar8,(longlong)iVar6 * 0x18);
      }
    }
  }
  pTVar3 = &this->ContributingLUTs;
  if (pTVar3 != &param_1->ContributingLUTs) {
    iVar6 = (param_1->ContributingLUTs).ArrayNum;
    piVar1 = &(this->ContributingLUTs).ArrayMax;
    pFVar8 = (param_1->ContributingLUTs).AllocatorInstance.Data;
    (this->ContributingLUTs).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar6,*piVar1,&pTVar3->AllocatorInstance,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar8,(longlong)iVar6 << 4);
      }
    }
  }
  pTVar4 = &this->BufferVisualizationOverviewMaterials;
  if (pTVar4 != &param_1->BufferVisualizationOverviewMaterials) {
    iVar6 = (param_1->BufferVisualizationOverviewMaterials).ArrayNum;
    piVar1 = &(this->BufferVisualizationOverviewMaterials).ArrayMax;
    pFVar8 = (param_1->BufferVisualizationOverviewMaterials).AllocatorInstance.Data;
    (this->BufferVisualizationOverviewMaterials).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar6,*piVar1,&pTVar4->AllocatorInstance,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,pFVar8,(longlong)iVar6 << 3);
      }
    }
  }
  this->VisualizeCalibrationColorMaterial = param_1->VisualizeCalibrationColorMaterial;
  this->VisualizeCalibrationGrayscaleMaterial = param_1->VisualizeCalibrationGrayscaleMaterial;
  this->VisualizeCalibrationCustomMaterial = param_1->VisualizeCalibrationCustomMaterial;
  this->HighResScreenshotMaterial = param_1->HighResScreenshotMaterial;
  this->HighResScreenshotMaskMaterial = param_1->HighResScreenshotMaskMaterial;
  this->HighResScreenshotCaptureRegionMaterial = param_1->HighResScreenshotCaptureRegionMaterial;
  this->bBufferVisualizationDumpRequired = param_1->bBufferVisualizationDumpRequired;
  ::FString::operator=
            (&this->BufferVisualizationDumpBaseFilename,
             &param_1->BufferVisualizationDumpBaseFilename);
  this->bBufferVisualizationOverviewTargetIsSelected =
       param_1->bBufferVisualizationOverviewTargetIsSelected;
  ::FString::operator=
            (&this->BufferVisualizationOverviewSelectedTargetMaterialName,
             &param_1->BufferVisualizationOverviewSelectedTargetMaterialName);
  if (&this->BufferVisualizationPipes != &param_1->BufferVisualizationPipes) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->BufferVisualizationPipes).field_0x38,
               (int *)&(this->BufferVisualizationPipes).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->BufferVisualizationPipes).field_0x38,
               *(int *)&(param_1->BufferVisualizationPipes).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FImagePixelPipe,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FImagePixelPipe,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->BufferVisualizationPipes,
                (TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FImagePixelPipe,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->BufferVisualizationPipes);
  }
  pFVar5 = &this->BlendableManager;
  if (pFVar5 != &param_1->BlendableManager) {
    iVar6 = (param_1->BlendableManager).Scratch.ArrayNum;
    piVar1 = &(this->BlendableManager).Scratch.ArrayMax;
    pFVar8 = (param_1->BlendableManager).Scratch.AllocatorInstance.Data;
    iVar7 = *piVar1;
    (this->BlendableManager).Scratch.ArrayNum = iVar6;
    if ((iVar6 == 0) && (iVar7 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar6,iVar7,(ForAnyElementType *)pFVar5,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((pFVar5->Scratch).AllocatorInstance.Data,pFVar8,(longlong)iVar6);
      }
    }
  }
  return this;
}

