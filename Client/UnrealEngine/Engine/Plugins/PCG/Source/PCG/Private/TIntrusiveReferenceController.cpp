// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 207

// DestroyObject @ 149726af0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGetAssetListElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGGetAssetListElement,1> *this)

{
  return;
}

// DestroyObject @ 14974fc10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGContextHandle,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGContextHandle,1> *this)

{
  FPCGContextHandle::~FPCGContextHandle((FPCGContextHandle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14974fc20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGProxyForGPUDataCollection,1>::
DestroyObject(TIntrusiveReferenceController<FPCGProxyForGPUDataCollection,1> *this)

{
  FPCGProxyForGPUDataCollection::~FPCGProxyForGPUDataCollection
            ((FPCGProxyForGPUDataCollection *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14974fc30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UPCGRawBufferDataProvider::FReadbackState,1>::
DestroyObject(TIntrusiveReferenceController<UPCGRawBufferDataProvider::FReadbackState,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 14974fc50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGDataUploadAdaptor,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGDataUploadAdaptor,1> *this)

{
  FPCGDataUploadAdaptor::~FPCGDataUploadAdaptor((FPCGDataUploadAdaptor *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14974fc60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGLandscapeResource,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGLandscapeResource,1> *this)

{
  FPCGLandscapeResource::~FPCGLandscapeResource((FPCGLandscapeResource *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14974fc70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGPrimitiveFactoryISKMC,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGPrimitiveFactoryISKMC,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x48);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FPCGSoftSkinnedMeshComponentDescriptor,int>
            (*(FPCGSoftSkinnedMeshComponentDescriptor **)((this->ObjectStorage).Pad + 8),
             *(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14974fcd0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGPrimitiveFactoryPISMC,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGPrimitiveFactoryPISMC,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x48);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FPCGProceduralISMComponentDescriptor,int>
            (*(FPCGProceduralISMComponentDescriptor **)((this->ObjectStorage).Pad + 8),
             *(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 1497ffea0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGComputeGraphElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGComputeGraphElement,1> *this)

{
  return;
}

// DestroyObject @ 1497ffeb0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGCustomHLSLElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGCustomHLSLElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dfd20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<PCGGrammar::FModuleDescriptor,1>::
DestroyObject(TIntrusiveReferenceController<PCGGrammar::FModuleDescriptor,1> *this)

{
  void *pvVar1;
  
  DestructItems<PCGGrammar::FModuleDescriptor,int>
            (*(FModuleDescriptor **)(this->ObjectStorage).Pad,
             *(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 1499dfd60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<PCGGrammar::FTokenizedModule,1>::DestroyObject
          (TIntrusiveReferenceController<PCGGrammar::FTokenizedModule,1> *this)

{
  TArray<PCGGrammar::FTokenizedModule,TSizedDefaultAllocator<32>_>::
  ~TArray<PCGGrammar::FTokenizedModule,TSizedDefaultAllocator<32>_>
            ((TArray<PCGGrammar::FTokenizedModule,TSizedDefaultAllocator<32>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 1499dfd70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGAttributeCastElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGAttributeCastElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dfd80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGBooleanSelectElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGBooleanSelectElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dfd90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGBranchElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGBranchElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dfda0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGDataAttributesToTagsElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGDataAttributesToTagsElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dfdb0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGDuplicateCrossSectionsElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGDuplicateCrossSectionsElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dfdc0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGExportSelectedAttributesElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGExportSelectedAttributesElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dfdd0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGExtractAttributeElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGExtractAttributeElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dfde0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGHashAttributeElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGHashAttributeElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dfdf0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGLoadDataAssetElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGLoadDataAssetElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dfe00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGLoadDataTableElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGLoadDataTableElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dfe10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGMetadataBitwiseElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGMetadataBitwiseElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dfe20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGMetadataBooleanElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGMetadataBooleanElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dfe30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGMetadataBreakTransformElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGMetadataBreakTransformElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dfe40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGMetadataBreakVectorElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGMetadataBreakVectorElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dfe50

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGMetadataCompareElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGMetadataCompareElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dfe60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGMetadataMakeRotatorElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGMetadataMakeRotatorElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dfe70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGMetadataMakeTransformElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGMetadataMakeTransformElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dfe80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGMetadataMakeVectorElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGMetadataMakeVectorElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dfe90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGMetadataMathsElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGMetadataMathsElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dfea0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGMultiSelectElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGMultiSelectElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dfeb0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGPrintGrammarElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGPrintGrammarElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dfec0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGQualityBranchElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGQualityBranchElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dfed0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGQualitySelectElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGQualitySelectElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dfee0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSaveDataAssetElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGSaveDataAssetElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dfef0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSegmentSubdivisionElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGSegmentSubdivisionElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dff00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSelectGrammarElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGSelectGrammarElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dff10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSplineToSegmentElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGSplineToSegmentElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dff20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSubdivideSplineElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGSubdivideSplineElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dff30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSwitchElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGSwitchElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dff40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGTagsToDataAttributesElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGTagsToDataAttributesElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dff50

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGWaitElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGWaitElement,1> *this)

{
  return;
}

// DestroyObject @ 1499dff60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGWaitLandscapeReadyElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGWaitLandscapeReadyElement,1> *this)

{
  return;
}

// DestroyObject @ 149afdc60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGAddComponentElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGAddComponentElement,1> *this)

{
  return;
}

// DestroyObject @ 149afdc70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGAddTagElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGAddTagElement,1> *this)

{
  return;
}

// DestroyObject @ 149afdc80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGApplyHierarchyElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGApplyHierarchyElement,1> *this)

{
  return;
}

// DestroyObject @ 149afdc90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGApplyOnObjectElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGApplyOnObjectElement,1> *this)

{
  return;
}

// DestroyObject @ 149afdca0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGApplyScaleToBoundsElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGApplyScaleToBoundsElement,1> *this)

{
  return;
}

// DestroyObject @ 149afdcb0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGAttractElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGAttractElement,1> *this)

{
  return;
}

// DestroyObject @ 149afdcc0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGAttributeFilterElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGAttributeFilterElement,1> *this)

{
  return;
}

// DestroyObject @ 149afdcd0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGAttributeFilterRangeElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGAttributeFilterRangeElement,1> *this)

{
  return;
}

// DestroyObject @ 149afdce0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGAttributeGetFromIndexElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGAttributeGetFromIndexElement,1> *this)

{
  return;
}

// DestroyObject @ 149afdcf0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGAttributeGetFromPointIndexElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGAttributeGetFromPointIndexElement,1> *this)

{
  return;
}

// DestroyObject @ 149afdd00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGAttributeNoiseElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGAttributeNoiseElement,1> *this)

{
  return;
}

// DestroyObject @ 149afdd10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGAttributeReduceElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGAttributeReduceElement,1> *this)

{
  return;
}

// DestroyObject @ 149afdd20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGAttributeRemapElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGAttributeRemapElement,1> *this)

{
  return;
}

// DestroyObject @ 149afdd30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGAttributeRemoveDuplicatesElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGAttributeRemoveDuplicatesElement,1> *this)

{
  return;
}

// DestroyObject @ 149afdd40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGAttributeSelectElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGAttributeSelectElement,1> *this)

{
  return;
}

// DestroyObject @ 149afdd50

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGBlurElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGBlurElement,1> *this)

{
  return;
}

// DestroyObject @ 149afdd60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGBoundsFromMeshElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGBoundsFromMeshElement,1> *this)

{
  return;
}

// DestroyObject @ 149afdd70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGBoundsModifier,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGBoundsModifier,1> *this)

{
  return;
}

// DestroyObject @ 149afdd80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGCleanSplineElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGCleanSplineElement,1> *this)

{
  return;
}

// DestroyObject @ 149afdd90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGClusterElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGClusterElement,1> *this)

{
  return;
}

// DestroyObject @ 149afdda0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGCollapseElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGCollapseElement,1> *this)

{
  return;
}

// DestroyObject @ 149afddb0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGCollapsePointsElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGCollapsePointsElement,1> *this)

{
  return;
}

// DestroyObject @ 149afddc0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGCombinePointsElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGCombinePointsElement,1> *this)

{
  return;
}

// DestroyObject @ 149afddd0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGConvertToAttributeSetElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGConvertToAttributeSetElement,1> *this)

{
  return;
}

// DestroyObject @ 149afdde0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGMetadataPartitionElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGMetadataPartitionElement,1> *this)

{
  return;
}

// DestroyObject @ 149afddf0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGMetadataRenameElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGMetadataRenameElement,1> *this)

{
  return;
}

// DestroyObject @ 149afde00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGMetadataRotatorElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGMetadataRotatorElement,1> *this)

{
  return;
}

// DestroyObject @ 149afde10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGMetadataStringOpElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGMetadataStringOpElement,1> *this)

{
  return;
}

// DestroyObject @ 149afde20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGMetadataTransformElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGMetadataTransformElement,1> *this)

{
  return;
}

// DestroyObject @ 149afde30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGMetadataTrigElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGMetadataTrigElement,1> *this)

{
  return;
}

// DestroyObject @ 149afde40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGMetadataVectorElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGMetadataVectorElement,1> *this)

{
  return;
}

// DestroyObject @ 149afde50

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGTagsToAttributeSetElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGTagsToAttributeSetElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6ce30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGAddAttributeElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGAddAttributeElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6ce40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGConvexHull2DElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGConvexHull2DElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6ce50

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGCopyAttributesElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGCopyAttributesElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6ce60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGCopyPointsElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGCopyPointsElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6ce70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGCreateAttributeElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGCreateAttributeElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6ce80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGCreateCollisionDataElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGCreateCollisionDataElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6ce90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGCreatePointsElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGCreatePointsElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6cea0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGCreatePointsGridElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGCreatePointsGridElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6ceb0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGCreatePointsSphereElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGCreatePointsSphereElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6cec0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGCreateSplineElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGCreateSplineElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6ced0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGCreateSurfaceFromSplineElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGCreateSurfaceFromSplineElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6cee0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGCreateTargetActorElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGCreateTargetActorElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6cef0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGCullPointsOutsideActorBoundsElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGCullPointsOutsideActorBoundsElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6cf00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGDataFromActorElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGDataFromActorElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6cf10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGDataFromToolElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGDataFromToolElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6cf20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGDataNumElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGDataNumElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6cf30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGDataTableRowToParamData,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGDataTableRowToParamData,1> *this)

{
  return;
}

// DestroyObject @ 149b6cf40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGDebugElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGDebugElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6cf50

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGDeleteAttributesElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGDeleteAttributesElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6cf60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGDeleteTagsElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGDeleteTagsElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6cf70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGDensityFilterElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGDensityFilterElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6cf80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGDensityRemapElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGDensityRemapElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6cf90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGDifferenceElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGDifferenceElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6cfa0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGDistanceElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGDistanceElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6cfb0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGDuplicatePointElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGDuplicatePointElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6cfc0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGElevationIsolinesElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGElevationIsolinesElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6cfd0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGExecuteBlueprintElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGExecuteBlueprintElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6cfe0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGFilterByAttributeElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGFilterByAttributeElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6cff0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGFilterByIndexElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGFilterByIndexElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6d000

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGFilterByTagElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGFilterByTagElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6d010

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGFilterByTypeElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGFilterByTypeElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6d020

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGFilterElementsByIndexElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGFilterElementsByIndexElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6d030

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGatherElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGGatherElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6d040

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGenerateLandscapeTexturesElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGGenerateLandscapeTexturesElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6d050

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGenerateSeedElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGGenerateSeedElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6d060

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGetActorDataLayersElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGGetActorDataLayersElement,1> *this)

{
  return;
}

// DestroyObject @ 149b6d070

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGetActorPropertyElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGGetActorPropertyElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07790

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGetAttributesElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGGetAttributesElement,1> *this)

{
  return;
}

// DestroyObject @ 149c077a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGetBoundsElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGGetBoundsElement,1> *this)

{
  return;
}

// DestroyObject @ 149c077b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGetConsoleVariableElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGGetConsoleVariableElement,1> *this)

{
  return;
}

// DestroyObject @ 149c077c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGetExecutionContextElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGGetExecutionContextElement,1> *this)

{
  return;
}

// DestroyObject @ 149c077d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGetLoopIndexElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGGetLoopIndexElement,1> *this)

{
  return;
}

// DestroyObject @ 149c077e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGetPropertyFromObjectPathElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGGetPropertyFromObjectPathElement,1> *this)

{
  return;
}

// DestroyObject @ 149c077f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGetResourcePathElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGGetResourcePathElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07800

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGetSplineControlPointsElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGGetSplineControlPointsElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07810

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGetStaticMeshResourceDataElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGGetStaticMeshResourceDataElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07820

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGetSubgraphDepthElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGGetSubgraphDepthElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07830

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGetTagsElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGGetTagsElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07840

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGHiGenGridSizeElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGHiGenGridSizeElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07850

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGIndirectionElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGIndirectionElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07860

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGInnerIntersectionElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGInnerIntersectionElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07870

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGInputForwardingElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGInputForwardingElement,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FPCGTaggedData,int>
            (*(FPCGTaggedData **)((this->ObjectStorage).Pad + 8),
             *(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 149c078c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGLoopElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGLoopElement,1> *this)

{
  return;
}

// DestroyObject @ 149c078d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGLoopInputForwardingElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGLoopInputForwardingElement,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FPCGTaggedData,int>
            (*(FPCGTaggedData **)((this->ObjectStorage).Pad + 8),
             *(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 149c07920

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGMakeConcreteElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGMakeConcreteElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07930

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGMatchAndSetAttributesElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGMatchAndSetAttributesElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07940

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGMergeAttributesElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGMergeAttributesElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07950

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGMergeElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGMergeElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07960

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGMutateSeedElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGMutateSeedElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07970

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGNormalToDensityElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGNormalToDensityElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07980

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGNumberOfElementsElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGNumberOfElementsElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07990

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGOuterIntersectionElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGOuterIntersectionElement,1> *this)

{
  return;
}

// DestroyObject @ 149c079a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGParseStringElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGParseStringElement,1> *this)

{
  return;
}

// DestroyObject @ 149c079b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGPartitionByActorDataLayersElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGPartitionByActorDataLayersElement,1> *this)

{
  return;
}

// DestroyObject @ 149c079c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGPathfindingElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGPathfindingElement,1> *this)

{
  return;
}

// DestroyObject @ 149c079d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGPointExtentsModifier,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGPointExtentsModifier,1> *this)

{
  return;
}

// DestroyObject @ 149c079e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGPointFromMeshElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGPointFromMeshElement,1> *this)

{
  return;
}

// DestroyObject @ 149c079f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGPointMatchAndSetElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGPointMatchAndSetElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07a00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGPointNeighborhoodElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGPointNeighborhoodElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07a10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGPrintElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGPrintElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07a20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGProjectionElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGProjectionElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07a30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGRandomChoiceElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGRandomChoiceElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07a40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGRemoveEmptyDataElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGRemoveEmptyDataElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07a50

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGReplaceTagsElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGReplaceTagsElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07a60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGRerouteElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGRerouteElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07a70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGResetPointCenterElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGResetPointCenterElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07a80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSampleTextureElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGSampleTextureElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07a90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSanityCheckPointDataElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGSanityCheckPointDataElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07aa0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSaveTextureToAssetElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGSaveTextureToAssetElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07ab0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSceneCaptureElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGSceneCaptureElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07ac0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSelectPointsElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGSelectPointsElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07ad0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSelfPruningElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGSelfPruningElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07ae0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSkinnedMeshSpawnerElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGSkinnedMeshSpawnerElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07af0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSortAttributesElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGSortAttributesElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07b00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSortTagsElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGSortTagsElement,1> *this)

{
  return;
}

// DestroyObject @ 149c07b10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSpatialNoise,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGSpatialNoise,1> *this)

{
  return;
}

// DestroyObject @ 149c61a30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGClipPathsElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGClipPathsElement,1> *this)

{
  return;
}

// DestroyObject @ 149c61a40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGCreatePolygonElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGCreatePolygonElement,1> *this)

{
  return;
}

// DestroyObject @ 149c61a50

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGetLandscapeDataElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGGetLandscapeDataElement,1> *this)

{
  return;
}

// DestroyObject @ 149c61a60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGetSegmentElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGGetSegmentElement,1> *this)

{
  return;
}

// DestroyObject @ 149c61a70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSpawnActorElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGSpawnActorElement,1> *this)

{
  return;
}

// DestroyObject @ 149c61a80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSpawnSplineElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGSpawnSplineElement,1> *this)

{
  return;
}

// DestroyObject @ 149c61a90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSpawnSplineMeshElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGSpawnSplineMeshElement,1> *this)

{
  return;
}

// DestroyObject @ 149c61aa0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSplineDirectionElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGSplineDirectionElement,1> *this)

{
  return;
}

// DestroyObject @ 149c61ab0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSplineIntersectionElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGSplineIntersectionElement,1> *this)

{
  return;
}

// DestroyObject @ 149c61ac0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSplineSamplerElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGSplineSamplerElement,1> *this)

{
  return;
}

// DestroyObject @ 149c61ad0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSplitPointsElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGSplitPointsElement,1> *this)

{
  return;
}

// DestroyObject @ 149c61ae0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSplitSplineElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGSplitSplineElement,1> *this)

{
  return;
}

// DestroyObject @ 149c61af0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGStaticMeshSpawnerElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGStaticMeshSpawnerElement,1> *this)

{
  return;
}

// DestroyObject @ 149c61b00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSurfaceSamplerElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGSurfaceSamplerElement,1> *this)

{
  return;
}

// DestroyObject @ 149c61b10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGTextureSamplerElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGTextureSamplerElement,1> *this)

{
  return;
}

// DestroyObject @ 149c61b20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGTransformPointsElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGTransformPointsElement,1> *this)

{
  return;
}

// DestroyObject @ 149c61b30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGTrivialElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGTrivialElement,1> *this)

{
  return;
}

// DestroyObject @ 149c61b40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGUnionElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGUnionElement,1> *this)

{
  return;
}

// DestroyObject @ 149c61b50

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGUserParameterGetElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGUserParameterGetElement,1> *this)

{
  return;
}

// DestroyObject @ 149c61b60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGVisualizeAttribute,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGVisualizeAttribute,1> *this)

{
  return;
}

// DestroyObject @ 149c61b70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGVolumeSamplerElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGVolumeSamplerElement,1> *this)

{
  return;
}

// DestroyObject @ 149c61b80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGWorldRayHitQueryElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGWorldRayHitQueryElement,1> *this)

{
  return;
}

// DestroyObject @ 149c61b90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGWorldRaycastElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGWorldRaycastElement,1> *this)

{
  return;
}

// DestroyObject @ 149c61ba0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGWorldVolumetricQueryElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGWorldVolumetricQueryElement,1> *this)

{
  return;
}

// TIntrusiveReferenceController<FPCGGenericElement,1><TFunction<bool___cdecl(FPCGContext_*)>_&,TFunction<void___cdecl(FPCGContext_*)>_&,bool_&> @ 149c97470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TIntrusiveReferenceController<FPCGGenericElement,1> * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGenericElement,1>::
TIntrusiveReferenceController<FPCGGenericElement,1><TFunction<bool___cdecl(FPCGContext_*)>_&,TFunction<void___cdecl(FPCGContext_*)>_&,bool_&>
          (TIntrusiveReferenceController<FPCGGenericElement,1> *this,
          TFunction<bool___cdecl(FPCGContext_*)> *param_1,
          TFunction<void___cdecl(FPCGContext_*)> *param_2,bool *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_b8 [3];
  longlong *local_a0;
  longlong local_98;
  longlong local_88 [3];
  longlong *local_70;
  code *local_68;
  undefined **local_58;
  code *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  *(undefined4 *)&this->_padding_ = 1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  this->_padding_ =
       (longlong)
       &___7__TIntrusiveReferenceController_VFPCGGenericElement___00_SharedPointerInternals__6B_;
  bVar1 = *param_3;
  local_58 = &
             ___7__TFunction_OwnedObject_P6APEAUFPCGContext__AEBUFPCGInitializeElementParams___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_40 = (undefined ***)0x0;
  local_50 = ::<lambda_31_>::<lambda_invoker_cdecl>;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<FPCGContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),FPCGContext_*,FPCGInitializeElementParams_const_&>
             ::Call;
  local_98 = *(longlong *)param_2;
  local_70 = (longlong *)0x0;
  if (*(longlong *)param_2 != 0) {
    puVar2 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,local_88);
  }
  local_c8 = *(longlong *)param_1;
  local_a0 = (longlong *)0x0;
  if (local_c8 != 0) {
    puVar2 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,local_b8);
  }
  (this->ObjectStorage).Pad[0x38] = '\0';
  (this->ObjectStorage).Pad[0x39] = '\0';
  (this->ObjectStorage).Pad[0x3a] = '\0';
  (this->ObjectStorage).Pad[0x3b] = '\0';
  (this->ObjectStorage).Pad[0x3c] = '\0';
  (this->ObjectStorage).Pad[0x3d] = '\0';
  (this->ObjectStorage).Pad[0x3e] = '\0';
  (this->ObjectStorage).Pad[0x3f] = '\0';
  *(undefined ***)(this->ObjectStorage).Pad = &___7FPCGGenericElement__6B_;
  *(longlong *)((this->ObjectStorage).Pad + 0x10) = local_c8;
  if (local_c8 != 0) {
    plVar3 = local_b8;
    if (local_a0 != (longlong *)0x0) {
      plVar3 = local_a0;
    }
    (**(code **)*plVar3)(plVar3,(this->ObjectStorage).Pad + 0x20);
  }
  *(longlong *)((this->ObjectStorage).Pad + 0x40) = local_98;
  (this->ObjectStorage).Pad[0x68] = '\0';
  (this->ObjectStorage).Pad[0x69] = '\0';
  (this->ObjectStorage).Pad[0x6a] = '\0';
  (this->ObjectStorage).Pad[0x6b] = '\0';
  (this->ObjectStorage).Pad[0x6c] = '\0';
  (this->ObjectStorage).Pad[0x6d] = '\0';
  (this->ObjectStorage).Pad[0x6e] = '\0';
  (this->ObjectStorage).Pad[0x6f] = '\0';
  if (local_98 != 0) {
    plVar3 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar3 = local_70;
    }
    (**(code **)*plVar3)();
  }
  (this->ObjectStorage).Pad[0x70] = bVar1;
  (this->ObjectStorage).Pad[0x71] = '\x01';
  *(code **)((this->ObjectStorage).Pad + 0x80) = local_68;
  (this->ObjectStorage).Pad[0xa8] = '\0';
  (this->ObjectStorage).Pad[0xa9] = '\0';
  (this->ObjectStorage).Pad[0xaa] = '\0';
  (this->ObjectStorage).Pad[0xab] = '\0';
  (this->ObjectStorage).Pad[0xac] = '\0';
  (this->ObjectStorage).Pad[0xad] = '\0';
  (this->ObjectStorage).Pad[0xae] = '\0';
  (this->ObjectStorage).Pad[0xaf] = '\0';
  if (local_68 != (code *)0x0) {
    pppuVar4 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar4 = local_40;
    }
    (*(code *)**pppuVar4)();
  }
  if (local_c8 != 0) {
    plVar3 = local_b8;
    if (local_a0 != (longlong *)0x0) {
      plVar3 = local_a0;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_98 != 0) {
    plVar3 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar3 = local_70;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_68 != (code *)0x0) {
    pppuVar4 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar4 = local_40;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return this;
}

// TIntrusiveReferenceController<FPCGGenericElement,1><TFunction<bool___cdecl(FPCGContext_*)>_const_&,TFunction<void___cdecl(FPCGContext_*)>_const_&,bool_const_&,bool_const_&> @ 149c97640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TIntrusiveReferenceController<FPCGGenericElement,1> * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGenericElement,1>::
TIntrusiveReferenceController<FPCGGenericElement,1><TFunction<bool___cdecl(FPCGContext_*)>_const_&,TFunction<void___cdecl(FPCGContext_*)>_const_&,bool_const_&,bool_const_&>
          (TIntrusiveReferenceController<FPCGGenericElement,1> *this,
          TFunction<bool___cdecl(FPCGContext_*)> *param_1,
          TFunction<void___cdecl(FPCGContext_*)> *param_2,bool *param_3,bool *param_4)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined ***pppuVar5;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_b8 [3];
  longlong *local_a0;
  longlong local_98;
  longlong local_88 [3];
  longlong *local_70;
  code *local_68;
  undefined **local_58;
  code *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ =
       (longlong)
       &___7__TIntrusiveReferenceController_VFPCGGenericElement___00_SharedPointerInternals__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  bVar1 = *param_3;
  local_58 = &
             ___7__TFunction_OwnedObject_P6APEAUFPCGContext__AEBUFPCGInitializeElementParams___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_40 = (undefined ***)0x0;
  local_50 = ::<lambda_32_>::<lambda_invoker_cdecl>;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<FPCGContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),FPCGContext_*,FPCGInitializeElementParams_const_&>
             ::Call;
  local_70 = (longlong *)0x0;
  bVar2 = *param_4;
  local_98 = *(longlong *)param_2;
  if (*(longlong *)param_2 != 0) {
    puVar3 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar3)(puVar3,local_88);
  }
  local_c8 = *(longlong *)param_1;
  local_a0 = (longlong *)0x0;
  if (local_c8 != 0) {
    puVar3 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar3)(puVar3,local_b8);
  }
  (this->ObjectStorage).Pad[0x38] = '\0';
  (this->ObjectStorage).Pad[0x39] = '\0';
  (this->ObjectStorage).Pad[0x3a] = '\0';
  (this->ObjectStorage).Pad[0x3b] = '\0';
  (this->ObjectStorage).Pad[0x3c] = '\0';
  (this->ObjectStorage).Pad[0x3d] = '\0';
  (this->ObjectStorage).Pad[0x3e] = '\0';
  (this->ObjectStorage).Pad[0x3f] = '\0';
  *(undefined ***)(this->ObjectStorage).Pad = &___7FPCGGenericElement__6B_;
  *(longlong *)((this->ObjectStorage).Pad + 0x10) = local_c8;
  if (local_c8 != 0) {
    plVar4 = local_b8;
    if (local_a0 != (longlong *)0x0) {
      plVar4 = local_a0;
    }
    (**(code **)*plVar4)(plVar4,(this->ObjectStorage).Pad + 0x20);
  }
  *(longlong *)((this->ObjectStorage).Pad + 0x40) = local_98;
  (this->ObjectStorage).Pad[0x68] = '\0';
  (this->ObjectStorage).Pad[0x69] = '\0';
  (this->ObjectStorage).Pad[0x6a] = '\0';
  (this->ObjectStorage).Pad[0x6b] = '\0';
  (this->ObjectStorage).Pad[0x6c] = '\0';
  (this->ObjectStorage).Pad[0x6d] = '\0';
  (this->ObjectStorage).Pad[0x6e] = '\0';
  (this->ObjectStorage).Pad[0x6f] = '\0';
  if (local_98 != 0) {
    plVar4 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar4 = local_70;
    }
    (**(code **)*plVar4)();
  }
  (this->ObjectStorage).Pad[0x70] = bVar1;
  (this->ObjectStorage).Pad[0x71] = bVar2;
  *(code **)((this->ObjectStorage).Pad + 0x80) = local_68;
  (this->ObjectStorage).Pad[0xa8] = '\0';
  (this->ObjectStorage).Pad[0xa9] = '\0';
  (this->ObjectStorage).Pad[0xaa] = '\0';
  (this->ObjectStorage).Pad[0xab] = '\0';
  (this->ObjectStorage).Pad[0xac] = '\0';
  (this->ObjectStorage).Pad[0xad] = '\0';
  (this->ObjectStorage).Pad[0xae] = '\0';
  (this->ObjectStorage).Pad[0xaf] = '\0';
  if (local_68 != (code *)0x0) {
    pppuVar5 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar5 = local_40;
    }
    (*(code *)**pppuVar5)();
  }
  if (local_c8 != 0) {
    plVar4 = local_b8;
    if (local_a0 != (longlong *)0x0) {
      plVar4 = local_a0;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_98 != 0) {
    plVar4 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar4 = local_70;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_68 != (code *)0x0) {
    pppuVar5 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar5 = local_40;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  return this;
}

// DestroyObject @ 149cbe370

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGComponentOctreeID,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGComponentOctreeID,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000149cbe390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 149cbe3a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGraphActiveTask,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGGraphActiveTask,1> *this)

{
  FPCGGraphActiveTask::~FPCGGraphActiveTask((FPCGGraphActiveTask *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 149cbe3b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGLandscapeCacheEntry,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGLandscapeCacheEntry,1> *this)

{
  void *pvVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)((this->ObjectStorage).Pad + 0x78));
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)
              ((this->ObjectStorage).Pad + 0x68),*(int *)((this->ObjectStorage).Pad + 0x70));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x68);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x58);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FBulkData::~FBulkData((FBulkData *)((this->ObjectStorage).Pad + 0x30));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 149cbe420

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGStackContext,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGStackContext,1> *this)

{
  void *pvVar1;
  
  DestructItems<FPCGStack,int>
            (*(FPCGStack **)((this->ObjectStorage).Pad + 8),
             *(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 149cbe460

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGraphExecutor::FGameThreadHandler,1>::
DestroyObject(TIntrusiveReferenceController<FPCGGraphExecutor::FGameThreadHandler,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000149cbe480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 149cbe490

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGCreateSurfaceFromPolygon2DElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGCreateSurfaceFromPolygon2DElement,1> *this)

{
  return;
}

// DestroyObject @ 149cbe4a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGFetchInputElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGFetchInputElement,1> *this)

{
  return;
}

// DestroyObject @ 149cbe4b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGenericElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGGenericElement,1> *this)

{
  FPCGGenericElement::~FPCGGenericElement((FPCGGenericElement *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 149cbe4c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<PCGGraphExecutor::FPCGGridLinkageElement,1>::
DestroyObject(TIntrusiveReferenceController<PCGGraphExecutor::FPCGGridLinkageElement,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0xc0);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FPCGGenericElement::~FPCGGenericElement((FPCGGenericElement *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 149cbe4f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGOffsetPolygonElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGOffsetPolygonElement,1> *this)

{
  return;
}

// DestroyObject @ 149cbe500

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGPolygon2DOperationElement,1>::
DestroyObject(TIntrusiveReferenceController<FPCGPolygon2DOperationElement,1> *this)

{
  return;
}

// DestroyObject @ 149cbe510

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGPreGraphElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGPreGraphElement,1> *this)

{
  return;
}

// DestroyObject @ 149e54f10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGMetadataDomain,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGMetadataDomain,1> *this)

{
  FPCGMetadataDomain::~FPCGMetadataDomain((FPCGMetadataDomain *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 149efb9c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`UPCGComponent::CreateCleanupTask'::__l2::FCleanupContext,1>::
DestroyObject(void *this)

{
  *(undefined4 *)((longlong)this + 0x60) = 0;
  if (*(void **)((longlong)this + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x58));
  }
  TSparseArray<TSparseSetElement<TSoftObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSoftObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TSoftObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x18));
  return;
}

// DestroyObject @ 149efba00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FComputeGraphInstance,1>::DestroyObject
          (TIntrusiveReferenceController<FComputeGraphInstance,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 149efba20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGInputOutputElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGInputOutputElement,1> *this)

{
  return;
}

// DestroyObject @ 149f41aa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGraphExecutor,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGGraphExecutor,1> *this)

{
  FPCGGraphExecutor::~FPCGGraphExecutor((FPCGGraphExecutor *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 149f41ab0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSubgraphElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGSubgraphElement,1> *this)

{
  return;
}

// DestroyObject @ 149ff4da0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGBadOutputNodeElement,1>::DestroyObject
          (TIntrusiveReferenceController<FPCGBadOutputNodeElement,1> *this)

{
  return;
}

